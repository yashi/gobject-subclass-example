/* Declaration Begin */

#include <glib-object.h>


#define MY_TYPE_FOO (my_foo_get_type())
G_DECLARE_FINAL_TYPE (MyFoo, my_foo, MY, FOO, GObject)

/* Declaration End */
/* Definition Begin */

struct _MyFoo
{
        GObject parent_class;
};

G_DEFINE_TYPE(MyFoo, my_foo, G_TYPE_OBJECT)

static void
my_foo_class_init (MyFooClass * klass)
{
	g_print("class init\n");
}

static void
my_foo_init (MyFoo * noop)
{
	g_print("instance init\n");
}

MyFoo * my_foo_new(void)
{
	return (MyFoo*) g_type_create_instance(MY_TYPE_FOO);
}

/* Definition End */

int main()
{
	g_print("main\n");
	my_foo_new();
	my_foo_new();
	return 0;
}

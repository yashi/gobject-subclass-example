class My.Foo {
		static construct {
				stdout.printf("class init\n");
		}
		public Foo() {
				stdout.printf("instance init\n");
		}
}

public static int main(string[] args) {
        stdout.printf("main\n");
		new My.Foo();
		new My.Foo();

        return 0;
}

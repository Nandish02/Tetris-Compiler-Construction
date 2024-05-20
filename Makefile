build: 
	bison -d -r all a2version2.y ; flex extetrickscanner.l ;  gcc extetrickstype.c lex.yy.c a2version2.tab.c

test:
	./a.out < test1.tetris 2>/dev/null > output1.py
	./a.out < test2.tetris 2>/dev/null > output2.py
	./a.out < test3.tetris 2>/dev/null > output3.py

run:
	python3 output1.py
	python3 output2.py
	python3 output3.py

clean:
	rm -f a.out lex.yy.c a2version2.tab.c a2version2.tab.h output1.py output2.py output3.py a2version2.output
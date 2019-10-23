all:
	g++ -std=c++11 main.cpp QS.cpp -o ex

clean:
	rm -f ex
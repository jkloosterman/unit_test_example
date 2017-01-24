all: euler_4_driver euler_4_tests

euler_4_driver: euler_4.cpp euler_4_driver.cpp
	g++ -std=c++11 -Wall -g -o euler_4_driver euler_4_driver.cpp euler_4.cpp

euler_4_tests: euler_4.cpp euler_4_tests.cpp *.h
	g++ -std=c++11 -Wall -g -o euler_4_tests euler_4_tests.cpp euler_4.cpp

clean:
	rm -f euler_4_driver euler_4_tests

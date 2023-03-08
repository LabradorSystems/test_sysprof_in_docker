test_sysprof_in_docker: test_sysprof_in_docker.cpp
	g++ -o test_sysprof_in_docker test_sysprof_in_docker.cpp -I. -I./lib/eigen -O0 -g

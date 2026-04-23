build:
	verilator --binary mux.v tb.v

run:
	./obj_dir/Vmux

all: build run


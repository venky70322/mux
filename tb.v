module tb;

reg a,b,sel;
wire y;

mux dut(a,b,sel,y);

initial begin
$display("a b sel | y");

a=0; b=0; sel=0; #10;
$display("%b %b  %b  | %b",a,b,sel,y);

a=0; b=1; sel=0; #10;
$display("%b %b  %b  | %b",a,b,sel,y);

a=1; b=0; sel=0; #10;
$display("%b %b  %b  | %b",a,b,sel,y);

a=1; b=1; sel=0; #10;
$display("%b %b  %b  | %b",a,b,sel,y);

a=0; b=0; sel=1; #10;
$display("%b %b  %b  | %b",a,b,sel,y);

a=0; b=1; sel=1; #10;
$display("%b %b  %b  | %b",a,b,sel,y);

a=1; b=0; sel=1; #10;
$display("%b %b  %b  | %b",a,b,sel,y);

a=1; b=1; sel=1; #10;
$display("%b %b  %b  | %b",a,b,sel,y);

$finish;
end

endmodule

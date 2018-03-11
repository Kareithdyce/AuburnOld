.386
.model flat,stdcall
.stack 4096
ExitProcess proto,dwExitCode:dword

.data
val1 SBYTE 10
val2 SBYTE 12
val3	SBYTE -2
sum SBYTE ?

.code
main proc
	mov eax, 0
	mov al,val1				
	add al,val2		
	add al,val3
	mov sum,al	

	invoke ExitProcess,0
main endp
end main
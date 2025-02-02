; nasm -f elf64 && gcc -no-pie hola.o && ./a.out
	global   main
	extern   puts

	section .text

main:
	mov	rdi, message
	call	puts
	ret
message:
	db	"Hola, mundo", 0

section .note.GNU-stack noalloc noexec nowrite progbits

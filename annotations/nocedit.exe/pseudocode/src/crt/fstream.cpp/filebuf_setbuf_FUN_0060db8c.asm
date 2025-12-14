; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack streambuf * crt_fstream.cpp_filebuf_setbuf_FUN_0060db8c(filebuf * this_ptr, char * buffer_ptr, int buffer_size)
;
; Parameters:
; filebuf *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   buffer_ptr
; int              Stack[0xc]:4   buffer_size
;
; Called Functions:
;   crt_iostream.cpp_setBuffer_FUN_0060d6a8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060db8c
        ;   Label: crt_fstream.cpp_filebuf_setbuf_FUN_0060db8c
    MOV EBX,dword ptr [ESP + 0x8]       ; 0060db8d
    MOV ECX,dword ptr [ESP + 0xc]       ; 0060db91
    MOV EDX,dword ptr [ESP + 0x10]      ; 0060db95
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0060db99
    CMP EAX,-0x1                        ; 0060db9c
    JZ 0x0060dba8                       ; 0060db9f
        ;   XREF to: 0060dba8 (CONDITIONAL_JUMP)  ; LAB_0060dba8
    MOV EAX,dword ptr [EBX + 0x4]       ; 0060dba1
    TEST EAX,EAX                        ; 0060dba4
    JNZ 0x0060dbbf                      ; 0060dba6
        ;   XREF to: 0060dbbf (CONDITIONAL_JUMP)  ; LAB_0060dbbf
    TEST ECX,ECX                        ; 0060dba8
        ;   Label: LAB_0060dba8
    JNZ 0x0060dbc5                      ; 0060dbaa
        ;   XREF to: 0060dbc5 (CONDITIONAL_JUMP)  ; LAB_0060dbc5
    PUSH 0x0                            ; 0060dbac
        ;   Label: LAB_0060dbac
    PUSH 0x0                            ; 0060dbae
    PUSH 0x0                            ; 0060dbb0
    PUSH EBX                            ; 0060dbb2
        ;   Label: LAB_0060dbb2
    CALL crt_iostream.cpp_setBuffer_FUN_0060d6a8 ; 0060dbb3
        ;   XREF to: 0060d6a8 (UNCONDITIONAL_CALL)  ; void crt_iostream.cpp_setBuffer_FUN_0060d6a8(streambuf * this_ptr, void * new_buffer, void * buffer_end, int ownership_flag)
    ADD ESP,0x10                        ; 0060dbb8
    MOV EAX,EBX                         ; 0060dbbb
    POP EBX                             ; 0060dbbd
    RET                                 ; 0060dbbe
    XOR EBX,EBX                         ; 0060dbbf
        ;   Label: LAB_0060dbbf
    MOV EAX,EBX                         ; 0060dbc1
    POP EBX                             ; 0060dbc3
    RET                                 ; 0060dbc4
    TEST EDX,EDX                        ; 0060dbc5
        ;   Label: LAB_0060dbc5
    JLE 0x0060dbac                      ; 0060dbc7
        ;   XREF to: 0060dbac (CONDITIONAL_JUMP)  ; LAB_0060dbac
    CMP EDX,0x4                         ; 0060dbc9
    JLE 0x0060dbd7                      ; 0060dbcc
        ;   XREF to: 0060dbd7 (CONDITIONAL_JUMP)  ; LAB_0060dbd7
    PUSH 0x0                            ; 0060dbce
    LEA EAX,[ECX + EDX*0x1]             ; 0060dbd0
    PUSH EAX                            ; 0060dbd3
    PUSH ECX                            ; 0060dbd4
    JMP 0x0060dbb2                      ; 0060dbd5
        ;   XREF to: 0060dbb2 (UNCONDITIONAL_JUMP)  ; LAB_0060dbb2
    PUSH 0x0                            ; 0060dbd7
        ;   Label: LAB_0060dbd7
    PUSH 0x0                            ; 0060dbd9
    PUSH 0x0                            ; 0060dbdb
    PUSH EBX                            ; 0060dbdd
    CALL crt_iostream.cpp_setBuffer_FUN_0060d6a8 ; 0060dbde
        ;   XREF to: 0060d6a8 (UNCONDITIONAL_CALL)  ; void crt_iostream.cpp_setBuffer_FUN_0060d6a8(streambuf * this_ptr, void * new_buffer, void * buffer_end, int ownership_flag)
    ADD ESP,0x10                        ; 0060dbe3
    JMP 0x0060dbbf                      ; 0060dbe6
        ;   XREF to: 0060dbbf (UNCONDITIONAL_JUMP)  ; LAB_0060dbbf


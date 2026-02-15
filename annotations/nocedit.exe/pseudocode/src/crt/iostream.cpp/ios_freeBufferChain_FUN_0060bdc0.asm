; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_iostream_cpp_ios_freeBufferChain_FUN_0060bdc0(ios *stream_ptr)
;
; Parameters:
; ios *            Stack[0x4]:4   stream_ptr
;
; XREF[1]:
;   crt_iostream.cpp_ios_dtor_FUN_0060632c at 00606340
;
; Called Functions:
;   crt_iostream.cpp_freeBuffer_FUN_0060d7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060bdc0
        ;   Label: crt_iostream.cpp_ios_freeBufferChain_FUN_0060bdc0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0060bdc1
    MOV EAX,dword ptr [EAX + 0x20]      ; 0060bdc5
    TEST EAX,EAX                        ; 0060bdc8
        ;   Label: LAB_0060bdc8
    JNZ 0x0060bdce                      ; 0060bdca
        ;   XREF to: 0060bdce (CONDITIONAL_JUMP)  ; LAB_0060bdce
    POP EBX                             ; 0060bdcc
    RET                                 ; 0060bdcd
    PUSH EAX                            ; 0060bdce
        ;   Label: LAB_0060bdce
    MOV EBX,dword ptr [EAX]             ; 0060bdcf
    CALL crt_iostream.cpp_freeBuffer_FUN_0060d7a0 ; 0060bdd1
        ;   XREF to: 0060d7a0 (UNCONDITIONAL_CALL)  ; void crt_iostream.cpp_freeBuffer_FUN_0060d7a0(void * buffer)
    ADD ESP,0x4                         ; 0060bdd6
    MOV EAX,EBX                         ; 0060bdd9
    JMP 0x0060bdc8                      ; 0060bddb
        ;   XREF to: 0060bdc8 (UNCONDITIONAL_JUMP)  ; LAB_0060bdc8


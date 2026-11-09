; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_trisock_cpp_FUN_0057b7a0(int param_1)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0057b7a0
        ;   Label: unkafter_trisock.cpp_FUN_0057b7a0
    PUSH 0x5fd370                       ; 0057b7a4
    PUSH 0xc                            ; 0057b7a9
    ADD EAX,0x288                       ; 0057b7ab
    PUSH EAX                            ; 0057b7b0
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0057b7b1
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 0057b7b6
    SUB EAX,0x288                       ; 0057b7b9
    RET                                 ; 0057b7be


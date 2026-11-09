; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_trisock_cpp_FUN_0059f320(int param_1)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059f320
        ;   Label: unkafter_trisock.cpp_FUN_0059f320
    PUSH 0x607310                       ; 0059f324
    PUSH 0xc                            ; 0059f329
    ADD EAX,0x288                       ; 0059f32b
    PUSH EAX                            ; 0059f330
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0059f331
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 0059f336
    SUB EAX,0x288                       ; 0059f339
    RET                                 ; 0059f33e


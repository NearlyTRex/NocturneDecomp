; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_zombie_cpp_FUN_005cab44(undefined4 param_1)
;
;
; XREF[1]:
;   unkafter_zombie.cpp_FUN_005cadb4 at 005cadc2
;
; Called Functions:
;   crt_unknown.c_FUN_005c8bc0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005cab44
        ;   Label: unkafter_zombie.cpp_FUN_005cab44
    PUSH EDX                            ; 005cab48
    CALL crt_unknown.c_FUN_005c8bc0     ; 005cab49
        ;   XREF to: 005c8bc0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c8bc0()
    ADD ESP,0x4                         ; 005cab4e
    RET                                 ; 005cab51


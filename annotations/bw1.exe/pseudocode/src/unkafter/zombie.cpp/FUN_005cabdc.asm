; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_zombie_cpp_FUN_005cabdc(void)
;
;
; XREF[1]:
;   unkafter_zombie.cpp_FUN_005cadb4 at 005cae6f
;
; Called Functions:
;   unkafter_zombie.cpp_FUN_005caa60
;
; *****************************************************************************

section .text

    PUSH 0x2c9ff50                      ; 005cabdc
        ;   Label: unkafter_zombie.cpp_FUN_005cabdc
    CALL unkafter_zombie.cpp_FUN_005caa60 ; 005cabe1
        ;   XREF to: 005caa60 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005caa60()
    ADD ESP,0x4                         ; 005cabe6
    RET                                 ; 005cabe9


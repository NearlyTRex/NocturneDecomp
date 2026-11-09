; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_zombie_cpp_FUN_005cabec(void)
;
;
; XREF[1]:
;   unkafter_zombie.cpp_FUN_005cadb4 at 005cae5a
;
; Called Functions:
;   unkafter_zombie.cpp_FUN_005caac4
;
; *****************************************************************************

section .text

    PUSH 0x2c9ff50                      ; 005cabec
        ;   Label: unkafter_zombie.cpp_FUN_005cabec
    CALL unkafter_zombie.cpp_FUN_005caac4 ; 005cabf1
        ;   XREF to: 005caac4 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005caac4()
    ADD ESP,0x4                         ; 005cabf6
    RET                                 ; 005cabf9


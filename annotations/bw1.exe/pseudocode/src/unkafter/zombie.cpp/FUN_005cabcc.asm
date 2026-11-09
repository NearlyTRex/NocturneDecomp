; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_zombie_cpp_FUN_005cabcc(void)
;
;
; XREF[1]:
;   unkafter_zombie.cpp_FUN_005cadb4 at 005cae04
;
; Called Functions:
;   unkafter_zombie.cpp_FUN_005caac4
;
; *****************************************************************************

section .text

    PUSH 0x2c9ff40                      ; 005cabcc
        ;   Label: unkafter_zombie.cpp_FUN_005cabcc
    CALL unkafter_zombie.cpp_FUN_005caac4 ; 005cabd1
        ;   XREF to: 005caac4 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005caac4()
    ADD ESP,0x4                         ; 005cabd6
    RET                                 ; 005cabd9


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_zombie_cpp_FUN_005cab9c(void)
;
;
; XREF[1]:
;   unkafter_zombie.cpp_FUN_005cadb4 at 005cae1d
;
; Called Functions:
;   unkafter_zombie.cpp_FUN_005caa60
;
; *****************************************************************************

section .text

    PUSH 0x2c9f810                      ; 005cab9c
        ;   Label: unkafter_zombie.cpp_FUN_005cab9c
    CALL unkafter_zombie.cpp_FUN_005caa60 ; 005caba1
        ;   XREF to: 005caa60 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005caa60()
    ADD ESP,0x4                         ; 005caba6
    RET                                 ; 005caba9


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_zombie_cpp_FUN_005caaec(void)
;
;
; XREF[1]:
;   unkafter_zombie.cpp_FUN_005cadb4 at 005cadcc
;
; Called Functions:
;   unkafter_zombie.cpp_FUN_005caa60
;
; *****************************************************************************

section .text

    PUSH 0x2c9f800                      ; 005caaec
        ;   Label: unkafter_zombie.cpp_FUN_005caaec
    CALL unkafter_zombie.cpp_FUN_005caa60 ; 005caaf1
        ;   XREF to: 005caa60 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005caa60()
    ADD ESP,0x4                         ; 005caaf6
    RET                                 ; 005caaf9


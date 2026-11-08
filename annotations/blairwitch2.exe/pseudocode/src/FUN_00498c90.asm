; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00498c90(void)
;
;
; XREF[1]:
;   FUN_0049d1c0 at 0049d220
;
; Referenced Globals:
;   TerminatedCString s_debris01_kfm_005d54d2
;   TerminatedCString s_debris02_kfm_005d54df
;   TerminatedCString s_debris03_kfm_005d54ec
;   TerminatedCString s_debris04_kfm_005d54f9
;   TerminatedCString s_debris05_kfm_005d5506
;
; Called Functions:
;   FUN_0044fd00
;   FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH 0x5d54d2                       ; 00498c90 | = "debris01.kfm"
        ;   Label: FUN_00498c90
    PUSH 0x1c3ec5c                      ; 00498c95
    CALL FUN_0044fd70                   ; 00498c9a
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 00498c9f
    PUSH 0x5d54df                       ; 00498ca2 | = "debris02.kfm"
    PUSH 0x1c3edd8                      ; 00498ca7
    CALL FUN_0044fd70                   ; 00498cac
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 00498cb1
    PUSH 0x5d54ec                       ; 00498cb4 | = "debris03.kfm"
    PUSH 0x1c3ef54                      ; 00498cb9
    CALL FUN_0044fd70                   ; 00498cbe
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 00498cc3
    PUSH 0x5d54f9                       ; 00498cc6 | = "debris04.kfm"
    PUSH 0x1c3f0d0                      ; 00498ccb
    CALL FUN_0044fd70                   ; 00498cd0
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 00498cd5
    PUSH 0x5d5506                       ; 00498cd8 | = "debris05.kfm"
    PUSH 0x1c3f24c                      ; 00498cdd
    CALL FUN_0044fd70                   ; 00498ce2
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 00498ce7
    PUSH 0x1c3ec5c                      ; 00498cea
    CALL FUN_0044fd00                   ; 00498cef
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 00498cf4
    PUSH 0x1c3edd8                      ; 00498cf7
    CALL FUN_0044fd00                   ; 00498cfc
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 00498d01
    PUSH 0x1c3ef54                      ; 00498d04
    CALL FUN_0044fd00                   ; 00498d09
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 00498d0e
    PUSH 0x1c3f0d0                      ; 00498d11
    CALL FUN_0044fd00                   ; 00498d16
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 00498d1b
    PUSH 0x1c3f24c                      ; 00498d1e
    CALL FUN_0044fd00                   ; 00498d23
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 00498d28
    RET                                 ; 00498d2b


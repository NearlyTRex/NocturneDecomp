; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049c680(void)
;
;
; XREF[1]:
;   FUN_004a24a0 at 004a2552
;
; Referenced Globals:
;   TerminatedCString s_debris01_kfm_005c0648
;   TerminatedCString s_debris02_kfm_005c0655
;   TerminatedCString s_debris03_kfm_005c0662
;   TerminatedCString s_debris04_kfm_005c066f
;   TerminatedCString s_debris05_kfm_005c067c
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   FUN_00462580
;   FUN_004625f0
;   FUN_004a42f0
;
; *****************************************************************************

section .text

    PUSH 0x5c0648                       ; 0049c680 | = "debris01.kfm"
        ;   Label: FUN_0049c680
    PUSH 0x1c743fc                      ; 0049c685
    CALL FUN_004625f0                   ; 0049c68a
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 0049c68f
    PUSH 0x5c0655                       ; 0049c692 | = "debris02.kfm"
    PUSH 0x1c74578                      ; 0049c697
    CALL FUN_004625f0                   ; 0049c69c
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 0049c6a1
    PUSH 0x5c0662                       ; 0049c6a4 | = "debris03.kfm"
    PUSH 0x1c746f4                      ; 0049c6a9
    CALL FUN_004625f0                   ; 0049c6ae
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 0049c6b3
    PUSH 0x5c066f                       ; 0049c6b6 | = "debris04.kfm"
    PUSH 0x1c74870                      ; 0049c6bb
    CALL FUN_004625f0                   ; 0049c6c0
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 0049c6c5
    PUSH 0x5c067c                       ; 0049c6c8 | = "debris05.kfm"
    PUSH 0x1c749ec                      ; 0049c6cd
    CALL FUN_004625f0                   ; 0049c6d2
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 0049c6d7
    PUSH 0x1c743fc                      ; 0049c6da
    CALL FUN_00462580                   ; 0049c6df
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 0049c6e4
    PUSH 0x1c74578                      ; 0049c6e7
    CALL FUN_00462580                   ; 0049c6ec
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 0049c6f1
    PUSH 0x1c746f4                      ; 0049c6f4
    CALL FUN_00462580                   ; 0049c6f9
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 0049c6fe
    PUSH 0x1c74870                      ; 0049c701
    CALL FUN_00462580                   ; 0049c706
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 0049c70b
    PUSH 0x1c749ec                      ; 0049c70e
    CALL FUN_00462580                   ; 0049c713
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 0049c718
    PUSH 0x0                            ; 0049c71b
    MOV EDX,dword ptr [0x005fc5a0]      ; 0049c71d | DAT_005fc5a0
    PUSH EDX                            ; 0049c723
    CALL FUN_004a42f0                   ; 0049c724
        ;   XREF to: 004a42f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a42f0()
    ADD ESP,0x8                         ; 0049c729
    RET                                 ; 0049c72c


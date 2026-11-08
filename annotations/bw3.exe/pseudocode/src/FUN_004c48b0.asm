; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c48b0(void)
;
;
; XREF[1]:
;   FUN_004b7f90 at 004b81ef
;
; Referenced Globals:
;   undefined4 s_cursor_005c3c5f+1
;   TerminatedCString s_upwhite_005c3c67
;   TerminatedCString s_downwhite_005c3c6f
;   TerminatedCString s_leftwhite_005c3c79
;   TerminatedCString s_rightwhite_005c3c83
;   TerminatedCString s_crosshairsgreen_005c3c8e
;   TerminatedCString s_crosshairsred_005c3c9e
;   undefined4 DAT_005c3cac
;   undefined4 DAT_01d22bec
;   undefined4 DAT_01d22bf0
;   undefined4 DAT_01d22bf4
;   undefined4 DAT_01d22bf8
;   undefined4 DAT_01d22bfc
;   undefined4 DAT_01d22c00
;   undefined4 DAT_01d22c04
;   ... and 9 more
;
; Called Functions:
;   FUN_0040d400
;   FUN_0040d460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c48b0
        ;   Label: FUN_004c48b0
    PUSH ESI                            ; 004c48b1
    PUSH EBP                            ; 004c48b2
    MOV EBX,0x1d22b4c                   ; 004c48b3
    LEA ESI,[EBX + 0xa0]                ; 004c48b8
    PUSH EBX                            ; 004c48be
        ;   Label: LAB_004c48be
    CALL FUN_0040d400                   ; 004c48bf
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d400()
    ADD EBX,0x14                        ; 004c48c4
    ADD ESP,0x4                         ; 004c48c7
    CMP EBX,ESI                         ; 004c48ca
    JNZ 0x004c48be                      ; 004c48cc
        ;   XREF to: 004c48be (CONDITIONAL_JUMP)  ; LAB_004c48be
    PUSH 0x10                           ; 004c48ce
    PUSH 0x10                           ; 004c48d0
    PUSH 0x5c3c60                       ; 004c48d2 | s_cursor_005c3c5f+1
    PUSH 0x1d22b4c                      ; 004c48d7
    CALL FUN_0040d460                   ; 004c48dc
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004c48e1
    PUSH 0x10                           ; 004c48e4
    PUSH 0x10                           ; 004c48e6
    PUSH 0x5c3c67                       ; 004c48e8 | = "upwhite"
    PUSH 0x1d22b60                      ; 004c48ed
    CALL FUN_0040d460                   ; 004c48f2
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004c48f7
    PUSH 0x10                           ; 004c48fa
    PUSH 0x10                           ; 004c48fc
    PUSH 0x5c3c6f                       ; 004c48fe | = "downwhite"
    PUSH 0x1d22b74                      ; 004c4903
    CALL FUN_0040d460                   ; 004c4908
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004c490d
    PUSH 0x10                           ; 004c4910
    PUSH 0x10                           ; 004c4912
    PUSH 0x5c3c79                       ; 004c4914 | = "leftwhite"
    PUSH 0x1d22b88                      ; 004c4919
    CALL FUN_0040d460                   ; 004c491e
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004c4923
    PUSH 0x10                           ; 004c4926
    PUSH 0x10                           ; 004c4928
    PUSH 0x5c3c83                       ; 004c492a | = "rightwhite"
    PUSH 0x1d22b9c                      ; 004c492f
    CALL FUN_0040d460                   ; 004c4934
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004c4939
    PUSH 0x10                           ; 004c493c
    PUSH 0x10                           ; 004c493e
    PUSH 0x5c3c8e                       ; 004c4940 | = "crosshairsgreen"
    PUSH 0x1d22bb0                      ; 004c4945
    CALL FUN_0040d460                   ; 004c494a
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004c494f
    PUSH 0x10                           ; 004c4952
    PUSH 0x10                           ; 004c4954
    PUSH 0x5c3c9e                       ; 004c4956 | = "crosshairsred"
    PUSH 0x1d22bc4                      ; 004c495b
    CALL FUN_0040d460                   ; 004c4960
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004c4965
    PUSH 0x10                           ; 004c4968
    PUSH 0x10                           ; 004c496a
    PUSH 0x5c3cac                       ; 004c496c | DAT_005c3cac
    PUSH 0x1d22bd8                      ; 004c4971
    MOV EBP,0x10                        ; 004c4976
    XOR ESI,ESI                         ; 004c497b
    CALL FUN_0040d460                   ; 004c497d
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    MOV EDX,0x8                         ; 004c4982
    ADD ESP,0x10                        ; 004c4987
    MOV dword ptr [0x01d22c10],ESI      ; 004c498a | DAT_01d22c10
    MOV dword ptr [0x01d22c14],EBP      ; 004c4990 | DAT_01d22c14
    MOV dword ptr [0x01d22bf8],ESI      ; 004c4996 | DAT_01d22bf8
    MOV dword ptr [0x01d22bfc],EBP      ; 004c499c | DAT_01d22bfc
    MOV dword ptr [0x01d22bec],EDX      ; 004c49a2 | DAT_01d22bec
    MOV dword ptr [0x01d22c0c],EDX      ; 004c49a8 | DAT_01d22c0c
    MOV dword ptr [0x01d22bf0],EDX      ; 004c49ae | DAT_01d22bf0
    MOV dword ptr [0x01d22bf4],EDX      ; 004c49b4 | DAT_01d22bf4
    MOV dword ptr [0x01d22c18],EDX      ; 004c49ba | DAT_01d22c18
    MOV dword ptr [0x01d22c1c],EDX      ; 004c49c0 | DAT_01d22c1c
    MOV dword ptr [0x01d22c00],EDX      ; 004c49c6 | DAT_01d22c00
    MOV dword ptr [0x01d22c20],EDX      ; 004c49cc | DAT_01d22c20
    MOV dword ptr [0x01d22c04],EDX      ; 004c49d2 | DAT_01d22c04
    MOV dword ptr [0x01d22c24],EDX      ; 004c49d8 | DAT_01d22c24
    MOV dword ptr [0x01d22c08],EDX      ; 004c49de | DAT_01d22c08
    MOV dword ptr [0x01d22c28],EDX      ; 004c49e4 | DAT_01d22c28
    POP EBP                             ; 004c49ea
    POP ESI                             ; 004c49eb
    POP EBX                             ; 004c49ec
    RET                                 ; 004c49ed


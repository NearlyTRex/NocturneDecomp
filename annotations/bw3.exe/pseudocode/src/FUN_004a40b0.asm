; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a40b0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004bda10 at 004bdbb8
;
; Referenced Globals:
;   TerminatedCString s_Fire_state_005c0a54
;   undefined4 DAT_005c0a60
;
; Called Functions:
;   FUN_0049dd20
;   FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a40b0
        ;   Label: FUN_004a40b0
    PUSH ESI                            ; 004a40b1
    PUSH EDI                            ; 004a40b2
    MOV ESI,dword ptr [ESP + 0x14]      ; 004a40b3
    PUSH 0x5c0a54                       ; 004a40b7 | = "Fire state\n"
    PUSH ESI                            ; 004a40bc
    CALL FUN_005a3140                   ; 004a40bd
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0x8                         ; 004a40c2
    PUSH 0x5c0a60                       ; 004a40c5 | DAT_005c0a60
    MOV EBX,0x1cfaff8                   ; 004a40ca
    PUSH ESI                            ; 004a40cf
    LEA EDI,[EBX + 0x8c0]               ; 004a40d0
    CALL FUN_005a3140                   ; 004a40d6
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0x8                         ; 004a40db
    PUSH ESI                            ; 004a40de
        ;   Label: LAB_004a40de
    PUSH EBX                            ; 004a40df
    CALL FUN_0049dd20                   ; 004a40e0
        ;   XREF to: 0049dd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0049dd20()
    ADD EBX,0x70                        ; 004a40e5
    ADD ESP,0x8                         ; 004a40e8
    CMP EBX,EDI                         ; 004a40eb
    JNZ 0x004a40de                      ; 004a40ed
        ;   XREF to: 004a40de (CONDITIONAL_JUMP)  ; LAB_004a40de
    POP EDI                             ; 004a40ef
    POP ESI                             ; 004a40f0
    POP EBX                             ; 004a40f1
    RET                                 ; 004a40f2


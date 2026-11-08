; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049eb00(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004bb9b0 at 004bbb58
;
; Referenced Globals:
;   TerminatedCString s_Fire_state_005d5836
;   undefined4 DAT_005d5842
;
; Called Functions:
;   FUN_00499da0
;   FUN_005b8010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049eb00
        ;   Label: FUN_0049eb00
    PUSH ESI                            ; 0049eb01
    PUSH EDI                            ; 0049eb02
    MOV ESI,dword ptr [ESP + 0x14]      ; 0049eb03
    PUSH 0x5d5836                       ; 0049eb07 | = "Fire state\n"
    PUSH ESI                            ; 0049eb0c
    CALL FUN_005b8010                   ; 0049eb0d
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x8                         ; 0049eb12
    PUSH 0x5d5842                       ; 0049eb15 | DAT_005d5842
    MOV EBX,0x1c9c4d4                   ; 0049eb1a
    PUSH ESI                            ; 0049eb1f
    LEA EDI,[EBX + 0x8c0]               ; 0049eb20
    CALL FUN_005b8010                   ; 0049eb26
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x8                         ; 0049eb2b
    PUSH ESI                            ; 0049eb2e
        ;   Label: LAB_0049eb2e
    PUSH EBX                            ; 0049eb2f
    CALL FUN_00499da0                   ; 0049eb30
        ;   XREF to: 00499da0 (UNCONDITIONAL_CALL)  ; undefined FUN_00499da0()
    ADD EBX,0x70                        ; 0049eb35
    ADD ESP,0x8                         ; 0049eb38
    CMP EBX,EDI                         ; 0049eb3b
    JNZ 0x0049eb2e                      ; 0049eb3d
        ;   XREF to: 0049eb2e (CONDITIONAL_JUMP)  ; LAB_0049eb2e
    POP EDI                             ; 0049eb3f
    POP ESI                             ; 0049eb40
    POP EBX                             ; 0049eb41
    RET                                 ; 0049eb42


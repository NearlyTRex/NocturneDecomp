; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00496380(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005c0401
;   TerminatedCString s_movieName_005c040b
;   undefined4 DAT_005fc4b8
;
; Called Functions:
;   FUN_0040b680
;   FUN_0040b9b0
;   FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496380
        ;   Label: FUN_00496380
    MOV EBX,dword ptr [ESP + 0x8]       ; 00496381
    PUSH EBX                            ; 00496385
    CALL FUN_0040c280                   ; 00496386
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c280()
    ADD ESP,0x4                         ; 0049638b
    PUSH 0x5c0401                       ; 0049638e | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 00496393
    PUSH EAX                            ; 00496399
    CALL FUN_0040b9b0                   ; 0049639a
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9b0()
    MOV EDX,dword ptr [0x005fc4b8]      ; 0049639f | DAT_005fc4b8
    ADD ESP,0x8                         ; 004963a5
    CMP EDX,0x2                         ; 004963a8
    JGE 0x004963af                      ; 004963ab
        ;   XREF to: 004963af (CONDITIONAL_JUMP)  ; LAB_004963af
    POP EBX                             ; 004963ad
    RET                                 ; 004963ae
    PUSH 0x5c040b                       ; 004963af | = "movieName"
        ;   Label: LAB_004963af
    LEA EAX,[EBX + 0x2d8]               ; 004963b4
    PUSH EAX                            ; 004963ba
    CALL FUN_0040b680                   ; 004963bb
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    ADD ESP,0x8                         ; 004963c0
    POP EBX                             ; 004963c3
    RET                                 ; 004963c4


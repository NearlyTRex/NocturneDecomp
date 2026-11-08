; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040ba30(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0xd0]:1  local_d0
; undefined1       Stack[-0xcf]:1  local_cf
;
; XREF[37]:
;   FUN_0040ff80 at 0040ffaf
;   FUN_00419070 at 004190aa
;   FUN_00428650 at 0042867f
;   FUN_00443ca0 at 00443cd9
;   FUN_004456b0 at 004456de
;   FUN_004583c0 at 004583ef
;   FUN_00463460 at 0046348e
;   FUN_004c5e50 at 004c5e7f
;   FUN_004c8cc0 at 004c8ce9
;   FUN_004d5f70 at 004d5f9f
;   ... and 27 more
;
; Referenced Globals:
;   undefined4 DAT_007df9b8
;
; Called Functions:
;   FUN_0040b680
;   FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040ba30
        ;   Label: FUN_0040ba30
    PUSH EDI                            ; 0040ba31
    SUB ESP,0xc8                        ; 0040ba32
    MOV EDI,dword ptr [ESP + 0xd4]      ; 0040ba38
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0040ba3f
    CMP dword ptr [0x007df9b8],0x1      ; 0040ba46 | DAT_007df9b8
    JNZ 0x0040ba72                      ; 0040ba4d
        ;   XREF to: 0040ba72 (CONDITIONAL_JUMP)  ; LAB_0040ba72
    PUSH EDX                            ; 0040ba4f
    LEA ESI,[ESP + 0x4]                 ; 0040ba50
    PUSH ESI                            ; 0040ba54
    CALL FUN_0040b680                   ; 0040ba55
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    ADD ESP,0x8                         ; 0040ba5a
    MOV ESI,ESP                         ; 0040ba5d
    PUSH ESI                            ; 0040ba5f
    PUSH EDI                            ; 0040ba60
    CALL FUN_0054eae0                   ; 0040ba61
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    ADD ESP,0x8                         ; 0040ba66
    ADD ESP,0xc8                        ; 0040ba69
    POP EDI                             ; 0040ba6f
    POP ESI                             ; 0040ba70
    RET                                 ; 0040ba71
    LEA ESI,[EDI + 0x2350]              ; 0040ba72
        ;   Label: LAB_0040ba72
    MOV EDI,ESP                         ; 0040ba78
    PUSH EDI                            ; 0040ba7a
    MOV AL,byte ptr [ESI]               ; 0040ba7b
        ;   Label: LAB_0040ba7b
    MOV byte ptr [EDI],AL               ; 0040ba7d
    CMP AL,0x0                          ; 0040ba7f
    JZ 0x0040ba93                       ; 0040ba81
        ;   XREF to: 0040ba93 (CONDITIONAL_JUMP)  ; LAB_0040ba93
    MOV AL,byte ptr [ESI + 0x1]         ; 0040ba83
    ADD ESI,0x2                         ; 0040ba86
    MOV byte ptr [EDI + 0x1],AL         ; 0040ba89
    ADD EDI,0x2                         ; 0040ba8c
    CMP AL,0x0                          ; 0040ba8f
    JNZ 0x0040ba7b                      ; 0040ba91
        ;   XREF to: 0040ba7b (CONDITIONAL_JUMP)  ; LAB_0040ba7b
    POP EDI                             ; 0040ba93
        ;   Label: LAB_0040ba93
    PUSH EDX                            ; 0040ba94
    LEA ESI,[ESP + 0x4]                 ; 0040ba95
    PUSH ESI                            ; 0040ba99
    CALL FUN_0040b680                   ; 0040ba9a
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    ADD ESP,0x8                         ; 0040ba9f
    ADD ESP,0xc8                        ; 0040baa2
    POP EDI                             ; 0040baa8
    POP ESI                             ; 0040baa9
    RET                                 ; 0040baaa


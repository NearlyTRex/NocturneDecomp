; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00588230(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_nextWayPoint_005ee10a+1
;   TerminatedCString s_adjCount_005ee118
;   undefined4 DAT_0061e8c8
;
; Called Functions:
;   FUN_0040b960
;   FUN_0040b9e0
;   FUN_005780e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00588230
        ;   Label: FUN_00588230
    PUSH ESI                            ; 00588231
    PUSH EDI                            ; 00588232
    PUSH EBP                            ; 00588233
    SUB ESP,0x4                         ; 00588234
    MOV EDI,dword ptr [ESP + 0x18]      ; 00588237
    PUSH EDI                            ; 0058823b
    CALL FUN_005780e0                   ; 0058823c
        ;   XREF to: 005780e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005780e0()
    MOV EDX,dword ptr [0x0061e8c8]      ; 00588241 | DAT_0061e8c8
    ADD ESP,0x4                         ; 00588247
    CMP EDX,0x2                         ; 0058824a
    JL 0x00588268                       ; 0058824d
        ;   XREF to: 00588268 (CONDITIONAL_JUMP)  ; LAB_00588268
    CMP dword ptr [0x0061e8c8],0x2      ; 0058824f | DAT_0061e8c8
        ;   Label: LAB_0058824f
    JGE 0x0058827c                      ; 00588256
        ;   XREF to: 0058827c (CONDITIONAL_JUMP)  ; LAB_0058827c
    LEA EAX,[EAX]                       ; 00588258
    MOV EDX,EDX                         ; 0058825e
    ADD ESP,0x4                         ; 00588260
        ;   Label: LAB_00588260
    POP EBP                             ; 00588263
    POP EDI                             ; 00588264
    POP ESI                             ; 00588265
    POP EBX                             ; 00588266
    RET                                 ; 00588267
    PUSH 0x5ee10b                       ; 00588268 | s_nextWayPoint_005ee10a+1
        ;   Label: LAB_00588268
    LEA EBX,[ESP + 0x4]                 ; 0058826d
    PUSH EBX                            ; 00588271
    CALL FUN_0040b9e0                   ; 00588272
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 00588277
    JMP 0x0058824f                      ; 0058827a
        ;   XREF to: 0058824f (UNCONDITIONAL_JUMP)  ; LAB_0058824f
    PUSH 0x5ee118                       ; 0058827c | = "adjCount"
        ;   Label: LAB_0058827c
    LEA EBX,[EDI + 0x4d0]               ; 00588281
    PUSH EBX                            ; 00588287
    XOR ESI,ESI                         ; 00588288
    CALL FUN_0040b960                   ; 0058828a
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    MOV EBX,dword ptr [EDI + 0x4d0]     ; 0058828f
    ADD ESP,0x8                         ; 00588295
    TEST EBX,EBX                        ; 00588298
    JLE 0x00588260                      ; 0058829a
        ;   XREF to: 00588260 (CONDITIONAL_JUMP)  ; LAB_00588260
    LEA EBX,[EDI + 0x4d4]               ; 0058829c
    PUSH 0x0                            ; 005882a2
        ;   Label: LAB_005882a2
    PUSH EBX                            ; 005882a4
    INC ESI                             ; 005882a5
    CALL FUN_0040b9e0                   ; 005882a6
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 005882ab
    MOV EBP,dword ptr [EDI + 0x4d0]     ; 005882ae
    ADD EBX,0x8                         ; 005882b4
    CMP ESI,EBP                         ; 005882b7
    JL 0x005882a2                       ; 005882b9
        ;   XREF to: 005882a2 (CONDITIONAL_JUMP)  ; LAB_005882a2
    ADD ESP,0x4                         ; 005882bb
    POP EBP                             ; 005882be
    POP EDI                             ; 005882bf
    POP ESI                             ; 005882c0
    POP EBX                             ; 005882c1
    RET                                 ; 005882c2


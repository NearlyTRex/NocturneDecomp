; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005030e0(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[492]:
;   FUN_00401590 at 0040160c
;   FUN_00402940 at 004029b5
;   FUN_00402f30 at 0040302c
;   FUN_00403040 at 00403158
;   FUN_00403480 at 004034e3
;   FUN_004037b0 at 004037cb
;   FUN_00408800 at 00408821
;   FUN_00408960 at 00408981
;   FUN_00408990 at 004089ab
;   FUN_004089c0 at 004089db
;   ... and 482 more
;
; Referenced Globals:
;   undefined4 DAT_006236b8
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d408
;
; Called Functions:
;   FUN_005b2410
;   FUN_005b3080
;   FUN_005bfb18
;   FUN_005c3140
;   thunk_FUN_00574ea0
;   thunk_FUN_005ac1b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005030e0
        ;   Label: FUN_005030e0
    PUSH EDI                            ; 005030e1
    SUB ESP,0x4                         ; 005030e2
    CMP dword ptr [0x01d1d408],0x0      ; 005030e5 | DAT_01d1d408
    JNZ 0x00503176                      ; 005030ec
        ;   XREF to: 00503176 (CONDITIONAL_JUMP)  ; LAB_00503176
    PUSH EBX                            ; 005030f2
        ;   Label: LAB_005030f2
    LEA ESI,[ESP + 0x18]                ; 005030f3
    MOV dword ptr [ESP + 0x4],ESI       ; 005030f7
    LEA ESI,[ESP + 0x4]                 ; 005030fb
    PUSH ESI                            ; 005030ff
    MOV EBX,dword ptr [ESP + 0x18]      ; 00503100
    PUSH EBX                            ; 00503104
    MOV ECX,0x1                         ; 00503105
    PUSH 0x1d1c300                      ; 0050310a
    MOV dword ptr [0x01d1d408],ECX      ; 0050310f | DAT_01d1d408
    XOR ESI,ESI                         ; 00503115
    CALL FUN_005bfb18                   ; 00503117
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb18()
    ADD ESP,0xc                         ; 0050311c
    MOV DH,0x5c                         ; 0050311f
    MOV dword ptr [ESP + 0x4],ESI       ; 00503121
    MOV DL,DH                           ; 00503125
    POP EBX                             ; 00503127
    MOV ESI,dword ptr [0x01d1d400]      ; 00503128 | DAT_01d1d400
        ;   Label: LAB_00503128
    MOV AL,byte ptr [ESI]               ; 0050312e
        ;   Label: LAB_0050312e
    CMP AL,DL                           ; 00503130
    JZ 0x00503146                       ; 00503132
        ;   XREF to: 00503146 (CONDITIONAL_JUMP)  ; LAB_00503146
    CMP AL,0x0                          ; 00503134
    JZ 0x00503144                       ; 00503136
        ;   XREF to: 00503144 (CONDITIONAL_JUMP)  ; LAB_00503144
    INC ESI                             ; 00503138
    MOV AL,byte ptr [ESI]               ; 00503139
    CMP AL,DL                           ; 0050313b
    JZ 0x00503146                       ; 0050313d
        ;   XREF to: 00503146 (CONDITIONAL_JUMP)  ; LAB_00503146
    INC ESI                             ; 0050313f
    CMP AL,0x0                          ; 00503140
    JNZ 0x0050312e                      ; 00503142
        ;   XREF to: 0050312e (CONDITIONAL_JUMP)  ; LAB_0050312e
    SUB ESI,ESI                         ; 00503144
        ;   Label: LAB_00503144
    TEST ESI,ESI                        ; 00503146
        ;   Label: LAB_00503146
    JNZ 0x00503180                      ; 00503148
        ;   XREF to: 00503180 (CONDITIONAL_JUMP)  ; LAB_00503180
    MOV EDI,dword ptr [0x006236b8]      ; 0050314a | DAT_006236b8
    PUSH EDI                            ; 00503150
    CALL thunk_FUN_00574ea0             ; 00503151
        ;   XREF to: 0057cb90 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_00574ea0()
    ADD ESP,0x4                         ; 00503156
    CALL thunk_FUN_005ac1b0             ; 00503159
        ;   XREF to: 00401120 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005ac1b0()
    CALL FUN_005b2410                   ; 0050315e
        ;   XREF to: 005b2410 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2410()
    PUSH 0x1d1c300                      ; 00503163
    CALL FUN_005b3080                   ; 00503168
        ;   XREF to: 005b3080 (UNCONDITIONAL_CALL)  ; undefined FUN_005b3080()
    ADD ESP,0x4                         ; 0050316d
    ADD ESP,0x4                         ; 00503170
    POP EDI                             ; 00503173
    POP ESI                             ; 00503174
    RET                                 ; 00503175
    CALL FUN_005c3140                   ; 00503176
        ;   XREF to: 005c3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005c3140()
        ;   Label: LAB_00503176
    JMP 0x005030f2                      ; 0050317b
        ;   XREF to: 005030f2 (UNCONDITIONAL_JUMP)  ; LAB_005030f2
    MOV ESI,dword ptr [0x01d1d400]      ; 00503180 | DAT_01d1d400
        ;   Label: LAB_00503180
    MOV AL,byte ptr [ESI]               ; 00503186
        ;   Label: LAB_00503186
    CMP AL,DL                           ; 00503188
    JZ 0x0050319e                       ; 0050318a
        ;   XREF to: 0050319e (CONDITIONAL_JUMP)  ; LAB_0050319e
    CMP AL,0x0                          ; 0050318c
    JZ 0x0050319c                       ; 0050318e
        ;   XREF to: 0050319c (CONDITIONAL_JUMP)  ; LAB_0050319c
    INC ESI                             ; 00503190
    MOV AL,byte ptr [ESI]               ; 00503191
    CMP AL,DL                           ; 00503193
    JZ 0x0050319e                       ; 00503195
        ;   XREF to: 0050319e (CONDITIONAL_JUMP)  ; LAB_0050319e
    INC ESI                             ; 00503197
    CMP AL,0x0                          ; 00503198
    JNZ 0x00503186                      ; 0050319a
        ;   XREF to: 00503186 (CONDITIONAL_JUMP)  ; LAB_00503186
    SUB ESI,ESI                         ; 0050319c
        ;   Label: LAB_0050319c
    INC ESI                             ; 0050319e
        ;   Label: LAB_0050319e
    MOV dword ptr [0x01d1d400],ESI      ; 0050319f | DAT_01d1d400
    JMP 0x00503128                      ; 005031a5
        ;   XREF to: 00503128 (UNCONDITIONAL_JUMP)  ; LAB_00503128


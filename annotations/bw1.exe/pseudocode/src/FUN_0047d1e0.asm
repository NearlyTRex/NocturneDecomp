; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0047d1e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005daec4+1
;   TerminatedCString s_modelName_005daecb
;   TerminatedCString s_guardDistance_005daed5
;   TerminatedCString s_riseEvent_005daee3
;   TerminatedCString s_initialState_005daeed
;   TerminatedCString s_vincoffin_005daefa
;   TerminatedCString s_incoffin_005daf04
;   TerminatedCString s_motionState_005daf0d
;   TerminatedCString s_clothCount_005daf19
;   TerminatedCString s_freakyVoiceNumber_005daf24
;   TerminatedCString s_exploded_005daf36
;   TerminatedCString s_partCount_005daf3f
;   TerminatedCString s_fadeTimer_005daf49
;   TerminatedCString s_partList_005daf53
;   TerminatedCString s_mistState_005daf5c
;   ... and 4 more
;
; Called Functions:
;   FUN_0040b1c0
;   FUN_0040b440
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_0040b6f0
;   FUN_0040b7f0
;   FUN_0040b870
;   FUN_004a0520
;   FUN_00524ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047d1e0
        ;   Label: FUN_0047d1e0
    PUSH ESI                            ; 0047d1e1
    PUSH EDI                            ; 0047d1e2
    PUSH EBP                            ; 0047d1e3
    SUB ESP,0x4                         ; 0047d1e4
    MOV EDI,dword ptr [ESP + 0x18]      ; 0047d1e7
    PUSH EDI                            ; 0047d1eb
    CALL FUN_004a0520                   ; 0047d1ec
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0520()
    MOV EDX,dword ptr [0x00612524]      ; 0047d1f1 | DAT_00612524
    ADD ESP,0x4                         ; 0047d1f7
    CMP EDX,0x2                         ; 0047d1fa
    JL 0x0047d3c1                       ; 0047d1fd
        ;   XREF to: 0047d3c1 (CONDITIONAL_JUMP)  ; LAB_0047d3c1
    PUSH 0x5daecb                       ; 0047d203 | = "modelName"
        ;   Label: LAB_0047d203
    LEA EAX,[EDI + 0x158]               ; 0047d208
    PUSH EAX                            ; 0047d20e
    CALL FUN_0040b7f0                   ; 0047d20f
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b7f0()
    MOV ECX,dword ptr [0x00612524]      ; 0047d214 | DAT_00612524
    ADD ESP,0x8                         ; 0047d21a
    CMP ECX,0x2                         ; 0047d21d
    JL 0x0047d23b                       ; 0047d220
        ;   XREF to: 0047d23b (CONDITIONAL_JUMP)  ; LAB_0047d23b
    CMP ECX,0x6                         ; 0047d222
    JGE 0x0047d23b                      ; 0047d225
        ;   XREF to: 0047d23b (CONDITIONAL_JUMP)  ; LAB_0047d23b
    PUSH 0x5daed5                       ; 0047d227 | = "guardDistance"
    LEA EAX,[EDI + 0xc1e0]              ; 0047d22c
    PUSH EAX                            ; 0047d232
    CALL FUN_0040b5f0                   ; 0047d233
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 0047d238
    CMP dword ptr [0x00612524],0x3      ; 0047d23b | DAT_00612524
        ;   Label: LAB_0047d23b
    JL 0x0047d2a1                       ; 0047d242
        ;   XREF to: 0047d2a1 (CONDITIONAL_JUMP)  ; LAB_0047d2a1
    PUSH 0x5daee3                       ; 0047d244 | = "riseEvent"
    LEA EAX,[EDI + 0xc28c]              ; 0047d249
    PUSH EAX                            ; 0047d24f
    CALL FUN_0040b440                   ; 0047d250
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    MOV EBP,dword ptr [0x00612524]      ; 0047d255 | DAT_00612524
    ADD ESP,0x8                         ; 0047d25b
    CMP EBP,0x4                         ; 0047d25e
    JGE 0x0047d2a1                      ; 0047d261
        ;   XREF to: 0047d2a1 (CONDITIONAL_JUMP)  ; LAB_0047d2a1
    PUSH 0x5daeed                       ; 0047d263 | = "initialState"
    LEA EAX,[ESP + 0x4]                 ; 0047d268
    PUSH EAX                            ; 0047d26c
    CALL FUN_0040b670                   ; 0047d26d
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    MOV EAX,[0x007c3038]                ; 0047d272 | DAT_007c3038
    ADD ESP,0x8                         ; 0047d277
    CMP EAX,0x1                         ; 0047d27a
    JNZ 0x0047d2a1                      ; 0047d27d
        ;   XREF to: 0047d2a1 (CONDITIONAL_JUMP)  ; LAB_0047d2a1
    MOV EDX,dword ptr [ESP]             ; 0047d27f
    LEA EAX,[EDI + 0x158]               ; 0047d282
    CMP EDX,0x1                         ; 0047d288
    JNZ 0x0047d3da                      ; 0047d28b
        ;   XREF to: 0047d3da (CONDITIONAL_JUMP)  ; LAB_0047d3da
    PUSH 0x0                            ; 0047d291
    PUSH 0x5daefa                       ; 0047d293 | = "vincoffin"
    PUSH EAX                            ; 0047d298
        ;   Label: LAB_0047d298
    CALL FUN_00524ae0                   ; 0047d299
        ;   XREF to: 00524ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00524ae0()
    ADD ESP,0xc                         ; 0047d29e
    CMP dword ptr [0x00612524],0x4      ; 0047d2a1 | DAT_00612524
        ;   Label: LAB_0047d2a1
    JL 0x0047d2be                       ; 0047d2a8
        ;   XREF to: 0047d2be (CONDITIONAL_JUMP)  ; LAB_0047d2be
    PUSH 0x5daf0d                       ; 0047d2aa | = "motionState"
    LEA EAX,[EDI + 0x158]               ; 0047d2af
    PUSH EAX                            ; 0047d2b5
    CALL FUN_0040b870                   ; 0047d2b6
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b870()
    ADD ESP,0x8                         ; 0047d2bb
    CMP dword ptr [0x00612524],0x4      ; 0047d2be | DAT_00612524
        ;   Label: LAB_0047d2be
    JNZ 0x0047d310                      ; 0047d2c5
        ;   XREF to: 0047d310 (CONDITIONAL_JUMP)  ; LAB_0047d310
    PUSH 0x5daf19                       ; 0047d2c7 | = "clothCount"
    LEA EAX,[EDI + 0x2ca0]              ; 0047d2cc
    PUSH EAX                            ; 0047d2d2
    XOR EBX,EBX                         ; 0047d2d3
    CALL FUN_0040b670                   ; 0047d2d5
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    MOV ESI,dword ptr [EDI + 0x2ca0]    ; 0047d2da
    ADD ESP,0x8                         ; 0047d2e0
    TEST ESI,ESI                        ; 0047d2e3
    JLE 0x0047d310                      ; 0047d2e5
        ;   XREF to: 0047d310 (CONDITIONAL_JUMP)  ; LAB_0047d310
    LEA ESI,[EDI + 0x2ca4]              ; 0047d2e7
    PUSH 0x0                            ; 0047d2ed
        ;   Label: LAB_0047d2ed
    PUSH ESI                            ; 0047d2ef
    INC EBX                             ; 0047d2f0
    CALL FUN_0040b440                   ; 0047d2f1
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 0047d2f6
    MOV EBP,dword ptr [EDI + 0x2ca0]    ; 0047d2f9
    ADD ESI,0x28                        ; 0047d2ff
    CMP EBX,EBP                         ; 0047d302
    JL 0x0047d2ed                       ; 0047d304
        ;   XREF to: 0047d2ed (CONDITIONAL_JUMP)  ; LAB_0047d2ed
    LEA EAX,[EAX]                       ; 0047d306
    LEA EDX,[EDX]                       ; 0047d30c
    CMP dword ptr [0x00612524],0x7      ; 0047d310 | DAT_00612524
        ;   Label: LAB_0047d310
    JL 0x0047d32d                       ; 0047d317
        ;   XREF to: 0047d32d (CONDITIONAL_JUMP)  ; LAB_0047d32d
    PUSH 0x5daf24                       ; 0047d319 | = "freakyVoiceNumber"
    LEA EAX,[EDI + 0xc2f0]              ; 0047d31e
    PUSH EAX                            ; 0047d324
    CALL FUN_0040b670                   ; 0047d325
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0047d32a
    CMP dword ptr [0x00612524],0x8      ; 0047d32d | DAT_00612524
        ;   Label: LAB_0047d32d
    JL 0x0047d3b0                       ; 0047d334
        ;   XREF to: 0047d3b0 (CONDITIONAL_JUMP)  ; LAB_0047d3b0
    PUSH 0x5daf36                       ; 0047d33a | = "exploded"
    LEA EAX,[EDI + 0xc408]              ; 0047d33f
    PUSH EAX                            ; 0047d345
    CALL FUN_0040b670                   ; 0047d346
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0047d34b
    PUSH 0x5daf3f                       ; 0047d34e | = "partCount"
    LEA EAX,[EDI + 0xc314]              ; 0047d353
    PUSH EAX                            ; 0047d359
    CALL FUN_0040b670                   ; 0047d35a
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0047d35f
    PUSH 0x5daf49                       ; 0047d362 | = "fadeTimer"
    LEA EAX,[EDI + 0xc40c]              ; 0047d367
    PUSH EAX                            ; 0047d36d
    XOR EBX,EBX                         ; 0047d36e
    CALL FUN_0040b5f0                   ; 0047d370
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    MOV ECX,dword ptr [EDI + 0xc314]    ; 0047d375
    ADD ESP,0x8                         ; 0047d37b
    TEST ECX,ECX                        ; 0047d37e
    JLE 0x0047d3b0                      ; 0047d380
        ;   XREF to: 0047d3b0 (CONDITIONAL_JUMP)  ; LAB_0047d3b0
    LEA ESI,[EDI + 0xc318]              ; 0047d382
    PUSH 0x5daf53                       ; 0047d388 | = "partList"
        ;   Label: LAB_0047d388
    PUSH ESI                            ; 0047d38d
    INC EBX                             ; 0047d38e
    CALL FUN_0040b6f0                   ; 0047d38f
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 0047d394
    MOV EBP,dword ptr [EDI + 0xc314]    ; 0047d397
    ADD ESI,0x4                         ; 0047d39d
    CMP EBX,EBP                         ; 0047d3a0
    JL 0x0047d388                       ; 0047d3a2
        ;   XREF to: 0047d388 (CONDITIONAL_JUMP)  ; LAB_0047d388
    LEA EAX,[EAX]                       ; 0047d3a4
    LEA EDX,[EDX]                       ; 0047d3aa
    CMP dword ptr [0x00612524],0x9      ; 0047d3b0 | DAT_00612524
        ;   Label: LAB_0047d3b0
    JGE 0x0047d3e6                      ; 0047d3b7
        ;   XREF to: 0047d3e6 (CONDITIONAL_JUMP)  ; LAB_0047d3e6
    ADD ESP,0x4                         ; 0047d3b9
    POP EBP                             ; 0047d3bc
    POP EDI                             ; 0047d3bd
    POP ESI                             ; 0047d3be
    POP EBX                             ; 0047d3bf
    RET                                 ; 0047d3c0
    PUSH 0x5daec5                       ; 0047d3c1 | s_speed_005daec4+1
        ;   Label: LAB_0047d3c1
    LEA EAX,[EDI + 0xc1d0]              ; 0047d3c6
    PUSH EAX                            ; 0047d3cc
    CALL FUN_0040b5f0                   ; 0047d3cd
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 0047d3d2
    JMP 0x0047d203                      ; 0047d3d5
        ;   XREF to: 0047d203 (UNCONDITIONAL_JUMP)  ; LAB_0047d203
    PUSH 0x0                            ; 0047d3da
        ;   Label: LAB_0047d3da
    PUSH 0x5daf04                       ; 0047d3dc | = "incoffin"
    JMP 0x0047d298                      ; 0047d3e1
        ;   XREF to: 0047d298 (UNCONDITIONAL_JUMP)  ; LAB_0047d298
    PUSH 0x5daf5c                       ; 0047d3e6 | = "mistState"
        ;   Label: LAB_0047d3e6
    LEA EAX,[EDI + 0xc2f4]              ; 0047d3eb
    PUSH EAX                            ; 0047d3f1
    CALL FUN_0040b670                   ; 0047d3f2
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0047d3f7
    PUSH 0x5daf66                       ; 0047d3fa | = "vanishTimer"
    LEA EAX,[EDI + 0xc2f8]              ; 0047d3ff
    PUSH EAX                            ; 0047d405
    CALL FUN_0040b5f0                   ; 0047d406
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 0047d40b
    PUSH 0x5daf72                       ; 0047d40e | = "newPos"
    ADD EDI,0xc304                      ; 0047d413
    PUSH EDI                            ; 0047d419
    CALL FUN_0040b1c0                   ; 0047d41a
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b1c0()
    ADD ESP,0x8                         ; 0047d41f
    ADD ESP,0x4                         ; 0047d422
    POP EBP                             ; 0047d425
    POP EDI                             ; 0047d426
    POP ESI                             ; 0047d427
    POP EBX                             ; 0047d428
    RET                                 ; 0047d429


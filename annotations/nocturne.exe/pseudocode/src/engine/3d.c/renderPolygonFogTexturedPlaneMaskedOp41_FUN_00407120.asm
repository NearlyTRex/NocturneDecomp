; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00407120(int param_1)
;
;
; XREF[2]:
;   engine_3d.c_FUN_00408fc0 at 004090e7
;   engine_3d.c_flushRenderQueue_FUN_00408f50 at 00408f7a
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;   undefined4 DAT_006b0264
;   undefined4 DAT_006b029c
;   undefined4 DAT_006b02a0
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c038f4
;   undefined4 DAT_01c03948
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_clipper.c_FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00407120
        ;   Label: engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00407120
    PUSH EDI                            ; 00407121
    PUSH EBP                            ; 00407122
    MOV EBP,dword ptr [0x006b0264]      ; 00407123 | DAT_006b0264
    MOV EDI,dword ptr [ESP + 0x10]      ; 00407129
    LEA ESI,[EDI + 0x18]                ; 0040712d
    LEA EAX,[EDI + 0x8]                 ; 00407130
    PUSH EAX                            ; 00407133
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00407134
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 00407139
    TEST EAX,EAX                        ; 0040713c
    JZ 0x004072a3                       ; 0040713e
        ;   XREF to: 004072a3 (CONDITIONAL_JUMP)  ; LAB_004072a3
    PUSH EBX                            ; 00407144
    MOV EDX,dword ptr [0x01c038f4]      ; 00407145 | DAT_01c038f4
    MOV EBP,dword ptr [0x006b0264]      ; 0040714b | DAT_006b0264
    TEST EDX,EDX                        ; 00407151
    JZ 0x0040722d                       ; 00407153
        ;   XREF to: 0040722d (CONDITIONAL_JUMP)  ; LAB_0040722d
    CMP dword ptr [0x01c03948],0x0      ; 00407159 | DAT_01c03948
    JNZ 0x00407206                      ; 00407160
        ;   XREF to: 00407206 (CONDITIONAL_JUMP)  ; LAB_00407206
    CMP dword ptr [0x005b7624],0x20     ; 00407166 | DAT_005b7624
    JNZ 0x004071f7                      ; 0040716d
        ;   XREF to: 004071f7 (CONDITIONAL_JUMP)  ; LAB_004071f7
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00407173 | DAT_01c00c7c
    MOV EBX,0x1                         ; 0040717d
        ;   Label: LAB_0040717d
    MOV ECX,0xcd                        ; 00407182
    MOV dword ptr [0x01c039a4],EBX      ; 00407187 | DAT_01c039a4
    MOV dword ptr [0x01c039a0],ECX      ; 0040718d | DAT_01c039a0
    MOV EBX,0x6b029c                    ; 00407193 | DAT_006b029c
        ;   Label: LAB_00407193
    MOV EDX,ESI                         ; 00407198
    XOR ECX,ECX                         ; 0040719a
    MOV EAX,dword ptr [EDI + 0x4]       ; 0040719c
        ;   Label: LAB_0040719c
    LEA EAX,[EAX + EAX*0x2]             ; 0040719f
    MOV dword ptr [0x006b0264],EBP      ; 004071a2 | DAT_006b0264
    CMP ECX,EAX                         ; 004071a8
    JGE 0x00407291                      ; 004071aa
        ;   XREF to: 00407291 (CONDITIONAL_JUMP)  ; LAB_00407291
    MOV EAX,dword ptr [EDX]             ; 004071b0
    ADD EAX,EBP                         ; 004071b2
    MOV dword ptr [EBX],EAX             ; 004071b4 | DAT_006b029c | DAT_006b02a0
    MOV ESI,dword ptr [EDX]             ; 004071b6
    ADD ESI,EBP                         ; 004071b8
    LEA EAX,[ESI*0x4 + 0x0]             ; 004071ba
    SUB EAX,ESI                         ; 004071c1
    MOV ESI,EAX                         ; 004071c3
    SHL ESI,0x4                         ; 004071c5
    MOV EAX,dword ptr [EDX + 0x4]       ; 004071c8
    MOV dword ptr [ESI + 0x5c502c],EAX  ; 004071cb | DAT_005c502c
    MOV ESI,dword ptr [EDX]             ; 004071d1
    ADD ESI,EBP                         ; 004071d3
    LEA EAX,[ESI*0x4 + 0x0]             ; 004071d5
    SUB EAX,ESI                         ; 004071dc
    ADD EBX,0x4                         ; 004071de
    MOV ESI,EAX                         ; 004071e1
    ADD EDX,0xc                         ; 004071e3
    SHL ESI,0x4                         ; 004071e6
    MOV EAX,dword ptr [EDX + -0x4]      ; 004071e9
    ADD ECX,0x3                         ; 004071ec
    MOV dword ptr [ESI + 0x5c5030],EAX  ; 004071ef | DAT_005c5030
    JMP 0x0040719c                      ; 004071f5
        ;   XREF to: 0040719c (UNCONDITIONAL_JUMP)  ; LAB_0040719c
    MOV dword ptr [0x01c00c7c],0x530322 ; 004071f7 | DAT_01c00c7c
        ;   Label: LAB_004071f7
    JMP 0x0040717d                      ; 00407201
        ;   XREF to: 0040717d (UNCONDITIONAL_JUMP)  ; LAB_0040717d
    CMP dword ptr [0x005b7624],0x20     ; 00407206 | DAT_005b7624
        ;   Label: LAB_00407206
    JNZ 0x0040721e                      ; 0040720d
        ;   XREF to: 0040721e (CONDITIONAL_JUMP)  ; LAB_0040721e
    MOV dword ptr [0x01c00c7c],0x52f031 ; 0040720f | DAT_01c00c7c
    JMP 0x0040717d                      ; 00407219
        ;   XREF to: 0040717d (UNCONDITIONAL_JUMP)  ; LAB_0040717d
    MOV dword ptr [0x01c00c7c],0x52f823 ; 0040721e | DAT_01c00c7c
        ;   Label: LAB_0040721e
    JMP 0x0040717d                      ; 00407228
        ;   XREF to: 0040717d (UNCONDITIONAL_JUMP)  ; LAB_0040717d
    CMP dword ptr [0x01c03948],0x0      ; 0040722d | DAT_01c03948
        ;   Label: LAB_0040722d
    JNZ 0x00407270                      ; 00407234
        ;   XREF to: 00407270 (CONDITIONAL_JUMP)  ; LAB_00407270
    CMP dword ptr [0x005b7624],0x20     ; 00407236 | DAT_005b7624
    JNZ 0x00407264                      ; 0040723d
        ;   XREF to: 00407264 (CONDITIONAL_JUMP)  ; LAB_00407264
    MOV dword ptr [0x01c00c7c],0x5300ec ; 0040723f | DAT_01c00c7c
    MOV ECX,0x1                         ; 00407249
        ;   Label: LAB_00407249
    MOV EDX,0xc5                        ; 0040724e
    MOV dword ptr [0x01c039a4],ECX      ; 00407253 | DAT_01c039a4
    MOV dword ptr [0x01c039a0],EDX      ; 00407259 | DAT_01c039a0
    JMP 0x00407193                      ; 0040725f
        ;   XREF to: 00407193 (UNCONDITIONAL_JUMP)  ; LAB_00407193
    MOV dword ptr [0x01c00c7c],0x530322 ; 00407264 | DAT_01c00c7c
        ;   Label: LAB_00407264
    JMP 0x00407249                      ; 0040726e
        ;   XREF to: 00407249 (UNCONDITIONAL_JUMP)  ; LAB_00407249
    CMP dword ptr [0x005b7624],0x20     ; 00407270 | DAT_005b7624
        ;   Label: LAB_00407270
    JNZ 0x00407285                      ; 00407277
        ;   XREF to: 00407285 (CONDITIONAL_JUMP)  ; LAB_00407285
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00407279 | DAT_01c00c7c
    JMP 0x00407249                      ; 00407283
        ;   XREF to: 00407249 (UNCONDITIONAL_JUMP)  ; LAB_00407249
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00407285 | DAT_01c00c7c
        ;   Label: LAB_00407285
    JMP 0x00407249                      ; 0040728f
        ;   XREF to: 00407249 (UNCONDITIONAL_JUMP)  ; LAB_00407249
    PUSH 0x6b029c                       ; 00407291 | DAT_006b029c
        ;   Label: LAB_00407291
    MOV ESI,dword ptr [EDI + 0x4]       ; 00407296
    PUSH ESI                            ; 00407299
    CALL engine_clipper.c_FUN_00432cd0  ; 0040729a
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    ADD ESP,0x8                         ; 0040729f
    POP EBX                             ; 004072a2
    MOV EDX,dword ptr [EDI + 0x4]       ; 004072a3
        ;   Label: LAB_004072a3
    LEA EAX,[EDX*0x4 + 0x0]             ; 004072a6
    SUB EAX,EDX                         ; 004072ad
    LEA EDX,[EAX*0x4 + 0x0]             ; 004072af
    LEA EAX,[EDI + 0x18]                ; 004072b6
    MOV EBP,dword ptr [0x006b0264]      ; 004072b9 | DAT_006b0264
    ADD EAX,EDX                         ; 004072bf
    POP EBP                             ; 004072c1
    POP EDI                             ; 004072c2
    POP ESI                             ; 004072c3
    RET                                 ; 004072c4


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_renderPolygonFullEffectsLitOp57_FUN_00408130(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c03948
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00404710
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408130
        ;   Label: engine_3d.c_renderPolygonFullEffectsLitOp57_FUN_00408130
    PUSH ESI                            ; 00408131
    PUSH EBP                            ; 00408132
    MOV EBX,dword ptr [ESP + 0x10]      ; 00408133
    LEA ESI,[EBX + 0x18]                ; 00408137
    LEA EAX,[EBX + 0x8]                 ; 0040813a
    PUSH EAX                            ; 0040813d
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0040813e
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 00408143
    TEST EAX,EAX                        ; 00408146
    JZ 0x00408194                       ; 00408148
        ;   XREF to: 00408194 (CONDITIONAL_JUMP)  ; LAB_00408194
    CMP dword ptr [0x01c03948],0x0      ; 0040814a | DAT_01c03948
    JNZ 0x004081af                      ; 00408151
        ;   XREF to: 004081af (CONDITIONAL_JUMP)  ; LAB_004081af
    CMP dword ptr [0x005b7624],0x20     ; 00408153 | DAT_005b7624
    JNZ 0x004081a3                      ; 0040815a
        ;   XREF to: 004081a3 (CONDITIONAL_JUMP)  ; LAB_004081a3
    MOV dword ptr [0x01c00c7c],0x5300ec ; 0040815c | DAT_01c00c7c | LAB_005300ec
    PUSH EDI                            ; 00408166
        ;   Label: LAB_00408166
    MOV EDI,0x1f3                       ; 00408167
    MOV EBP,0x1                         ; 0040816c
    PUSH EBX                            ; 00408171
    MOV dword ptr [0x01c039a0],EDI      ; 00408172 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EBP      ; 00408178 | DAT_01c039a4
    CALL engine_3d.c_calculatePolygonLighting_FUN_00404710 ; 0040817e
        ;   XREF to: 00404710 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_calculatePolygonLighting_FUN_00404710()
    ADD ESP,0x4                         ; 00408183
    PUSH ESI                            ; 00408186
    MOV EAX,dword ptr [EBX + 0x4]       ; 00408187
    PUSH EAX                            ; 0040818a
    CALL FUN_00432cd0                   ; 0040818b
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00432cd0()
    ADD ESP,0x8                         ; 00408190
    POP EDI                             ; 00408193
    MOV EAX,dword ptr [EBX + 0x4]       ; 00408194
        ;   Label: LAB_00408194
    ADD EBX,0x18                        ; 00408197
    SHL EAX,0x2                         ; 0040819a
    ADD EAX,EBX                         ; 0040819d
    POP EBP                             ; 0040819f
    POP ESI                             ; 004081a0
    POP EBX                             ; 004081a1
    RET                                 ; 004081a2
    MOV dword ptr [0x01c00c7c],0x530322 ; 004081a3 | DAT_01c00c7c | LAB_00530322
        ;   Label: LAB_004081a3
    JMP 0x00408166                      ; 004081ad
        ;   XREF to: 00408166 (UNCONDITIONAL_JUMP)  ; LAB_00408166
    CMP dword ptr [0x005b7624],0x20     ; 004081af | DAT_005b7624
        ;   Label: LAB_004081af
    JNZ 0x004081c4                      ; 004081b6
        ;   XREF to: 004081c4 (CONDITIONAL_JUMP)  ; LAB_004081c4
    MOV dword ptr [0x01c00c7c],0x52f031 ; 004081b8 | DAT_01c00c7c | LAB_0052f031
    JMP 0x00408166                      ; 004081c2
        ;   XREF to: 00408166 (UNCONDITIONAL_JUMP)  ; LAB_00408166
    MOV dword ptr [0x01c00c7c],0x52f823 ; 004081c4 | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_004081c4
    JMP 0x00408166                      ; 004081ce
        ;   XREF to: 00408166 (UNCONDITIONAL_JUMP)  ; LAB_00408166


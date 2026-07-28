; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_renderPolygonTexturedNormalizedOp50_FUN_004077e0(int param_1)
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
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_clipper.c_FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004077e0
        ;   Label: engine_3d.c_renderPolygonTexturedNormalizedOp50_FUN_004077e0
    PUSH ESI                            ; 004077e1
    PUSH EBP                            ; 004077e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004077e3
    LEA ESI,[EBX + 0x18]                ; 004077e7
    LEA EAX,[EBX + 0x8]                 ; 004077ea
    PUSH EAX                            ; 004077ed
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 004077ee
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 004077f3
    TEST EAX,EAX                        ; 004077f6
    JZ 0x0040783b                       ; 004077f8
        ;   XREF to: 0040783b (CONDITIONAL_JUMP)  ; LAB_0040783b
    CMP dword ptr [0x01c03948],0x0      ; 004077fa | DAT_01c03948
    JNZ 0x00407856                      ; 00407801
        ;   XREF to: 00407856 (CONDITIONAL_JUMP)  ; LAB_00407856
    CMP dword ptr [0x005b7624],0x20     ; 00407803 | DAT_005b7624
    JNZ 0x0040784a                      ; 0040780a
        ;   XREF to: 0040784a (CONDITIONAL_JUMP)  ; LAB_0040784a
    MOV dword ptr [0x01c00c7c],0x5300ec ; 0040780c | DAT_01c00c7c
    PUSH EDI                            ; 00407816
        ;   Label: LAB_00407816
    MOV EDI,0x1                         ; 00407817
    PUSH ESI                            ; 0040781c
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040781d
    MOV EBP,0x2                         ; 00407820
    PUSH EAX                            ; 00407825
    MOV dword ptr [0x01c039a0],EDI      ; 00407826 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EBP      ; 0040782c | DAT_01c039a4
    CALL engine_clipper.c_FUN_00432cd0  ; 00407832
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    ADD ESP,0x8                         ; 00407837
    POP EDI                             ; 0040783a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040783b
        ;   Label: LAB_0040783b
    ADD EBX,0x18                        ; 0040783e
    SHL EAX,0x2                         ; 00407841
    ADD EAX,EBX                         ; 00407844
    POP EBP                             ; 00407846
    POP ESI                             ; 00407847
    POP EBX                             ; 00407848
    RET                                 ; 00407849
    MOV dword ptr [0x01c00c7c],0x530322 ; 0040784a | DAT_01c00c7c
        ;   Label: LAB_0040784a
    JMP 0x00407816                      ; 00407854
        ;   XREF to: 00407816 (UNCONDITIONAL_JUMP)  ; LAB_00407816
    CMP dword ptr [0x005b7624],0x20     ; 00407856 | DAT_005b7624
        ;   Label: LAB_00407856
    JNZ 0x0040786b                      ; 0040785d
        ;   XREF to: 0040786b (CONDITIONAL_JUMP)  ; LAB_0040786b
    MOV dword ptr [0x01c00c7c],0x52f031 ; 0040785f | DAT_01c00c7c
    JMP 0x00407816                      ; 00407869
        ;   XREF to: 00407816 (UNCONDITIONAL_JUMP)  ; LAB_00407816
    MOV dword ptr [0x01c00c7c],0x52f823 ; 0040786b | DAT_01c00c7c
        ;   Label: LAB_0040786b
    JMP 0x00407816                      ; 00407875
        ;   XREF to: 00407816 (UNCONDITIONAL_JUMP)  ; LAB_00407816


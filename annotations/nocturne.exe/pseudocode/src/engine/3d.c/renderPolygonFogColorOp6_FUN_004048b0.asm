; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_renderPolygonFogColorOp6_FUN_004048b0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00c78
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c03948
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_clipper.c_clipPolygonToViewport_FUN_004349a0
;   engine_clipper.c_FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004048b0
        ;   Label: engine_3d.c_renderPolygonFogColorOp6_FUN_004048b0
    PUSH ESI                            ; 004048b1
    PUSH EBP                            ; 004048b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004048b3
    LEA ESI,[EBX + 0x18]                ; 004048b7
    LEA EAX,[EBX + 0x8]                 ; 004048ba
    PUSH EAX                            ; 004048bd
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 004048be
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 004048c3
    TEST EAX,EAX                        ; 004048c6
    JZ 0x00404912                       ; 004048c8
        ;   XREF to: 00404912 (CONDITIONAL_JUMP)  ; LAB_00404912
    CMP dword ptr [0x01c00c78],0x0      ; 004048ca | DAT_01c00c78
    JZ 0x0040494e                       ; 004048d1
        ;   XREF to: 0040494e (CONDITIONAL_JUMP)  ; LAB_0040494e
    CMP dword ptr [0x01c03948],0x0      ; 004048d7 | DAT_01c03948
    JNZ 0x0040492d                      ; 004048de
        ;   XREF to: 0040492d (CONDITIONAL_JUMP)  ; LAB_0040492d
    CMP dword ptr [0x005b7624],0x20     ; 004048e0 | DAT_005b7624
    JNZ 0x00404921                      ; 004048e7
        ;   XREF to: 00404921 (CONDITIONAL_JUMP)  ; LAB_00404921
    MOV dword ptr [0x01c00c7c],0x5300ec ; 004048e9 | DAT_01c00c7c
    MOV EBP,0x4                         ; 004048f3
        ;   Label: LAB_004048f3
    PUSH ESI                            ; 004048f8
    MOV EDX,dword ptr [EBX + 0x4]       ; 004048f9
    XOR EAX,EAX                         ; 004048fc
    PUSH EDX                            ; 004048fe
    MOV dword ptr [0x01c039a0],EBP      ; 004048ff | DAT_01c039a0
    MOV [0x01c039a4],EAX                ; 00404905 | DAT_01c039a4
    CALL engine_clipper.c_FUN_00432cd0  ; 0040490a
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    ADD ESP,0x8                         ; 0040490f
    MOV ESI,dword ptr [EBX + 0x4]       ; 00404912
        ;   Label: LAB_00404912
    LEA EAX,[EBX + 0x18]                ; 00404915
    SHL ESI,0x2                         ; 00404918
    ADD EAX,ESI                         ; 0040491b
    POP EBP                             ; 0040491d
    POP ESI                             ; 0040491e
    POP EBX                             ; 0040491f
    RET                                 ; 00404920
    MOV dword ptr [0x01c00c7c],0x530322 ; 00404921 | DAT_01c00c7c
        ;   Label: LAB_00404921
    JMP 0x004048f3                      ; 0040492b
        ;   XREF to: 004048f3 (UNCONDITIONAL_JUMP)  ; LAB_004048f3
    CMP dword ptr [0x005b7624],0x20     ; 0040492d | DAT_005b7624
        ;   Label: LAB_0040492d
    JNZ 0x00404942                      ; 00404934
        ;   XREF to: 00404942 (CONDITIONAL_JUMP)  ; LAB_00404942
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00404936 | DAT_01c00c7c
    JMP 0x004048f3                      ; 00404940
        ;   XREF to: 004048f3 (UNCONDITIONAL_JUMP)  ; LAB_004048f3
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00404942 | DAT_01c00c7c
        ;   Label: LAB_00404942
    JMP 0x004048f3                      ; 0040494c
        ;   XREF to: 004048f3 (UNCONDITIONAL_JUMP)  ; LAB_004048f3
    CMP dword ptr [0x01c03948],0x0      ; 0040494e | DAT_01c03948
        ;   Label: LAB_0040494e
    JNZ 0x004049a4                      ; 00404955
        ;   XREF to: 004049a4 (CONDITIONAL_JUMP)  ; LAB_004049a4
    CMP dword ptr [0x005b7624],0x20     ; 00404957 | DAT_005b7624
    JNZ 0x00404998                      ; 0040495e
        ;   XREF to: 00404998 (CONDITIONAL_JUMP)  ; LAB_00404998
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00404960 | DAT_01c00c7c
    MOV EBP,0x204                       ; 0040496a
        ;   Label: LAB_0040496a
    PUSH ESI                            ; 0040496f
    MOV EDX,dword ptr [EBX + 0x4]       ; 00404970
    XOR EAX,EAX                         ; 00404973
    PUSH EDX                            ; 00404975
    MOV dword ptr [0x01c039a0],EBP      ; 00404976 | DAT_01c039a0
    MOV [0x01c039a4],EAX                ; 0040497c | DAT_01c039a4
    CALL engine_clipper.c_clipPolygonToViewport_FUN_004349a0 ; 00404981
        ;   XREF to: 004349a0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipPolygonToViewport_FUN_004349a0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404986
    MOV ESI,dword ptr [EBX + 0x4]       ; 00404989
    LEA EAX,[EBX + 0x18]                ; 0040498c
    SHL ESI,0x2                         ; 0040498f
    ADD EAX,ESI                         ; 00404992
    POP EBP                             ; 00404994
    POP ESI                             ; 00404995
    POP EBX                             ; 00404996
    RET                                 ; 00404997
    MOV dword ptr [0x01c00c7c],0x530322 ; 00404998 | DAT_01c00c7c
        ;   Label: LAB_00404998
    JMP 0x0040496a                      ; 004049a2
        ;   XREF to: 0040496a (UNCONDITIONAL_JUMP)  ; LAB_0040496a
    CMP dword ptr [0x005b7624],0x20     ; 004049a4 | DAT_005b7624
        ;   Label: LAB_004049a4
    JNZ 0x004049b9                      ; 004049ab
        ;   XREF to: 004049b9 (CONDITIONAL_JUMP)  ; LAB_004049b9
    MOV dword ptr [0x01c00c7c],0x52f031 ; 004049ad | DAT_01c00c7c
    JMP 0x0040496a                      ; 004049b7
        ;   XREF to: 0040496a (UNCONDITIONAL_JUMP)  ; LAB_0040496a
    MOV dword ptr [0x01c00c7c],0x52f823 ; 004049b9 | DAT_01c00c7c
        ;   Label: LAB_004049b9
    JMP 0x0040496a                      ; 004049c3
        ;   XREF to: 0040496a (UNCONDITIONAL_JUMP)  ; LAB_0040496a


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_pop_FUN_004cdbc0(void)
;
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 at 00460bf0
;   shape_edittool.cpp_FUN_00472fd0 at 00473068
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_00588233
;   TerminatedCString s_Matrix_unbalance2_00588246
;   int g_RelativeX
;   int g_RelativeY
;   int g_RelativeZ
;   undefined4 DAT_01c039dc
;   undefined4 DAT_01c039e0
;   undefined4 DAT_01c039e4
;   CMatrix3x3i g_TransformMatrix
;   undefined4 g_TransformMatrix.m[0].y
;   undefined4 g_TransformMatrix.m[0].z
;   undefined4 g_TransformMatrix.m[1].x
;   undefined4 g_TransformMatrix.m[1].y
;   undefined4 g_TransformMatrix.m[1].z
;   undefined4 g_TransformMatrix.m[2].x
;   ... and 5 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01cc5174]      ; 004cdbc0 | DAT_01cc5174
        ;   Label: engine_matrix.c_pop_FUN_004cdbc0
    DEC EDX                             ; 004cdbc6
    MOV dword ptr [0x01cc5174],EDX      ; 004cdbc7 | DAT_01cc5174
    TEST EDX,EDX                        ; 004cdbcd
    JL 0x004cdc9d                       ; 004cdbcf
        ;   XREF to: 004cdc9d (CONDITIONAL_JUMP)  ; LAB_004cdc9d
    MOV EAX,[0x01cc5174]                ; 004cdbd5 | DAT_01cc5174
        ;   Label: LAB_004cdbd5
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc5178] ; 004cdbda
    MOV dword ptr [0x01c039e8],EDX      ; 004cdbe1 | g_TransformMatrix
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc51a0] ; 004cdbe7
    MOV dword ptr [0x01c039ec],EDX      ; 004cdbee | g_TransformMatrix.m[0].y
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc51c8] ; 004cdbf4
    MOV dword ptr [0x01c039f0],EDX      ; 004cdbfb | g_TransformMatrix.m[0].z
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc51f0] ; 004cdc01
    MOV dword ptr [0x01c039f4],EDX      ; 004cdc08 | g_TransformMatrix.m[1].x
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc5218] ; 004cdc0e
    MOV dword ptr [0x01c039f8],EDX      ; 004cdc15 | g_TransformMatrix.m[1].y
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc5240] ; 004cdc1b
    MOV dword ptr [0x01c039fc],EDX      ; 004cdc22 | g_TransformMatrix.m[1].z
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc5268] ; 004cdc28
    MOV dword ptr [0x01c03a00],EDX      ; 004cdc2f | g_TransformMatrix.m[2].x
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc5290] ; 004cdc35
    MOV dword ptr [0x01c03a04],EDX      ; 004cdc3c | g_TransformMatrix.m[2].y
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc52b8] ; 004cdc42
    MOV dword ptr [0x01c03a08],EDX      ; 004cdc49 | g_TransformMatrix.m[2].z
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc52e0] ; 004cdc4f
    MOV dword ptr [0x01c039b8],EDX      ; 004cdc56 | g_RelativeX
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc5308] ; 004cdc5c
    MOV dword ptr [0x01c039bc],EDX      ; 004cdc63 | g_RelativeY
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc5330] ; 004cdc69
    MOV dword ptr [0x01c039c0],EDX      ; 004cdc70 | g_RelativeZ
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc5358] ; 004cdc76
    MOV dword ptr [0x01c039dc],EDX      ; 004cdc7d | DAT_01c039dc
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc5380] ; 004cdc83
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc53a8] ; 004cdc8a
    MOV dword ptr [0x01c039e0],EDX      ; 004cdc91 | DAT_01c039e0
    MOV [0x01c039e4],EAX                ; 004cdc97 | DAT_01c039e4
    RET                                 ; 004cdc9c
    PUSH ESI                            ; 004cdc9d
        ;   Label: LAB_004cdc9d
    PUSH EBX                            ; 004cdc9e
    MOV EBX,0x588233                    ; 004cdc9f | = "..\\engine\\matrix.c"
    MOV ESI,0x355                       ; 004cdca4
    PUSH 0x588246                       ; 004cdca9 | = "Matrix unbalance2"
    MOV dword ptr [0x01cc4800],EBX      ; 004cdcae | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ESI      ; 004cdcb4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004cdcba
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004cdcbf
    POP EBX                             ; 004cdcc2
    POP ESI                             ; 004cdcc3
    JMP 0x004cdbd5                      ; 004cdcc4
        ;   XREF to: 004cdbd5 (UNCONDITIONAL_JUMP)  ; LAB_004cdbd5


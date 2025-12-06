; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_matrix.c_pop_FUN_0050d720(void)
;
;
; XREF[3]:
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 at 0048c640
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 00460720
;   shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90 at 004a1f28
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_00635a95
;   TerminatedCString s_Matrix_unbalance2_00635aa8
;   int g_RelativeX
;   int g_RelativeY
;   int g_RelativeZ
;   int g_LightDirectionX
;   int g_LightDirectionY
;   int g_LightDirectionZ
;   CMatrix3x3i g_TransformMatrix
;   undefined4 g_TransformMatrix[0][1]
;   undefined4 g_TransformMatrix[0][2]
;   undefined4 g_TransformMatrix[1][0]
;   undefined4 g_TransformMatrix[1][1]
;   undefined4 g_TransformMatrix[1][2]
;   undefined4 g_TransformMatrix[2][0]
;   ... and 20 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02f0d3c0]      ; 0050d720 | int g_MatrixStackIndex
        ;   Label: engine_matrix.c_pop_FUN_0050d720
    DEC EDX                             ; 0050d726
    MOV dword ptr [0x02f0d3c0],EDX      ; 0050d727 | int g_MatrixStackIndex
    TEST EDX,EDX                        ; 0050d72d
    JL 0x0050d7fd                       ; 0050d72f | LAB_0050d7fd
        ;   XREF to: 0050d7fd (CONDITIONAL_JUMP)
    MOV EAX,[0x02f0d3c0]                ; 0050d735 | int g_MatrixStackIndex
        ;   Label: LAB_0050d735
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d3c4] ; 0050d73a | int[10] g_MatrixStack_M00
    MOV dword ptr [0x02d052e8],EDX      ; 0050d741 | CMatrix3x3i g_TransformMatrix
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d3ec] ; 0050d747 | int[10] g_MatrixStack_M01
    MOV dword ptr [0x02d052ec],EDX      ; 0050d74e | g_TransformMatrix[0][1]
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d414] ; 0050d754 | int[10] g_MatrixStack_M02
    MOV dword ptr [0x02d052f0],EDX      ; 0050d75b | g_TransformMatrix[0][2]
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d43c] ; 0050d761 | int[10] g_MatrixStack_M10
    MOV dword ptr [0x02d052f4],EDX      ; 0050d768 | g_TransformMatrix[1][0]
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d464] ; 0050d76e | int[10] g_MatrixStack_M11
    MOV dword ptr [0x02d052f8],EDX      ; 0050d775 | g_TransformMatrix[1][1]
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d48c] ; 0050d77b | int[10] g_MatrixStack_M12
    MOV dword ptr [0x02d052fc],EDX      ; 0050d782 | g_TransformMatrix[1][2]
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d4b4] ; 0050d788 | int[10] g_MatrixStack_M20
    MOV dword ptr [0x02d05300],EDX      ; 0050d78f | g_TransformMatrix[2][0]
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d4dc] ; 0050d795 | int[10] g_MatrixStack_M21
    MOV dword ptr [0x02d05304],EDX      ; 0050d79c | g_TransformMatrix[2][1]
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d504] ; 0050d7a2 | int[10] g_MatrixStack_M22
    MOV dword ptr [0x02d05308],EDX      ; 0050d7a9 | g_TransformMatrix[2][2]
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d52c] ; 0050d7af | int[10] g_MatrixStack_RelX
    MOV dword ptr [0x02d052b8],EDX      ; 0050d7b6 | int g_RelativeX
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d554] ; 0050d7bc | int[10] g_MatrixStack_RelY
    MOV dword ptr [0x02d052bc],EDX      ; 0050d7c3 | int g_RelativeY
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d57c] ; 0050d7c9 | int[10] g_MatrixStack_RelZ
    MOV dword ptr [0x02d052c0],EDX      ; 0050d7d0 | int g_RelativeZ
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d5a4] ; 0050d7d6 | int[10] g_MatrixStack_Unk1
    MOV dword ptr [0x02d052dc],EDX      ; 0050d7dd | int g_LightDirectionX
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d5cc] ; 0050d7e3 | int[10] g_MatrixStack_Unk2
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d5f4] ; 0050d7ea | int[10] g_MatrixStack_Unk3
    MOV dword ptr [0x02d052e0],EDX      ; 0050d7f1 | int g_LightDirectionY
    MOV [0x02d052e4],EAX                ; 0050d7f7 | int g_LightDirectionZ
    RET                                 ; 0050d7fc
    PUSH ESI                            ; 0050d7fd
        ;   Label: LAB_0050d7fd
    PUSH EBX                            ; 0050d7fe
    MOV EBX,0x635a95                    ; 0050d7ff | = "..\\engine\\matrix.c" | s_engine_matrix_c_00635a95 = ..\engine\matrix.c
    MOV ESI,0x358                       ; 0050d804
    PUSH 0x635aa8                       ; 0050d809 | = "Matrix unbalance2" | s_Matrix_unbalance2_00635aa8 = Matrix unbalance2
    MOV dword ptr [0x02f0ca48],EBX      ; 0050d80e | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0050d814 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050d81a | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050d81f
    POP EBX                             ; 0050d822
    POP ESI                             ; 0050d823
    JMP 0x0050d735                      ; 0050d824 | LAB_0050d735
        ;   XREF to: 0050d735 (UNCONDITIONAL_JUMP)


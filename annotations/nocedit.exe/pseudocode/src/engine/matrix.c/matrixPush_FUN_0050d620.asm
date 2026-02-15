; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_matrixPush_FUN_0050d620(void)
;
;
; XREF[3]:
;   core_mimic.cpp_CMimic_FUN_005205f0 at 0052069f
;   core_mimic.cpp_FUN_0051f130 at 0051f133
;   engine_drender.cpp_CDemonRenderer_matrixPush_FUN_0050d620 at 0048c630
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_00635a71
;   TerminatedCString s_Matrix_unbalance_00635a84
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

    MOV EAX,[0x02f0d3c0]                ; 0050d620 | g_MatrixStackIndex
        ;   Label: engine_matrix.c_matrixPush_FUN_0050d620
    MOV EDX,dword ptr [0x02d052b8]      ; 0050d625 | g_RelativeX
    MOV dword ptr [EAX*0x4 + 0x2f0d52c],EDX ; 0050d62b | g_MatrixStack_RelX
    MOV EDX,dword ptr [0x02d052bc]      ; 0050d632 | g_RelativeY
    MOV dword ptr [EAX*0x4 + 0x2f0d554],EDX ; 0050d638 | g_MatrixStack_RelY
    MOV EDX,dword ptr [0x02d052c0]      ; 0050d63f | g_RelativeZ
    MOV dword ptr [EAX*0x4 + 0x2f0d57c],EDX ; 0050d645 | g_MatrixStack_RelZ
    MOV EDX,dword ptr [0x02d052dc]      ; 0050d64c | g_LightDirectionX
    MOV dword ptr [EAX*0x4 + 0x2f0d5a4],EDX ; 0050d652 | g_MatrixStack_Unk1
    MOV EDX,dword ptr [0x02d052e0]      ; 0050d659 | g_LightDirectionY
    MOV dword ptr [EAX*0x4 + 0x2f0d5cc],EDX ; 0050d65f | g_MatrixStack_Unk2
    MOV EDX,dword ptr [0x02d052e4]      ; 0050d666 | g_LightDirectionZ
    MOV dword ptr [EAX*0x4 + 0x2f0d5f4],EDX ; 0050d66c | g_MatrixStack_Unk3
    MOV EDX,dword ptr [0x02d052e8]      ; 0050d673 | g_TransformMatrix
    MOV dword ptr [EAX*0x4 + 0x2f0d3c4],EDX ; 0050d679 | g_MatrixStack_M00
    MOV EDX,dword ptr [0x02d052ec]      ; 0050d680 | g_TransformMatrix[0][1]
    MOV dword ptr [EAX*0x4 + 0x2f0d3ec],EDX ; 0050d686 | g_MatrixStack_M01
    MOV EDX,dword ptr [0x02d052f0]      ; 0050d68d | g_TransformMatrix[0][2]
    MOV dword ptr [EAX*0x4 + 0x2f0d414],EDX ; 0050d693 | g_MatrixStack_M02
    MOV EDX,dword ptr [0x02d052f4]      ; 0050d69a | g_TransformMatrix[1][0]
    MOV dword ptr [EAX*0x4 + 0x2f0d43c],EDX ; 0050d6a0 | g_MatrixStack_M10
    MOV EDX,dword ptr [0x02d052f8]      ; 0050d6a7 | g_TransformMatrix[1][1]
    MOV dword ptr [EAX*0x4 + 0x2f0d464],EDX ; 0050d6ad | g_MatrixStack_M11
    MOV EDX,dword ptr [0x02d052fc]      ; 0050d6b4 | g_TransformMatrix[1][2]
    MOV dword ptr [EAX*0x4 + 0x2f0d48c],EDX ; 0050d6ba | g_MatrixStack_M12
    MOV EDX,dword ptr [0x02d05300]      ; 0050d6c1 | g_TransformMatrix[2][0]
    MOV dword ptr [EAX*0x4 + 0x2f0d4b4],EDX ; 0050d6c7 | g_MatrixStack_M20
    MOV EDX,dword ptr [0x02d05304]      ; 0050d6ce | g_TransformMatrix[2][1]
    MOV dword ptr [EAX*0x4 + 0x2f0d4dc],EDX ; 0050d6d4 | g_MatrixStack_M21
    MOV EDX,dword ptr [0x02d05308]      ; 0050d6db | g_TransformMatrix[2][2]
    MOV dword ptr [EAX*0x4 + 0x2f0d504],EDX ; 0050d6e1 | g_MatrixStack_M22
    LEA EDX,[EAX + 0x1]                 ; 0050d6e8
    MOV dword ptr [0x02f0d3c0],EDX      ; 0050d6eb | g_MatrixStackIndex
    CMP EDX,0x9                         ; 0050d6f1
    JG 0x0050d6f7                       ; 0050d6f4
        ;   XREF to: 0050d6f7 (CONDITIONAL_JUMP)  ; LAB_0050d6f7
    RET                                 ; 0050d6f6
    PUSH ESI                            ; 0050d6f7
        ;   Label: LAB_0050d6f7
    PUSH EBX                            ; 0050d6f8
    MOV EBX,0x635a71                    ; 0050d6f9 | = "..\\engine\\matrix.c"
    MOV ESI,0x34b                       ; 0050d6fe
    PUSH 0x635a84                       ; 0050d703 | = "Matrix unbalance"
    MOV dword ptr [0x02f0ca48],EBX      ; 0050d708 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0050d70e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050d714
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0050d719
    POP EBX                             ; 0050d71c
    POP ESI                             ; 0050d71d
    RET                                 ; 0050d71e


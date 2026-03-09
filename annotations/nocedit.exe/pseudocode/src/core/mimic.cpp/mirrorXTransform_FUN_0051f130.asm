; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mimic_cpp_mirrorXTransform_FUN_0051f130(void)
;
;
; Referenced Globals:
;   int g_RelativeX
;   int g_LightDirectionX
;   CMatrix3x3i g_TransformMatrix
;   undefined4 g_TransformMatrix[0][1]
;   undefined4 g_TransformMatrix[0][2]
;
; Called Functions:
;   engine_matrix.c_matrixPush_FUN_0050d620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051f130
        ;   Label: core_mimic.cpp_mirrorXTransform_FUN_0051f130
    PUSH ESI                            ; 0051f131
    PUSH EDI                            ; 0051f132
    CALL engine_matrix.c_matrixPush_FUN_0050d620 ; 0051f133
        ;   XREF to: 0050d620 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPush_FUN_0050d620()
    MOV EDX,dword ptr [0x02d052b8]      ; 0051f138 | g_RelativeX
    MOV ECX,dword ptr [0x02d052dc]      ; 0051f13e | g_LightDirectionX
    MOV EBX,dword ptr [0x02d052e8]      ; 0051f144 | g_TransformMatrix
    MOV ESI,dword ptr [0x02d052ec]      ; 0051f14a | g_TransformMatrix[0][1]
    MOV EDI,dword ptr [0x02d052f0]      ; 0051f150 | g_TransformMatrix[0][2]
    NEG EDX                             ; 0051f156
    NEG ECX                             ; 0051f158
    NEG EBX                             ; 0051f15a
    NEG ESI                             ; 0051f15c
    NEG EDI                             ; 0051f15e
    MOV dword ptr [0x02d052b8],EDX      ; 0051f160 | g_RelativeX
    MOV dword ptr [0x02d052dc],ECX      ; 0051f166 | g_LightDirectionX
    MOV dword ptr [0x02d052e8],EBX      ; 0051f16c | g_TransformMatrix
    MOV dword ptr [0x02d052ec],ESI      ; 0051f172 | g_TransformMatrix[0][1]
    MOV dword ptr [0x02d052f0],EDI      ; 0051f178 | g_TransformMatrix[0][2]
    POP EDI                             ; 0051f17e
    POP ESI                             ; 0051f17f
    POP EBX                             ; 0051f180
    RET                                 ; 0051f181


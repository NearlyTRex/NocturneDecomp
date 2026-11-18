; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_processCameraRelativePoint_FUN_004037e0(SMRGLPoint *block)
;
; Parameters:
; SMRGLPoint *     Stack[0x4]:4   block
;
; XREF[3]:
;   engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046ce60 at 0046ce7e
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 at 0046cec7
;   shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_00481150 at 00481183
;
; Referenced Globals:
;   int g_StoredX
;   int g_StoredY
;   int g_StoredZ
;   int g_RelativeX
;   int g_RelativeY
;   int g_RelativeZ
;   int g_CameraOriginX
;   int g_CameraOriginY
;   int g_CameraOriginZ
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004037e0
        ;   Label: engine_3d.c_processCameraRelativePoint_FUN_004037e0
    PUSH ESI                            ; 004037e1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004037e2
    MOV EDX,dword ptr [EAX + 0x4]       ; 004037e6
    MOV dword ptr [0x00730408],EDX      ; 004037e9 | g_StoredX
    MOV EDX,dword ptr [EAX + 0x8]       ; 004037ef
    MOV dword ptr [0x0073040c],EDX      ; 004037f2 | g_StoredY
    MOV EDX,dword ptr [EAX + 0xc]       ; 004037f8
    MOV ECX,dword ptr [EAX + 0x4]       ; 004037fb
    MOV dword ptr [0x00730410],EDX      ; 004037fe | g_StoredZ
    MOV EDX,dword ptr [0x01c6e2d8]      ; 00403804 | g_CameraOriginX
    SUB EDX,ECX                         ; 0040380a
    MOV EBX,dword ptr [EAX + 0x8]       ; 0040380c
    MOV dword ptr [0x01c6e2cc],EDX      ; 0040380f | g_RelativeX
    MOV EDX,dword ptr [0x01c6e2dc]      ; 00403815 | g_CameraOriginY
    SUB EDX,EBX                         ; 0040381b
    MOV ESI,dword ptr [EAX + 0xc]       ; 0040381d
    MOV dword ptr [0x01c6e2d0],EDX      ; 00403820 | g_RelativeY
    MOV EDX,dword ptr [0x01c6e2e0]      ; 00403826 | g_CameraOriginZ
    SUB EDX,ESI                         ; 0040382c
    ADD EAX,0x10                        ; 0040382e
    MOV dword ptr [0x01c6e2d4],EDX      ; 00403831 | g_RelativeZ
    POP ESI                             ; 00403837
    POP EBX                             ; 00403838
    RET                                 ; 00403839


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_processCameraRelativePoint_FUN_004044d0(CQuaternion4f *input_point)
;
; Parameters:
; CQuaternion4f *  Stack[0x4]:4   input_point
;
; XREF[3]:
;   engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_004609d0 at 004609ee
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 at 00460a37
;   shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_00472fd0 at 00473003
;
; Referenced Globals:
;   undefined4 DAT_006b028c
;   undefined4 DAT_006b0290
;   undefined4 DAT_006b0294
;   int g_RelativeX
;   int g_RelativeY
;   int g_RelativeZ
;   int g_CameraOriginX
;   int g_CameraOriginY
;   int g_CameraOriginZ
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004044d0
        ;   Label: engine_3d.c_processCameraRelativePoint_FUN_004044d0
    PUSH ESI                            ; 004044d1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004044d2
    MOV EDX,dword ptr [EAX + 0x4]       ; 004044d6
    MOV dword ptr [0x006b028c],EDX      ; 004044d9 | DAT_006b028c
    MOV EDX,dword ptr [EAX + 0x8]       ; 004044df
    MOV dword ptr [0x006b0290],EDX      ; 004044e2 | DAT_006b0290
    MOV EDX,dword ptr [EAX + 0xc]       ; 004044e8
    MOV ECX,dword ptr [EAX + 0x4]       ; 004044eb
    MOV dword ptr [0x006b0294],EDX      ; 004044ee | DAT_006b0294
    MOV EDX,dword ptr [0x01c039c4]      ; 004044f4 | g_CameraOriginX
    SUB EDX,ECX                         ; 004044fa
    MOV EBX,dword ptr [EAX + 0x8]       ; 004044fc
    MOV dword ptr [0x01c039b8],EDX      ; 004044ff | g_RelativeX
    MOV EDX,dword ptr [0x01c039c8]      ; 00404505 | g_CameraOriginY
    SUB EDX,EBX                         ; 0040450b
    MOV ESI,dword ptr [EAX + 0xc]       ; 0040450d
    MOV dword ptr [0x01c039bc],EDX      ; 00404510 | g_RelativeY
    MOV EDX,dword ptr [0x01c039cc]      ; 00404516 | g_CameraOriginZ
    SUB EDX,ESI                         ; 0040451c
    ADD EAX,0x10                        ; 0040451e
    MOV dword ptr [0x01c039c0],EDX      ; 00404521 | g_RelativeZ
    POP ESI                             ; 00404527
    POP EBX                             ; 00404528
    RET                                 ; 00404529


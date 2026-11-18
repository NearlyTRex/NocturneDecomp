; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_processCameraRelativePoint_FUN_00403830(SMRGLPoint *block)
;
; Parameters:
; SMRGLPoint *     Stack[0x4]:4   block
;
; XREF[3]:
;   engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046b280 at 0046b29e
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 at 0046b2e7
;   shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_0047ff50 at 0047ff83
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

    PUSH EBX                            ; 00403830
        ;   Label: engine_3d.c_processCameraRelativePoint_FUN_00403830
    PUSH ESI                            ; 00403831
    MOV EAX,dword ptr [ESP + 0xc]       ; 00403832
    MOV EDX,dword ptr [EAX + 0x4]       ; 00403836
    MOV dword ptr [0x0070ca88],EDX      ; 00403839 | g_StoredX
    MOV EDX,dword ptr [EAX + 0x8]       ; 0040383f
    MOV dword ptr [0x0070ca8c],EDX      ; 00403842 | g_StoredY
    MOV EDX,dword ptr [EAX + 0xc]       ; 00403848
    MOV ECX,dword ptr [EAX + 0x4]       ; 0040384b
    MOV dword ptr [0x0070ca90],EDX      ; 0040384e | g_StoredZ
    MOV EDX,dword ptr [0x01c38b78]      ; 00403854 | g_CameraOriginX
    SUB EDX,ECX                         ; 0040385a
    MOV EBX,dword ptr [EAX + 0x8]       ; 0040385c
    MOV dword ptr [0x01c38b6c],EDX      ; 0040385f | g_RelativeX
    MOV EDX,dword ptr [0x01c38b7c]      ; 00403865 | g_CameraOriginY
    SUB EDX,EBX                         ; 0040386b
    MOV ESI,dword ptr [EAX + 0xc]       ; 0040386d
    MOV dword ptr [0x01c38b70],EDX      ; 00403870 | g_RelativeY
    MOV EDX,dword ptr [0x01c38b80]      ; 00403876 | g_CameraOriginZ
    SUB EDX,ESI                         ; 0040387c
    ADD EAX,0x10                        ; 0040387e
    MOV dword ptr [0x01c38b74],EDX      ; 00403881 | g_RelativeZ
    POP ESI                             ; 00403887
    POP EBX                             ; 00403888
    RET                                 ; 00403889


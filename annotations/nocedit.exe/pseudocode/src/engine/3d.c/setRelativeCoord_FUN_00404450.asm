; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * __cdecl engine_3d_c_setRelativeCoord_FUN_00404450(SMRGLHeaderPrimitive *primitive)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   primitive
;
; Referenced Globals:
;   int g_RelativeX
;   int g_RelativeY
;   int g_RelativeZ
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00404450
        ;   Label: engine_3d.c_setRelativeCoord_FUN_00404450
    MOV EDX,dword ptr [0x02d052b8]      ; 00404454 | g_RelativeX
    MOV EAX,dword ptr [ECX + 0x4]       ; 0040445a
    IMUL EDX                            ; 0040445d
    SHRD EAX,EDX,0x10                   ; 0040445f
    MOV EDX,dword ptr [0x02d052bc]      ; 00404463 | g_RelativeY
    MOV [0x02d052b8],EAX                ; 00404469 | g_RelativeX
    MOV EAX,dword ptr [ECX + 0x4]       ; 0040446e
    IMUL EDX                            ; 00404471
    SHRD EAX,EDX,0x10                   ; 00404473
    MOV EDX,dword ptr [0x02d052c0]      ; 00404477 | g_RelativeZ
    MOV [0x02d052bc],EAX                ; 0040447d | g_RelativeY
    MOV EAX,dword ptr [ECX + 0x4]       ; 00404482
    IMUL EDX                            ; 00404485
    SHRD EAX,EDX,0x10                   ; 00404487
    MOV [0x02d052c0],EAX                ; 0040448b | g_RelativeZ
    LEA EAX,[ECX + 0x8]                 ; 00404490
    RET                                 ; 00404493


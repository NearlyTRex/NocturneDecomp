; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_setRelativeCoord_FUN_00404320(SMRGLHeaderPrimitive *primitive)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   primitive
;
; Referenced Globals:
;   int g_INT_01c6e2cc
;   int g_INT_01c6e2d0
;   int g_INT_01c6e2d4
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00404320
        ;   Label: engine_3d.c_setRelativeCoord_FUN_00404320
    MOV EDX,dword ptr [0x01c6e2cc]      ; 00404324 | g_INT_01c6e2cc
    MOV EAX,dword ptr [ECX + 0x4]       ; 0040432a
    IMUL EDX                            ; 0040432d
    SHRD EAX,EDX,0x10                   ; 0040432f
    MOV EDX,dword ptr [0x01c6e2d0]      ; 00404333 | g_INT_01c6e2d0
    MOV [0x01c6e2cc],EAX                ; 00404339 | g_INT_01c6e2cc
    MOV EAX,dword ptr [ECX + 0x4]       ; 0040433e
    IMUL EDX                            ; 00404341
    SHRD EAX,EDX,0x10                   ; 00404343
    MOV EDX,dword ptr [0x01c6e2d4]      ; 00404347 | g_INT_01c6e2d4
    MOV [0x01c6e2d0],EAX                ; 0040434d | g_INT_01c6e2d0
    MOV EAX,dword ptr [ECX + 0x4]       ; 00404352
    IMUL EDX                            ; 00404355
    SHRD EAX,EDX,0x10                   ; 00404357
    MOV [0x01c6e2d4],EAX                ; 0040435b | g_INT_01c6e2d4
    LEA EAX,[ECX + 0x8]                 ; 00404360
    RET                                 ; 00404363


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_skipMRGLPrimitive_FUN_00405740(SMRGLHeaderExtended *primitive)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   primitive
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00405740
        ;   Label: engine_3d.c_skipMRGLPrimitive_FUN_00405740
    ADD EAX,dword ptr [EAX + 0x4]       ; 00405744
    RET                                 ; 00405747


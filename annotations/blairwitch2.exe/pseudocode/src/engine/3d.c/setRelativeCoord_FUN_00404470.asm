; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_setRelativeCoord_FUN_00404470(SMRGLHeaderPrimitive *primitive)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   primitive
;
; Referenced Globals:
;   undefined4 DAT_01c38b6c
;   undefined4 DAT_01c38b70
;   undefined4 DAT_01c38b74
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00404470
        ;   Label: engine_3d.c_setRelativeCoord_FUN_00404470
    MOV EDX,dword ptr [0x01c38b6c]      ; 00404474 | DAT_01c38b6c
    MOV EAX,dword ptr [ECX + 0x4]       ; 0040447a
    IMUL EDX                            ; 0040447d
    SHRD EAX,EDX,0x10                   ; 0040447f
    MOV EDX,dword ptr [0x01c38b70]      ; 00404483 | DAT_01c38b70
    MOV [0x01c38b6c],EAX                ; 00404489 | DAT_01c38b6c
    MOV EAX,dword ptr [ECX + 0x4]       ; 0040448e
    IMUL EDX                            ; 00404491
    SHRD EAX,EDX,0x10                   ; 00404493
    MOV EDX,dword ptr [0x01c38b74]      ; 00404497 | DAT_01c38b74
    MOV [0x01c38b70],EAX                ; 0040449d | DAT_01c38b70
    MOV EAX,dword ptr [ECX + 0x4]       ; 004044a2
    IMUL EDX                            ; 004044a5
    SHRD EAX,EDX,0x10                   ; 004044a7
    MOV [0x01c38b74],EAX                ; 004044ab | DAT_01c38b74
    LEA EAX,[ECX + 0x8]                 ; 004044b0
    RET                                 ; 004044b3


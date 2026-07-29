; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_setRelativeCoord_FUN_00405750(SMRGLHeaderPrimitive *primitive)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   primitive
;
; Referenced Globals:
;   undefined4 DAT_01c039b8
;   undefined4 DAT_01c039bc
;   undefined4 DAT_01c039c0
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00405750
        ;   Label: engine_3d.c_setRelativeCoord_FUN_00405750
    MOV EDX,dword ptr [0x01c039b8]      ; 00405754 | DAT_01c039b8
    MOV EAX,dword ptr [ECX + 0x4]       ; 0040575a
    IMUL EDX                            ; 0040575d
    SHRD EAX,EDX,0x10                   ; 0040575f
    MOV EDX,dword ptr [0x01c039bc]      ; 00405763 | DAT_01c039bc
    MOV [0x01c039b8],EAX                ; 00405769 | DAT_01c039b8
    MOV EAX,dword ptr [ECX + 0x4]       ; 0040576e
    IMUL EDX                            ; 00405771
    SHRD EAX,EDX,0x10                   ; 00405773
    MOV EDX,dword ptr [0x01c039c0]      ; 00405777 | DAT_01c039c0
    MOV [0x01c039bc],EAX                ; 0040577d | DAT_01c039bc
    MOV EAX,dword ptr [ECX + 0x4]       ; 00405782
    IMUL EDX                            ; 00405785
    SHRD EAX,EDX,0x10                   ; 00405787
    MOV [0x01c039c0],EAX                ; 0040578b | DAT_01c039c0
    LEA EAX,[ECX + 0x8]                 ; 00405790
    RET                                 ; 00405793


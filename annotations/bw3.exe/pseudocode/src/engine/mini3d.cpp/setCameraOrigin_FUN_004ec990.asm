; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setCameraOrigin_FUN_004ec990(CVector3f *origin)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   origin
;
; Referenced Globals:
;   undefined4 DAT_01d76c90
;   undefined4 DAT_01d76c94
;   undefined4 DAT_01d76c98
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ec990
        ;   Label: engine_mini3d.cpp_setCameraOrigin_FUN_004ec990
    FLD float ptr [EAX]                 ; 004ec994
    FLD float ptr [EAX + 0x8]           ; 004ec996
    MOV EDX,dword ptr [EAX + 0x4]       ; 004ec999
    MOV dword ptr [0x01d76c94],EDX      ; 004ec99c | DAT_01d76c94
    FSTP float ptr [0x01d76c98]         ; 004ec9a2 | DAT_01d76c98
    FSTP float ptr [0x01d76c90]         ; 004ec9a8 | DAT_01d76c90
    RET                                 ; 004ec9ae


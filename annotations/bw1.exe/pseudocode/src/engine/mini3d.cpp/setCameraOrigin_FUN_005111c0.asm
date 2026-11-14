; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setCameraOrigin_FUN_005111c0(CVector3f *origin)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   origin
;
; Referenced Globals:
;   undefined4 DAT_01d22510
;   undefined4 DAT_01d22514
;   undefined4 DAT_01d22518
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005111c0
        ;   Label: engine_mini3d.cpp_setCameraOrigin_FUN_005111c0
    FLD float ptr [EAX]                 ; 005111c4
    FLD float ptr [EAX + 0x8]           ; 005111c6
    MOV EDX,dword ptr [EAX + 0x4]       ; 005111c9
    MOV dword ptr [0x01d22514],EDX      ; 005111cc | DAT_01d22514
    FSTP float ptr [0x01d22518]         ; 005111d2 | DAT_01d22518
    FSTP float ptr [0x01d22510]         ; 005111d8 | DAT_01d22510
    RET                                 ; 005111de


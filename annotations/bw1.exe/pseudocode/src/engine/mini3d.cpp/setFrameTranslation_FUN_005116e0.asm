; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setFrameTranslation_FUN_005116e0(CVector3f *position)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   position
;
; XREF[1]:
;   engine_mini3d.cpp_addDynamicLight_FUN_00514150 at 00514243
;
; Referenced Globals:
;   undefined4 DAT_01d22510
;   undefined4 DAT_01d22514
;   undefined4 DAT_01d22518
;   undefined4 DAT_01d2257c
;   undefined4 DAT_01d24ffc
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005116e0
        ;   Label: engine_mini3d.cpp_setFrameTranslation_FUN_005116e0
    FLD float ptr [0x01d22510]          ; 005116e4 | DAT_01d22510
    MOV EAX,[0x01d2257c]                ; 005116ea | DAT_01d2257c
    FSUB float ptr [EDX]                ; 005116ef
    FLD float ptr [0x01d22514]          ; 005116f1 | DAT_01d22514
    FXCH                                ; 005116f7
    FSTP float ptr [EAX + 0x24]         ; 005116f9
    FSUB float ptr [EDX + 0x4]          ; 005116fc
    FLD float ptr [0x01d22518]          ; 005116ff | DAT_01d22518
    FXCH                                ; 00511705
    FSTP float ptr [EAX + 0x28]         ; 00511707
    FSUB float ptr [EDX + 0x8]          ; 0051170a
    MOV EDX,0x1                         ; 0051170d
    FSTP float ptr [EAX + 0x2c]         ; 00511712
    MOV dword ptr [0x01d24ffc],EDX      ; 00511715 | DAT_01d24ffc
    RET                                 ; 0051171b


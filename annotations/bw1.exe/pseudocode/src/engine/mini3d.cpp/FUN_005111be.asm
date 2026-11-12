; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_005111be(undefined4 *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d22510
;   undefined4 DAT_01d22514
;   undefined4 DAT_01d22518
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 005111be
        ;   Label: engine_mini3d.cpp_FUN_005111be
    MOV EAX,dword ptr [ESP + 0x4]       ; 005111c0
    FLD float ptr [EAX]                 ; 005111c4
    FLD float ptr [EAX + 0x8]           ; 005111c6
    MOV EDX,dword ptr [EAX + 0x4]       ; 005111c9
    MOV dword ptr [0x01d22514],EDX      ; 005111cc | DAT_01d22514
    FSTP float ptr [0x01d22518]         ; 005111d2 | DAT_01d22518
    FSTP float ptr [0x01d22510]         ; 005111d8 | DAT_01d22510
    RET                                 ; 005111de


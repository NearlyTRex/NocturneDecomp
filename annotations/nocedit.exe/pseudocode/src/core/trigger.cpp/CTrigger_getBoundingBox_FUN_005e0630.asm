; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBoundingBox3D * __cdecl core_trigger_cpp_CTrigger_getBoundingBox_FUN_005e0630(CTrigger *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Referenced Globals:
;   double DOUBLE_0065566c = 0.5
;   double DOUBLE_00655674 = 0.100000000000000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005e0630
        ;   Label: core_trigger.cpp_CTrigger_getBoundingBox_FUN_005e0630
    MOV EAX,dword ptr [ESP + 0x8]       ; 005e0634
    FLD float ptr [EDX + 0x160]         ; 005e0638
    FCHS                                ; 005e063e
    FLD double ptr [0x0065566c]         ; 005e0640 | DOUBLE_0065566c
    FXCH                                ; 005e0646
    FMUL ST1                            ; 005e0648
    MOV dword ptr [EAX + 0x4],0xbdcccccd ; 005e064a
    FSTP float ptr [EAX]                ; 005e0651
    FLD float ptr [EDX + 0x168]         ; 005e0653
    FCHS                                ; 005e0659
    FMUL ST1                            ; 005e065b
    FSTP float ptr [EAX + 0x8]          ; 005e065d
    FLD float ptr [EDX + 0x160]         ; 005e0660
    FMUL ST1                            ; 005e0666
    FSTP float ptr [EAX + 0xc]          ; 005e0668
    FLD float ptr [EDX + 0x164]         ; 005e066b
    FADD double ptr [0x00655674]        ; 005e0671 | DOUBLE_00655674
    FSTP float ptr [EAX + 0x10]         ; 005e0677
    FMUL float ptr [EDX + 0x168]        ; 005e067a
    FSTP float ptr [EAX + 0x14]         ; 005e0680
    RET                                 ; 005e0683


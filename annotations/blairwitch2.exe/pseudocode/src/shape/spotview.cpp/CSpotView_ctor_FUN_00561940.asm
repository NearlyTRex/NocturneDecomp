; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSpotView * __cdecl shape_spotview_cpp_CSpotView_ctor_FUN_00561940(CSpotView *this_ptr)
;
; Parameters:
; CSpotView *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_spotview.cpp_staticInit_FUN_00561930 at 00561935
;
; Referenced Globals:
;   undefined4 DAT_0061e2ac
;   undefined4 DAT_0061e2b0
;   undefined4 DAT_0264bd80
;   undefined4 DAT_0264bd84
;
; Called Functions:
;   shape_spotview.cpp_CSpotView_reset_FUN_005619a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00561940
        ;   Label: shape_spotview.cpp_CSpotView_ctor_FUN_00561940
    MOV EBX,dword ptr [ESP + 0x8]       ; 00561941
    FLD float ptr [0x0061e2ac]          ; 00561945 | DAT_0061e2ac
    FLD float ptr [0x0061e2b0]          ; 0056194b | DAT_0061e2b0
    FLD float ptr [0x0264bd80]          ; 00561951 | DAT_0264bd80
    LEA EAX,[EBX + 0x18]                ; 00561957
    FLD float ptr [0x0264bd84]          ; 0056195a | DAT_0264bd84
    MOV dword ptr [EAX + 0x8],0x0       ; 00561960
    PUSH 0x1f                           ; 00561967
    MOV EDX,dword ptr [EAX + 0x8]       ; 00561969
    MOV dword ptr [EAX + 0x4],EDX       ; 0056196c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056196f
    MOV dword ptr [EAX],EDX             ; 00561972
    MOV dword ptr [EBX + 0x10],0x0      ; 00561974
    PUSH EBX                            ; 0056197b
    FXCH ST3                            ; 0056197c
    FSTP float ptr [EBX]                ; 0056197e
    FXCH                                ; 00561980
    FSTP float ptr [EBX + 0x4]          ; 00561982
    FSTP float ptr [EBX + 0x8]          ; 00561985
    FSTP float ptr [EBX + 0xc]          ; 00561988
    MOV dword ptr [EBX + 0x14],0x0      ; 0056198b
    CALL shape_spotview.cpp_CSpotView_reset_FUN_005619a0 ; 00561992
        ;   XREF to: 005619a0 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_reset_FUN_005619a0(CSpotView * this_ptr, uint control_flags)
    ADD ESP,0x8                         ; 00561997
    MOV EAX,EBX                         ; 0056199a
    POP EBX                             ; 0056199c
    RET                                 ; 0056199d


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSpotView * __cdecl shape_spotview_cpp_CSpotView_ctor_FUN_00567c60(CSpotView *this_ptr)
;
; Parameters:
; CSpotView *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_spotview.cpp_staticInit_FUN_00567c50 at 00567c55
;
; Referenced Globals:
;   undefined4 DAT_0060685c
;   undefined4 DAT_00606860
;   undefined4 DAT_02cf61ac
;   undefined4 DAT_02cf61b0
;
; Called Functions:
;   shape_spotview.cpp_CSpotView_reset_FUN_00567cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567c60
        ;   Label: shape_spotview.cpp_CSpotView_ctor_FUN_00567c60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00567c61
    FLD float ptr [0x0060685c]          ; 00567c65 | DAT_0060685c
    FLD float ptr [0x00606860]          ; 00567c6b | DAT_00606860
    FLD float ptr [0x02cf61ac]          ; 00567c71 | DAT_02cf61ac
    LEA EAX,[EBX + 0x18]                ; 00567c77
    FLD float ptr [0x02cf61b0]          ; 00567c7a | DAT_02cf61b0
    MOV dword ptr [EAX + 0x8],0x0       ; 00567c80
    PUSH 0x1f                           ; 00567c87
    MOV EDX,dword ptr [EAX + 0x8]       ; 00567c89
    MOV dword ptr [EAX + 0x4],EDX       ; 00567c8c
    MOV EDX,dword ptr [EAX + 0x4]       ; 00567c8f
    MOV dword ptr [EAX],EDX             ; 00567c92
    MOV dword ptr [EBX + 0x10],0x0      ; 00567c94
    PUSH EBX                            ; 00567c9b
    FXCH ST3                            ; 00567c9c
    FSTP float ptr [EBX]                ; 00567c9e
    FXCH                                ; 00567ca0
    FSTP float ptr [EBX + 0x4]          ; 00567ca2
    FSTP float ptr [EBX + 0x8]          ; 00567ca5
    FSTP float ptr [EBX + 0xc]          ; 00567ca8
    MOV dword ptr [EBX + 0x14],0x0      ; 00567cab
    CALL shape_spotview.cpp_CSpotView_reset_FUN_00567cc0 ; 00567cb2
        ;   XREF to: 00567cc0 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_reset_FUN_00567cc0(CSpotView * this_ptr, uint control_flags)
    ADD ESP,0x8                         ; 00567cb7
    MOV EAX,EBX                         ; 00567cba
    POP EBX                             ; 00567cbc
    RET                                 ; 00567cbd


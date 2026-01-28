; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setutil_cpp_C3DSCamera_scalePosition_FUN_00586150(C3DSCamera *this_ptr,float scale)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   scale
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00586150
        ;   Label: core_setutil.cpp_C3DSCamera_scalePosition_FUN_00586150
    FLD float ptr [ESP + 0x8]           ; 00586154
    FLD float ptr [EAX + 0x100]         ; 00586158
    FMUL ST1                            ; 0058615e
    FLD float ptr [EAX + 0x104]         ; 00586160
    FMUL ST2                            ; 00586166
    FLD float ptr [EAX + 0x108]         ; 00586168
    FMULP ST3                           ; 0058616e
    FSTP float ptr [EAX + 0x104]        ; 00586170
    FXCH                                ; 00586176
    FSTP float ptr [EAX + 0x108]        ; 00586178
    FSTP float ptr [EAX + 0x100]        ; 0058617e
    RET                                 ; 00586184


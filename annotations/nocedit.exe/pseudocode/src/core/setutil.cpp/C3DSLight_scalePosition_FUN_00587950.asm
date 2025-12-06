; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setutil.cpp_C3DSLight_scalePosition_FUN_00587950(C3DSLight * this_ptr, float scale)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   scale
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00587950
        ;   Label: core_setutil.cpp_C3DSLight_scalePosition_FUN_00587950
    FLD float ptr [ESP + 0x8]           ; 00587954
    FLD float ptr [EAX + 0x104]         ; 00587958
    FMUL ST1                            ; 0058795e
    FLD float ptr [EAX + 0x108]         ; 00587960
    FMUL ST2                            ; 00587966
    FLD float ptr [EAX + 0x10c]         ; 00587968
    FMUL ST3                            ; 0058796e
    FLD float ptr [EAX + 0x11d0]        ; 00587970
    FMUL ST4                            ; 00587976
    FLD float ptr [EAX + 0x11d4]        ; 00587978
    FMULP ST5                           ; 0058797e
    FXCH ST2                            ; 00587980
    FSTP float ptr [EAX + 0x108]        ; 00587982
    FSTP float ptr [EAX + 0x10c]        ; 00587988
    FSTP float ptr [EAX + 0x11d0]       ; 0058798e
    FXCH                                ; 00587994
    FSTP float ptr [EAX + 0x11d4]       ; 00587996
    FSTP float ptr [EAX + 0x104]        ; 0058799c
    RET                                 ; 005879a2


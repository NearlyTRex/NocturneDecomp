; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_cloth_cpp_applyLightAttenuation_FUN_00440010(CVector3f *v)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   v
;
; Referenced Globals:
;   undefined4 DAT_01d1a0a8
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00440010
        ;   Label: core_cloth.cpp_applyLightAttenuation_FUN_00440010
    MOV EAX,dword ptr [ESP + 0xc]       ; 00440013
    FLD float ptr [EAX + 0x4]           ; 00440017
    FMUL ST0                            ; 0044001a
    FLD float ptr [EAX]                 ; 0044001c
    FMUL ST0                            ; 0044001e
    FADDP                               ; 00440020
    FLD float ptr [EAX + 0x8]           ; 00440022
    FMUL ST0                            ; 00440025
    FADDP                               ; 00440027
    FSTP float ptr [ESP]                ; 00440029
    MOV EDX,dword ptr [ESP]             ; 0044002c
    MOV ECX,dword ptr [0x01d1a0a8]      ; 0044002f | DAT_01d1a0a8
    SAR EDX,0x1                         ; 00440035
    SUB ECX,EDX                         ; 00440037
    MOV dword ptr [ESP + 0x4],ECX       ; 00440039
    FLD float ptr [EAX]                 ; 0044003d
    FMUL float ptr [ESP + 0x4]          ; 0044003f
    FLD float ptr [EAX + 0x4]           ; 00440043
    FMUL float ptr [ESP + 0x4]          ; 00440046
    FLD float ptr [EAX + 0x8]           ; 0044004a
    FMUL float ptr [ESP + 0x4]          ; 0044004d
    FXCH ST2                            ; 00440051
    FSTP float ptr [EAX]                ; 00440053
    FSTP float ptr [EAX + 0x4]          ; 00440055
    FSTP float ptr [EAX + 0x8]          ; 00440058
    ADD ESP,0x8                         ; 0044005b
    RET                                 ; 0044005e


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_cloth_cpp_applyLightAttenuation_FUN_004423b0(CVector3f *v)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   v
;
; Referenced Globals:
;   undefined4 DAT_01cc8050
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 004423b0
        ;   Label: core_cloth.cpp_applyLightAttenuation_FUN_004423b0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004423b3
    FLD float ptr [EAX + 0x4]           ; 004423b7
    FMUL ST0                            ; 004423ba
    FLD float ptr [EAX]                 ; 004423bc
    FMUL ST0                            ; 004423be
    FADDP                               ; 004423c0
    FLD float ptr [EAX + 0x8]           ; 004423c2
    FMUL ST0                            ; 004423c5
    FADDP                               ; 004423c7
    FSTP float ptr [ESP]                ; 004423c9
    MOV EDX,dword ptr [ESP]             ; 004423cc
    MOV ECX,dword ptr [0x01cc8050]      ; 004423cf | DAT_01cc8050
    SAR EDX,0x1                         ; 004423d5
    SUB ECX,EDX                         ; 004423d7
    MOV dword ptr [ESP + 0x4],ECX       ; 004423d9
    FLD float ptr [EAX]                 ; 004423dd
    FMUL float ptr [ESP + 0x4]          ; 004423df
    FLD float ptr [EAX + 0x4]           ; 004423e3
    FMUL float ptr [ESP + 0x4]          ; 004423e6
    FLD float ptr [EAX + 0x8]           ; 004423ea
    FMUL float ptr [ESP + 0x4]          ; 004423ed
    FXCH ST2                            ; 004423f1
    FSTP float ptr [EAX]                ; 004423f3
    FSTP float ptr [EAX + 0x4]          ; 004423f5
    FSTP float ptr [EAX + 0x8]          ; 004423f8
    ADD ESP,0x8                         ; 004423fb
    RET                                 ; 004423fe


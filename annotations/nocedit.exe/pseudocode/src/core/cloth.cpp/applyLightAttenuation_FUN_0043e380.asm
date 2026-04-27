; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_cloth_cpp_applyLightAttenuation_FUN_0043e380(CVector3f *v)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   v
;
; Referenced Globals:
;   int g_FastInvSqrtMagic
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0043e380
        ;   Label: core_cloth.cpp_applyLightAttenuation_FUN_0043e380
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043e383
    FLD float ptr [EAX + 0x4]           ; 0043e387
    FMUL ST0                            ; 0043e38a
    FLD float ptr [EAX]                 ; 0043e38c
    FMUL ST0                            ; 0043e38e
    FADDP                               ; 0043e390
    FLD float ptr [EAX + 0x8]           ; 0043e392
    FMUL ST0                            ; 0043e395
    FADDP                               ; 0043e397
    FSTP float ptr [ESP]                ; 0043e399
    MOV EDX,dword ptr [ESP]             ; 0043e39c
    MOV ECX,dword ptr [0x02d7a7bc]      ; 0043e39f | g_FastInvSqrtMagic
    SAR EDX,0x1                         ; 0043e3a5
    SUB ECX,EDX                         ; 0043e3a7
    MOV dword ptr [ESP + 0x4],ECX       ; 0043e3a9
    FLD float ptr [EAX]                 ; 0043e3ad
    FMUL float ptr [ESP + 0x4]          ; 0043e3af
    FLD float ptr [EAX + 0x4]           ; 0043e3b3
    FMUL float ptr [ESP + 0x4]          ; 0043e3b6
    FLD float ptr [EAX + 0x8]           ; 0043e3ba
    FMUL float ptr [ESP + 0x4]          ; 0043e3bd
    FXCH ST2                            ; 0043e3c1
    FSTP float ptr [EAX]                ; 0043e3c3
    FSTP float ptr [EAX + 0x4]          ; 0043e3c5
    FSTP float ptr [EAX + 0x8]          ; 0043e3c8
    ADD ESP,0x8                         ; 0043e3cb
    RET                                 ; 0043e3ce


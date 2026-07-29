; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_cloth_cpp_applyLightAttenuation_FUN_00438900(CVector3f *v)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   v
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   undefined4 CVector3f_01c70708.z
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00438900
        ;   Label: core_cloth.cpp_applyLightAttenuation_FUN_00438900
    MOV EAX,dword ptr [ESP + 0xc]       ; 00438903
    FLD float ptr [EAX + 0x4]           ; 00438907
    FMUL ST0                            ; 0043890a
    FLD float ptr [EAX]                 ; 0043890c
    FMUL ST0                            ; 0043890e
    FADDP                               ; 00438910
    FLD float ptr [EAX + 0x8]           ; 00438912
    FMUL ST0                            ; 00438915
    FADDP                               ; 00438917
    FSTP float ptr [ESP]                ; 00438919
    MOV EDX,dword ptr [ESP]             ; 0043891c
    MOV ECX,dword ptr [0x01c70710]      ; 0043891f | CVector3f_01c70708.z
    SAR EDX,0x1                         ; 00438925
    SUB ECX,EDX                         ; 00438927
    MOV dword ptr [ESP + 0x4],ECX       ; 00438929
    FLD float ptr [EAX]                 ; 0043892d
    FMUL float ptr [ESP + 0x4]          ; 0043892f
    FLD float ptr [EAX + 0x4]           ; 00438933
    FMUL float ptr [ESP + 0x4]          ; 00438936
    FLD float ptr [EAX + 0x8]           ; 0043893a
    FMUL float ptr [ESP + 0x4]          ; 0043893d
    FXCH ST2                            ; 00438941
    FSTP float ptr [EAX]                ; 00438943
    FSTP float ptr [EAX + 0x4]          ; 00438945
    FSTP float ptr [EAX + 0x8]          ; 00438948
    ADD ESP,0x8                         ; 0043894b
    RET                                 ; 0043894e


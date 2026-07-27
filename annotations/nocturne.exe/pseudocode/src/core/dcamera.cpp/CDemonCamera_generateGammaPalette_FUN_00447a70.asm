; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00447a70(undefined4 param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0043ff50 at 0043ff61
;   core_set.cpp_CDemonSet_setGamma_FUN_0050e400 at 0050e413
;
; Referenced Globals:
;   double DOUBLE_0057bafb = 0.0000152587890625
;   double DOUBLE_0057bb03 = 0.00392156862745098
;   double DOUBLE_0057bb0b = 255
;   undefined4 DAT_005ad450
;   undefined4 DAT_005ad454
;   undefined4 DAT_005ad458
;   undefined4 DAT_00b0e1fc
;   undefined4 DAT_00b0e2fc
;
; Called Functions:
;   crt_math.c_pow_FUN_00565ad6
;   crt_math.c_round_FUN_00563a30
;   engine_special.cpp_setFogColor_FUN_00532af0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447a70
        ;   Label: core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00447a70
    PUSH EBP                            ; 00447a71
    MOV EBP,ESP                         ; 00447a72
    SUB ESP,0xc                         ; 00447a74
    MOV EAX,dword ptr [EBP + 0x10]      ; 00447a77
    MOV dword ptr [EBP + -0x4],EAX      ; 00447a7a
    FILD dword ptr [EBP + -0x4]         ; 00447a7d
    FMUL double ptr [0x0057bafb]        ; 00447a80 | DOUBLE_0057bafb
    XOR EDX,EDX                         ; 00447a86
    XOR ECX,ECX                         ; 00447a88
    FSTP float ptr [EBP + -0x8]         ; 00447a8a
    FLD double ptr [0x0057bb0b]         ; 00447a8d | DOUBLE_0057bb0b
    FLD float ptr [EBP + -0x8]          ; 00447a93
    FLD double ptr [0x0057bb03]         ; 00447a96 | DOUBLE_0057bb03
    MOV dword ptr [EBP + -0x4],EDX      ; 00447a9c
        ;   Label: LAB_00447a9c
    FILD dword ptr [EBP + -0x4]         ; 00447a9f
    FMUL ST1                            ; 00447aa2
    FLD ST2                             ; 00447aa4
    FXCH                                ; 00447aa6
    CALL crt_math.c_pow_FUN_00565ad6    ; 00447aa8
        ;   XREF to: 00565ad6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_pow_FUN_00565ad6()
    FMUL ST3                            ; 00447aad
    CALL crt_math.c_round_FUN_00563a30  ; 00447aaf
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [EBP + -0xc]        ; 00447ab4
    MOV EAX,dword ptr [EBP + -0xc]      ; 00447ab7
    MOV EBX,dword ptr [EBP + -0xc]      ; 00447aba
    SHL EAX,0x8                         ; 00447abd
    OR EAX,EBX                          ; 00447ac0
    SHL EBX,0x10                        ; 00447ac2
    OR EBX,EAX                          ; 00447ac5
    MOV EAX,dword ptr [EBP + -0xc]      ; 00447ac7
    SHL EAX,0x18                        ; 00447aca
    ADD ECX,0x4                         ; 00447acd
    OR EAX,EBX                          ; 00447ad0
    INC EDX                             ; 00447ad2
    MOV dword ptr [ECX + 0xb0e1f8],EAX  ; 00447ad3 | DAT_00b0e1fc
    CMP EDX,0x100                       ; 00447ad9
    JL 0x00447a9c                       ; 00447adf
        ;   XREF to: 00447a9c (CONDITIONAL_JUMP)  ; LAB_00447a9c
    MOV EAX,[0x005ad458]                ; 00447ae1 | DAT_005ad458
    MOV EAX,dword ptr [EAX*0x4 + 0xb0e1fc] ; 00447ae6 | DAT_00b0e2fc
    AND EAX,0xff                        ; 00447aed
    PUSH EAX                            ; 00447af2
    MOV EAX,[0x005ad454]                ; 00447af3 | DAT_005ad454
    MOV EAX,dword ptr [EAX*0x4 + 0xb0e1fc] ; 00447af8 | DAT_00b0e2fc
    AND EAX,0xff                        ; 00447aff
    PUSH EAX                            ; 00447b04
    MOV EAX,[0x005ad450]                ; 00447b05 | DAT_005ad450
    MOV EAX,dword ptr [EAX*0x4 + 0xb0e1fc] ; 00447b0a | DAT_00b0e2fc
    FSTP ST0                            ; 00447b11
    AND EAX,0xff                        ; 00447b13
    FSTP ST0                            ; 00447b18
    PUSH EAX                            ; 00447b1a
    FSTP ST0                            ; 00447b1b
    CALL engine_special.cpp_setFogColor_FUN_00532af0 ; 00447b1d
        ;   XREF to: 00532af0 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_setFogColor_FUN_00532af0()
    ADD ESP,0xc                         ; 00447b22
    MOV ESP,EBP                         ; 00447b25
    POP EBP                             ; 00447b27
    POP EBX                             ; 00447b28
    RET                                 ; 00447b29


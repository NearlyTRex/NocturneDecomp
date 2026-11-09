; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00450980(CDemonCamera *this_ptr,int gamma_value)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   gamma_value
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_00448ca0 at 00448d47
;   core_set.cpp_CDemonSet_setGamma_FUN_0053b1c0 at 0053b1d3
;
; Referenced Globals:
;   undefined4 DAT_005ba076
;   undefined4 DAT_005ba07e
;   undefined4 DAT_005ba086
;   undefined4 DAT_005f17e4
;   undefined4 DAT_005f17e8
;   undefined4 DAT_005f17ec
;   undefined4 DAT_00b9e14c
;   undefined4 DAT_00b9e24c
;
; Called Functions:
;   crt_math.c_pow_FUN_005a4764
;   crt_math.c_round_FUN_005a3120
;   engine_special.cpp_setFogColor_FUN_005661b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00450980
        ;   Label: core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00450980
    PUSH EBP                            ; 00450981
    MOV EBP,ESP                         ; 00450982
    SUB ESP,0xc                         ; 00450984
    MOV EAX,dword ptr [EBP + 0x10]      ; 00450987
    MOV dword ptr [EBP + -0x4],EAX      ; 0045098a
    FILD dword ptr [EBP + -0x4]         ; 0045098d
    FMUL double ptr [0x005ba076]        ; 00450990 | DAT_005ba076
    XOR EDX,EDX                         ; 00450996
    XOR ECX,ECX                         ; 00450998
    FSTP float ptr [EBP + -0x8]         ; 0045099a
    FLD double ptr [0x005ba086]         ; 0045099d | DAT_005ba086
    FLD float ptr [EBP + -0x8]          ; 004509a3
    FLD double ptr [0x005ba07e]         ; 004509a6 | DAT_005ba07e
    MOV dword ptr [EBP + -0x4],EDX      ; 004509ac
        ;   Label: LAB_004509ac
    FILD dword ptr [EBP + -0x4]         ; 004509af
    FMUL ST1                            ; 004509b2
    FLD ST2                             ; 004509b4
    FXCH                                ; 004509b6
    CALL crt_math.c_pow_FUN_005a4764    ; 004509b8
        ;   XREF to: 005a4764 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_pow_FUN_005a4764()
    FMUL ST3                            ; 004509bd
    CALL crt_math.c_round_FUN_005a3120  ; 004509bf
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBP + -0xc]        ; 004509c4
    MOV EAX,dword ptr [EBP + -0xc]      ; 004509c7
    MOV EBX,dword ptr [EBP + -0xc]      ; 004509ca
    SHL EAX,0x8                         ; 004509cd
    OR EAX,EBX                          ; 004509d0
    SHL EBX,0x10                        ; 004509d2
    OR EBX,EAX                          ; 004509d5
    MOV EAX,dword ptr [EBP + -0xc]      ; 004509d7
    SHL EAX,0x18                        ; 004509da
    ADD ECX,0x4                         ; 004509dd
    OR EAX,EBX                          ; 004509e0
    INC EDX                             ; 004509e2
    MOV dword ptr [ECX + 0xb9e148],EAX  ; 004509e3 | DAT_00b9e14c
    CMP EDX,0x100                       ; 004509e9
    JL 0x004509ac                       ; 004509ef
        ;   XREF to: 004509ac (CONDITIONAL_JUMP)  ; LAB_004509ac
    MOV EAX,[0x005f17ec]                ; 004509f1 | DAT_005f17ec
    MOV EAX,dword ptr [EAX*0x4 + 0xb9e14c] ; 004509f6 | DAT_00b9e24c
    AND EAX,0xff                        ; 004509fd
    PUSH EAX                            ; 00450a02
    MOV EAX,[0x005f17e8]                ; 00450a03 | DAT_005f17e8
    MOV EAX,dword ptr [EAX*0x4 + 0xb9e14c] ; 00450a08 | DAT_00b9e24c
    AND EAX,0xff                        ; 00450a0f
    PUSH EAX                            ; 00450a14
    MOV EAX,[0x005f17e4]                ; 00450a15 | DAT_005f17e4
    MOV EAX,dword ptr [EAX*0x4 + 0xb9e14c] ; 00450a1a | DAT_00b9e24c
    FSTP ST0                            ; 00450a21
    AND EAX,0xff                        ; 00450a23
    FSTP ST0                            ; 00450a28
    PUSH EAX                            ; 00450a2a
    FSTP ST0                            ; 00450a2b
    CALL engine_special.cpp_setFogColor_FUN_005661b0 ; 00450a2d
        ;   XREF to: 005661b0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_setFogColor_FUN_005661b0(int red, int green, int blue)
    ADD ESP,0xc                         ; 00450a32
    MOV ESP,EBP                         ; 00450a35
    POP EBP                             ; 00450a37
    POP EBX                             ; 00450a38
    RET                                 ; 00450a39


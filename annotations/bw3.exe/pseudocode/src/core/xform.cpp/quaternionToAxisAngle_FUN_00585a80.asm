; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_quaternionToAxisAngle_FUN_00585a80(float *param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170 at 0054e1aa
;
; Referenced Globals:
;   undefined4 DAT_005d8197
;   undefined4 DAT_005d819b
;
; Called Functions:
;   crt_math.c_acos_FUN_005a4b74
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585a80
        ;   Label: core_xform.cpp_quaternionToAxisAngle_FUN_00585a80
    PUSH EBP                            ; 00585a81
    MOV EBP,ESP                         ; 00585a82
    SUB ESP,0x8                         ; 00585a84
    AND ESP,0xfffffff8                  ; 00585a87
    MOV ECX,dword ptr [EBP + 0xc]       ; 00585a8a
    MOV EBX,dword ptr [EBP + 0x10]      ; 00585a8d
    MOV EDX,dword ptr [EBP + 0x14]      ; 00585a90
    TEST EBX,EBX                        ; 00585a93
    JZ 0x00585aaa                       ; 00585a95
        ;   XREF to: 00585aaa (CONDITIONAL_JUMP)  ; LAB_00585aaa
    FLD float ptr [ECX]                 ; 00585a97
    FCOMP float ptr [0x005d8197]        ; 00585a99 | DAT_005d8197
    FNSTSW AX                           ; 00585a9f
    SAHF                                ; 00585aa1
    JA 0x00585adc                       ; 00585aa2
        ;   XREF to: 00585adc (CONDITIONAL_JUMP)  ; LAB_00585adc
    MOV dword ptr [EBX],0x40c90fdb      ; 00585aa4
    TEST EDX,EDX                        ; 00585aaa
        ;   Label: LAB_00585aaa
    JZ 0x00585ad7                       ; 00585aac
        ;   XREF to: 00585ad7 (CONDITIONAL_JUMP)  ; LAB_00585ad7
    FLD float ptr [ECX]                 ; 00585aae
    FMUL ST0                            ; 00585ab0
    FLD1                                ; 00585ab2
    FSUBRP                              ; 00585ab4
    FLDZ                                ; 00585ab6
    FXCH                                ; 00585ab8
    FSTP float ptr [ESP]                ; 00585aba
    FCOMP float ptr [ESP]               ; 00585abd
    FNSTSW AX                           ; 00585ac0
    SAHF                                ; 00585ac2
    JC 0x00585afd                       ; 00585ac3
        ;   XREF to: 00585afd (CONDITIONAL_JUMP)  ; LAB_00585afd
    MOV dword ptr [EDX + 0x8],0x0       ; 00585ac5
    MOV EAX,dword ptr [EDX + 0x8]       ; 00585acc
    MOV dword ptr [EDX + 0x4],EAX       ; 00585acf
    MOV EAX,dword ptr [EDX + 0x4]       ; 00585ad2
    MOV dword ptr [EDX],EAX             ; 00585ad5
    MOV ESP,EBP                         ; 00585ad7
        ;   Label: LAB_00585ad7
    POP EBP                             ; 00585ad9
    POP EBX                             ; 00585ada
    RET                                 ; 00585adb
    CMP dword ptr [ECX],0x3f800000      ; 00585adc
        ;   Label: LAB_00585adc
    JL 0x00585aec                       ; 00585ae2
        ;   XREF to: 00585aec (CONDITIONAL_JUMP)  ; LAB_00585aec
    MOV dword ptr [EBX],0x0             ; 00585ae4
    JMP 0x00585aaa                      ; 00585aea
        ;   XREF to: 00585aaa (UNCONDITIONAL_JUMP)  ; LAB_00585aaa
    FLD float ptr [ECX]                 ; 00585aec
        ;   Label: LAB_00585aec
    CALL crt_math.c_acos_FUN_005a4b74   ; 00585aee
        ;   XREF to: 005a4b74 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005a4b74()
    FMUL double ptr [0x005d819b]        ; 00585af3 | DAT_005d819b
    FSTP float ptr [EBX]                ; 00585af9
    JMP 0x00585aaa                      ; 00585afb
        ;   XREF to: 00585aaa (UNCONDITIONAL_JUMP)  ; LAB_00585aaa
    FLD float ptr [ESP]                 ; 00585afd
        ;   Label: LAB_00585afd
    FSQRT                               ; 00585b00
    FLD float ptr [ECX + 0x4]           ; 00585b02
    FLD1                                ; 00585b05
    FDIVRP ST2,ST0                      ; 00585b07
    FMUL ST1                            ; 00585b09
    FSTP float ptr [EDX]                ; 00585b0b
    FLD float ptr [ECX + 0x8]           ; 00585b0d
    FMUL ST1                            ; 00585b10
    FSTP float ptr [EDX + 0x4]          ; 00585b12
    FMUL float ptr [ECX + 0xc]          ; 00585b15
    FSTP float ptr [EDX + 0x8]          ; 00585b18
    MOV ESP,EBP                         ; 00585b1b
    POP EBP                             ; 00585b1d
    POP EBX                             ; 00585b1e
    RET                                 ; 00585b1f


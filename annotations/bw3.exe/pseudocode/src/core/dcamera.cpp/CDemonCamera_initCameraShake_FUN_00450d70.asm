; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00450d70(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   peak_intensity
; float            Stack[0xc]:4   attack_time
; float            Stack[0x10]:4   sustain_duration
; float            Stack[0x14]:4   decay_time
;
; XREF[1]:
;   core_set.cpp_CDemonSet_initCameraShake_FUN_0053b440 at 0053b455
;
; Referenced Globals:
;   undefined4 DAT_005ba0e6
;   undefined4 DAT_005f17d8
;   undefined4 DAT_005f17dc
;   undefined4 DAT_005f17e0
;   undefined4 DAT_0135eab0
;   undefined4 DAT_0135eab4
;   undefined4 DAT_0135eab8
;   undefined4 DAT_0135eabc
;   undefined4 DAT_0135eac0
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00450d70
        ;   Label: core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00450d70
    FLD double ptr [0x005ba0e6]         ; 00450d71 | DAT_005ba0e6
    FLD float ptr [ESP + 0xc]           ; 00450d77
    FMUL ST1                            ; 00450d7b
    FLD float ptr [ESP + 0x14]          ; 00450d7d
    FMUL ST2                            ; 00450d81
    FLD float ptr [ESP + 0x10]          ; 00450d83
    FMUL ST3                            ; 00450d87
    FLD float ptr [ESP + 0x18]          ; 00450d89
    XOR EDX,EDX                         ; 00450d8d
    FMULP ST4                           ; 00450d8f
    MOV dword ptr [0x0135eab8],EDX      ; 00450d91 | DAT_0135eab8
    FXCH ST2                            ; 00450d97
    CALL crt_math.c_round_FUN_005a3120  ; 00450d99
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 00450d9e
    CALL crt_math.c_round_FUN_005a3120  ; 00450da0
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST2                            ; 00450da5
    CALL crt_math.c_round_FUN_005a3120  ; 00450da7
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST3                            ; 00450dac
    CALL crt_math.c_round_FUN_005a3120  ; 00450dae
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST2                            ; 00450db3
    FISTP dword ptr [0x005f17dc]        ; 00450db5 | DAT_005f17dc
    FXCH ST2                            ; 00450dbb
    FISTP dword ptr [0x0135eab4]        ; 00450dbd | DAT_0135eab4
    FISTP dword ptr [0x0135eabc]        ; 00450dc3 | DAT_0135eabc
    MOV EBX,dword ptr [0x0135eab4]      ; 00450dc9 | DAT_0135eab4
    FISTP dword ptr [0x005f17d8]        ; 00450dcf | DAT_005f17d8
    TEST EBX,EBX                        ; 00450dd5
    JNZ 0x00450dec                      ; 00450dd7
        ;   XREF to: 00450dec (CONDITIONAL_JUMP)  ; LAB_00450dec
    MOV EAX,[0x005f17dc]                ; 00450dd9 | DAT_005f17dc
    MOV EDX,0x1                         ; 00450dde
    MOV [0x0135eab0],EAX                ; 00450de3 | DAT_0135eab0
    TEST EAX,EAX                        ; 00450de8
    JZ 0x00450df4                       ; 00450dea
        ;   XREF to: 00450df4 (CONDITIONAL_JUMP)  ; LAB_00450df4
    MOV dword ptr [0x005f17e0],EDX      ; 00450dec | DAT_005f17e0
        ;   Label: LAB_00450dec
    POP EBX                             ; 00450df2
    RET                                 ; 00450df3
    MOV EAX,[0x0135eabc]                ; 00450df4 | DAT_0135eabc
        ;   Label: LAB_00450df4
    MOV EDX,0x2                         ; 00450df9
    MOV [0x0135eac0],EAX                ; 00450dfe | DAT_0135eac0
    MOV dword ptr [0x005f17e0],EDX      ; 00450e03 | DAT_005f17e0
    POP EBX                             ; 00450e09
    RET                                 ; 00450e0a


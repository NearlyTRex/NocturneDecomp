; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ada20(int param_1)
;
; Local Variables:
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x64]:1  local_64
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[10]:
;   FUN_0043d1c0 at 0043d7b4
;   FUN_00477890 at 00477f49
;   FUN_004b27c0 at 004b2ef2
;   FUN_00515ea0 at 00516590
;   FUN_00545c30 at 005463ac
;   core_actor.cpp_FUN_0040b300 at 0040b7a0
;   core_glass.cpp_CGlass_process_FUN_004ac3f0 at 004ac429
;   core_hiram.cpp_CHiram_process_FUN_004b6770 at 004b6864
;   core_set.cpp_CDemonSet_processActors_FUN_00509140 at 005094fc
;   core_turret.cpp_CTurret_fire_FUN_0054ab10 at 0054afc2
;
; Referenced Globals:
;   TerminatedCString s_s_7YEARS_RAW_00585048
;   undefined4 s_s_7YEARS_RAW_00585048+1
;   undefined4 s_s_7YEARS_RAW_00585048+2
;   undefined4 s_s_7YEARS_RAW_00585048+3
;   string s_glass-1.wav@2.0_00585053
;   double DOUBLE_00585068 = 0.5
;   undefined4 DAT_005993b0
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b762c
;   undefined4 DAT_005be368
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01e57284
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_set.cpp_CDemonSet_markMirrorCameraDirty_FUN_0050e300
;   crt_memory.c___arrinit_FUN_005644a7
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   FUN_004accf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ada20
        ;   Label: FUN_004ada20
    PUSH ESI                            ; 004ada21
    PUSH EDI                            ; 004ada22
    PUSH EBP                            ; 004ada23
    SUB ESP,0xbc                        ; 004ada24
    MOV EBX,dword ptr [ESP + 0xd0]      ; 004ada2a
    CMP dword ptr [EBX + 0x178],0x0     ; 004ada31
    JNZ 0x004adce6                      ; 004ada38
        ;   XREF to: 004adce6 (CONDITIONAL_JUMP)  ; LAB_004adce6
    MOV ECX,dword ptr [EBX + 0x1e0]     ; 004ada3e
    MOV dword ptr [EBX + 0x178],0x1     ; 004ada44
    TEST ECX,ECX                        ; 004ada4e
    JNZ 0x004adcf1                      ; 004ada50
        ;   XREF to: 004adcf1 (CONDITIONAL_JUMP)  ; LAB_004adcf1
    PUSH 0x5993b0                       ; 004ada56 | DAT_005993b0
        ;   Label: LAB_004ada56
    PUSH 0x4                            ; 004ada5b
    LEA EAX,[ESP + 0x8]                 ; 004ada5d
    PUSH EAX                            ; 004ada61
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004ada62
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    FLD float ptr [EBX + 0x150]         ; 004ada67
    FMUL double ptr [0x00585068]        ; 004ada6d | DOUBLE_00585068
    ADD ESP,0xc                         ; 004ada73
    LEA EAX,[ESP + 0xb0]                ; 004ada76
    XOR EDI,EDI                         ; 004ada7d
    PUSH EAX                            ; 004ada7f
    LEA EAX,[ESP + 0x84]                ; 004ada80
    MOV dword ptr [ESP + 0xb8],EDI      ; 004ada87
    PUSH EAX                            ; 004ada8e
    LEA EAX,[EBX + 0x3c]                ; 004ada8f
    MOV dword ptr [ESP + 0xc0],EDI      ; 004ada92
    PUSH EAX                            ; 004ada99
    FSTP float ptr [ESP + 0xbc]         ; 004ada9a
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 004adaa1
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    LEA EDX,[EBX + 0x20]                ; 004adaa6
    FLD float ptr [EDX]                 ; 004adaa9
    FADD float ptr [EAX]                ; 004adaab
    ADD ESP,0xc                         ; 004adaad
    FSTP float ptr [ESP + 0x8c]         ; 004adab0
    FLD float ptr [EDX + 0x4]           ; 004adab7
    FADD float ptr [EAX + 0x4]          ; 004adaba
    FSTP float ptr [ESP + 0x90]         ; 004adabd
    FLD float ptr [EDX + 0x8]           ; 004adac4
    MOV EDX,ESP                         ; 004adac7
    FADD float ptr [EAX + 0x8]          ; 004adac9
    LEA EAX,[ESP + 0x8c]                ; 004adacc
    FSTP float ptr [ESP + 0x94]         ; 004adad3
    CMP EDX,EAX                         ; 004adada
    JZ 0x004adafe                       ; 004adadc
        ;   XREF to: 004adafe (CONDITIONAL_JUMP)  ; LAB_004adafe
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004adade
    MOV dword ptr [ESP],EAX             ; 004adae5
    MOV EAX,dword ptr [ESP + 0x90]      ; 004adae8
    MOV dword ptr [ESP + 0x4],EAX       ; 004adaef
    MOV EAX,dword ptr [ESP + 0x94]      ; 004adaf3
    MOV dword ptr [ESP + 0x8],EAX       ; 004adafa
    LEA EAX,[ESP + 0xb0]                ; 004adafe
        ;   Label: LAB_004adafe
    PUSH EAX                            ; 004adb05
    LEA EAX,[ESP + 0x54]                ; 004adb06
    FLD float ptr [ESP + 0xb8]          ; 004adb0a
    PUSH EAX                            ; 004adb11
    LEA EAX,[EBX + 0x3c]                ; 004adb12
    FADD float ptr [EBX + 0x154]        ; 004adb15
    PUSH EAX                            ; 004adb1b
    FSTP float ptr [ESP + 0xc0]         ; 004adb1c
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 004adb23
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    LEA EDX,[EBX + 0x20]                ; 004adb28
    FLD float ptr [EDX]                 ; 004adb2b
    FADD float ptr [EAX]                ; 004adb2d
    ADD ESP,0xc                         ; 004adb2f
    FSTP float ptr [ESP + 0x74]         ; 004adb32
    FLD float ptr [EDX + 0x4]           ; 004adb36
    FADD float ptr [EAX + 0x4]          ; 004adb39
    FSTP float ptr [ESP + 0x78]         ; 004adb3c
    FLD float ptr [EDX + 0x8]           ; 004adb40
    LEA EDX,[ESP + 0x74]                ; 004adb43
    FADD float ptr [EAX + 0x8]          ; 004adb47
    LEA EAX,[ESP + 0xc]                 ; 004adb4a
    FSTP float ptr [ESP + 0x7c]         ; 004adb4e
    CMP EAX,EDX                         ; 004adb52
    JZ 0x004adb6e                       ; 004adb54
        ;   XREF to: 004adb6e (CONDITIONAL_JUMP)  ; LAB_004adb6e
    MOV EAX,dword ptr [ESP + 0x74]      ; 004adb56
    MOV dword ptr [ESP + 0xc],EAX       ; 004adb5a
    MOV EAX,dword ptr [ESP + 0x78]      ; 004adb5e
    MOV dword ptr [ESP + 0x10],EAX      ; 004adb62
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004adb66
    MOV dword ptr [ESP + 0x14],EAX      ; 004adb6a
    XOR byte ptr [ESP + 0xb3],0x80      ; 004adb6e
        ;   Label: LAB_004adb6e
    LEA EAX,[ESP + 0xb0]                ; 004adb76
    PUSH EAX                            ; 004adb7d
    LEA EAX,[ESP + 0x6c]                ; 004adb7e
    PUSH EAX                            ; 004adb82
    LEA EAX,[EBX + 0x3c]                ; 004adb83
    PUSH EAX                            ; 004adb86
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 004adb87
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    LEA EDX,[EBX + 0x20]                ; 004adb8c
    FLD float ptr [EDX]                 ; 004adb8f
    FADD float ptr [EAX]                ; 004adb91
    ADD ESP,0xc                         ; 004adb93
    FSTP float ptr [ESP + 0x98]         ; 004adb96
    FLD float ptr [EDX + 0x4]           ; 004adb9d
    FADD float ptr [EAX + 0x4]          ; 004adba0
    FSTP float ptr [ESP + 0x9c]         ; 004adba3
    FLD float ptr [EDX + 0x8]           ; 004adbaa
    LEA EDX,[ESP + 0x18]                ; 004adbad
    FADD float ptr [EAX + 0x8]          ; 004adbb1
    LEA EAX,[ESP + 0x98]                ; 004adbb4
    FSTP float ptr [ESP + 0xa0]         ; 004adbbb
    CMP EDX,EAX                         ; 004adbc2
    JZ 0x004adbe7                       ; 004adbc4
        ;   XREF to: 004adbe7 (CONDITIONAL_JUMP)  ; LAB_004adbe7
    MOV EAX,dword ptr [ESP + 0x98]      ; 004adbc6
    MOV dword ptr [ESP + 0x18],EAX      ; 004adbcd
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004adbd1
    MOV dword ptr [ESP + 0x1c],EAX      ; 004adbd8
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004adbdc
    MOV dword ptr [ESP + 0x20],EAX      ; 004adbe3
    XOR EAX,EAX                         ; 004adbe7
        ;   Label: LAB_004adbe7
    MOV dword ptr [ESP + 0xb4],EAX      ; 004adbe9
    LEA EAX,[ESP + 0xb0]                ; 004adbf0
    PUSH EAX                            ; 004adbf7
    LEA EAX,[ESP + 0x60]                ; 004adbf8
    PUSH EAX                            ; 004adbfc
    LEA EAX,[EBX + 0x3c]                ; 004adbfd
    PUSH EAX                            ; 004adc00
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 004adc01
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    LEA EDX,[EBX + 0x20]                ; 004adc06
    FLD float ptr [EDX]                 ; 004adc09
    FADD float ptr [EAX]                ; 004adc0b
    ADD ESP,0xc                         ; 004adc0d
    FSTP float ptr [ESP + 0xa4]         ; 004adc10
    FLD float ptr [EDX + 0x4]           ; 004adc17
    FADD float ptr [EAX + 0x4]          ; 004adc1a
    FSTP float ptr [ESP + 0xa8]         ; 004adc1d
    FLD float ptr [EDX + 0x8]           ; 004adc24
    LEA EDX,[ESP + 0x24]                ; 004adc27
    FADD float ptr [EAX + 0x8]          ; 004adc2b
    LEA EAX,[ESP + 0xa4]                ; 004adc2e
    FSTP float ptr [ESP + 0xac]         ; 004adc35
    CMP EDX,EAX                         ; 004adc3c
    JZ 0x004adc61                       ; 004adc3e
        ;   XREF to: 004adc61 (CONDITIONAL_JUMP)  ; LAB_004adc61
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004adc40
    MOV dword ptr [ESP + 0x24],EAX      ; 004adc47
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004adc4b
    MOV dword ptr [ESP + 0x28],EAX      ; 004adc52
    MOV EAX,dword ptr [ESP + 0xac]      ; 004adc56
    MOV dword ptr [ESP + 0x2c],EAX      ; 004adc5d
    LEA EAX,[EBX + 0x15c]               ; 004adc61
        ;   Label: LAB_004adc61
    PUSH EAX                            ; 004adc67
    MOV EDX,dword ptr [0x005ae704]      ; 004adc68 | DAT_005ae704
    PUSH EDX                            ; 004adc6e | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004adc6f
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0()
    MOV ECX,dword ptr [0x005b762c]      ; 004adc74 | DAT_005b762c
    ADD ESP,0x8                         ; 004adc7a
    CMP ECX,0x40                        ; 004adc7d
    JNZ 0x004add34                      ; 004adc80
        ;   XREF to: 004add34 (CONDITIONAL_JUMP)  ; LAB_004add34
    MOV EAX,0xf80000                    ; 004adc86
    MOV EBP,0x80000                     ; 004adc8b
    MOV dword ptr [ESP + 0x40],EAX      ; 004adc90
    MOV dword ptr [ESP + 0x34],EBP      ; 004adc94
    MOV dword ptr [ESP + 0x44],EBP      ; 004adc98
    MOV dword ptr [ESP + 0x38],EAX      ; 004adc9c
    MOV dword ptr [ESP + 0x48],EBP      ; 004adca0
    MOV dword ptr [ESP + 0x3c],EAX      ; 004adca4
    MOV dword ptr [ESP + 0x4c],EAX      ; 004adca8
    MOV dword ptr [ESP + 0x30],EBP      ; 004adcac
    PUSH 0x0                            ; 004adcb0
        ;   Label: LAB_004adcb0
    LEA EAX,[ESP + 0x44]                ; 004adcb2
    PUSH EAX                            ; 004adcb6
    LEA EAX,[ESP + 0x38]                ; 004adcb7
    PUSH EAX                            ; 004adcbb
    LEA EAX,[ESP + 0xc]                 ; 004adcbc
    PUSH EAX                            ; 004adcc0
    PUSH EBX                            ; 004adcc1
    CALL FUN_004accf0                   ; 004adcc2
        ;   XREF to: 004accf0 (UNCONDITIONAL_CALL)  ; undefined FUN_004accf0()
    ADD ESP,0x14                        ; 004adcc7
    PUSH 0x585053                       ; 004adcca | = "glass-1.wav@2.0"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004adccf
    PUSH EBX                            ; 004adcd5
    CALL dword ptr [EAX + 0x24]         ; 004adcd6
    MOV EDX,dword ptr [EBX + 0x368]     ; 004adcd9
    ADD ESP,0x8                         ; 004adcdf
    TEST EDX,EDX                        ; 004adce2
    JNZ 0x004add63                      ; 004adce4
        ;   XREF to: 004add63 (CONDITIONAL_JUMP)  ; LAB_004add63
    ADD ESP,0xbc                        ; 004adce6
        ;   Label: LAB_004adce6
    POP EBP                             ; 004adcec
    POP EDI                             ; 004adced
    POP ESI                             ; 004adcee
    POP EBX                             ; 004adcef
    RET                                 ; 004adcf0
    MOV ESI,0x585048                    ; 004adcf1 | = "7YEARS.RAW"
        ;   Label: LAB_004adcf1
    LEA EDI,[EBX + 0x164]               ; 004adcf6
    MOV dword ptr [EBX + 0x174],0xffff  ; 004adcfc
    PUSH EDI                            ; 004add06
    MOV AL,byte ptr [ESI]               ; 004add07 | = "7YEARS.RAW" | s_s_7YEARS_RAW_00585048+2
        ;   Label: LAB_004add07
    MOV byte ptr [EDI],AL               ; 004add09
    CMP AL,0x0                          ; 004add0b
    JZ 0x004add1f                       ; 004add0d
        ;   XREF to: 004add1f (CONDITIONAL_JUMP)  ; LAB_004add1f
    MOV AL,byte ptr [ESI + 0x1]         ; 004add0f | s_s_7YEARS_RAW_00585048+1 | s_s_7YEARS_RAW_00585048+3
    ADD ESI,0x2                         ; 004add12
    MOV byte ptr [EDI + 0x1],AL         ; 004add15
    ADD EDI,0x2                         ; 004add18
    CMP AL,0x0                          ; 004add1b
    JNZ 0x004add07                      ; 004add1d
        ;   XREF to: 004add07 (CONDITIONAL_JUMP)  ; LAB_004add07
    POP EDI                             ; 004add1f
        ;   Label: LAB_004add1f
    MOV ESI,dword ptr [0x005be368]      ; 004add20 | DAT_005be368
    PUSH ESI                            ; 004add26 | DAT_01e57284
    CALL core_set.cpp_CDemonSet_markMirrorCameraDirty_FUN_0050e300 ; 004add27
        ;   XREF to: 0050e300 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_markMirrorCameraDirty_FUN_0050e300()
    ADD ESP,0x4                         ; 004add2c
    JMP 0x004ada56                      ; 004add2f
        ;   XREF to: 004ada56 (UNCONDITIONAL_JUMP)  ; LAB_004ada56
    MOV EDI,0xfe0000                    ; 004add34
        ;   Label: LAB_004add34
    MOV ESI,0x20000                     ; 004add39
    MOV dword ptr [ESP + 0x40],EDI      ; 004add3e
    MOV dword ptr [ESP + 0x34],ESI      ; 004add42
    MOV dword ptr [ESP + 0x44],ESI      ; 004add46
    MOV dword ptr [ESP + 0x38],EDI      ; 004add4a
    MOV dword ptr [ESP + 0x48],ESI      ; 004add4e
    MOV dword ptr [ESP + 0x3c],EDI      ; 004add52
    MOV dword ptr [ESP + 0x4c],EDI      ; 004add56
    MOV dword ptr [ESP + 0x30],ESI      ; 004add5a
    JMP 0x004adcb0                      ; 004add5e
        ;   XREF to: 004adcb0 (UNCONDITIONAL_JUMP)  ; LAB_004adcb0
    MOV dword ptr [EBX + 0xb34],0x1     ; 004add63
        ;   Label: LAB_004add63
    ADD ESP,0xbc                        ; 004add6d
    POP EBP                             ; 004add73
    POP EDI                             ; 004add74
    POP ESI                             ; 004add75
    POP EBX                             ; 004add76
    RET                                 ; 004add77


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(float *param_1,float *param_2)
;
; Local Variables:
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
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[42]:
;   FUN_004194b0 at 00419625
;   FUN_0041f3d0 at 0041f594
;   FUN_004980d0 at 004981e5
;   FUN_00499ca0 at 00499f9c
;   FUN_004b8700 at 004b8838
;   FUN_004bc7e0 at 004bc8f6
;   FUN_004c45a0 at 004c460c
;   FUN_004c46b0 at 004c4718
;   FUN_004c9580 at 004c98ae
;   FUN_004d4ba0 at 004d4dd6
;   ... and 32 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055aa00
        ;   Label: core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
    PUSH EDI                            ; 0055aa01
    SUB ESP,0x30                        ; 0055aa02
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0055aa05
    MOV EAX,dword ptr [ESP + 0x40]      ; 0055aa09
    MOV EBX,ESI                         ; 0055aa0d
    FLD float ptr [EAX + 0x4]           ; 0055aa0f
    FMUL float ptr [EDX + 0x10]         ; 0055aa12
    FLD float ptr [EAX + 0x4]           ; 0055aa15
    FMUL float ptr [EDX + 0x14]         ; 0055aa18
    FLD float ptr [EAX + 0x4]           ; 0055aa1b
    FMUL float ptr [EDX + 0x18]         ; 0055aa1e
    FLD float ptr [EAX + 0x14]          ; 0055aa21
    FMUL float ptr [EDX + 0x10]         ; 0055aa24
    FLD float ptr [EAX]                 ; 0055aa27
    FMUL float ptr [EDX]                ; 0055aa29
    FLD float ptr [EAX + 0x10]          ; 0055aa2b
    FXCH                                ; 0055aa2e
    FADDP ST5,ST0                       ; 0055aa30
    FMUL float ptr [EDX + 0x4]          ; 0055aa32
    FLD float ptr [EAX + 0x8]           ; 0055aa35
    FMUL float ptr [EDX + 0x20]         ; 0055aa38
    FLD float ptr [EAX]                 ; 0055aa3b
    FXCH                                ; 0055aa3d
    FADDP ST6,ST0                       ; 0055aa3f
    FMUL float ptr [EDX + 0x4]          ; 0055aa41
    FXCH ST5                            ; 0055aa44
    FSTP float ptr [ESP]                ; 0055aa46
    FLD float ptr [EAX + 0x10]          ; 0055aa49
    FXCH ST5                            ; 0055aa4c
    FADDP ST4,ST0                       ; 0055aa4e
    FXCH ST4                            ; 0055aa50
    FMUL float ptr [EDX + 0x8]          ; 0055aa52
    FLD float ptr [EAX + 0x8]           ; 0055aa55
    FMUL float ptr [EDX + 0x24]         ; 0055aa58
    FLD float ptr [EAX]                 ; 0055aa5b
    FXCH                                ; 0055aa5d
    FADDP ST5,ST0                       ; 0055aa5f
    FMUL float ptr [EDX + 0x8]          ; 0055aa61
    FXCH ST4                            ; 0055aa64
    FSTP float ptr [ESP + 0x4]          ; 0055aa66
    FLD float ptr [EAX + 0x24]          ; 0055aa6a
    FXCH ST4                            ; 0055aa6d
    FADDP ST3,ST0                       ; 0055aa6f
    FXCH ST3                            ; 0055aa71
    FMUL float ptr [EDX + 0x10]         ; 0055aa73
    FLD float ptr [EAX + 0x8]           ; 0055aa76
    FMUL float ptr [EDX + 0x28]         ; 0055aa79
    FLD float ptr [EAX + 0x10]          ; 0055aa7c
    FXCH                                ; 0055aa7f
    FADDP ST4,ST0                       ; 0055aa81
    FMUL float ptr [EDX]                ; 0055aa83
    FXCH ST3                            ; 0055aa85
    FSTP float ptr [ESP + 0x8]          ; 0055aa87
    FLD float ptr [EAX + 0x20]          ; 0055aa8b
    FXCH ST3                            ; 0055aa8e
    FADDP ST2,ST0                       ; 0055aa90
    FXCH ST2                            ; 0055aa92
    FMUL float ptr [EDX + 0x4]          ; 0055aa94
    FLD float ptr [EAX + 0x18]          ; 0055aa97
    FMUL float ptr [EDX + 0x20]         ; 0055aa9a
    FLD float ptr [EAX + 0x14]          ; 0055aa9d
    FXCH                                ; 0055aaa0
    FADDP ST3,ST0                       ; 0055aaa2
    FMUL float ptr [EDX + 0x14]         ; 0055aaa4
    FXCH ST2                            ; 0055aaa7
    FSTP float ptr [ESP + 0x10]         ; 0055aaa9
    FLD float ptr [EAX + 0x20]          ; 0055aaad
    FXCH ST2                            ; 0055aab0
    FADDP ST5,ST0                       ; 0055aab2
    FXCH                                ; 0055aab4
    FMUL float ptr [EDX + 0x8]          ; 0055aab6
    FLD float ptr [EAX + 0x18]          ; 0055aab9
    FMUL float ptr [EDX + 0x24]         ; 0055aabc
    FLD float ptr [EAX + 0x14]          ; 0055aabf
    FXCH                                ; 0055aac2
    FADDP ST6,ST0                       ; 0055aac4
    FMUL float ptr [EDX + 0x18]         ; 0055aac6
    FXCH ST5                            ; 0055aac9
    FSTP float ptr [ESP + 0x14]         ; 0055aacb
    FLD float ptr [EAX + 0x4]           ; 0055aacf
    FXCH ST5                            ; 0055aad2
    FADDP ST4,ST0                       ; 0055aad4
    FXCH ST4                            ; 0055aad6
    FMUL float ptr [EDX + 0x1c]         ; 0055aad8
    FLD float ptr [EAX + 0x18]          ; 0055aadb
    FMUL float ptr [EDX + 0x28]         ; 0055aade
    FLD float ptr [EAX + 0x20]          ; 0055aae1
    FXCH                                ; 0055aae4
    FADDP ST5,ST0                       ; 0055aae6
    FMUL float ptr [EDX]                ; 0055aae8
    FXCH ST4                            ; 0055aaea
    FSTP float ptr [ESP + 0x18]         ; 0055aaec
    FLD float ptr [EAX + 0x10]          ; 0055aaf0
    FXCH ST4                            ; 0055aaf3
    FADDP ST3,ST0                       ; 0055aaf5
    FXCH ST3                            ; 0055aaf7
    FMUL float ptr [EDX + 0xc]          ; 0055aaf9
    FLD float ptr [EAX + 0x28]          ; 0055aafc
    FMUL float ptr [EDX + 0x20]         ; 0055aaff
    FLD float ptr [EAX + 0x20]          ; 0055ab02
    FXCH                                ; 0055ab05
    FADDP ST4,ST0                       ; 0055ab07
    FMUL float ptr [EDX + 0xc]          ; 0055ab09
    FXCH ST3                            ; 0055ab0c
    FSTP float ptr [ESP + 0x20]         ; 0055ab0e
    FLD float ptr [EAX + 0x24]          ; 0055ab12
    FMUL float ptr [EDX + 0x14]         ; 0055ab15
    FLD float ptr [EAX + 0x24]          ; 0055ab18
    FMUL float ptr [EDX + 0x18]         ; 0055ab1b
    FXCH                                ; 0055ab1e
    FADDP ST3,ST0                       ; 0055ab20
    FADDP ST5,ST0                       ; 0055ab22
    FLD float ptr [EAX + 0x28]          ; 0055ab24
    FMUL float ptr [EDX + 0x24]         ; 0055ab27
    FLD float ptr [EAX + 0x28]          ; 0055ab2a
    FMUL float ptr [EDX + 0x28]         ; 0055ab2d
    FXCH                                ; 0055ab30
    FADDP ST3,ST0                       ; 0055ab32
    FLD float ptr [EAX]                 ; 0055ab34
    FMUL float ptr [EDX + 0xc]          ; 0055ab36
    FXCH                                ; 0055ab39
    FADDP ST6,ST0                       ; 0055ab3b
    FLD float ptr [EAX + 0x14]          ; 0055ab3d
    FXCH                                ; 0055ab40
    FADDP ST5,ST0                       ; 0055ab42
    FMUL float ptr [EDX + 0x1c]         ; 0055ab44
    FLD float ptr [EAX + 0x8]           ; 0055ab47
    FMUL float ptr [EDX + 0x2c]         ; 0055ab4a
    FXCH                                ; 0055ab4d
    FADDP ST2,ST0                       ; 0055ab4f
    FLD float ptr [EAX + 0x24]          ; 0055ab51
    FMUL float ptr [EDX + 0x1c]         ; 0055ab54
    FADDP ST4,ST0                       ; 0055ab57
    FADDP ST4,ST0                       ; 0055ab59
    FLD float ptr [EAX + 0x18]          ; 0055ab5b
    FMUL float ptr [EDX + 0x2c]         ; 0055ab5e
    FLD float ptr [EAX + 0x28]          ; 0055ab61
    FMUL float ptr [EDX + 0x2c]         ; 0055ab64
    MOV ECX,0xc                         ; 0055ab67
    MOV EDI,ESI                         ; 0055ab6c
    MOV ESI,ESP                         ; 0055ab6e
    FXCH                                ; 0055ab70
    FADDP ST2,ST0                       ; 0055ab72
    FADDP ST3,ST0                       ; 0055ab74
    FXCH                                ; 0055ab76
    FSTP float ptr [ESP + 0x24]         ; 0055ab78
    FXCH ST3                            ; 0055ab7c
    FSTP float ptr [ESP + 0x28]         ; 0055ab7e
    FXCH                                ; 0055ab82
    FADD float ptr [EAX + 0xc]          ; 0055ab84
    FXCH ST2                            ; 0055ab87
    FADD float ptr [EAX + 0x1c]         ; 0055ab89
    FXCH                                ; 0055ab8c
    FADD float ptr [EAX + 0x2c]         ; 0055ab8e
    FXCH ST2                            ; 0055ab91
    FSTP float ptr [ESP + 0xc]          ; 0055ab93
    FSTP float ptr [ESP + 0x1c]         ; 0055ab97
    FSTP float ptr [ESP + 0x2c]         ; 0055ab9b
    MOVSD.REP ES:EDI,ESI                ; 0055ab9f
    MOV EAX,EBX                         ; 0055aba1
    ADD ESP,0x30                        ; 0055aba3
    POP EDI                             ; 0055aba6
    POP EBX                             ; 0055aba7
    RET                                 ; 0055aba8


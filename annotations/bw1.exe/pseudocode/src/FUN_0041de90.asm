; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041de90(float *param_1,float *param_2,float *param_3,float param_4)
;
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0041dac0 at 0041dce5
;
; Referenced Globals:
;   undefined4 DAT_005d4a88
;   undefined4 DAT_005d4a90
;
; Called Functions:
;   FUN_0045f3e0
;   FUN_0045f690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041de90
        ;   Label: FUN_0041de90
    PUSH ESI                            ; 0041de91
    PUSH EDI                            ; 0041de92
    PUSH EBP                            ; 0041de93
    SUB ESP,0x3c                        ; 0041de94
    MOV EBP,dword ptr [ESP + 0x50]      ; 0041de97
    MOV EAX,dword ptr [ESP + 0x54]      ; 0041de9b
    MOV EBX,dword ptr [ESP + 0x58]      ; 0041de9f
    CMP EBP,EAX                         ; 0041dea3
    JNZ 0x0041e0a2                      ; 0041dea5
        ;   XREF to: 0041e0a2 (CONDITIONAL_JUMP)  ; LAB_0041e0a2
    LEA EAX,[EBP + 0xc]                 ; 0041deab
        ;   Label: LAB_0041deab
    CMP EAX,EBX                         ; 0041deae
    JZ 0x0041dec2                       ; 0041deb0
        ;   XREF to: 0041dec2 (CONDITIONAL_JUMP)  ; LAB_0041dec2
    MOV EDX,dword ptr [EBX]             ; 0041deb2
    MOV dword ptr [EAX],EDX             ; 0041deb4
    MOV EDX,dword ptr [EBX + 0x4]       ; 0041deb6
    MOV dword ptr [EAX + 0x4],EDX       ; 0041deb9
    MOV EDX,dword ptr [EBX + 0x8]       ; 0041debc
    MOV dword ptr [EAX + 0x8],EDX       ; 0041debf
    LEA EAX,[EBP + 0xc]                 ; 0041dec2
        ;   Label: LAB_0041dec2
    PUSH EAX                            ; 0041dec5
    LEA EBX,[EBP + 0x18]                ; 0041dec6
    PUSH EBX                            ; 0041dec9
    CALL FUN_0045f3e0                   ; 0041deca
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f3e0()
    FLD float ptr [EBP + 0xa8]          ; 0041decf
    FMUL ST0                            ; 0041ded5
    FLD float ptr [EBP + 0xa4]          ; 0041ded7
    FMUL ST0                            ; 0041dedd
    FLD float ptr [EBP + 0xa4]          ; 0041dedf
    ADD ESP,0x8                         ; 0041dee5
    FMUL float ptr [EBP + 0xa4]         ; 0041dee8
    FLD float ptr [ESP + 0x5c]          ; 0041deee
    FMUL double ptr [0x005d4a88]        ; 0041def2 | DAT_005d4a88
    FLD float ptr [EBP + 0xac]          ; 0041def8
    FMUL ST0                            ; 0041defe
    FLD float ptr [EBP + 0xac]          ; 0041df00
    FMUL ST0                            ; 0041df06
    FLD float ptr [EBP + 0xa8]          ; 0041df08
    FMUL ST0                            ; 0041df0e
    FXCH ST2                            ; 0041df10
    FADDP ST6,ST0                       ; 0041df12
    FXCH ST2                            ; 0041df14
    FST float ptr [EBP + 0x94]          ; 0041df16
    FLD double ptr [0x005d4a90]         ; 0041df1c | DAT_005d4a90
    FXCH                                ; 0041df22
    FMUL ST1                            ; 0041df24
    FXCH ST3                            ; 0041df26
    FADDP ST5,ST0                       ; 0041df28
    FXCH                                ; 0041df2a
    FADDP ST3,ST0                       ; 0041df2c
    FLD float ptr [EBP + 0x94]          ; 0041df2e
    FMUL ST1                            ; 0041df34
    FLD float ptr [EBP + 0x94]          ; 0041df36
    FMULP ST2                           ; 0041df3c
    FXCH ST2                            ; 0041df3e
    FMULP ST5                           ; 0041df40
    FXCH                                ; 0041df42
    FMULP ST3                           ; 0041df44
    FMULP                               ; 0041df46
    LEA EAX,[EBP + 0x64]                ; 0041df48
    FXCH ST2                            ; 0041df4b
    FSTP float ptr [EBP + 0x98]         ; 0041df4d
    FSTP float ptr [EBP + 0x9c]         ; 0041df53
    FSTP float ptr [EBP + 0xa0]         ; 0041df59
    MOV dword ptr [EAX + 0x8],0x0       ; 0041df5f
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041df66
    MOV dword ptr [EAX + 0x4],EDX       ; 0041df69
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041df6c
    MOV dword ptr [EAX],EDX             ; 0041df6f
    LEA EAX,[EBP + 0x88]                ; 0041df71
    MOV dword ptr [EAX + 0x8],0x0       ; 0041df77
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041df7e
    MOV dword ptr [EAX + 0x4],EDX       ; 0041df81
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041df84
    MOV dword ptr [EAX],EDX             ; 0041df87
    LEA EAX,[EBP + 0x4c]                ; 0041df89
    MOV dword ptr [EAX + 0x8],0x0       ; 0041df8c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041df93
    MOV dword ptr [EAX + 0x4],EDX       ; 0041df96
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041df99
    MOV dword ptr [EAX],EDX             ; 0041df9c
    LEA EAX,[EBP + 0x70]                ; 0041df9e
    MOV dword ptr [EAX + 0x8],0x0       ; 0041dfa1
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041dfa8
    MOV dword ptr [EAX + 0x4],EDX       ; 0041dfab
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041dfae
    MOV dword ptr [EAX],EDX             ; 0041dfb1
    LEA EAX,[EBP + 0x58]                ; 0041dfb3
    MOV dword ptr [EAX + 0x8],0x0       ; 0041dfb6
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041dfbd
    MOV dword ptr [EAX + 0x4],EDX       ; 0041dfc0
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041dfc3
    MOV dword ptr [EAX],EDX             ; 0041dfc6
    LEA EAX,[EBP + 0x7c]                ; 0041dfc8
    MOV dword ptr [EAX + 0x8],0x0       ; 0041dfcb
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041dfd2
    MOV dword ptr [EAX + 0x4],EDX       ; 0041dfd5
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041dfd8
    MOV dword ptr [EAX],EDX             ; 0041dfdb
    LEA EAX,[EBP + 0x40]                ; 0041dfdd
    MOV dword ptr [EAX + 0x8],0x0       ; 0041dfe0
    XOR EDX,EDX                         ; 0041dfe7
    MOV ECX,dword ptr [EAX + 0x8]       ; 0041dfe9
    MOV dword ptr [EAX + 0x4],ECX       ; 0041dfec
    MOV ECX,dword ptr [EAX + 0x4]       ; 0041dfef
    MOV dword ptr [EAX],ECX             ; 0041dff2
    MOV ECX,dword ptr [EBP + 0xb0]      ; 0041dff4
    MOV dword ptr [ESP + 0x38],EDX      ; 0041dffa
    TEST ECX,ECX                        ; 0041dffe
    JLE 0x0041e090                      ; 0041e000
        ;   XREF to: 0041e090 (CONDITIONAL_JUMP)  ; LAB_0041e090
    LEA EAX,[EBP + 0xb4]                ; 0041e006
    MOV dword ptr [ESP + 0x34],EBX      ; 0041e00c
    LEA EBX,[EBP + 0xc0]                ; 0041e010
    MOV dword ptr [ESP + 0x30],EAX      ; 0041e016
    IMUL EAX,dword ptr [ESP + 0x38],0x34 ; 0041e01a
        ;   Label: LAB_0041e01a
    ADD EAX,dword ptr [ESP + 0x30]      ; 0041e01f
    PUSH EAX                            ; 0041e023
    MOV ESI,dword ptr [ESP + 0x38]      ; 0041e024
    PUSH ESI                            ; 0041e028
    LEA ESI,[ESP + 0x2c]                ; 0041e029
    LEA EDI,[ESP + 0x20]                ; 0041e02d
    CALL FUN_0045f690                   ; 0041e031
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f690()
    LEA ESI,[ESP + 0x2c]                ; 0041e036
    ADD ESP,0x8                         ; 0041e03a
    MOVSD ES:EDI,ESI                    ; 0041e03d
    MOVSD ES:EDI,ESI                    ; 0041e03e
    MOVSD ES:EDI,ESI                    ; 0041e03f
    MOV EAX,ESP                         ; 0041e040
    FLD float ptr [EBP]                 ; 0041e042
    FLD float ptr [EBP + 0x4]           ; 0041e045
    FLD float ptr [EBP + 0x8]           ; 0041e048
    MOV EDI,ESP                         ; 0041e04b
    LEA ESI,[ESP + 0xc]                 ; 0041e04d
    FXCH ST2                            ; 0041e051
    FADD float ptr [ESP + 0x18]         ; 0041e053
    FXCH                                ; 0041e057
    FADD float ptr [ESP + 0x1c]         ; 0041e059
    FXCH ST2                            ; 0041e05d
    FADD float ptr [ESP + 0x20]         ; 0041e05f
    FXCH                                ; 0041e063
    FSTP float ptr [ESP + 0xc]          ; 0041e065
    FXCH                                ; 0041e069
    FSTP float ptr [ESP + 0x10]         ; 0041e06b
    FSTP float ptr [ESP + 0x14]         ; 0041e06f
    MOVSD ES:EDI,ESI                    ; 0041e073
    MOVSD ES:EDI,ESI                    ; 0041e074
    MOVSD ES:EDI,ESI                    ; 0041e075
    CMP EBX,EAX                         ; 0041e076
    JNZ 0x0041e0b8                      ; 0041e078
        ;   XREF to: 0041e0b8 (CONDITIONAL_JUMP)  ; LAB_0041e0b8
    MOV ESI,dword ptr [ESP + 0x38]      ; 0041e07a
        ;   Label: LAB_0041e07a
    ADD EBX,0x34                        ; 0041e07e
    INC ESI                             ; 0041e081
    MOV EDI,dword ptr [EBP + 0xb0]      ; 0041e082
    MOV dword ptr [ESP + 0x38],ESI      ; 0041e088
    CMP ESI,EDI                         ; 0041e08c
    JL 0x0041e01a                       ; 0041e08e
        ;   XREF to: 0041e01a (CONDITIONAL_JUMP)  ; LAB_0041e01a
    MOV dword ptr [EBP + 0x254],0x1     ; 0041e090
        ;   Label: LAB_0041e090
    ADD ESP,0x3c                        ; 0041e09a
    POP EBP                             ; 0041e09d
    POP EDI                             ; 0041e09e
    POP ESI                             ; 0041e09f
    POP EBX                             ; 0041e0a0
    RET                                 ; 0041e0a1
    MOV EDX,dword ptr [EAX]             ; 0041e0a2
        ;   Label: LAB_0041e0a2
    MOV dword ptr [EBP],EDX             ; 0041e0a4
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041e0a7
    MOV dword ptr [EBP + 0x4],EDX       ; 0041e0aa
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041e0ad
    MOV dword ptr [EBP + 0x8],EDX       ; 0041e0b0
    JMP 0x0041deab                      ; 0041e0b3
        ;   XREF to: 0041deab (UNCONDITIONAL_JUMP)  ; LAB_0041deab
    MOV EAX,dword ptr [ESP]             ; 0041e0b8
        ;   Label: LAB_0041e0b8
    MOV dword ptr [EBX],EAX             ; 0041e0bb
    MOV EAX,dword ptr [ESP + 0x4]       ; 0041e0bd
    MOV dword ptr [EBX + 0x4],EAX       ; 0041e0c1
    MOV EAX,dword ptr [ESP + 0x8]       ; 0041e0c4
    MOV dword ptr [EBX + 0x8],EAX       ; 0041e0c8
    JMP 0x0041e07a                      ; 0041e0cb
        ;   XREF to: 0041e07a (UNCONDITIONAL_JUMP)  ; LAB_0041e07a


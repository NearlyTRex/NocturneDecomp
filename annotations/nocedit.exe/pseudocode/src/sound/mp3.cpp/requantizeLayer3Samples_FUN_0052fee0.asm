; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_requantizeLayer3Samples_FUN_0052fee0(int *scalefactor_indices,uint *quantized_samples,float *dequantized_output,SMpegFrame *frame_info)
;
; Parameters:
; int *            Stack[0x4]:4   scalefactor_indices
; uint *           Stack[0x8]:4   quantized_samples
; float *          Stack[0xc]:4   dequantized_output
; SMpegFrame *     Stack[0x10]:4   frame_info
; Local Variables:
; SBitAllocationTable * Stack[-0x58]:4  local_58
; int              Stack[-0x54]:4  local_54
; int              Stack[-0x40]:4  local_40
; undefined4 *     Stack[-0x34]:4  local_34
; uint *           Stack[-0x30]:4  local_30
; uint *           Stack[-0x2c]:4  local_2c
; int *            Stack[-0x28]:4  local_28
; undefined4 *     Stack[-0x24]:4  local_24
; int *            Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; float *          Stack[-0x18]:4  local_18
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 at 00535452
;
; Referenced Globals:
;   double[17] g_MpegRequantizationScaleTable
;   double[17] g_MpegRequantizationOffsetTable
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052fee0
        ;   Label: sound_mp3.cpp_requantizeLayer3Samples_FUN_0052fee0
    PUSH ESI                            ; 0052fee1
    PUSH EDI                            ; 0052fee2
    PUSH EBP                            ; 0052fee3
    SUB ESP,0x58                        ; 0052fee4
    MOV EAX,dword ptr [ESP + 0x78]      ; 0052fee7
    MOV EDX,dword ptr [EAX + 0x10]      ; 0052feeb
    MOV dword ptr [ESP + 0x30],EDX      ; 0052feee
    MOV EDX,dword ptr [EAX + 0x18]      ; 0052fef2
    MOV dword ptr [ESP + 0x8],EDX       ; 0052fef5
    MOV EAX,dword ptr [EAX + 0x8]       ; 0052fef9
    TEST EDX,EDX                        ; 0052fefc
    JLE 0x00530008                      ; 0052fefe
        ;   XREF to: 00530008 (CONDITIONAL_JUMP)  ; LAB_00530008
    MOV dword ptr [ESP + 0x10],EAX      ; 0052ff04
    XOR EBP,EBP                         ; 0052ff08
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052ff0a
    MOV dword ptr [ESP + 0x14],EBP      ; 0052ff11
    MOV dword ptr [ESP + 0xc],EAX       ; 0052ff15
    MOV EAX,dword ptr [ESP + 0x14]      ; 0052ff19
        ;   Label: LAB_0052ff19
    MOV dword ptr [ESP + 0x20],EAX      ; 0052ff1d
    MOV EAX,dword ptr [ESP + 0x10]      ; 0052ff21
    MOV ESI,dword ptr [ESP + 0x14]      ; 0052ff25
    MOV dword ptr [ESP + 0x2c],EAX      ; 0052ff29
    MOV EDI,EAX                         ; 0052ff2d
    MOV EAX,ESI                         ; 0052ff2f
    MOV EDX,dword ptr [ESP + 0x70]      ; 0052ff31
    XOR EAX,ESI                         ; 0052ff35
    MOV dword ptr [ESP + 0x1c],ESI      ; 0052ff37
    MOV dword ptr [ESP + 0x28],EAX      ; 0052ff3b
    LEA EAX,[ESI + EDX*0x1]             ; 0052ff3f
    MOV dword ptr [ESP + 0x24],EAX      ; 0052ff42
    MOV dword ptr [ESP + 0x18],EAX      ; 0052ff46
    XOR EBP,EBP                         ; 0052ff4a
        ;   Label: LAB_0052ff4a
    MOV EAX,dword ptr [ESP + 0x30]      ; 0052ff4c
    MOV dword ptr [ESP + 0x4c],EBP      ; 0052ff50
    TEST EAX,EAX                        ; 0052ff54
    JLE 0x00530064                      ; 0052ff56
        ;   XREF to: 00530064 (CONDITIONAL_JUMP)  ; LAB_00530064
    MOV EAX,dword ptr [ESP + 0x24]      ; 0052ff5c
    MOV ECX,dword ptr [ESP + 0x28]      ; 0052ff60
    MOV dword ptr [ESP + 0x40],EAX      ; 0052ff64
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0052ff68
    MOV EBX,dword ptr [ESP + 0x74]      ; 0052ff6c
    ADD EAX,ECX                         ; 0052ff70
    ADD EAX,EBX                         ; 0052ff72
    MOV dword ptr [ESP + 0x34],EAX      ; 0052ff74
    LEA EAX,[ECX + ESI*0x1]             ; 0052ff78
    MOV EBP,dword ptr [ESP + 0x6c]      ; 0052ff7b
    LEA EDX,[EBX + EAX*0x1]             ; 0052ff7f
    ADD EAX,EBP                         ; 0052ff82
    MOV dword ptr [ESP + 0x3c],EAX      ; 0052ff84
    MOV EAX,dword ptr [ESP + 0x18]      ; 0052ff88
    MOV dword ptr [ESP + 0x48],EAX      ; 0052ff8c
    MOV EAX,dword ptr [ESP + 0x20]      ; 0052ff90
    ADD EAX,ECX                         ; 0052ff94
    MOV dword ptr [ESP + 0x44],EDX      ; 0052ff96
    LEA EDX,[EAX + EBP*0x1]             ; 0052ff9a
    ADD EAX,EBX                         ; 0052ff9d
    MOV dword ptr [ESP + 0x38],EDX      ; 0052ff9f
    MOV dword ptr [ESP + 0x50],EAX      ; 0052ffa3
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0052ffa7
        ;   Label: LAB_0052ffa7
    MOV EBX,dword ptr [ESP + 0x70]      ; 0052ffab
    SHL EAX,0x7                         ; 0052ffaf
    ADD EBX,EAX                         ; 0052ffb2
    MOV EAX,dword ptr [ESP + 0x40]      ; 0052ffb4
    MOV EBP,dword ptr [EAX]             ; 0052ffb8
    TEST EBP,EBP                        ; 0052ffba
    JZ 0x0053012c                       ; 0052ffbc
        ;   XREF to: 0053012c (CONDITIONAL_JUMP)  ; LAB_0053012c
    XOR EAX,EAX                         ; 0052ffc2
    LEA EDX,[EBX + ESI*0x1]             ; 0052ffc4
        ;   Label: LAB_0052ffc4
    MOV EBP,0x1                         ; 0052ffc7
    MOV CL,AL                           ; 0052ffcc
    MOV EDX,dword ptr [EDX]             ; 0052ffce
    SHL EBP,CL                          ; 0052ffd0
    SHL EDX,0x4                         ; 0052ffd2
    MOV ECX,EBP                         ; 0052ffd5
    CMP ECX,dword ptr [EDX + EDI*0x1]   ; 0052ffd7
    JNC 0x00530081                      ; 0052ffda
        ;   XREF to: 00530081 (CONDITIONAL_JUMP)  ; LAB_00530081
    INC EAX                             ; 0052ffe0
    JMP 0x0052ffc4                      ; 0052ffe1
        ;   XREF to: 0052ffc4 (UNCONDITIONAL_JUMP)  ; LAB_0052ffc4
    MOV ECX,dword ptr [ESP + 0x14]      ; 0052ffe3
        ;   Label: LAB_0052ffe3
    MOV EBX,dword ptr [ESP + 0x10]      ; 0052ffe7
    MOV ESI,dword ptr [ESP + 0xc]       ; 0052ffeb
    ADD ECX,0x4                         ; 0052ffef
    ADD EBX,0x100                       ; 0052fff2
    MOV dword ptr [ESP + 0x14],ECX      ; 0052fff8
    MOV dword ptr [ESP + 0x10],EBX      ; 0052fffc
    CMP ECX,ESI                         ; 00530000
    JL 0x0052ff19                       ; 00530002
        ;   XREF to: 0052ff19 (CONDITIONAL_JUMP)  ; LAB_0052ff19
    MOV EDI,dword ptr [ESP + 0x8]       ; 00530008
        ;   Label: LAB_00530008
    CMP EDI,0x20                        ; 0053000c
    JGE 0x0053005c                      ; 0053000f
        ;   XREF to: 0053005c (CONDITIONAL_JUMP)  ; LAB_0053005c
    MOV EBP,dword ptr [ESP + 0x30]      ; 00530011
    LEA ESI,[EDI*0x4 + 0x0]             ; 00530015
    MOV EBX,ESI                         ; 0053001c
        ;   Label: LAB_0053001c
    XOR ECX,ECX                         ; 0053001e
    MOV EDI,dword ptr [ESP + 0x30]      ; 00530020
        ;   Label: LAB_00530020
    XOR EDX,EDX                         ; 00530024
    TEST EDI,EDI                        ; 00530026
    JLE 0x00530043                      ; 00530028
        ;   XREF to: 00530043 (CONDITIONAL_JUMP)  ; LAB_00530043
    MOV EDI,dword ptr [ESP + 0x74]      ; 0053002a
    LEA EAX,[EBX + ECX*0x1]             ; 0053002e
    ADD EAX,EDI                         ; 00530031
    INC EDX                             ; 00530033
        ;   Label: LAB_00530033
    MOV dword ptr [EAX],0x0             ; 00530034
    ADD EAX,0x180                       ; 0053003a
    CMP EDX,EBP                         ; 0053003f
    JL 0x00530033                       ; 00530041
        ;   XREF to: 00530033 (CONDITIONAL_JUMP)  ; LAB_00530033
    ADD ECX,0x80                        ; 00530043
        ;   Label: LAB_00530043
    CMP ECX,0x180                       ; 00530049
    JNZ 0x00530020                      ; 0053004f
        ;   XREF to: 00530020 (CONDITIONAL_JUMP)  ; LAB_00530020
    ADD ESI,0x4                         ; 00530051
    CMP ESI,0x80                        ; 00530054
    JL 0x0053001c                       ; 0053005a
        ;   XREF to: 0053001c (CONDITIONAL_JUMP)  ; LAB_0053001c
    ADD ESP,0x58                        ; 0053005c
        ;   Label: LAB_0053005c
    POP EBP                             ; 0053005f
    POP EDI                             ; 00530060
    POP ESI                             ; 00530061
    POP EBX                             ; 00530062
    RET                                 ; 00530063
    MOV EAX,dword ptr [ESP + 0x28]      ; 00530064
        ;   Label: LAB_00530064
    ADD EAX,0x80                        ; 00530068
    MOV dword ptr [ESP + 0x28],EAX      ; 0053006d
    CMP EAX,0x180                       ; 00530071
    JZ 0x0052ffe3                       ; 00530076
        ;   XREF to: 0052ffe3 (CONDITIONAL_JUMP)  ; LAB_0052ffe3
    JMP 0x0052ff4a                      ; 0053007c
        ;   XREF to: 0052ff4a (UNCONDITIONAL_JUMP)  ; LAB_0052ff4a
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00530081
        ;   Label: LAB_00530081
    LEA ECX,[EAX + -0x1]                ; 00530085
    MOV EDX,dword ptr [EDX]             ; 00530088
    SHR EDX,CL                          ; 0053008a
    AND EDX,0x1                         ; 0053008c
    CMP EDX,0x1                         ; 0053008f
    JNZ 0x0053011d                      ; 00530092
        ;   XREF to: 0053011d (CONDITIONAL_JUMP)  ; LAB_0053011d
    MOV EDX,dword ptr [ESP + 0x44]      ; 00530098
    MOV dword ptr [EDX],0x0             ; 0053009c
    DEC EAX                             ; 005300a2
        ;   Label: LAB_005300a2
    MOV CL,AL                           ; 005300a3
    MOV EAX,0x1                         ; 005300a5
    SHL EAX,CL                          ; 005300aa
    MOV ECX,dword ptr [ESP + 0x38]      ; 005300ac
    LEA EDX,[EAX + -0x1]                ; 005300b0
    MOV EBX,dword ptr [ECX]             ; 005300b3
    XOR EBP,EBP                         ; 005300b5
    AND EDX,EBX                         ; 005300b7
    MOV dword ptr [ESP + 0x4],EBP       ; 005300b9
    MOV dword ptr [ESP],EDX             ; 005300bd
    MOV dword ptr [ESP + 0x54],EAX      ; 005300c0
    FILD qword ptr [ESP]                ; 005300c4
    FILD dword ptr [ESP + 0x54]         ; 005300c7
    FDIVP                               ; 005300cb
    MOV EAX,dword ptr [ESP + 0x50]      ; 005300cd
    FADD float ptr [EAX]                ; 005300d1
    FSTP float ptr [EAX]                ; 005300d3
    MOV EAX,dword ptr [ESP + 0x48]      ; 005300d5
    MOV EAX,dword ptr [EAX]             ; 005300d9
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005300db
    SHL EAX,0x4                         ; 005300df
    ADD EAX,EDX                         ; 005300e2
    MOV EDX,dword ptr [ESP + 0x50]      ; 005300e4
    MOV EAX,dword ptr [EAX + 0xc]       ; 005300e8
    FLD float ptr [EDX]                 ; 005300eb
    FLD ST0                             ; 005300ed
    FADD double ptr [EAX*0x8 + 0x67d8e8] ; 005300ef | g_MpegRequantizationOffsetTable
    FSTP ST1                            ; 005300f6
    MOV EAX,dword ptr [ESP + 0x48]      ; 005300f8
    FSTP float ptr [EDX]                ; 005300fc
    MOV EAX,dword ptr [EAX]             ; 005300fe
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00530100
    SHL EAX,0x4                         ; 00530104
    ADD EAX,ECX                         ; 00530107
    FLD float ptr [EDX]                 ; 00530109
    MOV EAX,dword ptr [EAX + 0xc]       ; 0053010b
    FLD ST0                             ; 0053010e
    FMUL double ptr [EAX*0x8 + 0x67d860] ; 00530110 | g_MpegRequantizationScaleTable
    FSTP ST1                            ; 00530117
    FSTP float ptr [EDX]                ; 00530119
    JMP 0x00530132                      ; 0053011b
        ;   XREF to: 00530132 (UNCONDITIONAL_JUMP)  ; LAB_00530132
    MOV EDX,dword ptr [ESP + 0x44]      ; 0053011d
        ;   Label: LAB_0053011d
    MOV dword ptr [EDX],0xbf800000      ; 00530121
    JMP 0x005300a2                      ; 00530127
        ;   XREF to: 005300a2 (UNCONDITIONAL_JUMP)  ; LAB_005300a2
    MOV EAX,dword ptr [ESP + 0x34]      ; 0053012c
        ;   Label: LAB_0053012c
    MOV dword ptr [EAX],EBP             ; 00530130
    MOV EDX,dword ptr [ESP + 0x40]      ; 00530132
        ;   Label: LAB_00530132
    MOV ECX,dword ptr [ESP + 0x34]      ; 00530136
    MOV EBX,dword ptr [ESP + 0x44]      ; 0053013a
    MOV EBP,dword ptr [ESP + 0x3c]      ; 0053013e
    MOV EAX,dword ptr [ESP + 0x48]      ; 00530142
    ADD EDX,0x80                        ; 00530146
    ADD ECX,0x180                       ; 0053014c
    ADD EBX,0x180                       ; 00530152
    ADD EBP,0x180                       ; 00530158
    ADD EAX,0x80                        ; 0053015e
    MOV dword ptr [ESP + 0x40],EDX      ; 00530163
    MOV dword ptr [ESP + 0x34],ECX      ; 00530167
    MOV dword ptr [ESP + 0x44],EBX      ; 0053016b
    MOV dword ptr [ESP + 0x3c],EBP      ; 0053016f
    MOV dword ptr [ESP + 0x48],EAX      ; 00530173
    MOV EDX,dword ptr [ESP + 0x38]      ; 00530177
    MOV ECX,dword ptr [ESP + 0x50]      ; 0053017b
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0053017f
    MOV EBP,dword ptr [ESP + 0x30]      ; 00530183
    ADD EDX,0x180                       ; 00530187
    ADD ECX,0x180                       ; 0053018d
    INC EBX                             ; 00530193
    MOV dword ptr [ESP + 0x38],EDX      ; 00530194
    MOV dword ptr [ESP + 0x50],ECX      ; 00530198
    MOV dword ptr [ESP + 0x4c],EBX      ; 0053019c
    CMP EBX,EBP                         ; 005301a0
    JGE 0x00530064                      ; 005301a2
        ;   XREF to: 00530064 (CONDITIONAL_JUMP)  ; LAB_00530064
    JMP 0x0052ffa7                      ; 005301a8
        ;   XREF to: 0052ffa7 (UNCONDITIONAL_JUMP)  ; LAB_0052ffa7


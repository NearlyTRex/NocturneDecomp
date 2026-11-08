; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005adeb0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x138]:1  local_138
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
; XREF[5]:
;   FUN_004ad3e0 at 004ad419
;   FUN_004f04f0 at 004f06c9
;   FUN_00570250 at 00570443
;   FUN_00581660 at 005816a2
;   FUN_005b14a0 at 005b1516
;
; Referenced Globals:
;   undefined4 DAT_005f0f71
;   TerminatedCString s_models_005f0f74
;   TerminatedCString s_core_cloth_cpp_005f0f7b
;   TerminatedCString s_CCloth_load_Unable_to_op_005f0f8d
;   undefined4 DAT_005f0fb3
;   TerminatedCString s_core_cloth_cpp_005f0fb7
;   TerminatedCString s_s_is_version_d_this_EXE_005f0fc9
;   undefined4 DAT_005f1011
;   TerminatedCString s_f_f_f_f_f_f_005f1015
;   TerminatedCString s_f_f_f_f_f_f_f_f_005f1028
;   undefined4 DAT_005f1041
;   undefined4 DAT_005f1045
;   undefined4 DAT_005f1049
;   undefined4 DAT_005f104d
;   undefined4 DAT_005f1051
;   ... and 12 more
;
; Called Functions:
;   FUN_0044dcd0
;   FUN_0044efe0
;   FUN_00460c70
;   FUN_004e4500
;   FUN_005ade20
;   FUN_005ae420
;   FUN_005b8100
;   FUN_005b89c0
;   FUN_005b9600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005adeb0
        ;   Label: FUN_005adeb0
    PUSH ESI                            ; 005adeb1
    PUSH EDI                            ; 005adeb2
    PUSH EBP                            ; 005adeb3
    SUB ESP,0x228                       ; 005adeb4
    MOV ESI,dword ptr [ESP + 0x23c]     ; 005adeba
    MOV EBX,dword ptr [ESP + 0x240]     ; 005adec1
    PUSH 0x5f0f71                       ; 005adec8 | DAT_005f0f71
    PUSH EBX                            ; 005adecd
    PUSH 0x5f0f74                       ; 005adece | = "models"
    CALL FUN_00460c70                   ; 005aded3
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00460c70()
    ADD ESP,0xc                         ; 005aded8
    MOV dword ptr [ESP + 0x208],EAX     ; 005adedb
    TEST EAX,EAX                        ; 005adee2
    JZ 0x005ae3ab                       ; 005adee4
        ;   XREF to: 005ae3ab (CONDITIONAL_JUMP)  ; LAB_005ae3ab
    MOV EDI,dword ptr [ESP + 0x208]     ; 005adeea
        ;   Label: LAB_005adeea
    PUSH EDI                            ; 005adef1
    PUSH 0xff                           ; 005adef2
    LEA EAX,[ESP + 0x108]               ; 005adef7
    PUSH EAX                            ; 005adefe
    CALL FUN_005b9600                   ; 005adeff
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 005adf04
    LEA EAX,[ESI + 0x3ab20]             ; 005adf07
    PUSH EAX                            ; 005adf0d
    PUSH 0x5f0fb3                       ; 005adf0e | DAT_005f0fb3
    PUSH EDI                            ; 005adf13
    CALL FUN_005b8100                   ; 005adf14
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV EAX,dword ptr [ESI + 0x3ab20]   ; 005adf19
    ADD ESP,0xc                         ; 005adf1f
    CMP EAX,0x3                         ; 005adf22
    JLE 0x005adf4e                      ; 005adf25
        ;   XREF to: 005adf4e (CONDITIONAL_JUMP)  ; LAB_005adf4e
    PUSH 0x3                            ; 005adf27
    PUSH EAX                            ; 005adf29
    PUSH EBX                            ; 005adf2a
    MOV EDX,0x5f0fb7                    ; 005adf2b | = "..\\core\\cloth.cpp"
    MOV ECX,0xa2                        ; 005adf30
    PUSH 0x5f0fc9                       ; 005adf35 | = "%s is version %d, this .EXE is old an..."
    MOV dword ptr [0x01d046a0],EDX      ; 005adf3a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 005adf40 | DAT_01d046a4
    CALL FUN_004e4500                   ; 005adf46
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x10                        ; 005adf4b
    MOV EBP,dword ptr [ESP + 0x208]     ; 005adf4e
        ;   Label: LAB_005adf4e
    PUSH EBP                            ; 005adf55
    PUSH 0xff                           ; 005adf56
    LEA EAX,[ESP + 0x108]               ; 005adf5b
    PUSH EAX                            ; 005adf62
    CALL FUN_005b9600                   ; 005adf63
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 005adf68
    MOV EAX,ESP                         ; 005adf6b
    PUSH EAX                            ; 005adf6d
    PUSH 0x5f1011                       ; 005adf6e | DAT_005f1011
    PUSH EBP                            ; 005adf73
    CALL FUN_005b8100                   ; 005adf74
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 005adf79
    MOV EAX,ESP                         ; 005adf7c
    PUSH EAX                            ; 005adf7e
    PUSH ESI                            ; 005adf7f
    CALL FUN_0044dcd0                   ; 005adf80
        ;   XREF to: 0044dcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044dcd0()
    ADD ESP,0x8                         ; 005adf85
    PUSH ESI                            ; 005adf88
    CALL FUN_0044efe0                   ; 005adf89
        ;   XREF to: 0044efe0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044efe0()
    ADD ESP,0x4                         ; 005adf8e
    PUSH EBP                            ; 005adf91
    PUSH 0xff                           ; 005adf92
    LEA EAX,[ESP + 0x108]               ; 005adf97
    PUSH EAX                            ; 005adf9e
    LEA EBP,[ESI + 0x37b18]             ; 005adf9f
    CALL FUN_005b9600                   ; 005adfa5
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    LEA EAX,[ESI + 0x37b1c]             ; 005adfaa
    LEA EBX,[ESI + 0x37b20]             ; 005adfb0
    LEA EDX,[ESI + 0x37b24]             ; 005adfb6
    LEA EDI,[ESI + 0x37b28]             ; 005adfbc
    ADD ESP,0xc                         ; 005adfc2
    LEA ECX,[ESI + 0x37b2c]             ; 005adfc5
    MOV dword ptr [ESP + 0x200],ECX     ; 005adfcb
    CMP dword ptr [ESI + 0x3ab20],0x3   ; 005adfd2
    JGE 0x005ae3d4                      ; 005adfd9
        ;   XREF to: 005ae3d4 (CONDITIONAL_JUMP)  ; LAB_005ae3d4
    MOV ECX,dword ptr [ESP + 0x200]     ; 005adfdf
    PUSH ECX                            ; 005adfe6
    PUSH EDI                            ; 005adfe7
    PUSH EDX                            ; 005adfe8
    PUSH EBX                            ; 005adfe9
    PUSH EAX                            ; 005adfea
    PUSH EBP                            ; 005adfeb
    PUSH 0x5f1015                       ; 005adfec | = "%f,%f,%f,%f,%f,%f\n"
    MOV EBX,dword ptr [ESP + 0x224]     ; 005adff1
    PUSH EBX                            ; 005adff8
    CALL FUN_005b8100                   ; 005adff9
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    FLD float ptr [0x006011b8]          ; 005adffe | DAT_006011b8
    FLD float ptr [0x006011bc]          ; 005ae004 | DAT_006011bc
    FLD float ptr [0x006011c0]          ; 005ae00a | DAT_006011c0
    FLD float ptr [0x006011c4]          ; 005ae010 | DAT_006011c4
    FLD float ptr [0x006011c8]          ; 005ae016 | DAT_006011c8
    FLD float ptr [0x006011cc]          ; 005ae01c | DAT_006011cc
    FLD float ptr [0x006011d0]          ; 005ae022 | DAT_006011d0
    ADD ESP,0x20                        ; 005ae028
    FXCH ST6                            ; 005ae02b
    FSTP float ptr [ESI + 0x37b18]      ; 005ae02d
    FLD float ptr [0x006011d4]          ; 005ae033 | DAT_006011d4
    FXCH ST5                            ; 005ae039
    FSTP float ptr [ESI + 0x37b1c]      ; 005ae03b
    FXCH ST3                            ; 005ae041
    FSTP float ptr [ESI + 0x37b20]      ; 005ae043
    FXCH                                ; 005ae049
    FSTP float ptr [ESI + 0x37b24]      ; 005ae04b
    FSTP float ptr [ESI + 0x37b28]      ; 005ae051
    FSTP float ptr [ESI + 0x37b2c]      ; 005ae057
    FXCH                                ; 005ae05d
    FSTP float ptr [ESI + 0x37b30]      ; 005ae05f
    FSTP float ptr [ESI + 0x37b34]      ; 005ae065
    MOV EDI,dword ptr [ESP + 0x208]     ; 005ae06b
        ;   Label: LAB_005ae06b
    PUSH EDI                            ; 005ae072
    PUSH 0xff                           ; 005ae073
    LEA EAX,[ESP + 0x108]               ; 005ae078
    PUSH EAX                            ; 005ae07f
    CALL FUN_005b9600                   ; 005ae080
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 005ae085
    LEA EAX,[ESI + 0x37b48]             ; 005ae088
    PUSH EAX                            ; 005ae08e
    PUSH 0x5f1041                       ; 005ae08f | DAT_005f1041
    PUSH EDI                            ; 005ae094
    CALL FUN_005b8100                   ; 005ae095
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV EAX,dword ptr [ESI + 0x3ab20]   ; 005ae09a
    ADD ESP,0xc                         ; 005ae0a0
    CMP EAX,0x2                         ; 005ae0a3
    JL 0x005ae409                       ; 005ae0a6
        ;   XREF to: 005ae409 (CONDITIONAL_JUMP)  ; LAB_005ae409
    PUSH EDI                            ; 005ae0ac
    PUSH 0xff                           ; 005ae0ad
    LEA EAX,[ESP + 0x108]               ; 005ae0b2
    PUSH EAX                            ; 005ae0b9
    CALL FUN_005b9600                   ; 005ae0ba
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 005ae0bf
    LEA EAX,[ESI + 0x37b44]             ; 005ae0c2
    PUSH EAX                            ; 005ae0c8
    PUSH 0x5f1045                       ; 005ae0c9 | DAT_005f1045
    PUSH EDI                            ; 005ae0ce
    CALL FUN_005b8100                   ; 005ae0cf
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 005ae0d4
    MOV EBX,dword ptr [ESP + 0x208]     ; 005ae0d7
        ;   Label: LAB_005ae0d7
    PUSH EBX                            ; 005ae0de
    PUSH 0xff                           ; 005ae0df
    LEA EAX,[ESP + 0x108]               ; 005ae0e4
    PUSH EAX                            ; 005ae0eb
    CALL FUN_005b9600                   ; 005ae0ec
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 005ae0f1
    LEA EAX,[ESI + 0x39ce8]             ; 005ae0f4
    PUSH EAX                            ; 005ae0fa
    PUSH 0x5f1049                       ; 005ae0fb | DAT_005f1049
    PUSH EBX                            ; 005ae100
    CALL FUN_005b8100                   ; 005ae101
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 005ae106
    PUSH ESI                            ; 005ae109
    CALL FUN_005ade20                   ; 005ae10a
        ;   XREF to: 005ade20 (UNCONDITIONAL_CALL)  ; undefined FUN_005ade20()
    ADD ESP,0x4                         ; 005ae10f
    PUSH EBX                            ; 005ae112
    PUSH 0xff                           ; 005ae113
    LEA EAX,[ESP + 0x108]               ; 005ae118
    PUSH EAX                            ; 005ae11f
    XOR EBX,EBX                         ; 005ae120
    CALL FUN_005b9600                   ; 005ae122
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    MOV EAX,dword ptr [ESI + 0x39ce8]   ; 005ae127
    ADD ESP,0xc                         ; 005ae12d
    TEST EAX,EAX                        ; 005ae130
    JLE 0x005ae160                      ; 005ae132
        ;   XREF to: 005ae160 (CONDITIONAL_JUMP)  ; LAB_005ae160
    LEA EDI,[ESI + 0x39cec]             ; 005ae134
    PUSH EDI                            ; 005ae13a
        ;   Label: LAB_005ae13a
    PUSH 0x5f104d                       ; 005ae13b | DAT_005f104d
    MOV EDX,dword ptr [ESP + 0x210]     ; 005ae140
    PUSH EDX                            ; 005ae147
    INC EBX                             ; 005ae148
    ADD EDI,0x4                         ; 005ae149
    CALL FUN_005b8100                   ; 005ae14c
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV ECX,dword ptr [ESI + 0x39ce8]   ; 005ae151
    ADD ESP,0xc                         ; 005ae157
    CMP EBX,ECX                         ; 005ae15a
    JL 0x005ae13a                       ; 005ae15c
        ;   XREF to: 005ae13a (CONDITIONAL_JUMP)  ; LAB_005ae13a
    MOV EAX,EAX                         ; 005ae15e
    PUSH ESI                            ; 005ae160
        ;   Label: LAB_005ae160
    CALL FUN_005ae420                   ; 005ae161
        ;   XREF to: 005ae420 (UNCONDITIONAL_CALL)  ; undefined FUN_005ae420()
    ADD ESP,0x4                         ; 005ae166
    MOV EBX,dword ptr [ESP + 0x208]     ; 005ae169
    PUSH EBX                            ; 005ae170
    PUSH 0xff                           ; 005ae171
    LEA EAX,[ESP + 0x108]               ; 005ae176
    PUSH EAX                            ; 005ae17d
    CALL FUN_005b9600                   ; 005ae17e
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 005ae183
    LEA EAX,[ESI + 0x37b4c]             ; 005ae186
    PUSH EAX                            ; 005ae18c
    PUSH 0x5f1051                       ; 005ae18d | DAT_005f1051
    PUSH EBX                            ; 005ae192
    CALL FUN_005b8100                   ; 005ae193
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 005ae198
    MOV EBP,dword ptr [ESI + 0x37b4c]   ; 005ae19b
    XOR EBX,EBX                         ; 005ae1a1
    TEST EBP,EBP                        ; 005ae1a3
    JLE 0x005ae330                      ; 005ae1a5
        ;   XREF to: 005ae330 (CONDITIONAL_JUMP)  ; LAB_005ae330
    LEA EAX,[ESI + 0x37b50]             ; 005ae1ab
    LEA EBP,[ESI + 0x37b64]             ; 005ae1b1
    MOV dword ptr [ESP + 0x204],EAX     ; 005ae1b7
    LEA EAX,[ESI + 0x37b68]             ; 005ae1be
    MOV dword ptr [ESP + 0x224],EAX     ; 005ae1c4
    LEA EAX,[ESI + 0x37b6c]             ; 005ae1cb
    MOV dword ptr [ESP + 0x220],EAX     ; 005ae1d1
    LEA EAX,[ESI + 0x37b70]             ; 005ae1d8
    MOV dword ptr [ESP + 0x218],EAX     ; 005ae1de
    LEA EAX,[ESI + 0x37b74]             ; 005ae1e5
    MOV dword ptr [ESP + 0x21c],EAX     ; 005ae1eb
    LEA EAX,[ESI + 0x37b78]             ; 005ae1f2
    MOV dword ptr [ESP + 0x214],EAX     ; 005ae1f8
    LEA EAX,[ESI + 0x37b80]             ; 005ae1ff
    LEA EDI,[ESI + 0x37b7c]             ; 005ae205
    MOV dword ptr [ESP + 0x20c],EAX     ; 005ae20b
    LEA EAX,[ESI + 0x37b84]             ; 005ae212
    MOV dword ptr [ESP + 0x210],EAX     ; 005ae218
    IMUL EAX,EBX,0xac                   ; 005ae21f
        ;   Label: LAB_005ae21f
    MOV ECX,dword ptr [ESP + 0x210]     ; 005ae225
    PUSH ECX                            ; 005ae22c
    MOV EDX,dword ptr [ESP + 0x208]     ; 005ae22d
    PUSH EDI                            ; 005ae234
    ADD EAX,EDX                         ; 005ae235
    MOV EDX,dword ptr [ESP + 0x214]     ; 005ae237
    PUSH EDX                            ; 005ae23e
    MOV ECX,dword ptr [ESP + 0x220]     ; 005ae23f
    PUSH ECX                            ; 005ae246
    MOV EDX,dword ptr [ESP + 0x22c]     ; 005ae247
    PUSH EDX                            ; 005ae24e
    MOV ECX,dword ptr [ESP + 0x22c]     ; 005ae24f
    PUSH ECX                            ; 005ae256
    MOV EDX,dword ptr [ESP + 0x238]     ; 005ae257
    PUSH EDX                            ; 005ae25e
    MOV ECX,dword ptr [ESP + 0x240]     ; 005ae25f
    PUSH ECX                            ; 005ae266
    PUSH EBP                            ; 005ae267
    PUSH EAX                            ; 005ae268
    PUSH 0x5f1055                       ; 005ae269 | = "\"%[^\"]\",%f,%f, %f,%f,%f, %f,%f,%f,..."
    MOV EAX,dword ptr [ESP + 0x234]     ; 005ae26e
    PUSH EAX                            ; 005ae275
    ADD EDI,0xac                        ; 005ae276
    INC EBX                             ; 005ae27c
    CALL FUN_005b8100                   ; 005ae27d
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x30                        ; 005ae282
    ADD EBP,0xac                        ; 005ae285
    MOV EDX,dword ptr [ESP + 0x224]     ; 005ae28b
    MOV ECX,dword ptr [ESP + 0x220]     ; 005ae292
    MOV EAX,dword ptr [ESP + 0x218]     ; 005ae299
    ADD EDX,0xac                        ; 005ae2a0
    ADD ECX,0xac                        ; 005ae2a6
    ADD EAX,0xac                        ; 005ae2ac
    MOV dword ptr [ESP + 0x224],EDX     ; 005ae2b1
    MOV dword ptr [ESP + 0x220],ECX     ; 005ae2b8
    MOV dword ptr [ESP + 0x218],EAX     ; 005ae2bf
    MOV EDX,dword ptr [ESP + 0x21c]     ; 005ae2c6
    MOV ECX,dword ptr [ESP + 0x214]     ; 005ae2cd
    MOV EAX,dword ptr [ESP + 0x20c]     ; 005ae2d4
    ADD EDX,0xac                        ; 005ae2db
    ADD ECX,0xac                        ; 005ae2e1
    ADD EAX,0xac                        ; 005ae2e7
    MOV dword ptr [ESP + 0x21c],EDX     ; 005ae2ec
    MOV dword ptr [ESP + 0x214],ECX     ; 005ae2f3
    MOV EDX,dword ptr [ESP + 0x210]     ; 005ae2fa
    MOV dword ptr [ESP + 0x20c],EAX     ; 005ae301
    ADD EDX,0xac                        ; 005ae308
    MOV ECX,dword ptr [ESI + 0x37b4c]   ; 005ae30e
    MOV dword ptr [ESP + 0x210],EDX     ; 005ae314
    CMP EBX,ECX                         ; 005ae31b
    JL 0x005ae21f                       ; 005ae31d
        ;   XREF to: 005ae21f (CONDITIONAL_JUMP)  ; LAB_005ae21f
    LEA EAX,[EAX]                       ; 005ae323
    LEA EDX,[EDX]                       ; 005ae329
    NOP                                 ; 005ae32f
    MOV EBX,dword ptr [ESP + 0x208]     ; 005ae330
        ;   Label: LAB_005ae330
    PUSH EBX                            ; 005ae337
    XOR EDI,EDI                         ; 005ae338
    CALL FUN_005b89c0                   ; 005ae33a
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b89c0()
    MOV EBP,dword ptr [ESI + 0x104]     ; 005ae33f
    ADD ESP,0x4                         ; 005ae345
    TEST EBP,EBP                        ; 005ae348
    JLE 0x005ae3a0                      ; 005ae34a
        ;   XREF to: 005ae3a0 (CONDITIONAL_JUMP)  ; LAB_005ae3a0
    LEA EDX,[ESI + 0x458]               ; 005ae34c
    XOR EBP,EBP                         ; 005ae352
    MOV EAX,dword ptr [ESI + 0x10c]     ; 005ae354
        ;   Label: LAB_005ae354
    MOV EBX,EDX                         ; 005ae35a
    ADD EAX,EBP                         ; 005ae35c
    INC EDI                             ; 005ae35e
    FILD dword ptr [EAX]                ; 005ae35f
    FMUL float ptr [0x006011a8]         ; 005ae361 | DAT_006011a8
    FSTP float ptr [EBX]                ; 005ae367
    FILD dword ptr [EAX + 0x4]          ; 005ae369
    FMUL float ptr [0x006011a8]         ; 005ae36c | DAT_006011a8
    FSTP float ptr [EBX + 0x4]          ; 005ae372
    FILD dword ptr [EAX + 0x8]          ; 005ae375
    FMUL float ptr [0x006011a8]         ; 005ae378 | DAT_006011a8
    FSTP float ptr [EBX + 0x8]          ; 005ae37e
    ADD EDX,0x11c                       ; 005ae381
    MOV EAX,dword ptr [ESI + 0x104]     ; 005ae387
    ADD EBP,0xc                         ; 005ae38d
    CMP EDI,EAX                         ; 005ae390
    JL 0x005ae354                       ; 005ae392
        ;   XREF to: 005ae354 (CONDITIONAL_JUMP)  ; LAB_005ae354
    LEA EAX,[EAX]                       ; 005ae394
    LEA EDX,[EDX]                       ; 005ae39a
    ADD ESP,0x228                       ; 005ae3a0
        ;   Label: LAB_005ae3a0
    POP EBP                             ; 005ae3a6
    POP EDI                             ; 005ae3a7
    POP ESI                             ; 005ae3a8
    POP EBX                             ; 005ae3a9
    RET                                 ; 005ae3aa
    PUSH EBX                            ; 005ae3ab
        ;   Label: LAB_005ae3ab
    MOV EDX,0x5f0f7b                    ; 005ae3ac | = "..\\core\\cloth.cpp"
    MOV ECX,0x9b                        ; 005ae3b1
    PUSH 0x5f0f8d                       ; 005ae3b6 | = "CCloth::load - Unable to open file %s"
    MOV dword ptr [0x01d046a0],EDX      ; 005ae3bb | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 005ae3c1 | DAT_01d046a4
    CALL FUN_004e4500                   ; 005ae3c7
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 005ae3cc
    JMP 0x005adeea                      ; 005ae3cf
        ;   XREF to: 005adeea (UNCONDITIONAL_JUMP)  ; LAB_005adeea
    LEA ECX,[ESI + 0x37b34]             ; 005ae3d4
        ;   Label: LAB_005ae3d4
    PUSH ECX                            ; 005ae3da
    LEA ECX,[ESI + 0x37b30]             ; 005ae3db
    PUSH ECX                            ; 005ae3e1
    MOV ECX,dword ptr [ESP + 0x208]     ; 005ae3e2
    PUSH ECX                            ; 005ae3e9
    PUSH EDI                            ; 005ae3ea
    PUSH EDX                            ; 005ae3eb
    PUSH EBX                            ; 005ae3ec
    PUSH EAX                            ; 005ae3ed
    PUSH EBP                            ; 005ae3ee
    PUSH 0x5f1028                       ; 005ae3ef | = "%f,%f,%f,%f,%f,%f,%f,%f\n"
    MOV EBX,dword ptr [ESP + 0x22c]     ; 005ae3f4
    PUSH EBX                            ; 005ae3fb
    CALL FUN_005b8100                   ; 005ae3fc
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x28                        ; 005ae401
    JMP 0x005ae06b                      ; 005ae404
        ;   XREF to: 005ae06b (UNCONDITIONAL_JUMP)  ; LAB_005ae06b
    MOV dword ptr [ESI + 0x37b44],0x0   ; 005ae409
        ;   Label: LAB_005ae409
    JMP 0x005ae0d7                      ; 005ae413
        ;   XREF to: 005ae0d7 (UNCONDITIONAL_JUMP)  ; LAB_005ae0d7


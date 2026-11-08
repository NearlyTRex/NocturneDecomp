; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_00445010(int *param_1,undefined4 *param_2)
;
; Local Variables:
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   FUN_00446d20 at 00446d43
;
; Called Functions:
;   FUN_00444c90
;   FUN_00444f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00445010
        ;   Label: FUN_00445010
    PUSH ESI                            ; 00445011
    PUSH EDI                            ; 00445012
    PUSH EBP                            ; 00445013
    SUB ESP,0x74                        ; 00445014
    MOV ESI,dword ptr [ESP + 0x88]      ; 00445017
    MOV EBX,dword ptr [ESP + 0x8c]      ; 0044501e
    FLD float ptr [ESI + 0xc]           ; 00445025
    FMUL float ptr [EBX + 0x18]         ; 00445028
    FLD float ptr [ESI + 0x14]          ; 0044502b
    FMUL float ptr [EBX + 0x1c]         ; 0044502e
    FADDP                               ; 00445031
    FLDZ                                ; 00445033
    FCOMPP                              ; 00445035
    FNSTSW AX                           ; 00445037
    SAHF                                ; 00445039
    JNC 0x00445413                      ; 0044503a
        ;   XREF to: 00445413 (CONDITIONAL_JUMP)  ; LAB_00445413
    MOV EBP,dword ptr [ESI]             ; 00445040
    FLD float ptr [EBP + 0x8]           ; 00445042
    FMUL float ptr [EBX + 0x1c]         ; 00445045
    MOV EDI,dword ptr [ESI + 0x4]       ; 00445048
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044504b
    FLD float ptr [EDI + 0x8]           ; 0044504e
    FMUL float ptr [EBX + 0x1c]         ; 00445051
    FLD float ptr [EAX + 0x8]           ; 00445054
    FMUL float ptr [EBX + 0x1c]         ; 00445057
    FLD float ptr [EBP]                 ; 0044505a
    FMUL float ptr [EBX + 0x18]         ; 0044505d
    FLD float ptr [EDI]                 ; 00445060
    FMUL float ptr [EBX + 0x18]         ; 00445062
    FLD float ptr [EAX]                 ; 00445065
    FMUL float ptr [EBX + 0x18]         ; 00445067
    MOV dword ptr [ESP + 0x50],EAX      ; 0044506a
    FXCH ST2                            ; 0044506e
    FADDP ST5,ST0                       ; 00445070
    FADDP ST3,ST0                       ; 00445072
    FADDP                               ; 00445074
    FXCH ST2                            ; 00445076
    FSTP float ptr [ESP + 0x54]         ; 00445078
    FSTP float ptr [ESP + 0x64]         ; 0044507c
    FSTP float ptr [ESP + 0x4c]         ; 00445080
    FLD float ptr [ESP + 0x54]          ; 00445084
    FCOMP float ptr [ESP + 0x64]        ; 00445088
    FNSTSW AX                           ; 0044508c
    SAHF                                ; 0044508e
    JA 0x0044541d                       ; 0044508f
        ;   XREF to: 0044541d (CONDITIONAL_JUMP)  ; LAB_0044541d
    FLD float ptr [ESP + 0x64]          ; 00445095
        ;   Label: LAB_00445095
    FCOMP float ptr [ESP + 0x4c]        ; 00445099
    FNSTSW AX                           ; 0044509d
    SAHF                                ; 0044509f
    JBE 0x004450c4                      ; 004450a0
        ;   XREF to: 004450c4 (CONDITIONAL_JUMP)  ; LAB_004450c4
    MOV EAX,dword ptr [ESP + 0x64]      ; 004450a2
    MOV dword ptr [ESP + 0x40],EAX      ; 004450a6
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004450aa
    MOV dword ptr [ESP + 0x64],EAX      ; 004450ae
    MOV EAX,dword ptr [ESP + 0x40]      ; 004450b2
    MOV dword ptr [ESP + 0x4c],EAX      ; 004450b6
    MOV EAX,EDI                         ; 004450ba
    MOV EDI,dword ptr [ESP + 0x50]      ; 004450bc
    MOV dword ptr [ESP + 0x50],EAX      ; 004450c0
    FLD float ptr [ESP + 0x54]          ; 004450c4
        ;   Label: LAB_004450c4
    FCOMP float ptr [ESP + 0x64]        ; 004450c8
    FNSTSW AX                           ; 004450cc
    SAHF                                ; 004450ce
    JBE 0x004450df                      ; 004450cf
        ;   XREF to: 004450df (CONDITIONAL_JUMP)  ; LAB_004450df
    MOV EAX,dword ptr [ESP + 0x64]      ; 004450d1
    MOV dword ptr [ESP + 0x54],EAX      ; 004450d5
    MOV EAX,EBP                         ; 004450d9
    MOV EBP,EDI                         ; 004450db
    MOV EDI,EAX                         ; 004450dd
    FLD float ptr [ESP + 0x4c]          ; 004450df
        ;   Label: LAB_004450df
    FCOMP float ptr [EBX + 0x2c]        ; 004450e3
    FNSTSW AX                           ; 004450e6
    SAHF                                ; 004450e8
    JC 0x00445413                       ; 004450e9
        ;   XREF to: 00445413 (CONDITIONAL_JUMP)  ; LAB_00445413
    FLD float ptr [ESP + 0x54]          ; 004450ef
    FCOMP float ptr [EBX + 0x30]        ; 004450f3
    FNSTSW AX                           ; 004450f6
    SAHF                                ; 004450f8
    JA 0x00445413                       ; 004450f9
        ;   XREF to: 00445413 (CONDITIONAL_JUMP)  ; LAB_00445413
    MOV EAX,dword ptr [ESI]             ; 004450ff
    XOR EDX,EDX                         ; 00445101
    FLD float ptr [EAX + 0x4]           ; 00445103
    MOV dword ptr [ESP + 0x58],EDX      ; 00445106
    FCOMP float ptr [EBX + 0x24]        ; 0044510a
    FNSTSW AX                           ; 0044510d
    SAHF                                ; 0044510f
    JC 0x0044511a                       ; 00445110
        ;   XREF to: 0044511a (CONDITIONAL_JUMP)  ; LAB_0044511a
    MOV dword ptr [ESP + 0x58],0x1      ; 00445112
    MOV EAX,dword ptr [ESI]             ; 0044511a
        ;   Label: LAB_0044511a
    FLD float ptr [EAX + 0x4]           ; 0044511c
    FCOMP float ptr [EBX + 0x28]        ; 0044511f
    FNSTSW AX                           ; 00445122
    SAHF                                ; 00445124
    JA 0x0044512c                       ; 00445125
        ;   XREF to: 0044512c (CONDITIONAL_JUMP)  ; LAB_0044512c
    OR byte ptr [ESP + 0x58],0x2        ; 00445127
    XOR EAX,EAX                         ; 0044512c
        ;   Label: LAB_0044512c
    MOV dword ptr [ESP + 0x5c],EAX      ; 0044512e
    MOV EAX,dword ptr [ESI + 0x4]       ; 00445132
    FLD float ptr [EAX + 0x4]           ; 00445135
    FCOMP float ptr [EBX + 0x24]        ; 00445138
    FNSTSW AX                           ; 0044513b
    SAHF                                ; 0044513d
    JC 0x00445148                       ; 0044513e
        ;   XREF to: 00445148 (CONDITIONAL_JUMP)  ; LAB_00445148
    MOV dword ptr [ESP + 0x5c],0x1      ; 00445140
    MOV EAX,dword ptr [ESI + 0x4]       ; 00445148
        ;   Label: LAB_00445148
    FLD float ptr [EAX + 0x4]           ; 0044514b
    FCOMP float ptr [EBX + 0x28]        ; 0044514e
    FNSTSW AX                           ; 00445151
    SAHF                                ; 00445153
    JA 0x0044515b                       ; 00445154
        ;   XREF to: 0044515b (CONDITIONAL_JUMP)  ; LAB_0044515b
    OR byte ptr [ESP + 0x5c],0x2        ; 00445156
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044515b
        ;   Label: LAB_0044515b
    XOR ECX,ECX                         ; 0044515e
    FLD float ptr [EAX + 0x4]           ; 00445160
    MOV dword ptr [ESP + 0x60],ECX      ; 00445163
    FCOMP float ptr [EBX + 0x24]        ; 00445167
    FNSTSW AX                           ; 0044516a
    SAHF                                ; 0044516c
    JC 0x00445177                       ; 0044516d
        ;   XREF to: 00445177 (CONDITIONAL_JUMP)  ; LAB_00445177
    MOV dword ptr [ESP + 0x60],0x1      ; 0044516f
    MOV EAX,dword ptr [ESI + 0x8]       ; 00445177
        ;   Label: LAB_00445177
    FLD float ptr [EAX + 0x4]           ; 0044517a
    FCOMP float ptr [EBX + 0x28]        ; 0044517d
    FNSTSW AX                           ; 00445180
    SAHF                                ; 00445182
    JA 0x0044518a                       ; 00445183
        ;   XREF to: 0044518a (CONDITIONAL_JUMP)  ; LAB_0044518a
    OR byte ptr [ESP + 0x60],0x2        ; 00445185
    MOV EAX,dword ptr [ESP + 0x58]      ; 0044518a
        ;   Label: LAB_0044518a
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0044518e
    MOV ECX,dword ptr [ESP + 0x60]      ; 00445192
    AND EAX,EDX                         ; 00445196
    TEST EAX,ECX                        ; 00445198
    JNZ 0x00445413                      ; 0044519a
        ;   XREF to: 00445413 (CONDITIONAL_JUMP)  ; LAB_00445413
    FLDZ                                ; 004451a0
    FCOMP float ptr [ESI + 0x10]        ; 004451a2
    FNSTSW AX                           ; 004451a5
    SAHF                                ; 004451a7
    JA 0x004452d6                       ; 004451a8
        ;   XREF to: 004452d6 (CONDITIONAL_JUMP)  ; LAB_004452d6
    MOV EDX,dword ptr [ESP + 0x58]      ; 004451ae
    XOR EDX,dword ptr [ESP + 0x5c]      ; 004451b2
    XOR EAX,EAX                         ; 004451b6
    TEST DL,0x1                         ; 004451b8
    JZ 0x004451f9                       ; 004451bb
        ;   XREF to: 004451f9 (CONDITIONAL_JUMP)  ; LAB_004451f9
    MOV EDX,dword ptr [ESI + 0x4]       ; 004451bd
    MOV EAX,dword ptr [ESI]             ; 004451c0
    FLD float ptr [EDX + 0x4]           ; 004451c2
    FSUB float ptr [EAX + 0x4]          ; 004451c5
    FLD float ptr [EDX]                 ; 004451c8
    FLD float ptr [EBX + 0x24]          ; 004451ca
    FSUB float ptr [EAX + 0x4]          ; 004451cd
    FXCH                                ; 004451d0
    FSUB float ptr [EAX]                ; 004451d2
    FXCH                                ; 004451d4
    FDIVRP ST2,ST0                      ; 004451d6
    FMUL ST1                            ; 004451d8
    FADD float ptr [EAX]                ; 004451da
    FSTP float ptr [ESP + 0x18]         ; 004451dc
    MOV EDX,dword ptr [ESI + 0x4]       ; 004451e0
    MOV EAX,dword ptr [ESI]             ; 004451e3
    FLD float ptr [EDX + 0x8]           ; 004451e5
    FSUB float ptr [EAX + 0x8]          ; 004451e8
    FMULP                               ; 004451eb
    FADD float ptr [EAX + 0x8]          ; 004451ed
    FSTP float ptr [ESP + 0xc]          ; 004451f0
    MOV EAX,0x1                         ; 004451f4
    MOV EDX,dword ptr [ESP + 0x5c]      ; 004451f9
        ;   Label: LAB_004451f9
    XOR EDX,dword ptr [ESP + 0x60]      ; 004451fd
    TEST DL,0x1                         ; 00445201
    JZ 0x00445250                       ; 00445204
        ;   XREF to: 00445250 (CONDITIONAL_JUMP)  ; LAB_00445250
    MOV ECX,dword ptr [ESI + 0x8]       ; 00445206
    MOV EDX,dword ptr [ESI + 0x4]       ; 00445209
    FLD float ptr [ECX + 0x4]           ; 0044520c
    FSUB float ptr [EDX + 0x4]          ; 0044520f
    FLD float ptr [ECX]                 ; 00445212
    FLD float ptr [EBX + 0x24]          ; 00445214
    FSUB float ptr [EDX + 0x4]          ; 00445217
    FXCH                                ; 0044521a
    FSUB float ptr [EDX]                ; 0044521c
    FXCH                                ; 0044521e
    FDIVRP ST2,ST0                      ; 00445220
    FMUL ST1                            ; 00445222
    FADD float ptr [EDX]                ; 00445224
    FSTP float ptr [ESP + EAX*0x4 + 0x18] ; 00445226
    MOV ECX,dword ptr [ESI + 0x8]       ; 0044522a
    MOV dword ptr [ESP + 0x68],ECX      ; 0044522d
    MOV ECX,dword ptr [ESI + 0x4]       ; 00445231
    MOV dword ptr [ESP + 0x30],ECX      ; 00445234
    MOV ECX,dword ptr [ESP + 0x68]      ; 00445238
    FLD float ptr [ECX + 0x8]           ; 0044523c
    MOV ECX,dword ptr [ESP + 0x30]      ; 0044523f
    FSUB float ptr [ECX + 0x8]          ; 00445243
    FMULP                               ; 00445246
    FADD float ptr [ECX + 0x8]          ; 00445248
    INC EAX                             ; 0044524b
    FSTP float ptr [ESP + EAX*0x4 + 0x8] ; 0044524c
    MOV EDX,dword ptr [ESP + 0x60]      ; 00445250
        ;   Label: LAB_00445250
    XOR EDX,dword ptr [ESP + 0x58]      ; 00445254
    TEST DL,0x1                         ; 00445258
    JZ 0x004452a4                       ; 0044525b
        ;   XREF to: 004452a4 (CONDITIONAL_JUMP)  ; LAB_004452a4
    MOV ECX,dword ptr [ESI]             ; 0044525d
    MOV EDX,dword ptr [ESI + 0x8]       ; 0044525f
    FLD float ptr [ECX + 0x4]           ; 00445262
    FSUB float ptr [EDX + 0x4]          ; 00445265
    FLD float ptr [ECX]                 ; 00445268
    FLD float ptr [EBX + 0x24]          ; 0044526a
    FSUB float ptr [EDX + 0x4]          ; 0044526d
    FXCH                                ; 00445270
    FSUB float ptr [EDX]                ; 00445272
    FXCH                                ; 00445274
    FDIVRP ST2,ST0                      ; 00445276
    FMUL ST1                            ; 00445278
    FADD float ptr [EDX]                ; 0044527a
    LEA EDX,[EAX*0x4 + 0x0]             ; 0044527c
    FSTP float ptr [ESP + EDX*0x1 + 0x18] ; 00445283
    MOV ECX,dword ptr [ESI]             ; 00445287
    MOV dword ptr [ESP + 0x68],EDX      ; 00445289
    MOV EDX,dword ptr [ESI + 0x8]       ; 0044528d
    FLD float ptr [ECX + 0x8]           ; 00445290
    FSUB float ptr [EDX + 0x8]          ; 00445293
    FMULP                               ; 00445296
    FADD float ptr [EDX + 0x8]          ; 00445298
    MOV EDX,dword ptr [ESP + 0x68]      ; 0044529b
    INC EAX                             ; 0044529f
    FSTP float ptr [ESP + EDX*0x1 + 0xc] ; 004452a0
    CMP EAX,0x2                         ; 004452a4
        ;   Label: LAB_004452a4
    JL 0x004452d6                       ; 004452a7
        ;   XREF to: 004452d6 (CONDITIONAL_JUMP)  ; LAB_004452d6
    MOV EAX,dword ptr [ESP + 0x18]      ; 004452a9
    MOV dword ptr [EBX + 0x3c],EAX      ; 004452ad
    MOV EAX,dword ptr [ESP + 0xc]       ; 004452b0
    MOV dword ptr [EBX + 0x40],EAX      ; 004452b4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004452b7
    MOV dword ptr [EBX + 0x44],EAX      ; 004452bb
    MOV EAX,dword ptr [ESP + 0x10]      ; 004452be
    PUSH EBX                            ; 004452c2
    MOV dword ptr [EBX + 0x48],EAX      ; 004452c3
    CALL FUN_00444c90                   ; 004452c6
        ;   XREF to: 00444c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00444c90()
    ADD ESP,0x4                         ; 004452cb
    TEST EAX,EAX                        ; 004452ce
    JNZ 0x004453d4                      ; 004452d0
        ;   XREF to: 004453d4 (CONDITIONAL_JUMP)  ; LAB_004453d4
    FLDZ                                ; 004452d6
        ;   Label: LAB_004452d6
    FCOMP float ptr [ESI + 0x10]        ; 004452d8
    FNSTSW AX                           ; 004452db
    SAHF                                ; 004452dd
    JC 0x00445480                       ; 004452de
        ;   XREF to: 00445480 (CONDITIONAL_JUMP)  ; LAB_00445480
    MOV EDX,dword ptr [ESP + 0x58]      ; 004452e4
    XOR EDX,dword ptr [ESP + 0x5c]      ; 004452e8
    XOR EAX,EAX                         ; 004452ec
    TEST DL,0x2                         ; 004452ee
    JNZ 0x00445440                      ; 004452f1
        ;   XREF to: 00445440 (CONDITIONAL_JUMP)  ; LAB_00445440
    MOV EDX,dword ptr [ESP + 0x5c]      ; 004452f7
        ;   Label: LAB_004452f7
    XOR EDX,dword ptr [ESP + 0x60]      ; 004452fb
    TEST DL,0x2                         ; 004452ff
    JZ 0x0044534c                       ; 00445302
        ;   XREF to: 0044534c (CONDITIONAL_JUMP)  ; LAB_0044534c
    MOV ECX,dword ptr [ESI + 0x8]       ; 00445304
    MOV EDX,dword ptr [ESI + 0x4]       ; 00445307
    FLD float ptr [ECX + 0x4]           ; 0044530a
    FSUB float ptr [EDX + 0x4]          ; 0044530d
    FLD float ptr [ECX]                 ; 00445310
    FLD float ptr [EBX + 0x28]          ; 00445312
    FSUB float ptr [EDX + 0x4]          ; 00445315
    FXCH                                ; 00445318
    FSUB float ptr [EDX]                ; 0044531a
    FXCH                                ; 0044531c
    FDIVRP ST2,ST0                      ; 0044531e
    FMUL ST1                            ; 00445320
    FADD float ptr [EDX]                ; 00445322
    LEA EDX,[EAX*0x4 + 0x0]             ; 00445324
    FSTP float ptr [ESP + EDX*0x1 + 0x24] ; 0044532b
    MOV ECX,dword ptr [ESI + 0x8]       ; 0044532f
    MOV dword ptr [ESP + 0x68],EDX      ; 00445332
    MOV EDX,dword ptr [ESI + 0x4]       ; 00445336
    FLD float ptr [ECX + 0x8]           ; 00445339
    FSUB float ptr [EDX + 0x8]          ; 0044533c
    FMULP                               ; 0044533f
    FADD float ptr [EDX + 0x8]          ; 00445341
    MOV EDX,dword ptr [ESP + 0x68]      ; 00445344
    INC EAX                             ; 00445348
    FSTP float ptr [ESP + EDX*0x1]      ; 00445349
    MOV EDX,dword ptr [ESP + 0x60]      ; 0044534c
        ;   Label: LAB_0044534c
    XOR EDX,dword ptr [ESP + 0x58]      ; 00445350
    TEST DL,0x2                         ; 00445354
    JZ 0x0044539f                       ; 00445357
        ;   XREF to: 0044539f (CONDITIONAL_JUMP)  ; LAB_0044539f
    MOV ECX,dword ptr [ESI]             ; 00445359
    MOV EDX,dword ptr [ESI + 0x8]       ; 0044535b
    FLD float ptr [ECX + 0x4]           ; 0044535e
    FSUB float ptr [EDX + 0x4]          ; 00445361
    FLD float ptr [ECX]                 ; 00445364
    FLD float ptr [EBX + 0x28]          ; 00445366
    FSUB float ptr [EDX + 0x4]          ; 00445369
    FXCH                                ; 0044536c
    FSUB float ptr [EDX]                ; 0044536e
    FXCH                                ; 00445370
    FDIVRP ST2,ST0                      ; 00445372
    FMUL ST1                            ; 00445374
    FADD float ptr [EDX]                ; 00445376
    LEA EDX,[EAX*0x4 + 0x0]             ; 00445378
    FSTP float ptr [ESP + EDX*0x1 + 0x24] ; 0044537f
    MOV ECX,dword ptr [ESI]             ; 00445383
    MOV dword ptr [ESP + 0x68],EDX      ; 00445385
    MOV EDX,dword ptr [ESI + 0x8]       ; 00445389
    FLD float ptr [ECX + 0x8]           ; 0044538c
    FSUB float ptr [EDX + 0x8]          ; 0044538f
    FMULP                               ; 00445392
    FADD float ptr [EDX + 0x8]          ; 00445394
    MOV EDX,dword ptr [ESP + 0x68]      ; 00445397
    INC EAX                             ; 0044539b
    FSTP float ptr [ESP + EDX*0x1]      ; 0044539c
    CMP EAX,0x2                         ; 0044539f
        ;   Label: LAB_0044539f
    JL 0x00445480                       ; 004453a2
        ;   XREF to: 00445480 (CONDITIONAL_JUMP)  ; LAB_00445480
    MOV EAX,dword ptr [ESP + 0x24]      ; 004453a8
    MOV dword ptr [EBX + 0x3c],EAX      ; 004453ac
    MOV EAX,dword ptr [ESP]             ; 004453af
    MOV dword ptr [EBX + 0x40],EAX      ; 004453b2
    MOV EAX,dword ptr [ESP + 0x28]      ; 004453b5
    MOV dword ptr [EBX + 0x44],EAX      ; 004453b9
    MOV EAX,dword ptr [ESP + 0x4]       ; 004453bc
    PUSH EBX                            ; 004453c0
    MOV dword ptr [EBX + 0x48],EAX      ; 004453c1
    CALL FUN_00444c90                   ; 004453c4
        ;   XREF to: 00444c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00444c90()
    ADD ESP,0x4                         ; 004453c9
    TEST EAX,EAX                        ; 004453cc
    JZ 0x00445480                       ; 004453ce
        ;   XREF to: 00445480 (CONDITIONAL_JUMP)  ; LAB_00445480
    FLD float ptr [EBX + 0x18]          ; 004453d4
        ;   Label: LAB_004453d4
    FMUL float ptr [EBX + 0x4c]         ; 004453d7
    FLD float ptr [EBX + 0x1c]          ; 004453da
    FMUL float ptr [EBX + 0x4c]         ; 004453dd
    FLD float ptr [EBX + 0x4c]          ; 004453e0
    MOV dword ptr [EBX + 0x8],0x0       ; 004453e3
    MOV EAX,0x1                         ; 004453ea
    FSTP float ptr [EBX]                ; 004453ef
    FXCH                                ; 004453f1
    FADD float ptr [EBX + 0x10]         ; 004453f3
    FXCH                                ; 004453f6
    FADD float ptr [EBX + 0x14]         ; 004453f8
    FLD float ptr [EBX + 0x54]          ; 004453fb
    FLD float ptr [EBX + 0x58]          ; 004453fe
    FSUBP ST2,ST0                       ; 00445401
    FSUBP ST2,ST0                       ; 00445403
    FSTP float ptr [EBX + 0xc]          ; 00445405
    FSTP float ptr [EBX + 0x4]          ; 00445408
    ADD ESP,0x74                        ; 0044540b
    POP EBP                             ; 0044540e
    POP EDI                             ; 0044540f
    POP ESI                             ; 00445410
    POP EBX                             ; 00445411
    RET                                 ; 00445412
    XOR EAX,EAX                         ; 00445413
        ;   Label: LAB_00445413
    ADD ESP,0x74                        ; 00445415
    POP EBP                             ; 00445418
    POP EDI                             ; 00445419
    POP ESI                             ; 0044541a
    POP EBX                             ; 0044541b
    RET                                 ; 0044541c
    MOV EAX,dword ptr [ESP + 0x54]      ; 0044541d
        ;   Label: LAB_0044541d
    MOV dword ptr [ESP + 0x34],EAX      ; 00445421
    MOV EAX,dword ptr [ESP + 0x64]      ; 00445425
    MOV dword ptr [ESP + 0x54],EAX      ; 00445429
    MOV EAX,dword ptr [ESP + 0x34]      ; 0044542d
    MOV dword ptr [ESP + 0x64],EAX      ; 00445431
    MOV EAX,EBP                         ; 00445435
    MOV EBP,EDI                         ; 00445437
    MOV EDI,EAX                         ; 00445439
    JMP 0x00445095                      ; 0044543b
        ;   XREF to: 00445095 (UNCONDITIONAL_JUMP)  ; LAB_00445095
    MOV EDX,dword ptr [ESI + 0x4]       ; 00445440
        ;   Label: LAB_00445440
    MOV EAX,dword ptr [ESI]             ; 00445443
    FLD float ptr [EDX + 0x4]           ; 00445445
    FSUB float ptr [EAX + 0x4]          ; 00445448
    FLD float ptr [EDX]                 ; 0044544b
    FLD float ptr [EBX + 0x28]          ; 0044544d
    FSUB float ptr [EAX + 0x4]          ; 00445450
    FXCH                                ; 00445453
    FSUB float ptr [EAX]                ; 00445455
    FXCH                                ; 00445457
    FDIVRP ST2,ST0                      ; 00445459
    FMUL ST1                            ; 0044545b
    FADD float ptr [EAX]                ; 0044545d
    FSTP float ptr [ESP + 0x24]         ; 0044545f
    MOV EDX,dword ptr [ESI + 0x4]       ; 00445463
    MOV EAX,dword ptr [ESI]             ; 00445466
    FLD float ptr [EDX + 0x8]           ; 00445468
    FSUB float ptr [EAX + 0x8]          ; 0044546b
    FMULP                               ; 0044546e
    FADD float ptr [EAX + 0x8]          ; 00445470
    FSTP float ptr [ESP]                ; 00445473
    MOV EAX,0x1                         ; 00445476
    JMP 0x004452f7                      ; 0044547b
        ;   XREF to: 004452f7 (UNCONDITIONAL_JUMP)  ; LAB_004452f7
    PUSH EDI                            ; 00445480
        ;   Label: LAB_00445480
    PUSH EBP                            ; 00445481
    PUSH EBX                            ; 00445482
    CALL FUN_00444f70                   ; 00445483
        ;   XREF to: 00444f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00444f70()
    ADD ESP,0xc                         ; 00445488
    MOV EDI,dword ptr [ESP + 0x50]      ; 0044548b
    PUSH EDI                            ; 0044548f
    PUSH EBP                            ; 00445490
    PUSH EBX                            ; 00445491
    MOV ESI,EAX                         ; 00445492
    CALL FUN_00444f70                   ; 00445494
        ;   XREF to: 00444f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00444f70()
    ADD ESP,0xc                         ; 00445499
    OR EAX,ESI                          ; 0044549c
    ADD ESP,0x74                        ; 0044549e
    POP EBP                             ; 004454a1
    POP EDI                             ; 004454a2
    POP ESI                             ; 004454a3
    POP EBX                             ; 004454a4
    RET                                 ; 004454a5


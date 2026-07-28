; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_004e4070(CMP3Decoder *this_ptr,float *subband_samples,int channel_index,short *pcm_output)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; float *          Stack[0x8]:4   subband_samples
; int              Stack[0xc]:4   channel_index
; short *          Stack[0x10]:4   pcm_output
; Local Variables:
; undefined8       Stack[-0xf0]:8  local_f0
; undefined8       Stack[-0x64]:8  local_64
; undefined8       Stack[-0x5c]:8  local_5c
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
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
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0 at 004e8a20
;
; Referenced Globals:
;   double DOUBLE_0058b6b0 = 0.0490873852120000
;   double DOUBLE_0058b6b8 = 1000000000
;   double DOUBLE_0058b6c0 = 1.00000000000000E-9
;   double DOUBLE_0058b6c8 = 0.785398163397000
;   double DOUBLE_0058b6d0 = -0.5
;   double DOUBLE_0058b6d8 = 0.5
;   double DOUBLE_0058b6e0 = 0.0000100000000000000
;   undefined4 DAT_005bb3a0
;   undefined4 DAT_005bb420
;   undefined4 DAT_005bbba0
;   undefined4 DAT_01cd4320
;   undefined4 DAT_01cd4324
;   undefined4 DAT_01cd43a0
;
; Called Functions:
;   crt_math.c_modf_FUN_00566fb6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e4070
        ;   Label: sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_004e4070
    PUSH ESI                            ; 004e4071
    PUSH EDI                            ; 004e4072
    PUSH EBP                            ; 004e4073
    MOV EBP,ESP                         ; 004e4074
    SUB ESP,0xd4                        ; 004e4076
    CMP dword ptr [0x005bbba0],0x0      ; 004e407c | DAT_005bbba0
    JNZ 0x004e423e                      ; 004e4083
        ;   XREF to: 004e423e (CONDITIONAL_JUMP)  ; LAB_004e423e
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004e4089
        ;   Label: LAB_004e4089
    MOV ECX,dword ptr [EBP + 0x14]      ; 004e408c
    SHL EAX,0x2                         ; 004e408f
    ADD EAX,ECX                         ; 004e4092
    MOV EBX,dword ptr [EAX + 0x7350]    ; 004e4094
    SUB EBX,0x40                        ; 004e409a
    AND EBX,0x3ff                       ; 004e409d
    MOV dword ptr [EAX + 0x7350],EBX    ; 004e40a3
    LEA ESI,[EBX*0x4 + 0x0]             ; 004e40a9
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004e40b0
    LEA EAX,[ECX + 0x5350]              ; 004e40b3
    SHL EBX,0xc                         ; 004e40b9
    ADD EAX,EBX                         ; 004e40bc
    ADD EAX,ESI                         ; 004e40be
    MOV dword ptr [EBP + -0x34],EAX     ; 004e40c0
    XOR EBX,EBX                         ; 004e40c3
    MOV dword ptr [EBP + -0x3c],EBX     ; 004e40c5
    MOV ESI,dword ptr [EBP + 0x18]      ; 004e40c8
    LEA EAX,[EBX*0x4 + 0x0]             ; 004e40cb
        ;   Label: LAB_004e40cb
    ADD EAX,ESI                         ; 004e40d2
    FLD float ptr [EAX]                 ; 004e40d4
    FABS                                ; 004e40d6
    FCOMP double ptr [0x0058b6e0]       ; 004e40d8 | DOUBLE_0058b6e0
    FNSTSW AX                           ; 004e40de
    SAHF                                ; 004e40e0
    JBE 0x004e40f0                      ; 004e40e1
        ;   XREF to: 004e40f0 (CONDITIONAL_JUMP)  ; LAB_004e40f0
    MOV EAX,dword ptr [EBP + -0x3c]     ; 004e40e3
    MOV dword ptr [EBP + EAX*0x4 + 0xffffff2c],EBX ; 004e40e6
    INC dword ptr [EBP + -0x3c]         ; 004e40ed
    INC EBX                             ; 004e40f0
        ;   Label: LAB_004e40f0
    CMP EBX,0x20                        ; 004e40f1
    JL 0x004e40cb                       ; 004e40f4
        ;   XREF to: 004e40cb (CONDITIONAL_JUMP)  ; LAB_004e40cb
    XOR EAX,EAX                         ; 004e40f6
    MOV dword ptr [EBP + -0x10],EAX     ; 004e40f8
    MOV EAX,dword ptr [EBP + -0x10]     ; 004e40fb
        ;   Label: LAB_004e40fb
    MOV EBX,0x1cd4320                   ; 004e40fe
    SHL EAX,0x7                         ; 004e4103
    ADD EBX,EAX                         ; 004e4106
    MOV dword ptr [EBP + -0x30],EBX     ; 004e4108
    MOV EAX,dword ptr [EBP + 0x18]      ; 004e410b
    MOV dword ptr [EBP + -0x2c],EAX     ; 004e410e
    FLDZ                                ; 004e4111
    MOV ECX,dword ptr [EBP + 0xffffffc4] ; 004e4113
    SUB ECX,0x1                         ; 004e4119
    JL 0x004e413e                       ; 004e411c
        ;   XREF to: 004e413e (CONDITIONAL_JUMP)  ; LAB_004e413e
    MOV EBX,dword ptr [EBP + 0xffffffd0] ; 004e411e
    MOV EDX,dword ptr [EBP + 0xffffffd4] ; 004e4124
    MOV EAX,dword ptr [EBP + ECX*0x4 + 0xffffff2c] ; 004e412a
        ;   Label: LAB_004e412a
    FLD float ptr [EBX + EAX*0x4]       ; 004e4131
    FMUL float ptr [EDX + EAX*0x4]      ; 004e4134
    FADDP                               ; 004e4137
    SUB ECX,0x1                         ; 004e4139
    JGE 0x004e412a                      ; 004e413c
        ;   XREF to: 004e412a (CONDITIONAL_JUMP)  ; LAB_004e412a
    MOV EBX,dword ptr [EBP + 0xffffffcc] ; 004e413e
        ;   Label: LAB_004e413e
    FSTP float ptr [EBX]                ; 004e4144
    ADD dword ptr [EBP + -0x34],0x4     ; 004e4146
    MOV ECX,dword ptr [EBP + -0x10]     ; 004e414a
    INC ECX                             ; 004e414d
    MOV dword ptr [EBP + -0x10],ECX     ; 004e414e
    CMP ECX,0x40                        ; 004e4151
    JL 0x004e40fb                       ; 004e4154
        ;   XREF to: 004e40fb (CONDITIONAL_JUMP)  ; LAB_004e40fb
    XOR ESI,ESI                         ; 004e4156
    MOV dword ptr [EBP + -0x38],ESI     ; 004e4158
    CMP dword ptr [EBP + -0x38],0x20    ; 004e415b
    JGE 0x004e4237                      ; 004e415f
        ;   XREF to: 004e4237 (CONDITIONAL_JUMP)  ; LAB_004e4237
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004e4165
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e4168
    SHL EAX,0x2                         ; 004e416b
    ADD EBX,EAX                         ; 004e416e
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004e4170
    MOV dword ptr [EBP + -0x1c],EBX     ; 004e4173
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e4176
    SHL EAX,0xc                         ; 004e4179
    ADD EBX,0x5350                      ; 004e417c
    ADD EBX,EAX                         ; 004e4182
    MOV dword ptr [EBP + -0x18],EBX     ; 004e4184
    MOV EAX,dword ptr [EBP + -0x38]     ; 004e4187
        ;   Label: LAB_004e4187
    MOV EBX,dword ptr [EBP + -0x1c]     ; 004e418a
    MOV ESI,dword ptr [EBX + 0x7350]    ; 004e418d
    ADD EAX,ESI                         ; 004e4193
    MOV dword ptr [EBP + -0x8],EAX      ; 004e4195
    MOV EAX,dword ptr [EBP + -0x18]     ; 004e4198
    MOV dword ptr [EBP + -0x28],EAX     ; 004e419b
    MOV dword ptr [EBP + -0x24],0x47000000 ; 004e419e
    FLDZ                                ; 004e41a5
    MOV EBX,dword ptr [EBP + 0xffffffc8] ; 004e41a7
    MOV EDX,dword ptr [EBP + 0xfffffff8] ; 004e41ad
    MOV ECX,0x8                         ; 004e41b3
    MOV ESI,dword ptr [EBP + 0xffffffd8] ; 004e41b8
    FLD float ptr [EBX*0x4 + 0x5bb3a0]  ; 004e41be | DAT_005bb3a0
        ;   Label: LAB_004e41be
    AND EDX,0x3ff                       ; 004e41c5
    FMUL float ptr [ESI + EDX*0x4]      ; 004e41cb
    ADD EDX,0x60                        ; 004e41ce
    FLD float ptr [EBX*0x4 + 0x5bb420]  ; 004e41d1 | DAT_005bb420
    AND EDX,0x3ff                       ; 004e41d8
    FMUL float ptr [ESI + EDX*0x4]      ; 004e41de
    ADD EBX,0x40                        ; 004e41e1
    ADD EDX,0x20                        ; 004e41e4
    FADDP                               ; 004e41e7
    FADDP                               ; 004e41e9
    DEC ECX                             ; 004e41eb
    JNZ 0x004e41be                      ; 004e41ec
        ;   XREF to: 004e41be (CONDITIONAL_JUMP)  ; LAB_004e41be
    FMUL float ptr [EBP + 0xffffffdc]   ; 004e41ee
    FISTP dword ptr [EBP + 0xffffffe0]  ; 004e41f4
    CMP dword ptr [EBP + -0x20],0x8000  ; 004e41fa
    JGE 0x004e4312                      ; 004e4201
        ;   XREF to: 004e4312 (CONDITIONAL_JUMP)  ; LAB_004e4312
    CMP dword ptr [EBP + -0x20],0xffff8000 ; 004e4207
    JGE 0x004e4217                      ; 004e420e
        ;   XREF to: 004e4217 (CONDITIONAL_JUMP)  ; LAB_004e4217
    MOV dword ptr [EBP + -0x20],0xffff8000 ; 004e4210
    MOV EBX,dword ptr [EBP + -0x38]     ; 004e4217
        ;   Label: LAB_004e4217
    MOV EAX,dword ptr [EBP + 0x20]      ; 004e421a
    ADD EBX,EBX                         ; 004e421d
    ADD EBX,EAX                         ; 004e421f
    MOV EAX,dword ptr [EBP + -0x20]     ; 004e4221
    MOV word ptr [EBX],AX               ; 004e4224
    MOV EAX,dword ptr [EBP + -0x38]     ; 004e4227
    INC dword ptr [EBP + -0x38]         ; 004e422a
    CMP dword ptr [EBP + -0x38],0x20    ; 004e422d
    JL 0x004e4187                       ; 004e4231
        ;   XREF to: 004e4187 (CONDITIONAL_JUMP)  ; LAB_004e4187
    MOV ESP,EBP                         ; 004e4237
        ;   Label: LAB_004e4237
    POP EBP                             ; 004e4239
    POP EDI                             ; 004e423a
    POP ESI                             ; 004e423b
    POP EBX                             ; 004e423c
    RET                                 ; 004e423d
    XOR ECX,ECX                         ; 004e423e
        ;   Label: LAB_004e423e
    MOV EBX,0x1cd4320                   ; 004e4240
    MOV dword ptr [EBP + -0xc],ECX      ; 004e4245
    MOV dword ptr [EBP + -0x14],EBX     ; 004e4248
    MOV EBX,dword ptr [EBP + -0x14]     ; 004e424b
        ;   Label: LAB_004e424b
    MOV EDI,0x1                         ; 004e424e
    MOV ESI,EBX                         ; 004e4253
    MOV EAX,dword ptr [EBP + -0xc]      ; 004e4255
        ;   Label: LAB_004e4255
    MOV dword ptr [EBP + -0x4],EAX      ; 004e4258
    FILD dword ptr [EBP + -0x4]         ; 004e425b
    FMUL double ptr [0x0058b6b0]        ; 004e425e | DOUBLE_0058b6b0
    FADD double ptr [0x0058b6c8]        ; 004e4264 | DOUBLE_0058b6c8
    MOV dword ptr [EBP + -0x4],EDI      ; 004e426a
    FILD dword ptr [EBP + -0x4]         ; 004e426d
    FMULP                               ; 004e4270
    FCOS                                ; 004e4272
    FMUL double ptr [0x0058b6b8]        ; 004e4274 | DOUBLE_0058b6b8
    FLDZ                                ; 004e427a
    FXCH                                ; 004e427c
    FSTP float ptr [EBX]                ; 004e427e | DAT_01cd4320 | DAT_01cd4324 | DAT_01cd43a0
    FCOMP float ptr [EBX]               ; 004e4280 | DAT_01cd4320 | DAT_01cd4324 | DAT_01cd43a0
    FNSTSW AX                           ; 004e4282
    SAHF                                ; 004e4284
    JA 0x004e42f1                       ; 004e4285
        ;   XREF to: 004e42f1 (CONDITIONAL_JUMP)  ; LAB_004e42f1
    FLD float ptr [EBX]                 ; 004e4287 | DAT_01cd4320
    LEA EAX,[EBP + -0x54]               ; 004e4289
    FSTP double ptr [EBP + -0x54]       ; 004e428c
    FLD float ptr [EBX]                 ; 004e428f | DAT_01cd4320
    PUSH EAX                            ; 004e4291
    FADD double ptr [0x0058b6d8]        ; 004e4292 | DOUBLE_0058b6d8
    SUB ESP,0x8                         ; 004e4298
    FSTP double ptr [ESP]               ; 004e429b
    CALL crt_math.c_modf_FUN_00566fb6   ; 004e429e
        ;   XREF to: 00566fb6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_modf_FUN_00566fb6()
    FLD double ptr [EBP + -0x54]        ; 004e42a3
    ADD ESP,0xc                         ; 004e42a6
        ;   Label: LAB_004e42a6
    FSTP float ptr [EBX]                ; 004e42a9 | DAT_01cd4320 | DAT_01cd4324
    FLD float ptr [ESI]                 ; 004e42ab | DAT_01cd4320 | DAT_01cd4324
    FLD ST0                             ; 004e42ad
    FMUL double ptr [0x0058b6c0]        ; 004e42af | DOUBLE_0058b6c0
    ADD EBX,0x4                         ; 004e42b5
    ADD EDI,0x2                         ; 004e42b8
    ADD ESI,0x4                         ; 004e42bb
    FSTP ST1                            ; 004e42be
    FSTP float ptr [ESI + -0x4]         ; 004e42c0 | DAT_01cd4320 | DAT_01cd4324
    CMP EDI,0x41                        ; 004e42c3
    JNZ 0x004e4255                      ; 004e42c6
        ;   XREF to: 004e4255 (CONDITIONAL_JUMP)  ; LAB_004e4255
    MOV EDI,dword ptr [EBP + -0xc]      ; 004e42c8
    MOV ESI,dword ptr [EBP + -0x14]     ; 004e42cb
    INC EDI                             ; 004e42ce
    ADD ESI,0x80                        ; 004e42cf
    MOV dword ptr [EBP + -0xc],EDI      ; 004e42d5
    MOV dword ptr [EBP + -0x14],ESI     ; 004e42d8
    CMP EDI,0x40                        ; 004e42db
    JL 0x004e424b                       ; 004e42de
        ;   XREF to: 004e424b (CONDITIONAL_JUMP)  ; LAB_004e424b
    XOR EDX,EDX                         ; 004e42e4
    MOV dword ptr [0x005bbba0],EDX      ; 004e42e6 | DAT_005bbba0
    JMP 0x004e4089                      ; 004e42ec
        ;   XREF to: 004e4089 (UNCONDITIONAL_JUMP)  ; LAB_004e4089
    FLD float ptr [EBX]                 ; 004e42f1 | DAT_01cd4324
        ;   Label: LAB_004e42f1
    LEA EAX,[EBP + -0x4c]               ; 004e42f3
    FSTP double ptr [EBP + -0x4c]       ; 004e42f6
    FLD float ptr [EBX]                 ; 004e42f9 | DAT_01cd4324
    PUSH EAX                            ; 004e42fb
    FADD double ptr [0x0058b6d0]        ; 004e42fc | DOUBLE_0058b6d0
    SUB ESP,0x8                         ; 004e4302
    FSTP double ptr [ESP]               ; 004e4305
    CALL crt_math.c_modf_FUN_00566fb6   ; 004e4308
        ;   XREF to: 00566fb6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_modf_FUN_00566fb6()
    FLD double ptr [EBP + -0x4c]        ; 004e430d
    JMP 0x004e42a6                      ; 004e4310
        ;   XREF to: 004e42a6 (UNCONDITIONAL_JUMP)  ; LAB_004e42a6
    MOV dword ptr [EBP + -0x20],0x7fff  ; 004e4312
        ;   Label: LAB_004e4312
    JMP 0x004e4217                      ; 004e4319
        ;   XREF to: 004e4217 (UNCONDITIONAL_JUMP)  ; LAB_004e4217


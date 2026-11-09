; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005060b0(CMP3Decoder *this_ptr,float *subband_samples,int channel_index,short *pcm_output)
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
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280 at 0050a461
;
; Referenced Globals:
;   undefined4 DAT_005e002b
;   undefined4 DAT_005e0033
;   undefined4 DAT_005e003b
;   undefined4 DAT_005e0043
;   undefined4 DAT_005e004b
;   undefined4 DAT_005e0053
;   undefined4 DAT_005e005b
;   undefined4 DAT_006185e0
;   undefined4 DAT_00618660
;   undefined4 DAT_00618de0
;   undefined4 DAT_01d1cdd0
;   undefined4 DAT_01d1cdd4
;   undefined4 DAT_01d1ce50
;
; Called Functions:
;   crt_math.c_modf_FUN_005bada6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005060b0
        ;   Label: sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_005060b0
    PUSH ESI                            ; 005060b1
    PUSH EDI                            ; 005060b2
    PUSH EBP                            ; 005060b3
    MOV EBP,ESP                         ; 005060b4
    SUB ESP,0xd4                        ; 005060b6
    CMP dword ptr [0x00618de0],0x0      ; 005060bc | DAT_00618de0
    JNZ 0x0050627e                      ; 005060c3
        ;   XREF to: 0050627e (CONDITIONAL_JUMP)  ; LAB_0050627e
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005060c9
        ;   Label: LAB_005060c9
    MOV ECX,dword ptr [EBP + 0x14]      ; 005060cc
    SHL EAX,0x2                         ; 005060cf
    ADD EAX,ECX                         ; 005060d2
    MOV EBX,dword ptr [EAX + 0x7350]    ; 005060d4
    SUB EBX,0x40                        ; 005060da
    AND EBX,0x3ff                       ; 005060dd
    MOV dword ptr [EAX + 0x7350],EBX    ; 005060e3
    LEA ESI,[EBX*0x4 + 0x0]             ; 005060e9
    MOV EBX,dword ptr [EBP + 0x1c]      ; 005060f0
    LEA EAX,[ECX + 0x5350]              ; 005060f3
    SHL EBX,0xc                         ; 005060f9
    ADD EAX,EBX                         ; 005060fc
    ADD EAX,ESI                         ; 005060fe
    MOV dword ptr [EBP + -0x34],EAX     ; 00506100
    XOR EBX,EBX                         ; 00506103
    MOV dword ptr [EBP + -0x3c],EBX     ; 00506105
    MOV ESI,dword ptr [EBP + 0x18]      ; 00506108
    LEA EAX,[EBX*0x4 + 0x0]             ; 0050610b
        ;   Label: LAB_0050610b
    ADD EAX,ESI                         ; 00506112
    FLD float ptr [EAX]                 ; 00506114
    FABS                                ; 00506116
    FCOMP double ptr [0x005e005b]       ; 00506118 | DAT_005e005b
    FNSTSW AX                           ; 0050611e
    SAHF                                ; 00506120
    JBE 0x00506130                      ; 00506121
        ;   XREF to: 00506130 (CONDITIONAL_JUMP)  ; LAB_00506130
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00506123
    MOV dword ptr [EBP + EAX*0x4 + 0xffffff2c],EBX ; 00506126
    INC dword ptr [EBP + -0x3c]         ; 0050612d
    INC EBX                             ; 00506130
        ;   Label: LAB_00506130
    CMP EBX,0x20                        ; 00506131
    JL 0x0050610b                       ; 00506134
        ;   XREF to: 0050610b (CONDITIONAL_JUMP)  ; LAB_0050610b
    XOR EAX,EAX                         ; 00506136
    MOV dword ptr [EBP + -0x10],EAX     ; 00506138
    MOV EAX,dword ptr [EBP + -0x10]     ; 0050613b
        ;   Label: LAB_0050613b
    MOV EBX,0x1d1cdd0                   ; 0050613e
    SHL EAX,0x7                         ; 00506143
    ADD EBX,EAX                         ; 00506146
    MOV dword ptr [EBP + -0x30],EBX     ; 00506148
    MOV EAX,dword ptr [EBP + 0x18]      ; 0050614b
    MOV dword ptr [EBP + -0x2c],EAX     ; 0050614e
    FLDZ                                ; 00506151
    MOV ECX,dword ptr [EBP + 0xffffffc4] ; 00506153
    SUB ECX,0x1                         ; 00506159
    JL 0x0050617e                       ; 0050615c
        ;   XREF to: 0050617e (CONDITIONAL_JUMP)  ; LAB_0050617e
    MOV EBX,dword ptr [EBP + 0xffffffd0] ; 0050615e
    MOV EDX,dword ptr [EBP + 0xffffffd4] ; 00506164
    MOV EAX,dword ptr [EBP + ECX*0x4 + 0xffffff2c] ; 0050616a
        ;   Label: LAB_0050616a
    FLD float ptr [EBX + EAX*0x4]       ; 00506171
    FMUL float ptr [EDX + EAX*0x4]      ; 00506174
    FADDP                               ; 00506177
    SUB ECX,0x1                         ; 00506179
    JGE 0x0050616a                      ; 0050617c
        ;   XREF to: 0050616a (CONDITIONAL_JUMP)  ; LAB_0050616a
    MOV EBX,dword ptr [EBP + 0xffffffcc] ; 0050617e
        ;   Label: LAB_0050617e
    FSTP float ptr [EBX]                ; 00506184
    ADD dword ptr [EBP + -0x34],0x4     ; 00506186
    MOV ECX,dword ptr [EBP + -0x10]     ; 0050618a
    INC ECX                             ; 0050618d
    MOV dword ptr [EBP + -0x10],ECX     ; 0050618e
    CMP ECX,0x40                        ; 00506191
    JL 0x0050613b                       ; 00506194
        ;   XREF to: 0050613b (CONDITIONAL_JUMP)  ; LAB_0050613b
    XOR ESI,ESI                         ; 00506196
    MOV dword ptr [EBP + -0x38],ESI     ; 00506198
    CMP dword ptr [EBP + -0x38],0x20    ; 0050619b
    JGE 0x00506277                      ; 0050619f
        ;   XREF to: 00506277 (CONDITIONAL_JUMP)  ; LAB_00506277
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005061a5
    MOV EBX,dword ptr [EBP + 0x14]      ; 005061a8
    SHL EAX,0x2                         ; 005061ab
    ADD EBX,EAX                         ; 005061ae
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005061b0
    MOV dword ptr [EBP + -0x1c],EBX     ; 005061b3
    MOV EBX,dword ptr [EBP + 0x14]      ; 005061b6
    SHL EAX,0xc                         ; 005061b9
    ADD EBX,0x5350                      ; 005061bc
    ADD EBX,EAX                         ; 005061c2
    MOV dword ptr [EBP + -0x18],EBX     ; 005061c4
    MOV EAX,dword ptr [EBP + -0x38]     ; 005061c7
        ;   Label: LAB_005061c7
    MOV EBX,dword ptr [EBP + -0x1c]     ; 005061ca
    MOV ESI,dword ptr [EBX + 0x7350]    ; 005061cd
    ADD EAX,ESI                         ; 005061d3
    MOV dword ptr [EBP + -0x8],EAX      ; 005061d5
    MOV EAX,dword ptr [EBP + -0x18]     ; 005061d8
    MOV dword ptr [EBP + -0x28],EAX     ; 005061db
    MOV dword ptr [EBP + -0x24],0x47000000 ; 005061de
    FLDZ                                ; 005061e5
    MOV EBX,dword ptr [EBP + 0xffffffc8] ; 005061e7
    MOV EDX,dword ptr [EBP + 0xfffffff8] ; 005061ed
    MOV ECX,0x8                         ; 005061f3
    MOV ESI,dword ptr [EBP + 0xffffffd8] ; 005061f8
    FLD float ptr [EBX*0x4 + 0x6185e0]  ; 005061fe | DAT_006185e0
        ;   Label: LAB_005061fe
    AND EDX,0x3ff                       ; 00506205
    FMUL float ptr [ESI + EDX*0x4]      ; 0050620b
    ADD EDX,0x60                        ; 0050620e
    FLD float ptr [EBX*0x4 + 0x618660]  ; 00506211 | DAT_00618660
    AND EDX,0x3ff                       ; 00506218
    FMUL float ptr [ESI + EDX*0x4]      ; 0050621e
    ADD EBX,0x40                        ; 00506221
    ADD EDX,0x20                        ; 00506224
    FADDP                               ; 00506227
    FADDP                               ; 00506229
    DEC ECX                             ; 0050622b
    JNZ 0x005061fe                      ; 0050622c
        ;   XREF to: 005061fe (CONDITIONAL_JUMP)  ; LAB_005061fe
    FMUL float ptr [EBP + 0xffffffdc]   ; 0050622e
    FISTP dword ptr [EBP + 0xffffffe0]  ; 00506234
    CMP dword ptr [EBP + -0x20],0x8000  ; 0050623a
    JGE 0x00506352                      ; 00506241
        ;   XREF to: 00506352 (CONDITIONAL_JUMP)  ; LAB_00506352
    CMP dword ptr [EBP + -0x20],0xffff8000 ; 00506247
    JGE 0x00506257                      ; 0050624e
        ;   XREF to: 00506257 (CONDITIONAL_JUMP)  ; LAB_00506257
    MOV dword ptr [EBP + -0x20],0xffff8000 ; 00506250
    MOV EBX,dword ptr [EBP + -0x38]     ; 00506257
        ;   Label: LAB_00506257
    MOV EAX,dword ptr [EBP + 0x20]      ; 0050625a
    ADD EBX,EBX                         ; 0050625d
    ADD EBX,EAX                         ; 0050625f
    MOV EAX,dword ptr [EBP + -0x20]     ; 00506261
    MOV word ptr [EBX],AX               ; 00506264
    MOV EAX,dword ptr [EBP + -0x38]     ; 00506267
    INC dword ptr [EBP + -0x38]         ; 0050626a
    CMP dword ptr [EBP + -0x38],0x20    ; 0050626d
    JL 0x005061c7                       ; 00506271
        ;   XREF to: 005061c7 (CONDITIONAL_JUMP)  ; LAB_005061c7
    MOV ESP,EBP                         ; 00506277
        ;   Label: LAB_00506277
    POP EBP                             ; 00506279
    POP EDI                             ; 0050627a
    POP ESI                             ; 0050627b
    POP EBX                             ; 0050627c
    RET                                 ; 0050627d
    XOR ECX,ECX                         ; 0050627e
        ;   Label: LAB_0050627e
    MOV EBX,0x1d1cdd0                   ; 00506280
    MOV dword ptr [EBP + -0xc],ECX      ; 00506285
    MOV dword ptr [EBP + -0x14],EBX     ; 00506288
    MOV EBX,dword ptr [EBP + -0x14]     ; 0050628b
        ;   Label: LAB_0050628b
    MOV EDI,0x1                         ; 0050628e
    MOV ESI,EBX                         ; 00506293
    MOV EAX,dword ptr [EBP + -0xc]      ; 00506295
        ;   Label: LAB_00506295
    MOV dword ptr [EBP + -0x4],EAX      ; 00506298
    FILD dword ptr [EBP + -0x4]         ; 0050629b
    FMUL double ptr [0x005e002b]        ; 0050629e | DAT_005e002b
    FADD double ptr [0x005e0043]        ; 005062a4 | DAT_005e0043
    MOV dword ptr [EBP + -0x4],EDI      ; 005062aa
    FILD dword ptr [EBP + -0x4]         ; 005062ad
    FMULP                               ; 005062b0
    FCOS                                ; 005062b2
    FMUL double ptr [0x005e0033]        ; 005062b4 | DAT_005e0033
    FLDZ                                ; 005062ba
    FXCH                                ; 005062bc
    FSTP float ptr [EBX]                ; 005062be | DAT_01d1cdd0 | DAT_01d1cdd4 | DAT_01d1ce50
    FCOMP float ptr [EBX]               ; 005062c0 | DAT_01d1cdd0 | DAT_01d1cdd4 | DAT_01d1ce50
    FNSTSW AX                           ; 005062c2
    SAHF                                ; 005062c4
    JA 0x00506331                       ; 005062c5
        ;   XREF to: 00506331 (CONDITIONAL_JUMP)  ; LAB_00506331
    FLD float ptr [EBX]                 ; 005062c7 | DAT_01d1cdd0
    LEA EAX,[EBP + -0x54]               ; 005062c9
    FSTP double ptr [EBP + -0x54]       ; 005062cc
    FLD float ptr [EBX]                 ; 005062cf | DAT_01d1cdd0
    PUSH EAX                            ; 005062d1
    FADD double ptr [0x005e0053]        ; 005062d2 | DAT_005e0053
    SUB ESP,0x8                         ; 005062d8
    FSTP double ptr [ESP]               ; 005062db
    CALL crt_math.c_modf_FUN_005bada6   ; 005062de
        ;   XREF to: 005bada6 (UNCONDITIONAL_CALL)  ; double crt_math.c_modf_FUN_005bada6(double value, double * integer_part)
    FLD double ptr [EBP + -0x54]        ; 005062e3
    ADD ESP,0xc                         ; 005062e6
        ;   Label: LAB_005062e6
    FSTP float ptr [EBX]                ; 005062e9 | DAT_01d1cdd0 | DAT_01d1cdd4
    FLD float ptr [ESI]                 ; 005062eb | DAT_01d1cdd0 | DAT_01d1cdd4
    FLD ST0                             ; 005062ed
    FMUL double ptr [0x005e003b]        ; 005062ef | DAT_005e003b
    ADD EBX,0x4                         ; 005062f5
    ADD EDI,0x2                         ; 005062f8
    ADD ESI,0x4                         ; 005062fb
    FSTP ST1                            ; 005062fe
    FSTP float ptr [ESI + -0x4]         ; 00506300 | DAT_01d1cdd0 | DAT_01d1cdd4
    CMP EDI,0x41                        ; 00506303
    JNZ 0x00506295                      ; 00506306
        ;   XREF to: 00506295 (CONDITIONAL_JUMP)  ; LAB_00506295
    MOV EDI,dword ptr [EBP + -0xc]      ; 00506308
    MOV ESI,dword ptr [EBP + -0x14]     ; 0050630b
    INC EDI                             ; 0050630e
    ADD ESI,0x80                        ; 0050630f
    MOV dword ptr [EBP + -0xc],EDI      ; 00506315
    MOV dword ptr [EBP + -0x14],ESI     ; 00506318
    CMP EDI,0x40                        ; 0050631b
    JL 0x0050628b                       ; 0050631e
        ;   XREF to: 0050628b (CONDITIONAL_JUMP)  ; LAB_0050628b
    XOR EDX,EDX                         ; 00506324
    MOV dword ptr [0x00618de0],EDX      ; 00506326 | DAT_00618de0
    JMP 0x005060c9                      ; 0050632c
        ;   XREF to: 005060c9 (UNCONDITIONAL_JUMP)  ; LAB_005060c9
    FLD float ptr [EBX]                 ; 00506331 | DAT_01d1cdd4
        ;   Label: LAB_00506331
    LEA EAX,[EBP + -0x4c]               ; 00506333
    FSTP double ptr [EBP + -0x4c]       ; 00506336
    FLD float ptr [EBX]                 ; 00506339 | DAT_01d1cdd4
    PUSH EAX                            ; 0050633b
    FADD double ptr [0x005e004b]        ; 0050633c | DAT_005e004b
    SUB ESP,0x8                         ; 00506342
    FSTP double ptr [ESP]               ; 00506345
    CALL crt_math.c_modf_FUN_005bada6   ; 00506348
        ;   XREF to: 005bada6 (UNCONDITIONAL_CALL)  ; double crt_math.c_modf_FUN_005bada6(double value, double * integer_part)
    FLD double ptr [EBP + -0x4c]        ; 0050634d
    JMP 0x005062e6                      ; 00506350
        ;   XREF to: 005062e6 (UNCONDITIONAL_JUMP)  ; LAB_005062e6
    MOV dword ptr [EBP + -0x20],0x7fff  ; 00506352
        ;   Label: LAB_00506352
    JMP 0x00506257                      ; 00506359
        ;   XREF to: 00506257 (UNCONDITIONAL_JUMP)  ; LAB_00506257


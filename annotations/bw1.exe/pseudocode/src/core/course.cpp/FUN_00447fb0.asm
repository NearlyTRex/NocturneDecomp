; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_course_cpp_FUN_00447fb0(CCourse *this_ptr,float time,CVector3f *out_pos,CQuaternion4f *out_orient)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   time
; CVector3f *      Stack[0xc]:4   out_pos
; CQuaternion4f *  Stack[0x10]:4   out_orient
; Local Variables:
; undefined8       Stack[-0xc0]:8  local_c0
; undefined8       Stack[-0xb8]:8  local_b8
; undefined8       Stack[-0xb0]:8  local_b0
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined        Stack[-0x9c]:1  local_9c
; undefined        Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_course.cpp_CCourse_evaluate_FUN_00447f00 at 00447f2c
;
; Referenced Globals:
;   undefined4 DAT_005d71e6
;
; Called Functions:
;   core_xform.cpp_slerpQuaternion_FUN_005b7940
;   crt_math.c_floor_FUN_005c0880
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447fb0
        ;   Label: core_course.cpp_FUN_00447fb0
    PUSH ESI                            ; 00447fb1
    PUSH EDI                            ; 00447fb2
    PUSH EBP                            ; 00447fb3
    MOV EBP,ESP                         ; 00447fb4
    SUB ESP,0xa8                        ; 00447fb6
    AND ESP,0xfffffff8                  ; 00447fbc
    MOV EBX,dword ptr [EBP + 0x14]      ; 00447fbf
    MOV EDX,dword ptr [EBX + 0x8]       ; 00447fc2
    TEST EDX,EDX                        ; 00447fc5
    JNZ 0x0044817b                      ; 00447fc7
        ;   XREF to: 0044817b (CONDITIONAL_JUMP)  ; LAB_0044817b
    FLD float ptr [EBP + 0x18]          ; 00447fcd
    FLDZ                                ; 00447fd0
    FCOMPP                              ; 00447fd2
    FNSTSW AX                           ; 00447fd4
    SAHF                                ; 00447fd6
    JC 0x00448260                       ; 00447fd7
        ;   XREF to: 00448260 (CONDITIONAL_JUMP)  ; LAB_00448260
    MOV dword ptr [ESP + 0xa0],EDX      ; 00447fdd
    MOV dword ptr [ESP + 0x14],EDX      ; 00447fe4
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00447fe8
        ;   Label: LAB_00447fe8
    SHL EAX,0x2                         ; 00447fef
    FLD float ptr [ESP + 0x14]          ; 00447ff2
    MOV ECX,EAX                         ; 00447ff6
    SHL EAX,0x3                         ; 00447ff8
    FSTP double ptr [ESP]               ; 00447ffb
    SUB EAX,ECX                         ; 00447ffe
    FLD double ptr [ESP]                ; 00448000
    MOV dword ptr [ESP + 0x98],EAX      ; 00448003
    FCOMP double ptr [0x005d71e6]       ; 0044800a | DAT_005d71e6
    FNSTSW AX                           ; 00448010
    SAHF                                ; 00448012
    JBE 0x004482c6                      ; 00448013
        ;   XREF to: 004482c6 (CONDITIONAL_JUMP)  ; LAB_004482c6
    LEA EAX,[EDX*0x4 + 0x0]             ; 00448019
    MOV ECX,EAX                         ; 00448020
    SHL EAX,0x3                         ; 00448022
    SUB EAX,ECX                         ; 00448025
    MOV ECX,dword ptr [EBX + 0x4]       ; 00448027
    FLD float ptr [ESP + 0x14]          ; 0044802a
    FLD float ptr [ECX + EAX*0x1]       ; 0044802e
    FMUL ST1                            ; 00448031
    FLD float ptr [ECX + EAX*0x1 + 0x4] ; 00448033
    FMUL ST2                            ; 00448037
    FLD float ptr [ECX + EAX*0x1 + 0x8] ; 00448039
    FMULP ST3                           ; 0044803d
    FLD1                                ; 0044803f
    LEA EDI,[ESP + 0x48]                ; 00448041
    LEA ESI,[ESP + 0x6c]                ; 00448045
    FSUB double ptr [ESP]               ; 00448049
    MOV EAX,dword ptr [ESP + 0x98]      ; 0044804c
    FXCH ST2                            ; 00448053
    FSTP float ptr [ESP + 0x6c]         ; 00448055
    FSTP float ptr [ESP + 0x70]         ; 00448059
    FXCH                                ; 0044805d
    FSTP float ptr [ESP + 0x74]         ; 0044805f
    MOVSD ES:EDI,ESI                    ; 00448063
    MOVSD ES:EDI,ESI                    ; 00448064
    MOVSD ES:EDI,ESI                    ; 00448065
    FSTP float ptr [ESP + 0x9c]         ; 00448066
    FLD float ptr [ECX + EAX*0x1]       ; 0044806d
    FMUL float ptr [ESP + 0x9c]         ; 00448070
    FLD float ptr [ECX + EAX*0x1 + 0x4] ; 00448077
    FMUL float ptr [ESP + 0x9c]         ; 0044807b
    FLD float ptr [ECX + EAX*0x1 + 0x8] ; 00448082
    FMUL float ptr [ESP + 0x9c]         ; 00448086
    LEA EDI,[ESP + 0x84]                ; 0044808d
    LEA ESI,[ESP + 0x60]                ; 00448094
    LEA ECX,[ESP + 0x78]                ; 00448098
    FXCH ST2                            ; 0044809c
    FSTP float ptr [ESP + 0x60]         ; 0044809e
    FSTP float ptr [ESP + 0x64]         ; 004480a2
    FSTP float ptr [ESP + 0x68]         ; 004480a6
    MOVSD ES:EDI,ESI                    ; 004480aa
    MOVSD ES:EDI,ESI                    ; 004480ab
    MOVSD ES:EDI,ESI                    ; 004480ac
    LEA EAX,[ESP + 0x3c]                ; 004480ad
    FLD float ptr [ESP + 0x84]          ; 004480b1
    FLD float ptr [ESP + 0x88]          ; 004480b8
    FLD float ptr [ESP + 0x8c]          ; 004480bf
    LEA EDI,[ESP + 0x78]                ; 004480c6
    LEA ESI,[ESP + 0x54]                ; 004480ca
    FXCH ST2                            ; 004480ce
    FADD float ptr [ESP + 0x48]         ; 004480d0
    FXCH                                ; 004480d4
    FADD float ptr [ESP + 0x4c]         ; 004480d6
    FXCH ST2                            ; 004480da
    FADD float ptr [ESP + 0x50]         ; 004480dc
    FXCH                                ; 004480e0
    FSTP float ptr [ESP + 0x54]         ; 004480e2
    FXCH                                ; 004480e6
    FSTP float ptr [ESP + 0x58]         ; 004480e8
    FSTP float ptr [ESP + 0x5c]         ; 004480ec
    MOVSD ES:EDI,ESI                    ; 004480f0
    MOVSD ES:EDI,ESI                    ; 004480f1
    MOVSD ES:EDI,ESI                    ; 004480f2
    CMP EAX,ECX                         ; 004480f3
    JZ 0x00448112                       ; 004480f5
        ;   XREF to: 00448112 (CONDITIONAL_JUMP)  ; LAB_00448112
    MOV EAX,dword ptr [ESP + 0x78]      ; 004480f7
    MOV dword ptr [ESP + 0x3c],EAX      ; 004480fb
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004480ff
    MOV dword ptr [ESP + 0x40],EAX      ; 00448103
    MOV EAX,dword ptr [ESP + 0x80]      ; 00448107
    MOV dword ptr [ESP + 0x44],EAX      ; 0044810e
    SHL EDX,0x2                         ; 00448112
        ;   Label: LAB_00448112
    LEA EAX,[EDX*0x8 + 0x0]             ; 00448115
    MOV ECX,dword ptr [EBX + 0x4]       ; 0044811c
    SUB EAX,EDX                         ; 0044811f
    ADD EAX,ECX                         ; 00448121
    ADD EAX,0xc                         ; 00448123
    PUSH dword ptr [ESP + 0x14]         ; 00448126
    PUSH EAX                            ; 0044812a
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0044812b
    SHL EAX,0x2                         ; 00448132
    MOV EDX,EAX                         ; 00448135
    SHL EAX,0x3                         ; 00448137
    SUB EAX,EDX                         ; 0044813a
    ADD EAX,ECX                         ; 0044813c
    ADD EAX,0xc                         ; 0044813e
    PUSH EAX                            ; 00448141
    LEA ESI,[ESP + 0x28]                ; 00448142
    LEA EDI,[ESP + 0x38]                ; 00448146
    CALL core_xform.cpp_slerpQuaternion_FUN_005b7940 ; 0044814a
        ;   XREF to: 005b7940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_005b7940()
    LEA ESI,[ESP + 0x28]                ; 0044814f
    ADD ESP,0xc                         ; 00448153
    MOVSD ES:EDI,ESI                    ; 00448156
        ;   Label: LAB_00448156
    MOVSD ES:EDI,ESI                    ; 00448157
    MOVSD ES:EDI,ESI                    ; 00448158
    MOVSD ES:EDI,ESI                    ; 00448159
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0044815a
    LEA EAX,[ESP + 0x3c]                ; 0044815d
    CMP EAX,EBX                         ; 00448161
    JNZ 0x0044830f                      ; 00448163
        ;   XREF to: 0044830f (CONDITIONAL_JUMP)  ; LAB_0044830f
    MOV EDI,dword ptr [EBP + 0x20]      ; 00448169
    LEA ESI,[ESP + 0x2c]                ; 0044816c
    MOVSD ES:EDI,ESI                    ; 00448170
    MOVSD ES:EDI,ESI                    ; 00448171
    MOVSD ES:EDI,ESI                    ; 00448172
    MOVSD ES:EDI,ESI                    ; 00448173
    MOV ESP,EBP                         ; 00448174
    POP EBP                             ; 00448176
    POP EDI                             ; 00448177
    POP ESI                             ; 00448178
    POP EBX                             ; 00448179
    RET                                 ; 0044817a
    FLD float ptr [EBP + 0x18]          ; 0044817b
        ;   Label: LAB_0044817b
    FLDZ                                ; 0044817e
    FILD dword ptr [EBX]                ; 00448180
    FSTP float ptr [ESP + 0x18]         ; 00448182
    FXCH                                ; 00448186
    FSTP double ptr [ESP + 0x8]         ; 00448188
    FCOMP double ptr [ESP + 0x8]        ; 0044818c
    FNSTSW AX                           ; 00448190
    SAHF                                ; 00448192
    JBE 0x0044822c                      ; 00448193
        ;   XREF to: 0044822c (CONDITIONAL_JUMP)  ; LAB_0044822c
    FLD float ptr [EBP + 0x18]          ; 00448199
    FCHS                                ; 0044819c
    FDIV float ptr [ESP + 0x18]         ; 0044819e
    SUB ESP,0x8                         ; 004481a2
    FSTP double ptr [ESP]               ; 004481a5
    CALL crt_math.c_floor_FUN_005c0880  ; 004481a8
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005c0880(double input_value)
    MOV dword ptr [ESP + 0x98],EAX      ; 004481ad
    MOV dword ptr [ESP + 0x9c],EDX      ; 004481b4
    FLD double ptr [ESP + 0x98]         ; 004481bb
    ADD ESP,0x8                         ; 004481c2
    FMUL float ptr [ESP + 0x18]         ; 004481c5
    FADD double ptr [ESP + 0x8]         ; 004481c9
    FST float ptr [ESP + 0x10]          ; 004481cd
    FLDZ                                ; 004481d1
    FCOMPP                              ; 004481d3
    FNSTSW AX                           ; 004481d5
    SAHF                                ; 004481d7
    JBE 0x004481e6                      ; 004481d8
        ;   XREF to: 004481e6 (CONDITIONAL_JUMP)  ; LAB_004481e6
    FLD float ptr [ESP + 0x10]          ; 004481da
    FADD float ptr [ESP + 0x18]         ; 004481de
    FSTP float ptr [ESP + 0x10]         ; 004481e2
        ;   Label: LAB_004481e2
    FLD float ptr [ESP + 0x10]          ; 004481e6
        ;   Label: LAB_004481e6
    FLD ST0                             ; 004481ea
    CALL crt_math.c_round_FUN_005c03a0  ; 004481ec
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0xa0]        ; 004481f1
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004481f8
    MOV EDX,dword ptr [ESP + 0xa0]      ; 004481ff
    MOV dword ptr [ESP + 0xa4],EAX      ; 00448206
    INC EDX                             ; 0044820d
    FILD dword ptr [ESP + 0xa4]         ; 0044820e
    FSUBP                               ; 00448215
    MOV EAX,dword ptr [EBX]             ; 00448217
    FSTP float ptr [ESP + 0x14]         ; 00448219
    CMP EDX,EAX                         ; 0044821d
    JL 0x00447fe8                       ; 0044821f
        ;   XREF to: 00447fe8 (CONDITIONAL_JUMP)  ; LAB_00447fe8
    XOR EDX,EDX                         ; 00448225
    JMP 0x00447fe8                      ; 00448227
        ;   XREF to: 00447fe8 (UNCONDITIONAL_JUMP)  ; LAB_00447fe8
    FLD float ptr [EBP + 0x18]          ; 0044822c
        ;   Label: LAB_0044822c
    FDIV float ptr [ESP + 0x18]         ; 0044822f
    SUB ESP,0x8                         ; 00448233
    FSTP double ptr [ESP]               ; 00448236
    CALL crt_math.c_floor_FUN_005c0880  ; 00448239
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005c0880(double input_value)
    MOV dword ptr [ESP + 0x98],EAX      ; 0044823e
    MOV dword ptr [ESP + 0x9c],EDX      ; 00448245
    FLD double ptr [ESP + 0x98]         ; 0044824c
    ADD ESP,0x8                         ; 00448253
    FMUL float ptr [ESP + 0x18]         ; 00448256
    FSUBR double ptr [ESP + 0x8]        ; 0044825a
    JMP 0x004481e2                      ; 0044825e
        ;   XREF to: 004481e2 (UNCONDITIONAL_JUMP)  ; LAB_004481e2
    MOV ECX,dword ptr [EBX]             ; 00448260
        ;   Label: LAB_00448260
    DEC ECX                             ; 00448262
    MOV dword ptr [ESP + 0xa4],ECX      ; 00448263
    FILD dword ptr [ESP + 0xa4]         ; 0044826a
    FCOMP float ptr [EBP + 0x18]        ; 00448271
    FNSTSW AX                           ; 00448274
    SAHF                                ; 00448276
    JA 0x0044828d                       ; 00448277
        ;   XREF to: 0044828d (CONDITIONAL_JUMP)  ; LAB_0044828d
    MOV dword ptr [ESP + 0xa0],ECX      ; 00448279
    MOV EDX,ECX                         ; 00448280
    XOR ECX,ECX                         ; 00448282
    MOV dword ptr [ESP + 0x14],ECX      ; 00448284
    JMP 0x00447fe8                      ; 00448288
        ;   XREF to: 00447fe8 (UNCONDITIONAL_JUMP)  ; LAB_00447fe8
    FLD float ptr [EBP + 0x18]          ; 0044828d
        ;   Label: LAB_0044828d
    FLD ST0                             ; 00448290
    CALL crt_math.c_round_FUN_005c03a0  ; 00448292
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0xa0]        ; 00448297
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0044829e
    MOV dword ptr [ESP + 0xa4],EAX      ; 004482a5
    MOV EDX,dword ptr [ESP + 0xa0]      ; 004482ac
    FILD dword ptr [ESP + 0xa4]         ; 004482b3
    FSUBP                               ; 004482ba
    INC EDX                             ; 004482bc
    FSTP float ptr [ESP + 0x14]         ; 004482bd
    JMP 0x00447fe8                      ; 004482c1
        ;   XREF to: 00447fe8 (UNCONDITIONAL_JUMP)  ; LAB_00447fe8
    MOV ECX,dword ptr [ESP + 0x98]      ; 004482c6
        ;   Label: LAB_004482c6
    MOV EDX,dword ptr [EBX + 0x4]       ; 004482cd
    LEA EAX,[ESP + 0x3c]                ; 004482d0
    ADD EDX,ECX                         ; 004482d4
    CMP EAX,EDX                         ; 004482d6
    JZ 0x004482ee                       ; 004482d8
        ;   XREF to: 004482ee (CONDITIONAL_JUMP)  ; LAB_004482ee
    MOV EAX,dword ptr [EDX]             ; 004482da
    MOV dword ptr [ESP + 0x3c],EAX      ; 004482dc
    MOV EAX,dword ptr [EDX + 0x4]       ; 004482e0
    MOV dword ptr [ESP + 0x40],EAX      ; 004482e3
    MOV EAX,dword ptr [EDX + 0x8]       ; 004482e7
    MOV dword ptr [ESP + 0x44],EAX      ; 004482ea
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004482ee
        ;   Label: LAB_004482ee
    SHL EAX,0x2                         ; 004482f5
    MOV EDX,EAX                         ; 004482f8
    SHL EAX,0x3                         ; 004482fa
    SUB EAX,EDX                         ; 004482fd
    MOV EDX,dword ptr [EBX + 0x4]       ; 004482ff
    LEA EDI,[ESP + 0x2c]                ; 00448302
    LEA ESI,[EDX + EAX*0x1 + 0xc]       ; 00448306
    JMP 0x00448156                      ; 0044830a
        ;   XREF to: 00448156 (UNCONDITIONAL_JUMP)  ; LAB_00448156
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0044830f
        ;   Label: LAB_0044830f
    MOV dword ptr [EBX],EAX             ; 00448313
    MOV EAX,dword ptr [ESP + 0x40]      ; 00448315
    MOV dword ptr [EBX + 0x4],EAX       ; 00448319
    MOV EAX,dword ptr [ESP + 0x44]      ; 0044831c
    MOV dword ptr [EBX + 0x8],EAX       ; 00448320
    MOV EDI,dword ptr [EBP + 0x20]      ; 00448323
    LEA ESI,[ESP + 0x2c]                ; 00448326
    MOVSD ES:EDI,ESI                    ; 0044832a
    MOVSD ES:EDI,ESI                    ; 0044832b
    MOVSD ES:EDI,ESI                    ; 0044832c
    MOVSD ES:EDI,ESI                    ; 0044832d
    MOV ESP,EBP                         ; 0044832e
    POP EBP                             ; 00448330
    POP EDI                             ; 00448331
    POP ESI                             ; 00448332
    POP EBX                             ; 00448333
    RET                                 ; 00448334


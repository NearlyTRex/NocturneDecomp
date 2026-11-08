; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * FUN_00532190(float *param_1,float *param_2,int param_3,ushort *param_4,int param_5,int param_6,int *param_7)
;
; Local Variables:
; undefined        Stack[-0x178]:1  local_178
; undefined        Stack[-0x16c]:1  local_16c
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined        Stack[-0x154]:1  local_154
; undefined        Stack[-0x148]:1  local_148
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined        Stack[-0x130]:1  local_130
; undefined        Stack[-0x124]:1  local_124
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
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
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[7]:
;   FUN_004159e0 at 00415a34
;   FUN_0044e720 at 0044e787
;   FUN_004c52a0 at 004c53f3
;   FUN_004c5470 at 004c55bf
;   FUN_005419c0 at 005419ed
;   FUN_005b0fe0 at 005b10bc
;   FUN_005b6a50 at 005b6c5f
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_005e5a51
;   TerminatedCString s_CDemonSet_lightVerticies_005e5a61
;   TerminatedCString s_core_set_cpp_005e5ab6
;   TerminatedCString s_Too_many_normals_on_this_005e5ac6
;   TerminatedCString s_core_set_cpp_005e5aef
;   TerminatedCString s_Need_more_normals_for_pa_005e5aff
;   undefined4 DAT_005e5b2a
;   undefined4 DAT_005e5b32
;   undefined4 DAT_0060b280
;   undefined4 DAT_00622014
;   undefined4 DAT_00622018
;   undefined4 DAT_0062201c
;   undefined4 DAT_00622034
;   undefined4 DAT_00622038
;   undefined4 DAT_0062203c
;   ... and 44 more
;
; Called Functions:
;   FUN_0046b960
;   FUN_004e4500
;   FUN_00531460
;   FUN_00531f60
;   FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00532190
        ;   Label: FUN_00532190
    PUSH ESI                            ; 00532191
    PUSH EDI                            ; 00532192
    PUSH EBP                            ; 00532193
    MOV EBP,ESP                         ; 00532194
    SUB ESP,0x164                       ; 00532196
    AND ESP,0xfffffff8                  ; 0053219c
    MOV EDX,dword ptr [EBP + 0x18]      ; 0053219f
    CMP EDX,0x4e20                      ; 005321a2
    JLE 0x005321d3                      ; 005321a8
        ;   XREF to: 005321d3 (CONDITIONAL_JUMP)  ; LAB_005321d3
    PUSH 0x4e20                         ; 005321aa
    PUSH EDX                            ; 005321af
    MOV ECX,0x5e5a51                    ; 005321b0 | = "..\\core\\set.cpp"
    MOV EBX,0xee9                       ; 005321b5
    PUSH 0x5e5a61                       ; 005321ba | = "CDemonSet::lightVerticies - tried to ..."
    MOV dword ptr [0x01d046a0],ECX      ; 005321bf | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 005321c5 | DAT_01d046a4
    CALL FUN_004e4500                   ; 005321cb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0xc                         ; 005321d0
    MOV EDI,dword ptr [0x0060b280]      ; 005321d3 | DAT_0060b280
        ;   Label: LAB_005321d3
    PUSH EDI                            ; 005321d9 | DAT_01ba5c50
    CALL FUN_0046b960                   ; 005321da
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 005321df
    TEST EAX,EAX                        ; 005321e2
    JNZ 0x00532250                      ; 005321e4
        ;   XREF to: 00532250 (CONDITIONAL_JUMP)  ; LAB_00532250
    MOV EDX,dword ptr [EBP + 0x18]      ; 005321ea
    LEA EDI,[EDX*0x4 + 0x0]             ; 005321ed
    MOV EAX,dword ptr [EBP + 0x14]      ; 005321f4
    SUB EDI,EDX                         ; 005321f7
    MOV EDX,dword ptr [EAX + 0x15ac90]  ; 005321f9
    SHL EDI,0x4                         ; 005321ff
    TEST EDX,EDX                        ; 00532202
    JZ 0x00532348                       ; 00532204
        ;   XREF to: 00532348 (CONDITIONAL_JUMP)  ; LAB_00532348
    CMP dword ptr [0x0200a390],0x0      ; 0053220a | DAT_0200a390
    JZ 0x00532257                       ; 00532211
        ;   XREF to: 00532257 (CONDITIONAL_JUMP)  ; LAB_00532257
    CMP dword ptr [EBP + 0x18],0x0      ; 00532213
    JLE 0x00532240                      ; 00532217
        ;   XREF to: 00532240 (CONDITIONAL_JUMP)  ; LAB_00532240
    MOV EDX,EDI                         ; 00532219
    XOR EAX,EAX                         ; 0053221b
    ADD EAX,0x30                        ; 0053221d
        ;   Label: LAB_0053221d
    XOR EBX,EBX                         ; 00532220
    MOV dword ptr [EAX + 0x622004],EBX  ; 00532222 | DAT_00622034 | DAT_00622064
    MOV dword ptr [EAX + 0x622008],EBX  ; 00532228 | DAT_00622038 | DAT_00622068
    MOV dword ptr [EAX + 0x62200c],EBX  ; 0053222e | DAT_0062203c | DAT_0062206c
    MOV dword ptr [EAX + 0x622010],EBX  ; 00532234 | DAT_00622040 | DAT_00622070
    CMP EAX,EDX                         ; 0053223a
    JL 0x0053221d                       ; 0053223c
        ;   XREF to: 0053221d (CONDITIONAL_JUMP)  ; LAB_0053221d
    MOV EAX,EAX                         ; 0053223e
    XOR EBX,EBX                         ; 00532240
        ;   Label: LAB_00532240
    MOV dword ptr [0x01c38aec],EBX      ; 00532242 | DAT_01c38aec
    LEA EAX,[EAX]                       ; 00532248
    MOV EDX,EDX                         ; 0053224e
    MOV ESP,EBP                         ; 00532250
        ;   Label: LAB_00532250
    POP EBP                             ; 00532252
    POP EDI                             ; 00532253
    POP ESI                             ; 00532254
    POP EBX                             ; 00532255
    RET                                 ; 00532256
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532257
        ;   Label: LAB_00532257
    MOV EDX,dword ptr [EAX + 0x15ac90]  ; 0053225a
    CMP EDX,0x2                         ; 00532260
    JNZ 0x005322af                      ; 00532263
        ;   XREF to: 005322af (CONDITIONAL_JUMP)  ; LAB_005322af
    MOV EDI,dword ptr [EBP + 0x18]      ; 00532265
    XOR EBX,EBX                         ; 00532268
    TEST EDI,EDI                        ; 0053226a
    JLE 0x005322a0                      ; 0053226c
        ;   XREF to: 005322a0 (CONDITIONAL_JUMP)  ; LAB_005322a0
    MOV ESI,dword ptr [EBP + 0x24]      ; 0053226e
    XOR EDI,EDI                         ; 00532271
    PUSH 0x1                            ; 00532273
        ;   Label: LAB_00532273
    PUSH EBX                            ; 00532275
    XOR ECX,ECX                         ; 00532276
    PUSH ECX                            ; 00532278
    PUSH ESI                            ; 00532279
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053227a
    ADD EDI,0x30                        ; 0053227d
    PUSH EAX                            ; 00532280
    MOV dword ptr [EDI + 0x622010],ECX  ; 00532281 | DAT_00622040 | DAT_00622070
    CALL FUN_00531460                   ; 00532287
        ;   XREF to: 00531460 (UNCONDITIONAL_CALL)  ; undefined FUN_00531460()
    ADD ESP,0x14                        ; 0053228c
    INC EBX                             ; 0053228f
    MOV EDX,dword ptr [EBP + 0x18]      ; 00532290
    ADD ESI,0xc                         ; 00532293
    CMP EBX,EDX                         ; 00532296
    JL 0x00532273                       ; 00532298
        ;   XREF to: 00532273 (CONDITIONAL_JUMP)  ; LAB_00532273
    LEA EAX,[EAX]                       ; 0053229a
    XOR ECX,ECX                         ; 005322a0
        ;   Label: LAB_005322a0
    MOV dword ptr [0x01c38aec],ECX      ; 005322a2 | DAT_01c38aec
    MOV ESP,EBP                         ; 005322a8
    POP EBP                             ; 005322aa
    POP EDI                             ; 005322ab
    POP ESI                             ; 005322ac
    POP EBX                             ; 005322ad
    RET                                 ; 005322ae
    CMP EDX,0x3                         ; 005322af
        ;   Label: LAB_005322af
    JNZ 0x00532309                      ; 005322b2
        ;   XREF to: 00532309 (CONDITIONAL_JUMP)  ; LAB_00532309
    CMP dword ptr [EBP + 0x18],0x0      ; 005322b4
    JLE 0x005322a0                      ; 005322b8
        ;   XREF to: 005322a0 (CONDITIONAL_JUMP)  ; LAB_005322a0
    MOV ECX,EDI                         ; 005322ba
    XOR EAX,EAX                         ; 005322bc
    MOV EDX,dword ptr [EBP + 0x14]      ; 005322be
        ;   Label: LAB_005322be
    MOV EDX,dword ptr [EDX + 0x15ae9c]  ; 005322c1
    MOV dword ptr [EAX + 0x622034],EDX  ; 005322c7 | DAT_00622034 | DAT_00622064
    MOV EDX,dword ptr [EBP + 0x14]      ; 005322cd
    MOV EDX,dword ptr [EDX + 0x15aea0]  ; 005322d0
    MOV dword ptr [EAX + 0x622038],EDX  ; 005322d6 | DAT_00622038 | DAT_00622068
    MOV EDX,dword ptr [EBP + 0x14]      ; 005322dc
    ADD EAX,0x30                        ; 005322df
    MOV EDX,dword ptr [EDX + 0x15aea4]  ; 005322e2
    MOV dword ptr [EAX + 0x62200c],EDX  ; 005322e8 | DAT_0062203c | DAT_0062206c
    XOR EDX,EDX                         ; 005322ee
    MOV dword ptr [EAX + 0x622010],EDX  ; 005322f0 | DAT_00622040 | DAT_00622070
    CMP EAX,ECX                         ; 005322f6
    JL 0x005322be                       ; 005322f8
        ;   XREF to: 005322be (CONDITIONAL_JUMP)  ; LAB_005322be
    XOR ECX,ECX                         ; 005322fa
    MOV dword ptr [0x01c38aec],ECX      ; 005322fc | DAT_01c38aec
    MOV ESP,EBP                         ; 00532302
    POP EBP                             ; 00532304
    POP EDI                             ; 00532305
    POP ESI                             ; 00532306
    POP EBX                             ; 00532307
    RET                                 ; 00532308
    CMP dword ptr [EBP + 0x18],0x0      ; 00532309
        ;   Label: LAB_00532309
    JLE 0x005322a0                      ; 0053230d
        ;   XREF to: 005322a0 (CONDITIONAL_JUMP)  ; LAB_005322a0
    MOV ECX,0xffff                      ; 0053230f
    MOV EDX,EDI                         ; 00532314
    XOR EAX,EAX                         ; 00532316
    ADD EAX,0x30                        ; 00532318
        ;   Label: LAB_00532318
    MOV dword ptr [EAX + 0x622004],ECX  ; 0053231b | DAT_00622034 | DAT_00622064
    MOV dword ptr [EAX + 0x622008],ECX  ; 00532321 | DAT_00622038 | DAT_00622068
    XOR EDI,EDI                         ; 00532327
    MOV dword ptr [EAX + 0x62200c],ECX  ; 00532329 | DAT_0062203c | DAT_0062206c
    MOV dword ptr [EAX + 0x622010],EDI  ; 0053232f | DAT_00622040 | DAT_00622070
    CMP EAX,EDX                         ; 00532335
    JL 0x00532318                       ; 00532337
        ;   XREF to: 00532318 (CONDITIONAL_JUMP)  ; LAB_00532318
    XOR ECX,ECX                         ; 00532339
    MOV dword ptr [0x01c38aec],ECX      ; 0053233b | DAT_01c38aec
    MOV ESP,EBP                         ; 00532341
    POP EBP                             ; 00532343
    POP EDI                             ; 00532344
    POP ESI                             ; 00532345
    POP EBX                             ; 00532346
    RET                                 ; 00532347
    MOV ECX,dword ptr [EAX + 0x16166c]  ; 00532348
        ;   Label: LAB_00532348
    TEST ECX,ECX                        ; 0053234e
    JZ 0x0053239b                       ; 00532350
        ;   XREF to: 0053239b (CONDITIONAL_JUMP)  ; LAB_0053239b
    CMP dword ptr [EBP + 0x18],0x0      ; 00532352
    JLE 0x00532250                      ; 00532356
        ;   XREF to: 00532250 (CONDITIONAL_JUMP)  ; LAB_00532250
    MOV ECX,EDI                         ; 0053235c
    XOR EAX,EAX                         ; 0053235e
    MOV EDX,dword ptr [EBP + 0x14]      ; 00532360
        ;   Label: LAB_00532360
    MOV EDX,dword ptr [EDX + 0x161670]  ; 00532363
    MOV dword ptr [EAX + 0x622034],EDX  ; 00532369 | DAT_00622034 | DAT_00622064
    MOV EDX,dword ptr [EBP + 0x14]      ; 0053236f
    MOV EDX,dword ptr [EDX + 0x161674]  ; 00532372
    MOV dword ptr [EAX + 0x622038],EDX  ; 00532378 | DAT_00622038 | DAT_00622068
    MOV EDX,dword ptr [EBP + 0x14]      ; 0053237e
    ADD EAX,0x30                        ; 00532381
    MOV EDX,dword ptr [EDX + 0x161678]  ; 00532384
    MOV dword ptr [EAX + 0x62200c],EDX  ; 0053238a | DAT_0062203c | DAT_0062206c
    CMP EAX,ECX                         ; 00532390
    JL 0x00532360                       ; 00532392
        ;   XREF to: 00532360 (CONDITIONAL_JUMP)  ; LAB_00532360
    MOV ESP,EBP                         ; 00532394
    POP EBP                             ; 00532396
    POP EDI                             ; 00532397
    POP ESI                             ; 00532398
    POP EBX                             ; 00532399
    RET                                 ; 0053239a
    MOV EBX,dword ptr [EAX + 0x15ac98]  ; 0053239b
        ;   Label: LAB_0053239b
    TEST EBX,EBX                        ; 005323a1
    JZ 0x0053244f                       ; 005323a3
        ;   XREF to: 0053244f (CONDITIONAL_JUMP)  ; LAB_0053244f
    MOV EBX,dword ptr [EBP + 0x18]      ; 005323a9
    MOV dword ptr [ESP + 0x13c],EDX     ; 005323ac
    TEST EBX,EBX                        ; 005323b3
    JLE 0x00532250                      ; 005323b5
        ;   XREF to: 00532250 (CONDITIONAL_JUMP)  ; LAB_00532250
    XOR EBX,EBX                         ; 005323bb
    MOV EAX,dword ptr [EBX + 0x622014]  ; 005323bd | DAT_00622014 | DAT_00622044
        ;   Label: LAB_005323bd
    MOV dword ptr [ESP + 0x84],EAX      ; 005323c3
    MOV EAX,dword ptr [EBX + 0x622018]  ; 005323ca | DAT_00622018 | DAT_00622048
    MOV dword ptr [ESP + 0x88],EAX      ; 005323d0
    MOV EAX,dword ptr [EBX + 0x62201c]  ; 005323d7 | DAT_0062201c | DAT_0062204c
    MOV dword ptr [ESP + 0x8c],EAX      ; 005323dd
    LEA EAX,[ESP + 0x84]                ; 005323e4
    PUSH EAX                            ; 005323eb
    LEA ESI,[ESP + 0x58]                ; 005323ec
    CALL FUN_00531f60                   ; 005323f0
        ;   XREF to: 00531f60 (UNCONDITIONAL_CALL)  ; undefined FUN_00531f60()
    ADD ESP,0x4                         ; 005323f5
    PUSH 0x0                            ; 005323f8
    MOV ECX,dword ptr [ESP + 0x140]     ; 005323fa
    LEA EDI,[ESP + 0x10]                ; 00532401
    PUSH ECX                            ; 00532405
    LEA ESI,[ESP + 0x5c]                ; 00532406
    LEA EAX,[ESP + 0x14]                ; 0053240a
    PUSH 0x0                            ; 0053240e
    MOVSD ES:EDI,ESI                    ; 00532410
    MOVSD ES:EDI,ESI                    ; 00532411
    MOVSD ES:EDI,ESI                    ; 00532412
    PUSH EAX                            ; 00532413
    MOV ESI,dword ptr [EBP + 0x14]      ; 00532414
    PUSH ESI                            ; 00532417
    ADD EBX,0x30                        ; 00532418
    CALL FUN_00531460                   ; 0053241b
        ;   XREF to: 00531460 (UNCONDITIONAL_CALL)  ; undefined FUN_00531460()
    ADD ESP,0x14                        ; 00532420
    MOV EAX,[0x01c38aec]                ; 00532423 | DAT_01c38aec
    MOV EDI,dword ptr [ESP + 0x13c]     ; 00532428
    MOV EDX,dword ptr [EBP + 0x18]      ; 0053242f
    INC EDI                             ; 00532432
    MOV dword ptr [EBX + 0x622010],EAX  ; 00532433 | DAT_00622040
    MOV dword ptr [ESP + 0x13c],EDI     ; 00532439
    CMP EDI,EDX                         ; 00532440
    JL 0x005323bd                       ; 00532442
        ;   XREF to: 005323bd (CONDITIONAL_JUMP)  ; LAB_005323bd
    MOV ESP,EBP                         ; 00532448
    POP EBP                             ; 0053244a
    POP EDI                             ; 0053244b
    POP ESI                             ; 0053244c
    POP EBX                             ; 0053244d
    RET                                 ; 0053244e
    CMP dword ptr [EBP + 0x2c],0x0      ; 0053244f
        ;   Label: LAB_0053244f
    JZ 0x00532709                       ; 00532453
        ;   XREF to: 00532709 (CONDITIONAL_JUMP)  ; LAB_00532709
    CMP dword ptr [EAX + 0x15ae84],0x0  ; 00532459
    JZ 0x005324f0                       ; 00532460
        ;   XREF to: 005324f0 (CONDITIONAL_JUMP)  ; LAB_005324f0
    MOV EDX,dword ptr [EBP + 0x18]      ; 00532466
    XOR EAX,EAX                         ; 00532469
    TEST EDX,EDX                        ; 0053246b
    JLE 0x00532490                      ; 0053246d
        ;   XREF to: 00532490 (CONDITIONAL_JUMP)  ; LAB_00532490
    MOV ECX,dword ptr [EBP + 0x2c]      ; 0053246f
    IMUL ESI,EAX,0xc                    ; 00532472
        ;   Label: LAB_00532472
    LEA EDI,[ESI + 0x2054df4]           ; 00532475
    MOV ESI,ECX                         ; 0053247b
    MOVSD ES:EDI,ESI                    ; 0053247d | DAT_02054e00
    MOVSD ES:EDI,ESI                    ; 0053247e | DAT_02054e04
    MOVSD ES:EDI,ESI                    ; 0053247f | DAT_02054e08
    INC EAX                             ; 00532480
    MOV EDI,dword ptr [EBP + 0x18]      ; 00532481
    ADD ECX,0xc                         ; 00532484
    CMP EAX,EDI                         ; 00532487
    JL 0x00532472                       ; 00532489
        ;   XREF to: 00532472 (CONDITIONAL_JUMP)  ; LAB_00532472
    LEA EAX,[EAX]                       ; 0053248b
    MOV ECX,ECX                         ; 0053248e
    MOV EAX,dword ptr [EBP + 0x18]      ; 00532490
        ;   Label: LAB_00532490
    XOR EBX,EBX                         ; 00532493
    TEST EAX,EAX                        ; 00532495
    JLE 0x00532250                      ; 00532497
        ;   XREF to: 00532250 (CONDITIONAL_JUMP)  ; LAB_00532250
    MOV ESI,0x201a474                   ; 0053249d
    MOV EDI,0x2054df4                   ; 005324a2
    MOV dword ptr [ESP + 0x114],EBX     ; 005324a7
    PUSH 0x0                            ; 005324ae
        ;   Label: LAB_005324ae
    PUSH EBX                            ; 005324b0
    PUSH EDI                            ; 005324b1
    PUSH ESI                            ; 005324b2
    MOV EDX,dword ptr [EBP + 0x14]      ; 005324b3
    PUSH EDX                            ; 005324b6
    INC EBX                             ; 005324b7
    ADD EDI,0xc                         ; 005324b8
    CALL FUN_00531460                   ; 005324bb
        ;   XREF to: 00531460 (UNCONDITIONAL_CALL)  ; undefined FUN_00531460()
    ADD ESP,0x14                        ; 005324c0
    ADD ESI,0xc                         ; 005324c3
    MOV EDX,dword ptr [ESP + 0x114]     ; 005324c6
    MOV EAX,[0x01c38aec]                ; 005324cd | DAT_01c38aec
    LEA ECX,[EDX + 0x30]                ; 005324d2
    MOV dword ptr [EDX + 0x622040],EAX  ; 005324d5 | DAT_00622040
    MOV EAX,dword ptr [EBP + 0x18]      ; 005324db
    MOV dword ptr [ESP + 0x114],ECX     ; 005324de
    CMP EBX,EAX                         ; 005324e5
    JL 0x005324ae                       ; 005324e7
        ;   XREF to: 005324ae (CONDITIONAL_JUMP)  ; LAB_005324ae
    MOV ESP,EBP                         ; 005324e9
    POP EBP                             ; 005324eb
    POP EDI                             ; 005324ec
    POP ESI                             ; 005324ed
    POP EBX                             ; 005324ee
    RET                                 ; 005324ef
    CMP dword ptr [EBP + 0x18],0x0      ; 005324f0
        ;   Label: LAB_005324f0
    JLE 0x00532570                      ; 005324f4
        ;   XREF to: 00532570 (CONDITIONAL_JUMP)  ; LAB_00532570
    MOV dword ptr [ESP + 0x108],EDI     ; 005324fa
    MOV dword ptr [ESP + 0x128],EDX     ; 00532501
    MOV EAX,dword ptr [EBX + 0x622014]  ; 00532508 | DAT_00622014 | DAT_00622044
        ;   Label: LAB_00532508
    MOV dword ptr [ESP + 0x18],EAX      ; 0053250e
    MOV EAX,dword ptr [EBX + 0x622018]  ; 00532512 | DAT_00622018 | DAT_00622048
    MOV dword ptr [ESP + 0x1c],EAX      ; 00532518
    MOV EAX,dword ptr [EBX + 0x62201c]  ; 0053251c | DAT_0062201c | DAT_0062204c
    MOV dword ptr [ESP + 0x20],EAX      ; 00532522
    LEA EAX,[ESP + 0x18]                ; 00532526
    PUSH EAX                            ; 0053252a
    LEA ESI,[ESP + 0x4]                 ; 0053252b
    CALL FUN_00531f60                   ; 0053252f
        ;   XREF to: 00531f60 (UNCONDITIONAL_CALL)  ; undefined FUN_00531f60()
    ADD ESP,0x4                         ; 00532534
    MOV EDI,dword ptr [ESP + 0x128]     ; 00532537
    MOV ESI,ESP                         ; 0053253e
    LEA EDI,[EDI + 0x201a474]           ; 00532540
    MOVSD ES:EDI,ESI                    ; 00532546
    MOVSD ES:EDI,ESI                    ; 00532547
    MOVSD ES:EDI,ESI                    ; 00532548
    MOV ESI,dword ptr [ESP + 0x128]     ; 00532549
    ADD EBX,0x30                        ; 00532550
    ADD ESI,0xc                         ; 00532553
    MOV EDI,dword ptr [ESP + 0x108]     ; 00532556
    MOV dword ptr [ESP + 0x128],ESI     ; 0053255d
    CMP EBX,EDI                         ; 00532564
    JL 0x00532508                       ; 00532566
        ;   XREF to: 00532508 (CONDITIONAL_JUMP)  ; LAB_00532508
    LEA EAX,[EAX]                       ; 00532568
    MOV EDX,EDX                         ; 0053256e
    MOV EAX,dword ptr [EBP + 0x18]      ; 00532570
        ;   Label: LAB_00532570
    XOR EBX,EBX                         ; 00532573
    TEST EAX,EAX                        ; 00532575
    JLE 0x00532490                      ; 00532577
        ;   XREF to: 00532490 (CONDITIONAL_JUMP)  ; LAB_00532490
    MOV ECX,dword ptr [EBP + 0x2c]      ; 0053257d
    IMUL EDI,EBX,0xc                    ; 00532580
        ;   Label: LAB_00532580
    MOV EAX,[0x01c38b9c]                ; 00532583 | DAT_01c38b9c
    MOV EDX,dword ptr [ECX]             ; 00532588
    IMUL EDX                            ; 0053258a
    SHRD EAX,EDX,0x10                   ; 0053258c
    MOV ESI,EAX                         ; 00532590
    MOV EDX,dword ptr [ECX + 0x4]       ; 00532592
    MOV EAX,[0x01c38ba8]                ; 00532595 | DAT_01c38ba8
    IMUL EDX                            ; 0053259a
    SHRD EAX,EDX,0x10                   ; 0053259c
    MOV EDX,dword ptr [ECX + 0x8]       ; 005325a0
    ADD ESI,EAX                         ; 005325a3
    MOV EAX,[0x01c38bb4]                ; 005325a5 | DAT_01c38bb4
    IMUL EDX                            ; 005325aa
    SHRD EAX,EDX,0x10                   ; 005325ac
    MOV EDX,dword ptr [ECX]             ; 005325b0
    ADD ESI,EAX                         ; 005325b2
    MOV EAX,[0x01c38ba0]                ; 005325b4 | DAT_01c38ba0
    MOV dword ptr [ESP + 0x9c],ESI      ; 005325b9
    IMUL EDX                            ; 005325c0
    SHRD EAX,EDX,0x10                   ; 005325c2
    MOV ESI,EAX                         ; 005325c6
    MOV EDX,dword ptr [ECX + 0x4]       ; 005325c8
    MOV EAX,[0x01c38bac]                ; 005325cb | DAT_01c38bac
    IMUL EDX                            ; 005325d0
    SHRD EAX,EDX,0x10                   ; 005325d2
    MOV EDX,dword ptr [ECX + 0x8]       ; 005325d6
    ADD ESI,EAX                         ; 005325d9
    MOV EAX,[0x01c38bb8]                ; 005325db | DAT_01c38bb8
    IMUL EDX                            ; 005325e0
    SHRD EAX,EDX,0x10                   ; 005325e2
    MOV EDX,dword ptr [ECX]             ; 005325e6
    ADD ESI,EAX                         ; 005325e8
    MOV EAX,[0x01c38ba4]                ; 005325ea | DAT_01c38ba4
    MOV dword ptr [ESP + 0xa0],ESI      ; 005325ef
    IMUL EDX                            ; 005325f6
    SHRD EAX,EDX,0x10                   ; 005325f8
    MOV ESI,EAX                         ; 005325fc
    MOV EDX,dword ptr [ECX + 0x4]       ; 005325fe
    MOV EAX,[0x01c38bb0]                ; 00532601 | DAT_01c38bb0
    IMUL EDX                            ; 00532606
    SHRD EAX,EDX,0x10                   ; 00532608
    MOV EDX,dword ptr [ECX + 0x8]       ; 0053260c
    ADD ESI,EAX                         ; 0053260f
    MOV EAX,[0x01c38bbc]                ; 00532611 | DAT_01c38bbc
    IMUL EDX                            ; 00532616
    SHRD EAX,EDX,0x10                   ; 00532618
    MOV EDX,dword ptr [ESP + 0x9c]      ; 0053261c
    ADD ESI,EAX                         ; 00532623
    MOV EAX,[0x01d04fb8]                ; 00532625 | DAT_01d04fb8
    MOV dword ptr [ESP + 0xa4],ESI      ; 0053262a
    IMUL EDX                            ; 00532631
    SHRD EAX,EDX,0x10                   ; 00532633
    MOV EDX,dword ptr [ESP + 0xa0]      ; 00532637
    MOV ESI,EAX                         ; 0053263e
    MOV EAX,[0x01d04fc4]                ; 00532640 | DAT_01d04fc4
    IMUL EDX                            ; 00532645
    SHRD EAX,EDX,0x10                   ; 00532647
    MOV EDX,dword ptr [ESP + 0xa4]      ; 0053264b
    ADD ESI,EAX                         ; 00532652
    MOV EAX,[0x01d04fd0]                ; 00532654 | DAT_01d04fd0
    IMUL EDX                            ; 00532659
    SHRD EAX,EDX,0x10                   ; 0053265b
    ADD ESI,EAX                         ; 0053265f
    MOV dword ptr [ESP + 0x78],ESI      ; 00532661
    MOV EDX,dword ptr [ESP + 0x9c]      ; 00532665
    MOV EAX,[0x01d04fbc]                ; 0053266c | DAT_01d04fbc
    IMUL EDX                            ; 00532671
    SHRD EAX,EDX,0x10                   ; 00532673
    MOV EDX,dword ptr [ESP + 0xa0]      ; 00532677
    MOV ESI,EAX                         ; 0053267e
    MOV EAX,[0x01d04fc8]                ; 00532680 | DAT_01d04fc8
    IMUL EDX                            ; 00532685
    SHRD EAX,EDX,0x10                   ; 00532687
    MOV EDX,dword ptr [ESP + 0xa4]      ; 0053268b
    ADD ESI,EAX                         ; 00532692
    MOV EAX,[0x01d04fd4]                ; 00532694 | DAT_01d04fd4
    IMUL EDX                            ; 00532699
    SHRD EAX,EDX,0x10                   ; 0053269b
    MOV EDX,dword ptr [ESP + 0x9c]      ; 0053269f
    ADD ESI,EAX                         ; 005326a6
    MOV EAX,[0x01d04fc0]                ; 005326a8 | DAT_01d04fc0
    MOV dword ptr [ESP + 0x7c],ESI      ; 005326ad
    IMUL EDX                            ; 005326b1
    SHRD EAX,EDX,0x10                   ; 005326b3
    MOV EDX,dword ptr [ESP + 0xa0]      ; 005326b7
    MOV ESI,EAX                         ; 005326be
    MOV EAX,[0x01d04fcc]                ; 005326c0 | DAT_01d04fcc
    IMUL EDX                            ; 005326c5
    SHRD EAX,EDX,0x10                   ; 005326c7
    MOV EDX,dword ptr [ESP + 0xa4]      ; 005326cb
    ADD ESI,EAX                         ; 005326d2
    MOV EAX,[0x01d04fd8]                ; 005326d4 | DAT_01d04fd8
    IMUL EDX                            ; 005326d9
    SHRD EAX,EDX,0x10                   ; 005326db
    ADD ESI,EAX                         ; 005326df
    LEA EDI,[EDI + 0x2054df4]           ; 005326e1
    MOV dword ptr [ESP + 0x80],ESI      ; 005326e7
    LEA ESI,[ESP + 0x78]                ; 005326ee
    MOVSD ES:EDI,ESI                    ; 005326f2
    MOVSD ES:EDI,ESI                    ; 005326f3
    MOVSD ES:EDI,ESI                    ; 005326f4
    INC EBX                             ; 005326f5
    MOV ESI,dword ptr [EBP + 0x18]      ; 005326f6
    ADD ECX,0xc                         ; 005326f9
    CMP EBX,ESI                         ; 005326fc
    JGE 0x00532490                      ; 005326fe
        ;   XREF to: 00532490 (CONDITIONAL_JUMP)  ; LAB_00532490
    JMP 0x00532580                      ; 00532704
        ;   XREF to: 00532580 (UNCONDITIONAL_JUMP)  ; LAB_00532580
    CMP dword ptr [EBP + 0x1c],0x0      ; 00532709
        ;   Label: LAB_00532709
    JNZ 0x005327a4                      ; 0053270d
        ;   XREF to: 005327a4 (CONDITIONAL_JUMP)  ; LAB_005327a4
    MOV EBX,dword ptr [EBP + 0x18]      ; 00532713
    MOV dword ptr [ESP + 0x138],EDX     ; 00532716
    TEST EBX,EBX                        ; 0053271d
    JLE 0x00532250                      ; 0053271f
        ;   XREF to: 00532250 (CONDITIONAL_JUMP)  ; LAB_00532250
    XOR EBX,EBX                         ; 00532725
    MOV EAX,dword ptr [EBX + 0x622014]  ; 00532727 | DAT_00622014 | DAT_00622044
        ;   Label: LAB_00532727
    MOV dword ptr [ESP + 0x3c],EAX      ; 0053272d
    MOV EAX,dword ptr [EBX + 0x622018]  ; 00532731 | DAT_00622018 | DAT_00622048
    MOV dword ptr [ESP + 0x40],EAX      ; 00532737
    MOV EAX,dword ptr [EBX + 0x62201c]  ; 0053273b | DAT_0062201c | DAT_0062204c
    MOV dword ptr [ESP + 0x44],EAX      ; 00532741
    LEA EAX,[ESP + 0x3c]                ; 00532745
    PUSH EAX                            ; 00532749
    LEA ESI,[ESP + 0x34]                ; 0053274a
    LEA EDI,[ESP + 0x28]                ; 0053274e
    CALL FUN_00531f60                   ; 00532752
        ;   XREF to: 00531f60 (UNCONDITIONAL_CALL)  ; undefined FUN_00531f60()
    LEA ESI,[ESP + 0x34]                ; 00532757
    ADD ESP,0x4                         ; 0053275b
    MOVSD ES:EDI,ESI                    ; 0053275e
    MOVSD ES:EDI,ESI                    ; 0053275f
    MOVSD ES:EDI,ESI                    ; 00532760
    PUSH 0x0                            ; 00532761
    MOV EDI,dword ptr [ESP + 0x13c]     ; 00532763
    PUSH EDI                            ; 0053276a
    PUSH 0x0                            ; 0053276b
    LEA EAX,[ESP + 0x30]                ; 0053276d
    PUSH EAX                            ; 00532771
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532772
    PUSH EAX                            ; 00532775
    ADD EBX,0x30                        ; 00532776
    CALL FUN_00531460                   ; 00532779
        ;   XREF to: 00531460 (UNCONDITIONAL_CALL)  ; undefined FUN_00531460()
    MOV EAX,[0x01c38aec]                ; 0053277e | DAT_01c38aec
    ADD ESP,0x14                        ; 00532783
    LEA EDX,[EDI + 0x1]                 ; 00532786
    MOV ECX,dword ptr [EBP + 0x18]      ; 00532789
    MOV dword ptr [ESP + 0x138],EDX     ; 0053278c
    MOV dword ptr [EBX + 0x622010],EAX  ; 00532793 | DAT_00622040
    CMP EDX,ECX                         ; 00532799
    JL 0x00532727                       ; 0053279b
        ;   XREF to: 00532727 (CONDITIONAL_JUMP)  ; LAB_00532727
    MOV ESP,EBP                         ; 0053279d
    POP EBP                             ; 0053279f
    POP EDI                             ; 005327a0
    POP ESI                             ; 005327a1
    POP EBX                             ; 005327a2
    RET                                 ; 005327a3
    CMP dword ptr [EBP + 0x18],0x0      ; 005327a4
        ;   Label: LAB_005327a4
    JLE 0x00532820                      ; 005327a8
        ;   XREF to: 00532820 (CONDITIONAL_JUMP)  ; LAB_00532820
    MOV dword ptr [ESP + 0x10c],EDI     ; 005327ae
    MOV dword ptr [ESP + 0x11c],ECX     ; 005327b5
    MOV EAX,dword ptr [EBX + 0x622014]  ; 005327bc | DAT_00622014 | DAT_00622044
        ;   Label: LAB_005327bc
    MOV dword ptr [ESP + 0x60],EAX      ; 005327c2
    MOV EAX,dword ptr [EBX + 0x622018]  ; 005327c6 | DAT_00622018 | DAT_00622048
    MOV dword ptr [ESP + 0x64],EAX      ; 005327cc
    MOV EAX,dword ptr [EBX + 0x62201c]  ; 005327d0 | DAT_0062201c | DAT_0062204c
    MOV dword ptr [ESP + 0x68],EAX      ; 005327d6
    LEA EAX,[ESP + 0x60]                ; 005327da
    PUSH EAX                            ; 005327de
    LEA ESI,[ESP + 0x4c]                ; 005327df
    CALL FUN_00531f60                   ; 005327e3
        ;   XREF to: 00531f60 (UNCONDITIONAL_CALL)  ; undefined FUN_00531f60()
    ADD ESP,0x4                         ; 005327e8
    ADD EBX,0x30                        ; 005327eb
    MOV EDI,dword ptr [ESP + 0x11c]     ; 005327ee
    MOV EDX,dword ptr [ESP + 0x11c]     ; 005327f5
    LEA ESI,[ESP + 0x48]                ; 005327fc
    ADD EDX,0xc                         ; 00532800
    LEA EDI,[EDI + 0x201a474]           ; 00532803
    MOV ECX,dword ptr [ESP + 0x10c]     ; 00532809
    MOV dword ptr [ESP + 0x11c],EDX     ; 00532810
    MOVSD ES:EDI,ESI                    ; 00532817
    MOVSD ES:EDI,ESI                    ; 00532818
    MOVSD ES:EDI,ESI                    ; 00532819
    CMP EBX,ECX                         ; 0053281a
    JL 0x005327bc                       ; 0053281c
        ;   XREF to: 005327bc (CONDITIONAL_JUMP)  ; LAB_005327bc
    MOV EAX,EAX                         ; 0053281e
    CMP dword ptr [EBP + 0x28],0x0      ; 00532820
        ;   Label: LAB_00532820
    JLE 0x00532b6b                      ; 00532824
        ;   XREF to: 00532b6b (CONDITIONAL_JUMP)  ; LAB_00532b6b
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0053282a
    MOV EAX,dword ptr [EBP + 0x20]      ; 0053282d
    XOR ESI,ESI                         ; 00532830
    TEST EDX,EDX                        ; 00532832
    JLE 0x00532993                      ; 00532834
        ;   XREF to: 00532993 (CONDITIONAL_JUMP)  ; LAB_00532993
    MOV EDX,dword ptr [EAX + 0x24]      ; 0053283a
        ;   Label: LAB_0053283a
    IMUL EDX,EDX,0xc                    ; 0053283d
    MOV EBX,dword ptr [EAX + 0x18]      ; 00532840
    IMUL EBX,EBX,0xc                    ; 00532843
    MOV ECX,0x201a474                   ; 00532846
    ADD ECX,EDX                         ; 0053284b
    MOV EDX,0x201a474                   ; 0053284d
    ADD EDX,EBX                         ; 00532852
    MOV EBX,dword ptr [ECX]             ; 00532854
    SUB EBX,dword ptr [EDX]             ; 00532856
    MOV dword ptr [ESP + 0x158],EBX     ; 00532858
    MOV EBX,dword ptr [ECX + 0x4]       ; 0053285f
    SUB EBX,dword ptr [EDX + 0x4]       ; 00532862
    MOV dword ptr [ESP + 0x160],EBX     ; 00532865
    MOV EBX,dword ptr [ECX + 0x8]       ; 0053286c
    SUB EBX,dword ptr [EDX + 0x8]       ; 0053286f
    MOV EDI,dword ptr [EAX + 0x30]      ; 00532872
    MOV dword ptr [ESP + 0x15c],EBX     ; 00532875
    IMUL EBX,EDI,0xc                    ; 0053287c
    ADD EBX,0x201a474                   ; 0053287f
    MOV EDI,dword ptr [ECX]             ; 00532885
    MOV EDX,dword ptr [EBX]             ; 00532887
    SUB EDX,EDI                         ; 00532889
    FILD dword ptr [ESP + 0x15c]        ; 0053288b
    MOV dword ptr [ESP + 0x15c],EDX     ; 00532892
    MOV EDI,dword ptr [ECX + 0x4]       ; 00532899
    FILD dword ptr [ESP + 0x15c]        ; 0053289c
    MOV EDX,dword ptr [EBX + 0x4]       ; 005328a3
    FST float ptr [ESP + 0xb4]          ; 005328a6
    SUB EDX,EDI                         ; 005328ad
    FMUL ST1                            ; 005328af
    MOV dword ptr [ESP + 0x15c],EDX     ; 005328b1
    MOV EDX,dword ptr [EBX + 0x8]       ; 005328b8
    SUB EDX,dword ptr [ECX + 0x8]       ; 005328bb
    FILD dword ptr [ESP + 0x160]        ; 005328be
    MOV dword ptr [ESP + 0x160],EDX     ; 005328c5
    FST float ptr [ESP + 0xac]          ; 005328cc
    FILD dword ptr [ESP + 0x160]        ; 005328d3
    FSTP float ptr [ESP + 0xbc]         ; 005328da
    FMUL float ptr [ESP + 0xbc]         ; 005328e1
    FILD dword ptr [ESP + 0x158]        ; 005328e8
    FILD dword ptr [ESP + 0x15c]        ; 005328ef
    FLD ST1                             ; 005328f6
    FMUL ST1                            ; 005328f8
    FXCH                                ; 005328fa
    FMULP ST5                           ; 005328fc
    FXCH                                ; 005328fe
    FMUL float ptr [ESP + 0xbc]         ; 00532900
    FXCH ST4                            ; 00532907
    FSUBP ST2,ST0                       ; 00532909
    FLD ST1                             ; 0053290b
    FMUL ST2                            ; 0053290d
    FXCH ST4                            ; 0053290f
    FSUBP ST3,ST0                       ; 00532911
    FLD ST2                             ; 00532913
    FMUL ST3                            ; 00532915
    FLD float ptr [ESP + 0xb4]          ; 00532917
    FMUL float ptr [ESP + 0xac]         ; 0053291e
    FXCH                                ; 00532925
    FADDP ST5,ST0                       ; 00532927
    FSUBP                               ; 00532929
    FLD ST0                             ; 0053292b
    FMUL ST1                            ; 0053292d
    FADDP ST4,ST0                       ; 0053292f
    FXCH ST3                            ; 00532931
    FSTP float ptr [ESP + 0xc0]         ; 00532933
    MOV EDX,dword ptr [ESP + 0xc0]      ; 0053293a
    MOV ECX,dword ptr [0x01caf5b8]      ; 00532941 | DAT_01caf5b8
    SAR EDX,0x1                         ; 00532947
    SUB ECX,EDX                         ; 00532949
    MOV dword ptr [ESP + 0xc4],ECX      ; 0053294b
    FLD float ptr [ESP + 0xc4]          ; 00532952
    FMUL double ptr [0x005e5b2a]        ; 00532959 | DAT_005e5b2a
    FXCH                                ; 0053295f
    FMUL ST1                            ; 00532961
    FXCH ST2                            ; 00532963
    FMUL ST1                            ; 00532965
    FXCH ST3                            ; 00532967
    FMULP                               ; 00532969
    MOV EDI,dword ptr [EBP + 0x28]      ; 0053296b
    FXCH                                ; 0053296e
    FSTP float ptr [EAX + 0x8]          ; 00532970
    FXCH                                ; 00532973
    FSTP float ptr [EAX + 0xc]          ; 00532975
    FSTP float ptr [EAX + 0x10]         ; 00532978
    CMP EDI,0x4                         ; 0053297b
    JNZ 0x00532b5b                      ; 0053297e
        ;   XREF to: 00532b5b (CONDITIONAL_JUMP)  ; LAB_00532b5b
    ADD EAX,0x48                        ; 00532984
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00532987
        ;   Label: LAB_00532987
    INC ESI                             ; 0053298a
    CMP ESI,EDX                         ; 0053298b
    JL 0x0053283a                       ; 0053298d
        ;   XREF to: 0053283a (CONDITIONAL_JUMP)  ; LAB_0053283a
    MOV EDX,dword ptr [EBP + 0x18]      ; 00532993
        ;   Label: LAB_00532993
    LEA EAX,[EDX*0x4 + 0x0]             ; 00532996
    SUB EAX,EDX                         ; 0053299d
    SHL EAX,0x2                         ; 0053299f
    PUSH EAX                            ; 005329a2
    PUSH 0x0                            ; 005329a3
    PUSH 0x2054df4                      ; 005329a5 | DAT_02054df4
    CALL FUN_005b77c0                   ; 005329aa
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 005329af
    XOR EBX,EBX                         ; 005329b2
    MOV ESI,dword ptr [EBP + 0x1c]      ; 005329b4
    MOV ECX,dword ptr [EBP + 0x20]      ; 005329b7
    TEST ESI,ESI                        ; 005329ba
    JLE 0x00532a70                      ; 005329bc
        ;   XREF to: 00532a70 (CONDITIONAL_JUMP)  ; LAB_00532a70
    IMUL EAX,dword ptr [ECX + 0x18],0xc ; 005329c2
        ;   Label: LAB_005329c2
    LEA ESI,[ECX + 0x8]                 ; 005329c6
    ADD EAX,0x2054df4                   ; 005329c9
    FLD float ptr [ESI]                 ; 005329ce
    FADD float ptr [EAX]                ; 005329d0 | DAT_02054df4
    FSTP float ptr [EAX]                ; 005329d2 | DAT_02054df4
    FLD float ptr [ESI + 0x4]           ; 005329d4
    FADD float ptr [EAX + 0x4]          ; 005329d7 | DAT_02054df8
    FSTP float ptr [EAX + 0x4]          ; 005329da | DAT_02054df8
    FLD float ptr [ESI + 0x8]           ; 005329dd
    FADD float ptr [EAX + 0x8]          ; 005329e0 | DAT_02054dfc
    FSTP float ptr [EAX + 0x8]          ; 005329e3 | DAT_02054dfc
    IMUL EAX,dword ptr [ECX + 0x24],0xc ; 005329e6
    ADD EAX,0x2054df4                   ; 005329ea
    FLD float ptr [ESI]                 ; 005329ef
    FADD float ptr [EAX]                ; 005329f1 | DAT_02054df4
    FSTP float ptr [EAX]                ; 005329f3 | DAT_02054df4
    FLD float ptr [ESI + 0x4]           ; 005329f5
    FADD float ptr [EAX + 0x4]          ; 005329f8
    FSTP float ptr [EAX + 0x4]          ; 005329fb
    FLD float ptr [ESI + 0x8]           ; 005329fe
    FADD float ptr [EAX + 0x8]          ; 00532a01
    FSTP float ptr [EAX + 0x8]          ; 00532a04
    IMUL EAX,dword ptr [ECX + 0x30],0xc ; 00532a07
    ADD EAX,0x2054df4                   ; 00532a0b
    FLD float ptr [ESI]                 ; 00532a10
    FADD float ptr [EAX]                ; 00532a12
    FSTP float ptr [EAX]                ; 00532a14
    FLD float ptr [ESI + 0x4]           ; 00532a16
    FADD float ptr [EAX + 0x4]          ; 00532a19
    FSTP float ptr [EAX + 0x4]          ; 00532a1c
    FLD float ptr [ESI + 0x8]           ; 00532a1f
    FADD float ptr [EAX + 0x8]          ; 00532a22
    FSTP float ptr [EAX + 0x8]          ; 00532a25
    CMP dword ptr [ECX + 0x4],0x4       ; 00532a28
    JNZ 0x00532a4f                      ; 00532a2c
        ;   XREF to: 00532a4f (CONDITIONAL_JUMP)  ; LAB_00532a4f
    IMUL EAX,dword ptr [ECX + 0x3c],0xc ; 00532a2e
    ADD EAX,0x2054df4                   ; 00532a32
    FLD float ptr [ESI]                 ; 00532a37
    FADD float ptr [EAX]                ; 00532a39
    FSTP float ptr [EAX]                ; 00532a3b
    FLD float ptr [ESI + 0x4]           ; 00532a3d
    FADD float ptr [EAX + 0x4]          ; 00532a40
    FSTP float ptr [EAX + 0x4]          ; 00532a43
    FLD float ptr [ESI + 0x8]           ; 00532a46
    FADD float ptr [EAX + 0x8]          ; 00532a49
    FSTP float ptr [EAX + 0x8]          ; 00532a4c
    CMP dword ptr [EBP + 0x28],0x4      ; 00532a4f
        ;   Label: LAB_00532a4f
    JNZ 0x00532b63                      ; 00532a53
        ;   XREF to: 00532b63 (CONDITIONAL_JUMP)  ; LAB_00532b63
    ADD ECX,0x48                        ; 00532a59
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00532a5c
        ;   Label: LAB_00532a5c
    INC EBX                             ; 00532a5f
    CMP EBX,EAX                         ; 00532a60
    JL 0x005329c2                       ; 00532a62
        ;   XREF to: 005329c2 (CONDITIONAL_JUMP)  ; LAB_005329c2
    LEA EAX,[EAX]                       ; 00532a68
    MOV EDX,EDX                         ; 00532a6e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532a70
        ;   Label: LAB_00532a70
    MOV EDI,dword ptr [EAX + 0x15ae98]  ; 00532a73
    TEST EDI,EDI                        ; 00532a79
    JZ 0x00532f1b                       ; 00532a7b
        ;   XREF to: 00532f1b (CONDITIONAL_JUMP)  ; LAB_00532f1b
    MOV EDX,dword ptr [EBP + 0x18]      ; 00532a81
    XOR EDI,EDI                         ; 00532a84
    TEST EDX,EDX                        ; 00532a86
    JLE 0x00532250                      ; 00532a88
        ;   XREF to: 00532250 (CONDITIONAL_JUMP)  ; LAB_00532250
    MOV ESI,0x2054df4                   ; 00532a8e
    MOV EAX,0x201a474                   ; 00532a93
    MOV dword ptr [ESP + 0x118],EDI     ; 00532a98
    MOV dword ptr [ESP + 0x140],ESI     ; 00532a9f | DAT_02054df4
    MOV dword ptr [ESP + 0x110],EAX     ; 00532aa6
    MOV ESI,dword ptr [ESP + 0x140]     ; 00532aad
        ;   Label: LAB_00532aad
    FLD float ptr [ESI]                 ; 00532ab4 | DAT_02054df4 | DAT_02054e00
    FABS                                ; 00532ab6
    IMUL EBX,EDI,0xc                    ; 00532ab8
    FLD1                                ; 00532abb
    FCOMPP                              ; 00532abd
    FNSTSW AX                           ; 00532abf
    SAHF                                ; 00532ac1
    JBE 0x00532e90                      ; 00532ac2
        ;   XREF to: 00532e90 (CONDITIONAL_JUMP)  ; LAB_00532e90
    FLD float ptr [ESI + 0x4]           ; 00532ac8 | DAT_02054df8 | DAT_02054e04
    FABS                                ; 00532acb
    FLD1                                ; 00532acd
    FCOMPP                              ; 00532acf
    FNSTSW AX                           ; 00532ad1
    SAHF                                ; 00532ad3
    JBE 0x00532e90                      ; 00532ad4
        ;   XREF to: 00532e90 (CONDITIONAL_JUMP)  ; LAB_00532e90
    FLD float ptr [ESI + 0x8]           ; 00532ada | DAT_02054dfc | DAT_02054e08
    FABS                                ; 00532add
    FLD1                                ; 00532adf
    FCOMPP                              ; 00532ae1
    FNSTSW AX                           ; 00532ae3
    SAHF                                ; 00532ae5
    JBE 0x00532e90                      ; 00532ae6
        ;   XREF to: 00532e90 (CONDITIONAL_JUMP)  ; LAB_00532e90
    PUSH 0x0                            ; 00532aec
    PUSH EDI                            ; 00532aee
    MOV EAX,0x201a474                   ; 00532aef
    PUSH 0x0                            ; 00532af4
    ADD EAX,EBX                         ; 00532af6
    PUSH EAX                            ; 00532af8
    MOV ESI,dword ptr [EBP + 0x14]      ; 00532af9
    PUSH ESI                            ; 00532afc
    CALL FUN_00531460                   ; 00532afd
        ;   XREF to: 00531460 (UNCONDITIONAL_CALL)  ; undefined FUN_00531460()
        ;   Label: LAB_00532afd
    ADD ESP,0x14                        ; 00532b02
    MOV EDX,dword ptr [ESP + 0x118]     ; 00532b05
    MOV ECX,dword ptr [ESP + 0x118]     ; 00532b0c
    MOV EBX,dword ptr [EBP + 0x18]      ; 00532b13
    MOV EAX,[0x01c38aec]                ; 00532b16 | DAT_01c38aec
    INC EDI                             ; 00532b1b
    ADD ECX,0x30                        ; 00532b1c
    MOV dword ptr [EDX + 0x622040],EAX  ; 00532b1f | DAT_00622040 | DAT_00622070
    MOV EAX,dword ptr [ESP + 0x140]     ; 00532b25
    MOV EDX,dword ptr [ESP + 0x110]     ; 00532b2c
    MOV dword ptr [ESP + 0x118],ECX     ; 00532b33
    ADD EAX,0xc                         ; 00532b3a | DAT_02054e00
    ADD EDX,0xc                         ; 00532b3d
    MOV dword ptr [ESP + 0x140],EAX     ; 00532b40 | DAT_02054e00
    MOV dword ptr [ESP + 0x110],EDX     ; 00532b47
    CMP EDI,EBX                         ; 00532b4e
    JGE 0x00532250                      ; 00532b50
        ;   XREF to: 00532250 (CONDITIONAL_JUMP)  ; LAB_00532250
    JMP 0x00532aad                      ; 00532b56
        ;   XREF to: 00532aad (UNCONDITIONAL_JUMP)  ; LAB_00532aad
    ADD EAX,0x3c                        ; 00532b5b
        ;   Label: LAB_00532b5b
    JMP 0x00532987                      ; 00532b5e
        ;   XREF to: 00532987 (UNCONDITIONAL_JUMP)  ; LAB_00532987
    ADD ECX,0x3c                        ; 00532b63
        ;   Label: LAB_00532b63
    JMP 0x00532a5c                      ; 00532b66
        ;   XREF to: 00532a5c (UNCONDITIONAL_JUMP)  ; LAB_00532a5c
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00532b6b
        ;   Label: LAB_00532b6b
    MOV EBX,dword ptr [EBP + 0x20]      ; 00532b6e
    CMP ESI,0xfa0                       ; 00532b71
    JLE 0x00532b9b                      ; 00532b77
        ;   XREF to: 00532b9b (CONDITIONAL_JUMP)  ; LAB_00532b9b
    MOV EDI,0x5e5ab6                    ; 00532b79 | = "..\\core\\set.cpp"
    MOV EAX,0xfb0                       ; 00532b7e
    PUSH 0x5e5ac6                       ; 00532b83 | = "Too many normals on this packed tri list"
    MOV dword ptr [0x01d046a0],EDI      ; 00532b88 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00532b8e | DAT_01d046a4
    CALL FUN_004e4500                   ; 00532b93
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00532b98
    CMP dword ptr [EBP + 0x1c],0xfa0    ; 00532b9b
        ;   Label: LAB_00532b9b
    JLE 0x00532bc7                      ; 00532ba2
        ;   XREF to: 00532bc7 (CONDITIONAL_JUMP)  ; LAB_00532bc7
    MOV ECX,0x5e5aef                    ; 00532ba4 | = "..\\core\\set.cpp"
    MOV ESI,0xfb2                       ; 00532ba9
    PUSH 0x5e5aff                       ; 00532bae | = "Need more normals for packed models"
    MOV dword ptr [0x01d046a0],ECX      ; 00532bb3 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00532bb9 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00532bbf
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00532bc4
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00532bc7
        ;   Label: LAB_00532bc7
    XOR EDI,EDI                         ; 00532bca
    TEST EAX,EAX                        ; 00532bcc
    JLE 0x00532dd8                      ; 00532bce
        ;   XREF to: 00532dd8 (CONDITIONAL_JUMP)  ; LAB_00532dd8
    FLD float ptr [ESP + 0x130]         ; 00532bd4
    FLD float ptr [ESP + 0x134]         ; 00532bdb
    MOV ECX,0x200e8f4                   ; 00532be2
    XOR ESI,ESI                         ; 00532be7
        ;   Label: LAB_00532be7
    MOV SI,word ptr [EBX]               ; 00532be9
    IMUL ESI,ESI,0xc                    ; 00532bec
    XOR EAX,EAX                         ; 00532bef
    XOR EDX,EDX                         ; 00532bf1
    MOV AX,word ptr [EBX + 0x4]         ; 00532bf3
    MOV DX,word ptr [EBX + 0x2]         ; 00532bf7
    MOV dword ptr [ESP + 0xe4],EAX      ; 00532bfb
    IMUL EAX,EDX,0xc                    ; 00532c02
    MOV EDX,0x201a474                   ; 00532c05
    ADD EAX,0x201a474                   ; 00532c0a
    ADD EDX,ESI                         ; 00532c0f
    MOV ESI,dword ptr [EAX]             ; 00532c11
    MOV dword ptr [ESP + 0x154],ESI     ; 00532c13
    MOV ESI,dword ptr [EDX]             ; 00532c1a
    SUB dword ptr [ESP + 0x154],ESI     ; 00532c1c
    MOV ESI,dword ptr [ESP + 0x154]     ; 00532c23
    MOV dword ptr [ESP + 0x154],ESI     ; 00532c2a
    MOV ESI,dword ptr [EAX + 0x4]       ; 00532c31
    MOV dword ptr [ESP + 0x158],ESI     ; 00532c34
    MOV ESI,dword ptr [EDX + 0x4]       ; 00532c3b
    SUB dword ptr [ESP + 0x158],ESI     ; 00532c3e
    MOV ESI,dword ptr [ESP + 0x158]     ; 00532c45
    MOV dword ptr [ESP + 0x160],ESI     ; 00532c4c
    MOV ESI,dword ptr [EAX + 0x8]       ; 00532c53
    MOV EDX,dword ptr [EDX + 0x8]       ; 00532c56
    SUB ESI,EDX                         ; 00532c59
    MOV EDX,dword ptr [ESP + 0xe4]      ; 00532c5b
    MOV dword ptr [ESP + 0x15c],ESI     ; 00532c62
    IMUL ESI,EDX,0xc                    ; 00532c69
    ADD ESI,0x201a474                   ; 00532c6c
    MOV EDX,dword ptr [ESI]             ; 00532c72
    MOV dword ptr [ESP + 0x158],EDX     ; 00532c74
    MOV EDX,dword ptr [EAX]             ; 00532c7b
    SUB dword ptr [ESP + 0x158],EDX     ; 00532c7d
    MOV EDX,dword ptr [ESP + 0x158]     ; 00532c84
    MOV dword ptr [ESP + 0x158],EDX     ; 00532c8b
    FILD dword ptr [ESP + 0x15c]        ; 00532c92
    FILD dword ptr [ESP + 0x158]        ; 00532c99
    MOV EDX,dword ptr [ESI + 0x4]       ; 00532ca0
    FST float ptr [ESP + 0xd4]          ; 00532ca3
    FXCH                                ; 00532caa
    FSTP float ptr [ESP + 0xd0]         ; 00532cac
    FMUL float ptr [ESP + 0xd0]         ; 00532cb3
    MOV dword ptr [ESP + 0x158],EDX     ; 00532cba
    MOV EDX,dword ptr [EAX + 0x4]       ; 00532cc1
    SUB dword ptr [ESP + 0x158],EDX     ; 00532cc4
    MOV EDX,dword ptr [ESP + 0x158]     ; 00532ccb
    MOV dword ptr [ESP + 0x15c],EDX     ; 00532cd2
    MOV EDX,dword ptr [ESI + 0x8]       ; 00532cd9
    MOV ESI,dword ptr [EAX + 0x8]       ; 00532cdc
    MOV EAX,EDX                         ; 00532cdf
    FILD dword ptr [ESP + 0x160]        ; 00532ce1
    SUB EAX,ESI                         ; 00532ce8
    FSTP float ptr [ESP + 0xcc]         ; 00532cea
    MOV dword ptr [ESP + 0x158],EAX     ; 00532cf1
    FLD float ptr [ESP + 0xcc]          ; 00532cf8
    FILD dword ptr [ESP + 0x158]        ; 00532cff
    FSTP float ptr [ESP + 0xdc]         ; 00532d06
    FMUL float ptr [ESP + 0xdc]         ; 00532d0d
    FILD dword ptr [ESP + 0x154]        ; 00532d14
    FILD dword ptr [ESP + 0x15c]        ; 00532d1b
    FLD ST1                             ; 00532d22
    FMUL ST1                            ; 00532d24
    FXCH                                ; 00532d26
    FMUL float ptr [ESP + 0xd0]         ; 00532d28
    FXCH ST2                            ; 00532d2f
    FMUL float ptr [ESP + 0xdc]         ; 00532d31
    FXCH ST2                            ; 00532d38
    FSUBP ST3,ST0                       ; 00532d3a
    FXCH ST2                            ; 00532d3c
    FST ST4                             ; 00532d3e
    FMUL ST4                            ; 00532d40
    FXCH                                ; 00532d42
    FSUBP ST3,ST0                       ; 00532d44
    FXCH ST2                            ; 00532d46
    FST ST4                             ; 00532d48
    FMUL ST4                            ; 00532d4a
    FLD float ptr [ESP + 0xd4]          ; 00532d4c
    FMUL float ptr [ESP + 0xcc]         ; 00532d53
    FXCH                                ; 00532d5a
    FADDP ST3,ST0                       ; 00532d5c
    FSUBP                               ; 00532d5e
    FST float ptr [ESP + 0x12c]         ; 00532d60
    FMUL float ptr [ESP + 0x12c]        ; 00532d67
    FADDP                               ; 00532d6e
    FSTP float ptr [ESP + 0xe8]         ; 00532d70
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00532d77
    MOV EDX,dword ptr [0x01caf5b8]      ; 00532d7e | DAT_01caf5b8
    SAR EAX,0x1                         ; 00532d84
    SUB EDX,EAX                         ; 00532d86
    MOV dword ptr [ESP + 0xec],EDX      ; 00532d88
    FLD float ptr [ESP + 0xec]          ; 00532d8f
    FMUL double ptr [0x005e5b2a]        ; 00532d96 | DAT_005e5b2a
    FLD ST1                             ; 00532d9c
    FMUL ST1                            ; 00532d9e
    FLD ST3                             ; 00532da0
    FMUL ST2                            ; 00532da2
    FLD float ptr [ESP + 0x12c]         ; 00532da4
    FMULP ST3                           ; 00532dab
    ADD EBX,0x12                        ; 00532dad
    ADD ECX,0xc                         ; 00532db0
    INC EDI                             ; 00532db3
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00532db4
    FXCH                                ; 00532db7
    FSTP float ptr [ECX + -0xc]         ; 00532db9 | DAT_0200e8f4
    FSTP float ptr [ECX + -0x8]         ; 00532dbc | DAT_0200e8f8
    FSTP float ptr [ECX + -0x4]         ; 00532dbf | DAT_0200e8fc
    CMP EDI,EAX                         ; 00532dc2
    JL 0x00532be7                       ; 00532dc4
        ;   XREF to: 00532be7 (CONDITIONAL_JUMP)  ; LAB_00532be7
    FSTP float ptr [ESP + 0x134]        ; 00532dca
    FSTP float ptr [ESP + 0x130]        ; 00532dd1
    MOV EDX,dword ptr [EBP + 0x18]      ; 00532dd8
        ;   Label: LAB_00532dd8
    LEA EAX,[EDX*0x4 + 0x0]             ; 00532ddb
    SUB EAX,EDX                         ; 00532de2
    SHL EAX,0x2                         ; 00532de4
    PUSH EAX                            ; 00532de7
    PUSH 0x0                            ; 00532de8
    PUSH 0x2054df4                      ; 00532dea | DAT_02054df4
    CALL FUN_005b77c0                   ; 00532def
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 00532df4
    XOR ESI,ESI                         ; 00532df7
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00532df9
    MOV EBX,dword ptr [EBP + 0x20]      ; 00532dfc
    TEST EDX,EDX                        ; 00532dff
    JLE 0x00532a70                      ; 00532e01
        ;   XREF to: 00532a70 (CONDITIONAL_JUMP)  ; LAB_00532a70
    MOV ECX,0x200e8f4                   ; 00532e07
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00532e0c
    XOR EAX,EAX                         ; 00532e0f
        ;   Label: LAB_00532e0f
    MOV AX,word ptr [EBX]               ; 00532e11
    IMUL EAX,EAX,0xc                    ; 00532e14
    ADD EAX,0x2054df4                   ; 00532e17
    FLD float ptr [ECX]                 ; 00532e1c | DAT_0200e8f4 | DAT_0200e900
    FADD float ptr [EAX]                ; 00532e1e | DAT_02054df4
    FSTP float ptr [EAX]                ; 00532e20 | DAT_02054df4
    FLD float ptr [ECX + 0x4]           ; 00532e22 | DAT_0200e8f8 | DAT_0200e904
    FADD float ptr [EAX + 0x4]          ; 00532e25 | DAT_02054df8
    FSTP float ptr [EAX + 0x4]          ; 00532e28 | DAT_02054df8
    FLD float ptr [ECX + 0x8]           ; 00532e2b | DAT_0200e8fc | DAT_0200e908
    FADD float ptr [EAX + 0x8]          ; 00532e2e | DAT_02054dfc
    FSTP float ptr [EAX + 0x8]          ; 00532e31 | DAT_02054dfc
    XOR EAX,EAX                         ; 00532e34
    MOV AX,word ptr [EBX + 0x2]         ; 00532e36
    IMUL EAX,EAX,0xc                    ; 00532e3a
    ADD EAX,0x2054df4                   ; 00532e3d
    FLD float ptr [ECX]                 ; 00532e42 | DAT_0200e8f4
    FADD float ptr [EAX]                ; 00532e44 | DAT_02054df4
    FSTP float ptr [EAX]                ; 00532e46 | DAT_02054df4
    FLD float ptr [ECX + 0x4]           ; 00532e48 | DAT_0200e8f8
    FADD float ptr [EAX + 0x4]          ; 00532e4b | DAT_02054df8
    FSTP float ptr [EAX + 0x4]          ; 00532e4e | DAT_02054df8
    FLD float ptr [ECX + 0x8]           ; 00532e51 | DAT_0200e8fc
    FADD float ptr [EAX + 0x8]          ; 00532e54 | DAT_02054dfc
    FSTP float ptr [EAX + 0x8]          ; 00532e57 | DAT_02054dfc
    XOR EAX,EAX                         ; 00532e5a
    MOV AX,word ptr [EBX + 0x4]         ; 00532e5c
    IMUL EAX,EAX,0xc                    ; 00532e60
    ADD EAX,0x2054df4                   ; 00532e63
    FLD float ptr [ECX]                 ; 00532e68 | DAT_0200e8f4
    FADD float ptr [EAX]                ; 00532e6a | DAT_02054df4
    ADD EBX,0x12                        ; 00532e6c
    FSTP float ptr [EAX]                ; 00532e6f | DAT_02054df4
    FLD float ptr [ECX + 0x4]           ; 00532e71 | DAT_0200e8f8
    FADD float ptr [EAX + 0x4]          ; 00532e74 | DAT_02054df8
    ADD ECX,0xc                         ; 00532e77
    FSTP float ptr [EAX + 0x4]          ; 00532e7a | DAT_02054df8
    FLD float ptr [ECX + -0x4]          ; 00532e7d | DAT_0200e8fc
    FADD float ptr [EAX + 0x8]          ; 00532e80 | DAT_02054dfc
    INC ESI                             ; 00532e83
    FSTP float ptr [EAX + 0x8]          ; 00532e84 | DAT_02054dfc
    CMP ESI,EDI                         ; 00532e87
    JL 0x00532e0f                       ; 00532e89
        ;   XREF to: 00532e0f (CONDITIONAL_JUMP)  ; LAB_00532e0f
    JMP 0x00532a70                      ; 00532e8b
        ;   XREF to: 00532a70 (UNCONDITIONAL_JUMP)  ; LAB_00532a70
    FLD float ptr [ESI + 0x4]           ; 00532e90 | DAT_02054e04 | DAT_02054df8
        ;   Label: LAB_00532e90
    FMUL ST0                            ; 00532e93
    FLD float ptr [ESI]                 ; 00532e95 | DAT_02054e00 | DAT_02054df4
    FMUL ST0                            ; 00532e97
    FADDP                               ; 00532e99
    FLD float ptr [ESI + 0x8]           ; 00532e9b | DAT_02054e08 | DAT_02054dfc
    FMUL ST0                            ; 00532e9e
    FADDP                               ; 00532ea0
    FSTP float ptr [ESP + 0xf4]         ; 00532ea2
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00532ea9
    MOV EDX,dword ptr [0x01caf5b8]      ; 00532eb0 | DAT_01caf5b8
    SAR EAX,0x1                         ; 00532eb6
    SUB EDX,EAX                         ; 00532eb8
    MOV dword ptr [ESP + 0xf8],EDX      ; 00532eba
    FLD float ptr [ESP + 0xf8]          ; 00532ec1
    FMUL float ptr [0x005e5b32]         ; 00532ec8 | DAT_005e5b32
    FLD float ptr [ESI]                 ; 00532ece | DAT_02054e00 | DAT_02054df4
    FMUL ST1                            ; 00532ed0
    FLD float ptr [ESI + 0x4]           ; 00532ed2 | DAT_02054e04
    FMUL ST2                            ; 00532ed5
    FLD float ptr [ESI + 0x8]           ; 00532ed7 | DAT_02054e08
    FMULP ST3                           ; 00532eda
    LEA EBX,[ESP + 0x90]                ; 00532edc
    MOV EAX,ESI                         ; 00532ee3
    FXCH                                ; 00532ee5
    FSTP float ptr [ESI]                ; 00532ee7 | DAT_02054e00
    FSTP float ptr [ESI + 0x4]          ; 00532ee9 | DAT_02054e04
    FSTP float ptr [ESI + 0x8]          ; 00532eec | DAT_02054e08
    FLD float ptr [EAX]                 ; 00532eef | DAT_02054e00
    FISTP dword ptr [EBX]               ; 00532ef1
    FLD float ptr [EAX + 0x4]           ; 00532ef3 | DAT_02054e04
    FISTP dword ptr [EBX + 0x4]         ; 00532ef6
    FLD float ptr [EAX + 0x8]           ; 00532ef9 | DAT_02054e08
    FISTP dword ptr [EBX + 0x8]         ; 00532efc
    PUSH 0x0                            ; 00532eff
    PUSH EDI                            ; 00532f01
    LEA EAX,[ESP + 0x98]                ; 00532f02
    PUSH EAX                            ; 00532f09
    MOV ECX,dword ptr [ESP + 0x11c]     ; 00532f0a
    PUSH ECX                            ; 00532f11
    MOV EBX,dword ptr [EBP + 0x14]      ; 00532f12
    PUSH EBX                            ; 00532f15
    JMP 0x00532afd                      ; 00532f16
        ;   XREF to: 00532afd (UNCONDITIONAL_JUMP)  ; LAB_00532afd
    CMP dword ptr [EBP + 0x18],0x0      ; 00532f1b
        ;   Label: LAB_00532f1b
    JLE 0x00532250                      ; 00532f1f
        ;   XREF to: 00532250 (CONDITIONAL_JUMP)  ; LAB_00532250
    MOV ESI,0x201a474                   ; 00532f25
    MOV dword ptr [ESP + 0x120],EDI     ; 00532f2a
    MOV dword ptr [ESP + 0x124],ESI     ; 00532f31
    MOV ESI,0x2054df4                   ; 00532f38
    FLD float ptr [ESI + 0x4]           ; 00532f3d | DAT_02054df8 | DAT_02054e04
        ;   Label: LAB_00532f3d
    FMUL ST0                            ; 00532f40
    FLD float ptr [ESI]                 ; 00532f42 | DAT_02054df4 | DAT_02054e00
    FMUL ST0                            ; 00532f44
    FADDP                               ; 00532f46
    FLD float ptr [ESI + 0x8]           ; 00532f48 | DAT_02054dfc | DAT_02054e08
    FMUL ST0                            ; 00532f4b
    FADDP                               ; 00532f4d
    FSTP float ptr [ESP + 0x100]        ; 00532f4f
    MOV EAX,dword ptr [ESP + 0x100]     ; 00532f56
    MOV EDX,dword ptr [0x01caf5b8]      ; 00532f5d | DAT_01caf5b8
    SAR EAX,0x1                         ; 00532f63
    SUB EDX,EAX                         ; 00532f65
    MOV dword ptr [ESP + 0x104],EDX     ; 00532f67
    FLD float ptr [ESP + 0x104]         ; 00532f6e
    FMUL float ptr [0x005e5b32]         ; 00532f75 | DAT_005e5b32
    FLD float ptr [ESI]                 ; 00532f7b | DAT_02054df4 | DAT_02054e00
    FMUL ST1                            ; 00532f7d
    FLD float ptr [ESI + 0x4]           ; 00532f7f | DAT_02054df8
    FMUL ST2                            ; 00532f82
    FLD float ptr [ESI + 0x8]           ; 00532f84 | DAT_02054dfc
    FMULP ST3                           ; 00532f87
    LEA EBX,[ESP + 0x6c]                ; 00532f89
    MOV EAX,ESI                         ; 00532f8d
    FXCH                                ; 00532f8f
    FSTP float ptr [ESI]                ; 00532f91 | DAT_02054df4
    FSTP float ptr [ESI + 0x4]          ; 00532f93 | DAT_02054df8
    FSTP float ptr [ESI + 0x8]          ; 00532f96 | DAT_02054dfc
    FLD float ptr [EAX]                 ; 00532f99 | DAT_02054df4
    FISTP dword ptr [EBX]               ; 00532f9b
    FLD float ptr [EAX + 0x4]           ; 00532f9d | DAT_02054df8
    FISTP dword ptr [EBX + 0x4]         ; 00532fa0
    FLD float ptr [EAX + 0x8]           ; 00532fa3 | DAT_02054dfc
    FISTP dword ptr [EBX + 0x8]         ; 00532fa6
    PUSH 0x0                            ; 00532fa9
    PUSH EDI                            ; 00532fab
    LEA EAX,[ESP + 0x74]                ; 00532fac
    PUSH EAX                            ; 00532fb0
    MOV ECX,dword ptr [ESP + 0x130]     ; 00532fb1
    PUSH ECX                            ; 00532fb8
    MOV EBX,dword ptr [EBP + 0x14]      ; 00532fb9
    PUSH EBX                            ; 00532fbc
    CALL FUN_00531460                   ; 00532fbd
        ;   XREF to: 00531460 (UNCONDITIONAL_CALL)  ; undefined FUN_00531460()
    ADD ESP,0x14                        ; 00532fc2
    MOV EDX,dword ptr [ESP + 0x120]     ; 00532fc5
    MOV EAX,[0x01c38aec]                ; 00532fcc | DAT_01c38aec
    ADD ESI,0xc                         ; 00532fd1
    MOV dword ptr [EDX + 0x622040],EAX  ; 00532fd4 | DAT_00622040
    LEA EAX,[EDX + 0x30]                ; 00532fda
    INC EDI                             ; 00532fdd
    MOV EDX,dword ptr [ESP + 0x124]     ; 00532fde
    MOV ECX,dword ptr [EBP + 0x18]      ; 00532fe5
    ADD EDX,0xc                         ; 00532fe8
    MOV dword ptr [ESP + 0x120],EAX     ; 00532feb
    MOV dword ptr [ESP + 0x124],EDX     ; 00532ff2
    CMP EDI,ECX                         ; 00532ff9
    JL 0x00532f3d                       ; 00532ffb
        ;   XREF to: 00532f3d (CONDITIONAL_JUMP)  ; LAB_00532f3d
    MOV ESP,EBP                         ; 00533001
    POP EBP                             ; 00533003
    POP EDI                             ; 00533004
    POP ESI                             ; 00533005
    POP EBX                             ; 00533006
    RET                                 ; 00533007


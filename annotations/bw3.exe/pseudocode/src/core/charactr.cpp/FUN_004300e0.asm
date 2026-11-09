; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_004300e0(CCharacter *param_1,CVector3f *param_2,float param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x108]:4  local_108
; undefined        Stack[-0x104]:1  local_104
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0xc4]:1  local_c4
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[4]:
;   core_charactr.cpp_FUN_0042e8c0 at 0042ece3
;   core_charactr.cpp_FUN_0042ffe0 at 004300cc
;   core_charactr.cpp_FUN_00430d60 at 00430f8f
;   core_gargoyle.cpp_FUN_004c61b0 at 004c62a6
;
; Referenced Globals:
;   undefined4 DAT_005b839e
;   CGore* g_CGorePtr = 01d22e44
;   undefined4 g_CEnemyClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_0040ce40
;   core_charactr.cpp_FUN_00430520
;   core_dirmat.cpp_FUN_0045b550
;   core_dirmat.cpp_FUN_0045b800
;   core_enemy.cpp_FUN_00489c90
;   core_gore.cpp_FUN_004ce9c0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_vecdir.cpp_FUN_00576250
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004300e0
        ;   Label: core_charactr.cpp_FUN_004300e0
    PUSH ESI                            ; 004300e1
    PUSH EDI                            ; 004300e2
    PUSH EBP                            ; 004300e3
    MOV EBP,ESP                         ; 004300e4
    SUB ESP,0xf4                        ; 004300e6
    AND ESP,0xfffffff8                  ; 004300ec
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004300ef
    MOV EBX,dword ptr [EBP + 0x18]      ; 004300f2
    MOV dword ptr [ESP],EAX             ; 004300f5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004300f8
    MOV EDX,dword ptr [EAX + 0xbc64]    ; 004300fb
    PUSH EDX                            ; 00430101
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 00430102
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 00430107
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043010a
    MOV ESI,dword ptr [EBP + 0x14]      ; 0043010d
    MOV DL,byte ptr [EAX + 0x24a8]      ; 00430110
    ADD ESI,0x158                       ; 00430116
    TEST DL,DL                          ; 0043011c
    JNZ 0x0043025b                      ; 0043011e
        ;   XREF to: 0043025b (CONDITIONAL_JUMP)  ; LAB_0043025b
    MOV EDX,dword ptr [EBP + 0x14]      ; 00430124
        ;   Label: LAB_00430124
    MOV EAX,dword ptr [EBP + 0x14]      ; 00430127
    PUSH EDX                            ; 0043012a
    MOV EAX,dword ptr [EAX + 0x154]     ; 0043012b
    LEA ESI,[ESP + 0x30]                ; 00430131
    LEA EDI,[ESP + 0x48]                ; 00430135
    CALL dword ptr [EAX + 0x1c]         ; 00430139
    MOV ECX,0x6                         ; 0043013c
    LEA ESI,[ESP + 0x30]                ; 00430141
    ADD ESP,0x4                         ; 00430145
    MOVSD.REP ES:EDI,ESI                ; 00430148
    LEA EAX,[ESP + 0x44]                ; 0043014a
    FLD float ptr [ESP + 0x44]          ; 0043014e
    FLD float ptr [ESP + 0x48]          ; 00430152
    FLD float ptr [ESP + 0x4c]          ; 00430156
    LEA EDI,[ESP + 0x8c]                ; 0043015a
    LEA ESI,[ESP + 0xbc]                ; 00430161
    FXCH ST2                            ; 00430168
    FADD float ptr [EAX + 0xc]          ; 0043016a
    FXCH                                ; 0043016d
    FADD float ptr [EAX + 0x10]         ; 0043016f
    FXCH ST2                            ; 00430172
    FADD float ptr [EAX + 0x14]         ; 00430174
    FXCH                                ; 00430177
    FSTP float ptr [ESP + 0xbc]         ; 00430179
    FXCH                                ; 00430180
    FSTP float ptr [ESP + 0xc0]         ; 00430182
    FSTP float ptr [ESP + 0xc4]         ; 00430189
    MOVSD ES:EDI,ESI                    ; 00430190
    MOVSD ES:EDI,ESI                    ; 00430191
    MOVSD ES:EDI,ESI                    ; 00430192
    FLD float ptr [0x005b839e]          ; 00430193 | DAT_005b839e
    FLD float ptr [ESP + 0x8c]          ; 00430199
    FMUL ST1                            ; 004301a0
    FLD float ptr [ESP + 0x90]          ; 004301a2
    FMUL ST2                            ; 004301a9
    FLD float ptr [ESP + 0x94]          ; 004301ab
    FMULP ST3                           ; 004301b2
    LEA EAX,[ESP + 0xc8]                ; 004301b4
    MOV ECX,dword ptr [EBP + 0x14]      ; 004301bb
    PUSH EAX                            ; 004301be
    LEA EDI,[ESP + 0xcc]                ; 004301bf
    LEA ESI,[ESP + 0xd8]                ; 004301c6
    FXCH                                ; 004301cd
    FSTP float ptr [ESP + 0xd8]         ; 004301cf
    FSTP float ptr [ESP + 0xdc]         ; 004301d6
    FSTP float ptr [ESP + 0xe0]         ; 004301dd
    MOVSD ES:EDI,ESI                    ; 004301e4
    MOVSD ES:EDI,ESI                    ; 004301e5
    MOVSD ES:EDI,ESI                    ; 004301e6
    PUSH ECX                            ; 004301e7
    LEA ESI,[ESP + 0x70]                ; 004301e8
    LEA EDI,[ESP + 0x7c]                ; 004301ec
    CALL core_actor.cpp_FUN_00408b80    ; 004301f0
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 004301f5
    LEA ESI,[ESP + 0x68]                ; 004301f8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004301fc
    MOVSD ES:EDI,ESI                    ; 004301ff
    MOVSD ES:EDI,ESI                    ; 00430200
    MOVSD ES:EDI,ESI                    ; 00430201
    CMP dword ptr [EAX + 0xbc68],0x0    ; 00430202
    JNZ 0x00430400                      ; 00430209
        ;   XREF to: 00430400 (CONDITIONAL_JUMP)  ; LAB_00430400
    MOV EDI,dword ptr [EAX + 0x27a0]    ; 0043020f
    PUSH EDI                            ; 00430215
    PUSH 0x64                           ; 00430216
    PUSH EBX                            ; 00430218
    LEA EAX,[ESP + 0x80]                ; 00430219
    PUSH EAX                            ; 00430220
    MOV EAX,[0x005fed24]                ; 00430221 | g_CGorePtr
    PUSH EAX                            ; 00430226
    CALL core_gore.cpp_FUN_004ce9c0     ; 00430227
        ;   XREF to: 004ce9c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004ce9c0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 0043022c
    MOV EDX,dword ptr [0x01c5bc48]      ; 0043022f | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_0043022f
    PUSH EDX                            ; 00430235
    MOV ECX,dword ptr [EBP + 0x14]      ; 00430236
    PUSH ECX                            ; 00430239
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0043023a
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0043023f
    TEST EAX,EAX                        ; 00430242
    JNZ 0x0043040f                      ; 00430244
        ;   XREF to: 0043040f (CONDITIONAL_JUMP)  ; LAB_0043040f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043024a
    MOV dword ptr [EAX + 0x70],0x2      ; 0043024d
    MOV ESP,EBP                         ; 00430254
    POP EBP                             ; 00430256
    POP EDI                             ; 00430257
    POP ESI                             ; 00430258
    POP EBX                             ; 00430259
    RET                                 ; 0043025a
    PUSH ESI                            ; 0043025b
        ;   Label: LAB_0043025b
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0043025c
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00430261
    MOV EAX,dword ptr [EAX + 0xc00]     ; 00430264
    MOV dword ptr [ESP + 0xe8],EAX      ; 0043026a
    CMP EAX,0x1                         ; 00430271
    JLE 0x00430124                      ; 00430274
        ;   XREF to: 00430124 (CONDITIONAL_JUMP)  ; LAB_00430124
    FLD float ptr [ESP]                 ; 0043027a
    FLDZ                                ; 0043027d
    FCOMPP                              ; 0043027f
    FNSTSW AX                           ; 00430281
    SAHF                                ; 00430283
    JA 0x004302e7                       ; 00430284
        ;   XREF to: 004302e7 (CONDITIONAL_JUMP)  ; LAB_004302e7
    XOR ESI,ESI                         ; 00430286
        ;   Label: LAB_00430286
    MOV EDI,dword ptr [ESP + 0xe8]      ; 00430288
    MOV dword ptr [ESP + 0xec],ESI      ; 0043028f
    TEST EDI,EDI                        ; 00430296
    JLE 0x00430124                      ; 00430298
        ;   XREF to: 00430124 (CONDITIONAL_JUMP)  ; LAB_00430124
    TEST EBX,EBX                        ; 0043029e
        ;   Label: LAB_0043029e
    JZ 0x004302ae                       ; 004302a0
        ;   XREF to: 004302ae (CONDITIONAL_JUMP)  ; LAB_004302ae
    FLD float ptr [ESP]                 ; 004302a2
    FLDZ                                ; 004302a5
    FCOMPP                              ; 004302a7
    FNSTSW AX                           ; 004302a9
    SAHF                                ; 004302ab
    JC 0x004302f0                       ; 004302ac
        ;   XREF to: 004302f0 (CONDITIONAL_JUMP)  ; LAB_004302f0
    MOV ECX,dword ptr [EBP + 0x20]      ; 004302ae
        ;   Label: LAB_004302ae
    PUSH ECX                            ; 004302b1
    PUSH EBX                            ; 004302b2
    MOV ESI,dword ptr [ESP + 0xf4]      ; 004302b3
    PUSH ESI                            ; 004302ba
    MOV EDI,dword ptr [EBP + 0x14]      ; 004302bb
    PUSH EDI                            ; 004302be
    CALL core_charactr.cpp_FUN_00430520 ; 004302bf
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00430520(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
        ;   Label: LAB_004302bf
    ADD ESP,0x10                        ; 004302c4
    MOV EAX,dword ptr [ESP + 0xec]      ; 004302c7
    INC EAX                             ; 004302ce
    MOV EDX,dword ptr [ESP + 0xe8]      ; 004302cf
    MOV dword ptr [ESP + 0xec],EAX      ; 004302d6
    CMP EAX,EDX                         ; 004302dd
    JGE 0x00430124                      ; 004302df
        ;   XREF to: 00430124 (CONDITIONAL_JUMP)  ; LAB_00430124
    JMP 0x0043029e                      ; 004302e5
        ;   XREF to: 0043029e (UNCONDITIONAL_JUMP)  ; LAB_0043029e
    MOV dword ptr [ESP],0x41a00000      ; 004302e7
        ;   Label: LAB_004302e7
    JMP 0x00430286                      ; 004302ee
        ;   XREF to: 00430286 (UNCONDITIONAL_JUMP)  ; LAB_00430286
    PUSH EBX                            ; 004302f0
        ;   Label: LAB_004302f0
    LEA ESI,[ESP + 0x9c]                ; 004302f1
    LEA EDI,[ESP + 0x60]                ; 004302f8
    CALL core_vecdir.cpp_FUN_00576250   ; 004302fc
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_00576250()
    ADD ESP,0x4                         ; 00430301
    LEA ESI,[ESP + 0x98]                ; 00430304
    PUSH dword ptr [ESP]                ; 0043030b
    FLD float ptr [ESP + 0x4]           ; 0043030e
    FCHS                                ; 00430312
    FSTP float ptr [ESP + 0xe8]         ; 00430314
    PUSH dword ptr [ESP + 0xe8]         ; 0043031b
    MOVSD ES:EDI,ESI                    ; 00430322
    MOVSD ES:EDI,ESI                    ; 00430323
    MOVSD ES:EDI,ESI                    ; 00430324
    CALL core_actor.cpp_FUN_0040ce40    ; 00430325
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0xf8],EAX      ; 0043032a
    FLD float ptr [ESP + 0xf8]          ; 00430331
    ADD ESP,0x8                         ; 00430338
    PUSH dword ptr [ESP]                ; 0043033b
    FADD float ptr [ESP + 0x64]         ; 0043033e
    PUSH dword ptr [ESP + 0xe8]         ; 00430342
    FSTP float ptr [ESP + 0x68]         ; 00430349
    CALL core_actor.cpp_FUN_0040ce40    ; 0043034d
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0xf8],EAX      ; 00430352
    FLD float ptr [ESP + 0xf8]          ; 00430359
    ADD ESP,0x8                         ; 00430360
    LEA ESI,[ESP + 0x5c]                ; 00430363
    PUSH ESI                            ; 00430367
    LEA ESI,[ESP + 0x8]                 ; 00430368
    FADD float ptr [ESP + 0x60]         ; 0043036c
    PUSH ESI                            ; 00430370
    FSTP float ptr [ESP + 0x64]         ; 00430371
    CALL core_dirmat.cpp_FUN_0045b550   ; 00430375
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    FLD float ptr [EBX + 0x4]           ; 0043037a
    FMUL ST0                            ; 0043037d
    FLD float ptr [EBX]                 ; 0043037f
    FMUL ST0                            ; 00430381
    FADDP                               ; 00430383
    FLD float ptr [EBX + 0x8]           ; 00430385
    FMUL ST0                            ; 00430388
    FADDP                               ; 0043038a
    ADD ESP,0x8                         ; 0043038c
    FSQRT                               ; 0043038f
    LEA ESI,[ESP + 0x80]                ; 00430391
    LEA EDI,[ESP + 0xb0]                ; 00430398
    PUSH ESI                            ; 0043039f
    LEA ESI,[ESP + 0x8]                 ; 004303a0
    XOR ECX,ECX                         ; 004303a4
    PUSH ESI                            ; 004303a6
    LEA ESI,[ESP + 0xac]                ; 004303a7
    MOV dword ptr [ESP + 0x88],ECX      ; 004303ae
    FSTP float ptr [ESP + 0xe8]         ; 004303b5
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004303bc
    MOV dword ptr [ESP + 0x8c],ECX      ; 004303c3
    MOV dword ptr [ESP + 0x90],EAX      ; 004303ca
    CALL core_dirmat.cpp_FUN_0045b800   ; 004303d1
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    LEA ESI,[ESP + 0xac]                ; 004303d6
    ADD ESP,0x8                         ; 004303dd
    MOVSD ES:EDI,ESI                    ; 004303e0
    MOVSD ES:EDI,ESI                    ; 004303e1
    MOVSD ES:EDI,ESI                    ; 004303e2
    MOV EDI,dword ptr [EBP + 0x20]      ; 004303e3
    PUSH EDI                            ; 004303e6
    LEA ESI,[ESP + 0xb4]                ; 004303e7
    PUSH ESI                            ; 004303ee
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004303ef
    PUSH EAX                            ; 004303f6
    MOV EDX,dword ptr [EBP + 0x14]      ; 004303f7
    PUSH EDX                            ; 004303fa
    JMP 0x004302bf                      ; 004303fb
        ;   XREF to: 004302bf (UNCONDITIONAL_JUMP)  ; LAB_004302bf
    MOV dword ptr [EAX + 0x33a0],0x0    ; 00430400
        ;   Label: LAB_00430400
    JMP 0x0043022f                      ; 0043040a
        ;   XREF to: 0043022f (UNCONDITIONAL_JUMP)  ; LAB_0043022f
    PUSH EAX                            ; 0043040f
        ;   Label: LAB_0043040f
    CALL core_enemy.cpp_FUN_00489c90    ; 00430410
        ;   XREF to: 00489c90 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489c90()
    ADD ESP,0x4                         ; 00430415
    MOV EAX,dword ptr [EBP + 0x14]      ; 00430418
    MOV dword ptr [EAX + 0x70],0x2      ; 0043041b
    MOV ESP,EBP                         ; 00430422
    POP EBP                             ; 00430424
    POP EDI                             ; 00430425
    POP ESI                             ; 00430426
    POP EBX                             ; 00430427
    RET                                 ; 00430428


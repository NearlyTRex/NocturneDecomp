; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_CScript_step_FUN_004ff2c0(CScript *this_ptr,float *time_remaining)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; float *          Stack[0x8]:4   time_remaining
; Local Variables:
; undefined4       Stack[-0x3fb8]:4  local_3fb8
; undefined4       Stack[-0x3fb4]:4  local_3fb4
; undefined4       Stack[-0x3fb0]:4  local_3fb0
; undefined4       Stack[-0x3fac]:4  local_3fac
; undefined8       Stack[-0x3fa8]:8  local_3fa8
; undefined8       Stack[-0x3fa0]:8  local_3fa0
; undefined8       Stack[-0x3f98]:8  local_3f98
; undefined8       Stack[-0x3f90]:8  local_3f90
; undefined8       Stack[-0x3f88]:8  local_3f88
; undefined4       Stack[-0x3f80]:4  local_3f80
; undefined4       Stack[-0x3f7c]:4  local_3f7c
; undefined4       Stack[-0x3f78]:4  local_3f78
; undefined4       Stack[-0x3f74]:4  local_3f74
; undefined4       Stack[-0x3f70]:4  local_3f70
; undefined        Stack[-0x3f6c]:1  local_3f6c
; undefined        Stack[-0x3d6c]:1  local_3d6c
; undefined        Stack[-0x3b6c]:1  local_3b6c
; undefined        Stack[-0x3978]:1  local_3978
; undefined        Stack[-0x3784]:1  local_3784
; undefined        Stack[-0x3658]:1  local_3658
; undefined        Stack[-0x352c]:1  local_352c
; undefined        Stack[-0x3400]:1  local_3400
; undefined        Stack[-0x32d4]:1  local_32d4
; undefined        Stack[-0x320c]:1  local_320c
; undefined        Stack[-0x3144]:1  local_3144
; undefined        Stack[-0x307c]:1  local_307c
; undefined        Stack[-0x2fb4]:1  local_2fb4
; undefined        Stack[-0x2eec]:1  local_2eec
; undefined        Stack[-0x2e24]:1  local_2e24
; undefined        Stack[-0x2d5c]:1  local_2d5c
; undefined        Stack[-0x2c94]:1  local_2c94
; undefined        Stack[-0x2bcc]:1  local_2bcc
; undefined        Stack[-0x2b04]:1  local_2b04
; undefined        Stack[-0x2a3c]:1  local_2a3c
; undefined        Stack[-0x2974]:1  local_2974
; undefined        Stack[-0x28ac]:1  local_28ac
; undefined        Stack[-0x27e4]:1  local_27e4
; undefined        Stack[-0x271c]:1  local_271c
; undefined        Stack[-0x2654]:1  local_2654
; undefined        Stack[-0x258c]:1  local_258c
; undefined        Stack[-0x24c4]:1  local_24c4
; undefined        Stack[-0x23fc]:1  local_23fc
; undefined        Stack[-0x2334]:1  local_2334
; undefined        Stack[-0x226c]:1  local_226c
; undefined        Stack[-0x21a4]:1  local_21a4
; undefined        Stack[-0x20dc]:1  local_20dc
; undefined        Stack[-0x2014]:1  local_2014
; undefined        Stack[-0x1f4c]:1  local_1f4c
; undefined        Stack[-0x1e84]:1  local_1e84
; undefined        Stack[-0x1dbc]:1  local_1dbc
; undefined        Stack[-0x1cf4]:1  local_1cf4
; undefined        Stack[-0x1c2c]:1  local_1c2c
; undefined        Stack[-0x1b64]:1  local_1b64
; undefined        Stack[-0x1a9c]:1  local_1a9c
; undefined        Stack[-0x19d4]:1  local_19d4
; undefined        Stack[-0x190c]:1  local_190c
; undefined        Stack[-0x1844]:1  local_1844
; undefined        Stack[-0x177c]:1  local_177c
; undefined        Stack[-0x16b4]:1  local_16b4
; undefined        Stack[-0x15ec]:1  local_15ec
; undefined        Stack[-0x1524]:1  local_1524
; undefined        Stack[-0x145c]:1  local_145c
; undefined        Stack[-0x1394]:1  local_1394
; undefined        Stack[-0x12cc]:1  local_12cc
; undefined        Stack[-0x1204]:1  local_1204
; undefined        Stack[-0x113c]:1  local_113c
; undefined        Stack[-0x1074]:1  local_1074
; undefined        Stack[-0xfac]:1  local_fac
; undefined        Stack[-0xee4]:1  local_ee4
; undefined1       Stack[-0xee3]:1  local_ee3
; undefined        Stack[-0xe1c]:1  local_e1c
; undefined        Stack[-0xd54]:1  local_d54
; undefined        Stack[-0xc8c]:1  local_c8c
; undefined        Stack[-0xc14]:1  local_c14
; undefined        Stack[-0xbb0]:1  local_bb0
; undefined        Stack[-0xb4c]:1  local_b4c
; undefined        Stack[-0xae8]:1  local_ae8
; undefined        Stack[-0xa84]:1  local_a84
; undefined        Stack[-0xa20]:1  local_a20
; undefined        Stack[-0x9bc]:1  local_9bc
; undefined        Stack[-0x958]:1  local_958
; undefined        Stack[-0x8f4]:1  local_8f4
; undefined        Stack[-0x890]:1  local_890
; undefined        Stack[-0x82c]:1  local_82c
; undefined        Stack[-0x7c8]:1  local_7c8
; undefined        Stack[-0x764]:1  local_764
; undefined        Stack[-0x700]:1  local_700
; undefined        Stack[-0x69c]:1  local_69c
; undefined        Stack[-0x638]:1  local_638
; undefined        Stack[-0x5d4]:1  local_5d4
; undefined        Stack[-0x570]:1  local_570
; undefined1       Stack[-0x56f]:1  local_56f
; undefined        Stack[-0x50c]:1  local_50c
; undefined        Stack[-0x4a8]:1  local_4a8
; undefined        Stack[-0x444]:1  local_444
; undefined1       Stack[-0x443]:1  local_443
; undefined        Stack[-0x3e0]:1  local_3e0
; undefined        Stack[-0x37c]:1  local_37c
; undefined        Stack[-0x318]:1  local_318
; undefined        Stack[-0x2b4]:1  local_2b4
; undefined        Stack[-0x250]:1  local_250
; undefined        Stack[-0x1ec]:1  local_1ec
; undefined        Stack[-0x188]:1  local_188
; undefined        Stack[-0x160]:1  local_160
; undefined        Stack[-0x154]:1  local_154
; undefined        Stack[-0x148]:1  local_148
; undefined        Stack[-0x144]:1  local_144
; undefined        Stack[-0x140]:1  local_140
; undefined        Stack[-0x13c]:1  local_13c
; undefined        Stack[-0x130]:1  local_130
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined        Stack[-0x100]:1  local_100
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
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
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
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_script.cpp_CScript_executeInitSection_FUN_004ff170 at 004ff1e6
;   core_script.cpp_CScript_process_FUN_004fe5b0 at 004fe661
;   core_script.cpp_FUN_004fef60 at 004fefa5
;   core_script.cpp_FUN_00504d90 at 00504ded
;
; Referenced Globals:
;   TerminatedCString s_core_script_cpp_0058e489
;   TerminatedCString s_CScript_step_Invalid_ins_0058e49c
;   TerminatedCString s_no_error_message_provide_0058e536
;   undefined4 s_no_error_message_provide_0058e536+1
;   undefined4 s_no_error_message_provide_0058e536+2
;   undefined4 s_no_error_message_provide_0058e536+3
;   char CHAR_00h_0058e552 = \x00
;   TerminatedCString s_Invalid_label_s_on_line_0058e553
;   TerminatedCString s_core_script_cpp_0058e56e
;   TerminatedCString s_Internal_script_error_ch_0058e581
;   TerminatedCString s_Duplicate_label_s_on_lin_0058e5b5
;   char CHAR_00h_0058e5db = \x00
;   TerminatedCString s_syntaxCheckOn_0058e5dc
;   char CHAR_00h_0058e5ea = \x00
;   TerminatedCString s_syntaxCheckOff_0058e5eb
;   ... and 312 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;   core_actor.cpp_copyVector_FUN_0040e180
;   core_actor.cpp_CVector_ctor_FUN_0040e160
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40
;   core_bodypart.cpp_createBodyPart_FUN_00415b30
;   core_bodypart.cpp_subtractVector_FUN_00417f90
;   core_bugs.cpp_getDeformableModelName_FUN_00423d30
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
;   core_charactr.cpp_CCharacter_initGesture_FUN_00429520
;   core_charactr.cpp_CCharacter_setLookAtTarget_FUN_00429f60
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   ... and 66 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ff2c0
        ;   Label: core_script.cpp_CScript_step_FUN_004ff2c0
    PUSH ESI                            ; 004ff2c1
    PUSH EDI                            ; 004ff2c2
    PUSH EBP                            ; 004ff2c3
    MOV EBP,ESP                         ; 004ff2c4
    SUB ESP,0x3f98                      ; 004ff2c6
    AND ESP,0xfffffff8                  ; 004ff2cc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ff2cf
    MOV EDX,dword ptr [EBX + 0x40]      ; 004ff2d2
    TEST EDX,EDX                        ; 004ff2d5
    JL 0x004ff2de                       ; 004ff2d7
        ;   XREF to: 004ff2de (CONDITIONAL_JUMP)  ; LAB_004ff2de
    CMP EDX,dword ptr [EBX + 0x28]      ; 004ff2d9
    JL 0x004ff301                       ; 004ff2dc
        ;   XREF to: 004ff301 (CONDITIONAL_JUMP)  ; LAB_004ff301
    MOV ESI,0x58e489                    ; 004ff2de | = "..\\core\\script.cpp"
        ;   Label: LAB_004ff2de
    MOV EDI,0x46d                       ; 004ff2e3
    PUSH 0x58e49c                       ; 004ff2e8 | = "CScript::step - Invalid instruction p..."
    MOV dword ptr [0x01cc4800],ESI      ; 004ff2ed | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004ff2f3 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004ff2f9
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004ff2fe
    MOV ESI,0x58e536                    ; 004ff301 | = "(no error message provided)"
        ;   Label: LAB_004ff301
    MOV EDI,0x1e56420                   ; 004ff306
    PUSH EDI                            ; 004ff30b | DAT_01e56420
    MOV AL,byte ptr [ESI]               ; 004ff30c | = "(no error message provided)" | s_no_error_message_provide_0058e536+2
        ;   Label: LAB_004ff30c
    MOV byte ptr [EDI],AL               ; 004ff30e | DAT_01e56420 | DAT_01e56422
    CMP AL,0x0                          ; 004ff310
    JZ 0x004ff324                       ; 004ff312
        ;   XREF to: 004ff324 (CONDITIONAL_JUMP)  ; LAB_004ff324
    MOV AL,byte ptr [ESI + 0x1]         ; 004ff314 | s_no_error_message_provide_0058e536+1 | s_no_error_message_provide_0058e536+3
    ADD ESI,0x2                         ; 004ff317
    MOV byte ptr [EDI + 0x1],AL         ; 004ff31a | DAT_01e56421 | DAT_01e56423
    ADD EDI,0x2                         ; 004ff31d
    CMP AL,0x0                          ; 004ff320
    JNZ 0x004ff30c                      ; 004ff322
        ;   XREF to: 004ff30c (CONDITIONAL_JUMP)  ; LAB_004ff30c
    POP EDI                             ; 004ff324
        ;   Label: LAB_004ff324
    MOV EAX,dword ptr [EBX + 0x40]      ; 004ff325
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004ff328
    MOV ESI,dword ptr [EDX + EAX*0x8 + 0x4] ; 004ff32b
    MOV EAX,dword ptr [EDX + EAX*0x8]   ; 004ff32f
    MOV dword ptr [ESP + 0x3e8c],EAX    ; 004ff332
    MOV EAX,dword ptr [EBX + 0x40]      ; 004ff339
    MOV dword ptr [ESP + 0x3e94],EAX    ; 004ff33c
    MOV dword ptr [ESP + 0x3e84],0x1    ; 004ff343
    MOV EAX,dword ptr [ESP + 0x3e94]    ; 004ff34e
    INC EAX                             ; 004ff355
    MOV dword ptr [EBX + 0x40],EAX      ; 004ff356
    MOV AH,byte ptr [ESI]               ; 004ff359
    CMP AH,0x7b                         ; 004ff35b
    JNZ 0x004ff3c6                      ; 004ff35e
        ;   XREF to: 004ff3c6 (CONDITIONAL_JUMP)  ; LAB_004ff3c6
    MOV dword ptr [ESP + 0x3e90],0x58e552 ; 004ff360 | CHAR_00h_0058e552
        ;   Label: LAB_004ff360
    CMP dword ptr [0x01e56418],0x2      ; 004ff36b | DAT_01e56418
        ;   Label: LAB_004ff36b
    JZ 0x004ff384                       ; 004ff372
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    MOV EAX,dword ptr [ESP + 0x3e90]    ; 004ff374
    CMP byte ptr [EAX],0x0              ; 004ff37b | CHAR_00h_0058e552 | CHAR_00h_0058e5db | CHAR_00h_0058ee1f
    JNZ 0x0050492d                      ; 004ff37e
        ;   XREF to: 0050492d (CONDITIONAL_JUMP)  ; LAB_0050492d
    MOV EAX,dword ptr [ESP + 0x3e84]    ; 004ff384
        ;   Label: LAB_004ff384
    CMP EAX,0x1                         ; 004ff38b
    JNZ 0x0050498e                      ; 004ff38e
        ;   XREF to: 0050498e (CONDITIONAL_JUMP)  ; LAB_0050498e
    MOV dword ptr [EBX + 0x48],0xbf800000 ; 004ff394
    MOV ECX,dword ptr [0x01e56418]      ; 004ff39b | DAT_01e56418
    MOV dword ptr [EBX + 0x44],0xbf800000 ; 004ff3a1
    TEST ECX,ECX                        ; 004ff3a8
    JNZ 0x004ff3b8                      ; 004ff3aa
        ;   XREF to: 004ff3b8 (CONDITIONAL_JUMP)  ; LAB_004ff3b8
    MOV ESI,dword ptr [EBX + 0x28]      ; 004ff3ac
    CMP ESI,dword ptr [EBX + 0x40]      ; 004ff3af
    JLE 0x00504962                      ; 004ff3b2
        ;   XREF to: 00504962 (CONDITIONAL_JUMP)  ; LAB_00504962
    MOV EAX,dword ptr [ESP + 0x3e84]    ; 004ff3b8
        ;   Label: LAB_004ff3b8
    MOV ESP,EBP                         ; 004ff3bf
    POP EBP                             ; 004ff3c1
    POP EDI                             ; 004ff3c2
    POP ESI                             ; 004ff3c3
    POP EBX                             ; 004ff3c4
    RET                                 ; 004ff3c5
    CMP AH,0x7d                         ; 004ff3c6
        ;   Label: LAB_004ff3c6
    JZ 0x004ff360                       ; 004ff3c9
        ;   XREF to: 004ff360 (CONDITIONAL_JUMP)  ; LAB_004ff360
    CMP AH,0x3a                         ; 004ff3cb
    JNZ 0x004ff4df                      ; 004ff3ce
        ;   XREF to: 004ff4df (CONDITIONAL_JUMP)  ; LAB_004ff4df
    INC ESI                             ; 004ff3d4
    PUSH ESI                            ; 004ff3d5
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 004ff3d6
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    MOV ESI,dword ptr [0x01e56418]      ; 004ff3db | DAT_01e56418
    ADD ESP,0x4                         ; 004ff3e1
    MOV EDX,EAX                         ; 004ff3e4
    MOV dword ptr [ESP + 0x3e90],EAX    ; 004ff3e6
    TEST ESI,ESI                        ; 004ff3ed
    JZ 0x004ff47c                       ; 004ff3ef
        ;   XREF to: 004ff47c (CONDITIONAL_JUMP)  ; LAB_004ff47c
    CMP byte ptr [EAX],0x0              ; 004ff3f5
    JZ 0x004ff415                       ; 004ff3f8
        ;   XREF to: 004ff415 (CONDITIONAL_JUMP)  ; LAB_004ff415
    MOV DL,byte ptr [EAX]               ; 004ff3fa
        ;   Label: LAB_004ff3fa
    INC DL                              ; 004ff3fc
    AND EDX,0xff                        ; 004ff3fe
    TEST byte ptr [EDX + 0x5c168c],0xe0 ; 004ff404 | DAT_005c168c
    JZ 0x004ff455                       ; 004ff40b
        ;   XREF to: 004ff455 (CONDITIONAL_JUMP)  ; LAB_004ff455
    MOV DL,byte ptr [EAX + 0x1]         ; 004ff40d
        ;   Label: LAB_004ff40d
    INC EAX                             ; 004ff410
    TEST DL,DL                          ; 004ff411
    JNZ 0x004ff3fa                      ; 004ff413
        ;   XREF to: 004ff3fa (CONDITIONAL_JUMP)  ; LAB_004ff3fa
    CMP byte ptr [EAX],0x0              ; 004ff415
        ;   Label: LAB_004ff415
    JZ 0x004ff45c                       ; 004ff418
        ;   XREF to: 004ff45c (CONDITIONAL_JUMP)  ; LAB_004ff45c
    MOV ESI,dword ptr [ESP + 0x3e8c]    ; 004ff41a
    PUSH ESI                            ; 004ff421
    MOV EDI,dword ptr [ESP + 0x3e94]    ; 004ff422
    PUSH EDI                            ; 004ff429
    PUSH 0x58e553                       ; 004ff42a | = "Invalid label \"%s\" on line"
    PUSH 0x1e56420                      ; 004ff42f | DAT_01e56420
        ;   Label: LAB_004ff42f
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004ff434
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 004ff439
    MOV dword ptr [ESP + 0x3e84],0xffffffff ; 004ff43c
        ;   Label: LAB_004ff43c
    MOV EAX,dword ptr [ESP + 0x3e84]    ; 004ff447
    MOV ESP,EBP                         ; 004ff44e
    POP EBP                             ; 004ff450
    POP EDI                             ; 004ff451
    POP ESI                             ; 004ff452
    POP EBX                             ; 004ff453
    RET                                 ; 004ff454
    CMP byte ptr [EAX],0x5f             ; 004ff455
        ;   Label: LAB_004ff455
    JNZ 0x004ff415                      ; 004ff458
        ;   XREF to: 004ff415 (CONDITIONAL_JUMP)  ; LAB_004ff415
    JMP 0x004ff40d                      ; 004ff45a
        ;   XREF to: 004ff40d (UNCONDITIONAL_JUMP)  ; LAB_004ff40d
    MOV EAX,dword ptr [ESP + 0x3e90]    ; 004ff45c
        ;   Label: LAB_004ff45c
    PUSH EAX                            ; 004ff463
    PUSH EBX                            ; 004ff464
    CALL core_script.cpp_CScript_findLabelIndex_FUN_00504c10 ; 004ff465
        ;   XREF to: 00504c10 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_findLabelIndex_FUN_00504c10(CScript * this_ptr, char * label_name)
    ADD ESP,0x8                         ; 004ff46a
    MOV ESI,EAX                         ; 004ff46d
    TEST EAX,EAX                        ; 004ff46f
    JL 0x004ff48c                       ; 004ff471
        ;   XREF to: 004ff48c (CONDITIONAL_JUMP)  ; LAB_004ff48c
    CMP ESI,dword ptr [ESP + 0x3e94]    ; 004ff473
        ;   Label: LAB_004ff473
    JNZ 0x004ff4b1                      ; 004ff47a
        ;   XREF to: 004ff4b1 (CONDITIONAL_JUMP)  ; LAB_004ff4b1
    MOV dword ptr [ESP + 0x3e90],0x58e5db ; 004ff47c | CHAR_00h_0058e5db
        ;   Label: LAB_004ff47c
    JMP 0x004ff36b                      ; 004ff487
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV EDX,0x58e56e                    ; 004ff48c | = "..\\core\\script.cpp"
        ;   Label: LAB_004ff48c
    MOV ECX,0x49f                       ; 004ff491
    PUSH 0x58e581                       ; 004ff496 | = "Internal script error checking for du..."
    MOV dword ptr [0x01cc4800],EDX      ; 004ff49b | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004ff4a1 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004ff4a7
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004ff4ac
    JMP 0x004ff473                      ; 004ff4af
        ;   XREF to: 004ff473 (UNCONDITIONAL_JUMP)  ; LAB_004ff473
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004ff4b1
        ;   Label: LAB_004ff4b1
    MOV EDX,dword ptr [EAX + ESI*0x8]   ; 004ff4b4
    PUSH EDX                            ; 004ff4b7
    MOV ECX,dword ptr [ESP + 0x3e90]    ; 004ff4b8
    PUSH ECX                            ; 004ff4bf
    MOV EBX,dword ptr [ESP + 0x3e98]    ; 004ff4c0
    PUSH EBX                            ; 004ff4c7
    PUSH 0x58e5b5                       ; 004ff4c8 | = "Duplicate label %s on lines %d and %d"
    PUSH 0x1e56420                      ; 004ff4cd | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004ff4d2
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x14                        ; 004ff4d7
    JMP 0x004ff43c                      ; 004ff4da
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    PUSH 0xd                            ; 004ff4df
        ;   Label: LAB_004ff4df
    PUSH 0x58e5dc                       ; 004ff4e1 | = "syntaxCheckOn"
    PUSH ESI                            ; 004ff4e6
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff4e7
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff4ec
    TEST EAX,EAX                        ; 004ff4ef
    JNZ 0x004ff50a                      ; 004ff4f1
        ;   XREF to: 004ff50a (CONDITIONAL_JUMP)  ; LAB_004ff50a
    MOV AL,byte ptr [ESI + 0xd]         ; 004ff4f3
    INC AL                              ; 004ff4f6
    AND EAX,0xff                        ; 004ff4f8
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff4fd | DAT_005c168c
    JZ 0x005005cb                       ; 004ff504
        ;   XREF to: 005005cb (CONDITIONAL_JUMP)  ; LAB_005005cb
    PUSH 0xe                            ; 004ff50a
        ;   Label: LAB_004ff50a
    PUSH 0x58e5eb                       ; 004ff50c | = "syntaxCheckOff"
    PUSH ESI                            ; 004ff511
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff512
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff517
    TEST EAX,EAX                        ; 004ff51a
    JNZ 0x004ff535                      ; 004ff51c
        ;   XREF to: 004ff535 (CONDITIONAL_JUMP)  ; LAB_004ff535
    MOV AL,byte ptr [ESI + 0xe]         ; 004ff51e
    INC AL                              ; 004ff521
    AND EAX,0xff                        ; 004ff523
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff528 | DAT_005c168c
    JZ 0x005005ee                       ; 004ff52f
        ;   XREF to: 005005ee (CONDITIONAL_JUMP)  ; LAB_005005ee
    CMP dword ptr [0x01e56418],0x2      ; 004ff535 | DAT_01e56418
        ;   Label: LAB_004ff535
    JZ 0x004ff36b                       ; 004ff53c
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH 0x12                           ; 004ff542
    PUSH 0x58e5fb                       ; 004ff544 | = "advanceLightFilter"
    PUSH ESI                            ; 004ff549
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff54a
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff54f
    TEST EAX,EAX                        ; 004ff552
    JNZ 0x004ff56d                      ; 004ff554
        ;   XREF to: 004ff56d (CONDITIONAL_JUMP)  ; LAB_004ff56d
    MOV AL,byte ptr [ESI + 0x12]        ; 004ff556
    INC AL                              ; 004ff559
    AND EAX,0xff                        ; 004ff55b
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff560 | DAT_005c168c
    JZ 0x00500611                       ; 004ff567
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0xf                            ; 004ff56d
        ;   Label: LAB_004ff56d
    PUSH 0x58e60e                       ; 004ff56f | = "createExplosion"
    PUSH ESI                            ; 004ff574
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff575
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff57a
    TEST EAX,EAX                        ; 004ff57d
    JNZ 0x004ff598                      ; 004ff57f
        ;   XREF to: 004ff598 (CONDITIONAL_JUMP)  ; LAB_004ff598
    MOV AL,byte ptr [ESI + 0xf]         ; 004ff581
    INC AL                              ; 004ff584
    AND EAX,0xff                        ; 004ff586
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff58b | DAT_005c168c
    JZ 0x00500611                       ; 004ff592
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0xb                            ; 004ff598
        ;   Label: LAB_004ff598
    PUSH 0x58e61e                       ; 004ff59a | = "deleteActor"
    PUSH ESI                            ; 004ff59f
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff5a0
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff5a5
    TEST EAX,EAX                        ; 004ff5a8
    JNZ 0x004ff5c3                      ; 004ff5aa
        ;   XREF to: 004ff5c3 (CONDITIONAL_JUMP)  ; LAB_004ff5c3
    MOV AL,byte ptr [ESI + 0xb]         ; 004ff5ac
    INC AL                              ; 004ff5af
    AND EAX,0xff                        ; 004ff5b1
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff5b6 | DAT_005c168c
    JZ 0x00500611                       ; 004ff5bd
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0xd                            ; 004ff5c3
        ;   Label: LAB_004ff5c3
    PUSH 0x58e62a                       ; 004ff5c5 | = "displayBitmap"
    PUSH ESI                            ; 004ff5ca
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff5cb
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff5d0
    TEST EAX,EAX                        ; 004ff5d3
    JNZ 0x004ff5ee                      ; 004ff5d5
        ;   XREF to: 004ff5ee (CONDITIONAL_JUMP)  ; LAB_004ff5ee
    MOV AL,byte ptr [ESI + 0xd]         ; 004ff5d7
    INC AL                              ; 004ff5da
    AND EAX,0xff                        ; 004ff5dc
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff5e1 | DAT_005c168c
    JZ 0x00500611                       ; 004ff5e8
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0xd                            ; 004ff5ee
        ;   Label: LAB_004ff5ee
    PUSH 0x58e638                       ; 004ff5f0 | = "hurtCharacter"
    PUSH ESI                            ; 004ff5f5
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff5f6
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff5fb
    TEST EAX,EAX                        ; 004ff5fe
    JNZ 0x004ff619                      ; 004ff600
        ;   XREF to: 004ff619 (CONDITIONAL_JUMP)  ; LAB_004ff619
    MOV AL,byte ptr [ESI + 0xd]         ; 004ff602
    INC AL                              ; 004ff605
    AND EAX,0xff                        ; 004ff607
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff60c | DAT_005c168c
    JZ 0x00500611                       ; 004ff613
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0xa                            ; 004ff619
        ;   Label: LAB_004ff619
    PUSH 0x58e646                       ; 004ff61b | = "incCounter"
    PUSH ESI                            ; 004ff620
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff621
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff626
    TEST EAX,EAX                        ; 004ff629
    JNZ 0x004ff644                      ; 004ff62b
        ;   XREF to: 004ff644 (CONDITIONAL_JUMP)  ; LAB_004ff644
    MOV AL,byte ptr [ESI + 0xa]         ; 004ff62d
    INC AL                              ; 004ff630
    AND EAX,0xff                        ; 004ff632
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff637 | DAT_005c168c
    JZ 0x00500611                       ; 004ff63e
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0x7                            ; 004ff644
        ;   Label: LAB_004ff644
    PUSH 0x58e651                       ; 004ff646 | = "fadeSfx"
    PUSH ESI                            ; 004ff64b
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff64c
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff651
    TEST EAX,EAX                        ; 004ff654
    JNZ 0x004ff66f                      ; 004ff656
        ;   XREF to: 004ff66f (CONDITIONAL_JUMP)  ; LAB_004ff66f
    MOV AL,byte ptr [ESI + 0x7]         ; 004ff658
    INC AL                              ; 004ff65b
    AND EAX,0xff                        ; 004ff65d
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff662 | DAT_005c168c
    JZ 0x00500611                       ; 004ff669
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0x10                           ; 004ff66f
        ;   Label: LAB_004ff66f
    PUSH 0x58e659                       ; 004ff671 | = "fadeAmbientSound"
    PUSH ESI                            ; 004ff676
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff677
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff67c
    TEST EAX,EAX                        ; 004ff67f
    JNZ 0x004ff69a                      ; 004ff681
        ;   XREF to: 004ff69a (CONDITIONAL_JUMP)  ; LAB_004ff69a
    MOV AL,byte ptr [ESI + 0x10]        ; 004ff683
    INC AL                              ; 004ff686
    AND EAX,0xff                        ; 004ff688
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff68d | DAT_005c168c
    JZ 0x00500611                       ; 004ff694
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0x6                            ; 004ff69a
        ;   Label: LAB_004ff69a
    PUSH 0x58e66a                       ; 004ff69c | = "flagOn"
    PUSH ESI                            ; 004ff6a1
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff6a2
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff6a7
    TEST EAX,EAX                        ; 004ff6aa
    JNZ 0x004ff6c5                      ; 004ff6ac
        ;   XREF to: 004ff6c5 (CONDITIONAL_JUMP)  ; LAB_004ff6c5
    MOV AL,byte ptr [ESI + 0x6]         ; 004ff6ae
    INC AL                              ; 004ff6b1
    AND EAX,0xff                        ; 004ff6b3
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff6b8 | DAT_005c168c
    JZ 0x00500611                       ; 004ff6bf
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0x7                            ; 004ff6c5
        ;   Label: LAB_004ff6c5
    PUSH 0x58e671                       ; 004ff6c7 | = "flagOff"
    PUSH ESI                            ; 004ff6cc
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff6cd
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff6d2
    TEST EAX,EAX                        ; 004ff6d5
    JNZ 0x004ff6f0                      ; 004ff6d7
        ;   XREF to: 004ff6f0 (CONDITIONAL_JUMP)  ; LAB_004ff6f0
    MOV AL,byte ptr [ESI + 0x7]         ; 004ff6d9
    INC AL                              ; 004ff6dc
    AND EAX,0xff                        ; 004ff6de
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff6e3 | DAT_005c168c
    JZ 0x00500611                       ; 004ff6ea
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0xa                            ; 004ff6f0
        ;   Label: LAB_004ff6f0
    PUSH 0x58e679                       ; 004ff6f2 | = "gameFlagOn"
    PUSH ESI                            ; 004ff6f7
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff6f8
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff6fd
    TEST EAX,EAX                        ; 004ff700
    JNZ 0x004ff71b                      ; 004ff702
        ;   XREF to: 004ff71b (CONDITIONAL_JUMP)  ; LAB_004ff71b
    MOV AL,byte ptr [ESI + 0xa]         ; 004ff704
    INC AL                              ; 004ff707
    AND EAX,0xff                        ; 004ff709
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff70e | DAT_005c168c
    JZ 0x00500611                       ; 004ff715
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0xb                            ; 004ff71b
        ;   Label: LAB_004ff71b
    PUSH 0x58e684                       ; 004ff71d | = "gameFlagOff"
    PUSH ESI                            ; 004ff722
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff723
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff728
    TEST EAX,EAX                        ; 004ff72b
    JNZ 0x004ff746                      ; 004ff72d
        ;   XREF to: 004ff746 (CONDITIONAL_JUMP)  ; LAB_004ff746
    MOV AL,byte ptr [ESI + 0xb]         ; 004ff72f
    INC AL                              ; 004ff732
    AND EAX,0xff                        ; 004ff734
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff739 | DAT_005c168c
    JZ 0x00500611                       ; 004ff740
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0xd                            ; 004ff746
        ;   Label: LAB_004ff746
    PUSH 0x58e690                       ; 004ff748 | = "killCharacter"
    PUSH ESI                            ; 004ff74d
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff74e
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff753
    TEST EAX,EAX                        ; 004ff756
    JNZ 0x004ff771                      ; 004ff758
        ;   XREF to: 004ff771 (CONDITIONAL_JUMP)  ; LAB_004ff771
    MOV AL,byte ptr [ESI + 0xd]         ; 004ff75a
    INC AL                              ; 004ff75d
    AND EAX,0xff                        ; 004ff75f
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff764 | DAT_005c168c
    JZ 0x00500611                       ; 004ff76b
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0x8                            ; 004ff771
        ;   Label: LAB_004ff771
    PUSH 0x58e69e                       ; 004ff773 | = "killHero"
    PUSH ESI                            ; 004ff778
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff779
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff77e
    TEST EAX,EAX                        ; 004ff781
    JNZ 0x004ff79c                      ; 004ff783
        ;   XREF to: 004ff79c (CONDITIONAL_JUMP)  ; LAB_004ff79c
    MOV AL,byte ptr [ESI + 0x8]         ; 004ff785
    INC AL                              ; 004ff788
    AND EAX,0xff                        ; 004ff78a
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff78f | DAT_005c168c
    JZ 0x00500611                       ; 004ff796
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0x7                            ; 004ff79c
        ;   Label: LAB_004ff79c
    PUSH 0x58e6a7                       ; 004ff79e | = "killSfx"
    PUSH ESI                            ; 004ff7a3
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff7a4
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff7a9
    TEST EAX,EAX                        ; 004ff7ac
    JNZ 0x004ff7c7                      ; 004ff7ae
        ;   XREF to: 004ff7c7 (CONDITIONAL_JUMP)  ; LAB_004ff7c7
    MOV AL,byte ptr [ESI + 0x7]         ; 004ff7b0
    INC AL                              ; 004ff7b3
    AND EAX,0xff                        ; 004ff7b5
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff7ba | DAT_005c168c
    JZ 0x00500611                       ; 004ff7c1
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0x9                            ; 004ff7c7
        ;   Label: LAB_004ff7c7
    PUSH 0x58e6af                       ; 004ff7c9 | = "lightning"
    PUSH ESI                            ; 004ff7ce
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff7cf
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff7d4
    TEST EAX,EAX                        ; 004ff7d7
    JNZ 0x004ff7f2                      ; 004ff7d9
        ;   XREF to: 004ff7f2 (CONDITIONAL_JUMP)  ; LAB_004ff7f2
    MOV AL,byte ptr [ESI + 0x9]         ; 004ff7db
    INC AL                              ; 004ff7de
    AND EAX,0xff                        ; 004ff7e0
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff7e5 | DAT_005c168c
    JZ 0x00500611                       ; 004ff7ec
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0x7                            ; 004ff7f2
        ;   Label: LAB_004ff7f2
    PUSH 0x58e6b9                       ; 004ff7f4 | = "playSfx"
    PUSH ESI                            ; 004ff7f9
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff7fa
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff7ff
    TEST EAX,EAX                        ; 004ff802
    JNZ 0x004ff81d                      ; 004ff804
        ;   XREF to: 004ff81d (CONDITIONAL_JUMP)  ; LAB_004ff81d
    MOV AL,byte ptr [ESI + 0x7]         ; 004ff806
    INC AL                              ; 004ff809
    AND EAX,0xff                        ; 004ff80b
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff810 | DAT_005c168c
    JZ 0x00500611                       ; 004ff817
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0x10                           ; 004ff81d
        ;   Label: LAB_004ff81d
    PUSH 0x58e6c1                       ; 004ff81f | = "setCameraAmbient"
    PUSH ESI                            ; 004ff824
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff825
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff82a
    TEST EAX,EAX                        ; 004ff82d
    JNZ 0x004ff848                      ; 004ff82f
        ;   XREF to: 004ff848 (CONDITIONAL_JUMP)  ; LAB_004ff848
    MOV AL,byte ptr [ESI + 0x10]        ; 004ff831
    INC AL                              ; 004ff834
    AND EAX,0xff                        ; 004ff836
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff83b | DAT_005c168c
    JZ 0x00500611                       ; 004ff842
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0xa                            ; 004ff848
        ;   Label: LAB_004ff848
    PUSH 0x58e6d2                       ; 004ff84a | = "setCounter"
    PUSH ESI                            ; 004ff84f
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff850
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff855
    TEST EAX,EAX                        ; 004ff858
    JNZ 0x004ff873                      ; 004ff85a
        ;   XREF to: 004ff873 (CONDITIONAL_JUMP)  ; LAB_004ff873
    MOV AL,byte ptr [ESI + 0xa]         ; 004ff85c
    INC AL                              ; 004ff85f
    AND EAX,0xff                        ; 004ff861
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff866 | DAT_005c168c
    JZ 0x00500611                       ; 004ff86d
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0xf                            ; 004ff873
        ;   Label: LAB_004ff873
    PUSH 0x58e6dd                       ; 004ff875 | = "setGroupAmbient"
    PUSH ESI                            ; 004ff87a
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff87b
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff880
    TEST EAX,EAX                        ; 004ff883
    JNZ 0x004ff89e                      ; 004ff885
        ;   XREF to: 004ff89e (CONDITIONAL_JUMP)  ; LAB_004ff89e
    MOV AL,byte ptr [ESI + 0xf]         ; 004ff887
    INC AL                              ; 004ff88a
    AND EAX,0xff                        ; 004ff88c
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff891 | DAT_005c168c
    JZ 0x00500611                       ; 004ff898
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0x13                           ; 004ff89e
        ;   Label: LAB_004ff89e
    PUSH 0x58e6ed                       ; 004ff8a0 | = "setLightFilterFrame"
    PUSH ESI                            ; 004ff8a5
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff8a6
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff8ab
    TEST EAX,EAX                        ; 004ff8ae
    JNZ 0x004ff8c9                      ; 004ff8b0
        ;   XREF to: 004ff8c9 (CONDITIONAL_JUMP)  ; LAB_004ff8c9
    MOV AL,byte ptr [ESI + 0x13]        ; 004ff8b2
    INC AL                              ; 004ff8b5
    AND EAX,0xff                        ; 004ff8b7
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff8bc | DAT_005c168c
    JZ 0x00500611                       ; 004ff8c3
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0xd                            ; 004ff8c9
        ;   Label: LAB_004ff8c9
    PUSH 0x58e701                       ; 004ff8cb | = "setLeverState"
    PUSH ESI                            ; 004ff8d0
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff8d1
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff8d6
    TEST EAX,EAX                        ; 004ff8d9
    JNZ 0x004ff8f4                      ; 004ff8db
        ;   XREF to: 004ff8f4 (CONDITIONAL_JUMP)  ; LAB_004ff8f4
    MOV AL,byte ptr [ESI + 0xd]         ; 004ff8dd
    INC AL                              ; 004ff8e0
    AND EAX,0xff                        ; 004ff8e2
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff8e7 | DAT_005c168c
    JZ 0x00500611                       ; 004ff8ee
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0xd                            ; 004ff8f4
        ;   Label: LAB_004ff8f4
    PUSH 0x58e70f                       ; 004ff8f6 | = "setModelState"
    PUSH ESI                            ; 004ff8fb
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff8fc
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff901
    TEST EAX,EAX                        ; 004ff904
    JNZ 0x004ff91f                      ; 004ff906
        ;   XREF to: 004ff91f (CONDITIONAL_JUMP)  ; LAB_004ff91f
    MOV AL,byte ptr [ESI + 0xd]         ; 004ff908
    INC AL                              ; 004ff90b
    AND EAX,0xff                        ; 004ff90d
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff912 | DAT_005c168c
    JZ 0x00500611                       ; 004ff919
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0x8                            ; 004ff91f
        ;   Label: LAB_004ff91f
    PUSH 0x58e71d                       ; 004ff921 | = "setTimer"
    PUSH ESI                            ; 004ff926
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff927
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff92c
    TEST EAX,EAX                        ; 004ff92f
    JNZ 0x004ff94a                      ; 004ff931
        ;   XREF to: 004ff94a (CONDITIONAL_JUMP)  ; LAB_004ff94a
    MOV AL,byte ptr [ESI + 0x8]         ; 004ff933
    INC AL                              ; 004ff936
    AND EAX,0xff                        ; 004ff938
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff93d | DAT_005c168c
    JZ 0x00500611                       ; 004ff944
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0xa                            ; 004ff94a
        ;   Label: LAB_004ff94a
    PUSH 0x58e726                       ; 004ff94c | = "setWeather"
    PUSH ESI                            ; 004ff951
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff952
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff957
    TEST EAX,EAX                        ; 004ff95a
    JNZ 0x004ff975                      ; 004ff95c
        ;   XREF to: 004ff975 (CONDITIONAL_JUMP)  ; LAB_004ff975
    MOV AL,byte ptr [ESI + 0xa]         ; 004ff95e
    INC AL                              ; 004ff961
    AND EAX,0xff                        ; 004ff963
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff968 | DAT_005c168c
    JZ 0x00500611                       ; 004ff96f
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0xb                            ; 004ff975
        ;   Label: LAB_004ff975
    PUSH 0x58e731                       ; 004ff977 | = "shakeScreen"
    PUSH ESI                            ; 004ff97c
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff97d
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff982
    TEST EAX,EAX                        ; 004ff985
    JNZ 0x004ff9a0                      ; 004ff987
        ;   XREF to: 004ff9a0 (CONDITIONAL_JUMP)  ; LAB_004ff9a0
    MOV AL,byte ptr [ESI + 0xb]         ; 004ff989
    INC AL                              ; 004ff98c
    AND EAX,0xff                        ; 004ff98e
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff993 | DAT_005c168c
    JZ 0x00500611                       ; 004ff99a
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0x11                           ; 004ff9a0
        ;   Label: LAB_004ff9a0
    PUSH 0x58e73d                       ; 004ff9a2 | = "slamModelToMotion"
    PUSH ESI                            ; 004ff9a7
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff9a8
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff9ad
    TEST EAX,EAX                        ; 004ff9b0
    JNZ 0x004ff9cb                      ; 004ff9b2
        ;   XREF to: 004ff9cb (CONDITIONAL_JUMP)  ; LAB_004ff9cb
    MOV AL,byte ptr [ESI + 0x11]        ; 004ff9b4
    INC AL                              ; 004ff9b7
    AND EAX,0xff                        ; 004ff9b9
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff9be | DAT_005c168c
    JZ 0x00500611                       ; 004ff9c5
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0x6                            ; 004ff9cb
        ;   Label: LAB_004ff9cb
    PUSH 0x58e74f                       ; 004ff9cd | = "warpTo"
    PUSH ESI                            ; 004ff9d2
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff9d3
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ff9d8
    TEST EAX,EAX                        ; 004ff9db
    JNZ 0x004ff9f6                      ; 004ff9dd
        ;   XREF to: 004ff9f6 (CONDITIONAL_JUMP)  ; LAB_004ff9f6
    MOV AL,byte ptr [ESI + 0x6]         ; 004ff9df
    INC AL                              ; 004ff9e2
    AND EAX,0xff                        ; 004ff9e4
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ff9e9 | DAT_005c168c
    JZ 0x00500611                       ; 004ff9f0
        ;   XREF to: 00500611 (CONDITIONAL_JUMP)  ; LAB_00500611
    PUSH 0x12                           ; 004ff9f6
        ;   Label: LAB_004ff9f6
    PUSH 0x58e757                       ; 004ff9f8 | = "addItemToInventory"
    PUSH ESI                            ; 004ff9fd
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ff9fe
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffa03
    TEST EAX,EAX                        ; 004ffa06
    JNZ 0x004ffa21                      ; 004ffa08
        ;   XREF to: 004ffa21 (CONDITIONAL_JUMP)  ; LAB_004ffa21
    MOV AL,byte ptr [ESI + 0x12]        ; 004ffa0a
    INC AL                              ; 004ffa0d
    AND EAX,0xff                        ; 004ffa0f
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffa14 | DAT_005c168c
    JZ 0x00500673                       ; 004ffa1b
        ;   XREF to: 00500673 (CONDITIONAL_JUMP)  ; LAB_00500673
    PUSH 0xe                            ; 004ffa21
        ;   Label: LAB_004ffa21
    PUSH 0x58e7ac                       ; 004ffa23 | = "addLightFilter"
    PUSH ESI                            ; 004ffa28
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffa29
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffa2e
    TEST EAX,EAX                        ; 004ffa31
    JNZ 0x004ffa4c                      ; 004ffa33
        ;   XREF to: 004ffa4c (CONDITIONAL_JUMP)  ; LAB_004ffa4c
    MOV AL,byte ptr [ESI + 0xe]         ; 004ffa35
    INC AL                              ; 004ffa38
    AND EAX,0xff                        ; 004ffa3a
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffa3f | DAT_005c168c
    JZ 0x00500795                       ; 004ffa46
        ;   XREF to: 00500795 (CONDITIONAL_JUMP)  ; LAB_00500795
    PUSH 0x10                           ; 004ffa4c
        ;   Label: LAB_004ffa4c
    PUSH 0x58e832                       ; 004ffa4e | = "allowEnemyAttack"
    PUSH ESI                            ; 004ffa53
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffa54
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffa59
    TEST EAX,EAX                        ; 004ffa5c
    JNZ 0x004ffa77                      ; 004ffa5e
        ;   XREF to: 004ffa77 (CONDITIONAL_JUMP)  ; LAB_004ffa77
    MOV AL,byte ptr [ESI + 0x10]        ; 004ffa60
    INC AL                              ; 004ffa63
    AND EAX,0xff                        ; 004ffa65
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffa6a | DAT_005c168c
    JZ 0x005008d0                       ; 004ffa71
        ;   XREF to: 005008d0 (CONDITIONAL_JUMP)  ; LAB_005008d0
    PUSH 0x11                           ; 004ffa77
        ;   Label: LAB_004ffa77
    PUSH 0x58e843                       ; 004ffa79 | = "allowHeroControls"
    PUSH ESI                            ; 004ffa7e
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffa7f
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffa84
    TEST EAX,EAX                        ; 004ffa87
    JNZ 0x004ffaa2                      ; 004ffa89
        ;   XREF to: 004ffaa2 (CONDITIONAL_JUMP)  ; LAB_004ffaa2
    MOV AL,byte ptr [ESI + 0x11]        ; 004ffa8b
    INC AL                              ; 004ffa8e
    AND EAX,0xff                        ; 004ffa90
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffa95 | DAT_005c168c
    JZ 0x00500938                       ; 004ffa9c
        ;   XREF to: 00500938 (CONDITIONAL_JUMP)  ; LAB_00500938
    PUSH 0xf                            ; 004ffaa2
        ;   Label: LAB_004ffaa2
    PUSH 0x58e855                       ; 004ffaa4 | = "allowHeroDamage"
    PUSH ESI                            ; 004ffaa9
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffaaa
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffaaf
    TEST EAX,EAX                        ; 004ffab2
    JNZ 0x004ffacd                      ; 004ffab4
        ;   XREF to: 004ffacd (CONDITIONAL_JUMP)  ; LAB_004ffacd
    MOV AL,byte ptr [ESI + 0xf]         ; 004ffab6
    INC AL                              ; 004ffab9
    AND EAX,0xff                        ; 004ffabb
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffac0 | DAT_005c168c
    JZ 0x005009ae                       ; 004ffac7
        ;   XREF to: 005009ae (CONDITIONAL_JUMP)  ; LAB_005009ae
    PUSH 0x15                           ; 004ffacd
        ;   Label: LAB_004ffacd
    PUSH 0x58e865                       ; 004ffacf | = "attachActorToPlatform"
    PUSH ESI                            ; 004ffad4
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffad5
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffada
    TEST EAX,EAX                        ; 004ffadd
    JNZ 0x004ffaf8                      ; 004ffadf
        ;   XREF to: 004ffaf8 (CONDITIONAL_JUMP)  ; LAB_004ffaf8
    MOV AL,byte ptr [ESI + 0x15]        ; 004ffae1
    INC AL                              ; 004ffae4
    AND EAX,0xff                        ; 004ffae6
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffaeb | DAT_005c168c
    JZ 0x00500a16                       ; 004ffaf2
        ;   XREF to: 00500a16 (CONDITIONAL_JUMP)  ; LAB_00500a16
    PUSH 0xb                            ; 004ffaf8
        ;   Label: LAB_004ffaf8
    PUSH 0x58e8be                       ; 004ffafa | = "beginFadeIn"
    PUSH ESI                            ; 004ffaff
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffb00
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffb05
    TEST EAX,EAX                        ; 004ffb08
    JNZ 0x004ffb23                      ; 004ffb0a
        ;   XREF to: 004ffb23 (CONDITIONAL_JUMP)  ; LAB_004ffb23
    MOV AL,byte ptr [ESI + 0xb]         ; 004ffb0c
    INC AL                              ; 004ffb0f
    AND EAX,0xff                        ; 004ffb11
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffb16 | DAT_005c168c
    JZ 0x00500b2f                       ; 004ffb1d
        ;   XREF to: 00500b2f (CONDITIONAL_JUMP)  ; LAB_00500b2f
    PUSH 0xc                            ; 004ffb23
        ;   Label: LAB_004ffb23
    PUSH 0x58e8ca                       ; 004ffb25 | = "beginFadeOut"
    PUSH ESI                            ; 004ffb2a
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffb2b
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffb30
    TEST EAX,EAX                        ; 004ffb33
    JNZ 0x004ffb4e                      ; 004ffb35
        ;   XREF to: 004ffb4e (CONDITIONAL_JUMP)  ; LAB_004ffb4e
    MOV AL,byte ptr [ESI + 0xc]         ; 004ffb37
    INC AL                              ; 004ffb3a
    AND EAX,0xff                        ; 004ffb3c
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffb41 | DAT_005c168c
    JZ 0x00500b63                       ; 004ffb48
        ;   XREF to: 00500b63 (CONDITIONAL_JUMP)  ; LAB_00500b63
    PUSH 0xa                            ; 004ffb4e
        ;   Label: LAB_004ffb4e
    PUSH 0x58e8d7                       ; 004ffb50 | = "breakPoint"
    PUSH ESI                            ; 004ffb55
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffb56
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffb5b
    TEST EAX,EAX                        ; 004ffb5e
    JNZ 0x004ffb79                      ; 004ffb60
        ;   XREF to: 004ffb79 (CONDITIONAL_JUMP)  ; LAB_004ffb79
    MOV AL,byte ptr [ESI + 0xa]         ; 004ffb62
    INC AL                              ; 004ffb65
    AND EAX,0xff                        ; 004ffb67
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffb6c | DAT_005c168c
    JZ 0x00500b98                       ; 004ffb73
        ;   XREF to: 00500b98 (CONDITIONAL_JUMP)  ; LAB_00500b98
    PUSH 0x10                           ; 004ffb79
        ;   Label: LAB_004ffb79
    PUSH 0x58e907                       ; 004ffb7b | = "cancelCameraHold"
    PUSH ESI                            ; 004ffb80
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffb81
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffb86
    TEST EAX,EAX                        ; 004ffb89
    JNZ 0x004ffba4                      ; 004ffb8b
        ;   XREF to: 004ffba4 (CONDITIONAL_JUMP)  ; LAB_004ffba4
    MOV AL,byte ptr [ESI + 0x10]        ; 004ffb8d
    INC AL                              ; 004ffb90
    AND EAX,0xff                        ; 004ffb92
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffb97 | DAT_005c168c
    JZ 0x00500bfe                       ; 004ffb9e
        ;   XREF to: 00500bfe (CONDITIONAL_JUMP)  ; LAB_00500bfe
    PUSH 0xc                            ; 004ffba4
        ;   Label: LAB_004ffba4
    PUSH 0x58e918                       ; 004ffba6 | = "cancelWalkTo"
    PUSH ESI                            ; 004ffbab
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffbac
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffbb1
    TEST EAX,EAX                        ; 004ffbb4
    JNZ 0x004ffbcf                      ; 004ffbb6
        ;   XREF to: 004ffbcf (CONDITIONAL_JUMP)  ; LAB_004ffbcf
    MOV AL,byte ptr [ESI + 0xc]         ; 004ffbb8
    INC AL                              ; 004ffbbb
    AND EAX,0xff                        ; 004ffbbd
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffbc2 | DAT_005c168c
    JZ 0x00500c33                       ; 004ffbc9
        ;   XREF to: 00500c33 (CONDITIONAL_JUMP)  ; LAB_00500c33
    PUSH 0xe                            ; 004ffbcf
        ;   Label: LAB_004ffbcf
    PUSH 0x58e929                       ; 004ffbd1 | = "chainToMission"
    PUSH ESI                            ; 004ffbd6
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffbd7
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffbdc
    TEST EAX,EAX                        ; 004ffbdf
    JNZ 0x004ffbfa                      ; 004ffbe1
        ;   XREF to: 004ffbfa (CONDITIONAL_JUMP)  ; LAB_004ffbfa
    MOV AL,byte ptr [ESI + 0xe]         ; 004ffbe3
    INC AL                              ; 004ffbe6
    AND EAX,0xff                        ; 004ffbe8
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffbed | DAT_005c168c
    JZ 0x00500d5a                       ; 004ffbf4
        ;   XREF to: 00500d5a (CONDITIONAL_JUMP)  ; LAB_00500d5a
    PUSH 0x12                           ; 004ffbfa
        ;   Label: LAB_004ffbfa
    PUSH 0x58e938                       ; 004ffbfc | = "clearActorVariable"
    PUSH ESI                            ; 004ffc01
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffc02
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffc07
    TEST EAX,EAX                        ; 004ffc0a
    JNZ 0x004ffc25                      ; 004ffc0c
        ;   XREF to: 004ffc25 (CONDITIONAL_JUMP)  ; LAB_004ffc25
    MOV AL,byte ptr [ESI + 0x12]        ; 004ffc0e
    INC AL                              ; 004ffc11
    AND EAX,0xff                        ; 004ffc13
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffc18 | DAT_005c168c
    JZ 0x00500dfa                       ; 004ffc1f
        ;   XREF to: 00500dfa (CONDITIONAL_JUMP)  ; LAB_00500dfa
    PUSH 0x5                            ; 004ffc25
        ;   Label: LAB_004ffc25
    PUSH 0x58e94b                       ; 004ffc27 | = "dbSay"
    PUSH ESI                            ; 004ffc2c
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffc2d
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffc32
    TEST EAX,EAX                        ; 004ffc35
    JNZ 0x004ffc50                      ; 004ffc37
        ;   XREF to: 004ffc50 (CONDITIONAL_JUMP)  ; LAB_004ffc50
    MOV AL,byte ptr [ESI + 0x5]         ; 004ffc39
    INC AL                              ; 004ffc3c
    AND EAX,0xff                        ; 004ffc3e
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffc43 | DAT_005c168c
    JZ 0x00500e97                       ; 004ffc4a
        ;   XREF to: 00500e97 (CONDITIONAL_JUMP)  ; LAB_00500e97
    PUSH 0xa                            ; 004ffc50
        ;   Label: LAB_004ffc50
    PUSH 0x58e997                       ; 004ffc52 | = "dbStartSay"
    PUSH ESI                            ; 004ffc57
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffc58
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffc5d
    TEST EAX,EAX                        ; 004ffc60
    JNZ 0x004ffc7b                      ; 004ffc62
        ;   XREF to: 004ffc7b (CONDITIONAL_JUMP)  ; LAB_004ffc7b
    MOV AL,byte ptr [ESI + 0xa]         ; 004ffc64
    INC AL                              ; 004ffc67
    AND EAX,0xff                        ; 004ffc69
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffc6e | DAT_005c168c
    JZ 0x00501063                       ; 004ffc75
        ;   XREF to: 00501063 (CONDITIONAL_JUMP)  ; LAB_00501063
    PUSH 0x5                            ; 004ffc7b
        ;   Label: LAB_004ffc7b
    PUSH 0x58e9e8                       ; 004ffc7d | = "debug"
    PUSH ESI                            ; 004ffc82
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffc83
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffc88
    TEST EAX,EAX                        ; 004ffc8b
    JNZ 0x004ffca6                      ; 004ffc8d
        ;   XREF to: 004ffca6 (CONDITIONAL_JUMP)  ; LAB_004ffca6
    MOV AL,byte ptr [ESI + 0x5]         ; 004ffc8f
    INC AL                              ; 004ffc92
    AND EAX,0xff                        ; 004ffc94
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffc99 | DAT_005c168c
    JZ 0x005011e1                       ; 004ffca0
        ;   XREF to: 005011e1 (CONDITIONAL_JUMP)  ; LAB_005011e1
    PUSH 0x9                            ; 004ffca6
        ;   Label: LAB_004ffca6
    PUSH 0x58ea12                       ; 004ffca8 | = "dismember"
    PUSH ESI                            ; 004ffcad
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffcae
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffcb3
    TEST EAX,EAX                        ; 004ffcb6
    JNZ 0x004ffcd1                      ; 004ffcb8
        ;   XREF to: 004ffcd1 (CONDITIONAL_JUMP)  ; LAB_004ffcd1
    MOV AL,byte ptr [ESI + 0x9]         ; 004ffcba
    INC AL                              ; 004ffcbd
    AND EAX,0xff                        ; 004ffcbf
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffcc4 | DAT_005c168c
    JZ 0x0050124f                       ; 004ffccb
        ;   XREF to: 0050124f (CONDITIONAL_JUMP)  ; LAB_0050124f
    PUSH 0x7                            ; 004ffcd1
        ;   Label: LAB_004ffcd1
    PUSH 0x58eabc                       ; 004ffcd3 | = "display"
    PUSH ESI                            ; 004ffcd8
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffcd9
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffcde
    TEST EAX,EAX                        ; 004ffce1
    JNZ 0x004ffcfc                      ; 004ffce3
        ;   XREF to: 004ffcfc (CONDITIONAL_JUMP)  ; LAB_004ffcfc
    MOV AL,byte ptr [ESI + 0x7]         ; 004ffce5
    INC AL                              ; 004ffce8
    AND EAX,0xff                        ; 004ffcea
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffcef | DAT_005c168c
    JZ 0x00501569                       ; 004ffcf6
        ;   XREF to: 00501569 (CONDITIONAL_JUMP)  ; LAB_00501569
    PUSH 0x4                            ; 004ffcfc
        ;   Label: LAB_004ffcfc
    PUSH 0x58eaf8                       ; 004ffcfe | = "else"
    PUSH ESI                            ; 004ffd03
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffd04
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffd09
    TEST EAX,EAX                        ; 004ffd0c
    JNZ 0x004ffd27                      ; 004ffd0e
        ;   XREF to: 004ffd27 (CONDITIONAL_JUMP)  ; LAB_004ffd27
    MOV AL,byte ptr [ESI + 0x4]         ; 004ffd10
    INC AL                              ; 004ffd13
    AND EAX,0xff                        ; 004ffd15
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffd1a | DAT_005c168c
    JZ 0x005015b5                       ; 004ffd21
        ;   XREF to: 005015b5 (CONDITIONAL_JUMP)  ; LAB_005015b5
    PUSH 0xc                            ; 004ffd27
        ;   Label: LAB_004ffd27
    PUSH 0x58eb35                       ; 004ffd29 | = "enableCamera"
    PUSH ESI                            ; 004ffd2e
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffd2f
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffd34
    TEST EAX,EAX                        ; 004ffd37
    JNZ 0x004ffd52                      ; 004ffd39
        ;   XREF to: 004ffd52 (CONDITIONAL_JUMP)  ; LAB_004ffd52
    MOV AL,byte ptr [ESI + 0xc]         ; 004ffd3b
    INC AL                              ; 004ffd3e
    AND EAX,0xff                        ; 004ffd40
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffd45 | DAT_005c168c
    JZ 0x00501602                       ; 004ffd4c
        ;   XREF to: 00501602 (CONDITIONAL_JUMP)  ; LAB_00501602
    PUSH 0x11                           ; 004ffd52
        ;   Label: LAB_004ffd52
    PUSH 0x58eb90                       ; 004ffd54 | = "enableCameraGroup"
    PUSH ESI                            ; 004ffd59
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffd5a
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffd5f
    TEST EAX,EAX                        ; 004ffd62
    JNZ 0x004ffd7d                      ; 004ffd64
        ;   XREF to: 004ffd7d (CONDITIONAL_JUMP)  ; LAB_004ffd7d
    MOV AL,byte ptr [ESI + 0x11]        ; 004ffd66
    INC AL                              ; 004ffd69
    AND EAX,0xff                        ; 004ffd6b
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffd70 | DAT_005c168c
    JZ 0x00501751                       ; 004ffd77
        ;   XREF to: 00501751 (CONDITIONAL_JUMP)  ; LAB_00501751
    PUSH 0xf                            ; 004ffd7d
        ;   Label: LAB_004ffd7d
    PUSH 0x58ebd7                       ; 004ffd7f | = "enableHealthBar"
    PUSH ESI                            ; 004ffd84
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffd85
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffd8a
    TEST EAX,EAX                        ; 004ffd8d
    JNZ 0x004ffda8                      ; 004ffd8f
        ;   XREF to: 004ffda8 (CONDITIONAL_JUMP)  ; LAB_004ffda8
    MOV AL,byte ptr [ESI + 0xf]         ; 004ffd91
    INC AL                              ; 004ffd94
    AND EAX,0xff                        ; 004ffd96
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffd9b | DAT_005c168c
    JZ 0x0050185b                       ; 004ffda2
        ;   XREF to: 0050185b (CONDITIONAL_JUMP)  ; LAB_0050185b
    PUSH 0x3                            ; 004ffda8
        ;   Label: LAB_004ffda8
    PUSH 0x58ec4b                       ; 004ffdaa | = "end"
    PUSH ESI                            ; 004ffdaf
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffdb0
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffdb5
    TEST EAX,EAX                        ; 004ffdb8
    JNZ 0x004ffdd3                      ; 004ffdba
        ;   XREF to: 004ffdd3 (CONDITIONAL_JUMP)  ; LAB_004ffdd3
    MOV AL,byte ptr [ESI + 0x3]         ; 004ffdbc
    INC AL                              ; 004ffdbf
    AND EAX,0xff                        ; 004ffdc1
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffdc6 | DAT_005c168c
    JZ 0x005019b6                       ; 004ffdcd
        ;   XREF to: 005019b6 (CONDITIONAL_JUMP)  ; LAB_005019b6
    PUSH 0x6                            ; 004ffdd3
        ;   Label: LAB_004ffdd3
    PUSH 0x58ec4f                       ; 004ffdd5 | = "fadeIn"
    PUSH ESI                            ; 004ffdda
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffddb
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffde0
    TEST EAX,EAX                        ; 004ffde3
    JNZ 0x004ffdfe                      ; 004ffde5
        ;   XREF to: 004ffdfe (CONDITIONAL_JUMP)  ; LAB_004ffdfe
    MOV AL,byte ptr [ESI + 0x6]         ; 004ffde7
    INC AL                              ; 004ffdea
    AND EAX,0xff                        ; 004ffdec
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffdf1 | DAT_005c168c
    JZ 0x005019e9                       ; 004ffdf8
        ;   XREF to: 005019e9 (CONDITIONAL_JUMP)  ; LAB_005019e9
    PUSH 0x7                            ; 004ffdfe
        ;   Label: LAB_004ffdfe
    PUSH 0x58ec56                       ; 004ffe00 | = "fadeOut"
    PUSH ESI                            ; 004ffe05
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffe06
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffe0b
    TEST EAX,EAX                        ; 004ffe0e
    JNZ 0x004ffe29                      ; 004ffe10
        ;   XREF to: 004ffe29 (CONDITIONAL_JUMP)  ; LAB_004ffe29
    MOV AL,byte ptr [ESI + 0x7]         ; 004ffe12
    INC AL                              ; 004ffe15
    AND EAX,0xff                        ; 004ffe17
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffe1c | DAT_005c168c
    JZ 0x00501a6e                       ; 004ffe23
        ;   XREF to: 00501a6e (CONDITIONAL_JUMP)  ; LAB_00501a6e
    PUSH 0x7                            ; 004ffe29
        ;   Label: LAB_004ffe29
    PUSH 0x58ec5e                       ; 004ffe2b | = "gesture"
    PUSH ESI                            ; 004ffe30
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffe31
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffe36
    TEST EAX,EAX                        ; 004ffe39
    JNZ 0x004ffe54                      ; 004ffe3b
        ;   XREF to: 004ffe54 (CONDITIONAL_JUMP)  ; LAB_004ffe54
    MOV AL,byte ptr [ESI + 0x7]         ; 004ffe3d
    INC AL                              ; 004ffe40
    AND EAX,0xff                        ; 004ffe42
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffe47 | DAT_005c168c
    JZ 0x00501ae3                       ; 004ffe4e
        ;   XREF to: 00501ae3 (CONDITIONAL_JUMP)  ; LAB_00501ae3
    PUSH 0x9                            ; 004ffe54
        ;   Label: LAB_004ffe54
    PUSH 0x58eccf                       ; 004ffe56 | = "getIniInt"
    PUSH ESI                            ; 004ffe5b
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffe5c
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffe61
    TEST EAX,EAX                        ; 004ffe64
    JNZ 0x004ffe7f                      ; 004ffe66
        ;   XREF to: 004ffe7f (CONDITIONAL_JUMP)  ; LAB_004ffe7f
    MOV AL,byte ptr [ESI + 0x9]         ; 004ffe68
    INC AL                              ; 004ffe6b
    AND EAX,0xff                        ; 004ffe6d
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffe72 | DAT_005c168c
    JZ 0x00501c35                       ; 004ffe79
        ;   XREF to: 00501c35 (CONDITIONAL_JUMP)  ; LAB_00501c35
    PUSH 0xf                            ; 004ffe7f
        ;   Label: LAB_004ffe7f
    PUSH 0x58ed2b                       ; 004ffe81 | = "getTriggerActor"
    PUSH ESI                            ; 004ffe86
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffe87
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffe8c
    TEST EAX,EAX                        ; 004ffe8f
    JNZ 0x004ffeaa                      ; 004ffe91
        ;   XREF to: 004ffeaa (CONDITIONAL_JUMP)  ; LAB_004ffeaa
    MOV AL,byte ptr [ESI + 0xf]         ; 004ffe93
    INC AL                              ; 004ffe96
    AND EAX,0xff                        ; 004ffe98
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffe9d | DAT_005c168c
    JZ 0x00501d56                       ; 004ffea4
        ;   XREF to: 00501d56 (CONDITIONAL_JUMP)  ; LAB_00501d56
    PUSH 0x5                            ; 004ffeaa
        ;   Label: LAB_004ffeaa
    PUSH 0x58ed78                       ; 004ffeac | = "gosub"
    PUSH ESI                            ; 004ffeb1
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffeb2
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffeb7
    TEST EAX,EAX                        ; 004ffeba
    JNZ 0x004ffed5                      ; 004ffebc
        ;   XREF to: 004ffed5 (CONDITIONAL_JUMP)  ; LAB_004ffed5
    MOV AL,byte ptr [ESI + 0x5]         ; 004ffebe
    INC AL                              ; 004ffec1
    AND EAX,0xff                        ; 004ffec3
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffec8 | DAT_005c168c
    JZ 0x00501e67                       ; 004ffecf
        ;   XREF to: 00501e67 (CONDITIONAL_JUMP)  ; LAB_00501e67
    PUSH 0x4                            ; 004ffed5
        ;   Label: LAB_004ffed5
    PUSH 0x58ede5                       ; 004ffed7 | = "goto"
    PUSH ESI                            ; 004ffedc
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004ffedd
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004ffee2
    TEST EAX,EAX                        ; 004ffee5
    JNZ 0x004fff00                      ; 004ffee7
        ;   XREF to: 004fff00 (CONDITIONAL_JUMP)  ; LAB_004fff00
    MOV AL,byte ptr [ESI + 0x4]         ; 004ffee9
    INC AL                              ; 004ffeec
    AND EAX,0xff                        ; 004ffeee
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffef3 | DAT_005c168c
    JZ 0x00501f18                       ; 004ffefa
        ;   XREF to: 00501f18 (CONDITIONAL_JUMP)  ; LAB_00501f18
    PUSH 0x4                            ; 004fff00
        ;   Label: LAB_004fff00
    PUSH 0x58ee20                       ; 004fff02 | = "gtfo"
    PUSH ESI                            ; 004fff07
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004fff08
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004fff0d
    TEST EAX,EAX                        ; 004fff10
    JNZ 0x004fff2b                      ; 004fff12
        ;   XREF to: 004fff2b (CONDITIONAL_JUMP)  ; LAB_004fff2b
    MOV AL,byte ptr [ESI + 0x4]         ; 004fff14
    INC AL                              ; 004fff17
    AND EAX,0xff                        ; 004fff19
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004fff1e | DAT_005c168c
    JZ 0x00501f7f                       ; 004fff25
        ;   XREF to: 00501f7f (CONDITIONAL_JUMP)  ; LAB_00501f7f
    PUSH 0xd                            ; 004fff2b
        ;   Label: LAB_004fff2b
    PUSH 0x58ee55                       ; 004fff2d | = "holsterWeapon"
    PUSH ESI                            ; 004fff32
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004fff33
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004fff38
    TEST EAX,EAX                        ; 004fff3b
    JNZ 0x004fff56                      ; 004fff3d
        ;   XREF to: 004fff56 (CONDITIONAL_JUMP)  ; LAB_004fff56
    MOV AL,byte ptr [ESI + 0xd]         ; 004fff3f
    INC AL                              ; 004fff42
    AND EAX,0xff                        ; 004fff44
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004fff49 | DAT_005c168c
    JZ 0x00501ffc                       ; 004fff50
        ;   XREF to: 00501ffc (CONDITIONAL_JUMP)  ; LAB_00501ffc
    PUSH 0x4                            ; 004fff56
        ;   Label: LAB_004fff56
    PUSH 0x58eeee                       ; 004fff58 | = "idle"
    PUSH ESI                            ; 004fff5d
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004fff5e
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004fff63
    TEST EAX,EAX                        ; 004fff66
    JNZ 0x004fff81                      ; 004fff68
        ;   XREF to: 004fff81 (CONDITIONAL_JUMP)  ; LAB_004fff81
    MOV AL,byte ptr [ESI + 0x4]         ; 004fff6a
    INC AL                              ; 004fff6d
    AND EAX,0xff                        ; 004fff6f
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004fff74 | DAT_005c168c
    JZ 0x0050222e                       ; 004fff7b
        ;   XREF to: 0050222e (CONDITIONAL_JUMP)  ; LAB_0050222e
    PUSH 0x2                            ; 004fff81
        ;   Label: LAB_004fff81
    PUSH 0x58eef3                       ; 004fff83 | = "if"
    PUSH ESI                            ; 004fff88
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004fff89
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004fff8e
    TEST EAX,EAX                        ; 004fff91
    JNZ 0x004fffac                      ; 004fff93
        ;   XREF to: 004fffac (CONDITIONAL_JUMP)  ; LAB_004fffac
    MOV AL,byte ptr [ESI + 0x2]         ; 004fff95
    INC AL                              ; 004fff98
    AND EAX,0xff                        ; 004fff9a
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004fff9f | DAT_005c168c
    JZ 0x00502259                       ; 004fffa6
        ;   XREF to: 00502259 (CONDITIONAL_JUMP)  ; LAB_00502259
    PUSH 0xb                            ; 004fffac
        ;   Label: LAB_004fffac
    PUSH 0x58ef31                       ; 004fffae | = "finishedAct"
    PUSH ESI                            ; 004fffb3
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004fffb4
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004fffb9
    TEST EAX,EAX                        ; 004fffbc
    JNZ 0x004fffd7                      ; 004fffbe
        ;   XREF to: 004fffd7 (CONDITIONAL_JUMP)  ; LAB_004fffd7
    MOV AL,byte ptr [ESI + 0xb]         ; 004fffc0
    INC AL                              ; 004fffc3
    AND EAX,0xff                        ; 004fffc5
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004fffca | DAT_005c168c
    JZ 0x00502312                       ; 004fffd1
        ;   XREF to: 00502312 (CONDITIONAL_JUMP)  ; LAB_00502312
    PUSH 0x9                            ; 004fffd7
        ;   Label: LAB_004fffd7
    PUSH 0x58ef66                       ; 004fffd9 | = "letterbox"
    PUSH ESI                            ; 004fffde
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004fffdf
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004fffe4
    TEST EAX,EAX                        ; 004fffe7
    JNZ 0x00500002                      ; 004fffe9
        ;   XREF to: 00500002 (CONDITIONAL_JUMP)  ; LAB_00500002
    MOV AL,byte ptr [ESI + 0x9]         ; 004fffeb
    INC AL                              ; 004fffee
    AND EAX,0xff                        ; 004ffff0
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 004ffff5 | DAT_005c168c
    JZ 0x005023a9                       ; 004ffffc
        ;   XREF to: 005023a9 (CONDITIONAL_JUMP)  ; LAB_005023a9
    PUSH 0xe                            ; 00500002
        ;   Label: LAB_00500002
    PUSH 0x58ef9d                       ; 00500004 | = "lockFocusActor"
    PUSH ESI                            ; 00500009
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 0050000a
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0050000f
    TEST EAX,EAX                        ; 00500012
    JNZ 0x0050002d                      ; 00500014
        ;   XREF to: 0050002d (CONDITIONAL_JUMP)  ; LAB_0050002d
    MOV AL,byte ptr [ESI + 0xe]         ; 00500016
    INC AL                              ; 00500019
    AND EAX,0xff                        ; 0050001b
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 00500020 | DAT_005c168c
    JZ 0x0050254c                       ; 00500027
        ;   XREF to: 0050254c (CONDITIONAL_JUMP)  ; LAB_0050254c
    PUSH 0x6                            ; 0050002d
        ;   Label: LAB_0050002d
    PUSH 0x58efac                       ; 0050002f | = "lookAt"
    PUSH ESI                            ; 00500034
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00500035
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0050003a
    TEST EAX,EAX                        ; 0050003d
    JNZ 0x00500058                      ; 0050003f
        ;   XREF to: 00500058 (CONDITIONAL_JUMP)  ; LAB_00500058
    MOV AL,byte ptr [ESI + 0x6]         ; 00500041
    INC AL                              ; 00500044
    AND EAX,0xff                        ; 00500046
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 0050004b | DAT_005c168c
    JZ 0x005025ab                       ; 00500052
        ;   XREF to: 005025ab (CONDITIONAL_JUMP)  ; LAB_005025ab
    PUSH 0xc                            ; 00500058
        ;   Label: LAB_00500058
    PUSH 0x58f033                       ; 0050005a | = "movePlatform"
    PUSH ESI                            ; 0050005f
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00500060
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00500065
    TEST EAX,EAX                        ; 00500068
    JNZ 0x00500083                      ; 0050006a
        ;   XREF to: 00500083 (CONDITIONAL_JUMP)  ; LAB_00500083
    MOV AL,byte ptr [ESI + 0xc]         ; 0050006c
    INC AL                              ; 0050006f
    AND EAX,0xff                        ; 00500071
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 00500076 | DAT_005c168c
    JZ 0x0050275c                       ; 0050007d
        ;   XREF to: 0050275c (CONDITIONAL_JUMP)  ; LAB_0050275c
    PUSH 0x8                            ; 00500083
        ;   Label: LAB_00500083
    PUSH 0x58f0bc                       ; 00500085 | = "openDoor"
    PUSH ESI                            ; 0050008a
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 0050008b
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00500090
    TEST EAX,EAX                        ; 00500093
    JNZ 0x005000ae                      ; 00500095
        ;   XREF to: 005000ae (CONDITIONAL_JUMP)  ; LAB_005000ae
    MOV AL,byte ptr [ESI + 0x8]         ; 00500097
    INC AL                              ; 0050009a
    AND EAX,0xff                        ; 0050009c
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 005000a1 | DAT_005c168c
    JZ 0x0050289a                       ; 005000a8
        ;   XREF to: 0050289a (CONDITIONAL_JUMP)  ; LAB_0050289a
    PUSH 0xb                            ; 005000ae
        ;   Label: LAB_005000ae
    PUSH 0x58f0fb                       ; 005000b0 | = "pressButton"
    PUSH ESI                            ; 005000b5
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 005000b6
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005000bb
    TEST EAX,EAX                        ; 005000be
    JNZ 0x005000d9                      ; 005000c0
        ;   XREF to: 005000d9 (CONDITIONAL_JUMP)  ; LAB_005000d9
    MOV AL,byte ptr [ESI + 0xb]         ; 005000c2
    INC AL                              ; 005000c5
    AND EAX,0xff                        ; 005000c7
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 005000cc | DAT_005c168c
    JZ 0x005029ff                       ; 005000d3
        ;   XREF to: 005029ff (CONDITIONAL_JUMP)  ; LAB_005029ff
    PUSH 0x5                            ; 005000d9
        ;   Label: LAB_005000d9
    PUSH 0x58f15b                       ; 005000db | = "raise"
    PUSH ESI                            ; 005000e0
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 005000e1
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005000e6
    TEST EAX,EAX                        ; 005000e9
    JNZ 0x00500104                      ; 005000eb
        ;   XREF to: 00500104 (CONDITIONAL_JUMP)  ; LAB_00500104
    MOV AL,byte ptr [ESI + 0x5]         ; 005000ed
    INC AL                              ; 005000f0
    AND EAX,0xff                        ; 005000f2
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 005000f7 | DAT_005c168c
    JZ 0x00502b3c                       ; 005000fe
        ;   XREF to: 00502b3c (CONDITIONAL_JUMP)  ; LAB_00502b3c
    PUSH 0xd                            ; 00500104
        ;   Label: LAB_00500104
    PUSH 0x58f197                       ; 00500106 | = "releaseButton"
    PUSH ESI                            ; 0050010b
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 0050010c
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00500111
    TEST EAX,EAX                        ; 00500114
    JNZ 0x0050012f                      ; 00500116
        ;   XREF to: 0050012f (CONDITIONAL_JUMP)  ; LAB_0050012f
    MOV AL,byte ptr [ESI + 0xd]         ; 00500118
    INC AL                              ; 0050011b
    AND EAX,0xff                        ; 0050011d
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 00500122 | DAT_005c168c
    JZ 0x00502bef                       ; 00500129
        ;   XREF to: 00502bef (CONDITIONAL_JUMP)  ; LAB_00502bef
    PUSH 0x1b                           ; 0050012f
        ;   Label: LAB_0050012f
    PUSH 0x58f1fb                       ; 00500131 | = "removeAllItemsFromInventory"
    PUSH ESI                            ; 00500136
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00500137
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0050013c
    TEST EAX,EAX                        ; 0050013f
    JNZ 0x0050015a                      ; 00500141
        ;   XREF to: 0050015a (CONDITIONAL_JUMP)  ; LAB_0050015a
    MOV AL,byte ptr [ESI + 0x1b]        ; 00500143
    INC AL                              ; 00500146
    AND EAX,0xff                        ; 00500148
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 0050014d | DAT_005c168c
    JZ 0x00502d2b                       ; 00500154
        ;   XREF to: 00502d2b (CONDITIONAL_JUMP)  ; LAB_00502d2b
    PUSH 0x17                           ; 0050015a
        ;   Label: LAB_0050015a
    PUSH 0x58f25b                       ; 0050015c | = "removeItemFromInventory"
    PUSH ESI                            ; 00500161
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00500162
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00500167
    TEST EAX,EAX                        ; 0050016a
    JNZ 0x00500185                      ; 0050016c
        ;   XREF to: 00500185 (CONDITIONAL_JUMP)  ; LAB_00500185
    MOV AL,byte ptr [ESI + 0x17]        ; 0050016e
    INC AL                              ; 00500171
    AND EAX,0xff                        ; 00500173
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 00500178 | DAT_005c168c
    JZ 0x00502dfd                       ; 0050017f
        ;   XREF to: 00502dfd (CONDITIONAL_JUMP)  ; LAB_00502dfd
    PUSH 0xa                            ; 00500185
        ;   Label: LAB_00500185
    PUSH 0x58f2ba                       ; 00500187 | = "removeKeys"
    PUSH ESI                            ; 0050018c
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 0050018d
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00500192
    TEST EAX,EAX                        ; 00500195
    JNZ 0x005001b0                      ; 00500197
        ;   XREF to: 005001b0 (CONDITIONAL_JUMP)  ; LAB_005001b0
    MOV AL,byte ptr [ESI + 0xa]         ; 00500199
    INC AL                              ; 0050019c
    AND EAX,0xff                        ; 0050019e
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 005001a3 | DAT_005c168c
    JZ 0x00502f17                       ; 005001aa
        ;   XREF to: 00502f17 (CONDITIONAL_JUMP)  ; LAB_00502f17
    PUSH 0x6                            ; 005001b0
        ;   Label: LAB_005001b0
    PUSH 0x58f324                       ; 005001b2 | = "return"
    PUSH ESI                            ; 005001b7
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 005001b8
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005001bd
    TEST EAX,EAX                        ; 005001c0
    JNZ 0x005001db                      ; 005001c2
        ;   XREF to: 005001db (CONDITIONAL_JUMP)  ; LAB_005001db
    MOV AL,byte ptr [ESI + 0x6]         ; 005001c4
    INC AL                              ; 005001c7
    AND EAX,0xff                        ; 005001c9
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 005001ce | DAT_005c168c
    JZ 0x00502fd7                       ; 005001d5
        ;   XREF to: 00502fd7 (CONDITIONAL_JUMP)  ; LAB_00502fd7
    PUSH 0xb                            ; 005001db
        ;   Label: LAB_005001db
    PUSH 0x58f35c                       ; 005001dd | = "rollCredits"
    PUSH ESI                            ; 005001e2
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 005001e3
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005001e8
    TEST EAX,EAX                        ; 005001eb
    JNZ 0x00500206                      ; 005001ed
        ;   XREF to: 00500206 (CONDITIONAL_JUMP)  ; LAB_00500206
    MOV AL,byte ptr [ESI + 0xb]         ; 005001ef
    INC AL                              ; 005001f2
    AND EAX,0xff                        ; 005001f4
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 005001f9 | DAT_005c168c
    JZ 0x0050303b                       ; 00500200
        ;   XREF to: 0050303b (CONDITIONAL_JUMP)  ; LAB_0050303b
    PUSH 0x3                            ; 00500206
        ;   Label: LAB_00500206
    PUSH 0x58f391                       ; 00500208 | = "say"
    PUSH ESI                            ; 0050020d
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 0050020e
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00500213
    TEST EAX,EAX                        ; 00500216
    JNZ 0x00500231                      ; 00500218
        ;   XREF to: 00500231 (CONDITIONAL_JUMP)  ; LAB_00500231
    MOV AL,byte ptr [ESI + 0x3]         ; 0050021a
    INC AL                              ; 0050021d
    AND EAX,0xff                        ; 0050021f
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 00500224 | DAT_005c168c
    JZ 0x005030d2                       ; 0050022b
        ;   XREF to: 005030d2 (CONDITIONAL_JUMP)  ; LAB_005030d2
    PUSH 0xc                            ; 00500231
        ;   Label: LAB_00500231
    PUSH 0x58f3ce                       ; 00500233 | = "selectWeapon"
    PUSH ESI                            ; 00500238
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00500239
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0050023e
    TEST EAX,EAX                        ; 00500241
    JNZ 0x0050025c                      ; 00500243
        ;   XREF to: 0050025c (CONDITIONAL_JUMP)  ; LAB_0050025c
    MOV AL,byte ptr [ESI + 0xc]         ; 00500245
    INC AL                              ; 00500248
    AND EAX,0xff                        ; 0050024a
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 0050024f | DAT_005c168c
    JZ 0x00503245                       ; 00500256
        ;   XREF to: 00503245 (CONDITIONAL_JUMP)  ; LAB_00503245
    PUSH 0x10                           ; 0050025c
        ;   Label: LAB_0050025c
    PUSH 0x58f46e                       ; 0050025e | = "setActorVariable"
    PUSH ESI                            ; 00500263
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00500264
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00500269
    TEST EAX,EAX                        ; 0050026c
    JNZ 0x00500287                      ; 0050026e
        ;   XREF to: 00500287 (CONDITIONAL_JUMP)  ; LAB_00500287
    MOV AL,byte ptr [ESI + 0x10]        ; 00500270
    INC AL                              ; 00500273
    AND EAX,0xff                        ; 00500275
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 0050027a | DAT_005c168c
    JZ 0x005033df                       ; 00500281
        ;   XREF to: 005033df (CONDITIONAL_JUMP)  ; LAB_005033df
    PUSH 0xf                            ; 00500287
        ;   Label: LAB_00500287
    PUSH 0x58f4bd                       ; 00500289 | = "setAmbientSound"
    PUSH ESI                            ; 0050028e
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 0050028f
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00500294
    TEST EAX,EAX                        ; 00500297
    JNZ 0x005002b2                      ; 00500299
        ;   XREF to: 005002b2 (CONDITIONAL_JUMP)  ; LAB_005002b2
    MOV AL,byte ptr [ESI + 0xf]         ; 0050029b
    INC AL                              ; 0050029e
    AND EAX,0xff                        ; 005002a0
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 005002a5 | DAT_005c168c
    JZ 0x005034ec                       ; 005002ac
        ;   XREF to: 005034ec (CONDITIONAL_JUMP)  ; LAB_005034ec
    PUSH 0xe                            ; 005002b2
        ;   Label: LAB_005002b2
    PUSH 0x58f4cd                       ; 005002b4 | = "setCameraGroup"
    PUSH ESI                            ; 005002b9
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 005002ba
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005002bf
    TEST EAX,EAX                        ; 005002c2
    JNZ 0x005002dd                      ; 005002c4
        ;   XREF to: 005002dd (CONDITIONAL_JUMP)  ; LAB_005002dd
    MOV AL,byte ptr [ESI + 0xe]         ; 005002c6
    INC AL                              ; 005002c9
    AND EAX,0xff                        ; 005002cb
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 005002d0 | DAT_005c168c
    JZ 0x0050354a                       ; 005002d7
        ;   XREF to: 0050354a (CONDITIONAL_JUMP)  ; LAB_0050354a
    PUSH 0x12                           ; 005002dd
        ;   Label: LAB_005002dd
    PUSH 0x58f529                       ; 005002df | = "setCharacterHealth"
    PUSH ESI                            ; 005002e4
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 005002e5
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005002ea
    TEST EAX,EAX                        ; 005002ed
    JNZ 0x00500308                      ; 005002ef
        ;   XREF to: 00500308 (CONDITIONAL_JUMP)  ; LAB_00500308
    MOV AL,byte ptr [ESI + 0x12]        ; 005002f1
    INC AL                              ; 005002f4
    AND EAX,0xff                        ; 005002f6
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 005002fb | DAT_005c168c
    JZ 0x00503643                       ; 00500302
        ;   XREF to: 00503643 (CONDITIONAL_JUMP)  ; LAB_00503643
    PUSH 0xd                            ; 00500308
        ;   Label: LAB_00500308
    PUSH 0x58f571                       ; 0050030a | = "setFocusActor"
    PUSH ESI                            ; 0050030f
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00500310
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00500315
    TEST EAX,EAX                        ; 00500318
    JNZ 0x00500333                      ; 0050031a
        ;   XREF to: 00500333 (CONDITIONAL_JUMP)  ; LAB_00500333
    MOV AL,byte ptr [ESI + 0xd]         ; 0050031c
    INC AL                              ; 0050031f
    AND EAX,0xff                        ; 00500321
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 00500326 | DAT_005c168c
    JZ 0x00503722                       ; 0050032d
        ;   XREF to: 00503722 (CONDITIONAL_JUMP)  ; LAB_00503722
    PUSH 0xb                            ; 00500333
        ;   Label: LAB_00500333
    PUSH 0x58f57f                       ; 00500335 | = "setHeroTask"
    PUSH ESI                            ; 0050033a
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 0050033b
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00500340
    TEST EAX,EAX                        ; 00500343
    JNZ 0x0050035e                      ; 00500345
        ;   XREF to: 0050035e (CONDITIONAL_JUMP)  ; LAB_0050035e
    MOV AL,byte ptr [ESI + 0xb]         ; 00500347
    INC AL                              ; 0050034a
    AND EAX,0xff                        ; 0050034c
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 00500351 | DAT_005c168c
    JZ 0x005037c2                       ; 00500358
        ;   XREF to: 005037c2 (CONDITIONAL_JUMP)  ; LAB_005037c2
    PUSH 0x9                            ; 0050035e
        ;   Label: LAB_0050035e
    PUSH 0x58f5f4                       ; 00500360 | = "setIniInt"
    PUSH ESI                            ; 00500365
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00500366
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0050036b
    TEST EAX,EAX                        ; 0050036e
    JNZ 0x00500389                      ; 00500370
        ;   XREF to: 00500389 (CONDITIONAL_JUMP)  ; LAB_00500389
    MOV AL,byte ptr [ESI + 0x9]         ; 00500372
    INC AL                              ; 00500375
    AND EAX,0xff                        ; 00500377
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 0050037c | DAT_005c168c
    JZ 0x0050396a                       ; 00500383
        ;   XREF to: 0050396a (CONDITIONAL_JUMP)  ; LAB_0050396a
    PUSH 0x12                           ; 00500389
        ;   Label: LAB_00500389
    PUSH 0x58f64c                       ; 0050038b | = "setSayTimeOverride"
    PUSH ESI                            ; 00500390
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00500391
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00500396
    TEST EAX,EAX                        ; 00500399
    JNZ 0x005003b4                      ; 0050039b
        ;   XREF to: 005003b4 (CONDITIONAL_JUMP)  ; LAB_005003b4
    MOV AL,byte ptr [ESI + 0x12]        ; 0050039d
    INC AL                              ; 005003a0
    AND EAX,0xff                        ; 005003a2
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 005003a7 | DAT_005c168c
    JZ 0x00503a39                       ; 005003ae
        ;   XREF to: 00503a39 (CONDITIONAL_JUMP)  ; LAB_00503a39
    PUSH 0xc                            ; 005003b4
        ;   Label: LAB_005003b4
    PUSH 0x58f6c8                       ; 005003b6 | = "setSkipLabel"
    PUSH ESI                            ; 005003bb
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 005003bc
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005003c1
    TEST EAX,EAX                        ; 005003c4
    JNZ 0x005003df                      ; 005003c6
        ;   XREF to: 005003df (CONDITIONAL_JUMP)  ; LAB_005003df
    MOV AL,byte ptr [ESI + 0xc]         ; 005003c8
    INC AL                              ; 005003cb
    AND EAX,0xff                        ; 005003cd
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 005003d2 | DAT_005c168c
    JZ 0x00503b31                       ; 005003d9
        ;   XREF to: 00503b31 (CONDITIONAL_JUMP)  ; LAB_00503b31
    PUSH 0xa                            ; 005003df
        ;   Label: LAB_005003df
    PUSH 0x58f6ea                       ; 005003e1 | = "setSpeaker"
    PUSH ESI                            ; 005003e6
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 005003e7
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005003ec
    TEST EAX,EAX                        ; 005003ef
    JNZ 0x0050040a                      ; 005003f1
        ;   XREF to: 0050040a (CONDITIONAL_JUMP)  ; LAB_0050040a
    MOV AL,byte ptr [ESI + 0xa]         ; 005003f3
    INC AL                              ; 005003f6
    AND EAX,0xff                        ; 005003f8
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 005003fd | DAT_005c168c
    JZ 0x00503bd4                       ; 00500404
        ;   XREF to: 00503bd4 (CONDITIONAL_JUMP)  ; LAB_00503bd4
    PUSH 0xd                            ; 0050040a
        ;   Label: LAB_0050040a
    PUSH 0x58f6f5                       ; 0050040c | = "setTimeFactor"
    PUSH ESI                            ; 00500411
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00500412
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00500417
    TEST EAX,EAX                        ; 0050041a
    JNZ 0x00500435                      ; 0050041c
        ;   XREF to: 00500435 (CONDITIONAL_JUMP)  ; LAB_00500435
    MOV AL,byte ptr [ESI + 0xd]         ; 0050041e
    INC AL                              ; 00500421
    AND EAX,0xff                        ; 00500423
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 00500428 | DAT_005c168c
    JZ 0x00503c79                       ; 0050042f
        ;   XREF to: 00503c79 (CONDITIONAL_JUMP)  ; LAB_00503c79
    PUSH 0x9                            ; 00500435
        ;   Label: LAB_00500435
    PUSH 0x58f71d                       ; 00500437 | = "setVictim"
    PUSH ESI                            ; 0050043c
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 0050043d
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00500442
    TEST EAX,EAX                        ; 00500445
    JNZ 0x00500460                      ; 00500447
        ;   XREF to: 00500460 (CONDITIONAL_JUMP)  ; LAB_00500460
    MOV AL,byte ptr [ESI + 0x9]         ; 00500449
    INC AL                              ; 0050044c
    AND EAX,0xff                        ; 0050044e
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 00500453 | DAT_005c168c
    JZ 0x00503d56                       ; 0050045a
        ;   XREF to: 00503d56 (CONDITIONAL_JUMP)  ; LAB_00503d56
    PUSH 0xa                            ; 00500460
        ;   Label: LAB_00500460
    PUSH 0x58f7b8                       ; 00500462 | = "snapToFace"
    PUSH ESI                            ; 00500467
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00500468
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0050046d
    TEST EAX,EAX                        ; 00500470
    JNZ 0x0050048b                      ; 00500472
        ;   XREF to: 0050048b (CONDITIONAL_JUMP)  ; LAB_0050048b
    MOV AL,byte ptr [ESI + 0xa]         ; 00500474
    INC AL                              ; 00500477
    AND EAX,0xff                        ; 00500479
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 0050047e | DAT_005c168c
    JZ 0x00503f27                       ; 00500485
        ;   XREF to: 00503f27 (CONDITIONAL_JUMP)  ; LAB_00503f27
    PUSH 0x8                            ; 0050048b
        ;   Label: LAB_0050048b
    PUSH 0x58f7fb                       ; 0050048d | = "startSay"
    PUSH ESI                            ; 00500492
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00500493
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00500498
    TEST EAX,EAX                        ; 0050049b
    JNZ 0x005004b6                      ; 0050049d
        ;   XREF to: 005004b6 (CONDITIONAL_JUMP)  ; LAB_005004b6
    MOV AL,byte ptr [ESI + 0x8]         ; 0050049f
    INC AL                              ; 005004a2
    AND EAX,0xff                        ; 005004a4
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 005004a9 | DAT_005c168c
    JZ 0x00504076                       ; 005004b0
        ;   XREF to: 00504076 (CONDITIONAL_JUMP)  ; LAB_00504076
    PUSH 0xc                            ; 005004b6
        ;   Label: LAB_005004b6
    PUSH 0x58f83d                       ; 005004b8 | = "switchCamera"
    PUSH ESI                            ; 005004bd
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 005004be
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005004c3
    TEST EAX,EAX                        ; 005004c6
    JNZ 0x005004e1                      ; 005004c8
        ;   XREF to: 005004e1 (CONDITIONAL_JUMP)  ; LAB_005004e1
    MOV AL,byte ptr [ESI + 0xc]         ; 005004ca
    INC AL                              ; 005004cd
    AND EAX,0xff                        ; 005004cf
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 005004d4 | DAT_005c168c
    JZ 0x0050419f                       ; 005004db
        ;   XREF to: 0050419f (CONDITIONAL_JUMP)  ; LAB_0050419f
    PUSH 0xc                            ; 005004e1
        ;   Label: LAB_005004e1
    PUSH 0x58f8a9                       ; 005004e3 | = "timedDisplay"
    PUSH ESI                            ; 005004e8
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 005004e9
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005004ee
    TEST EAX,EAX                        ; 005004f1
    JNZ 0x0050050c                      ; 005004f3
        ;   XREF to: 0050050c (CONDITIONAL_JUMP)  ; LAB_0050050c
    MOV AL,byte ptr [ESI + 0xc]         ; 005004f5
    INC AL                              ; 005004f8
    AND EAX,0xff                        ; 005004fa
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 005004ff | DAT_005c168c
    JZ 0x005043a2                       ; 00500506
        ;   XREF to: 005043a2 (CONDITIONAL_JUMP)  ; LAB_005043a2
    PUSH 0xa                            ; 0050050c
        ;   Label: LAB_0050050c
    PUSH 0x58f8d5                       ; 0050050e | = "turnToFace"
    PUSH ESI                            ; 00500513
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00500514
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00500519
    TEST EAX,EAX                        ; 0050051c
    JNZ 0x00500537                      ; 0050051e
        ;   XREF to: 00500537 (CONDITIONAL_JUMP)  ; LAB_00500537
    MOV AL,byte ptr [ESI + 0xa]         ; 00500520
    INC AL                              ; 00500523
    AND EAX,0xff                        ; 00500525
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 0050052a | DAT_005c168c
    JZ 0x005044ba                       ; 00500531
        ;   XREF to: 005044ba (CONDITIONAL_JUMP)  ; LAB_005044ba
    PUSH 0x4                            ; 00500537
        ;   Label: LAB_00500537
    PUSH 0x58f918                       ; 00500539 | = "wait"
    PUSH ESI                            ; 0050053e
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 0050053f
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00500544
    TEST EAX,EAX                        ; 00500547
    JNZ 0x00500562                      ; 00500549
        ;   XREF to: 00500562 (CONDITIONAL_JUMP)  ; LAB_00500562
    MOV AL,byte ptr [ESI + 0x4]         ; 0050054b
    INC AL                              ; 0050054e
    AND EAX,0xff                        ; 00500550
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 00500555 | DAT_005c168c
    JZ 0x005045da                       ; 0050055c
        ;   XREF to: 005045da (CONDITIONAL_JUMP)  ; LAB_005045da
    PUSH 0x7                            ; 00500562
        ;   Label: LAB_00500562
    PUSH 0x58f94f                       ; 00500564 | = "waitFor"
    PUSH ESI                            ; 00500569
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 0050056a
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0050056f
    TEST EAX,EAX                        ; 00500572
    JNZ 0x0050058d                      ; 00500574
        ;   XREF to: 0050058d (CONDITIONAL_JUMP)  ; LAB_0050058d
    MOV AL,byte ptr [ESI + 0x7]         ; 00500576
    INC AL                              ; 00500579
    AND EAX,0xff                        ; 0050057b
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 00500580 | DAT_005c168c
    JZ 0x00504678                       ; 00500587
        ;   XREF to: 00504678 (CONDITIONAL_JUMP)  ; LAB_00504678
    PUSH 0x6                            ; 0050058d
        ;   Label: LAB_0050058d
    PUSH 0x58f957                       ; 0050058f | = "walkTo"
    PUSH ESI                            ; 00500594
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00500595
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0050059a
    TEST EAX,EAX                        ; 0050059d
    JNZ 0x005005b8                      ; 0050059f
        ;   XREF to: 005005b8 (CONDITIONAL_JUMP)  ; LAB_005005b8
    MOV AL,byte ptr [ESI + 0x6]         ; 005005a1
    INC AL                              ; 005005a4
    AND EAX,0xff                        ; 005005a6
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 005005ab | DAT_005c168c
    JZ 0x005046e2                       ; 005005b2
        ;   XREF to: 005046e2 (CONDITIONAL_JUMP)  ; LAB_005046e2
    PUSH ESI                            ; 005005b8
        ;   Label: LAB_005005b8
    MOV ECX,dword ptr [ESP + 0x3e90]    ; 005005b9
    PUSH ECX                            ; 005005c0
    PUSH 0x58fa13                       ; 005005c1 | = "Unknown command on line %d: %s"
    JMP 0x004ff42f                      ; 005005c6
        ;   XREF to: 004ff42f (UNCONDITIONAL_JUMP)  ; LAB_004ff42f
    CMP dword ptr [0x01e56418],0x0      ; 005005cb | DAT_01e56418
        ;   Label: LAB_005005cb
    JZ 0x005005de                       ; 005005d2
        ;   XREF to: 005005de (CONDITIONAL_JUMP)  ; LAB_005005de
    MOV dword ptr [0x01e56418],0x1      ; 005005d4 | DAT_01e56418
    MOV dword ptr [ESP + 0x3e90],0x58e5ea ; 005005de | CHAR_00h_0058e5ea
        ;   Label: LAB_005005de
    JMP 0x004ff36b                      ; 005005e9
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    CMP dword ptr [0x01e56418],0x0      ; 005005ee | DAT_01e56418
        ;   Label: LAB_005005ee
    JZ 0x00500601                       ; 005005f5
        ;   XREF to: 00500601 (CONDITIONAL_JUMP)  ; LAB_00500601
    MOV dword ptr [0x01e56418],0x2      ; 005005f7 | DAT_01e56418
    MOV dword ptr [ESP + 0x3e90],0x58e5fa ; 00500601 | CHAR_00h_0058e5fa
        ;   Label: LAB_00500601
    JMP 0x004ff36b                      ; 0050060c
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    CMP dword ptr [0x01e56418],0x0      ; 00500611 | DAT_01e56418
        ;   Label: LAB_00500611
    JNZ 0x00500639                      ; 00500618
        ;   XREF to: 00500639 (CONDITIONAL_JUMP)  ; LAB_00500639
    PUSH ESI                            ; 0050061a
    MOV EAX,[0x005b7650]                ; 0050061b | DAT_005b7650
    PUSH EAX                            ; 00500620
    CALL core_event.cpp_CEventList_executeCommands_FUN_0047ab70 ; 00500621
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0047ab70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00500626
    MOV dword ptr [ESP + 0x3e90],0x58e756 ; 00500629 | CHAR_00h_0058e756
        ;   Label: LAB_00500629
    JMP 0x004ff36b                      ; 00500634
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH ESI                            ; 00500639
        ;   Label: LAB_00500639
    MOV EDX,dword ptr [0x005b7650]      ; 0050063a | DAT_005b7650
    PUSH EDX                            ; 00500640
    CALL core_event.cpp_CEventList_validateCommands_FUN_0047dcd0 ; 00500641
        ;   XREF to: 0047dcd0 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCommands_FUN_0047dcd0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00500646
    TEST EAX,EAX                        ; 00500649
    JZ 0x00500629                       ; 0050064b
        ;   XREF to: 00500629 (CONDITIONAL_JUMP)  ; LAB_00500629
    MOV EDI,0x1e56420                   ; 0050064d
        ;   Label: LAB_0050064d
    MOV ESI,EAX                         ; 00500652
    PUSH EDI                            ; 00500654 | DAT_01e56420
    MOV AL,byte ptr [ESI]               ; 00500655
        ;   Label: LAB_00500655
    MOV byte ptr [EDI],AL               ; 00500657 | DAT_01e56420 | DAT_01e56422
    CMP AL,0x0                          ; 00500659
    JZ 0x0050066d                       ; 0050065b
        ;   XREF to: 0050066d (CONDITIONAL_JUMP)  ; LAB_0050066d
    MOV AL,byte ptr [ESI + 0x1]         ; 0050065d
    ADD ESI,0x2                         ; 00500660
    MOV byte ptr [EDI + 0x1],AL         ; 00500663 | DAT_01e56421 | DAT_01e56423
    ADD EDI,0x2                         ; 00500666
    CMP AL,0x0                          ; 00500669
    JNZ 0x00500655                      ; 0050066b
        ;   XREF to: 00500655 (CONDITIONAL_JUMP)  ; LAB_00500655
    POP EDI                             ; 0050066d
        ;   Label: LAB_0050066d
    JMP 0x004ff43c                      ; 0050066e
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    ADD ESI,0x12                        ; 00500673
        ;   Label: LAB_00500673
    PUSH ESI                            ; 00500676
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00500677
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 0050067c
    LEA EDX,[ESP + 0x3ec0]              ; 0050067f
    PUSH EDX                            ; 00500686
    LEA EDX,[ESP + 0x17c8]              ; 00500687
    PUSH EDX                            ; 0050068e
    LEA EDX,[ESP + 0x3194]              ; 0050068f
    PUSH EDX                            ; 00500696
    PUSH 0x58e76a                       ; 00500697 | = " ( %[^,], %[^)])%n"
    MOV ESI,0xffffffff                  ; 0050069c
    PUSH EAX                            ; 005006a1
    MOV dword ptr [ESP + 0x3ea4],EAX    ; 005006a2
    MOV dword ptr [ESP + 0x3ed4],ESI    ; 005006a9
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 005006b0
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x14                        ; 005006b5
    MOV EDI,dword ptr [ESP + 0x3ec0]    ; 005006b8
    CMP EDI,0x3                         ; 005006bf
    JGE 0x005006db                      ; 005006c2
        ;   XREF to: 005006db (CONDITIONAL_JUMP)  ; LAB_005006db
    PUSH 0x58e77d                       ; 005006c4 | = "Error parsing addItemToInventory comm..."
    PUSH 0x1e56420                      ; 005006c9 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 005006ce
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 005006d3
    JMP 0x004ff43c                      ; 005006d6
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 005006db
        ;   Label: LAB_005006db
    LEA EAX,[ESP + 0x318c]              ; 005006e2
    ADD EDX,EDI                         ; 005006e9
    PUSH EAX                            ; 005006eb
    MOV dword ptr [ESP + 0x3e94],EDX    ; 005006ec
    CALL core_script.cpp_trimString_FUN_004fe000 ; 005006f3
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 005006f8
    LEA EAX,[ESP + 0x17c4]              ; 005006fb
    PUSH EAX                            ; 00500702
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00500703
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00500708
    PUSH 0x1cae0ec                      ; 0050070b
    MOV ECX,dword ptr [0x01cae124]      ; 00500710 | g_CHeroActorType_01cae0ec.name_hash
    PUSH ECX                            ; 00500716
    LEA EAX,[ESP + 0x3194]              ; 00500717
    PUSH EAX                            ; 0050071e
    CALL core_script.cpp_getActor_FUN_004fe180 ; 0050071f
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV ESI,EAX                         ; 00500724
    ADD ESP,0xc                         ; 00500726
    TEST EAX,EAX                        ; 00500729
    JNZ 0x0050073f                      ; 0050072b
        ;   XREF to: 0050073f (CONDITIONAL_JUMP)  ; LAB_0050073f
    CMP dword ptr [0x01e56c2c],0x0      ; 0050072d | DAT_01e56c2c
    JNZ 0x004ff384                      ; 00500734
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 0050073a
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    PUSH 0x763e48                       ; 0050073f | g_CDemonActorActorType_00763e48
        ;   Label: LAB_0050073f
    MOV EDI,dword ptr [0x00763e80]      ; 00500744 | g_CDemonActorActorType_00763e48.name_hash
    PUSH EDI                            ; 0050074a
    LEA EAX,[ESP + 0x17cc]              ; 0050074b
    PUSH EAX                            ; 00500752
    CALL core_script.cpp_getActor_FUN_004fe180 ; 00500753
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00500758
    TEST EAX,EAX                        ; 0050075b
    JNZ 0x00500771                      ; 0050075d
        ;   XREF to: 00500771 (CONDITIONAL_JUMP)  ; LAB_00500771
    CMP dword ptr [0x01e56c2c],0x0      ; 0050075f | DAT_01e56c2c
    JNZ 0x004ff384                      ; 00500766
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 0050076c
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV EDX,dword ptr [0x01e56418]      ; 00500771 | DAT_01e56418
        ;   Label: LAB_00500771
    TEST EDX,EDX                        ; 00500777
    JNZ 0x004ff36b                      ; 00500779
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH EDX                            ; 0050077f
    PUSH EAX                            ; 00500780
    ADD ESI,0x1f5a0                     ; 00500781
    PUSH ESI                            ; 00500787
    CALL core_inv.cpp_CInventory_addItem_FUN_004bf360 ; 00500788
        ;   XREF to: 004bf360 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004bf360(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 0050078d
    JMP 0x004ff36b                      ; 00500790
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0xe                         ; 00500795
        ;   Label: LAB_00500795
    PUSH ESI                            ; 00500798
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00500799
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 0050079e
    LEA EDX,[ESP + 0x3ec8]              ; 005007a1
    PUSH EDX                            ; 005007a8
    LEA EDX,[ESP + 0x3f0c]              ; 005007a9
    PUSH EDX                            ; 005007b0
    LEA EDX,[ESP + 0x3bd0]              ; 005007b1
    PUSH EDX                            ; 005007b8
    LEA EDX,[ESP + 0x39e0]              ; 005007b9
    PUSH EDX                            ; 005007c0
    PUSH 0x58e7bb                       ; 005007c1 | = "( %[^,], %[^,], %f )%n"
    MOV EDI,0xffffffff                  ; 005007c6
    PUSH EAX                            ; 005007cb
    MOV dword ptr [ESP + 0x3ea8],EAX    ; 005007cc
    MOV dword ptr [ESP + 0x3ee0],EDI    ; 005007d3
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 005007da
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x18                        ; 005007df
    MOV EAX,dword ptr [ESP + 0x3ec8]    ; 005007e2
    CMP EAX,0x5                         ; 005007e9
    JGE 0x00500805                      ; 005007ec
        ;   XREF to: 00500805 (CONDITIONAL_JUMP)  ; LAB_00500805
    PUSH 0x58e7d2                       ; 005007ee | = "Error parsing addLightFilter command ..."
    PUSH 0x1e56420                      ; 005007f3 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 005007f8
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 005007fd
    JMP 0x004ff43c                      ; 00500800
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 00500805
        ;   Label: LAB_00500805
    ADD EDX,EAX                         ; 0050080c
    LEA EAX,[ESP + 0x3ea8]              ; 0050080e
    PUSH EAX                            ; 00500815
    LEA EAX,[ESP + 0x3e9c]              ; 00500816
    PUSH EAX                            ; 0050081d
    LEA EAX,[ESP + 0x39dc]              ; 0050081e
    PUSH EAX                            ; 00500825
    MOV ECX,dword ptr [0x005be368]      ; 00500826 | g_CDemonSet_PTR_005be368
    PUSH ECX                            ; 0050082c | g_CDemonSet_01e57284
    MOV dword ptr [ESP + 0x3ea0],EDX    ; 0050082d
    CALL core_set.cpp_CDemonSet_addLightFilter_FUN_0050e5d0 ; 00500834
        ;   XREF to: 0050e5d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addLightFilter_FUN_0050e5d0(CDemonSet * this_ptr, char * light_name, C3DSLight * * out_light, CDemonLight * * out_master_light)
    ADD ESP,0x10                        ; 00500839
    CMP dword ptr [ESP + 0x3e98],0x0    ; 0050083c
    JNZ 0x00500865                      ; 00500844
        ;   XREF to: 00500865 (CONDITIONAL_JUMP)  ; LAB_00500865
    LEA EAX,[ESP + 0x39d4]              ; 00500846
    PUSH EAX                            ; 0050084d
    PUSH 0x58e7fd                       ; 0050084e | = "Light \"%s\" does not exist"
    PUSH 0x1e56420                      ; 00500853 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00500858
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 0050085d
    JMP 0x004ff43c                      ; 00500860
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    LEA EAX,[ESP + 0x3bc8]              ; 00500865
        ;   Label: LAB_00500865
    PUSH EAX                            ; 0050086c
    PUSH 0x58e817                       ; 0050086d | = "art"
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 00500872
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004568c0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00500877
    TEST EAX,EAX                        ; 0050087a
    JLE 0x005008b1                      ; 0050087c
        ;   XREF to: 005008b1 (CONDITIONAL_JUMP)  ; LAB_005008b1
    MOV EDI,dword ptr [0x01e56418]      ; 0050087e | DAT_01e56418
    TEST EDI,EDI                        ; 00500884
    JNZ 0x004ff36b                      ; 00500886
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH EDI                            ; 0050088c
    LEA EAX,[ESP + 0x3bcc]              ; 0050088d
    PUSH dword ptr [ESP + 0x3f0c]       ; 00500894
    PUSH EAX                            ; 0050089b
    MOV EAX,dword ptr [ESP + 0x3ea4]    ; 0050089c
    PUSH EAX                            ; 005008a3
    CALL core_setutil.cpp_C3DSLight_addFilter_FUN_00515710 ; 005008a4
        ;   XREF to: 00515710 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSLight_addFilter_FUN_00515710(C3DSLight * this_ptr, char * filter_name, float duration, int filter_mode)
    ADD ESP,0x10                        ; 005008a9
    JMP 0x004ff36b                      ; 005008ac
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    LEA EAX,[ESP + 0x3bc8]              ; 005008b1
        ;   Label: LAB_005008b1
    PUSH EAX                            ; 005008b8
    PUSH 0x58e81b                       ; 005008b9 | = "Can't open filter \"%s\""
    PUSH 0x1e56420                      ; 005008be | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 005008c3
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 005008c8
    JMP 0x004ff43c                      ; 005008cb
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    ADD ESI,0x10                        ; 005008d0
        ;   Label: LAB_005008d0
    PUSH ESI                            ; 005008d3
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 005008d4
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 005008d9
    MOV dword ptr [ESP + 0x3e90],EAX    ; 005008dc
    LEA EAX,[ESP + 0x3b00]              ; 005008e3
    PUSH EAX                            ; 005008ea
    LEA EAX,[ESP + 0x3e94]              ; 005008eb
    PUSH EAX                            ; 005008f2
    CALL core_script.cpp_parseConditionExpr_FUN_004fe140 ; 005008f3
        ;   XREF to: 004fe140 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseConditionExpr_FUN_004fe140(char * * cursor, char * out_buffer)
    ADD ESP,0x8                         ; 005008f8
    TEST EAX,EAX                        ; 005008fb
    JNZ 0x0050064d                      ; 005008fd
        ;   XREF to: 0050064d (CONDITIONAL_JUMP)  ; LAB_0050064d
    CMP dword ptr [0x01e56418],0x0      ; 00500903 | DAT_01e56418
    JNZ 0x004ff36b                      ; 0050090a
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    LEA EAX,[ESP + 0x3b00]              ; 00500910
    PUSH EAX                            ; 00500917
    MOV ECX,dword ptr [0x005b7650]      ; 00500918 | DAT_005b7650
    PUSH ECX                            ; 0050091e
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 0050091f
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    MOV EDX,dword ptr [0x005b9354]      ; 00500924 | g_CGame_PTR_005b9354
    ADD ESP,0x8                         ; 0050092a
    MOV dword ptr [EDX + 0x230],EAX     ; 0050092d | g_CGame_01c775ec.allow_enemy_attack_flag
    JMP 0x004ff36b                      ; 00500933
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0x11                        ; 00500938
        ;   Label: LAB_00500938
    PUSH ESI                            ; 0050093b
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 0050093c
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00500941
    MOV dword ptr [ESP + 0x3e90],EAX    ; 00500944
    LEA EAX,[ESP + 0x345c]              ; 0050094b
    PUSH EAX                            ; 00500952
    LEA EAX,[ESP + 0x3e94]              ; 00500953
    PUSH EAX                            ; 0050095a
    CALL core_script.cpp_parseConditionExpr_FUN_004fe140 ; 0050095b
        ;   XREF to: 004fe140 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseConditionExpr_FUN_004fe140(char * * cursor, char * out_buffer)
    ADD ESP,0x8                         ; 00500960
    TEST EAX,EAX                        ; 00500963
    JNZ 0x0050064d                      ; 00500965
        ;   XREF to: 0050064d (CONDITIONAL_JUMP)  ; LAB_0050064d
    CMP dword ptr [0x01e56418],0x0      ; 0050096b | DAT_01e56418
    JNZ 0x004ff36b                      ; 00500972
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    LEA EAX,[ESP + 0x345c]              ; 00500978
    PUSH EAX                            ; 0050097f
    MOV EDI,dword ptr [0x005b7650]      ; 00500980 | DAT_005b7650
    PUSH EDI                            ; 00500986
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 00500987
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0050098c
    XOR EDX,EDX                         ; 0050098f
    TEST EAX,EAX                        ; 00500991
    SETZ AL                             ; 00500993
    MOV DL,AL                           ; 00500996
    MOV EAX,[0x005b9354]                ; 00500998 | g_CGame_PTR_005b9354
    MOV dword ptr [0x01e56c24],EDX      ; 0050099d | DAT_01e56c24
    MOV dword ptr [EAX + 0x238],EDX     ; 005009a3 | g_CGame_01c775ec.allow_hero_controls_flag
    JMP 0x004ff36b                      ; 005009a9
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0xf                         ; 005009ae
        ;   Label: LAB_005009ae
    PUSH ESI                            ; 005009b1
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 005009b2
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 005009b7
    MOV dword ptr [ESP + 0x3e90],EAX    ; 005009ba
    LEA EAX,[ESP + 0x34c0]              ; 005009c1
    PUSH EAX                            ; 005009c8
    LEA EAX,[ESP + 0x3e94]              ; 005009c9
    PUSH EAX                            ; 005009d0
    CALL core_script.cpp_parseConditionExpr_FUN_004fe140 ; 005009d1
        ;   XREF to: 004fe140 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseConditionExpr_FUN_004fe140(char * * cursor, char * out_buffer)
    ADD ESP,0x8                         ; 005009d6
    TEST EAX,EAX                        ; 005009d9
    JNZ 0x0050064d                      ; 005009db
        ;   XREF to: 0050064d (CONDITIONAL_JUMP)  ; LAB_0050064d
    CMP dword ptr [0x01e56418],0x0      ; 005009e1 | DAT_01e56418
    JNZ 0x004ff36b                      ; 005009e8
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    LEA EAX,[ESP + 0x34c0]              ; 005009ee
    PUSH EAX                            ; 005009f5
    MOV EDX,dword ptr [0x005b7650]      ; 005009f6 | DAT_005b7650
    PUSH EDX                            ; 005009fc
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 005009fd
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    MOV EDX,dword ptr [0x005b9354]      ; 00500a02 | g_CGame_PTR_005b9354
    ADD ESP,0x8                         ; 00500a08
    MOV dword ptr [EDX + 0x22c],EAX     ; 00500a0b | g_CGame_01c775ec.allow_damage_flag
    JMP 0x004ff36b                      ; 00500a11
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0x15                        ; 00500a16
        ;   Label: LAB_00500a16
    PUSH ESI                            ; 00500a19
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00500a1a
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00500a1f
    LEA EDX,[ESP + 0x3e9c]              ; 00500a22
    PUSH EDX                            ; 00500a29
    LEA EDX,[ESP + 0x3258]              ; 00500a2a
    PUSH EDX                            ; 00500a31
    LEA EDX,[ESP + 0x26a4]              ; 00500a32
    PUSH EDX                            ; 00500a39
    PUSH 0x58e87b                       ; 00500a3a | = "(%[^,], %[^)])%n"
    MOV ECX,0xffffffff                  ; 00500a3f
    PUSH EAX                            ; 00500a44
    MOV dword ptr [ESP + 0x3ea4],EAX    ; 00500a45
    MOV dword ptr [ESP + 0x3eb0],ECX    ; 00500a4c
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00500a53
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x14                        ; 00500a58
    MOV ESI,dword ptr [ESP + 0x3e9c]    ; 00500a5b
    CMP ESI,0x2                         ; 00500a62
    JGE 0x00500a7e                      ; 00500a65
        ;   XREF to: 00500a7e (CONDITIONAL_JUMP)  ; LAB_00500a7e
    PUSH 0x58e88c                       ; 00500a67 | = "Error parsing attachActorToPlatform c..."
    PUSH 0x1e56420                      ; 00500a6c | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00500a71
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00500a76
    JMP 0x004ff43c                      ; 00500a79
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV EDI,dword ptr [ESP + 0x3e90]    ; 00500a7e
        ;   Label: LAB_00500a7e
    LEA EAX,[ESP + 0x269c]              ; 00500a85
    ADD EDI,ESI                         ; 00500a8c
    PUSH EAX                            ; 00500a8e
    MOV dword ptr [ESP + 0x3e94],EDI    ; 00500a8f
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00500a96
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00500a9b
    LEA EAX,[ESP + 0x3254]              ; 00500a9e
    PUSH EAX                            ; 00500aa5
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00500aa6
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00500aab
    PUSH 0x1e42894                      ; 00500aae
    MOV EAX,[0x01e428cc]                ; 00500ab3 | g_CPlatformActorType_01e42894.name_hash
    PUSH EAX                            ; 00500ab8
    LEA EAX,[ESP + 0x325c]              ; 00500ab9
    PUSH EAX                            ; 00500ac0
    CALL core_script.cpp_getActor_FUN_004fe180 ; 00500ac1
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV ESI,EAX                         ; 00500ac6
    ADD ESP,0xc                         ; 00500ac8
    TEST EAX,EAX                        ; 00500acb
    JNZ 0x00500ae1                      ; 00500acd
        ;   XREF to: 00500ae1 (CONDITIONAL_JUMP)  ; LAB_00500ae1
    CMP dword ptr [0x01e56c2c],0x0      ; 00500acf | DAT_01e56c2c
    JNZ 0x004ff384                      ; 00500ad6
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 00500adc
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    PUSH 0x763e48                       ; 00500ae1 | g_CDemonActorActorType_00763e48
        ;   Label: LAB_00500ae1
    MOV EDX,dword ptr [0x00763e80]      ; 00500ae6 | g_CDemonActorActorType_00763e48.name_hash
    PUSH EDX                            ; 00500aec
    LEA EAX,[ESP + 0x26a4]              ; 00500aed
    PUSH EAX                            ; 00500af4
    CALL core_script.cpp_getActor_FUN_004fe180 ; 00500af5
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00500afa
    TEST EAX,EAX                        ; 00500afd
    JNZ 0x00500b13                      ; 00500aff
        ;   XREF to: 00500b13 (CONDITIONAL_JUMP)  ; LAB_00500b13
    CMP dword ptr [0x01e56c2c],0x0      ; 00500b01 | DAT_01e56c2c
    JNZ 0x004ff384                      ; 00500b08
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 00500b0e
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    CMP dword ptr [0x01e56418],0x0      ; 00500b13 | DAT_01e56418
        ;   Label: LAB_00500b13
    JNZ 0x004ff36b                      ; 00500b1a
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH EAX                            ; 00500b20
    PUSH ESI                            ; 00500b21
    CALL core_platfrm.cpp_CPlatform_attachActor_FUN_004f75c0 ; 00500b22
        ;   XREF to: 004f75c0 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_attachActor_FUN_004f75c0(CPlatform * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00500b27
    JMP 0x004ff36b                      ; 00500b2a
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0xb                         ; 00500b2f
        ;   Label: LAB_00500b2f
    PUSH ESI                            ; 00500b32
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00500b33
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00500b38
    MOV dword ptr [ESP + 0x3e90],EAX    ; 00500b3b
    CMP dword ptr [0x01e56418],0x0      ; 00500b42 | DAT_01e56418
    JNZ 0x004ff36b                      ; 00500b49
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV EDX,dword ptr [0x005b9354]      ; 00500b4f | g_CGame_PTR_005b9354
    PUSH EDX                            ; 00500b55 | g_CGame_01c775ec
    CALL core_game.cpp_CGame_beginFadeIn_FUN_004a37e0 ; 00500b56
        ;   XREF to: 004a37e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_beginFadeIn_FUN_004a37e0(CGame * this_ptr)
    ADD ESP,0x4                         ; 00500b5b
    JMP 0x004ff36b                      ; 00500b5e
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0xc                         ; 00500b63
        ;   Label: LAB_00500b63
    PUSH ESI                            ; 00500b66
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00500b67
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00500b6c
    MOV ECX,dword ptr [0x01e56418]      ; 00500b6f | DAT_01e56418
    MOV dword ptr [ESP + 0x3e90],EAX    ; 00500b75
    TEST ECX,ECX                        ; 00500b7c
    JNZ 0x004ff36b                      ; 00500b7e
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV ESI,dword ptr [0x005b9354]      ; 00500b84 | g_CGame_PTR_005b9354
    PUSH ESI                            ; 00500b8a | g_CGame_01c775ec
    CALL core_game.cpp_CGame_beginFadeOut_FUN_004a3820 ; 00500b8b
        ;   XREF to: 004a3820 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_beginFadeOut_FUN_004a3820(CGame * this_ptr)
    ADD ESP,0x4                         ; 00500b90
    JMP 0x004ff36b                      ; 00500b93
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0xa                         ; 00500b98
        ;   Label: LAB_00500b98
    PUSH ESI                            ; 00500b9b
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00500b9c
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00500ba1
    MOV EDI,dword ptr [0x01e56418]      ; 00500ba4 | DAT_01e56418
    MOV dword ptr [ESP + 0x3e90],EAX    ; 00500baa
    TEST EDI,EDI                        ; 00500bb1
    JNZ 0x004ff36b                      ; 00500bb3
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV EAX,dword ptr [ESP + 0x3e8c]    ; 00500bb9
    PUSH EAX                            ; 00500bc0
    PUSH 0x58e8e2                       ; 00500bc1 | = "Script breakpoint reached at line %d"
    LEA EAX,[ESP + 0x3658]              ; 00500bc6
    PUSH EAX                            ; 00500bcd
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00500bce
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 00500bd3
    LEA EAX,[ESP + 0x3650]              ; 00500bd6
    PUSH 0x40a00000                     ; 00500bdd
    PUSH EAX                            ; 00500be2
    MOV EDX,dword ptr [0x005b9354]      ; 00500be3 | g_CGame_PTR_005b9354
    PUSH EDX                            ; 00500be9 | g_CGame_01c775ec
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 00500bea
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 00500bef
    MOV dword ptr [EBX + 0x18],0x2      ; 00500bf2
    JMP 0x004ff36b                      ; 00500bf9
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0x10                        ; 00500bfe
        ;   Label: LAB_00500bfe
    PUSH ESI                            ; 00500c01
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00500c02
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00500c07
    MOV ECX,dword ptr [0x01e56418]      ; 00500c0a | DAT_01e56418
    MOV dword ptr [ESP + 0x3e90],EAX    ; 00500c10
    TEST ECX,ECX                        ; 00500c17
    JNZ 0x004ff36b                      ; 00500c19
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV ESI,dword ptr [0x005be368]      ; 00500c1f | g_CDemonSet_PTR_005be368
    PUSH ESI                            ; 00500c25 | g_CDemonSet_01e57284
    CALL core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0 ; 00500c26
        ;   XREF to: 005135f0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00500c2b
    JMP 0x004ff36b                      ; 00500c2e
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0xc                         ; 00500c33
        ;   Label: LAB_00500c33
    PUSH ESI                            ; 00500c36
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00500c37
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00500c3c
    PUSH 0xc8                           ; 00500c3f
    MOV dword ptr [ESP + 0x3e94],EAX    ; 00500c44
    LEA EAX,[ESP + 0x1c78]              ; 00500c4b
    PUSH EAX                            ; 00500c52
    LEA EAX,[ESP + 0x3e98]              ; 00500c53
    PUSH EAX                            ; 00500c5a
    CALL core_script.cpp_parseArgument_FUN_004fe090 ; 00500c5b
        ;   XREF to: 004fe090 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_004fe090(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 00500c60
    TEST EAX,EAX                        ; 00500c63
    JZ 0x00500c8d                       ; 00500c65
        ;   XREF to: 00500c8d (CONDITIONAL_JUMP)  ; LAB_00500c8d
    MOV EDI,0x1e56420                   ; 00500c67
    MOV ESI,EAX                         ; 00500c6c
    PUSH EDI                            ; 00500c6e | DAT_01e56420
    MOV AL,byte ptr [ESI]               ; 00500c6f
        ;   Label: LAB_00500c6f
    MOV byte ptr [EDI],AL               ; 00500c71 | DAT_01e56420 | DAT_01e56422
    CMP AL,0x0                          ; 00500c73
    JZ 0x00500c87                       ; 00500c75
        ;   XREF to: 00500c87 (CONDITIONAL_JUMP)  ; LAB_00500c87
    MOV AL,byte ptr [ESI + 0x1]         ; 00500c77
    ADD ESI,0x2                         ; 00500c7a
    MOV byte ptr [EDI + 0x1],AL         ; 00500c7d | DAT_01e56421 | DAT_01e56423
    ADD EDI,0x2                         ; 00500c80
    CMP AL,0x0                          ; 00500c83
    JNZ 0x00500c6f                      ; 00500c85
        ;   XREF to: 00500c6f (CONDITIONAL_JUMP)  ; LAB_00500c6f
    POP EDI                             ; 00500c87
        ;   Label: LAB_00500c87
    JMP 0x004ff43c                      ; 00500c88
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    PUSH 0x58e925                       ; 00500c8d | = "all"
        ;   Label: LAB_00500c8d
    LEA EAX,[ESP + 0x1c78]              ; 00500c92
    PUSH EAX                            ; 00500c99
    CALL crt_string.c__stricmp_FUN_00564520 ; 00500c9a
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 00500c9f
    TEST EAX,EAX                        ; 00500ca2
    JNZ 0x00500d00                      ; 00500ca4
        ;   XREF to: 00500d00 (CONDITIONAL_JUMP)  ; LAB_00500d00
    MOV ESI,dword ptr [0x01e56418]      ; 00500ca6 | DAT_01e56418
    TEST ESI,ESI                        ; 00500cac
    JNZ 0x004ff36b                      ; 00500cae
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    XOR EDI,EDI                         ; 00500cb4
    MOV EAX,[0x005be368]                ; 00500cb6 | g_CDemonSet_PTR_005be368
        ;   Label: LAB_00500cb6
    CMP ESI,dword ptr [EAX + 0x14cd6c]  ; 00500cbb | g_CDemonSet_01e57284.actor_count
    JGE 0x004ff36b                      ; 00500cc1
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV ECX,dword ptr [0x00765a98]      ; 00500cc7 | g_CCharacterActorType_00765a60.name_hash
    PUSH ECX                            ; 00500ccd
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0x14cd70] ; 00500cce | g_CDemonSet_01e57284.actors[0]
    PUSH EDX                            ; 00500cd5
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00500cd6
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00500cdb
    TEST EAX,EAX                        ; 00500cde
    JNZ 0x00500ce8                      ; 00500ce0
        ;   XREF to: 00500ce8 (CONDITIONAL_JUMP)  ; LAB_00500ce8
    INC ESI                             ; 00500ce2
        ;   Label: LAB_00500ce2
    ADD EDI,0x4                         ; 00500ce3
    JMP 0x00500cb6                      ; 00500ce6
        ;   XREF to: 00500cb6 (UNCONDITIONAL_JUMP)  ; LAB_00500cb6
    PUSH 0x0                            ; 00500ce8
        ;   Label: LAB_00500ce8
    PUSH 0x0                            ; 00500cea
    PUSH 0x0                            ; 00500cec
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00500cee
    PUSH EAX                            ; 00500cf4
    CALL dword ptr [EDX + 0x128]        ; 00500cf5
    ADD ESP,0x10                        ; 00500cfb
    JMP 0x00500ce2                      ; 00500cfe
        ;   XREF to: 00500ce2 (UNCONDITIONAL_JUMP)  ; LAB_00500ce2
    PUSH 0x765a60                       ; 00500d00 | g_CCharacterActorType_00765a60
        ;   Label: LAB_00500d00
    MOV EDI,dword ptr [0x00765a98]      ; 00500d05 | g_CCharacterActorType_00765a60.name_hash
    PUSH EDI                            ; 00500d0b
    LEA EAX,[ESP + 0x1c7c]              ; 00500d0c
    PUSH EAX                            ; 00500d13
    CALL core_script.cpp_getActor_FUN_004fe180 ; 00500d14
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00500d19
    TEST EAX,EAX                        ; 00500d1c
    JNZ 0x00500d32                      ; 00500d1e
        ;   XREF to: 00500d32 (CONDITIONAL_JUMP)  ; LAB_00500d32
    CMP dword ptr [0x01e56c2c],0x0      ; 00500d20 | DAT_01e56c2c
    JNZ 0x004ff384                      ; 00500d27
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 00500d2d
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    CMP dword ptr [0x01e56418],0x0      ; 00500d32 | DAT_01e56418
        ;   Label: LAB_00500d32
    JNZ 0x004ff36b                      ; 00500d39
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH 0x0                            ; 00500d3f
    PUSH 0x0                            ; 00500d41
    PUSH 0x0                            ; 00500d43
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00500d45
    PUSH EAX                            ; 00500d4b
    CALL dword ptr [EDX + 0x128]        ; 00500d4c
    ADD ESP,0x10                        ; 00500d52
    JMP 0x004ff36b                      ; 00500d55
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0xe                         ; 00500d5a
        ;   Label: LAB_00500d5a
    PUSH ESI                            ; 00500d5d
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00500d5e
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00500d63
    PUSH 0xc8                           ; 00500d66
    MOV dword ptr [ESP + 0x3e94],EAX    ; 00500d6b
    LEA EAX,[ESP + 0x1188]              ; 00500d72
    PUSH EAX                            ; 00500d79
    LEA EAX,[ESP + 0x3e98]              ; 00500d7a
    PUSH EAX                            ; 00500d81
    CALL core_script.cpp_parseArgument_FUN_004fe090 ; 00500d82
        ;   XREF to: 004fe090 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_004fe090(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 00500d87
    TEST EAX,EAX                        ; 00500d8a
    JZ 0x00500db4                       ; 00500d8c
        ;   XREF to: 00500db4 (CONDITIONAL_JUMP)  ; LAB_00500db4
    MOV EDI,0x1e56420                   ; 00500d8e
    MOV ESI,EAX                         ; 00500d93
    PUSH EDI                            ; 00500d95 | DAT_01e56420
    MOV AL,byte ptr [ESI]               ; 00500d96
        ;   Label: LAB_00500d96
    MOV byte ptr [EDI],AL               ; 00500d98 | DAT_01e56420 | DAT_01e56422
    CMP AL,0x0                          ; 00500d9a
    JZ 0x00500dae                       ; 00500d9c
        ;   XREF to: 00500dae (CONDITIONAL_JUMP)  ; LAB_00500dae
    MOV AL,byte ptr [ESI + 0x1]         ; 00500d9e
    ADD ESI,0x2                         ; 00500da1
    MOV byte ptr [EDI + 0x1],AL         ; 00500da4 | DAT_01e56421 | DAT_01e56423
    ADD EDI,0x2                         ; 00500da7
    CMP AL,0x0                          ; 00500daa
    JNZ 0x00500d96                      ; 00500dac
        ;   XREF to: 00500d96 (CONDITIONAL_JUMP)  ; LAB_00500d96
    POP EDI                             ; 00500dae
        ;   Label: LAB_00500dae
    JMP 0x004ff43c                      ; 00500daf
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    LEA EAX,[ESP + 0x1184]              ; 00500db4
        ;   Label: LAB_00500db4
    PUSH EAX                            ; 00500dbb
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00500dbc
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    MOV EDI,dword ptr [0x01e56418]      ; 00500dc1 | DAT_01e56418
    ADD ESP,0x4                         ; 00500dc7
    TEST EDI,EDI                        ; 00500dca
    JNZ 0x004ff36b                      ; 00500dcc
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    LEA EAX,[ESP + 0x1184]              ; 00500dd2
    PUSH EAX                            ; 00500dd9
    MOV EAX,[0x005baf90]                ; 00500dda | g_CDemonMission_PTR_005baf90
    PUSH EAX                            ; 00500ddf
    CALL core_mission.cpp_CDemonMission_setMissionName_FUN_004d9650 ; 00500de0
        ;   XREF to: 004d9650 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_setMissionName_FUN_004d9650(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 00500de5
    MOV dword ptr [EBX],0x1             ; 00500de8
    MOV dword ptr [ESP + 0x3e84],EDI    ; 00500dee
    JMP 0x004ff36b                      ; 00500df5
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0x12                        ; 00500dfa
        ;   Label: LAB_00500dfa
    PUSH ESI                            ; 00500dfd
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00500dfe
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00500e03
    PUSH 0x12c                          ; 00500e06
    MOV dword ptr [ESP + 0x3e94],EAX    ; 00500e0b
    LEA EAX,[ESP + 0x954]               ; 00500e12
    PUSH EAX                            ; 00500e19
    LEA EAX,[ESP + 0x3e98]              ; 00500e1a
    PUSH EAX                            ; 00500e21
    CALL core_script.cpp_parseArgument_FUN_004fe090 ; 00500e22
        ;   XREF to: 004fe090 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_004fe090(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 00500e27
    TEST EAX,EAX                        ; 00500e2a
    JZ 0x00500e54                       ; 00500e2c
        ;   XREF to: 00500e54 (CONDITIONAL_JUMP)  ; LAB_00500e54
    MOV EDI,0x1e56420                   ; 00500e2e
        ;   Label: LAB_00500e2e
    MOV ESI,EAX                         ; 00500e33
    PUSH EDI                            ; 00500e35 | DAT_01e56420
    MOV AL,byte ptr [ESI]               ; 00500e36
        ;   Label: LAB_00500e36
    MOV byte ptr [EDI],AL               ; 00500e38 | DAT_01e56420 | DAT_01e56422
    CMP AL,0x0                          ; 00500e3a
    JZ 0x00500e4e                       ; 00500e3c
        ;   XREF to: 00500e4e (CONDITIONAL_JUMP)  ; LAB_00500e4e
    MOV AL,byte ptr [ESI + 0x1]         ; 00500e3e
    ADD ESI,0x2                         ; 00500e41
    MOV byte ptr [EDI + 0x1],AL         ; 00500e44 | DAT_01e56421 | DAT_01e56423
    ADD EDI,0x2                         ; 00500e47
    CMP AL,0x0                          ; 00500e4a
    JNZ 0x00500e36                      ; 00500e4c
        ;   XREF to: 00500e36 (CONDITIONAL_JUMP)  ; LAB_00500e36
    POP EDI                             ; 00500e4e
        ;   Label: LAB_00500e4e
    JMP 0x004ff43c                      ; 00500e4f
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    LEA EAX,[ESP + 0x950]               ; 00500e54
        ;   Label: LAB_00500e54
    PUSH EAX                            ; 00500e5b
    CALL core_script.cpp_validateActorVariableName_FUN_004fdec0 ; 00500e5c
        ;   XREF to: 004fdec0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_validateActorVariableName_FUN_004fdec0(char * variable_name)
    ADD ESP,0x4                         ; 00500e61
    TEST EAX,EAX                        ; 00500e64
    JZ 0x004ff43c                       ; 00500e66
        ;   XREF to: 004ff43c (CONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV ECX,dword ptr [0x01e56418]      ; 00500e6c | DAT_01e56418
    TEST ECX,ECX                        ; 00500e72
    JNZ 0x004ff36b                      ; 00500e74
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH ECX                            ; 00500e7a
    LEA EAX,[ESP + 0x954]               ; 00500e7b
    PUSH EAX                            ; 00500e82
    MOV ESI,dword ptr [0x005b7650]      ; 00500e83 | DAT_005b7650
    PUSH ESI                            ; 00500e89
    CALL core_event.cpp_CEventList_setActorVariable_FUN_00480950 ; 00500e8a
        ;   XREF to: 00480950 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_setActorVariable_FUN_00480950(CEventList * this_ptr, char * var_name, CDemonActor * actor)
    ADD ESP,0xc                         ; 00500e8f
    JMP 0x004ff36b                      ; 00500e92
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0x5                         ; 00500e97
        ;   Label: LAB_00500e97
    PUSH ESI                            ; 00500e9a
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00500e9b
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00500ea0
    LEA EDX,[ESP + 0x3ea0]              ; 00500ea3
    PUSH EDX                            ; 00500eaa
    LEA EDX,[ESP + 0x3a3c]              ; 00500eab
    PUSH EDX                            ; 00500eb2
    PUSH 0x58e951                       ; 00500eb3 | = "(%[^)])%n"
    MOV EDI,0xffffffff                  ; 00500eb8
    PUSH EAX                            ; 00500ebd
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 00500ebe
    MOV dword ptr [ESP + 0x3eb0],EDI    ; 00500ec5
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00500ecc
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x10                        ; 00500ed1
    CMP dword ptr [ESP + 0x3ea0],0x3    ; 00500ed4
    JL 0x00500fb6                       ; 00500edc
        ;   XREF to: 00500fb6 (CONDITIONAL_JUMP)  ; LAB_00500fb6
    LEA EAX,[ESP + 0x3a38]              ; 00500ee2
    PUSH EAX                            ; 00500ee9
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00500eea
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00500eef
    MOV EAX,dword ptr [ESP + 0x3ea0]    ; 00500ef2
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 00500ef9
    ADD EDX,EAX                         ; 00500f00
    LEA EAX,[ESP + 0x3a38]              ; 00500f02
    PUSH EAX                            ; 00500f09
    PUSH EBX                            ; 00500f0a
    MOV dword ptr [ESP + 0x3e98],EDX    ; 00500f0b
    CALL core_script.cpp_CScript_findDialogEntry_FUN_00505180 ; 00500f12
        ;   XREF to: 00505180 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_findDialogEntry_FUN_00505180(CScript * this_ptr, char * path)
    ADD ESP,0x8                         ; 00500f17
    TEST EAX,EAX                        ; 00500f1a
    JL 0x00500fcd                       ; 00500f1c
        ;   XREF to: 00500fcd (CONDITIONAL_JUMP)  ; LAB_00500fcd
    IMUL EAX,EAX,0x226                  ; 00500f22
    MOV EDX,dword ptr [EBX + 0x20]      ; 00500f28
    ADD EAX,EDX                         ; 00500f2b
    LEA EDX,[EAX + 0x78]                ; 00500f2d
    MOV dword ptr [ESP + 0x3ec4],EDX    ; 00500f30
    LEA EDX,[EAX + 0x96]                ; 00500f37
    LEA EDI,[ESP + 0x3a38]              ; 00500f3d
    LEA ESI,[EAX + 0x3c]                ; 00500f44
    MOV dword ptr [ESP + 0x3ea4],EDX    ; 00500f47
    PUSH EDI                            ; 00500f4e
    MOV AL,byte ptr [ESI]               ; 00500f4f
        ;   Label: LAB_00500f4f
    MOV byte ptr [EDI],AL               ; 00500f51
    CMP AL,0x0                          ; 00500f53
    JZ 0x00500f67                       ; 00500f55
        ;   XREF to: 00500f67 (CONDITIONAL_JUMP)  ; LAB_00500f67
    MOV AL,byte ptr [ESI + 0x1]         ; 00500f57
    ADD ESI,0x2                         ; 00500f5a
    MOV byte ptr [EDI + 0x1],AL         ; 00500f5d
    ADD EDI,0x2                         ; 00500f60
    CMP AL,0x0                          ; 00500f63
    JNZ 0x00500f4f                      ; 00500f65
        ;   XREF to: 00500f4f (CONDITIONAL_JUMP)  ; LAB_00500f4f
    POP EDI                             ; 00500f67
        ;   Label: LAB_00500f67
    FLD float ptr [EBX + 0x48]          ; 00500f68
        ;   Label: LAB_00500f68
    FLDZ                                ; 00500f6b
    FCOMPP                              ; 00500f6d
    FNSTSW AX                           ; 00500f6f
    SAHF                                ; 00500f71
    JA 0x0050101e                       ; 00500f72
        ;   XREF to: 0050101e (CONDITIONAL_JUMP)  ; LAB_0050101e
    CMP dword ptr [0x01e56418],0x0      ; 00500f78 | DAT_01e56418
        ;   Label: LAB_00500f78
    JNZ 0x004ff36b                      ; 00500f7f
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV EDX,dword ptr [EBP + 0x18]      ; 00500f85
    PUSH EDX                            ; 00500f88
    PUSH dword ptr [EBX + 0x48]         ; 00500f89
    PUSH EBX                            ; 00500f8c
    CALL core_script.cpp_CScript_processTimer_FUN_00504b70 ; 00500f8d
        ;   XREF to: 00504b70 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_processTimer_FUN_00504b70(CScript * this_ptr, float delta_time, float * timer_value)
    ADD ESP,0xc                         ; 00500f92
    MOV dword ptr [ESP + 0x3e84],EAX    ; 00500f95
    TEST EAX,EAX                        ; 00500f9c
    JLE 0x004ff36b                      ; 00500f9e
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV ECX,dword ptr [EBX + 0x4]       ; 00500fa4
    PUSH ECX                            ; 00500fa7
    PUSH EBX                            ; 00500fa8
    CALL core_script.cpp_CScript_setSpeaker_FUN_00504bf0 ; 00500fa9
        ;   XREF to: 00504bf0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_setSpeaker_FUN_00504bf0(CScript * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00500fae
    JMP 0x004ff36b                      ; 00500fb1
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH 0x58e95b                       ; 00500fb6 | = "Error parsing dbSay arguments"
        ;   Label: LAB_00500fb6
    PUSH 0x1e56420                      ; 00500fbb | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00500fc0
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00500fc5
    JMP 0x004ff43c                      ; 00500fc8
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    LEA EAX,[ESP + 0x1d3c]              ; 00500fcd
        ;   Label: LAB_00500fcd
    MOV dword ptr [ESP + 0x3ea4],EAX    ; 00500fd4
    LEA EAX,[ESP + 0x3a38]              ; 00500fdb
    PUSH EAX                            ; 00500fe2
    PUSH 0x58e97b                       ; 00500fe3 | = "[Can't find %s in database]"
    LEA EAX,[ESP + 0x1d44]              ; 00500fe8
    MOV ECX,0x58e979                    ; 00500fef | = "$"
    PUSH EAX                            ; 00500ff4
    MOV dword ptr [ESP + 0x3ed0],ECX    ; 00500ff5 | = "$"
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00500ffc
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 00501001
    LEA EAX,[ESP + 0x1d3c]              ; 00501004
    PUSH EAX                            ; 0050100b
    PUSH 0x1e56c30                      ; 0050100c
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 00501011
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00501016
    JMP 0x00500f68                      ; 00501019
        ;   XREF to: 00500f68 (UNCONDITIONAL_JUMP)  ; LAB_00500f68
    MOV ESI,dword ptr [ESP + 0x3ea4]    ; 0050101e
        ;   Label: LAB_0050101e
    PUSH ESI                            ; 00501025
    LEA EAX,[ESP + 0x3a3c]              ; 00501026
    PUSH EAX                            ; 0050102d
    MOV EDI,dword ptr [ESP + 0x3ecc]    ; 0050102e
    PUSH EDI                            ; 00501035
    PUSH EBX                            ; 00501036
    CALL core_script.cpp_CScript_getDialogDuration_FUN_005049b0 ; 00501037
        ;   XREF to: 005049b0 (UNCONDITIONAL_CALL)  ; float core_script.cpp_CScript_getDialogDuration_FUN_005049b0(CScript * this_ptr, char * actor_specifier, char * sound_name, char * dialog_text)
    MOV dword ptr [ESP + 0x3fa4],EAX    ; 0050103c
    FLDZ                                ; 00501043
    MOV EAX,dword ptr [ESP + 0x3fa4]    ; 00501045
    MOV dword ptr [EBX + 0x48],EAX      ; 0050104c
    ADD ESP,0x10                        ; 0050104f
    FCOMP float ptr [EBX + 0x48]        ; 00501052
    FNSTSW AX                           ; 00501055
    SAHF                                ; 00501057
    JA 0x004ff43c                       ; 00501058
        ;   XREF to: 004ff43c (CONDITIONAL_JUMP)  ; LAB_004ff43c
    JMP 0x00500f78                      ; 0050105e
        ;   XREF to: 00500f78 (UNCONDITIONAL_JUMP)  ; LAB_00500f78
    ADD ESI,0xa                         ; 00501063
        ;   Label: LAB_00501063
    PUSH ESI                            ; 00501066
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00501067
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 0050106c
    LEA EDX,[ESP + 0x3eac]              ; 0050106f
    PUSH EDX                            ; 00501076
    LEA EDX,[ESP + 0x3b68]              ; 00501077
    PUSH EDX                            ; 0050107e
    PUSH 0x58e9a2                       ; 0050107f | = "(%[^)])%n"
    MOV ESI,0xffffffff                  ; 00501084
    PUSH EAX                            ; 00501089
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 0050108a
    MOV dword ptr [ESP + 0x3ebc],ESI    ; 00501091
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00501098
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x10                        ; 0050109d
    CMP dword ptr [ESP + 0x3eac],0x3    ; 005010a0
    JL 0x00501179                       ; 005010a8
        ;   XREF to: 00501179 (CONDITIONAL_JUMP)  ; LAB_00501179
    LEA EAX,[ESP + 0x3b64]              ; 005010ae
    PUSH EAX                            ; 005010b5
    CALL core_script.cpp_trimString_FUN_004fe000 ; 005010b6
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 005010bb
    MOV EAX,dword ptr [ESP + 0x3eac]    ; 005010be
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 005010c5
    ADD EDX,EAX                         ; 005010cc
    LEA EAX,[ESP + 0x3b64]              ; 005010ce
    PUSH EAX                            ; 005010d5
    PUSH EBX                            ; 005010d6
    MOV dword ptr [ESP + 0x3e98],EDX    ; 005010d7
    CALL core_script.cpp_CScript_findDialogEntry_FUN_00505180 ; 005010de
        ;   XREF to: 00505180 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_findDialogEntry_FUN_00505180(CScript * this_ptr, char * path)
    ADD ESP,0x8                         ; 005010e3
    TEST EAX,EAX                        ; 005010e6
    JL 0x00501190                       ; 005010e8
        ;   XREF to: 00501190 (CONDITIONAL_JUMP)  ; LAB_00501190
    IMUL EAX,EAX,0x226                  ; 005010ee
    MOV EDX,dword ptr [EBX + 0x20]      ; 005010f4
    ADD EAX,EDX                         ; 005010f7
    LEA EDX,[EAX + 0x78]                ; 005010f9
    MOV dword ptr [ESP + 0x3eb0],EDX    ; 005010fc
    LEA EDX,[EAX + 0x96]                ; 00501103
    LEA EDI,[ESP + 0x3b64]              ; 00501109
    LEA ESI,[EAX + 0x3c]                ; 00501110
    MOV dword ptr [ESP + 0x3eb4],EDX    ; 00501113
    PUSH EDI                            ; 0050111a
    MOV AL,byte ptr [ESI]               ; 0050111b
        ;   Label: LAB_0050111b
    MOV byte ptr [EDI],AL               ; 0050111d
    CMP AL,0x0                          ; 0050111f
    JZ 0x00501133                       ; 00501121
        ;   XREF to: 00501133 (CONDITIONAL_JUMP)  ; LAB_00501133
    MOV AL,byte ptr [ESI + 0x1]         ; 00501123
    ADD ESI,0x2                         ; 00501126
    MOV byte ptr [EDI + 0x1],AL         ; 00501129
    ADD EDI,0x2                         ; 0050112c
    CMP AL,0x0                          ; 0050112f
    JNZ 0x0050111b                      ; 00501131
        ;   XREF to: 0050111b (CONDITIONAL_JUMP)  ; LAB_0050111b
    POP EDI                             ; 00501133
        ;   Label: LAB_00501133
    MOV ESI,dword ptr [ESP + 0x3eb4]    ; 00501134
        ;   Label: LAB_00501134
    PUSH ESI                            ; 0050113b
    LEA EAX,[ESP + 0x3b68]              ; 0050113c
    PUSH EAX                            ; 00501143
    MOV EDI,dword ptr [ESP + 0x3eb8]    ; 00501144
    PUSH EDI                            ; 0050114b | = "$"
    PUSH EBX                            ; 0050114c
    CALL core_script.cpp_CScript_getDialogDuration_FUN_005049b0 ; 0050114d
        ;   XREF to: 005049b0 (UNCONDITIONAL_CALL)  ; float core_script.cpp_CScript_getDialogDuration_FUN_005049b0(CScript * this_ptr, char * actor_specifier, char * sound_name, char * dialog_text)
    MOV dword ptr [ESP + 0x3fa4],EAX    ; 00501152
    FLDZ                                ; 00501159
    MOV EAX,dword ptr [ESP + 0x3fa4]    ; 0050115b
    MOV dword ptr [EBX + 0x48],EAX      ; 00501162
    ADD ESP,0x10                        ; 00501165
    FCOMP float ptr [EBX + 0x48]        ; 00501168
    FNSTSW AX                           ; 0050116b
    SAHF                                ; 0050116d
    JA 0x004ff43c                       ; 0050116e
        ;   XREF to: 004ff43c (CONDITIONAL_JUMP)  ; LAB_004ff43c
    JMP 0x004ff36b                      ; 00501174
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH 0x58e9ac                       ; 00501179 | = "Error parsing dbSay arguments"
        ;   Label: LAB_00501179
    PUSH 0x1e56420                      ; 0050117e | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00501183
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00501188
    JMP 0x004ff43c                      ; 0050118b
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    LEA EAX,[ESP + 0x1954]              ; 00501190
        ;   Label: LAB_00501190
    MOV dword ptr [ESP + 0x3eb4],EAX    ; 00501197
    LEA EAX,[ESP + 0x3b64]              ; 0050119e
    PUSH EAX                            ; 005011a5
    PUSH 0x58e9cc                       ; 005011a6 | = "[Can't find %s in database]"
    LEA EAX,[ESP + 0x195c]              ; 005011ab
    MOV ECX,0x58e9ca                    ; 005011b2 | = "$"
    PUSH EAX                            ; 005011b7
    MOV dword ptr [ESP + 0x3ebc],ECX    ; 005011b8 | = "$"
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 005011bf
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 005011c4
    LEA EAX,[ESP + 0x1954]              ; 005011c7
    PUSH EAX                            ; 005011ce
    PUSH 0x1e56c30                      ; 005011cf
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 005011d4
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005011d9
    JMP 0x00501134                      ; 005011dc
        ;   XREF to: 00501134 (UNCONDITIONAL_JUMP)  ; LAB_00501134
    ADD ESI,0x5                         ; 005011e1
        ;   Label: LAB_005011e1
    PUSH ESI                            ; 005011e4
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 005011e5
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 005011ea
    PUSH 0x12c                          ; 005011ed
    MOV dword ptr [ESP + 0x3e94],EAX    ; 005011f2
    LEA EAX,[ESP + 0x828]               ; 005011f9
    PUSH EAX                            ; 00501200
    LEA EAX,[ESP + 0x3e98]              ; 00501201
    PUSH EAX                            ; 00501208
    CALL core_script.cpp_parseArgument_FUN_004fe090 ; 00501209
        ;   XREF to: 004fe090 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_004fe090(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0050120e
    TEST EAX,EAX                        ; 00501211
    JNZ 0x00500e2e                      ; 00501213
        ;   XREF to: 00500e2e (CONDITIONAL_JUMP)  ; LAB_00500e2e
    CMP dword ptr [0x01e56418],0x0      ; 00501219 | DAT_01e56418
    JNZ 0x004ff36b                      ; 00501220
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    LEA EAX,[ESP + 0x824]               ; 00501226
    PUSH EAX                            ; 0050122d
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 0050122e
    PUSH EDX                            ; 00501235
    PUSH 0x58e9ee                       ; 00501236 | = "Script debug message at line %d:\n%s"
    MOV ECX,dword ptr [0x005b6d50]      ; 0050123b | g_CEditorTools_PTR_005b6d50
    PUSH ECX                            ; 00501241
    CALL shape_edittool.cpp_FUN_0046fe60 ; 00501242
        ;   XREF to: 0046fe60 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fe60()
    ADD ESP,0x10                        ; 00501247
    JMP 0x004ff36b                      ; 0050124a
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0x9                         ; 0050124f
        ;   Label: LAB_0050124f
    PUSH ESI                            ; 00501252
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00501253
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00501258
    LEA EDX,[ESP + 0x3f4c]              ; 0050125b
    PUSH EDX                            ; 00501262
    LEA EDX,[ESP + 0x2768]              ; 00501263
    PUSH EDX                            ; 0050126a
    LEA EDX,[ESP + 0x13e4]              ; 0050126b
    PUSH EDX                            ; 00501272
    PUSH 0x58ea1c                       ; 00501273 | = "(%[^,], %[^,)]%n"
    MOV ESI,0xffffffff                  ; 00501278
    PUSH EAX                            ; 0050127d
    MOV dword ptr [ESP + 0x3ea4],EAX    ; 0050127e
    MOV dword ptr [ESP + 0x3f60],ESI    ; 00501285
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0050128c
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x14                        ; 00501291
    MOV EDI,dword ptr [ESP + 0x3f4c]    ; 00501294
    CMP EDI,0x5                         ; 0050129b
    JGE 0x005012b7                      ; 0050129e
        ;   XREF to: 005012b7 (CONDITIONAL_JUMP)  ; LAB_005012b7
    PUSH 0x58ea2d                       ; 005012a0 | = "Error parsing dismember command parms"
    PUSH 0x1e56420                      ; 005012a5 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 005012aa
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 005012af
    JMP 0x004ff43c                      ; 005012b2
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 005012b7
        ;   Label: LAB_005012b7
    LEA EAX,[ESP + 0x13dc]              ; 005012be
    ADD EDX,EDI                         ; 005012c5
    PUSH EAX                            ; 005012c7
    MOV dword ptr [ESP + 0x3e94],EDX    ; 005012c8
    CALL core_script.cpp_trimString_FUN_004fe000 ; 005012cf
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 005012d4
    LEA EAX,[ESP + 0x2764]              ; 005012d7
    PUSH EAX                            ; 005012de
    CALL core_script.cpp_trimString_FUN_004fe000 ; 005012df
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 005012e4
    PUSH 0x765a60                       ; 005012e7 | g_CCharacterActorType_00765a60
    MOV ECX,dword ptr [0x00765a98]      ; 005012ec | g_CCharacterActorType_00765a60.name_hash
    PUSH ECX                            ; 005012f2
    LEA EAX,[ESP + 0x13e4]              ; 005012f3
    PUSH EAX                            ; 005012fa
    CALL core_script.cpp_getActor_FUN_004fe180 ; 005012fb
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00501300
    MOV dword ptr [ESP + 0x3eb8],EAX    ; 00501303
    TEST EAX,EAX                        ; 0050130a
    JNZ 0x00501320                      ; 0050130c
        ;   XREF to: 00501320 (CONDITIONAL_JUMP)  ; LAB_00501320
    CMP dword ptr [0x01e56c2c],0x0      ; 0050130e | DAT_01e56c2c
    JNZ 0x004ff384                      ; 00501315
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 0050131b
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    LEA EDX,[ESP + 0x331c]              ; 00501320
        ;   Label: LAB_00501320
    PUSH EDX                            ; 00501327
    LEA EDX,[ESP + 0x2768]              ; 00501328
    PUSH EDX                            ; 0050132f
    PUSH EAX                            ; 00501330
    CALL core_script.cpp_parseBodyPartMask_FUN_004fe3d0 ; 00501331
        ;   XREF to: 004fe3d0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_parseBodyPartMask_FUN_004fe3d0(CCharacter * character, char * part_names, int * part_mask)
    ADD ESP,0xc                         ; 00501336
    TEST EAX,EAX                        ; 00501339
    JZ 0x004ff43c                       ; 0050133b
        ;   XREF to: 004ff43c (CONDITIONAL_JUMP)  ; LAB_004ff43c
    LEA EAX,[ESP + 0x3e60]              ; 00501341
    PUSH EAX                            ; 00501348
    CALL core_actor.cpp_CVector_ctor_FUN_0040e160 ; 00501349
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector_ctor_FUN_0040e160(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 0050134e
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 00501351
    MOV CL,byte ptr [EDX]               ; 00501358
    XOR EAX,EAX                         ; 0050135a
    CMP CL,0x2c                         ; 0050135c
    JZ 0x005013fb                       ; 0050135f
        ;   XREF to: 005013fb (CONDITIONAL_JUMP)  ; LAB_005013fb
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 00501365
        ;   Label: LAB_00501365
    CMP byte ptr [EDX],0x29             ; 0050136c
    JNZ 0x00501551                      ; 0050136f
        ;   XREF to: 00501551 (CONDITIONAL_JUMP)  ; LAB_00501551
    LEA ECX,[EDX + 0x1]                 ; 00501375
    MOV ESI,dword ptr [0x01e56418]      ; 00501378 | DAT_01e56418
    MOV dword ptr [ESP + 0x3e90],ECX    ; 0050137e
    TEST ESI,ESI                        ; 00501385
    JNZ 0x004ff36b                      ; 00501387
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV EDX,dword ptr [ESP + 0x3eb8]    ; 0050138d
    MOV EDI,dword ptr [EDX + 0x2608]    ; 00501394
    PUSH EDI                            ; 0050139a
    PUSH ESI                            ; 0050139b
    PUSH ESI                            ; 0050139c
    PUSH EDX                            ; 0050139d
    PUSH EAX                            ; 0050139e
    LEA EAX,[EDX + 0x30]                ; 0050139f
    PUSH EAX                            ; 005013a2
    LEA EAX,[EDX + 0x20]                ; 005013a3
    PUSH EAX                            ; 005013a6
    CALL core_bodypart.cpp_createBodyPart_FUN_00415b30 ; 005013a7
        ;   XREF to: 00415b30 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00415b30(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 005013ac
    XOR EDI,EDI                         ; 005013af
    MOV dword ptr [ESP + 0x3ebc],EAX    ; 005013b1
    CMP dword ptr [ESP + EDI*0x1 + 0x331c],0x0 ; 005013b8
        ;   Label: LAB_005013b8
    JZ 0x005013dd                       ; 005013c0
        ;   XREF to: 005013dd (CONDITIONAL_JUMP)  ; LAB_005013dd
    PUSH 0x0                            ; 005013c2
    PUSH ESI                            ; 005013c4
    MOV EAX,dword ptr [ESP + 0x3ec4]    ; 005013c5
    PUSH EAX                            ; 005013cc
    MOV EDX,dword ptr [ESP + 0x3ec4]    ; 005013cd
    PUSH EDX                            ; 005013d4
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0 ; 005013d5
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 005013da
    INC ESI                             ; 005013dd
        ;   Label: LAB_005013dd
    ADD EDI,0x4                         ; 005013de
    CMP ESI,0x1e                        ; 005013e1
    JL 0x005013b8                       ; 005013e4
        ;   XREF to: 005013b8 (CONDITIONAL_JUMP)  ; LAB_005013b8
    MOV ECX,dword ptr [ESP + 0x3ebc]    ; 005013e6
    PUSH ECX                            ; 005013ed
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40 ; 005013ee
        ;   XREF to: 00416d40 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 005013f3
    JMP 0x004ff36b                      ; 005013f6
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    LEA EAX,[ESP + 0x3f4c]              ; 005013fb
        ;   Label: LAB_005013fb
    PUSH EAX                            ; 00501402
    LEA EAX,[ESP + 0x2c]                ; 00501403
    PUSH EAX                            ; 00501407
    LEA EAX,[ESP + 0x3e70]              ; 00501408
    PUSH EAX                            ; 0050140f
    LEA EAX,[ESP + 0x3e70]              ; 00501410
    PUSH EAX                            ; 00501417
    LEA EAX,[ESP + 0x3e70]              ; 00501418
    PUSH EAX                            ; 0050141f
    PUSH 0x58ea53                       ; 00501420 | = ",%f ,%f ,%f ,%f %n"
    PUSH EDX                            ; 00501425
    MOV dword ptr [ESP + 0x3f68],ESI    ; 00501426
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0050142d
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x1c                        ; 00501432
    MOV EAX,dword ptr [ESP + 0x3f4c]    ; 00501435
    CMP EAX,0x5                         ; 0050143c
    JL 0x0050153a                       ; 0050143f
        ;   XREF to: 0050153a (CONDITIONAL_JUMP)  ; LAB_0050153a
    FLD float ptr [ESP + 0x28]          ; 00501445
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 00501449
    FLDZ                                ; 00501450
    ADD EDX,EAX                         ; 00501452
    FXCH                                ; 00501454
    FSTP double ptr [ESP + 0x10]        ; 00501456
    MOV dword ptr [ESP + 0x3e90],EDX    ; 0050145a
    FCOMP double ptr [ESP + 0x10]       ; 00501461
    FNSTSW AX                           ; 00501465
    SAHF                                ; 00501467
    JNC 0x0050152e                      ; 00501468
        ;   XREF to: 0050152e (CONDITIONAL_JUMP)  ; LAB_0050152e
    FLD double ptr [ESP + 0x10]         ; 0050146e
    FMUL double ptr [0x0058fa7a]        ; 00501472 | DOUBLE_0058fa7a
    FMUL double ptr [0x0058fa82]        ; 00501478 | DOUBLE_0058fa82
    FSTP float ptr [ESP + 0x28]         ; 0050147e
    PUSH dword ptr [ESP + 0x28]         ; 00501482
    FLD float ptr [ESP + 0x2c]          ; 00501486
    SUB ESP,0x4                         ; 0050148a
    FCHS                                ; 0050148d
    FSTP float ptr [ESP]                ; 0050148f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00501492
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x3f9c],EAX    ; 00501497
    FLD float ptr [ESP + 0x3f9c]        ; 0050149e
    ADD ESP,0x8                         ; 005014a5
    SUB ESP,0x4                         ; 005014a8
    FSTP float ptr [ESP]                ; 005014ab
    PUSH 0x0                            ; 005014ae
    PUSH dword ptr [ESP + 0x30]         ; 005014b0
    FLD float ptr [ESP + 0x34]          ; 005014b4
    SUB ESP,0x4                         ; 005014b8
    FCHS                                ; 005014bb
    FSTP float ptr [ESP]                ; 005014bd
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 005014c0
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x3fa4],EAX    ; 005014c5
    FLD float ptr [ESP + 0x3fa4]        ; 005014cc
    ADD ESP,0x8                         ; 005014d3
    SUB ESP,0x4                         ; 005014d6
    LEA EAX,[ESP + 0x3e60]              ; 005014d9
    FSTP float ptr [ESP]                ; 005014e0
    PUSH EAX                            ; 005014e3
    CALL core_script.cpp_makeVector_FUN_00505880 ; 005014e4
        ;   XREF to: 00505880 (UNCONDITIONAL_CALL)  ; CVector3f * core_script.cpp_makeVector_FUN_00505880(CVector3f * out, float x, float y, float z)
    ADD ESP,0x10                        ; 005014e9
    PUSH EAX                            ; 005014ec
    LEA EAX,[ESP + 0x3e24]              ; 005014ed
    PUSH EAX                            ; 005014f4
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 005014f5
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 005014fa
    LEA EAX,[ESP + 0x3e60]              ; 005014fd
    PUSH EAX                            ; 00501504
    LEA EAX,[ESP + 0x3e7c]              ; 00501505
    PUSH EAX                            ; 0050150c
    LEA EAX,[ESP + 0x3e28]              ; 0050150d
    PUSH EAX                            ; 00501514
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 00501515
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0050151a
    PUSH EAX                            ; 0050151d
    LEA EAX,[ESP + 0x3e64]              ; 0050151e
    PUSH EAX                            ; 00501525
    CALL core_actor.cpp_copyVector_FUN_0040e180 ; 00501526
        ;   XREF to: 0040e180 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_copyVector_FUN_0040e180(CVector3f * dst_ptr, CVector3f * src_ptr)
    ADD ESP,0x8                         ; 0050152b
    LEA EAX,[ESP + 0x3e60]              ; 0050152e
        ;   Label: LAB_0050152e
    JMP 0x00501365                      ; 00501535
        ;   XREF to: 00501365 (UNCONDITIONAL_JUMP)  ; LAB_00501365
    PUSH 0x58ea66                       ; 0050153a | = "Error parsing dismember command parms"
        ;   Label: LAB_0050153a
    PUSH 0x1e56420                      ; 0050153f | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00501544
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00501549
    JMP 0x004ff43c                      ; 0050154c
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    PUSH EDX                            ; 00501551
        ;   Label: LAB_00501551
    PUSH 0x58ea8c                       ; 00501552 | = "Error parsing dismember command parms..."
    PUSH 0x1e56420                      ; 00501557 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0050155c
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 00501561
    JMP 0x004ff43c                      ; 00501564
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    ADD ESI,0x7                         ; 00501569
        ;   Label: LAB_00501569
    PUSH ESI                            ; 0050156c
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 0050156d
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00501572
    PUSH 0x400                          ; 00501575
    MOV dword ptr [ESP + 0x3e94],EAX    ; 0050157a
    LEA EAX,[EBX + 0x4c]                ; 00501581
    PUSH EAX                            ; 00501584
    LEA EAX,[ESP + 0x3e98]              ; 00501585
    PUSH EAX                            ; 0050158c
    CALL core_script.cpp_parseArgument_FUN_004fe090 ; 0050158d
        ;   XREF to: 004fe090 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_004fe090(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 00501592
    TEST EAX,EAX                        ; 00501595
    JZ 0x004ff36b                       ; 00501597
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH EAX                            ; 0050159d
    PUSH 0x58eac4                       ; 0050159e | = "Error parsing message text on display..."
    PUSH 0x1e56420                      ; 005015a3 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 005015a8
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 005015ad
    JMP 0x004ff43c                      ; 005015b0
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    ADD ESI,0x4                         ; 005015b5
        ;   Label: LAB_005015b5
    PUSH ESI                            ; 005015b8
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 005015b9
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 005015be
    MOV dword ptr [ESP + 0x3e90],EAX    ; 005015c1
    PUSH 0x1                            ; 005015c8
    MOV EDI,dword ptr [EBX + 0x40]      ; 005015ca
    PUSH EDI                            ; 005015cd
    PUSH EBX                            ; 005015ce
    CALL core_script.cpp_CScript_skipCommands_FUN_00504c70 ; 005015cf
        ;   XREF to: 00504c70 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_skipCommands_FUN_00504c70(CScript * this_ptr, int direction, int count)
    ADD ESP,0xc                         ; 005015d4
    TEST EAX,EAX                        ; 005015d7
    JL 0x005015e3                       ; 005015d9
        ;   XREF to: 005015e3 (CONDITIONAL_JUMP)  ; LAB_005015e3
    MOV dword ptr [EBX + 0x40],EAX      ; 005015db
    JMP 0x004ff36b                      ; 005015de
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV EAX,dword ptr [ESP + 0x3e8c]    ; 005015e3
        ;   Label: LAB_005015e3
    PUSH EAX                            ; 005015ea
    PUSH 0x58eafd                       ; 005015eb | = "Can't skip next command after else st..."
    PUSH 0x1e56420                      ; 005015f0 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 005015f5
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 005015fa
    JMP 0x004ff43c                      ; 005015fd
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    ADD ESI,0xc                         ; 00501602
        ;   Label: LAB_00501602
    PUSH ESI                            ; 00501605
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00501606
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    MOV EDX,0xffffffff                  ; 0050160b
    ADD ESP,0x4                         ; 00501610
    MOV dword ptr [ESP + 0x3f60],EDX    ; 00501613
    LEA EDX,[ESP + 0x3f60]              ; 0050161a
    PUSH EDX                            ; 00501621
    LEA EDX,[ESP + 0x1250]              ; 00501622
    PUSH EDX                            ; 00501629
    LEA EDX,[ESP + 0xf34]               ; 0050162a
    PUSH EDX                            ; 00501631
    PUSH 0x58eb42                       ; 00501632 | = "(%[^,], %[^)])%n"
    PUSH EAX                            ; 00501637
    MOV dword ptr [ESP + 0x3ea4],EAX    ; 00501638
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0050163f
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x14                        ; 00501644
    MOV ECX,dword ptr [ESP + 0x3f60]    ; 00501647
    CMP ECX,0x3                         ; 0050164e
    JGE 0x0050166a                      ; 00501651
        ;   XREF to: 0050166a (CONDITIONAL_JUMP)  ; LAB_0050166a
    PUSH 0x58eb53                       ; 00501653 | = "Error parsing enableCamera parms"
    PUSH 0x1e56420                      ; 00501658 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0050165d
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00501662
    JMP 0x004ff43c                      ; 00501665
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV ESI,dword ptr [ESP + 0x3e90]    ; 0050166a
        ;   Label: LAB_0050166a
    LEA EAX,[ESP + 0xf2c]               ; 00501671
    ADD ESI,ECX                         ; 00501678
    PUSH EAX                            ; 0050167a
    MOV dword ptr [ESP + 0x3e94],ESI    ; 0050167b
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00501682
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00501687
    LEA EAX,[ESP + 0x124c]              ; 0050168a
    PUSH EAX                            ; 00501691
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00501692
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00501697
    LEA EAX,[ESP + 0xf2c]               ; 0050169a
    PUSH EAX                            ; 005016a1
    MOV EDI,dword ptr [0x005be368]      ; 005016a2 | g_CDemonSet_PTR_005be368
    PUSH EDI                            ; 005016a8 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_findCameraByName_FUN_005090a0 ; 005016a9
        ;   XREF to: 005090a0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_findCameraByName_FUN_005090a0(CDemonSet * this_ptr, char * name)
    MOV ESI,EAX                         ; 005016ae
    ADD ESP,0x8                         ; 005016b0
    TEST EAX,EAX                        ; 005016b3
    JL 0x00501705                       ; 005016b5
        ;   XREF to: 00501705 (CONDITIONAL_JUMP)  ; LAB_00501705
    CMP dword ptr [0x01e56418],0x0      ; 005016b7 | DAT_01e56418
    JZ 0x00501724                       ; 005016be
        ;   XREF to: 00501724 (CONDITIONAL_JUMP)  ; LAB_00501724
    LEA EAX,[ESP + 0x124c]              ; 005016c0
    PUSH EAX                            ; 005016c7
    MOV ESI,dword ptr [0x005b7650]      ; 005016c8 | DAT_005b7650
    PUSH ESI                            ; 005016ce
    CALL core_event.cpp_CEventList_validateCondition_FUN_0047dc90 ; 005016cf
        ;   XREF to: 0047dc90 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCondition_FUN_0047dc90(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 005016d4
    TEST EAX,EAX                        ; 005016d7
    JZ 0x004ff36b                       ; 005016d9
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV EDI,0x1e56420                   ; 005016df
    MOV ESI,EAX                         ; 005016e4
    PUSH EDI                            ; 005016e6 | DAT_01e56420
    MOV AL,byte ptr [ESI]               ; 005016e7
        ;   Label: LAB_005016e7
    MOV byte ptr [EDI],AL               ; 005016e9 | DAT_01e56420 | DAT_01e56422
    CMP AL,0x0                          ; 005016eb
    JZ 0x005016ff                       ; 005016ed
        ;   XREF to: 005016ff (CONDITIONAL_JUMP)  ; LAB_005016ff
    MOV AL,byte ptr [ESI + 0x1]         ; 005016ef
    ADD ESI,0x2                         ; 005016f2
    MOV byte ptr [EDI + 0x1],AL         ; 005016f5 | DAT_01e56421 | DAT_01e56423
    ADD EDI,0x2                         ; 005016f8
    CMP AL,0x0                          ; 005016fb
    JNZ 0x005016e7                      ; 005016fd
        ;   XREF to: 005016e7 (CONDITIONAL_JUMP)  ; LAB_005016e7
    POP EDI                             ; 005016ff
        ;   Label: LAB_005016ff
    JMP 0x004ff43c                      ; 00501700
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    LEA EAX,[ESP + 0xf2c]               ; 00501705
        ;   Label: LAB_00501705
    PUSH EAX                            ; 0050170c
    PUSH 0x58eb74                       ; 0050170d | = "Camera \"%s\" does not exist."
    PUSH 0x1e56420                      ; 00501712 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00501717
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 0050171c
    JMP 0x004ff43c                      ; 0050171f
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    LEA EAX,[ESP + 0x124c]              ; 00501724
        ;   Label: LAB_00501724
    PUSH EAX                            ; 0050172b
    MOV EDX,dword ptr [0x005b7650]      ; 0050172c | DAT_005b7650
    PUSH EDX                            ; 00501732
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 00501733
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00501738
    PUSH EAX                            ; 0050173b
    PUSH ESI                            ; 0050173c
    MOV ECX,dword ptr [0x005be368]      ; 0050173d | g_CDemonSet_PTR_005be368
    PUSH ECX                            ; 00501743 | g_CDemonSet_01e57284
    CALL core_set.cpp_FUN_0050e550      ; 00501744
        ;   XREF to: 0050e550 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_0050e550()
    ADD ESP,0xc                         ; 00501749
    JMP 0x004ff36b                      ; 0050174c
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0x11                        ; 00501751
        ;   Label: LAB_00501751
    PUSH ESI                            ; 00501754
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00501755
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 0050175a
    LEA EDX,[ESP + 0x3f64]              ; 0050175d
    PUSH EDX                            ; 00501764
    LEA EDX,[ESP + 0x21f0]              ; 00501765
    PUSH EDX                            ; 0050176c
    LEA EDX,[ESP + 0x3f08]              ; 0050176d
    PUSH EDX                            ; 00501774
    PUSH 0x58eba2                       ; 00501775 | = "(%d , %[^)])%n"
    MOV EDI,0xffffffff                  ; 0050177a
    PUSH EAX                            ; 0050177f
    MOV dword ptr [ESP + 0x3ea4],EAX    ; 00501780
    MOV dword ptr [ESP + 0x3f78],EDI    ; 00501787
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0050178e
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x14                        ; 00501793
    MOV EAX,dword ptr [ESP + 0x3f64]    ; 00501796
    CMP EAX,0x3                         ; 0050179d
    JGE 0x005017b9                      ; 005017a0
        ;   XREF to: 005017b9 (CONDITIONAL_JUMP)  ; LAB_005017b9
    PUSH 0x58ebb1                       ; 005017a2 | = "Error parsing enableCameraGroup parms"
    PUSH 0x1e56420                      ; 005017a7 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 005017ac
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 005017b1
    JMP 0x004ff43c                      ; 005017b4
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 005017b9
        ;   Label: LAB_005017b9
    ADD EDX,EAX                         ; 005017c0
    LEA EAX,[ESP + 0x21ec]              ; 005017c2
    PUSH EAX                            ; 005017c9
    MOV dword ptr [ESP + 0x3e94],EDX    ; 005017ca
    CALL core_script.cpp_trimString_FUN_004fe000 ; 005017d1
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    MOV ECX,dword ptr [0x01e56418]      ; 005017d6 | DAT_01e56418
    ADD ESP,0x4                         ; 005017dc
    TEST ECX,ECX                        ; 005017df
    JZ 0x00501828                       ; 005017e1
        ;   XREF to: 00501828 (CONDITIONAL_JUMP)  ; LAB_00501828
    LEA EAX,[ESP + 0x21ec]              ; 005017e3
    PUSH EAX                            ; 005017ea
    MOV EDX,dword ptr [0x005b7650]      ; 005017eb | DAT_005b7650
    PUSH EDX                            ; 005017f1
    CALL core_event.cpp_CEventList_validateCondition_FUN_0047dc90 ; 005017f2
        ;   XREF to: 0047dc90 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCondition_FUN_0047dc90(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 005017f7
    TEST EAX,EAX                        ; 005017fa
    JZ 0x004ff36b                       ; 005017fc
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV EDI,0x1e56420                   ; 00501802
        ;   Label: LAB_00501802
    MOV ESI,EAX                         ; 00501807
    PUSH EDI                            ; 00501809 | DAT_01e56420
    MOV AL,byte ptr [ESI]               ; 0050180a
        ;   Label: LAB_0050180a
    MOV byte ptr [EDI],AL               ; 0050180c | DAT_01e56420 | DAT_01e56422
    CMP AL,0x0                          ; 0050180e
    JZ 0x00501822                       ; 00501810
        ;   XREF to: 00501822 (CONDITIONAL_JUMP)  ; LAB_00501822
    MOV AL,byte ptr [ESI + 0x1]         ; 00501812
    ADD ESI,0x2                         ; 00501815
    MOV byte ptr [EDI + 0x1],AL         ; 00501818 | DAT_01e56421 | DAT_01e56423
    ADD EDI,0x2                         ; 0050181b
    CMP AL,0x0                          ; 0050181e
    JNZ 0x0050180a                      ; 00501820
        ;   XREF to: 0050180a (CONDITIONAL_JUMP)  ; LAB_0050180a
    POP EDI                             ; 00501822
        ;   Label: LAB_00501822
    JMP 0x004ff43c                      ; 00501823
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    LEA EAX,[ESP + 0x21ec]              ; 00501828
        ;   Label: LAB_00501828
    PUSH EAX                            ; 0050182f
    MOV ESI,dword ptr [0x005b7650]      ; 00501830 | DAT_005b7650
    PUSH ESI                            ; 00501836
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 00501837
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0050183c
    PUSH EAX                            ; 0050183f
    MOV EDI,dword ptr [ESP + 0x3f04]    ; 00501840
    PUSH EDI                            ; 00501847
    MOV EAX,[0x005be368]                ; 00501848 | g_CDemonSet_PTR_005be368
    PUSH EAX                            ; 0050184d | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_setCameraEnabledByGroup_FUN_0050e580 ; 0050184e
        ;   XREF to: 0050e580 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraEnabledByGroup_FUN_0050e580(CDemonSet * this_ptr, int group_id, int enabled)
    ADD ESP,0xc                         ; 00501853
    JMP 0x004ff36b                      ; 00501856
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0xf                         ; 0050185b
        ;   Label: LAB_0050185b
    PUSH ESI                            ; 0050185e
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 0050185f
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00501864
    LEA EDX,[ESP + 0x3ecc]              ; 00501867
    PUSH EDX                            ; 0050186e
    LEA EDX,[ESP + 0x2060]              ; 0050186f
    PUSH EDX                            ; 00501876
    LEA EDX,[ESP + 0xcdc]               ; 00501877
    PUSH EDX                            ; 0050187e
    PUSH 0x58ebe7                       ; 0050187f | = "(%[^,], %[^)])%n"
    MOV ECX,0xffffffff                  ; 00501884
    PUSH EAX                            ; 00501889
    MOV dword ptr [ESP + 0x3ea4],EAX    ; 0050188a
    MOV dword ptr [ESP + 0x3ee0],ECX    ; 00501891
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00501898
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x14                        ; 0050189d
    MOV ESI,dword ptr [ESP + 0x3ecc]    ; 005018a0
    CMP ESI,0x3                         ; 005018a7
    JGE 0x005018c3                      ; 005018aa
        ;   XREF to: 005018c3 (CONDITIONAL_JUMP)  ; LAB_005018c3
    PUSH 0x58ebf8                       ; 005018ac | = "Error parsing enableHealthBar parms"
    PUSH 0x1e56420                      ; 005018b1 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 005018b6
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 005018bb
    JMP 0x004ff43c                      ; 005018be
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV EDI,dword ptr [ESP + 0x3e90]    ; 005018c3
        ;   Label: LAB_005018c3
    LEA EAX,[ESP + 0xcd4]               ; 005018ca
    ADD EDI,ESI                         ; 005018d1
    PUSH EAX                            ; 005018d3
    MOV dword ptr [ESP + 0x3e94],EDI    ; 005018d4
    CALL core_script.cpp_trimString_FUN_004fe000 ; 005018db
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 005018e0
    LEA EAX,[ESP + 0x205c]              ; 005018e3
    PUSH EAX                            ; 005018ea
    CALL core_script.cpp_trimString_FUN_004fe000 ; 005018eb
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 005018f0
    PUSH 0x765a60                       ; 005018f3 | g_CCharacterActorType_00765a60
    MOV EAX,[0x00765a98]                ; 005018f8 | g_CCharacterActorType_00765a60.name_hash
    PUSH EAX                            ; 005018fd
    LEA EAX,[ESP + 0xcdc]               ; 005018fe
    PUSH EAX                            ; 00501905
    CALL core_script.cpp_getActor_FUN_004fe180 ; 00501906
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0050190b
    MOV ESI,EAX                         ; 0050190e
    TEST EAX,EAX                        ; 00501910
    JNZ 0x00501926                      ; 00501912
        ;   XREF to: 00501926 (CONDITIONAL_JUMP)  ; LAB_00501926
    CMP dword ptr [0x01e56c2c],0x0      ; 00501914 | DAT_01e56c2c
    JNZ 0x004ff384                      ; 0050191b
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 00501921
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    PUSH 0x58ec1c                       ; 00501926 | = "false"
        ;   Label: LAB_00501926
    LEA EAX,[ESP + 0x2060]              ; 0050192b
    PUSH EAX                            ; 00501932
    CALL crt_string.c__stricmp_FUN_00564520 ; 00501933
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 00501938
    TEST EAX,EAX                        ; 0050193b
    JNZ 0x00501957                      ; 0050193d
        ;   XREF to: 00501957 (CONDITIONAL_JUMP)  ; LAB_00501957
    CMP dword ptr [0x01e56418],0x0      ; 0050193f | DAT_01e56418
        ;   Label: LAB_0050193f
    JNZ 0x004ff36b                      ; 00501946
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV dword ptr [ESI + 0x243c],EAX    ; 0050194c
    JMP 0x004ff36b                      ; 00501952
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH 0x58ec22                       ; 00501957 | = "true"
        ;   Label: LAB_00501957
    LEA EAX,[ESP + 0x2060]              ; 0050195c
    PUSH EAX                            ; 00501963
    CALL crt_string.c__stricmp_FUN_00564520 ; 00501964
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 00501969
    TEST EAX,EAX                        ; 0050196c
    JNZ 0x00501977                      ; 0050196e
        ;   XREF to: 00501977 (CONDITIONAL_JUMP)  ; LAB_00501977
    MOV EAX,0x1                         ; 00501970
    JMP 0x0050193f                      ; 00501975
        ;   XREF to: 0050193f (UNCONDITIONAL_JUMP)  ; LAB_0050193f
    PUSH 0x58ec27                       ; 00501977 | = "always"
        ;   Label: LAB_00501977
    LEA EAX,[ESP + 0x2060]              ; 0050197c
    PUSH EAX                            ; 00501983
    CALL crt_string.c__stricmp_FUN_00564520 ; 00501984
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 00501989
    TEST EAX,EAX                        ; 0050198c
    JNZ 0x00501997                      ; 0050198e
        ;   XREF to: 00501997 (CONDITIONAL_JUMP)  ; LAB_00501997
    MOV EAX,0x2                         ; 00501990
    JMP 0x0050193f                      ; 00501995
        ;   XREF to: 0050193f (UNCONDITIONAL_JUMP)  ; LAB_0050193f
    LEA EAX,[ESP + 0x205c]              ; 00501997
        ;   Label: LAB_00501997
    PUSH EAX                            ; 0050199e
    PUSH 0x58ec2e                       ; 0050199f | = "Invalid health bar mode '%s'"
    PUSH 0x1e56420                      ; 005019a4 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 005019a9
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 005019ae
    JMP 0x004ff43c                      ; 005019b1
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    ADD ESI,0x3                         ; 005019b6
        ;   Label: LAB_005019b6
    PUSH ESI                            ; 005019b9
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 005019ba
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 005019bf
    MOV ESI,dword ptr [0x01e56418]      ; 005019c2 | DAT_01e56418
    MOV dword ptr [ESP + 0x3e90],EAX    ; 005019c8
    TEST ESI,ESI                        ; 005019cf
    JNZ 0x004ff36b                      ; 005019d1
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV dword ptr [ESP + 0x3e84],ESI    ; 005019d7
    MOV dword ptr [EBX],0x1             ; 005019de
    JMP 0x004ff36b                      ; 005019e4
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0x6                         ; 005019e9
        ;   Label: LAB_005019e9
    PUSH ESI                            ; 005019ec
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 005019ed
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 005019f2
    MOV dword ptr [ESP + 0x3e90],EAX    ; 005019f5
    MOV EAX,[0x01e56418]                ; 005019fc | DAT_01e56418
    TEST EAX,EAX                        ; 00501a01
    JNZ 0x004ff36b                      ; 00501a03
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    FLD float ptr [EBX + 0x44]          ; 00501a09
    FLDZ                                ; 00501a0c
    MOV dword ptr [ESP + 0x3e84],EAX    ; 00501a0e
    FCOMPP                              ; 00501a15
    FNSTSW AX                           ; 00501a17
    SAHF                                ; 00501a19
    JBE 0x00501a37                      ; 00501a1a
        ;   XREF to: 00501a37 (CONDITIONAL_JUMP)  ; LAB_00501a37
    MOV EDI,dword ptr [0x005b9354]      ; 00501a1c | g_CGame_PTR_005b9354
    PUSH EDI                            ; 00501a22 | g_CGame_01c775ec
    CALL core_game.cpp_CGame_beginFadeIn_FUN_004a37e0 ; 00501a23
        ;   XREF to: 004a37e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_beginFadeIn_FUN_004a37e0(CGame * this_ptr)
    ADD ESP,0x4                         ; 00501a28
    MOV dword ptr [EBX + 0x44],0x3f800000 ; 00501a2b
    JMP 0x004ff36b                      ; 00501a32
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV ECX,dword ptr [0x005b9354]      ; 00501a37 | g_CGame_PTR_005b9354
        ;   Label: LAB_00501a37
    PUSH ECX                            ; 00501a3d | g_CGame_01c775ec
    CALL core_game.cpp_CGame_fadeIn_FUN_004a3a50 ; 00501a3e
        ;   XREF to: 004a3a50 (UNCONDITIONAL_CALL)  ; uint core_game.cpp_CGame_fadeIn_FUN_004a3a50(CGame * this_ptr)
    ADD ESP,0x4                         ; 00501a43
    TEST EAX,EAX                        ; 00501a46
    JZ 0x004ff36b                       ; 00501a48
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV ESI,0x1                         ; 00501a4e
    MOV EAX,[0x005b9354]                ; 00501a53 | g_CGame_PTR_005b9354
    MOV dword ptr [ESP + 0x3e84],ESI    ; 00501a58
    MOV dword ptr [EAX + 0x22c],0x1     ; 00501a5f | g_CGame_01c775ec.allow_damage_flag
    JMP 0x004ff36b                      ; 00501a69
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0x7                         ; 00501a6e
        ;   Label: LAB_00501a6e
    PUSH ESI                            ; 00501a71
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00501a72
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00501a77
    MOV dword ptr [ESP + 0x3e90],EAX    ; 00501a7a
    MOV EAX,[0x01e56418]                ; 00501a81 | DAT_01e56418
    TEST EAX,EAX                        ; 00501a86
    JNZ 0x004ff36b                      ; 00501a88
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV EDX,dword ptr [0x005b9354]      ; 00501a8e | g_CGame_PTR_005b9354
    MOV dword ptr [EDX + 0x22c],EAX     ; 00501a94 | g_CGame_01c775ec.allow_damage_flag
    MOV dword ptr [ESP + 0x3e84],EAX    ; 00501a9a
    FLD float ptr [EBX + 0x44]          ; 00501aa1
    FLDZ                                ; 00501aa4
    FCOMPP                              ; 00501aa6
    FNSTSW AX                           ; 00501aa8
    SAHF                                ; 00501aaa
    JBE 0x00501ac2                      ; 00501aab
        ;   XREF to: 00501ac2 (CONDITIONAL_JUMP)  ; LAB_00501ac2
    PUSH EDX                            ; 00501aad | g_CGame_01c775ec
    CALL core_game.cpp_CGame_beginFadeOut_FUN_004a3820 ; 00501aae
        ;   XREF to: 004a3820 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_beginFadeOut_FUN_004a3820(CGame * this_ptr)
    ADD ESP,0x4                         ; 00501ab3
    MOV dword ptr [EBX + 0x44],0x3f800000 ; 00501ab6
    JMP 0x004ff36b                      ; 00501abd
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH EDX                            ; 00501ac2 | g_CGame_01c775ec
        ;   Label: LAB_00501ac2
    CALL core_game.cpp_CGame_fadeIn_FUN_004a3a50 ; 00501ac3
        ;   XREF to: 004a3a50 (UNCONDITIONAL_CALL)  ; uint core_game.cpp_CGame_fadeIn_FUN_004a3a50(CGame * this_ptr)
    ADD ESP,0x4                         ; 00501ac8
    TEST EAX,EAX                        ; 00501acb
    JZ 0x004ff36b                       ; 00501acd
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV dword ptr [ESP + 0x3e84],0x1    ; 00501ad3
    JMP 0x004ff36b                      ; 00501ade
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0x7                         ; 00501ae3
        ;   Label: LAB_00501ae3
    PUSH ESI                            ; 00501ae6
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00501ae7
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00501aec
    LEA EDX,[ESP + 0x3ed0]              ; 00501aef
    PUSH EDX                            ; 00501af6
    LEA EDX,[ESP + 0x25d8]              ; 00501af7
    PUSH EDX                            ; 00501afe
    LEA EDX,[ESP + 0x2514]              ; 00501aff
    PUSH EDX                            ; 00501b06
    PUSH 0x58ec66                       ; 00501b07 | = "(%[^,], %[^)])%n"
    MOV EDI,0xffffffff                  ; 00501b0c
    PUSH EAX                            ; 00501b11
    MOV dword ptr [ESP + 0x3ea4],EAX    ; 00501b12
    MOV dword ptr [ESP + 0x3ee4],EDI    ; 00501b19
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00501b20
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x14                        ; 00501b25
    MOV EAX,dword ptr [ESP + 0x3ed0]    ; 00501b28
    CMP EAX,0x5                         ; 00501b2f
    JGE 0x00501b4b                      ; 00501b32
        ;   XREF to: 00501b4b (CONDITIONAL_JUMP)  ; LAB_00501b4b
    PUSH 0x58ec77                       ; 00501b34 | = "Error parsing gesture command parms"
    PUSH 0x1e56420                      ; 00501b39 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00501b3e
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00501b43
    JMP 0x004ff43c                      ; 00501b46
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 00501b4b
        ;   Label: LAB_00501b4b
    ADD EDX,EAX                         ; 00501b52
    LEA EAX,[ESP + 0x250c]              ; 00501b54
    PUSH EAX                            ; 00501b5b
    MOV dword ptr [ESP + 0x3e94],EDX    ; 00501b5c
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00501b63
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00501b68
    LEA EAX,[ESP + 0x25d4]              ; 00501b6b
    PUSH EAX                            ; 00501b72
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00501b73
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00501b78
    PUSH 0x765a60                       ; 00501b7b | g_CCharacterActorType_00765a60
    MOV ECX,dword ptr [0x00765a98]      ; 00501b80 | g_CCharacterActorType_00765a60.name_hash
    PUSH ECX                            ; 00501b86
    LEA EAX,[ESP + 0x2514]              ; 00501b87
    PUSH EAX                            ; 00501b8e
    CALL core_script.cpp_getActor_FUN_004fe180 ; 00501b8f
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00501b94
    MOV ESI,EAX                         ; 00501b97
    TEST EAX,EAX                        ; 00501b99
    JNZ 0x00501baf                      ; 00501b9b
        ;   XREF to: 00501baf (CONDITIONAL_JUMP)  ; LAB_00501baf
    CMP dword ptr [0x01e56c2c],0x0      ; 00501b9d | DAT_01e56c2c
    JNZ 0x004ff384                      ; 00501ba4
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 00501baa
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    CMP dword ptr [0x01e56418],0x0      ; 00501baf | DAT_01e56418
        ;   Label: LAB_00501baf
    JZ 0x00501c22                       ; 00501bb6
        ;   XREF to: 00501c22 (CONDITIONAL_JUMP)  ; LAB_00501c22
    PUSH 0x0                            ; 00501bb8
    LEA EDX,[ESP + 0x25d8]              ; 00501bba
    PUSH EDX                            ; 00501bc1
    ADD EAX,0x150                       ; 00501bc2
    PUSH EAX                            ; 00501bc7
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 00501bc8
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004e1890(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00501bcd
    PUSH EAX                            ; 00501bd0
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010 ; 00501bd1
        ;   XREF to: 004e1010 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00501bd6
    TEST EAX,EAX                        ; 00501bd9
    SETGE AL                            ; 00501bdb
    AND EAX,0xff                        ; 00501bde
    TEST EAX,EAX                        ; 00501be3
        ;   Label: LAB_00501be3
    JNZ 0x004ff36b                      ; 00501be5
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    LEA EAX,[ESI + 0x150]               ; 00501beb
    PUSH EAX                            ; 00501bf1
    CALL core_bugs.cpp_getDeformableModelName_FUN_00423d30 ; 00501bf2
        ;   XREF to: 00423d30 (UNCONDITIONAL_CALL)  ; char * core_bugs.cpp_getDeformableModelName_FUN_00423d30(CDeformableModelInstance * model_ptr)
    ADD ESP,0x4                         ; 00501bf7
    PUSH EAX                            ; 00501bfa
    LEA EAX,[ESP + 0x2510]              ; 00501bfb
    PUSH EAX                            ; 00501c02
    LEA EAX,[ESP + 0x25dc]              ; 00501c03
    PUSH EAX                            ; 00501c0a
    PUSH 0x58ec9b                       ; 00501c0b | = "Gesture name %s is not valid for acto..."
    PUSH 0x1e56420                      ; 00501c10 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00501c15
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x14                        ; 00501c1a
    JMP 0x004ff43c                      ; 00501c1d
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    LEA EDX,[ESP + 0x25d4]              ; 00501c22
        ;   Label: LAB_00501c22
    PUSH EDX                            ; 00501c29
    PUSH EAX                            ; 00501c2a
    CALL core_charactr.cpp_CCharacter_initGesture_FUN_00429520 ; 00501c2b
        ;   XREF to: 00429520 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_initGesture_FUN_00429520(CCharacter * this_ptr, char * motion_name)
    ADD ESP,0x8                         ; 00501c30
    JMP 0x00501be3                      ; 00501c33
        ;   XREF to: 00501be3 (UNCONDITIONAL_JUMP)  ; LAB_00501be3
    ADD ESI,0x9                         ; 00501c35
        ;   Label: LAB_00501c35
    PUSH ESI                            ; 00501c38
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00501c39
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    MOV EDX,0xffffffff                  ; 00501c3e
    ADD ESP,0x4                         ; 00501c43
    MOV dword ptr [ESP + 0x3ed4],EDX    ; 00501c46
    LEA EDX,[ESP + 0x3ed4]              ; 00501c4d
    PUSH EDX                            ; 00501c54
    LEA EDX,[ESP + 0x2128]              ; 00501c55
    PUSH EDX                            ; 00501c5c
    LEA EDX,[ESP + 0x2b54]              ; 00501c5d
    PUSH EDX                            ; 00501c64
    PUSH 0x58ecd9                       ; 00501c65 | = "(%[^,], %[^,)] )%n"
    PUSH EAX                            ; 00501c6a
    MOV dword ptr [ESP + 0x3ea4],EAX    ; 00501c6b
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00501c72
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x14                        ; 00501c77
    MOV ECX,dword ptr [ESP + 0x3ed4]    ; 00501c7a
    CMP ECX,0x5                         ; 00501c81
    JGE 0x00501c9d                      ; 00501c84
        ;   XREF to: 00501c9d (CONDITIONAL_JUMP)  ; LAB_00501c9d
    PUSH 0x58ecec                       ; 00501c86 | = "Error parsing getIniInt command parms"
    PUSH 0x1e56420                      ; 00501c8b | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00501c90
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00501c95
    JMP 0x004ff43c                      ; 00501c98
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV ESI,dword ptr [ESP + 0x3e90]    ; 00501c9d
        ;   Label: LAB_00501c9d
    LEA EAX,[ESP + 0x2b4c]              ; 00501ca4
    ADD ESI,ECX                         ; 00501cab
    PUSH EAX                            ; 00501cad
    MOV dword ptr [ESP + 0x3e94],ESI    ; 00501cae
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00501cb5
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00501cba
    LEA EAX,[ESP + 0x2124]              ; 00501cbd
    PUSH EAX                            ; 00501cc4
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00501cc5
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    MOV EDI,dword ptr [0x01e56418]      ; 00501cca | DAT_01e56418
    ADD ESP,0x4                         ; 00501cd0
    TEST EDI,EDI                        ; 00501cd3
    JNZ 0x004ff36b                      ; 00501cd5
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH 0x58ed12                       ; 00501cdb | = "Game"
    PUSH 0x58ed17                       ; 00501ce0 | = "system\\nocturne.ini"
    LEA EAX,[ESP + 0x244]               ; 00501ce5
    PUSH EAX                            ; 00501cec
    CALL engine_ini.cpp_CIniFile_ctor_FUN_004bd860 ; 00501ced
        ;   XREF to: 004bd860 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_CIniFile_ctor_FUN_004bd860(CIniFile * this_ptr, char * filename, char * section)
    ADD ESP,0xc                         ; 00501cf2
    LEA EAX,[ESP + 0x2124]              ; 00501cf5
    PUSH EAX                            ; 00501cfc
    MOV EAX,[0x005b7650]                ; 00501cfd | DAT_005b7650
    PUSH EAX                            ; 00501d02
    CALL core_event.cpp_CEventList_getCounterValue_FUN_004807e0 ; 00501d03
        ;   XREF to: 004807e0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_getCounterValue_FUN_004807e0(CEventList * this_ptr, char * str)
    ADD ESP,0x8                         ; 00501d08
    MOV dword ptr [ESP + 0x3ed8],EAX    ; 00501d0b
    LEA EAX,[ESP + 0x3ed8]              ; 00501d12
    PUSH EAX                            ; 00501d19
    LEA EAX,[ESP + 0x2b50]              ; 00501d1a
    PUSH EAX                            ; 00501d21
    LEA EAX,[ESP + 0x244]               ; 00501d22
    PUSH EAX                            ; 00501d29
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 00501d2a
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 00501d2f
    MOV EDX,dword ptr [ESP + 0x3ed8]    ; 00501d32
    PUSH EDX                            ; 00501d39
    LEA EAX,[ESP + 0x2128]              ; 00501d3a
    PUSH EAX                            ; 00501d41
    MOV ECX,dword ptr [0x005b7650]      ; 00501d42 | DAT_005b7650
    PUSH ECX                            ; 00501d48
    CALL core_event.cpp_CEventList_setCounter_FUN_004806d0 ; 00501d49
        ;   XREF to: 004806d0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_setCounter_FUN_004806d0(CEventList * this_ptr, char * name, int value)
    ADD ESP,0xc                         ; 00501d4e
    JMP 0x004ff36b                      ; 00501d51
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0xf                         ; 00501d56
        ;   Label: LAB_00501d56
    PUSH ESI                            ; 00501d59
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00501d5a
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00501d5f
    LEA EDX,[ESP + 0x3ee0]              ; 00501d62
    PUSH EDX                            ; 00501d69
    LEA EDX,[ESP + 0x2448]              ; 00501d6a
    PUSH EDX                            ; 00501d71
    LEA EDX,[ESP + 0x28fc]              ; 00501d72
    PUSH EDX                            ; 00501d79
    PUSH 0x58ed3b                       ; 00501d7a | = "(%[^,], %[^)])%n"
    MOV ESI,0xffffffff                  ; 00501d7f
    PUSH EAX                            ; 00501d84
    MOV dword ptr [ESP + 0x3ea4],EAX    ; 00501d85
    MOV dword ptr [ESP + 0x3ef4],ESI    ; 00501d8c
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00501d93
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x14                        ; 00501d98
    MOV EDI,dword ptr [ESP + 0x3ee0]    ; 00501d9b
    CMP EDI,0x5                         ; 00501da2
    JGE 0x00501dbe                      ; 00501da5
        ;   XREF to: 00501dbe (CONDITIONAL_JUMP)  ; LAB_00501dbe
    PUSH 0x58ed4c                       ; 00501da7 | = "Error parsing getTriggerActor command..."
    PUSH 0x1e56420                      ; 00501dac | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00501db1
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00501db6
    JMP 0x004ff43c                      ; 00501db9
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 00501dbe
        ;   Label: LAB_00501dbe
    LEA EAX,[ESP + 0x28f4]              ; 00501dc5
    ADD EDX,EDI                         ; 00501dcc
    PUSH EAX                            ; 00501dce
    MOV dword ptr [ESP + 0x3e94],EDX    ; 00501dcf
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00501dd6
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00501ddb
    LEA EAX,[ESP + 0x2444]              ; 00501dde
    PUSH EAX                            ; 00501de5
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00501de6
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00501deb
    LEA EAX,[ESP + 0x28f4]              ; 00501dee
    PUSH EAX                            ; 00501df5
    CALL core_script.cpp_validateActorVariableName_FUN_004fdec0 ; 00501df6
        ;   XREF to: 004fdec0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_validateActorVariableName_FUN_004fdec0(char * variable_name)
    ADD ESP,0x4                         ; 00501dfb
    TEST EAX,EAX                        ; 00501dfe
    JZ 0x004ff43c                       ; 00501e00
        ;   XREF to: 004ff43c (CONDITIONAL_JUMP)  ; LAB_004ff43c
    PUSH 0x2dd1084                      ; 00501e06
    MOV ECX,dword ptr [0x02dd10bc]      ; 00501e0b | g_CTriggerActorType_02dd1084.name_hash
    PUSH ECX                            ; 00501e11
    LEA EAX,[ESP + 0x244c]              ; 00501e12
    PUSH EAX                            ; 00501e19
    CALL core_script.cpp_getActor_FUN_004fe180 ; 00501e1a
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00501e1f
    TEST EAX,EAX                        ; 00501e22
    JNZ 0x00501e38                      ; 00501e24
        ;   XREF to: 00501e38 (CONDITIONAL_JUMP)  ; LAB_00501e38
    CMP dword ptr [0x01e56c2c],0x0      ; 00501e26 | DAT_01e56c2c
    JNZ 0x004ff384                      ; 00501e2d
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 00501e33
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    CMP dword ptr [0x01e56418],0x0      ; 00501e38 | DAT_01e56418
        ;   Label: LAB_00501e38
    JNZ 0x004ff36b                      ; 00501e3f
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV EDI,dword ptr [EAX + 0x2f4]     ; 00501e45
    PUSH EDI                            ; 00501e4b
    LEA EAX,[ESP + 0x28f8]              ; 00501e4c
    PUSH EAX                            ; 00501e53
    MOV EAX,[0x005b7650]                ; 00501e54 | DAT_005b7650
    PUSH EAX                            ; 00501e59
    CALL core_event.cpp_CEventList_setActorVariable_FUN_00480950 ; 00501e5a
        ;   XREF to: 00480950 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_setActorVariable_FUN_00480950(CEventList * this_ptr, char * var_name, CDemonActor * actor)
    ADD ESP,0xc                         ; 00501e5f
    JMP 0x004ff36b                      ; 00501e62
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0x5                         ; 00501e67
        ;   Label: LAB_00501e67
    PUSH ESI                            ; 00501e6a
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00501e6b
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00501e70
    PUSH EAX                            ; 00501e73
    PUSH EBX                            ; 00501e74
    MOV dword ptr [ESP + 0x3e98],EAX    ; 00501e75
    CALL core_script.cpp_CScript_findLabelIndex_FUN_00504c10 ; 00501e7c
        ;   XREF to: 00504c10 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_findLabelIndex_FUN_00504c10(CScript * this_ptr, char * label_name)
    ADD ESP,0x8                         ; 00501e81
    TEST EAX,EAX                        ; 00501e84
    JL 0x00501ea1                       ; 00501e86
        ;   XREF to: 00501ea1 (CONDITIONAL_JUMP)  ; LAB_00501ea1
    CMP dword ptr [0x01e56418],0x0      ; 00501e88 | DAT_01e56418
    JZ 0x00501ebb                       ; 00501e8f
        ;   XREF to: 00501ebb (CONDITIONAL_JUMP)  ; LAB_00501ebb
    MOV dword ptr [ESP + 0x3e90],0x58ede4 ; 00501e91 | CHAR_00h_0058ede4
    JMP 0x004ff36b                      ; 00501e9c
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV ECX,dword ptr [ESP + 0x3e8c]    ; 00501ea1
        ;   Label: LAB_00501ea1
    PUSH ECX                            ; 00501ea8
    MOV EBX,dword ptr [ESP + 0x3e94]    ; 00501ea9
    PUSH EBX                            ; 00501eb0
    PUSH 0x58ed7e                       ; 00501eb1 | = "Undefined label %s used in gosub stat..."
    JMP 0x004ff42f                      ; 00501eb6
        ;   XREF to: 004ff42f (UNCONDITIONAL_JUMP)  ; LAB_004ff42f
    MOV ESI,dword ptr [EBX + 0x454]     ; 00501ebb
        ;   Label: LAB_00501ebb
    CMP ESI,0x8                         ; 00501ec1
    JGE 0x00501ef9                      ; 00501ec4
        ;   XREF to: 00501ef9 (CONDITIONAL_JUMP)  ; LAB_00501ef9
    LEA EDX,[ESI*0x4 + 0x0]             ; 00501ec6
    LEA ECX,[EBX + EDX*0x1]             ; 00501ecd
    MOV EDX,dword ptr [EBX + 0x40]      ; 00501ed0
    MOV dword ptr [ECX + 0x458],EDX     ; 00501ed3
    MOV EDI,dword ptr [EBX + 0x454]     ; 00501ed9
    MOV dword ptr [EBX + 0x40],EAX      ; 00501edf
    INC EDI                             ; 00501ee2
    MOV dword ptr [EBX + 0x454],EDI     ; 00501ee3
    MOV dword ptr [ESP + 0x3e90],0x58ede4 ; 00501ee9 | CHAR_00h_0058ede4
    JMP 0x004ff36b                      ; 00501ef4
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV EAX,dword ptr [ESP + 0x3e8c]    ; 00501ef9
        ;   Label: LAB_00501ef9
    PUSH EAX                            ; 00501f00
    PUSH 0x58edb4                       ; 00501f01 | = "Call stack overflow detected on scrip..."
    PUSH 0x1e56420                      ; 00501f06 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00501f0b
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 00501f10
    JMP 0x004ff43c                      ; 00501f13
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    ADD ESI,0x4                         ; 00501f18
        ;   Label: LAB_00501f18
    PUSH ESI                            ; 00501f1b
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00501f1c
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00501f21
    PUSH EAX                            ; 00501f24
    PUSH EBX                            ; 00501f25
    MOV dword ptr [ESP + 0x3e98],EAX    ; 00501f26
    CALL core_script.cpp_CScript_findLabelIndex_FUN_00504c10 ; 00501f2d
        ;   XREF to: 00504c10 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_findLabelIndex_FUN_00504c10(CScript * this_ptr, char * label_name)
    ADD ESP,0x8                         ; 00501f32
    TEST EAX,EAX                        ; 00501f35
    JL 0x00501f52                       ; 00501f37
        ;   XREF to: 00501f52 (CONDITIONAL_JUMP)  ; LAB_00501f52
    CMP dword ptr [0x01e56418],0x0      ; 00501f39 | DAT_01e56418
    JZ 0x00501f6c                       ; 00501f40
        ;   XREF to: 00501f6c (CONDITIONAL_JUMP)  ; LAB_00501f6c
    MOV dword ptr [ESP + 0x3e90],0x58ee1f ; 00501f42 | CHAR_00h_0058ee1f
    JMP 0x004ff36b                      ; 00501f4d
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV EAX,dword ptr [ESP + 0x3e8c]    ; 00501f52
        ;   Label: LAB_00501f52
    PUSH EAX                            ; 00501f59
    MOV EDX,dword ptr [ESP + 0x3e94]    ; 00501f5a
    PUSH EDX                            ; 00501f61
    PUSH 0x58edea                       ; 00501f62 | = "Undefined label %s used in goto state..."
    JMP 0x004ff42f                      ; 00501f67
        ;   XREF to: 004ff42f (UNCONDITIONAL_JUMP)  ; LAB_004ff42f
    MOV dword ptr [EBX + 0x40],EAX      ; 00501f6c
        ;   Label: LAB_00501f6c
    MOV dword ptr [ESP + 0x3e90],0x58ee1f ; 00501f6f | CHAR_00h_0058ee1f
    JMP 0x004ff36b                      ; 00501f7a
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0x4                         ; 00501f7f
        ;   Label: LAB_00501f7f
    PUSH ESI                            ; 00501f82
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00501f83
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00501f88
    PUSH 0x12c                          ; 00501f8b
    MOV dword ptr [ESP + 0x3e94],EAX    ; 00501f90
    LEA EAX,[ESP + 0xbac]               ; 00501f97
    PUSH EAX                            ; 00501f9e
    LEA EAX,[ESP + 0x3e98]              ; 00501f9f
    PUSH EAX                            ; 00501fa6
    CALL core_script.cpp_parseArgument_FUN_004fe090 ; 00501fa7
        ;   XREF to: 004fe090 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_004fe090(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 00501fac
    TEST EAX,EAX                        ; 00501faf
    JNZ 0x00501802                      ; 00501fb1
        ;   XREF to: 00501802 (CONDITIONAL_JUMP)  ; LAB_00501802
    CMP dword ptr [0x01e56418],0x0      ; 00501fb7 | DAT_01e56418
    JNZ 0x004ff36b                      ; 00501fbe
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    LEA EAX,[ESP + 0xba8]               ; 00501fc4
    PUSH EAX                            ; 00501fcb
    MOV ESI,dword ptr [ESP + 0x3e90]    ; 00501fcc
    PUSH ESI                            ; 00501fd3
    PUSH 0x58ee25                       ; 00501fd4 | = "Script GTFO at line %d:\n%s\nTerminat..."
    MOV EDI,dword ptr [0x005b6d50]      ; 00501fd9 | g_CEditorTools_PTR_005b6d50
    PUSH EDI                            ; 00501fdf
    CALL shape_edittool.cpp_FUN_0046fcd0 ; 00501fe0
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fcd0()
    ADD ESP,0x10                        ; 00501fe5
    XOR EAX,EAX                         ; 00501fe8
    MOV dword ptr [EBX],0x1             ; 00501fea
    MOV dword ptr [ESP + 0x3e84],EAX    ; 00501ff0
    JMP 0x004ff36b                      ; 00501ff7
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0xd                         ; 00501ffc
        ;   Label: LAB_00501ffc
    PUSH ESI                            ; 00501fff
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00502000
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    MOV EDX,0xffffffff                  ; 00502005
    ADD ESP,0x4                         ; 0050200a
    MOV dword ptr [ESP + 0x3ee4],EDX    ; 0050200d
    LEA EDX,[ESP + 0x3ee4]              ; 00502014
    PUSH EDX                            ; 0050201b
    LEA EDX,[ESP + 0x2a88]              ; 0050201c
    PUSH EDX                            ; 00502023
    PUSH 0x58ee63                       ; 00502024 | = "(%[^,)]%n"
    PUSH EAX                            ; 00502029
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 0050202a
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00502031
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x10                        ; 00502036
    MOV ECX,dword ptr [ESP + 0x3ee4]    ; 00502039
    CMP ECX,0x2                         ; 00502040
    JGE 0x0050205c                      ; 00502043
        ;   XREF to: 0050205c (CONDITIONAL_JUMP)  ; LAB_0050205c
    PUSH 0x58ee6d                       ; 00502045 | = "Error parsing holsterWeapon command p..."
    PUSH 0x1e56420                      ; 0050204a | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0050204f
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00502054
    JMP 0x004ff43c                      ; 00502057
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV ESI,dword ptr [ESP + 0x3e90]    ; 0050205c
        ;   Label: LAB_0050205c
    LEA EAX,[ESP + 0x2a84]              ; 00502063
    ADD ESI,ECX                         ; 0050206a
    PUSH EAX                            ; 0050206c
    MOV dword ptr [ESP + 0x3e94],ESI    ; 0050206d
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00502074
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00502079
    PUSH 0x1cae0ec                      ; 0050207c
    MOV EDI,dword ptr [0x01cae124]      ; 00502081 | g_CHeroActorType_01cae0ec.name_hash
    PUSH EDI                            ; 00502087
    LEA EAX,[ESP + 0x2a8c]              ; 00502088
    PUSH EAX                            ; 0050208f
    CALL core_script.cpp_getActor_FUN_004fe180 ; 00502090
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00502095
    MOV dword ptr [ESP + 0x3ee8],EAX    ; 00502098
    TEST EAX,EAX                        ; 0050209f
    JNZ 0x005020b5                      ; 005020a1
        ;   XREF to: 005020b5 (CONDITIONAL_JUMP)  ; LAB_005020b5
    CMP dword ptr [0x01e56c2c],0x0      ; 005020a3 | DAT_01e56c2c
    JNZ 0x004ff384                      ; 005020aa
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 005020b0
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV dword ptr [ESP + 0x3eec],0x1    ; 005020b5
        ;   Label: LAB_005020b5
    MOV EAX,dword ptr [ESP + 0x3e90]    ; 005020c0
    CMP byte ptr [EAX],0x2c             ; 005020c7
    JZ 0x0050212a                       ; 005020ca
        ;   XREF to: 0050212a (CONDITIONAL_JUMP)  ; LAB_0050212a
    MOV EAX,dword ptr [ESP + 0x3e90]    ; 005020cc
        ;   Label: LAB_005020cc
    CMP byte ptr [EAX],0x29             ; 005020d3
    JNZ 0x00502217                      ; 005020d6
        ;   XREF to: 00502217 (CONDITIONAL_JUMP)  ; LAB_00502217
    LEA ECX,[EAX + 0x1]                 ; 005020dc
    MOV ESI,dword ptr [0x01e56418]      ; 005020df | DAT_01e56418
    MOV dword ptr [ESP + 0x3e90],ECX    ; 005020e5
    TEST ESI,ESI                        ; 005020ec
    JNZ 0x004ff36b                      ; 005020ee
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV EAX,dword ptr [ESP + 0x3ee8]    ; 005020f4
    MOV EDI,dword ptr [ESP + 0x3eec]    ; 005020fb
    MOV EAX,dword ptr [EAX + 0x14c]     ; 00502102
    TEST EDI,EDI                        ; 00502108
    SETZ DL                             ; 0050210a
    AND EDX,0xff                        ; 0050210d
    PUSH EDX                            ; 00502113
    MOV EDX,dword ptr [ESP + 0x3eec]    ; 00502114
    PUSH EDX                            ; 0050211b
    CALL dword ptr [EAX + 0x13c]        ; 0050211c
    ADD ESP,0x8                         ; 00502122
    JMP 0x004ff36b                      ; 00502125
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    LEA EDX,[EAX + 0x1]                 ; 0050212a
        ;   Label: LAB_0050212a
    MOV EDI,EDX                         ; 0050212d
    MOV dword ptr [ESP + 0x3e90],EDX    ; 0050212f
    SUB ECX,ECX                         ; 00502136
    DEC ECX                             ; 00502138
    XOR EAX,EAX                         ; 00502139
    SCASB.REPNE ES:EDI                  ; 0050213b
    NOT ECX                             ; 0050213d
    DEC ECX                             ; 0050213f
    DEC ECX                             ; 00502140
    MOV dword ptr [ESP + 0x3ee4],ECX    ; 00502141
    CMP ECX,0x1                         ; 00502148
    JL 0x005021de                       ; 0050214b
        ;   XREF to: 005021de (CONDITIONAL_JUMP)  ; LAB_005021de
    MOV ESI,dword ptr [ESP + 0x3e90]    ; 00502151
    LEA EDI,[ESP + 0x2ffc]              ; 00502158
    PUSH EDI                            ; 0050215f
    MOV EAX,ECX                         ; 00502160
    SHR ECX,0x2                         ; 00502162
    MOVSD.REP ES:EDI,ESI                ; 00502165
    MOV CL,AL                           ; 00502167
    AND CL,0x3                          ; 00502169
    MOVSB.REP ES:EDI,ESI                ; 0050216c
    POP EDI                             ; 0050216e
    XOR DL,DL                           ; 0050216f
    MOV EAX,dword ptr [ESP + 0x3ee4]    ; 00502171
    MOV ESI,dword ptr [ESP + 0x3e90]    ; 00502178
    MOV EDI,dword ptr [0x01e56418]      ; 0050217f | DAT_01e56418
    ADD ESI,EAX                         ; 00502185
    MOV byte ptr [ESP + EAX*0x1 + 0x2ffc],DL ; 00502187
    MOV dword ptr [ESP + 0x3e90],ESI    ; 0050218e
    TEST EDI,EDI                        ; 00502195
    JZ 0x005021f5                       ; 00502197
        ;   XREF to: 005021f5 (CONDITIONAL_JUMP)  ; LAB_005021f5
    LEA EAX,[ESP + 0x2ffc]              ; 00502199
    PUSH EAX                            ; 005021a0
    MOV EDX,dword ptr [0x005b7650]      ; 005021a1 | DAT_005b7650
    PUSH EDX                            ; 005021a7
    CALL core_event.cpp_CEventList_validateCondition_FUN_0047dc90 ; 005021a8
        ;   XREF to: 0047dc90 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCondition_FUN_0047dc90(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 005021ad
    TEST EAX,EAX                        ; 005021b0
    JZ 0x005020cc                       ; 005021b2
        ;   XREF to: 005020cc (CONDITIONAL_JUMP)  ; LAB_005020cc
    MOV EDI,0x1e56420                   ; 005021b8
        ;   Label: LAB_005021b8
    MOV ESI,EAX                         ; 005021bd
    PUSH EDI                            ; 005021bf | DAT_01e56420
    MOV AL,byte ptr [ESI]               ; 005021c0
        ;   Label: LAB_005021c0
    MOV byte ptr [EDI],AL               ; 005021c2 | DAT_01e56420 | DAT_01e56422
    CMP AL,0x0                          ; 005021c4
    JZ 0x005021d8                       ; 005021c6
        ;   XREF to: 005021d8 (CONDITIONAL_JUMP)  ; LAB_005021d8
    MOV AL,byte ptr [ESI + 0x1]         ; 005021c8
    ADD ESI,0x2                         ; 005021cb
    MOV byte ptr [EDI + 0x1],AL         ; 005021ce | DAT_01e56421 | DAT_01e56423
    ADD EDI,0x2                         ; 005021d1
    CMP AL,0x0                          ; 005021d4
    JNZ 0x005021c0                      ; 005021d6
        ;   XREF to: 005021c0 (CONDITIONAL_JUMP)  ; LAB_005021c0
    POP EDI                             ; 005021d8
        ;   Label: LAB_005021d8
    JMP 0x004ff43c                      ; 005021d9
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    PUSH 0x58ee97                       ; 005021de | = "Error parsing holsterWeapon command p..."
        ;   Label: LAB_005021de
    PUSH 0x1e56420                      ; 005021e3 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 005021e8
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 005021ed
    JMP 0x004ff43c                      ; 005021f0
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    LEA EAX,[ESP + 0x2ffc]              ; 005021f5
        ;   Label: LAB_005021f5
    PUSH EAX                            ; 005021fc
    MOV EAX,[0x005b7650]                ; 005021fd | DAT_005b7650
    PUSH EAX                            ; 00502202
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 00502203
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00502208
    MOV dword ptr [ESP + 0x3eec],EAX    ; 0050220b
    JMP 0x005020cc                      ; 00502212
        ;   XREF to: 005020cc (UNCONDITIONAL_JUMP)  ; LAB_005020cc
    PUSH 0x58eec1                       ; 00502217 | = "Missing closing ')' in holsterWeapon ..."
        ;   Label: LAB_00502217
    PUSH 0x1e56420                      ; 0050221c | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00502221
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00502226
    JMP 0x004ff43c                      ; 00502229
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    ADD ESI,0x4                         ; 0050222e
        ;   Label: LAB_0050222e
    PUSH ESI                            ; 00502231
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00502232
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00502237
    MOV dword ptr [ESP + 0x3e90],EAX    ; 0050223a
    XOR ESI,ESI                         ; 00502241
    MOV EAX,dword ptr [EBX + 0x40]      ; 00502243
    MOV dword ptr [ESP + 0x3e84],ESI    ; 00502246
    MOV dword ptr [ESP + 0x3e94],EAX    ; 0050224d
    JMP 0x004ff36b                      ; 00502254
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0x2                         ; 00502259
        ;   Label: LAB_00502259
    PUSH ESI                            ; 0050225c
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 0050225d
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00502262
    MOV dword ptr [ESP + 0x3e90],EAX    ; 00502265
    LEA EAX,[ESP + 0x36b4]              ; 0050226c
    PUSH EAX                            ; 00502273
    LEA EAX,[ESP + 0x3e94]              ; 00502274
    PUSH EAX                            ; 0050227b
    CALL core_script.cpp_parseConditionExpr_FUN_004fe140 ; 0050227c
        ;   XREF to: 004fe140 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseConditionExpr_FUN_004fe140(char * * cursor, char * out_buffer)
    ADD ESP,0x8                         ; 00502281
    TEST EAX,EAX                        ; 00502284
    JNZ 0x005021b8                      ; 00502286
        ;   XREF to: 005021b8 (CONDITIONAL_JUMP)  ; LAB_005021b8
    CMP dword ptr [0x01e56418],0x0      ; 0050228c | DAT_01e56418
    JNZ 0x004ff36b                      ; 00502293
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    LEA EAX,[ESP + 0x36b4]              ; 00502299
    PUSH EAX                            ; 005022a0
    MOV EAX,[0x005b7650]                ; 005022a1 | DAT_005b7650
    PUSH EAX                            ; 005022a6
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 005022a7
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005022ac
    TEST EAX,EAX                        ; 005022af
    JNZ 0x004ff36b                      ; 005022b1
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH EAX                            ; 005022b7
    MOV EDX,dword ptr [EBX + 0x40]      ; 005022b8
    PUSH EDX                            ; 005022bb
    PUSH EBX                            ; 005022bc
    CALL core_script.cpp_CScript_skipCommands_FUN_00504c70 ; 005022bd
        ;   XREF to: 00504c70 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_skipCommands_FUN_00504c70(CScript * this_ptr, int direction, int count)
    MOV ESI,EAX                         ; 005022c2
    ADD ESP,0xc                         ; 005022c4
    MOV EDI,EAX                         ; 005022c7
    TEST EAX,EAX                        ; 005022c9
    JL 0x005022f3                       ; 005022cb
        ;   XREF to: 005022f3 (CONDITIONAL_JUMP)  ; LAB_005022f3
    PUSH 0x4                            ; 005022cd
    MOV EDX,dword ptr [EBX + 0x2c]      ; 005022cf
    PUSH 0x58ef2c                       ; 005022d2 | = "else"
    MOV ECX,dword ptr [EDX + ESI*0x8 + 0x4] ; 005022d7
    PUSH ECX                            ; 005022db
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 005022dc
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005022e1
    TEST EAX,EAX                        ; 005022e4
    JNZ 0x005022eb                      ; 005022e6
        ;   XREF to: 005022eb (CONDITIONAL_JUMP)  ; LAB_005022eb
    LEA EDI,[ESI + 0x1]                 ; 005022e8
    MOV dword ptr [EBX + 0x40],EDI      ; 005022eb
        ;   Label: LAB_005022eb
    JMP 0x004ff36b                      ; 005022ee
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV EBX,dword ptr [ESP + 0x3e8c]    ; 005022f3
        ;   Label: LAB_005022f3
    PUSH EBX                            ; 005022fa
    PUSH 0x58eef6                       ; 005022fb | = "Can't skip next command after if stat..."
    PUSH 0x1e56420                      ; 00502300 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00502305
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 0050230a
    JMP 0x004ff43c                      ; 0050230d
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    ADD ESI,0xb                         ; 00502312
        ;   Label: LAB_00502312
    PUSH ESI                            ; 00502315
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00502316
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 0050231b
    LEA EDX,[ESP + 0x3f90]              ; 0050231e
    PUSH EDX                            ; 00502325
    PUSH 0x58ef3d                       ; 00502326 | = " ( )%n"
    MOV ESI,0xffffffff                  ; 0050232b
    PUSH EAX                            ; 00502330
    MOV dword ptr [ESP + 0x3e9c],EAX    ; 00502331
    MOV dword ptr [ESP + 0x3f9c],ESI    ; 00502338
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0050233f
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0xc                         ; 00502344
    MOV EDI,dword ptr [ESP + 0x3f90]    ; 00502347
    CMP EDI,0x2                         ; 0050234e
    JL 0x00502392                       ; 00502351
        ;   XREF to: 00502392 (CONDITIONAL_JUMP)  ; LAB_00502392
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 00502353
    ADD EDX,EDI                         ; 0050235a
    MOV ECX,dword ptr [0x01e56418]      ; 0050235c | DAT_01e56418
    MOV dword ptr [ESP + 0x3e90],EDX    ; 00502362
    TEST ECX,ECX                        ; 00502369
    JNZ 0x004ff36b                      ; 0050236b
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV EAX,[0x005b9354]                ; 00502371 | g_CGame_PTR_005b9354
    MOV dword ptr [EBX],0x1             ; 00502376
    MOV dword ptr [ESP + 0x3e84],ECX    ; 0050237c
    MOV dword ptr [EAX + 0x258],0x1     ; 00502383 | g_CGame_01c775ec.act_completion_state
    JMP 0x004ff36b                      ; 0050238d
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH 0x58ef44                       ; 00502392 | = "Error parsing finishedAct command"
        ;   Label: LAB_00502392
    PUSH 0x1e56420                      ; 00502397 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0050239c
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 005023a1
    JMP 0x004ff43c                      ; 005023a4
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    ADD ESI,0x9                         ; 005023a9
        ;   Label: LAB_005023a9
    PUSH ESI                            ; 005023ac
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 005023ad
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 005023b2
    PUSH 0x64                           ; 005023b5
    MOV dword ptr [ESP + 0x3e94],EAX    ; 005023b7
    LEA EAX,[ESP + 0x371c]              ; 005023be
    PUSH EAX                            ; 005023c5
    LEA EAX,[ESP + 0x3e98]              ; 005023c6
    PUSH EAX                            ; 005023cd
    CALL core_script.cpp_parseArgument_FUN_004fe090 ; 005023ce
        ;   XREF to: 004fe090 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_004fe090(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 005023d3
    TEST EAX,EAX                        ; 005023d6
    JNZ 0x005021b8                      ; 005023d8
        ;   XREF to: 005021b8 (CONDITIONAL_JUMP)  ; LAB_005021b8
    PUSH 0x58ef70                       ; 005023de | = "false"
    LEA EAX,[ESP + 0x371c]              ; 005023e3
    PUSH EAX                            ; 005023ea
    MOV ESI,0xffffffff                  ; 005023eb
    CALL crt_string.c__stricmp_FUN_00564520 ; 005023f0
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 005023f5
    TEST EAX,EAX                        ; 005023f8
    JNZ 0x005023fe                      ; 005023fa
        ;   XREF to: 005023fe (CONDITIONAL_JUMP)  ; LAB_005023fe
    XOR ESI,ESI                         ; 005023fc
    PUSH 0x58ef76                       ; 005023fe | = "true"
        ;   Label: LAB_005023fe
    LEA EAX,[ESP + 0x371c]              ; 00502403
    PUSH EAX                            ; 0050240a
    CALL crt_string.c__stricmp_FUN_00564520 ; 0050240b
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 00502410
    TEST EAX,EAX                        ; 00502413
    JNZ 0x0050241c                      ; 00502415
        ;   XREF to: 0050241c (CONDITIONAL_JUMP)  ; LAB_0050241c
    MOV ESI,0x1                         ; 00502417
    PUSH 0x58ef7b                       ; 0050241c | = "bottom"
        ;   Label: LAB_0050241c
    LEA EAX,[ESP + 0x371c]              ; 00502421
    PUSH EAX                            ; 00502428
    CALL crt_string.c__stricmp_FUN_00564520 ; 00502429
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 0050242e
    TEST EAX,EAX                        ; 00502431
    JNZ 0x00502525                      ; 00502433
        ;   XREF to: 00502525 (CONDITIONAL_JUMP)  ; LAB_00502525
    MOV ESI,0x2                         ; 00502439
    CMP dword ptr [0x01e56418],0x0      ; 0050243e | DAT_01e56418
        ;   Label: LAB_0050243e
    JNZ 0x004ff36b                      ; 00502445
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV EAX,[0x005b9354]                ; 0050244b | g_CGame_PTR_005b9354
    MOV dword ptr [EAX + 0x228],ESI     ; 00502450 | g_CGame_01c775ec.letterbox_mode
    TEST ESI,ESI                        ; 00502456
    SETZ DL                             ; 00502458
    AND EDX,0xff                        ; 0050245b
    MOV ESI,dword ptr [EAX + 0x228]     ; 00502461 | g_CGame_01c775ec.letterbox_mode
    MOV dword ptr [EAX + 0x22c],EDX     ; 00502467 | g_CGame_01c775ec.allow_damage_flag
    TEST ESI,ESI                        ; 0050246d
    SETZ DL                             ; 0050246f
    AND EDX,0xff                        ; 00502472
    MOV dword ptr [EAX + 0x230],EDX     ; 00502478 | g_CGame_01c775ec.allow_enemy_attack_flag
    MOV EDX,dword ptr [EAX + 0x228]     ; 0050247e | g_CGame_01c775ec.letterbox_mode
    MOV dword ptr [EAX + 0x238],EDX     ; 00502484 | g_CGame_01c775ec.allow_hero_controls_flag
    MOV dword ptr [EBX + 0x450],0xffffffff ; 0050248a
    MOV EDI,0x1                         ; 00502494
    MOV EDX,dword ptr [EAX + 0x240]     ; 00502499 | g_CGame_01c775ec.goggles_active
    MOV dword ptr [0x01e56c24],EDI      ; 0050249f | DAT_01e56c24
    TEST EDX,EDX                        ; 005024a5
    JZ 0x004ff36b                       ; 005024a7
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    CMP dword ptr [EAX + 0x228],0x0     ; 005024ad | g_CGame_01c775ec.letterbox_mode
    JZ 0x004ff36b                       ; 005024b4
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV ESI,dword ptr [0x005be368]      ; 005024ba | g_CDemonSet_PTR_005be368
    PUSH ESI                            ; 005024c0 | g_CDemonSet_01e57284
    MOV dword ptr [EAX + 0x240],0x0     ; 005024c1 | g_CGame_01c775ec.goggles_active
    CALL core_event.cpp_getSelectedCameraIndex_FUN_00481920 ; 005024cb
        ;   XREF to: 00481920 (UNCONDITIONAL_CALL)  ; int core_event.cpp_getSelectedCameraIndex_FUN_00481920(CDemonSet * set_ptr)
    ADD ESP,0x4                         ; 005024d0
    MOV ESI,EAX                         ; 005024d3
    MOV EAX,[0x005be220]                ; 005024d5 | DAT_005be220
    PUSH EDI                            ; 005024da
    MOV EDI,dword ptr [EAX + 0xc]       ; 005024db | g_CScript_01e56da0.focus_actor
    PUSH EDI                            ; 005024de
    MOV EAX,[0x005be368]                ; 005024df | g_CDemonSet_PTR_005be368
    PUSH EAX                            ; 005024e4 | g_CDemonSet_01e57284
    CALL core_setdir.cpp_FUN_005125a0   ; 005024e5
        ;   XREF to: 005125a0 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_FUN_005125a0()
    ADD ESP,0xc                         ; 005024ea
    MOV EDX,dword ptr [0x005be368]      ; 005024ed | g_CDemonSet_PTR_005be368
    MOV EAX,[0x005be220]                ; 005024f3 | DAT_005be220
    PUSH EDX                            ; 005024f8 | g_CDemonSet_01e57284
    MOV dword ptr [EAX + 0x10],0x0      ; 005024f9 | g_CScript_01e56da0.focus_actor_changed
    CALL core_event.cpp_getSelectedCameraIndex_FUN_00481920 ; 00502500
        ;   XREF to: 00481920 (UNCONDITIONAL_CALL)  ; int core_event.cpp_getSelectedCameraIndex_FUN_00481920(CDemonSet * set_ptr)
    ADD ESP,0x4                         ; 00502505
    CMP ESI,EAX                         ; 00502508
    JNZ 0x004ff36b                      ; 0050250a
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH EAX                            ; 00502510
    MOV ECX,dword ptr [0x005be368]      ; 00502511 | g_CDemonSet_PTR_005be368
    PUSH ECX                            ; 00502517 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 ; 00502518
        ;   XREF to: 005088f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_005088f0(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 0050251d
    JMP 0x004ff36b                      ; 00502520
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    TEST ESI,ESI                        ; 00502525
        ;   Label: LAB_00502525
    JGE 0x0050243e                      ; 00502527
        ;   XREF to: 0050243e (CONDITIONAL_JUMP)  ; LAB_0050243e
    LEA EAX,[ESP + 0x3718]              ; 0050252d
    PUSH EAX                            ; 00502534
    PUSH 0x58ef82                       ; 00502535 | = "Invalid letterBox mode: %s"
    PUSH 0x1e56420                      ; 0050253a | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0050253f
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 00502544
    JMP 0x004ff43c                      ; 00502547
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    ADD ESI,0xe                         ; 0050254c
        ;   Label: LAB_0050254c
    PUSH ESI                            ; 0050254f
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00502550
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00502555
    MOV dword ptr [ESP + 0x3e90],EAX    ; 00502558
    LEA EAX,[ESP + 0x3cf4]              ; 0050255f
    PUSH EAX                            ; 00502566
    LEA EAX,[ESP + 0x3e94]              ; 00502567
    PUSH EAX                            ; 0050256e
    CALL core_script.cpp_parseConditionExpr_FUN_004fe140 ; 0050256f
        ;   XREF to: 004fe140 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseConditionExpr_FUN_004fe140(char * * cursor, char * out_buffer)
    ADD ESP,0x8                         ; 00502574
    TEST EAX,EAX                        ; 00502577
    JNZ 0x005021b8                      ; 00502579
        ;   XREF to: 005021b8 (CONDITIONAL_JUMP)  ; LAB_005021b8
    CMP dword ptr [0x01e56418],0x0      ; 0050257f | DAT_01e56418
    JNZ 0x004ff36b                      ; 00502586
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    LEA EAX,[ESP + 0x3cf4]              ; 0050258c
    PUSH EAX                            ; 00502593
    MOV EDI,dword ptr [0x005b7650]      ; 00502594 | DAT_005b7650
    PUSH EDI                            ; 0050259a
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 0050259b
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005025a0
    MOV dword ptr [EBX + 0x14],EAX      ; 005025a3
    JMP 0x004ff36b                      ; 005025a6
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0x6                         ; 005025ab
        ;   Label: LAB_005025ab
    PUSH ESI                            ; 005025ae
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 005025af
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    MOV EDX,0xffffffff                  ; 005025b4
    ADD ESP,0x4                         ; 005025b9
    MOV dword ptr [ESP + 0x3ef4],EDX    ; 005025bc
    LEA EDX,[ESP + 0x3ef4]              ; 005025c3
    PUSH EDX                            ; 005025ca
    LEA EDX,[ESP + 0x2c18]              ; 005025cb
    PUSH EDX                            ; 005025d2
    PUSH 0x58efb3                       ; 005025d3 | = "(%[^,)]%n"
    PUSH EAX                            ; 005025d8
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 005025d9
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 005025e0
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x10                        ; 005025e5
    MOV ECX,dword ptr [ESP + 0x3ef4]    ; 005025e8
    CMP ECX,0x2                         ; 005025ef
    JGE 0x0050260b                      ; 005025f2
        ;   XREF to: 0050260b (CONDITIONAL_JUMP)  ; LAB_0050260b
    PUSH 0x58efbd                       ; 005025f4 | = "Error parsing lookAt command parms"
    PUSH 0x1e56420                      ; 005025f9 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 005025fe
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00502603
    JMP 0x004ff43c                      ; 00502606
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV ESI,dword ptr [ESP + 0x3e90]    ; 0050260b
        ;   Label: LAB_0050260b
    LEA EAX,[ESP + 0x2c14]              ; 00502612
    ADD ESI,ECX                         ; 00502619
    PUSH EAX                            ; 0050261b
    MOV dword ptr [ESP + 0x3e94],ESI    ; 0050261c
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00502623
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00502628
    PUSH 0x765a60                       ; 0050262b | g_CCharacterActorType_00765a60
    MOV EDI,dword ptr [0x00765a98]      ; 00502630 | g_CCharacterActorType_00765a60.name_hash
    PUSH EDI                            ; 00502636
    LEA EAX,[ESP + 0x2c1c]              ; 00502637
    PUSH EAX                            ; 0050263e
    CALL core_script.cpp_getActor_FUN_004fe180 ; 0050263f
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00502644
    MOV ESI,EAX                         ; 00502647
    TEST EAX,EAX                        ; 00502649
    JNZ 0x0050265f                      ; 0050264b
        ;   XREF to: 0050265f (CONDITIONAL_JUMP)  ; LAB_0050265f
    CMP dword ptr [0x01e56c2c],0x0      ; 0050264d | DAT_01e56c2c
    JNZ 0x004ff384                      ; 00502654
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 0050265a
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 0050265f
        ;   Label: LAB_0050265f
    MOV CL,byte ptr [EDX]               ; 00502666
    XOR EAX,EAX                         ; 00502668
    CMP CL,0x2c                         ; 0050266a
    JZ 0x005026a4                       ; 0050266d
        ;   XREF to: 005026a4 (CONDITIONAL_JUMP)  ; LAB_005026a4
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 0050266f
        ;   Label: LAB_0050266f
    CMP byte ptr [EDX],0x29             ; 00502676
    JNZ 0x00502745                      ; 00502679
        ;   XREF to: 00502745 (CONDITIONAL_JUMP)  ; LAB_00502745
    INC EDX                             ; 0050267f
    MOV ECX,dword ptr [0x01e56418]      ; 00502680 | DAT_01e56418
    MOV dword ptr [ESP + 0x3e90],EDX    ; 00502686
    TEST ECX,ECX                        ; 0050268d
    JNZ 0x004ff36b                      ; 0050268f
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH EAX                            ; 00502695
    PUSH ESI                            ; 00502696
    CALL core_charactr.cpp_CCharacter_setLookAtTarget_FUN_00429f60 ; 00502697
        ;   XREF to: 00429f60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setLookAtTarget_FUN_00429f60(CCharacter * this_ptr, CDemonActor * target)
    ADD ESP,0x8                         ; 0050269c
    JMP 0x004ff36b                      ; 0050269f
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV dword ptr [ESP + 0x3ef4],0xffffffff ; 005026a4
        ;   Label: LAB_005026a4
    LEA EAX,[ESP + 0x3ef4]              ; 005026af
    PUSH EAX                            ; 005026b6
    LEA EAX,[ESP + 0xff8]               ; 005026b7
    PUSH EAX                            ; 005026be
    PUSH 0x58efe0                       ; 005026bf | = ", %[^)]%n"
    PUSH EDX                            ; 005026c4
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 005026c5
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x10                        ; 005026ca
    MOV ECX,dword ptr [ESP + 0x3ef4]    ; 005026cd
    CMP ECX,0x3                         ; 005026d4
    JGE 0x005026f0                      ; 005026d7
        ;   XREF to: 005026f0 (CONDITIONAL_JUMP)  ; LAB_005026f0
    PUSH 0x58efea                       ; 005026d9 | = "Error parsing lookAt command parms"
    PUSH 0x1e56420                      ; 005026de | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 005026e3
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 005026e8
    JMP 0x004ff43c                      ; 005026eb
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV EDI,dword ptr [ESP + 0x3e90]    ; 005026f0
        ;   Label: LAB_005026f0
    LEA EAX,[ESP + 0xff4]               ; 005026f7
    ADD EDI,ECX                         ; 005026fe
    PUSH EAX                            ; 00502700
    MOV dword ptr [ESP + 0x3e94],EDI    ; 00502701
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00502708
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 0050270d
    PUSH 0x763e48                       ; 00502710 | g_CDemonActorActorType_00763e48
    MOV EAX,[0x00763e80]                ; 00502715 | g_CDemonActorActorType_00763e48.name_hash
    PUSH EAX                            ; 0050271a
    LEA EAX,[ESP + 0xffc]               ; 0050271b
    PUSH EAX                            ; 00502722
    CALL core_script.cpp_getActor_FUN_004fe180 ; 00502723
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00502728
    TEST EAX,EAX                        ; 0050272b
    JNZ 0x0050266f                      ; 0050272d
        ;   XREF to: 0050266f (CONDITIONAL_JUMP)  ; LAB_0050266f
    CMP dword ptr [0x01e56c2c],0x0      ; 00502733 | DAT_01e56c2c
    JNZ 0x004ff384                      ; 0050273a
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 00502740
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    PUSH 0x58f00d                       ; 00502745 | = "Missing closing ')' in lookAt command"
        ;   Label: LAB_00502745
    PUSH 0x1e56420                      ; 0050274a | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0050274f
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00502754
    JMP 0x004ff43c                      ; 00502757
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    ADD ESI,0xc                         ; 0050275c
        ;   Label: LAB_0050275c
    PUSH ESI                            ; 0050275f
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00502760
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    MOV EDX,0xffffffff                  ; 00502765
    ADD ESP,0x4                         ; 0050276a
    MOV dword ptr [ESP + 0x3ef8],EDX    ; 0050276d
    LEA EDX,[ESP + 0x3ef8]              ; 00502774
    PUSH EDX                            ; 0050277b
    LEA EDX,[ESP + 0x30]                ; 0050277c
    PUSH EDX                            ; 00502780
    LEA EDX,[ESP + 0x40]                ; 00502781
    PUSH EDX                            ; 00502785
    LEA EDX,[ESP + 0x2838]              ; 00502786
    PUSH EDX                            ; 0050278d
    PUSH 0x58f040                       ; 0050278e | = "(%[^,], %f , %f )%n"
    PUSH EAX                            ; 00502793
    MOV dword ptr [ESP + 0x3ea8],EAX    ; 00502794
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0050279b
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x18                        ; 005027a0
    MOV ECX,dword ptr [ESP + 0x3ef8]    ; 005027a3
    CMP ECX,0x5                         ; 005027aa
    JGE 0x005027c6                      ; 005027ad
        ;   XREF to: 005027c6 (CONDITIONAL_JUMP)  ; LAB_005027c6
    PUSH 0x58f054                       ; 005027af | = "Error parsing movePlatform command parms"
    PUSH 0x1e56420                      ; 005027b4 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 005027b9
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 005027be
    JMP 0x004ff43c                      ; 005027c1
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV ESI,dword ptr [ESP + 0x3e90]    ; 005027c6
        ;   Label: LAB_005027c6
    LEA EAX,[ESP + 0x282c]              ; 005027cd
    ADD ESI,ECX                         ; 005027d4
    PUSH EAX                            ; 005027d6
    MOV dword ptr [ESP + 0x3e94],ESI    ; 005027d7
    CALL core_script.cpp_trimString_FUN_004fe000 ; 005027de
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 005027e3
    PUSH 0x1e42894                      ; 005027e6
    MOV EDI,dword ptr [0x01e428cc]      ; 005027eb | g_CPlatformActorType_01e42894.name_hash
    PUSH EDI                            ; 005027f1
    LEA EAX,[ESP + 0x2834]              ; 005027f2
    PUSH EAX                            ; 005027f9
    CALL core_script.cpp_getActor_FUN_004fe180 ; 005027fa
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV EDX,EAX                         ; 005027ff
    ADD ESP,0xc                         ; 00502801
    TEST EAX,EAX                        ; 00502804
    JNZ 0x0050281a                      ; 00502806
        ;   XREF to: 0050281a (CONDITIONAL_JUMP)  ; LAB_0050281a
    CMP dword ptr [0x01e56c2c],0x0      ; 00502808 | DAT_01e56c2c
    JNZ 0x004ff384                      ; 0050280f
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 00502815
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    FLD float ptr [ESP + 0x38]          ; 0050281a
        ;   Label: LAB_0050281a
    FLDZ                                ; 0050281e
    FXCH                                ; 00502820
    FSTP double ptr [ESP]               ; 00502822
    FCOMP double ptr [ESP]              ; 00502825
    FNSTSW AX                           ; 00502828
    SAHF                                ; 0050282a
    JA 0x0050286f                       ; 0050282b
        ;   XREF to: 0050286f (CONDITIONAL_JUMP)  ; LAB_0050286f
    FLD1                                ; 0050282d
    FCOMP double ptr [ESP]              ; 0050282f
    FNSTSW AX                           ; 00502832
    SAHF                                ; 00502834
    JC 0x0050286f                       ; 00502835
        ;   XREF to: 0050286f (CONDITIONAL_JUMP)  ; LAB_0050286f
    FLD float ptr [ESP + 0x2c]          ; 00502837
    FLDZ                                ; 0050283b
    FXCH                                ; 0050283d
    FSTP double ptr [ESP + 0x18]        ; 0050283f
    FCOMP double ptr [ESP + 0x18]       ; 00502843
    FNSTSW AX                           ; 00502847
    SAHF                                ; 00502849
    JNC 0x00502886                      ; 0050284a
        ;   XREF to: 00502886 (CONDITIONAL_JUMP)  ; LAB_00502886
    CMP dword ptr [0x01e56418],0x0      ; 0050284c | DAT_01e56418
    JNZ 0x004ff36b                      ; 00502853
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH dword ptr [ESP + 0x2c]         ; 00502859
    PUSH dword ptr [ESP + 0x3c]         ; 0050285d
    PUSH EDX                            ; 00502861
    CALL core_platfrm.cpp_CPlatform_startMovement_FUN_004f6bd0 ; 00502862
        ;   XREF to: 004f6bd0 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_startMovement_FUN_004f6bd0(CPlatform * this_ptr, float goal_param, float movement_rate)
    ADD ESP,0xc                         ; 00502867
    JMP 0x004ff36b                      ; 0050286a
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH 0x58f07d                       ; 0050286f | = "Paramater must be in range 0.0 .. 1.0"
        ;   Label: LAB_0050286f
    PUSH 0x1e56420                      ; 00502874 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00502879
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 0050287e
    JMP 0x004ff43c                      ; 00502881
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00502886
        ;   Label: LAB_00502886
    PUSH EDX                            ; 0050288a
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0050288b
    PUSH ECX                            ; 0050288f
    PUSH 0x58f0a3                       ; 00502890 | = "Invalid movement rate %f"
    JMP 0x004ff42f                      ; 00502895
        ;   XREF to: 004ff42f (UNCONDITIONAL_JUMP)  ; LAB_004ff42f
    ADD ESI,0x8                         ; 0050289a
        ;   Label: LAB_0050289a
    PUSH ESI                            ; 0050289d
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 0050289e
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 005028a3
    LEA EDX,[ESP + 0x3efc]              ; 005028a6
    PUSH EDX                            ; 005028ad
    LEA EDX,[ESP + 0xe68]               ; 005028ae
    PUSH EDX                            ; 005028b5
    LEA EDX,[ESP + 0x1704]              ; 005028b6
    PUSH EDX                            ; 005028bd
    PUSH 0x58f0c5                       ; 005028be | = "(%[^,], %[^)])%n"
    MOV EDI,0xffffffff                  ; 005028c3
    PUSH EAX                            ; 005028c8
    MOV dword ptr [ESP + 0x3ea4],EAX    ; 005028c9
    MOV dword ptr [ESP + 0x3f10],EDI    ; 005028d0
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 005028d7
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x14                        ; 005028dc
    MOV EAX,dword ptr [ESP + 0x3efc]    ; 005028df
    CMP EAX,0x5                         ; 005028e6
    JGE 0x00502902                      ; 005028e9
        ;   XREF to: 00502902 (CONDITIONAL_JUMP)  ; LAB_00502902
    PUSH 0x58f0d6                       ; 005028eb | = "Error parsing openDoor command parms"
    PUSH 0x1e56420                      ; 005028f0 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 005028f5
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 005028fa
    JMP 0x004ff43c                      ; 005028fd
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 00502902
        ;   Label: LAB_00502902
    ADD EDX,EAX                         ; 00502909
    LEA EAX,[ESP + 0xe64]               ; 0050290b
    PUSH EAX                            ; 00502912
    MOV dword ptr [ESP + 0x3e94],EDX    ; 00502913
    CALL core_script.cpp_trimString_FUN_004fe000 ; 0050291a
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 0050291f
    LEA EAX,[ESP + 0x16fc]              ; 00502922
    PUSH EAX                            ; 00502929
    CALL core_script.cpp_trimString_FUN_004fe000 ; 0050292a
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 0050292f
    PUSH 0x1af4e9c                      ; 00502932
    MOV ECX,dword ptr [0x01af4ed4]      ; 00502937 | g_CDoorActorType_01af4e9c.name_hash
    PUSH ECX                            ; 0050293d
    LEA EAX,[ESP + 0xe6c]               ; 0050293e
    PUSH EAX                            ; 00502945
    CALL core_script.cpp_getActor_FUN_004fe180 ; 00502946
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV ESI,EAX                         ; 0050294b
    ADD ESP,0xc                         ; 0050294d
    TEST EAX,EAX                        ; 00502950
    JNZ 0x00502966                      ; 00502952
        ;   XREF to: 00502966 (CONDITIONAL_JUMP)  ; LAB_00502966
    CMP dword ptr [0x01e56c2c],0x0      ; 00502954 | DAT_01e56c2c
    JNZ 0x004ff384                      ; 0050295b
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 00502961
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    PUSH 0x765a60                       ; 00502966 | g_CCharacterActorType_00765a60
        ;   Label: LAB_00502966
    MOV EDI,dword ptr [0x00765a98]      ; 0050296b | g_CCharacterActorType_00765a60.name_hash
    PUSH EDI                            ; 00502971
    LEA EAX,[ESP + 0x1704]              ; 00502972
    PUSH EAX                            ; 00502979
    CALL core_script.cpp_getActor_FUN_004fe180 ; 0050297a
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV EDX,EAX                         ; 0050297f
    ADD ESP,0xc                         ; 00502981
    TEST EAX,EAX                        ; 00502984
    JNZ 0x0050299a                      ; 00502986
        ;   XREF to: 0050299a (CONDITIONAL_JUMP)  ; LAB_0050299a
    CMP dword ptr [0x01e56c2c],0x0      ; 00502988 | DAT_01e56c2c
    JNZ 0x004ff384                      ; 0050298f
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 00502995
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV EAX,[0x01e56418]                ; 0050299a | DAT_01e56418
        ;   Label: LAB_0050299a
    TEST EAX,EAX                        ; 0050299f
    JNZ 0x004ff36b                      ; 005029a1
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    FLD float ptr [EBX + 0x44]          ; 005029a7
    FLDZ                                ; 005029aa
    MOV dword ptr [ESP + 0x3e84],EAX    ; 005029ac
    FCOMPP                              ; 005029b3
    FNSTSW AX                           ; 005029b5
    SAHF                                ; 005029b7
    JBE 0x005029d7                      ; 005029b8
        ;   XREF to: 005029d7 (CONDITIONAL_JUMP)  ; LAB_005029d7
    PUSH ESI                            ; 005029ba
    MOV EAX,dword ptr [EDX + 0x14c]     ; 005029bb
    PUSH EDX                            ; 005029c1
    CALL dword ptr [EAX + 0x114]        ; 005029c2
    ADD ESP,0x8                         ; 005029c8
    MOV dword ptr [EBX + 0x44],0x3f800000 ; 005029cb
    JMP 0x004ff36b                      ; 005029d2
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH EDX                            ; 005029d7
        ;   Label: LAB_005029d7
    MOV EAX,dword ptr [EDX + 0x14c]     ; 005029d8
    CALL dword ptr [EAX + 0x11c]        ; 005029de
    ADD ESP,0x4                         ; 005029e4
    TEST EAX,EAX                        ; 005029e7
    JZ 0x004ff36b                       ; 005029e9
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV dword ptr [ESP + 0x3e84],0x1    ; 005029ef
    JMP 0x004ff36b                      ; 005029fa
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0xb                         ; 005029ff
        ;   Label: LAB_005029ff
    PUSH ESI                            ; 00502a02
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00502a03
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    MOV EDX,0xffffffff                  ; 00502a08
    ADD ESP,0x4                         ; 00502a0d
    MOV dword ptr [ESP + 0x3f04],EDX    ; 00502a10
    LEA EDX,[ESP + 0x3f04]              ; 00502a17
    PUSH EDX                            ; 00502a1e
    LEA EDX,[ESP + 0x3aa0]              ; 00502a1f
    PUSH EDX                            ; 00502a26
    LEA EDX,[ESP + 0x3d60]              ; 00502a27
    PUSH EDX                            ; 00502a2e
    PUSH 0x58f107                       ; 00502a2f | = "( %[^,], %[^)])%n"
    PUSH EAX                            ; 00502a34
    MOV dword ptr [ESP + 0x3ea4],EAX    ; 00502a35
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00502a3c
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x14                        ; 00502a41
    MOV ECX,dword ptr [ESP + 0x3f04]    ; 00502a44
    CMP ECX,0x5                         ; 00502a4b
    JGE 0x00502a67                      ; 00502a4e
        ;   XREF to: 00502a67 (CONDITIONAL_JUMP)  ; LAB_00502a67
    PUSH 0x58f119                       ; 00502a50 | = "Error parsing pressButton() command p..."
    PUSH 0x1e56420                      ; 00502a55 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00502a5a
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00502a5f
    JMP 0x004ff43c                      ; 00502a62
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV ESI,dword ptr [ESP + 0x3e90]    ; 00502a67
        ;   Label: LAB_00502a67
    LEA EAX,[ESP + 0x3d58]              ; 00502a6e
    ADD ESI,ECX                         ; 00502a75
    PUSH EAX                            ; 00502a77
    MOV dword ptr [ESP + 0x3e94],ESI    ; 00502a78
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00502a7f
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00502a84
    LEA EAX,[ESP + 0x3a9c]              ; 00502a87
    PUSH EAX                            ; 00502a8e
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00502a8f
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00502a94
    PUSH 0x1cae0ec                      ; 00502a97
    MOV EDI,dword ptr [0x01cae124]      ; 00502a9c | g_CHeroActorType_01cae0ec.name_hash
    PUSH EDI                            ; 00502aa2
    LEA EAX,[ESP + 0x3d60]              ; 00502aa3
    PUSH EAX                            ; 00502aaa
    CALL core_script.cpp_getActor_FUN_004fe180 ; 00502aab
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00502ab0
    TEST EAX,EAX                        ; 00502ab3
    JNZ 0x00502ac9                      ; 00502ab5
        ;   XREF to: 00502ac9 (CONDITIONAL_JUMP)  ; LAB_00502ac9
    CMP dword ptr [0x01e56c2c],0x0      ; 00502ab7 | DAT_01e56c2c
    JNZ 0x004ff384                      ; 00502abe
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 00502ac4
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    LEA EDX,[ESP + 0x3a9c]              ; 00502ac9
        ;   Label: LAB_00502ac9
    PUSH EDX                            ; 00502ad0
    ADD EAX,0xbc94                      ; 00502ad1
    PUSH EAX                            ; 00502ad6
    CALL core_script.cpp_getActionState_FUN_004fe300 ; 00502ad7
        ;   XREF to: 004fe300 (UNCONDITIONAL_CALL)  ; int * core_script.cpp_getActionState_FUN_004fe300(SPlayerActionState * action_state, char * action_name)
    ADD ESP,0x8                         ; 00502adc
    MOV ESI,EAX                         ; 00502adf
    TEST EAX,EAX                        ; 00502ae1
    JZ 0x00502b1d                       ; 00502ae3
        ;   XREF to: 00502b1d (CONDITIONAL_JUMP)  ; LAB_00502b1d
    CMP dword ptr [0x01e56418],0x0      ; 00502ae5 | DAT_01e56418
    JNZ 0x004ff36b                      ; 00502aec
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    CMP dword ptr [0x01e56c24],0x0      ; 00502af2 | DAT_01e56c24
    JZ 0x00502b12                       ; 00502af9
        ;   XREF to: 00502b12 (CONDITIONAL_JUMP)  ; LAB_00502b12
    MOV ECX,dword ptr [0x005b9354]      ; 00502afb | g_CGame_PTR_005b9354
    PUSH ECX                            ; 00502b01 | g_CGame_01c775ec
    XOR EDI,EDI                         ; 00502b02
    CALL core_game.cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0 ; 00502b04
        ;   XREF to: 0049f8c0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0(CGame * this_ptr)
    ADD ESP,0x4                         ; 00502b09
    MOV dword ptr [0x01e56c24],EDI      ; 00502b0c | DAT_01e56c24
    MOV dword ptr [ESI],0x1             ; 00502b12
        ;   Label: LAB_00502b12
    JMP 0x004ff36b                      ; 00502b18
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    LEA EAX,[ESP + 0x3a9c]              ; 00502b1d
        ;   Label: LAB_00502b1d
    PUSH EAX                            ; 00502b24
    PUSH 0x58f143                       ; 00502b25 | = "Invalid button name: %s"
    PUSH 0x1e56420                      ; 00502b2a | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00502b2f
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 00502b34
    JMP 0x004ff43c                      ; 00502b37
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    ADD ESI,0x5                         ; 00502b3c
        ;   Label: LAB_00502b3c
    PUSH ESI                            ; 00502b3f
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00502b40
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00502b45
    PUSH 0x64                           ; 00502b48
    MOV dword ptr [ESP + 0x3e94],EAX    ; 00502b4a
    LEA EAX,[ESP + 0x3dc0]              ; 00502b51
    PUSH EAX                            ; 00502b58
    LEA EAX,[ESP + 0x3e98]              ; 00502b59
    PUSH EAX                            ; 00502b60
    CALL core_script.cpp_parseArgument_FUN_004fe090 ; 00502b61
        ;   XREF to: 004fe090 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_004fe090(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 00502b66
    TEST EAX,EAX                        ; 00502b69
    JNZ 0x00502bbb                      ; 00502b6b
        ;   XREF to: 00502bbb (CONDITIONAL_JUMP)  ; LAB_00502bbb
    CMP dword ptr [0x01e56418],0x0      ; 00502b6d | DAT_01e56418
    JZ 0x00502bd3                       ; 00502b74
        ;   XREF to: 00502bd3 (CONDITIONAL_JUMP)  ; LAB_00502bd3
    LEA EAX,[ESP + 0x3dbc]              ; 00502b76
    PUSH EAX                            ; 00502b7d
    MOV ESI,dword ptr [0x005b7650]      ; 00502b7e | DAT_005b7650
    PUSH ESI                            ; 00502b84
    CALL core_event.cpp_CEventList_validateCommands_FUN_0047dcd0 ; 00502b85
        ;   XREF to: 0047dcd0 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCommands_FUN_0047dcd0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00502b8a
    TEST EAX,EAX                        ; 00502b8d
    JZ 0x004ff36b                       ; 00502b8f
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV EDI,0x1e56420                   ; 00502b95
    MOV ESI,EAX                         ; 00502b9a
    PUSH EDI                            ; 00502b9c | DAT_01e56420
    MOV AL,byte ptr [ESI]               ; 00502b9d
        ;   Label: LAB_00502b9d
    MOV byte ptr [EDI],AL               ; 00502b9f | DAT_01e56420 | DAT_01e56422
    CMP AL,0x0                          ; 00502ba1
    JZ 0x00502bb5                       ; 00502ba3
        ;   XREF to: 00502bb5 (CONDITIONAL_JUMP)  ; LAB_00502bb5
    MOV AL,byte ptr [ESI + 0x1]         ; 00502ba5
    ADD ESI,0x2                         ; 00502ba8
    MOV byte ptr [EDI + 0x1],AL         ; 00502bab | DAT_01e56421 | DAT_01e56423
    ADD EDI,0x2                         ; 00502bae
    CMP AL,0x0                          ; 00502bb1
    JNZ 0x00502b9d                      ; 00502bb3
        ;   XREF to: 00502b9d (CONDITIONAL_JUMP)  ; LAB_00502b9d
    POP EDI                             ; 00502bb5
        ;   Label: LAB_00502bb5
    JMP 0x004ff43c                      ; 00502bb6
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    PUSH EAX                            ; 00502bbb
        ;   Label: LAB_00502bbb
    PUSH 0x58f161                       ; 00502bbc | = "Error parsing event expression on rai..."
    PUSH 0x1e56420                      ; 00502bc1 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00502bc6
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 00502bcb
    JMP 0x004ff43c                      ; 00502bce
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    LEA EAX,[ESP + 0x3dbc]              ; 00502bd3
        ;   Label: LAB_00502bd3
    PUSH EAX                            ; 00502bda
    MOV ECX,dword ptr [0x005b7650]      ; 00502bdb | DAT_005b7650
    PUSH ECX                            ; 00502be1
    CALL core_event.cpp_CEventList_executeCommands_FUN_0047ab70 ; 00502be2
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0047ab70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00502be7
    JMP 0x004ff36b                      ; 00502bea
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0xd                         ; 00502bef
        ;   Label: LAB_00502bef
    PUSH ESI                            ; 00502bf2
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00502bf3
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00502bf8
    LEA EDX,[ESP + 0x3f0c]              ; 00502bfb
    PUSH EDX                            ; 00502c02
    LEA EDX,[ESP + 0x3398]              ; 00502c03
    PUSH EDX                            ; 00502c0a
    LEA EDX,[ESP + 0x3400]              ; 00502c0b
    PUSH EDX                            ; 00502c12
    PUSH 0x58f1a5                       ; 00502c13 | = "( %[^,], %[^)])%n"
    MOV EDI,0xffffffff                  ; 00502c18
    PUSH EAX                            ; 00502c1d
    MOV dword ptr [ESP + 0x3ea4],EAX    ; 00502c1e
    MOV dword ptr [ESP + 0x3f20],EDI    ; 00502c25
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00502c2c
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x14                        ; 00502c31
    MOV EAX,dword ptr [ESP + 0x3f0c]    ; 00502c34
    CMP EAX,0x5                         ; 00502c3b
    JGE 0x00502c57                      ; 00502c3e
        ;   XREF to: 00502c57 (CONDITIONAL_JUMP)  ; LAB_00502c57
    PUSH 0x58f1b7                       ; 00502c40 | = "Error parsing releaseButton() command..."
    PUSH 0x1e56420                      ; 00502c45 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00502c4a
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00502c4f
    JMP 0x004ff43c                      ; 00502c52
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 00502c57
        ;   Label: LAB_00502c57
    ADD EDX,EAX                         ; 00502c5e
    LEA EAX,[ESP + 0x33f8]              ; 00502c60
    PUSH EAX                            ; 00502c67
    MOV dword ptr [ESP + 0x3e94],EDX    ; 00502c68
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00502c6f
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00502c74
    LEA EAX,[ESP + 0x3394]              ; 00502c77
    PUSH EAX                            ; 00502c7e
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00502c7f
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00502c84
    PUSH 0x1cae0ec                      ; 00502c87
    MOV ECX,dword ptr [0x01cae124]      ; 00502c8c | g_CHeroActorType_01cae0ec.name_hash
    PUSH ECX                            ; 00502c92
    LEA EAX,[ESP + 0x3400]              ; 00502c93
    PUSH EAX                            ; 00502c9a
    CALL core_script.cpp_getActor_FUN_004fe180 ; 00502c9b
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00502ca0
    TEST EAX,EAX                        ; 00502ca3
    JNZ 0x00502cb9                      ; 00502ca5
        ;   XREF to: 00502cb9 (CONDITIONAL_JUMP)  ; LAB_00502cb9
    CMP dword ptr [0x01e56c2c],0x0      ; 00502ca7 | DAT_01e56c2c
    JNZ 0x004ff384                      ; 00502cae
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 00502cb4
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    LEA EDX,[ESP + 0x3394]              ; 00502cb9
        ;   Label: LAB_00502cb9
    PUSH EDX                            ; 00502cc0
    ADD EAX,0xbc94                      ; 00502cc1
    PUSH EAX                            ; 00502cc6
    CALL core_script.cpp_getActionState_FUN_004fe300 ; 00502cc7
        ;   XREF to: 004fe300 (UNCONDITIONAL_CALL)  ; int * core_script.cpp_getActionState_FUN_004fe300(SPlayerActionState * action_state, char * action_name)
    ADD ESP,0x8                         ; 00502ccc
    MOV ESI,EAX                         ; 00502ccf
    TEST EAX,EAX                        ; 00502cd1
    JZ 0x00502d0c                       ; 00502cd3
        ;   XREF to: 00502d0c (CONDITIONAL_JUMP)  ; LAB_00502d0c
    MOV EDI,dword ptr [0x01e56418]      ; 00502cd5 | DAT_01e56418
    TEST EDI,EDI                        ; 00502cdb
    JNZ 0x004ff36b                      ; 00502cdd
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    CMP dword ptr [0x01e56c24],0x0      ; 00502ce3 | DAT_01e56c24
    JZ 0x00502d01                       ; 00502cea
        ;   XREF to: 00502d01 (CONDITIONAL_JUMP)  ; LAB_00502d01
    MOV EDX,dword ptr [0x005b9354]      ; 00502cec | g_CGame_PTR_005b9354
    PUSH EDX                            ; 00502cf2 | g_CGame_01c775ec
    CALL core_game.cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0 ; 00502cf3
        ;   XREF to: 0049f8c0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0(CGame * this_ptr)
    ADD ESP,0x4                         ; 00502cf8
    MOV dword ptr [0x01e56c24],EDI      ; 00502cfb | DAT_01e56c24
    MOV dword ptr [ESI],0x0             ; 00502d01
        ;   Label: LAB_00502d01
    JMP 0x004ff36b                      ; 00502d07
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    LEA EAX,[ESP + 0x3394]              ; 00502d0c
        ;   Label: LAB_00502d0c
    PUSH EAX                            ; 00502d13
    PUSH 0x58f1e3                       ; 00502d14 | = "Invalid button name: %s"
    PUSH 0x1e56420                      ; 00502d19 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00502d1e
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 00502d23
    JMP 0x004ff43c                      ; 00502d26
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    ADD ESI,0x1b                        ; 00502d2b
        ;   Label: LAB_00502d2b
    PUSH ESI                            ; 00502d2e
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00502d2f
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00502d34
    LEA EDX,[ESP + 0x3f10]              ; 00502d37
    PUSH EDX                            ; 00502d3e
    LEA EDX,[ESP + 0x1890]              ; 00502d3f
    PUSH EDX                            ; 00502d46
    PUSH 0x58f217                       ; 00502d47 | = " ( %[^)])%n"
    MOV EDI,0xffffffff                  ; 00502d4c
    PUSH EAX                            ; 00502d51
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 00502d52
    MOV dword ptr [ESP + 0x3f20],EDI    ; 00502d59
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00502d60
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x10                        ; 00502d65
    MOV EAX,dword ptr [ESP + 0x3f10]    ; 00502d68
    CMP EAX,0x3                         ; 00502d6f
    JGE 0x00502d8b                      ; 00502d72
        ;   XREF to: 00502d8b (CONDITIONAL_JUMP)  ; LAB_00502d8b
    PUSH 0x58f223                       ; 00502d74 | = "Error parsing removeAllItemsFromInven..."
    PUSH 0x1e56420                      ; 00502d79 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00502d7e
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00502d83
    JMP 0x004ff43c                      ; 00502d86
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 00502d8b
        ;   Label: LAB_00502d8b
    ADD EDX,EAX                         ; 00502d92
    LEA EAX,[ESP + 0x188c]              ; 00502d94
    PUSH EAX                            ; 00502d9b
    MOV dword ptr [ESP + 0x3e94],EDX    ; 00502d9c
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00502da3
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00502da8
    PUSH 0x1cae0ec                      ; 00502dab
    MOV ECX,dword ptr [0x01cae124]      ; 00502db0 | g_CHeroActorType_01cae0ec.name_hash
    PUSH ECX                            ; 00502db6
    LEA EAX,[ESP + 0x1894]              ; 00502db7
    PUSH EAX                            ; 00502dbe
    CALL core_script.cpp_getActor_FUN_004fe180 ; 00502dbf
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00502dc4
    TEST EAX,EAX                        ; 00502dc7
    JNZ 0x00502ddd                      ; 00502dc9
        ;   XREF to: 00502ddd (CONDITIONAL_JUMP)  ; LAB_00502ddd
    CMP dword ptr [0x01e56c2c],0x0      ; 00502dcb | DAT_01e56c2c
    JNZ 0x004ff384                      ; 00502dd2
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 00502dd8
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    CMP dword ptr [0x01e56418],0x0      ; 00502ddd | DAT_01e56418
        ;   Label: LAB_00502ddd
    JNZ 0x004ff36b                      ; 00502de4
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD EAX,0x1f5a0                     ; 00502dea
    PUSH EAX                            ; 00502def
    CALL core_inv.cpp_CInventory_initialize_FUN_004bef10 ; 00502df0
        ;   XREF to: 004bef10 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_initialize_FUN_004bef10(CInventory * this_ptr)
    ADD ESP,0x4                         ; 00502df5
    JMP 0x004ff36b                      ; 00502df8
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0x17                        ; 00502dfd
        ;   Label: LAB_00502dfd
    PUSH ESI                            ; 00502e00
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00502e01
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    MOV EDX,0xffffffff                  ; 00502e06
    ADD ESP,0x4                         ; 00502e0b
    MOV dword ptr [ESP + 0x3f14],EDX    ; 00502e0e
    LEA EDX,[ESP + 0x3f14]              ; 00502e15
    PUSH EDX                            ; 00502e1c
    LEA EDX,[ESP + 0x1f98]              ; 00502e1d
    PUSH EDX                            ; 00502e24
    LEA EDX,[ESP + 0x1ed4]              ; 00502e25
    PUSH EDX                            ; 00502e2c
    PUSH 0x58f273                       ; 00502e2d | = " ( %[^,], %[^)])%n"
    PUSH EAX                            ; 00502e32
    MOV dword ptr [ESP + 0x3ea4],EAX    ; 00502e33
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00502e3a
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x14                        ; 00502e3f
    MOV ECX,dword ptr [ESP + 0x3f14]    ; 00502e42
    CMP ECX,0x3                         ; 00502e49
    JGE 0x00502e65                      ; 00502e4c
        ;   XREF to: 00502e65 (CONDITIONAL_JUMP)  ; LAB_00502e65
    PUSH 0x58f286                       ; 00502e4e | = "Error parsing removeItemFromInventory..."
    PUSH 0x1e56420                      ; 00502e53 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00502e58
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00502e5d
    JMP 0x004ff43c                      ; 00502e60
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV ESI,dword ptr [ESP + 0x3e90]    ; 00502e65
        ;   Label: LAB_00502e65
    LEA EAX,[ESP + 0x1ecc]              ; 00502e6c
    ADD ESI,ECX                         ; 00502e73
    PUSH EAX                            ; 00502e75
    MOV dword ptr [ESP + 0x3e94],ESI    ; 00502e76
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00502e7d
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00502e82
    LEA EAX,[ESP + 0x1f94]              ; 00502e85
    PUSH EAX                            ; 00502e8c
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00502e8d
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00502e92
    PUSH 0x1cae0ec                      ; 00502e95
    MOV EDI,dword ptr [0x01cae124]      ; 00502e9a | g_CHeroActorType_01cae0ec.name_hash
    PUSH EDI                            ; 00502ea0
    LEA EAX,[ESP + 0x1ed4]              ; 00502ea1
    PUSH EAX                            ; 00502ea8
    CALL core_script.cpp_getActor_FUN_004fe180 ; 00502ea9
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV ESI,EAX                         ; 00502eae
    ADD ESP,0xc                         ; 00502eb0
    TEST EAX,EAX                        ; 00502eb3
    JNZ 0x00502ec9                      ; 00502eb5
        ;   XREF to: 00502ec9 (CONDITIONAL_JUMP)  ; LAB_00502ec9
    CMP dword ptr [0x01e56c2c],0x0      ; 00502eb7 | DAT_01e56c2c
    JNZ 0x004ff384                      ; 00502ebe
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 00502ec4
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    CMP dword ptr [0x01e56418],0x0      ; 00502ec9 | DAT_01e56418
        ;   Label: LAB_00502ec9
    JNZ 0x004ff36b                      ; 00502ed0
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    LEA EAX,[ESP + 0x1f94]              ; 00502ed6
    PUSH EAX                            ; 00502edd
    MOV EAX,[0x01cae0e8]                ; 00502ede | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 00502ee3
    ADD EAX,0x1f5a0                     ; 00502eea
    PUSH EAX                            ; 00502eef
    CALL core_inv.cpp_CInventory_findItemByName_FUN_004c0710 ; 00502ef0
        ;   XREF to: 004c0710 (UNCONDITIONAL_CALL)  ; CDemonActor * core_inv.cpp_CInventory_findItemByName_FUN_004c0710(CInventory * this_ptr, char * item_name)
    ADD ESP,0x8                         ; 00502ef5
    TEST EAX,EAX                        ; 00502ef8
    JZ 0x004ff36b                       ; 00502efa
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH 0x1                            ; 00502f00
    PUSH EAX                            ; 00502f02
    ADD ESI,0x1f5a0                     ; 00502f03
    PUSH ESI                            ; 00502f09
    CALL core_inv.cpp_CInventory_removeItem_FUN_004c07b0 ; 00502f0a
        ;   XREF to: 004c07b0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_removeItem_FUN_004c07b0(CInventory * this_ptr, CDemonActor * item_to_remove, int should_delete_actor)
    ADD ESP,0xc                         ; 00502f0f
    JMP 0x004ff36b                      ; 00502f12
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0xa                         ; 00502f17
        ;   Label: LAB_00502f17
    PUSH ESI                            ; 00502f1a
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00502f1b
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00502f20
    LEA EDX,[ESP + 0x3f1c]              ; 00502f23
    PUSH EDX                            ; 00502f2a
    LEA EDX,[ESP + 0x3f1c]              ; 00502f2b
    PUSH EDX                            ; 00502f32
    PUSH 0x58f2c5                       ; 00502f33 | = " (%d )%n"
    MOV ECX,0xffffffff                  ; 00502f38
    PUSH EAX                            ; 00502f3d
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 00502f3e
    MOV dword ptr [ESP + 0x3f2c],ECX    ; 00502f45
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00502f4c
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x10                        ; 00502f51
    MOV ESI,dword ptr [ESP + 0x3f1c]    ; 00502f54
    CMP ESI,0x3                         ; 00502f5b
    JL 0x00502fa9                       ; 00502f5e
        ;   XREF to: 00502fa9 (CONDITIONAL_JUMP)  ; LAB_00502fa9
    MOV EDI,dword ptr [ESP + 0x3e90]    ; 00502f60
    ADD EDI,ESI                         ; 00502f67
    MOV EAX,[0x005bdee0]                ; 00502f69 | g_CNetGame_PTR_005bdee0
    MOV dword ptr [ESP + 0x3e90],EDI    ; 00502f6e
    CMP dword ptr [EAX],0x0             ; 00502f75 | g_CNetGame_01cea280
    JNZ 0x00502fc0                      ; 00502f78
        ;   XREF to: 00502fc0 (CONDITIONAL_JUMP)  ; LAB_00502fc0
    CMP dword ptr [0x01e56418],0x0      ; 00502f7a | DAT_01e56418
    JNZ 0x004ff36b                      ; 00502f81
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV ESI,dword ptr [ESP + 0x3f18]    ; 00502f87
    MOV EAX,[0x01cae0e8]                ; 00502f8e | DAT_01cae0e8
    PUSH ESI                            ; 00502f93
    MOV EDI,dword ptr [EAX*0x4 + 0x1cae0d8] ; 00502f94
    PUSH EDI                            ; 00502f9b
    CALL core_hero.cpp_CHero_removeMatchingKeys_FUN_004b5cb0 ; 00502f9c
        ;   XREF to: 004b5cb0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_removeMatchingKeys_FUN_004b5cb0(CHero * this_ptr, uint key_mask)
    ADD ESP,0x8                         ; 00502fa1
    JMP 0x004ff36b                      ; 00502fa4
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH 0x58f2ce                       ; 00502fa9 | = "Error parsing removeKeys() command parms"
        ;   Label: LAB_00502fa9
    PUSH 0x1e56420                      ; 00502fae | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00502fb3
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00502fb8
    JMP 0x004ff43c                      ; 00502fbb
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    PUSH 0x58f2f7                       ; 00502fc0 | = "Can't use removeKeys command in multi..."
        ;   Label: LAB_00502fc0
    PUSH 0x1e56420                      ; 00502fc5 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00502fca
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00502fcf
    JMP 0x004ff43c                      ; 00502fd2
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    ADD ESI,0x6                         ; 00502fd7
        ;   Label: LAB_00502fd7
    PUSH ESI                            ; 00502fda
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00502fdb
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00502fe0
    MOV dword ptr [ESP + 0x3e90],EAX    ; 00502fe3
    CMP dword ptr [0x01e56418],0x0      ; 00502fea | DAT_01e56418
    JNZ 0x004ff36b                      ; 00502ff1
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV EDX,dword ptr [EBX + 0x454]     ; 00502ff7
    CMP EDX,0x1                         ; 00502ffd
    JL 0x0050301c                       ; 00503000
        ;   XREF to: 0050301c (CONDITIONAL_JUMP)  ; LAB_0050301c
    LEA ECX,[EDX + -0x1]                ; 00503002
    MOV EAX,ECX                         ; 00503005
    MOV dword ptr [EBX + 0x454],ECX     ; 00503007
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x458] ; 0050300d
    MOV dword ptr [EBX + 0x40],EAX      ; 00503014
    JMP 0x004ff36b                      ; 00503017
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV EBX,dword ptr [ESP + 0x3e8c]    ; 0050301c
        ;   Label: LAB_0050301c
    PUSH EBX                            ; 00503023
    PUSH 0x58f32b                       ; 00503024 | = "Return without gosub detected on scri..."
    PUSH 0x1e56420                      ; 00503029 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0050302e
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 00503033
    JMP 0x004ff43c                      ; 00503036
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    ADD ESI,0xb                         ; 0050303b
        ;   Label: LAB_0050303b
    PUSH ESI                            ; 0050303e
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 0050303f
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00503044
    LEA EDX,[ESP + 0x3f20]              ; 00503047
    PUSH EDX                            ; 0050304e
    PUSH 0x58f368                       ; 0050304f | = " ( )%n"
    MOV ESI,0xffffffff                  ; 00503054
    PUSH EAX                            ; 00503059
    MOV dword ptr [ESP + 0x3e9c],EAX    ; 0050305a
    MOV dword ptr [ESP + 0x3f2c],ESI    ; 00503061
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00503068
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0xc                         ; 0050306d
    MOV EDI,dword ptr [ESP + 0x3f20]    ; 00503070
    CMP EDI,0x2                         ; 00503077
    JL 0x005030bb                       ; 0050307a
        ;   XREF to: 005030bb (CONDITIONAL_JUMP)  ; LAB_005030bb
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 0050307c
    ADD EDX,EDI                         ; 00503083
    MOV ECX,dword ptr [0x01e56418]      ; 00503085 | DAT_01e56418
    MOV dword ptr [ESP + 0x3e90],EDX    ; 0050308b
    TEST ECX,ECX                        ; 00503092
    JNZ 0x004ff36b                      ; 00503094
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV EAX,[0x005b9354]                ; 0050309a | g_CGame_PTR_005b9354
    MOV dword ptr [EBX],0x1             ; 0050309f
    MOV dword ptr [ESP + 0x3e84],ECX    ; 005030a5
    MOV dword ptr [EAX + 0x258],0x2     ; 005030ac | g_CGame_01c775ec.act_completion_state
    JMP 0x004ff36b                      ; 005030b6
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH 0x58f36f                       ; 005030bb | = "Error parsing rollCredits command"
        ;   Label: LAB_005030bb
    PUSH 0x1e56420                      ; 005030c0 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 005030c5
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 005030ca
    JMP 0x004ff43c                      ; 005030cd
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    ADD ESI,0x3                         ; 005030d2
        ;   Label: LAB_005030d2
    PUSH ESI                            ; 005030d5
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 005030d6
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 005030db
    PUSH 0x1f4                          ; 005030de
    MOV dword ptr [ESP + 0x3e94],EAX    ; 005030e3
    LEA EAX,[ESP + 0x634]               ; 005030ea
    PUSH EAX                            ; 005030f1
    LEA EAX,[ESP + 0x3e98]              ; 005030f2
    PUSH EAX                            ; 005030f9
    CALL core_script.cpp_parseArgument_FUN_004fe090 ; 005030fa
        ;   XREF to: 004fe090 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_004fe090(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 005030ff
    TEST EAX,EAX                        ; 00503102
    JZ 0x0050312c                       ; 00503104
        ;   XREF to: 0050312c (CONDITIONAL_JUMP)  ; LAB_0050312c
    MOV EDI,0x1e56420                   ; 00503106
        ;   Label: LAB_00503106
    MOV ESI,EAX                         ; 0050310b
    PUSH EDI                            ; 0050310d | DAT_01e56420
    MOV AL,byte ptr [ESI]               ; 0050310e
        ;   Label: LAB_0050310e
    MOV byte ptr [EDI],AL               ; 00503110 | DAT_01e56420 | DAT_01e56422
    CMP AL,0x0                          ; 00503112
    JZ 0x00503126                       ; 00503114
        ;   XREF to: 00503126 (CONDITIONAL_JUMP)  ; LAB_00503126
    MOV AL,byte ptr [ESI + 0x1]         ; 00503116
    ADD ESI,0x2                         ; 00503119
    MOV byte ptr [EDI + 0x1],AL         ; 0050311c | DAT_01e56421 | DAT_01e56423
    ADD EDI,0x2                         ; 0050311f
    CMP AL,0x0                          ; 00503122
    JNZ 0x0050310e                      ; 00503124
        ;   XREF to: 0050310e (CONDITIONAL_JUMP)  ; LAB_0050310e
    POP EDI                             ; 00503126
        ;   Label: LAB_00503126
    JMP 0x004ff43c                      ; 00503127
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    LEA EAX,[ESP + 0x3f24]              ; 0050312c
        ;   Label: LAB_0050312c
    PUSH EAX                            ; 00503133
    LEA EAX,[ESP + 0x2ce0]              ; 00503134
    PUSH EAX                            ; 0050313b
    LEA EAX,[ESP + 0x10c4]              ; 0050313c
    PUSH EAX                            ; 00503143
    PUSH 0x58f395                       ; 00503144 | = "%[^,], %[^,], %n"
    LEA EAX,[ESP + 0x640]               ; 00503149
    MOV EDI,0xffffffff                  ; 00503150
    PUSH EAX                            ; 00503155
    MOV dword ptr [ESP + 0x3f38],EDI    ; 00503156
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0050315d
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x14                        ; 00503162
    CMP dword ptr [ESP + 0x3f24],0x5    ; 00503165
    JGE 0x00503186                      ; 0050316d
        ;   XREF to: 00503186 (CONDITIONAL_JUMP)  ; LAB_00503186
    PUSH 0x58f3a6                       ; 0050316f | = "Error parsing speaker and wav arguments"
    PUSH 0x1e56420                      ; 00503174 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00503179
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 0050317e
    JMP 0x004ff43c                      ; 00503181
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    LEA EAX,[ESP + 0x10bc]              ; 00503186
        ;   Label: LAB_00503186
    PUSH EAX                            ; 0050318d
    CALL core_script.cpp_trimString_FUN_004fe000 ; 0050318e
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00503193
    LEA EAX,[ESP + 0x2cdc]              ; 00503196
    PUSH EAX                            ; 0050319d
    CALL core_script.cpp_trimString_FUN_004fe000 ; 0050319e
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    FLD float ptr [EBX + 0x48]          ; 005031a3
    FLDZ                                ; 005031a6
    ADD ESP,0x4                         ; 005031a8
    FCOMPP                              ; 005031ab
    FNSTSW AX                           ; 005031ad
    SAHF                                ; 005031af
    JA 0x005031f0                       ; 005031b0
        ;   XREF to: 005031f0 (CONDITIONAL_JUMP)  ; LAB_005031f0
    CMP dword ptr [0x01e56418],0x0      ; 005031b2 | DAT_01e56418
        ;   Label: LAB_005031b2
    JNZ 0x004ff36b                      ; 005031b9
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV ESI,dword ptr [EBP + 0x18]      ; 005031bf
    PUSH ESI                            ; 005031c2
    PUSH dword ptr [EBX + 0x48]         ; 005031c3
    PUSH EBX                            ; 005031c6
    CALL core_script.cpp_CScript_processTimer_FUN_00504b70 ; 005031c7
        ;   XREF to: 00504b70 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_processTimer_FUN_00504b70(CScript * this_ptr, float delta_time, float * timer_value)
    ADD ESP,0xc                         ; 005031cc
    MOV dword ptr [ESP + 0x3e84],EAX    ; 005031cf
    TEST EAX,EAX                        ; 005031d6
    JLE 0x004ff36b                      ; 005031d8
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV EDI,dword ptr [EBX + 0x4]       ; 005031de
    PUSH EDI                            ; 005031e1
    PUSH EBX                            ; 005031e2
    CALL core_script.cpp_CScript_setSpeaker_FUN_00504bf0 ; 005031e3
        ;   XREF to: 00504bf0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_setSpeaker_FUN_00504bf0(CScript * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005031e8
    JMP 0x004ff36b                      ; 005031eb
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    LEA EAX,[ESP + 0x630]               ; 005031f0
        ;   Label: LAB_005031f0
    ADD EAX,dword ptr [ESP + 0x3f24]    ; 005031f7
    PUSH EAX                            ; 005031fe
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 005031ff
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00503204
    PUSH EAX                            ; 00503207
    LEA EAX,[ESP + 0x2ce0]              ; 00503208
    PUSH EAX                            ; 0050320f
    LEA EAX,[ESP + 0x10c4]              ; 00503210
    PUSH EAX                            ; 00503217
    PUSH EBX                            ; 00503218
    CALL core_script.cpp_CScript_getDialogDuration_FUN_005049b0 ; 00503219
        ;   XREF to: 005049b0 (UNCONDITIONAL_CALL)  ; float core_script.cpp_CScript_getDialogDuration_FUN_005049b0(CScript * this_ptr, char * actor_specifier, char * sound_name, char * dialog_text)
    MOV dword ptr [ESP + 0x3fa4],EAX    ; 0050321e
    FLDZ                                ; 00503225
    MOV EAX,dword ptr [ESP + 0x3fa4]    ; 00503227
    MOV dword ptr [EBX + 0x48],EAX      ; 0050322e
    ADD ESP,0x10                        ; 00503231
    FCOMP float ptr [EBX + 0x48]        ; 00503234
    FNSTSW AX                           ; 00503237
    SAHF                                ; 00503239
    JA 0x004ff43c                       ; 0050323a
        ;   XREF to: 004ff43c (CONDITIONAL_JUMP)  ; LAB_004ff43c
    JMP 0x005031b2                      ; 00503240
        ;   XREF to: 005031b2 (UNCONDITIONAL_JUMP)  ; LAB_005031b2
    ADD ESI,0xc                         ; 00503245
        ;   Label: LAB_00503245
    PUSH ESI                            ; 00503248
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00503249
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    MOV EDX,0xffffffff                  ; 0050324e
    ADD ESP,0x4                         ; 00503253
    MOV dword ptr [ESP + 0x3f28],EDX    ; 00503256
    LEA EDX,[ESP + 0x3f28]              ; 0050325d
    PUSH EDX                            ; 00503264
    LEA EDX,[ESP + 0x3910]              ; 00503265
    PUSH EDX                            ; 0050326c
    LEA EDX,[ESP + 0x38b0]              ; 0050326d
    PUSH EDX                            ; 00503274
    PUSH 0x58f3db                       ; 00503275 | = " (%[^,], %[^)])%n"
    PUSH EAX                            ; 0050327a
    MOV dword ptr [ESP + 0x3ea4],EAX    ; 0050327b
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00503282
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x14                        ; 00503287
    CMP dword ptr [ESP + 0x3f28],0x5    ; 0050328a
    JGE 0x005032ab                      ; 00503292
        ;   XREF to: 005032ab (CONDITIONAL_JUMP)  ; LAB_005032ab
    PUSH 0x58f3ed                       ; 00503294 | = "Error parsing selectWeapon parameters."
    PUSH 0x1e56420                      ; 00503299 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0050329e
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 005032a3
    JMP 0x004ff43c                      ; 005032a6
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    LEA EAX,[ESP + 0x38a8]              ; 005032ab
        ;   Label: LAB_005032ab
    PUSH EAX                            ; 005032b2
    CALL core_script.cpp_trimString_FUN_004fe000 ; 005032b3
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 005032b8
    LEA EAX,[ESP + 0x390c]              ; 005032bb
    PUSH EAX                            ; 005032c2
    CALL core_script.cpp_trimString_FUN_004fe000 ; 005032c3
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 005032c8
    MOV EDI,dword ptr [0x01cae124]      ; 005032cb | g_CHeroActorType_01cae0ec.name_hash
    PUSH 0x1cae0ec                      ; 005032d1
    MOV EAX,dword ptr [ESP + 0x3f2c]    ; 005032d6
    MOV ESI,dword ptr [ESP + 0x3e94]    ; 005032dd
    PUSH EDI                            ; 005032e4
    ADD ESI,EAX                         ; 005032e5
    LEA EAX,[ESP + 0x38b0]              ; 005032e7
    PUSH EAX                            ; 005032ee
    MOV dword ptr [ESP + 0x3e9c],ESI    ; 005032ef
    CALL core_script.cpp_getActor_FUN_004fe180 ; 005032f6
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 005032fb
    TEST EAX,EAX                        ; 005032fe
    JNZ 0x00503314                      ; 00503300
        ;   XREF to: 00503314 (CONDITIONAL_JUMP)  ; LAB_00503314
    CMP dword ptr [0x01e56c2c],0x0      ; 00503302 | DAT_01e56c2c
    JNZ 0x004ff384                      ; 00503309
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 0050330f
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV EDX,dword ptr [0x01e56418]      ; 00503314 | DAT_01e56418
        ;   Label: LAB_00503314
    TEST EDX,EDX                        ; 0050331a
    JNZ 0x004ff36b                      ; 0050331c
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    LEA EDI,[EAX + 0x1f5a0]             ; 00503322
    PUSH EDI                            ; 00503328
    MOV dword ptr [ESP + 0x3f30],EDX    ; 00503329
    CALL core_gabriela.cpp_getSelectedWeapon_FUN_0049a160 ; 00503330
        ;   XREF to: 0049a160 (UNCONDITIONAL_CALL)  ; CWeapon * core_gabriela.cpp_getSelectedWeapon_FUN_0049a160(CInventory * inventory_ptr)
    ADD ESP,0x4                         ; 00503335
    MOV dword ptr [ESP + 0x3f30],EAX    ; 00503338
    TEST EAX,EAX                        ; 0050333f
    JZ 0x005033a8                       ; 00503341
        ;   XREF to: 005033a8 (CONDITIONAL_JUMP)  ; LAB_005033a8
    MOV ESI,EAX                         ; 00503343
    TEST ESI,ESI                        ; 00503345
        ;   Label: LAB_00503345
    JNZ 0x0050336b                      ; 00503347
        ;   XREF to: 0050336b (CONDITIONAL_JUMP)  ; LAB_0050336b
    MOV EAX,0x58f414                    ; 00503349 | = "..\\core\\script.cpp"
    MOV EDX,0xad9                       ; 0050334e
    PUSH 0x58f427                       ; 00503353 | = "script selectWeapon() command - hell ..."
    MOV [0x01cc4800],EAX                ; 00503358 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 0050335d | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00503363
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00503368
    LEA EAX,[ESP + 0x390c]              ; 0050336b
        ;   Label: LAB_0050336b
    PUSH EAX                            ; 00503372
    PUSH ESI                            ; 00503373
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 00503374
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00503379
    TEST EAX,EAX                        ; 0050337c
    JNZ 0x004ff36b                      ; 0050337e
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH 0x1                            ; 00503384
    PUSH 0x5                            ; 00503386
    PUSH EAX                            ; 00503388
    PUSH EDI                            ; 00503389
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004c0850 ; 0050338a
        ;   XREF to: 004c0850 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004c0850(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 0050338f
    PUSH EDI                            ; 00503392
    CALL core_gabriela.cpp_getSelectedWeapon_FUN_0049a160 ; 00503393
        ;   XREF to: 0049a160 (UNCONDITIONAL_CALL)  ; CWeapon * core_gabriela.cpp_getSelectedWeapon_FUN_0049a160(CInventory * inventory_ptr)
    ADD ESP,0x4                         ; 00503398
    MOV ECX,dword ptr [ESP + 0x3f30]    ; 0050339b
    MOV ESI,EAX                         ; 005033a2
    CMP EAX,ECX                         ; 005033a4
    JNZ 0x00503345                      ; 005033a6
        ;   XREF to: 00503345 (CONDITIONAL_JUMP)  ; LAB_00503345
    CMP dword ptr [ESP + 0x3f2c],0x0    ; 005033a8
        ;   Label: LAB_005033a8
    JNZ 0x004ff36b                      ; 005033b0
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    LEA EAX,[ESP + 0x390c]              ; 005033b6
    PUSH EAX                            ; 005033bd
    LEA EAX,[ESP + 0x38ac]              ; 005033be
    PUSH EAX                            ; 005033c5
    PUSH 0x58f453                       ; 005033c6 | = "%s can't selectWeapon(%s)\n"
    MOV EDI,dword ptr [0x005ad350]      ; 005033cb | g_CConsole_PTR_005ad350
    PUSH EDI                            ; 005033d1 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 005033d2
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 005033d7
    JMP 0x004ff36b                      ; 005033da
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0x10                        ; 005033df
        ;   Label: LAB_005033df
    PUSH ESI                            ; 005033e2
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 005033e3
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 005033e8
    LEA EDX,[ESP + 0x3f34]              ; 005033eb
    PUSH EDX                            ; 005033f2
    LEA EDX,[ESP + 0x1ae8]              ; 005033f3
    PUSH EDX                            ; 005033fa
    LEA EDX,[ESP + 0x1a24]              ; 005033fb
    PUSH EDX                            ; 00503402
    PUSH 0x58f47f                       ; 00503403 | = "(%[^,], %[^)])%n"
    MOV EDI,0xffffffff                  ; 00503408
    PUSH EAX                            ; 0050340d
    MOV dword ptr [ESP + 0x3ea4],EAX    ; 0050340e
    MOV dword ptr [ESP + 0x3f48],EDI    ; 00503415
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0050341c
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x14                        ; 00503421
    MOV EAX,dword ptr [ESP + 0x3f34]    ; 00503424
    CMP EAX,0x5                         ; 0050342b
    JGE 0x00503447                      ; 0050342e
        ;   XREF to: 00503447 (CONDITIONAL_JUMP)  ; LAB_00503447
    PUSH 0x58f490                       ; 00503430 | = "Error parsing setActorVariable comman..."
    PUSH 0x1e56420                      ; 00503435 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0050343a
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 0050343f
    JMP 0x004ff43c                      ; 00503442
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 00503447
        ;   Label: LAB_00503447
    ADD EDX,EAX                         ; 0050344e
    LEA EAX,[ESP + 0x1a1c]              ; 00503450
    PUSH EAX                            ; 00503457
    MOV dword ptr [ESP + 0x3e94],EDX    ; 00503458
    CALL core_script.cpp_trimString_FUN_004fe000 ; 0050345f
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00503464
    LEA EAX,[ESP + 0x1ae4]              ; 00503467
    PUSH EAX                            ; 0050346e
    CALL core_script.cpp_trimString_FUN_004fe000 ; 0050346f
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00503474
    LEA EAX,[ESP + 0x1a1c]              ; 00503477
    PUSH EAX                            ; 0050347e
    CALL core_script.cpp_validateActorVariableName_FUN_004fdec0 ; 0050347f
        ;   XREF to: 004fdec0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_validateActorVariableName_FUN_004fdec0(char * variable_name)
    ADD ESP,0x4                         ; 00503484
    TEST EAX,EAX                        ; 00503487
    JZ 0x004ff43c                       ; 00503489
        ;   XREF to: 004ff43c (CONDITIONAL_JUMP)  ; LAB_004ff43c
    PUSH 0x763e48                       ; 0050348f | g_CDemonActorActorType_00763e48
    MOV ECX,dword ptr [0x00763e80]      ; 00503494 | g_CDemonActorActorType_00763e48.name_hash
    PUSH ECX                            ; 0050349a
    LEA EAX,[ESP + 0x1aec]              ; 0050349b
    PUSH EAX                            ; 005034a2
    CALL core_script.cpp_getActor_FUN_004fe180 ; 005034a3
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV ESI,dword ptr [0x01e56418]      ; 005034a8 | DAT_01e56418
    ADD ESP,0xc                         ; 005034ae
    TEST ESI,ESI                        ; 005034b1
    JZ 0x005034cf                       ; 005034b3
        ;   XREF to: 005034cf (CONDITIONAL_JUMP)  ; LAB_005034cf
    TEST EAX,EAX                        ; 005034b5
    JNZ 0x004ff36b                      ; 005034b7
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    CMP dword ptr [0x01e56c2c],0x0      ; 005034bd | DAT_01e56c2c
    JNZ 0x004ff36b                      ; 005034c4
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    JMP 0x004ff43c                      ; 005034ca
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    PUSH EAX                            ; 005034cf
        ;   Label: LAB_005034cf
    LEA EAX,[ESP + 0x1a20]              ; 005034d0
    PUSH EAX                            ; 005034d7
    MOV EDI,dword ptr [0x005b7650]      ; 005034d8 | DAT_005b7650
    PUSH EDI                            ; 005034de
    CALL core_event.cpp_CEventList_setActorVariable_FUN_00480950 ; 005034df
        ;   XREF to: 00480950 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_setActorVariable_FUN_00480950(CEventList * this_ptr, char * var_name, CDemonActor * actor)
    ADD ESP,0xc                         ; 005034e4
    JMP 0x004ff36b                      ; 005034e7
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0xf                         ; 005034ec
        ;   Label: LAB_005034ec
    PUSH ESI                            ; 005034ef
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 005034f0
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 005034f5
    PUSH 0x64                           ; 005034f8
    MOV dword ptr [ESP + 0x3e94],EAX    ; 005034fa
    LEA EAX,[ESP + 0x3c30]              ; 00503501
    PUSH EAX                            ; 00503508
    LEA EAX,[ESP + 0x3e98]              ; 00503509
    PUSH EAX                            ; 00503510
    CALL core_script.cpp_parseArgument_FUN_004fe090 ; 00503511
        ;   XREF to: 004fe090 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_004fe090(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 00503516
    TEST EAX,EAX                        ; 00503519
    JNZ 0x00503106                      ; 0050351b
        ;   XREF to: 00503106 (CONDITIONAL_JUMP)  ; LAB_00503106
    CMP dword ptr [0x01e56418],0x0      ; 00503521 | DAT_01e56418
    JNZ 0x004ff36b                      ; 00503528
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    LEA EAX,[ESP + 0x3c2c]              ; 0050352e
    PUSH EAX                            ; 00503535
    MOV ECX,dword ptr [0x005bed68]      ; 00503536 | g_CSound_PTR_005bed68
    PUSH ECX                            ; 0050353c
    CALL core_sound.cpp_CSound_playAmbientSound_FUN_0052e9d0 ; 0050353d
        ;   XREF to: 0052e9d0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_playAmbientSound_FUN_0052e9d0(CSound * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 00503542
    JMP 0x004ff36b                      ; 00503545
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0xe                         ; 0050354a
        ;   Label: LAB_0050354a
    PUSH ESI                            ; 0050354d
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 0050354e
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00503553
    LEA EDX,[ESP + 0x3f3c]              ; 00503556
    PUSH EDX                            ; 0050355d
    LEA EDX,[ESP + 0x3f3c]              ; 0050355e
    PUSH EDX                            ; 00503565
    LEA EDX,[ESP + 0x14ac]              ; 00503566
    PUSH EDX                            ; 0050356d
    PUSH 0x58f4dc                       ; 0050356e | = "(%[^,], %d)%n"
    MOV ESI,0xffffffff                  ; 00503573
    PUSH EAX                            ; 00503578
    MOV dword ptr [ESP + 0x3ea4],EAX    ; 00503579
    MOV dword ptr [ESP + 0x3f50],ESI    ; 00503580
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00503587
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x14                        ; 0050358c
    MOV EDI,dword ptr [ESP + 0x3f3c]    ; 0050358f
    CMP EDI,0x3                         ; 00503596
    JGE 0x005035b2                      ; 00503599
        ;   XREF to: 005035b2 (CONDITIONAL_JUMP)  ; LAB_005035b2
    PUSH 0x58f4ea                       ; 0050359b | = "Error parsing setCameragroup parms"
    PUSH 0x1e56420                      ; 005035a0 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 005035a5
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 005035aa
    JMP 0x004ff43c                      ; 005035ad
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 005035b2
        ;   Label: LAB_005035b2
    LEA EAX,[ESP + 0x14a4]              ; 005035b9
    ADD EDX,EDI                         ; 005035c0
    PUSH EAX                            ; 005035c2
    MOV dword ptr [ESP + 0x3e94],EDX    ; 005035c3
    CALL core_script.cpp_trimString_FUN_004fe000 ; 005035ca
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 005035cf
    LEA EAX,[ESP + 0x14a4]              ; 005035d2
    PUSH EAX                            ; 005035d9
    MOV ECX,dword ptr [0x005be368]      ; 005035da | g_CDemonSet_PTR_005be368
    PUSH ECX                            ; 005035e0 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_findCameraByName_FUN_005090a0 ; 005035e1
        ;   XREF to: 005090a0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_findCameraByName_FUN_005090a0(CDemonSet * this_ptr, char * name)
    ADD ESP,0x8                         ; 005035e6
    TEST EAX,EAX                        ; 005035e9
    JL 0x00503624                       ; 005035eb
        ;   XREF to: 00503624 (CONDITIONAL_JUMP)  ; LAB_00503624
    CMP dword ptr [0x01e56418],0x0      ; 005035ed | DAT_01e56418
    JNZ 0x004ff36b                      ; 005035f4
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV EDX,EAX                         ; 005035fa
    SHL EAX,0x2                         ; 005035fc
    SUB EAX,EDX                         ; 005035ff
    SHL EAX,0x2                         ; 00503601
    ADD EAX,EDX                         ; 00503604
    MOV ECX,dword ptr [0x005be368]      ; 00503606 | g_CDemonSet_PTR_005be368
    SHL EAX,0x5                         ; 0050360c
    LEA EDX,[ECX + EAX*0x1]             ; 0050360f
    MOV EAX,dword ptr [ESP + 0x3f38]    ; 00503612
    MOV dword ptr [EDX + 0x14c],EAX     ; 00503619
    JMP 0x004ff36b                      ; 0050361f
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    LEA EAX,[ESP + 0x14a4]              ; 00503624
        ;   Label: LAB_00503624
    PUSH EAX                            ; 0050362b
    PUSH 0x58f50d                       ; 0050362c | = "Camera \"%s\" does not exist."
    PUSH 0x1e56420                      ; 00503631 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00503636
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 0050363b
    JMP 0x004ff43c                      ; 0050363e
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    ADD ESI,0x12                        ; 00503643
        ;   Label: LAB_00503643
    PUSH ESI                            ; 00503646
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00503647
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 0050364c
    LEA EDX,[ESP + 0x3f44]              ; 0050364f
    PUSH EDX                            ; 00503656
    LEA EDX,[ESP + 0x3f44]              ; 00503657
    PUSH EDX                            ; 0050365e
    LEA EDX,[ESP + 0x1bb4]              ; 0050365f
    PUSH EDX                            ; 00503666
    PUSH 0x58f53c                       ; 00503667 | = "(%[^,], %f)%n"
    MOV EDI,0xffffffff                  ; 0050366c
    PUSH EAX                            ; 00503671
    MOV dword ptr [ESP + 0x3ea4],EAX    ; 00503672
    MOV dword ptr [ESP + 0x3f58],EDI    ; 00503679
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00503680
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x14                        ; 00503685
    MOV EAX,dword ptr [ESP + 0x3f44]    ; 00503688
    CMP EAX,0x3                         ; 0050368f
    JGE 0x005036ab                      ; 00503692
        ;   XREF to: 005036ab (CONDITIONAL_JUMP)  ; LAB_005036ab
    PUSH 0x58f54a                       ; 00503694 | = "Error parsing setCharacterHealth parms"
    PUSH 0x1e56420                      ; 00503699 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0050369e
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 005036a3
    JMP 0x004ff43c                      ; 005036a6
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 005036ab
        ;   Label: LAB_005036ab
    ADD EDX,EAX                         ; 005036b2
    LEA EAX,[ESP + 0x1bac]              ; 005036b4
    PUSH EAX                            ; 005036bb
    MOV dword ptr [ESP + 0x3e94],EDX    ; 005036bc
    CALL core_script.cpp_trimString_FUN_004fe000 ; 005036c3
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 005036c8
    PUSH 0x765a60                       ; 005036cb | g_CCharacterActorType_00765a60
    MOV ECX,dword ptr [0x00765a98]      ; 005036d0 | g_CCharacterActorType_00765a60.name_hash
    PUSH ECX                            ; 005036d6
    LEA EAX,[ESP + 0x1bb4]              ; 005036d7
    PUSH EAX                            ; 005036de
    CALL core_script.cpp_getActor_FUN_004fe180 ; 005036df
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 005036e4
    TEST EAX,EAX                        ; 005036e7
    JNZ 0x005036fd                      ; 005036e9
        ;   XREF to: 005036fd (CONDITIONAL_JUMP)  ; LAB_005036fd
    CMP dword ptr [0x01e56c2c],0x0      ; 005036eb | DAT_01e56c2c
    JNZ 0x004ff384                      ; 005036f2
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 005036f8
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    CMP dword ptr [0x01e56418],0x0      ; 005036fd | DAT_01e56418
        ;   Label: LAB_005036fd
    JNZ 0x004ff36b                      ; 00503704
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    FLD float ptr [EAX + 0x2438]        ; 0050370a
    FMUL float ptr [ESP + 0x3f40]       ; 00503710
    FSTP float ptr [EAX + 0x2434]       ; 00503717
    JMP 0x004ff36b                      ; 0050371d
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0xd                         ; 00503722
        ;   Label: LAB_00503722
    PUSH ESI                            ; 00503725
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00503726
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 0050372b
    PUSH 0x64                           ; 0050372e
    MOV dword ptr [ESP + 0x3e94],EAX    ; 00503730
    LEA EAX,[ESP + 0x35f0]              ; 00503737
    PUSH EAX                            ; 0050373e
    LEA EAX,[ESP + 0x3e98]              ; 0050373f
    PUSH EAX                            ; 00503746
    CALL core_script.cpp_parseArgument_FUN_004fe090 ; 00503747
        ;   XREF to: 004fe090 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_004fe090(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0050374c
    TEST EAX,EAX                        ; 0050374f
    JZ 0x00503779                       ; 00503751
        ;   XREF to: 00503779 (CONDITIONAL_JUMP)  ; LAB_00503779
    MOV EDI,0x1e56420                   ; 00503753
    MOV ESI,EAX                         ; 00503758
    PUSH EDI                            ; 0050375a | DAT_01e56420
    MOV AL,byte ptr [ESI]               ; 0050375b
        ;   Label: LAB_0050375b
    MOV byte ptr [EDI],AL               ; 0050375d | DAT_01e56420 | DAT_01e56422
    CMP AL,0x0                          ; 0050375f
    JZ 0x00503773                       ; 00503761
        ;   XREF to: 00503773 (CONDITIONAL_JUMP)  ; LAB_00503773
    MOV AL,byte ptr [ESI + 0x1]         ; 00503763
    ADD ESI,0x2                         ; 00503766
    MOV byte ptr [EDI + 0x1],AL         ; 00503769 | DAT_01e56421 | DAT_01e56423
    ADD EDI,0x2                         ; 0050376c
    CMP AL,0x0                          ; 0050376f
    JNZ 0x0050375b                      ; 00503771
        ;   XREF to: 0050375b (CONDITIONAL_JUMP)  ; LAB_0050375b
    POP EDI                             ; 00503773
        ;   Label: LAB_00503773
    JMP 0x004ff43c                      ; 00503774
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    PUSH 0x763e48                       ; 00503779 | g_CDemonActorActorType_00763e48
        ;   Label: LAB_00503779
    MOV EAX,[0x00763e80]                ; 0050377e | g_CDemonActorActorType_00763e48.name_hash
    PUSH EAX                            ; 00503783
    LEA EAX,[ESP + 0x35f4]              ; 00503784
    PUSH EAX                            ; 0050378b
    CALL core_script.cpp_getActor_FUN_004fe180 ; 0050378c
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00503791
    TEST EAX,EAX                        ; 00503794
    JNZ 0x005037aa                      ; 00503796
        ;   XREF to: 005037aa (CONDITIONAL_JUMP)  ; LAB_005037aa
    CMP dword ptr [0x01e56c2c],0x0      ; 00503798 | DAT_01e56c2c
    JNZ 0x004ff384                      ; 0050379f
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 005037a5
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    CMP EAX,dword ptr [EBX + 0xc]       ; 005037aa
        ;   Label: LAB_005037aa
    JZ 0x004ff36b                       ; 005037ad
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV dword ptr [EBX + 0x10],0x1      ; 005037b3
    MOV dword ptr [EBX + 0xc],EAX       ; 005037ba
    JMP 0x004ff36b                      ; 005037bd
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0xb                         ; 005037c2
        ;   Label: LAB_005037c2
    PUSH ESI                            ; 005037c5
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 005037c6
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 005037cb
    LEA EDX,[ESP + 0x3f48]              ; 005037ce
    PUSH EDX                            ; 005037d5
    LEA EDX,[ESP + 0x3780]              ; 005037d6
    PUSH EDX                            ; 005037dd
    LEA EDX,[ESP + 0x3978]              ; 005037de
    PUSH EDX                            ; 005037e5
    PUSH 0x58f58b                       ; 005037e6 | = " (%[^,], %[^)])%n"
    MOV ESI,0xffffffff                  ; 005037eb
    PUSH EAX                            ; 005037f0
    MOV dword ptr [ESP + 0x3ea4],EAX    ; 005037f1
    MOV dword ptr [ESP + 0x3f5c],ESI    ; 005037f8
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 005037ff
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x14                        ; 00503804
    CMP dword ptr [ESP + 0x3f48],0x5    ; 00503807
    JGE 0x00503828                      ; 0050380f
        ;   XREF to: 00503828 (CONDITIONAL_JUMP)  ; LAB_00503828
    PUSH 0x58f59d                       ; 00503811 | = "Error parsing setHeroTask parameters."
    PUSH 0x1e56420                      ; 00503816 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0050381b
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00503820
    JMP 0x004ff43c                      ; 00503823
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    LEA EAX,[ESP + 0x3970]              ; 00503828
        ;   Label: LAB_00503828
    PUSH EAX                            ; 0050382f
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00503830
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00503835
    LEA EAX,[ESP + 0x377c]              ; 00503838
    PUSH EAX                            ; 0050383f
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00503840
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00503845
    MOV ECX,dword ptr [0x01cae124]      ; 00503848 | g_CHeroActorType_01cae0ec.name_hash
    PUSH 0x1cae0ec                      ; 0050384e
    MOV EAX,dword ptr [ESP + 0x3f4c]    ; 00503853
    MOV EDX,dword ptr [ESP + 0x3e94]    ; 0050385a
    PUSH ECX                            ; 00503861
    ADD EDX,EAX                         ; 00503862
    LEA EAX,[ESP + 0x3978]              ; 00503864
    PUSH EAX                            ; 0050386b
    MOV dword ptr [ESP + 0x3e9c],EDX    ; 0050386c
    CALL core_script.cpp_getActor_FUN_004fe180 ; 00503873
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00503878
    MOV ESI,EAX                         ; 0050387b
    TEST EAX,EAX                        ; 0050387d
    JNZ 0x00503893                      ; 0050387f
        ;   XREF to: 00503893 (CONDITIONAL_JUMP)  ; LAB_00503893
    CMP dword ptr [0x01e56c2c],0x0      ; 00503881 | DAT_01e56c2c
    JNZ 0x004ff384                      ; 00503888
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 0050388e
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    PUSH 0x58f5c3                       ; 00503893 | = "stand"
        ;   Label: LAB_00503893
    LEA EAX,[ESP + 0x3780]              ; 00503898
    PUSH EAX                            ; 0050389f
    CALL crt_string.c__stricmp_FUN_00564520 ; 005038a0
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 005038a5
    TEST EAX,EAX                        ; 005038a8
    JNZ 0x005038c8                      ; 005038aa
        ;   XREF to: 005038c8 (CONDITIONAL_JUMP)  ; LAB_005038c8
    CMP dword ptr [0x01e56418],0x0      ; 005038ac | DAT_01e56418
        ;   Label: LAB_005038ac
    JNZ 0x004ff36b                      ; 005038b3
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH EAX                            ; 005038b9
    PUSH ESI                            ; 005038ba
    CALL core_hero.cpp_CHero_setAiTask_FUN_004b5cd0 ; 005038bb
        ;   XREF to: 004b5cd0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_setAiTask_FUN_004b5cd0(CHero * this_ptr, int ai_task)
    ADD ESP,0x8                         ; 005038c0
    JMP 0x004ff36b                      ; 005038c3
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH 0x58f5c9                       ; 005038c8 | = "follow"
        ;   Label: LAB_005038c8
    LEA EAX,[ESP + 0x3780]              ; 005038cd
    PUSH EAX                            ; 005038d4
    CALL crt_string.c__stricmp_FUN_00564520 ; 005038d5
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 005038da
    TEST EAX,EAX                        ; 005038dd
    JNZ 0x005038e8                      ; 005038df
        ;   XREF to: 005038e8 (CONDITIONAL_JUMP)  ; LAB_005038e8
    MOV EAX,0x1                         ; 005038e1
    JMP 0x005038ac                      ; 005038e6
        ;   XREF to: 005038ac (UNCONDITIONAL_JUMP)  ; LAB_005038ac
    PUSH 0x58f5d0                       ; 005038e8 | = "kill"
        ;   Label: LAB_005038e8
    LEA EAX,[ESP + 0x3780]              ; 005038ed
    PUSH EAX                            ; 005038f4
    CALL crt_string.c__stricmp_FUN_00564520 ; 005038f5
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 005038fa
    TEST EAX,EAX                        ; 005038fd
    JNZ 0x00503908                      ; 005038ff
        ;   XREF to: 00503908 (CONDITIONAL_JUMP)  ; LAB_00503908
    MOV EAX,0x2                         ; 00503901
    JMP 0x005038ac                      ; 00503906
        ;   XREF to: 005038ac (UNCONDITIONAL_JUMP)  ; LAB_005038ac
    PUSH 0x58f5d5                       ; 00503908 | = "guard"
        ;   Label: LAB_00503908
    LEA EAX,[ESP + 0x3780]              ; 0050390d
    PUSH EAX                            ; 00503914
    CALL crt_string.c__stricmp_FUN_00564520 ; 00503915
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 0050391a
    TEST EAX,EAX                        ; 0050391d
    JNZ 0x00503928                      ; 0050391f
        ;   XREF to: 00503928 (CONDITIONAL_JUMP)  ; LAB_00503928
    MOV EAX,0x3                         ; 00503921
    JMP 0x005038ac                      ; 00503926
        ;   XREF to: 005038ac (UNCONDITIONAL_JUMP)  ; LAB_005038ac
    PUSH 0x58f5db                       ; 00503928 | = "suspend"
        ;   Label: LAB_00503928
    LEA EAX,[ESP + 0x3780]              ; 0050392d
    PUSH EAX                            ; 00503934
    CALL crt_string.c__stricmp_FUN_00564520 ; 00503935
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 0050393a
    TEST EAX,EAX                        ; 0050393d
    JNZ 0x0050394b                      ; 0050393f
        ;   XREF to: 0050394b (CONDITIONAL_JUMP)  ; LAB_0050394b
    MOV EAX,0x4                         ; 00503941
    JMP 0x005038ac                      ; 00503946
        ;   XREF to: 005038ac (UNCONDITIONAL_JUMP)  ; LAB_005038ac
    LEA EAX,[ESP + 0x377c]              ; 0050394b
        ;   Label: LAB_0050394b
    PUSH EAX                            ; 00503952
    PUSH 0x58f5e3                       ; 00503953 | = "Invalid Task: %s"
    PUSH 0x1e56420                      ; 00503958 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0050395d
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 00503962
    JMP 0x004ff43c                      ; 00503965
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    ADD ESI,0x9                         ; 0050396a
        ;   Label: LAB_0050396a
    PUSH ESI                            ; 0050396d
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 0050396e
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    MOV EDX,0xffffffff                  ; 00503973
    ADD ESP,0x4                         ; 00503978
    MOV dword ptr [ESP + 0x3f54],EDX    ; 0050397b
    LEA EDX,[ESP + 0x3f54]              ; 00503982
    PUSH EDX                            ; 00503989
    LEA EDX,[ESP + 0x3f54]              ; 0050398a
    PUSH EDX                            ; 00503991
    LEA EDX,[ESP + 0x2f3c]              ; 00503992
    PUSH EDX                            ; 00503999
    PUSH 0x58f5fe                       ; 0050399a | = "(%[^,], %d )%n"
    PUSH EAX                            ; 0050399f
    MOV dword ptr [ESP + 0x3ea4],EAX    ; 005039a0
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 005039a7
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x14                        ; 005039ac
    MOV ECX,dword ptr [ESP + 0x3f54]    ; 005039af
    CMP ECX,0x5                         ; 005039b6
    JGE 0x005039d2                      ; 005039b9
        ;   XREF to: 005039d2 (CONDITIONAL_JUMP)  ; LAB_005039d2
    PUSH 0x58f60d                       ; 005039bb | = "Error parsing setIniInt command parms"
    PUSH 0x1e56420                      ; 005039c0 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 005039c5
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 005039ca
    JMP 0x004ff43c                      ; 005039cd
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV ESI,dword ptr [ESP + 0x3e90]    ; 005039d2
        ;   Label: LAB_005039d2
    LEA EAX,[ESP + 0x2f34]              ; 005039d9
    ADD ESI,ECX                         ; 005039e0
    PUSH EAX                            ; 005039e2
    MOV dword ptr [ESP + 0x3e94],ESI    ; 005039e3
    CALL core_script.cpp_trimString_FUN_004fe000 ; 005039ea
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    MOV EDI,dword ptr [0x01e56418]      ; 005039ef | DAT_01e56418
    ADD ESP,0x4                         ; 005039f5
    TEST EDI,EDI                        ; 005039f8
    JNZ 0x004ff36b                      ; 005039fa
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH 0x58f633                       ; 00503a00 | = "Game"
    PUSH 0x58f638                       ; 00503a05 | = "system\\nocturne.ini"
    LEA EAX,[ESP + 0x44]                ; 00503a0a
    PUSH EAX                            ; 00503a0e
    CALL engine_ini.cpp_CIniFile_ctor_FUN_004bd860 ; 00503a0f
        ;   XREF to: 004bd860 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_CIniFile_ctor_FUN_004bd860(CIniFile * this_ptr, char * filename, char * section)
    ADD ESP,0xc                         ; 00503a14
    MOV EAX,dword ptr [ESP + 0x3f50]    ; 00503a17
    PUSH EAX                            ; 00503a1e
    LEA EAX,[ESP + 0x2f38]              ; 00503a1f
    PUSH EAX                            ; 00503a26
    LEA EAX,[ESP + 0x44]                ; 00503a27
    PUSH EAX                            ; 00503a2b
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 ; 00503a2c
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004bda80(CIniFile * this_ptr, char * key, int value)
    ADD ESP,0xc                         ; 00503a31
    JMP 0x004ff36b                      ; 00503a34
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0x12                        ; 00503a39
        ;   Label: LAB_00503a39
    PUSH ESI                            ; 00503a3c
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00503a3d
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    MOV EDX,0xffffffff                  ; 00503a42
    ADD ESP,0x4                         ; 00503a47
    MOV dword ptr [ESP + 0x3f58],EDX    ; 00503a4a
    LEA EDX,[ESP + 0x3f58]              ; 00503a51
    PUSH EDX                            ; 00503a58
    PUSH EDX                            ; 00503a59
    PUSH 0x58f65f                       ; 00503a5a | = " (%n %n"
    PUSH EAX                            ; 00503a5f
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 00503a60
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00503a67
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x10                        ; 00503a6c
    MOV ECX,dword ptr [ESP + 0x3f58]    ; 00503a6f
    CMP ECX,0x1                         ; 00503a76
    JL 0x00503ac5                       ; 00503a79
        ;   XREF to: 00503ac5 (CONDITIONAL_JUMP)  ; LAB_00503ac5
    MOV ESI,dword ptr [ESP + 0x3e90]    ; 00503a7b
    MOV EDI,0xbf800000                  ; 00503a82
    ADD ESI,ECX                         ; 00503a87
    MOV dword ptr [ESP + 0x3f5c],EDI    ; 00503a89
    MOV dword ptr [ESP + 0x3e90],ESI    ; 00503a90
    CMP byte ptr [ESI],0x29             ; 00503a97
    JNZ 0x00503adc                      ; 00503a9a
        ;   XREF to: 00503adc (CONDITIONAL_JUMP)  ; LAB_00503adc
    LEA EDI,[ESI + 0x1]                 ; 00503a9c
    MOV dword ptr [ESP + 0x3e90],EDI    ; 00503a9f
    CMP dword ptr [0x01e56418],0x0      ; 00503aa6 | DAT_01e56418
        ;   Label: LAB_00503aa6
    JNZ 0x004ff36b                      ; 00503aad
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV EAX,dword ptr [ESP + 0x3f5c]    ; 00503ab3
    MOV dword ptr [EBX + 0x44c],EAX     ; 00503aba
    JMP 0x004ff36b                      ; 00503ac0
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH 0x58f667                       ; 00503ac5 | = "Error parsing setSayTimeOverride para..."
        ;   Label: LAB_00503ac5
    PUSH 0x1e56420                      ; 00503aca | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00503acf
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00503ad4
    JMP 0x004ff43c                      ; 00503ad7
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV dword ptr [ESP + 0x3f58],0xffffffff ; 00503adc
        ;   Label: LAB_00503adc
    LEA EAX,[ESP + 0x3f58]              ; 00503ae7
    PUSH EAX                            ; 00503aee
    LEA EAX,[ESP + 0x3f60]              ; 00503aef
    PUSH EAX                            ; 00503af6
    PUSH 0x58f694                       ; 00503af7 | = "%f )%n"
    PUSH ESI                            ; 00503afc
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00503afd
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x10                        ; 00503b02
    MOV ECX,dword ptr [ESP + 0x3f58]    ; 00503b05
    CMP ECX,0x1                         ; 00503b0c
    JL 0x00503b1a                       ; 00503b0f
        ;   XREF to: 00503b1a (CONDITIONAL_JUMP)  ; LAB_00503b1a
    ADD dword ptr [ESP + 0x3e90],ECX    ; 00503b11
    JMP 0x00503aa6                      ; 00503b18
        ;   XREF to: 00503aa6 (UNCONDITIONAL_JUMP)  ; LAB_00503aa6
    PUSH 0x58f69b                       ; 00503b1a | = "Error parsing setSayTimeOverride para..."
        ;   Label: LAB_00503b1a
    PUSH 0x1e56420                      ; 00503b1f | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00503b24
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00503b29
    JMP 0x004ff43c                      ; 00503b2c
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    ADD ESI,0xc                         ; 00503b31
        ;   Label: LAB_00503b31
    PUSH ESI                            ; 00503b34
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00503b35
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00503b3a
    PUSH 0x64                           ; 00503b3d
    MOV dword ptr [ESP + 0x3e94],EAX    ; 00503b3f
    LEA EAX,[ESP + 0x3848]              ; 00503b46
    PUSH EAX                            ; 00503b4d
    LEA EAX,[ESP + 0x3e98]              ; 00503b4e
    PUSH EAX                            ; 00503b55
    CALL core_script.cpp_parseArgument_FUN_004fe090 ; 00503b56
        ;   XREF to: 004fe090 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_004fe090(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 00503b5b
    TEST EAX,EAX                        ; 00503b5e
    JZ 0x00503b88                       ; 00503b60
        ;   XREF to: 00503b88 (CONDITIONAL_JUMP)  ; LAB_00503b88
    MOV EDI,0x1e56420                   ; 00503b62
        ;   Label: LAB_00503b62
    MOV ESI,EAX                         ; 00503b67
    PUSH EDI                            ; 00503b69 | DAT_01e56420
    MOV AL,byte ptr [ESI]               ; 00503b6a
        ;   Label: LAB_00503b6a
    MOV byte ptr [EDI],AL               ; 00503b6c | DAT_01e56420 | DAT_01e56422
    CMP AL,0x0                          ; 00503b6e
    JZ 0x00503b82                       ; 00503b70
        ;   XREF to: 00503b82 (CONDITIONAL_JUMP)  ; LAB_00503b82
    MOV AL,byte ptr [ESI + 0x1]         ; 00503b72
    ADD ESI,0x2                         ; 00503b75
    MOV byte ptr [EDI + 0x1],AL         ; 00503b78 | DAT_01e56421 | DAT_01e56423
    ADD EDI,0x2                         ; 00503b7b
    CMP AL,0x0                          ; 00503b7e
    JNZ 0x00503b6a                      ; 00503b80
        ;   XREF to: 00503b6a (CONDITIONAL_JUMP)  ; LAB_00503b6a
    POP EDI                             ; 00503b82
        ;   Label: LAB_00503b82
    JMP 0x004ff43c                      ; 00503b83
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    LEA EAX,[ESP + 0x3844]              ; 00503b88
        ;   Label: LAB_00503b88
    PUSH EAX                            ; 00503b8f
    PUSH EBX                            ; 00503b90
    CALL core_script.cpp_CScript_findLabelIndex_FUN_00504c10 ; 00503b91
        ;   XREF to: 00504c10 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_findLabelIndex_FUN_00504c10(CScript * this_ptr, char * label_name)
    ADD ESP,0x8                         ; 00503b96
    TEST EAX,EAX                        ; 00503b99
    JL 0x00503bb5                       ; 00503b9b
        ;   XREF to: 00503bb5 (CONDITIONAL_JUMP)  ; LAB_00503bb5
    CMP dword ptr [0x01e56418],0x0      ; 00503b9d | DAT_01e56418
    JNZ 0x004ff36b                      ; 00503ba4
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV dword ptr [EBX + 0x450],EAX     ; 00503baa
    JMP 0x004ff36b                      ; 00503bb0
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    LEA EAX,[ESP + 0x3844]              ; 00503bb5
        ;   Label: LAB_00503bb5
    PUSH EAX                            ; 00503bbc
    PUSH 0x58f6d5                       ; 00503bbd | = "Undefined label '%s'"
    PUSH 0x1e56420                      ; 00503bc2 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00503bc7
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 00503bcc
    JMP 0x004ff43c                      ; 00503bcf
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    ADD ESI,0xa                         ; 00503bd4
        ;   Label: LAB_00503bd4
    PUSH ESI                            ; 00503bd7
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00503bd8
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00503bdd
    PUSH 0x64                           ; 00503be0
    MOV dword ptr [ESP + 0x3e94],EAX    ; 00503be2
    LEA EAX,[ESP + 0x358c]              ; 00503be9
    PUSH EAX                            ; 00503bf0
    LEA EAX,[ESP + 0x3e98]              ; 00503bf1
    PUSH EAX                            ; 00503bf8
    CALL core_script.cpp_parseArgument_FUN_004fe090 ; 00503bf9
        ;   XREF to: 004fe090 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_004fe090(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 00503bfe
    TEST EAX,EAX                        ; 00503c01
    JNZ 0x00503b62                      ; 00503c03
        ;   XREF to: 00503b62 (CONDITIONAL_JUMP)  ; LAB_00503b62
    CMP byte ptr [ESP + 0x3588],0x0     ; 00503c09
    JNZ 0x00503c44                      ; 00503c11
        ;   XREF to: 00503c44 (CONDITIONAL_JUMP)  ; LAB_00503c44
    MOV dword ptr [EBX + 0x4],EAX       ; 00503c13
    MOV EAX,dword ptr [EBX + 0x4]       ; 00503c16
        ;   Label: LAB_00503c16
    MOV dword ptr [EBX + 0x8],EAX       ; 00503c19
    CMP dword ptr [EBX + 0x14],0x0      ; 00503c1c
    JNZ 0x004ff36b                      ; 00503c20
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV EDX,dword ptr [EBX + 0x4]       ; 00503c26
    CMP EDX,dword ptr [EBX + 0xc]       ; 00503c29
    JZ 0x004ff36b                       ; 00503c2c
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV EAX,dword ptr [EBX + 0x4]       ; 00503c32
    MOV dword ptr [EBX + 0x10],0x1      ; 00503c35
    MOV dword ptr [EBX + 0xc],EAX       ; 00503c3c
    JMP 0x004ff36b                      ; 00503c3f
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH 0x765a60                       ; 00503c44 | g_CCharacterActorType_00765a60
        ;   Label: LAB_00503c44
    MOV ECX,dword ptr [0x00765a98]      ; 00503c49 | g_CCharacterActorType_00765a60.name_hash
    PUSH ECX                            ; 00503c4f
    LEA EAX,[ESP + 0x3590]              ; 00503c50
    PUSH EAX                            ; 00503c57
    CALL core_script.cpp_getActor_FUN_004fe180 ; 00503c58
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00503c5d
    MOV dword ptr [EBX + 0x4],EAX       ; 00503c60
    TEST EAX,EAX                        ; 00503c63
    JNZ 0x00503c16                      ; 00503c65
        ;   XREF to: 00503c16 (CONDITIONAL_JUMP)  ; LAB_00503c16
    CMP dword ptr [0x01e56c2c],0x0      ; 00503c67 | DAT_01e56c2c
    JNZ 0x004ff384                      ; 00503c6e
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 00503c74
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    ADD ESI,0xd                         ; 00503c79
        ;   Label: LAB_00503c79
    PUSH ESI                            ; 00503c7c
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00503c7d
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00503c82
    PUSH 0x64                           ; 00503c85
    MOV dword ptr [ESP + 0x3e94],EAX    ; 00503c87
    LEA EAX,[ESP + 0x3c94]              ; 00503c8e
    PUSH EAX                            ; 00503c95
    LEA EAX,[ESP + 0x3e98]              ; 00503c96
    PUSH EAX                            ; 00503c9d
    CALL core_script.cpp_parseArgument_FUN_004fe090 ; 00503c9e
        ;   XREF to: 004fe090 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_004fe090(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 00503ca3
    TEST EAX,EAX                        ; 00503ca6
    JZ 0x00503cd0                       ; 00503ca8
        ;   XREF to: 00503cd0 (CONDITIONAL_JUMP)  ; LAB_00503cd0
    MOV EDI,0x1e56420                   ; 00503caa
    MOV ESI,EAX                         ; 00503caf
    PUSH EDI                            ; 00503cb1 | DAT_01e56420
    MOV AL,byte ptr [ESI]               ; 00503cb2
        ;   Label: LAB_00503cb2
    MOV byte ptr [EDI],AL               ; 00503cb4 | DAT_01e56420 | DAT_01e56422
    CMP AL,0x0                          ; 00503cb6
    JZ 0x00503cca                       ; 00503cb8
        ;   XREF to: 00503cca (CONDITIONAL_JUMP)  ; LAB_00503cca
    MOV AL,byte ptr [ESI + 0x1]         ; 00503cba
    ADD ESI,0x2                         ; 00503cbd
    MOV byte ptr [EDI + 0x1],AL         ; 00503cc0 | DAT_01e56421 | DAT_01e56423
    ADD EDI,0x2                         ; 00503cc3
    CMP AL,0x0                          ; 00503cc6
    JNZ 0x00503cb2                      ; 00503cc8
        ;   XREF to: 00503cb2 (CONDITIONAL_JUMP)  ; LAB_00503cb2
    POP EDI                             ; 00503cca
        ;   Label: LAB_00503cca
    JMP 0x004ff43c                      ; 00503ccb
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    LEA EAX,[ESP + 0x34]                ; 00503cd0
        ;   Label: LAB_00503cd0
    PUSH EAX                            ; 00503cd4
    PUSH 0x58f703                       ; 00503cd5 | = "%f"
    LEA EAX,[ESP + 0x3c98]              ; 00503cda
    MOV ECX,0xbf800000                  ; 00503ce1
    PUSH EAX                            ; 00503ce6
    MOV dword ptr [ESP + 0x40],ECX      ; 00503ce7
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00503ceb
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0xc                         ; 00503cf0
    FLDZ                                ; 00503cf3
    FLD float ptr [ESP + 0x34]          ; 00503cf5
    FSTP double ptr [ESP + 0x20]        ; 00503cf9
    FCOMP double ptr [ESP + 0x20]       ; 00503cfd
    FNSTSW AX                           ; 00503d01
    SAHF                                ; 00503d03
    JNC 0x00503d37                      ; 00503d04
        ;   XREF to: 00503d37 (CONDITIONAL_JUMP)  ; LAB_00503d37
    FLD double ptr [ESP + 0x20]         ; 00503d06
    FCOMP double ptr [0x0058fa8a]       ; 00503d0a | DOUBLE_0058fa8a
    FNSTSW AX                           ; 00503d10
    SAHF                                ; 00503d12
    JA 0x00503d37                       ; 00503d13
        ;   XREF to: 00503d37 (CONDITIONAL_JUMP)  ; LAB_00503d37
    CMP dword ptr [0x01e56418],0x0      ; 00503d15 | DAT_01e56418
    JNZ 0x004ff36b                      ; 00503d1c
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV EDX,dword ptr [0x005b9354]      ; 00503d22 | g_CGame_PTR_005b9354
    MOV EAX,dword ptr [ESP + 0x34]      ; 00503d28
    MOV dword ptr [EDX + 0x1ec],EAX     ; 00503d2c | g_CGame_01c775ec.time_scale_factor
    JMP 0x004ff36b                      ; 00503d32
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    LEA EAX,[ESP + 0x3c90]              ; 00503d37
        ;   Label: LAB_00503d37
    PUSH EAX                            ; 00503d3e
    PUSH 0x58f706                       ; 00503d3f | = "Invalid time factor %s"
    PUSH 0x1e56420                      ; 00503d44 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00503d49
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 00503d4e
    JMP 0x004ff43c                      ; 00503d51
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    ADD ESI,0x9                         ; 00503d56
        ;   Label: LAB_00503d56
    PUSH ESI                            ; 00503d59
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00503d5a
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00503d5f
    LEA EDX,[ESP + 0x3f68]              ; 00503d62
    PUSH EDX                            ; 00503d69
    LEA EDX,[ESP + 0x22b8]              ; 00503d6a
    PUSH EDX                            ; 00503d71
    PUSH 0x58f727                       ; 00503d72 | = "(%[^,)]%n"
    MOV EDI,0xffffffff                  ; 00503d77
    PUSH EAX                            ; 00503d7c
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 00503d7d
    MOV dword ptr [ESP + 0x3f78],EDI    ; 00503d84
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00503d8b
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x10                        ; 00503d90
    MOV EAX,dword ptr [ESP + 0x3f68]    ; 00503d93
    CMP EAX,0x2                         ; 00503d9a
    JGE 0x00503db6                      ; 00503d9d
        ;   XREF to: 00503db6 (CONDITIONAL_JUMP)  ; LAB_00503db6
    PUSH 0x58f731                       ; 00503d9f | = "Error parsing setVictim command parms"
    PUSH 0x1e56420                      ; 00503da4 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00503da9
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00503dae
    JMP 0x004ff43c                      ; 00503db1
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 00503db6
        ;   Label: LAB_00503db6
    ADD EDX,EAX                         ; 00503dbd
    LEA EAX,[ESP + 0x22b4]              ; 00503dbf
    PUSH EAX                            ; 00503dc6
    MOV dword ptr [ESP + 0x3e94],EDX    ; 00503dc7
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00503dce
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00503dd3
    PUSH 0x1bcdebc                      ; 00503dd6
    MOV ECX,dword ptr [0x01bcdef4]      ; 00503ddb | g_CEnemyActorType_01bcdebc.name_hash
    PUSH ECX                            ; 00503de1
    LEA EAX,[ESP + 0x22bc]              ; 00503de2
    PUSH EAX                            ; 00503de9
    CALL core_script.cpp_getActor_FUN_004fe180 ; 00503dea
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00503def
    MOV ESI,EAX                         ; 00503df2
    TEST EAX,EAX                        ; 00503df4
    JNZ 0x00503e0a                      ; 00503df6
        ;   XREF to: 00503e0a (CONDITIONAL_JUMP)  ; LAB_00503e0a
    CMP dword ptr [0x01e56c2c],0x0      ; 00503df8 | DAT_01e56c2c
    JNZ 0x004ff384                      ; 00503dff
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 00503e05
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 00503e0a
        ;   Label: LAB_00503e0a
    MOV CL,byte ptr [EDX]               ; 00503e11
    XOR EAX,EAX                         ; 00503e13
    CMP CL,0x2c                         ; 00503e15
    JZ 0x00503e4f                       ; 00503e18
        ;   XREF to: 00503e4f (CONDITIONAL_JUMP)  ; LAB_00503e4f
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 00503e1a
        ;   Label: LAB_00503e1a
    CMP byte ptr [EDX],0x29             ; 00503e21
    JNZ 0x00503f10                      ; 00503e24
        ;   XREF to: 00503f10 (CONDITIONAL_JUMP)  ; LAB_00503f10
    INC EDX                             ; 00503e2a
    MOV ECX,dword ptr [0x01e56418]      ; 00503e2b | DAT_01e56418
    MOV dword ptr [ESP + 0x3e90],EDX    ; 00503e31
    TEST ECX,ECX                        ; 00503e38
    JNZ 0x004ff36b                      ; 00503e3a
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH EAX                            ; 00503e40
    PUSH ESI                            ; 00503e41
    CALL core_enemy.cpp_CEnemy_setVictim_FUN_00479f50 ; 00503e42
        ;   XREF to: 00479f50 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setVictim_FUN_00479f50(CEnemy * this_ptr, CDemonActor * victim)
    ADD ESP,0x8                         ; 00503e47
    JMP 0x004ff36b                      ; 00503e4a
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    LEA EAX,[ESP + 0x3f68]              ; 00503e4f
        ;   Label: LAB_00503e4f
    PUSH EAX                            ; 00503e56
    LEA EAX,[ESP + 0x2da8]              ; 00503e57
    PUSH EAX                            ; 00503e5e
    PUSH 0x58f757                       ; 00503e5f | = ", %[^)]%n"
    PUSH EDX                            ; 00503e64
    MOV dword ptr [ESP + 0x3f78],EDI    ; 00503e65
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00503e6c
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x10                        ; 00503e71
    MOV EDX,dword ptr [ESP + 0x3f68]    ; 00503e74
    CMP EDX,0x3                         ; 00503e7b
    JGE 0x00503e97                      ; 00503e7e
        ;   XREF to: 00503e97 (CONDITIONAL_JUMP)  ; LAB_00503e97
    PUSH 0x58f761                       ; 00503e80 | = "Error parsing setVictim command parms"
    PUSH 0x1e56420                      ; 00503e85 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00503e8a
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00503e8f
    JMP 0x004ff43c                      ; 00503e92
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV ECX,dword ptr [ESP + 0x3e90]    ; 00503e97
        ;   Label: LAB_00503e97
    LEA EAX,[ESP + 0x2da4]              ; 00503e9e
    ADD ECX,EDX                         ; 00503ea5
    PUSH EAX                            ; 00503ea7
    MOV dword ptr [ESP + 0x3e94],ECX    ; 00503ea8
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00503eaf
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00503eb4
    PUSH 0x58f787                       ; 00503eb7 | = "disable"
    LEA EAX,[ESP + 0x2da8]              ; 00503ebc
    PUSH EAX                            ; 00503ec3
    CALL crt_string.c__stricmp_FUN_00564520 ; 00503ec4
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 00503ec9
    TEST EAX,EAX                        ; 00503ecc
    JNZ 0x00503eda                      ; 00503ece
        ;   XREF to: 00503eda (CONDITIONAL_JUMP)  ; LAB_00503eda
    MOV EAX,[0x005a16f0]                ; 00503ed0 | DAT_005a16f0
    JMP 0x00503e1a                      ; 00503ed5
        ;   XREF to: 00503e1a (UNCONDITIONAL_JUMP)  ; LAB_00503e1a
    PUSH 0x765a60                       ; 00503eda | g_CCharacterActorType_00765a60
        ;   Label: LAB_00503eda
    MOV EDI,dword ptr [0x00765a98]      ; 00503edf | g_CCharacterActorType_00765a60.name_hash
    PUSH EDI                            ; 00503ee5
    LEA EAX,[ESP + 0x2dac]              ; 00503ee6
    PUSH EAX                            ; 00503eed
    CALL core_script.cpp_getActor_FUN_004fe180 ; 00503eee
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00503ef3
    TEST EAX,EAX                        ; 00503ef6
    JNZ 0x00503e1a                      ; 00503ef8
        ;   XREF to: 00503e1a (CONDITIONAL_JUMP)  ; LAB_00503e1a
    CMP dword ptr [0x01e56c2c],0x0      ; 00503efe | DAT_01e56c2c
    JNZ 0x004ff384                      ; 00503f05
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 00503f0b
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    PUSH 0x58f78f                       ; 00503f10 | = "Missing closing ')' in setVictim command"
        ;   Label: LAB_00503f10
    PUSH 0x1e56420                      ; 00503f15 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00503f1a
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00503f1f
    JMP 0x004ff43c                      ; 00503f22
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    ADD ESI,0xa                         ; 00503f27
        ;   Label: LAB_00503f27
    PUSH ESI                            ; 00503f2a
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00503f2b
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00503f30
    LEA EDX,[ESP + 0x3f6c]              ; 00503f33
    PUSH EDX                            ; 00503f3a
    LEA EDX,[ESP + 0x2380]              ; 00503f3b
    PUSH EDX                            ; 00503f42
    LEA EDX,[ESP + 0x131c]              ; 00503f43
    PUSH EDX                            ; 00503f4a
    PUSH 0x58f7c3                       ; 00503f4b | = "(%[^,], %[^)])%n"
    MOV EDI,0xffffffff                  ; 00503f50
    PUSH EAX                            ; 00503f55
    MOV dword ptr [ESP + 0x3ea4],EAX    ; 00503f56
    MOV dword ptr [ESP + 0x3f80],EDI    ; 00503f5d
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00503f64
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x14                        ; 00503f69
    MOV EAX,dword ptr [ESP + 0x3f6c]    ; 00503f6c
    CMP EAX,0x5                         ; 00503f73
    JGE 0x00503f8f                      ; 00503f76
        ;   XREF to: 00503f8f (CONDITIONAL_JUMP)  ; LAB_00503f8f
    PUSH 0x58f7d4                       ; 00503f78 | = "Error snaping turnToFace command parms"
    PUSH 0x1e56420                      ; 00503f7d | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00503f82
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00503f87
    JMP 0x004ff43c                      ; 00503f8a
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 00503f8f
        ;   Label: LAB_00503f8f
    ADD EDX,EAX                         ; 00503f96
    LEA EAX,[ESP + 0x1314]              ; 00503f98
    PUSH EAX                            ; 00503f9f
    MOV dword ptr [ESP + 0x3e94],EDX    ; 00503fa0
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00503fa7
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00503fac
    LEA EAX,[ESP + 0x237c]              ; 00503faf
    PUSH EAX                            ; 00503fb6
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00503fb7
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00503fbc
    PUSH 0x763e48                       ; 00503fbf | g_CDemonActorActorType_00763e48
    MOV ECX,dword ptr [0x00763e80]      ; 00503fc4 | g_CDemonActorActorType_00763e48.name_hash
    PUSH ECX                            ; 00503fca
    LEA EAX,[ESP + 0x131c]              ; 00503fcb
    PUSH EAX                            ; 00503fd2
    CALL core_script.cpp_getActor_FUN_004fe180 ; 00503fd3
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV ESI,EAX                         ; 00503fd8
    ADD ESP,0xc                         ; 00503fda
    TEST EAX,EAX                        ; 00503fdd
    JNZ 0x00503ff3                      ; 00503fdf
        ;   XREF to: 00503ff3 (CONDITIONAL_JUMP)  ; LAB_00503ff3
    CMP dword ptr [0x01e56c2c],0x0      ; 00503fe1 | DAT_01e56c2c
    JNZ 0x004ff384                      ; 00503fe8
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 00503fee
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    PUSH 0x763e48                       ; 00503ff3 | g_CDemonActorActorType_00763e48
        ;   Label: LAB_00503ff3
    MOV EDI,dword ptr [0x00763e80]      ; 00503ff8 | g_CDemonActorActorType_00763e48.name_hash
    PUSH EDI                            ; 00503ffe
    LEA EAX,[ESP + 0x2384]              ; 00503fff
    PUSH EAX                            ; 00504006
    CALL core_script.cpp_getActor_FUN_004fe180 ; 00504007
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0050400c
    TEST EAX,EAX                        ; 0050400f
    JNZ 0x00504025                      ; 00504011
        ;   XREF to: 00504025 (CONDITIONAL_JUMP)  ; LAB_00504025
    CMP dword ptr [0x01e56c2c],0x0      ; 00504013 | DAT_01e56c2c
    JNZ 0x004ff384                      ; 0050401a
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 00504020
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    CMP dword ptr [0x01e56418],0x0      ; 00504025 | DAT_01e56418
        ;   Label: LAB_00504025
    JNZ 0x004ff36b                      ; 0050402c
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    LEA EDX,[ESI + 0x20]                ; 00504032
    PUSH EDX                            ; 00504035
    LEA EDX,[ESP + 0x3e70]              ; 00504036
    PUSH EDX                            ; 0050403d
    ADD EAX,0x20                        ; 0050403e
    PUSH EAX                            ; 00504041
    CALL core_bodypart.cpp_subtractVector_FUN_00417f90 ; 00504042
        ;   XREF to: 00417f90 (UNCONDITIONAL_CALL)  ; CVector3f * core_bodypart.cpp_subtractVector_FUN_00417f90(CVector3f * a, CVector3f * dst, CVector3f * b)
    ADD ESP,0xc                         ; 00504047
    LEA EAX,[ESP + 0x3e6c]              ; 0050404a
    PUSH EAX                            ; 00504051
    LEA EAX,[ESP + 0x3e4c]              ; 00504052
    PUSH EAX                            ; 00504059
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 0050405a
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 0050405f
    FLD float ptr [EAX + 0x4]           ; 00504062
    PUSH ESI                            ; 00504065
    FSTP float ptr [ESI + 0x34]         ; 00504066
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 00504069
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0050406e
    JMP 0x004ff36b                      ; 00504071
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0x8                         ; 00504076
        ;   Label: LAB_00504076
    PUSH ESI                            ; 00504079
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 0050407a
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 0050407f
    PUSH 0x1f4                          ; 00504082
    MOV dword ptr [ESP + 0x3e94],EAX    ; 00504087
    LEA EAX,[ESP + 0x440]               ; 0050408e
    PUSH EAX                            ; 00504095
    LEA EAX,[ESP + 0x3e98]              ; 00504096
    PUSH EAX                            ; 0050409d
    CALL core_script.cpp_parseArgument_FUN_004fe090 ; 0050409e
        ;   XREF to: 004fe090 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_004fe090(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 005040a3
    TEST EAX,EAX                        ; 005040a6
    JZ 0x005040d0                       ; 005040a8
        ;   XREF to: 005040d0 (CONDITIONAL_JUMP)  ; LAB_005040d0
    MOV EDI,0x1e56420                   ; 005040aa
    MOV ESI,EAX                         ; 005040af
    PUSH EDI                            ; 005040b1 | DAT_01e56420
    MOV AL,byte ptr [ESI]               ; 005040b2
        ;   Label: LAB_005040b2
    MOV byte ptr [EDI],AL               ; 005040b4 | DAT_01e56420 | DAT_01e56422
    CMP AL,0x0                          ; 005040b6
    JZ 0x005040ca                       ; 005040b8
        ;   XREF to: 005040ca (CONDITIONAL_JUMP)  ; LAB_005040ca
    MOV AL,byte ptr [ESI + 0x1]         ; 005040ba
    ADD ESI,0x2                         ; 005040bd
    MOV byte ptr [EDI + 0x1],AL         ; 005040c0 | DAT_01e56421 | DAT_01e56423
    ADD EDI,0x2                         ; 005040c3
    CMP AL,0x0                          ; 005040c6
    JNZ 0x005040b2                      ; 005040c8
        ;   XREF to: 005040b2 (CONDITIONAL_JUMP)  ; LAB_005040b2
    POP EDI                             ; 005040ca
        ;   Label: LAB_005040ca
    JMP 0x004ff43c                      ; 005040cb
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    LEA EAX,[ESP + 0x3f70]              ; 005040d0
        ;   Label: LAB_005040d0
    PUSH EAX                            ; 005040d7
    LEA EAX,[ESP + 0x1e08]              ; 005040d8
    PUSH EAX                            ; 005040df
    LEA EAX,[ESP + 0x29c4]              ; 005040e0
    PUSH EAX                            ; 005040e7
    PUSH 0x58f804                       ; 005040e8 | = "%[^,], %[^,], %n"
    LEA EAX,[ESP + 0x44c]               ; 005040ed
    MOV EDI,0xffffffff                  ; 005040f4
    PUSH EAX                            ; 005040f9
    MOV dword ptr [ESP + 0x3f84],EDI    ; 005040fa
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00504101
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x14                        ; 00504106
    CMP dword ptr [ESP + 0x3f70],0x5    ; 00504109
    JGE 0x0050412a                      ; 00504111
        ;   XREF to: 0050412a (CONDITIONAL_JUMP)  ; LAB_0050412a
    PUSH 0x58f815                       ; 00504113 | = "Error parsing speaker and wav arguments"
    PUSH 0x1e56420                      ; 00504118 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0050411d
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00504122
    JMP 0x004ff43c                      ; 00504125
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    LEA EAX,[ESP + 0x29bc]              ; 0050412a
        ;   Label: LAB_0050412a
    PUSH EAX                            ; 00504131
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00504132
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00504137
    LEA EAX,[ESP + 0x1e04]              ; 0050413a
    PUSH EAX                            ; 00504141
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00504142
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00504147
    LEA EAX,[ESP + 0x43c]               ; 0050414a
    ADD EAX,dword ptr [ESP + 0x3f70]    ; 00504151
    PUSH EAX                            ; 00504158
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00504159
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 0050415e
    PUSH EAX                            ; 00504161
    LEA EAX,[ESP + 0x1e08]              ; 00504162
    PUSH EAX                            ; 00504169
    LEA EAX,[ESP + 0x29c4]              ; 0050416a
    PUSH EAX                            ; 00504171
    PUSH EBX                            ; 00504172
    CALL core_script.cpp_CScript_getDialogDuration_FUN_005049b0 ; 00504173
        ;   XREF to: 005049b0 (UNCONDITIONAL_CALL)  ; float core_script.cpp_CScript_getDialogDuration_FUN_005049b0(CScript * this_ptr, char * actor_specifier, char * sound_name, char * dialog_text)
    MOV dword ptr [ESP + 0x3fa4],EAX    ; 00504178
    FLDZ                                ; 0050417f
    MOV EAX,dword ptr [ESP + 0x3fa4]    ; 00504181
    MOV dword ptr [EBX + 0x48],EAX      ; 00504188
    ADD ESP,0x10                        ; 0050418b
    FCOMP float ptr [EBX + 0x48]        ; 0050418e
    FNSTSW AX                           ; 00504191
    SAHF                                ; 00504193
    JA 0x004ff43c                       ; 00504194
        ;   XREF to: 004ff43c (CONDITIONAL_JUMP)  ; LAB_004ff43c
    JMP 0x004ff36b                      ; 0050419a
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0xc                         ; 0050419f
        ;   Label: LAB_0050419f
    PUSH ESI                            ; 005041a2
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 005041a3
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 005041a8
    PUSH 0xc8                           ; 005041ab
    MOV dword ptr [ESP + 0x3e94],EAX    ; 005041b0
    LEA EAX,[ESP + 0x30c8]              ; 005041b7
    PUSH EAX                            ; 005041be
    LEA EAX,[ESP + 0x3e98]              ; 005041bf
    PUSH EAX                            ; 005041c6
    CALL core_script.cpp_parseArgument_FUN_004fe090 ; 005041c7
        ;   XREF to: 004fe090 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_004fe090(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 005041cc
    TEST EAX,EAX                        ; 005041cf
    JZ 0x005041f9                       ; 005041d1
        ;   XREF to: 005041f9 (CONDITIONAL_JUMP)  ; LAB_005041f9
    MOV EDI,0x1e56420                   ; 005041d3
    MOV ESI,EAX                         ; 005041d8
    PUSH EDI                            ; 005041da | DAT_01e56420
    MOV AL,byte ptr [ESI]               ; 005041db
        ;   Label: LAB_005041db
    MOV byte ptr [EDI],AL               ; 005041dd | DAT_01e56420 | DAT_01e56422
    CMP AL,0x0                          ; 005041df
    JZ 0x005041f3                       ; 005041e1
        ;   XREF to: 005041f3 (CONDITIONAL_JUMP)  ; LAB_005041f3
    MOV AL,byte ptr [ESI + 0x1]         ; 005041e3
    ADD ESI,0x2                         ; 005041e6
    MOV byte ptr [EDI + 0x1],AL         ; 005041e9 | DAT_01e56421 | DAT_01e56423
    ADD EDI,0x2                         ; 005041ec
    CMP AL,0x0                          ; 005041ef
    JNZ 0x005041db                      ; 005041f1
        ;   XREF to: 005041db (CONDITIONAL_JUMP)  ; LAB_005041db
    POP EDI                             ; 005041f3
        ;   Label: LAB_005041f3
    JMP 0x004ff43c                      ; 005041f4
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV DL,0x2c                         ; 005041f9
        ;   Label: LAB_005041f9
    LEA ESI,[ESP + 0x30c4]              ; 005041fb
    MOV AL,byte ptr [ESI]               ; 00504202
        ;   Label: LAB_00504202
    CMP AL,DL                           ; 00504204
    JZ 0x0050421a                       ; 00504206
        ;   XREF to: 0050421a (CONDITIONAL_JUMP)  ; LAB_0050421a
    CMP AL,0x0                          ; 00504208
    JZ 0x00504218                       ; 0050420a
        ;   XREF to: 00504218 (CONDITIONAL_JUMP)  ; LAB_00504218
    INC ESI                             ; 0050420c
    MOV AL,byte ptr [ESI]               ; 0050420d
    CMP AL,DL                           ; 0050420f
    JZ 0x0050421a                       ; 00504211
        ;   XREF to: 0050421a (CONDITIONAL_JUMP)  ; LAB_0050421a
    INC ESI                             ; 00504213
    CMP AL,0x0                          ; 00504214
    JNZ 0x00504202                      ; 00504216
        ;   XREF to: 00504202 (CONDITIONAL_JUMP)  ; LAB_00504202
    SUB ESI,ESI                         ; 00504218
        ;   Label: LAB_00504218
    TEST ESI,ESI                        ; 0050421a
        ;   Label: LAB_0050421a
    SETNZ AL                            ; 0050421c
    MOV ECX,0xffffffff                  ; 0050421f
    MOV ESI,0x58f84a                    ; 00504224 | = ","
    AND EAX,0xff                        ; 00504229
    LEA EDI,[ESP + 0x30c4]              ; 0050422e
    MOV dword ptr [ESP + 0x3ef0],EAX    ; 00504235
    MOV dword ptr [ESP + 0x3f74],ECX    ; 0050423c
    PUSH EDI                            ; 00504243
    SUB ECX,ECX                         ; 00504244
    DEC ECX                             ; 00504246
    MOV AL,0x0                          ; 00504247
    SCASB.REPNE ES:EDI                  ; 00504249
    DEC EDI                             ; 0050424b
    MOV AL,byte ptr [ESI]               ; 0050424c | = "," | s_n_0058f84c
        ;   Label: LAB_0050424c
    MOV byte ptr [EDI],AL               ; 0050424e
    CMP AL,0x0                          ; 00504250
    JZ 0x00504264                       ; 00504252
        ;   XREF to: 00504264 (CONDITIONAL_JUMP)  ; LAB_00504264
    MOV AL,byte ptr [ESI + 0x1]         ; 00504254 | s_anon_0058f84a+1 | s_n_0058f84c+1
    ADD ESI,0x2                         ; 00504257
    MOV byte ptr [EDI + 0x1],AL         ; 0050425a
    ADD EDI,0x2                         ; 0050425d
    CMP AL,0x0                          ; 00504260
    JNZ 0x0050424c                      ; 00504262
        ;   XREF to: 0050424c (CONDITIONAL_JUMP)  ; LAB_0050424c
    POP EDI                             ; 00504264
        ;   Label: LAB_00504264
    LEA EAX,[ESP + 0x3f74]              ; 00504265
    PUSH EAX                            ; 0050426c
    LEA EAX,[ESP + 0x37e4]              ; 0050426d
    PUSH EAX                            ; 00504274
    PUSH 0x58f84c                       ; 00504275 | = "%[^,],%n"
    LEA EAX,[ESP + 0x30d0]              ; 0050427a
    PUSH EAX                            ; 00504281
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00504282
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x10                        ; 00504287
    CMP dword ptr [ESP + 0x3f74],0x1    ; 0050428a
    JGE 0x005042bd                      ; 00504292
        ;   XREF to: 005042bd (CONDITIONAL_JUMP)  ; LAB_005042bd
    MOV ESI,0x58f855                    ; 00504294 | = "Error parsing out camera name"
    MOV EDI,0x1e56420                   ; 00504299
    PUSH EDI                            ; 0050429e | DAT_01e56420
    MOV AL,byte ptr [ESI]               ; 0050429f | = "Error parsing out camera name" | s_Error_parsing_out_camera_0058f855+2
        ;   Label: LAB_0050429f
    MOV byte ptr [EDI],AL               ; 005042a1 | DAT_01e56420 | DAT_01e56422
    CMP AL,0x0                          ; 005042a3
    JZ 0x005042b7                       ; 005042a5
        ;   XREF to: 005042b7 (CONDITIONAL_JUMP)  ; LAB_005042b7
    MOV AL,byte ptr [ESI + 0x1]         ; 005042a7 | s_Error_parsing_out_camera_0058f855+1 | s_Error_parsing_out_camera_0058f855+3
    ADD ESI,0x2                         ; 005042aa
    MOV byte ptr [EDI + 0x1],AL         ; 005042ad | DAT_01e56421 | DAT_01e56423
    ADD EDI,0x2                         ; 005042b0
    CMP AL,0x0                          ; 005042b3
    JNZ 0x0050429f                      ; 005042b5
        ;   XREF to: 0050429f (CONDITIONAL_JUMP)  ; LAB_0050429f
    POP EDI                             ; 005042b7
        ;   Label: LAB_005042b7
    JMP 0x004ff43c                      ; 005042b8
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    LEA EAX,[ESP + 0x37e0]              ; 005042bd
        ;   Label: LAB_005042bd
    PUSH EAX                            ; 005042c4
    CALL core_script.cpp_trimString_FUN_004fe000 ; 005042c5
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 005042ca
    LEA EAX,[ESP + 0x37e0]              ; 005042cd
    PUSH EAX                            ; 005042d4
    MOV EDI,dword ptr [0x005be368]      ; 005042d5 | g_CDemonSet_PTR_005be368
    PUSH EDI                            ; 005042db | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_findCameraByName_FUN_005090a0 ; 005042dc
        ;   XREF to: 005090a0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_findCameraByName_FUN_005090a0(CDemonSet * this_ptr, char * name)
    ADD ESP,0x8                         ; 005042e1
    MOV ESI,EAX                         ; 005042e4
    TEST EAX,EAX                        ; 005042e6
    JL 0x00504323                       ; 005042e8
        ;   XREF to: 00504323 (CONDITIONAL_JUMP)  ; LAB_00504323
    MOV EAX,0x501502f9                  ; 005042ea
    MOV EDX,dword ptr [ESP + 0x3ef0]    ; 005042ef
    MOV dword ptr [ESP + 0x30],EAX      ; 005042f6
    TEST EDX,EDX                        ; 005042fa
    JNZ 0x00504342                      ; 005042fc
        ;   XREF to: 00504342 (CONDITIONAL_JUMP)  ; LAB_00504342
    CMP dword ptr [0x01e56418],0x0      ; 005042fe | DAT_01e56418
        ;   Label: LAB_005042fe
    JNZ 0x004ff36b                      ; 00504305
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH dword ptr [ESP + 0x30]         ; 0050430b
    PUSH ESI                            ; 0050430f
    MOV EAX,[0x005be368]                ; 00504310 | g_CDemonSet_PTR_005be368
    PUSH EAX                            ; 00504315 | g_CDemonSet_01e57284
    CALL core_setdir.cpp_CDemonSet_setPendingCamera_FUN_005135d0 ; 00504316
        ;   XREF to: 005135d0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_setPendingCamera_FUN_005135d0(CDemonSet * this_ptr, int camera_index, float hold_time)
    ADD ESP,0xc                         ; 0050431b
    JMP 0x004ff36b                      ; 0050431e
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    LEA EAX,[ESP + 0x37e0]              ; 00504323
        ;   Label: LAB_00504323
    PUSH EAX                            ; 0050432a
    PUSH 0x58f873                       ; 0050432b | = "Camera \"%s\" doesn't exist."
    PUSH 0x1e56420                      ; 00504330 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00504335
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 0050433a
    JMP 0x004ff43c                      ; 0050433d
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    LEA EAX,[ESP + 0x30]                ; 00504342
        ;   Label: LAB_00504342
    PUSH EAX                            ; 00504346
    MOV ECX,dword ptr [ESP + 0x3f78]    ; 00504347
    LEA EAX,[ESP + 0x30c8]              ; 0050434e
    PUSH 0x58f88e                       ; 00504355 | = "%f"
    ADD EAX,ECX                         ; 0050435a
    PUSH EAX                            ; 0050435c
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0050435d
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0xc                         ; 00504362
    FLDZ                                ; 00504365
    FLD float ptr [ESP + 0x30]          ; 00504367
    FSTP double ptr [ESP + 0x8]         ; 0050436b
    FCOMP double ptr [ESP + 0x8]        ; 0050436f
    FNSTSW AX                           ; 00504373
    SAHF                                ; 00504375
    JA 0x0050438b                       ; 00504376
        ;   XREF to: 0050438b (CONDITIONAL_JUMP)  ; LAB_0050438b
    FLD double ptr [ESP + 0x8]          ; 00504378
    FCOMP double ptr [0x0058fa92]       ; 0050437c | DOUBLE_0058fa92
    FNSTSW AX                           ; 00504382
    SAHF                                ; 00504384
    JBE 0x005042fe                      ; 00504385
        ;   XREF to: 005042fe (CONDITIONAL_JUMP)  ; LAB_005042fe
    PUSH 0x58f891                       ; 0050438b | = "Invalid hold time value"
        ;   Label: LAB_0050438b
    PUSH 0x1e56420                      ; 00504390 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00504395
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 0050439a
    JMP 0x004ff43c                      ; 0050439d
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    ADD ESI,0xc                         ; 005043a2
        ;   Label: LAB_005043a2
    PUSH ESI                            ; 005043a5
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 005043a6
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 005043ab
    PUSH 0x12c                          ; 005043ae
    MOV dword ptr [ESP + 0x3e94],EAX    ; 005043b3
    LEA EAX,[ESP + 0xa80]               ; 005043ba
    PUSH EAX                            ; 005043c1
    LEA EAX,[ESP + 0x3e98]              ; 005043c2
    PUSH EAX                            ; 005043c9
    CALL core_script.cpp_parseArgument_FUN_004fe090 ; 005043ca
        ;   XREF to: 004fe090 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_004fe090(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 005043cf
    TEST EAX,EAX                        ; 005043d2
    JZ 0x005043fc                       ; 005043d4
        ;   XREF to: 005043fc (CONDITIONAL_JUMP)  ; LAB_005043fc
    MOV EDI,0x1e56420                   ; 005043d6
        ;   Label: LAB_005043d6
    MOV ESI,EAX                         ; 005043db
    PUSH EDI                            ; 005043dd | DAT_01e56420
    MOV AL,byte ptr [ESI]               ; 005043de
        ;   Label: LAB_005043de
    MOV byte ptr [EDI],AL               ; 005043e0 | DAT_01e56420 | DAT_01e56422
    CMP AL,0x0                          ; 005043e2
    JZ 0x005043f6                       ; 005043e4
        ;   XREF to: 005043f6 (CONDITIONAL_JUMP)  ; LAB_005043f6
    MOV AL,byte ptr [ESI + 0x1]         ; 005043e6
    ADD ESI,0x2                         ; 005043e9
    MOV byte ptr [EDI + 0x1],AL         ; 005043ec | DAT_01e56421 | DAT_01e56423
    ADD EDI,0x2                         ; 005043ef
    CMP AL,0x0                          ; 005043f2
    JNZ 0x005043de                      ; 005043f4
        ;   XREF to: 005043de (CONDITIONAL_JUMP)  ; LAB_005043de
    POP EDI                             ; 005043f6
        ;   Label: LAB_005043f6
    JMP 0x004ff43c                      ; 005043f7
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    LEA EAX,[ESP + 0x3f78]              ; 005043fc
        ;   Label: LAB_005043fc
    PUSH EAX                            ; 00504403
    LEA EAX,[ESP + 0x3f80]              ; 00504404
    PUSH EAX                            ; 0050440b
    PUSH 0x58f8b6                       ; 0050440c | = "%f,%n"
    LEA EAX,[ESP + 0xa88]               ; 00504411
    MOV EDX,0xffffffff                  ; 00504418
    PUSH EAX                            ; 0050441d
    MOV dword ptr [ESP + 0x3f88],EDX    ; 0050441e
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00504425
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x10                        ; 0050442a
    MOV ECX,dword ptr [ESP + 0x3f78]    ; 0050442d
    CMP ECX,0x2                         ; 00504434
    JL 0x005044a3                       ; 00504437
        ;   XREF to: 005044a3 (CONDITIONAL_JUMP)  ; LAB_005044a3
    CMP dword ptr [0x01e56418],0x0      ; 00504439 | DAT_01e56418
    JNZ 0x004ff36b                      ; 00504440
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    LEA EAX,[ESP + 0xa7c]               ; 00504446
    ADD EAX,ECX                         ; 0050444d
    PUSH EAX                            ; 0050444f
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00504450
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00504455
    LEA EDI,[EBX + 0x4c]                ; 00504458
    MOV ESI,EAX                         ; 0050445b
    PUSH EDI                            ; 0050445d
    MOV AL,byte ptr [ESI]               ; 0050445e
        ;   Label: LAB_0050445e
    MOV byte ptr [EDI],AL               ; 00504460
    CMP AL,0x0                          ; 00504462
    JZ 0x00504476                       ; 00504464
        ;   XREF to: 00504476 (CONDITIONAL_JUMP)  ; LAB_00504476
    MOV AL,byte ptr [ESI + 0x1]         ; 00504466
    ADD ESI,0x2                         ; 00504469
    MOV byte ptr [EDI + 0x1],AL         ; 0050446c
    ADD EDI,0x2                         ; 0050446f
    CMP AL,0x0                          ; 00504472
    JNZ 0x0050445e                      ; 00504474
        ;   XREF to: 0050445e (CONDITIONAL_JUMP)  ; LAB_0050445e
    POP EDI                             ; 00504476
        ;   Label: LAB_00504476
    MOV EAX,dword ptr [EBP + 0x18]      ; 00504477
    PUSH EAX                            ; 0050447a
    PUSH dword ptr [ESP + 0x3f80]       ; 0050447b
    PUSH EBX                            ; 00504482
    CALL core_script.cpp_CScript_processTimer_FUN_00504b70 ; 00504483
        ;   XREF to: 00504b70 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_processTimer_FUN_00504b70(CScript * this_ptr, float delta_time, float * timer_value)
    ADD ESP,0xc                         ; 00504488
    MOV dword ptr [ESP + 0x3e84],EAX    ; 0050448b
    TEST EAX,EAX                        ; 00504492
    JLE 0x004ff36b                      ; 00504494
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV byte ptr [EBX + 0x4c],0x0       ; 0050449a
    JMP 0x004ff36b                      ; 0050449e
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH 0x58f8bc                       ; 005044a3 | = "Error parsing time value"
        ;   Label: LAB_005044a3
    PUSH 0x1e56420                      ; 005044a8 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 005044ad
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 005044b2
    JMP 0x004ff43c                      ; 005044b5
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    ADD ESI,0xa                         ; 005044ba
        ;   Label: LAB_005044ba
    PUSH ESI                            ; 005044bd
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 005044be
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    MOV EDX,0xffffffff                  ; 005044c3
    ADD ESP,0x4                         ; 005044c8
    MOV dword ptr [ESP + 0x3edc],EDX    ; 005044cb
    LEA EDX,[ESP + 0x3edc]              ; 005044d2
    PUSH EDX                            ; 005044d9
    LEA EDX,[ESP + 0x1638]              ; 005044da
    PUSH EDX                            ; 005044e1
    LEA EDX,[ESP + 0xda4]               ; 005044e2
    PUSH EDX                            ; 005044e9
    PUSH 0x58f8e0                       ; 005044ea | = "(%[^,], %[^)])%n"
    PUSH EAX                            ; 005044ef
    MOV dword ptr [ESP + 0x3ea4],EAX    ; 005044f0
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 005044f7
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x14                        ; 005044fc
    MOV ECX,dword ptr [ESP + 0x3edc]    ; 005044ff
    CMP ECX,0x5                         ; 00504506
    JGE 0x00504522                      ; 00504509
        ;   XREF to: 00504522 (CONDITIONAL_JUMP)  ; LAB_00504522
    PUSH 0x58f8f1                       ; 0050450b | = "Error parsing turnToFace command parms"
    PUSH 0x1e56420                      ; 00504510 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00504515
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 0050451a
    JMP 0x004ff43c                      ; 0050451d
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV ESI,dword ptr [ESP + 0x3e90]    ; 00504522
        ;   Label: LAB_00504522
    LEA EAX,[ESP + 0xd9c]               ; 00504529
    ADD ESI,ECX                         ; 00504530
    PUSH EAX                            ; 00504532
    MOV dword ptr [ESP + 0x3e94],ESI    ; 00504533
    CALL core_script.cpp_trimString_FUN_004fe000 ; 0050453a
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 0050453f
    LEA EAX,[ESP + 0x1634]              ; 00504542
    PUSH EAX                            ; 00504549
    CALL core_script.cpp_trimString_FUN_004fe000 ; 0050454a
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 0050454f
    PUSH 0x765a60                       ; 00504552 | g_CCharacterActorType_00765a60
    MOV EDI,dword ptr [0x00765a98]      ; 00504557 | g_CCharacterActorType_00765a60.name_hash
    PUSH EDI                            ; 0050455d
    LEA EAX,[ESP + 0xda4]               ; 0050455e
    PUSH EAX                            ; 00504565
    CALL core_script.cpp_getActor_FUN_004fe180 ; 00504566
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV ESI,EAX                         ; 0050456b
    ADD ESP,0xc                         ; 0050456d
    TEST EAX,EAX                        ; 00504570
    JNZ 0x00504586                      ; 00504572
        ;   XREF to: 00504586 (CONDITIONAL_JUMP)  ; LAB_00504586
    CMP dword ptr [0x01e56c2c],0x0      ; 00504574 | DAT_01e56c2c
    JNZ 0x004ff384                      ; 0050457b
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 00504581
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    PUSH 0x763e48                       ; 00504586 | g_CDemonActorActorType_00763e48
        ;   Label: LAB_00504586
    MOV EAX,[0x00763e80]                ; 0050458b | g_CDemonActorActorType_00763e48.name_hash
    PUSH EAX                            ; 00504590
    LEA EAX,[ESP + 0x163c]              ; 00504591
    PUSH EAX                            ; 00504598
    CALL core_script.cpp_getActor_FUN_004fe180 ; 00504599
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0050459e
    TEST EAX,EAX                        ; 005045a1
    JNZ 0x005045b7                      ; 005045a3
        ;   XREF to: 005045b7 (CONDITIONAL_JUMP)  ; LAB_005045b7
    CMP dword ptr [0x01e56c2c],0x0      ; 005045a5 | DAT_01e56c2c
    JNZ 0x004ff384                      ; 005045ac
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 005045b2
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    CMP dword ptr [0x01e56418],0x0      ; 005045b7 | DAT_01e56418
        ;   Label: LAB_005045b7
    JNZ 0x004ff36b                      ; 005045be
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH EAX                            ; 005045c4
    MOV EDX,dword ptr [ESI + 0x14c]     ; 005045c5
    PUSH ESI                            ; 005045cb
    CALL dword ptr [EDX + 0x12c]        ; 005045cc
    ADD ESP,0x8                         ; 005045d2
    JMP 0x004ff36b                      ; 005045d5
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0x4                         ; 005045da
        ;   Label: LAB_005045da
    PUSH ESI                            ; 005045dd
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 005045de
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 005045e3
    LEA EDX,[ESP + 0x3f80]              ; 005045e6
    PUSH EDX                            ; 005045ed
    LEA EDX,[ESP + 0x3f88]              ; 005045ee
    PUSH EDX                            ; 005045f5
    PUSH 0x58f91d                       ; 005045f6 | = "(%f)%n"
    MOV EDI,0xffffffff                  ; 005045fb
    PUSH EAX                            ; 00504600
    MOV dword ptr [ESP + 0x3ea0],EAX    ; 00504601
    MOV dword ptr [ESP + 0x3f90],EDI    ; 00504608
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0050460f
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x10                        ; 00504614
    MOV EAX,dword ptr [ESP + 0x3f80]    ; 00504617
    CMP EAX,0x1                         ; 0050461e
    JL 0x00504661                       ; 00504621
        ;   XREF to: 00504661 (CONDITIONAL_JUMP)  ; LAB_00504661
    MOV EDX,dword ptr [ESP + 0x3e90]    ; 00504623
    ADD EDX,EAX                         ; 0050462a
    MOV ECX,dword ptr [0x01e56418]      ; 0050462c | DAT_01e56418
    MOV dword ptr [ESP + 0x3e90],EDX    ; 00504632
    TEST ECX,ECX                        ; 00504639
    JNZ 0x004ff36b                      ; 0050463b
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV ESI,dword ptr [EBP + 0x18]      ; 00504641
    PUSH ESI                            ; 00504644
    PUSH dword ptr [ESP + 0x3f88]       ; 00504645
    PUSH EBX                            ; 0050464c
    CALL core_script.cpp_CScript_processTimer_FUN_00504b70 ; 0050464d
        ;   XREF to: 00504b70 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_processTimer_FUN_00504b70(CScript * this_ptr, float delta_time, float * timer_value)
    ADD ESP,0xc                         ; 00504652
    MOV dword ptr [ESP + 0x3e84],EAX    ; 00504655
    JMP 0x004ff36b                      ; 0050465c
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH 0x58f924                       ; 00504661 | = "Error parsing time value on wait stat..."
        ;   Label: LAB_00504661
    PUSH 0x1e56420                      ; 00504666 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0050466b
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00504670
    JMP 0x004ff43c                      ; 00504673
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    ADD ESI,0x7                         ; 00504678
        ;   Label: LAB_00504678
    PUSH ESI                            ; 0050467b
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 0050467c
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 00504681
    MOV dword ptr [ESP + 0x3e90],EAX    ; 00504684
    LEA EAX,[ESP + 0x3524]              ; 0050468b
    PUSH EAX                            ; 00504692
    LEA EAX,[ESP + 0x3e94]              ; 00504693
    PUSH EAX                            ; 0050469a
    CALL core_script.cpp_parseConditionExpr_FUN_004fe140 ; 0050469b
        ;   XREF to: 004fe140 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseConditionExpr_FUN_004fe140(char * * cursor, char * out_buffer)
    ADD ESP,0x8                         ; 005046a0
    TEST EAX,EAX                        ; 005046a3
    JNZ 0x005043d6                      ; 005046a5
        ;   XREF to: 005043d6 (CONDITIONAL_JUMP)  ; LAB_005043d6
    CMP dword ptr [0x01e56418],0x0      ; 005046ab | DAT_01e56418
    JNZ 0x004ff36b                      ; 005046b2
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    LEA EAX,[ESP + 0x3524]              ; 005046b8
    PUSH EAX                            ; 005046bf
    MOV EAX,[0x005b7650]                ; 005046c0 | DAT_005b7650
    PUSH EAX                            ; 005046c5
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 005046c6
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005046cb
    TEST EAX,EAX                        ; 005046ce
    JNZ 0x004ff36b                      ; 005046d0
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV dword ptr [ESP + 0x3e84],EAX    ; 005046d6
    JMP 0x004ff36b                      ; 005046dd
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    ADD ESI,0x6                         ; 005046e2
        ;   Label: LAB_005046e2
    PUSH ESI                            ; 005046e5
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 005046e6
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_004fe070(char * str)
    ADD ESP,0x4                         ; 005046eb
    LEA EDX,[ESP + 0x3f88]              ; 005046ee
    PUSH EDX                            ; 005046f5
    LEA EDX,[ESP + 0x2e70]              ; 005046f6
    PUSH EDX                            ; 005046fd
    LEA EDX,[ESP + 0x1574]              ; 005046fe
    PUSH EDX                            ; 00504705
    PUSH 0x58f95e                       ; 00504706 | = "(%[^,], %[^,)] %n"
    MOV ECX,0xffffffff                  ; 0050470b
    PUSH EAX                            ; 00504710
    MOV dword ptr [ESP + 0x3ea4],EAX    ; 00504711
    MOV dword ptr [ESP + 0x3f9c],ECX    ; 00504718
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0050471f
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x14                        ; 00504724
    MOV ESI,dword ptr [ESP + 0x3f88]    ; 00504727
    CMP ESI,0x5                         ; 0050472e
    JGE 0x0050474a                      ; 00504731
        ;   XREF to: 0050474a (CONDITIONAL_JUMP)  ; LAB_0050474a
    PUSH 0x58f970                       ; 00504733 | = "Error parsing walkTo command parms"
    PUSH 0x1e56420                      ; 00504738 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0050473d
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00504742
    JMP 0x004ff43c                      ; 00504745
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    MOV EDI,dword ptr [ESP + 0x3e90]    ; 0050474a
        ;   Label: LAB_0050474a
    LEA EAX,[ESP + 0x156c]              ; 00504751
    ADD EDI,ESI                         ; 00504758
    PUSH EAX                            ; 0050475a
    MOV dword ptr [ESP + 0x3e94],EDI    ; 0050475b
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00504762
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00504767
    LEA EAX,[ESP + 0x2e6c]              ; 0050476a
    PUSH EAX                            ; 00504771
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00504772
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_004fe000(char * str)
    ADD ESP,0x4                         ; 00504777
    XOR EAX,EAX                         ; 0050477a
    MOV dword ptr [ESP + 0x3e88],EAX    ; 0050477c
    MOV EAX,dword ptr [ESP + 0x3e90]    ; 00504783
    CMP byte ptr [EAX],0x2c             ; 0050478a
    JNZ 0x005047d3                      ; 0050478d
        ;   XREF to: 005047d3 (CONDITIONAL_JUMP)  ; LAB_005047d3
    LEA EAX,[ESP + 0x3f88]              ; 0050478f
    PUSH EAX                            ; 00504796
    LEA EAX,[ESP + 0x3e8c]              ; 00504797
    PUSH EAX                            ; 0050479e
    PUSH 0x58f993                       ; 0050479f | = ",%f %n"
    MOV ECX,dword ptr [ESP + 0x3e9c]    ; 005047a4
    MOV EDX,0xffffffff                  ; 005047ab
    PUSH ECX                            ; 005047b0
    MOV dword ptr [ESP + 0x3f98],EDX    ; 005047b1
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 005047b8
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x10                        ; 005047bd
    MOV ESI,dword ptr [ESP + 0x3f88]    ; 005047c0
    CMP ESI,0x1                         ; 005047c7
    JL 0x00504811                       ; 005047ca
        ;   XREF to: 00504811 (CONDITIONAL_JUMP)  ; LAB_00504811
    ADD dword ptr [ESP + 0x3e90],ESI    ; 005047cc
    MOV dword ptr [ESP + 0x3f8c],0x501502f9 ; 005047d3
        ;   Label: LAB_005047d3
    MOV EAX,dword ptr [ESP + 0x3e90]    ; 005047de
    CMP byte ptr [EAX],0x2c             ; 005047e5
    JZ 0x00504828                       ; 005047e8
        ;   XREF to: 00504828 (CONDITIONAL_JUMP)  ; LAB_00504828
    MOV EAX,dword ptr [ESP + 0x3e90]    ; 005047ea
        ;   Label: LAB_005047ea
    CMP byte ptr [EAX],0x29             ; 005047f1
    JZ 0x00504888                       ; 005047f4
        ;   XREF to: 00504888 (CONDITIONAL_JUMP)  ; LAB_00504888
    PUSH 0x58f9e7                       ; 005047fa | = "Missing closing parenthesis on walkTo..."
    PUSH 0x1e56420                      ; 005047ff | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00504804
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00504809
    JMP 0x004ff43c                      ; 0050480c
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    PUSH 0x58f99a                       ; 00504811 | = "Error parsing walkTo command parms"
        ;   Label: LAB_00504811
    PUSH 0x1e56420                      ; 00504816 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0050481b
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00504820
    JMP 0x004ff43c                      ; 00504823
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    LEA EAX,[ESP + 0x3f88]              ; 00504828
        ;   Label: LAB_00504828
    PUSH EAX                            ; 0050482f
    LEA EAX,[ESP + 0x3f90]              ; 00504830
    PUSH EAX                            ; 00504837
    PUSH 0x58f9bd                       ; 00504838 | = ",%f %n"
    MOV ECX,dword ptr [ESP + 0x3e9c]    ; 0050483d
    MOV EDX,0xffffffff                  ; 00504844
    PUSH ECX                            ; 00504849
    MOV dword ptr [ESP + 0x3f98],EDX    ; 0050484a
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00504851
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x10                        ; 00504856
    MOV ESI,dword ptr [ESP + 0x3f88]    ; 00504859
    CMP ESI,0x1                         ; 00504860
    JL 0x00504871                       ; 00504863
        ;   XREF to: 00504871 (CONDITIONAL_JUMP)  ; LAB_00504871
    ADD dword ptr [ESP + 0x3e90],ESI    ; 00504865
    JMP 0x005047ea                      ; 0050486c
        ;   XREF to: 005047ea (UNCONDITIONAL_JUMP)  ; LAB_005047ea
    PUSH 0x58f9c4                       ; 00504871 | = "Error parsing walkTo command parms"
        ;   Label: LAB_00504871
    PUSH 0x1e56420                      ; 00504876 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0050487b
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00504880
    JMP 0x004ff43c                      ; 00504883
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    PUSH 0x765a60                       ; 00504888 | g_CCharacterActorType_00765a60
        ;   Label: LAB_00504888
    MOV EAX,[0x00765a98]                ; 0050488d | g_CCharacterActorType_00765a60.name_hash
    MOV EDX,dword ptr [ESP + 0x3e94]    ; 00504892
    PUSH EAX                            ; 00504899
    LEA EAX,[ESP + 0x1574]              ; 0050489a
    INC EDX                             ; 005048a1
    PUSH EAX                            ; 005048a2
    MOV dword ptr [ESP + 0x3e9c],EDX    ; 005048a3
    CALL core_script.cpp_getActor_FUN_004fe180 ; 005048aa
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV ESI,EAX                         ; 005048af
    ADD ESP,0xc                         ; 005048b1
    TEST EAX,EAX                        ; 005048b4
    JNZ 0x005048ca                      ; 005048b6
        ;   XREF to: 005048ca (CONDITIONAL_JUMP)  ; LAB_005048ca
    CMP dword ptr [0x01e56c2c],0x0      ; 005048b8 | DAT_01e56c2c
    JNZ 0x004ff384                      ; 005048bf
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 005048c5
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    PUSH 0x763e48                       ; 005048ca | g_CDemonActorActorType_00763e48
        ;   Label: LAB_005048ca
    MOV ECX,dword ptr [0x00763e80]      ; 005048cf | g_CDemonActorActorType_00763e48.name_hash
    PUSH ECX                            ; 005048d5
    LEA EAX,[ESP + 0x2e74]              ; 005048d6
    PUSH EAX                            ; 005048dd
    CALL core_script.cpp_getActor_FUN_004fe180 ; 005048de
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_004fe180(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 005048e3
    TEST EAX,EAX                        ; 005048e6
    JNZ 0x005048fc                      ; 005048e8
        ;   XREF to: 005048fc (CONDITIONAL_JUMP)  ; LAB_005048fc
    CMP dword ptr [0x01e56c2c],0x0      ; 005048ea | DAT_01e56c2c
    JNZ 0x004ff384                      ; 005048f1
        ;   XREF to: 004ff384 (CONDITIONAL_JUMP)  ; LAB_004ff384
    JMP 0x004ff43c                      ; 005048f7
        ;   XREF to: 004ff43c (UNCONDITIONAL_JUMP)  ; LAB_004ff43c
    CMP dword ptr [0x01e56418],0x0      ; 005048fc | DAT_01e56418
        ;   Label: LAB_005048fc
    JNZ 0x004ff36b                      ; 00504903
        ;   XREF to: 004ff36b (CONDITIONAL_JUMP)  ; LAB_004ff36b
    PUSH dword ptr [ESP + 0x3f8c]       ; 00504909
    PUSH dword ptr [ESP + 0x3e8c]       ; 00504910
    PUSH EAX                            ; 00504917
    MOV EDX,dword ptr [ESI + 0x14c]     ; 00504918
    PUSH ESI                            ; 0050491e
    CALL dword ptr [EDX + 0x128]        ; 0050491f
    ADD ESP,0x10                        ; 00504925
    JMP 0x004ff36b                      ; 00504928
        ;   XREF to: 004ff36b (UNCONDITIONAL_JUMP)  ; LAB_004ff36b
    MOV EBX,dword ptr [ESP + 0x3e8c]    ; 0050492d
        ;   Label: LAB_0050492d
    PUSH EBX                            ; 00504934
    PUSH EAX                            ; 00504935 | CHAR_00h_0058e552
    PUSH 0x58fa32                       ; 00504936 | = "Extra characters \"%s\" on line %d"
    PUSH 0x1e56420                      ; 0050493b | DAT_01e56420
    MOV EDI,0xffffffff                  ; 00504940
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00504945
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 0050494a
    MOV dword ptr [ESP + 0x3e84],EDI    ; 0050494d
    MOV EAX,dword ptr [ESP + 0x3e84]    ; 00504954
    MOV ESP,EBP                         ; 0050495b
    POP EBP                             ; 0050495d
    POP EDI                             ; 0050495e
    POP ESI                             ; 0050495f
    POP EBX                             ; 00504960
    RET                                 ; 00504961
    PUSH 0x58fa53                       ; 00504962 | = "Overrun past the end of the script."
        ;   Label: LAB_00504962
    PUSH 0x1e56420                      ; 00504967 | DAT_01e56420
    MOV EDI,0xffffffff                  ; 0050496c
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00504971
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 00504976
    MOV dword ptr [ESP + 0x3e84],EDI    ; 00504979
    MOV EAX,dword ptr [ESP + 0x3e84]    ; 00504980
    MOV ESP,EBP                         ; 00504987
    POP EBP                             ; 00504989
    POP EDI                             ; 0050498a
    POP ESI                             ; 0050498b
    POP EBX                             ; 0050498c
    RET                                 ; 0050498d
    TEST EAX,EAX                        ; 0050498e
        ;   Label: LAB_0050498e
    JL 0x004ff3b8                       ; 00504990
        ;   XREF to: 004ff3b8 (CONDITIONAL_JUMP)  ; LAB_004ff3b8
    MOV EAX,dword ptr [ESP + 0x3e94]    ; 00504996
    MOV dword ptr [EBX + 0x40],EAX      ; 0050499d
    MOV EAX,dword ptr [ESP + 0x3e84]    ; 005049a0
    MOV ESP,EBP                         ; 005049a7
    POP EBP                             ; 005049a9
    POP EDI                             ; 005049aa
    POP ESI                             ; 005049ab
    POP EBX                             ; 005049ac
    RET                                 ; 005049ad


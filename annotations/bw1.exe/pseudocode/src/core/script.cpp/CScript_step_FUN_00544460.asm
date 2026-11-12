; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_CScript_step_FUN_00544460(CScript *this_ptr,float *time_remaining)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; float *          Stack[0x8]:4   time_remaining
; Local Variables:
; undefined4       Stack[-0x4968]:4  local_4968
; undefined4       Stack[-0x4964]:4  local_4964
; undefined4       Stack[-0x4960]:4  local_4960
; undefined4       Stack[-0x495c]:4  local_495c
; undefined8       Stack[-0x4958]:8  local_4958
; undefined8       Stack[-0x4950]:8  local_4950
; undefined8       Stack[-0x4948]:8  local_4948
; undefined8       Stack[-0x4940]:8  local_4940
; undefined4       Stack[-0x4938]:4  local_4938
; undefined4       Stack[-0x4934]:4  local_4934
; undefined4       Stack[-0x4930]:4  local_4930
; undefined4       Stack[-0x492c]:4  local_492c
; undefined4       Stack[-0x4928]:4  local_4928
; undefined        Stack[-0x4924]:1  local_4924
; undefined        Stack[-0x4720]:1  local_4720
; undefined        Stack[-0x451c]:1  local_451c
; undefined        Stack[-0x4328]:1  local_4328
; undefined        Stack[-0x4134]:1  local_4134
; undefined        Stack[-0x4008]:1  local_4008
; undefined        Stack[-0x3edc]:1  local_3edc
; undefined        Stack[-0x3db0]:1  local_3db0
; undefined        Stack[-0x3cac]:1  local_3cac
; undefined        Stack[-0x3bac]:1  local_3bac
; undefined1       Stack[-0x3bab]:1  local_3bab
; undefined        Stack[-0x3aac]:1  local_3aac
; undefined        Stack[-0x39ac]:1  local_39ac
; undefined        Stack[-0x38bc]:1  local_38bc
; undefined        Stack[-0x37f4]:1  local_37f4
; undefined        Stack[-0x372c]:1  local_372c
; undefined        Stack[-0x3664]:1  local_3664
; undefined        Stack[-0x359c]:1  local_359c
; undefined        Stack[-0x34d4]:1  local_34d4
; undefined        Stack[-0x340c]:1  local_340c
; undefined        Stack[-0x3344]:1  local_3344
; undefined        Stack[-0x327c]:1  local_327c
; undefined        Stack[-0x31b4]:1  local_31b4
; undefined1       Stack[-0x31b3]:1  local_31b3
; undefined        Stack[-0x30ec]:1  local_30ec
; undefined        Stack[-0x3024]:1  local_3024
; undefined        Stack[-0x2f5c]:1  local_2f5c
; undefined        Stack[-0x2e94]:1  local_2e94
; undefined        Stack[-0x2dcc]:1  local_2dcc
; undefined        Stack[-0x2d04]:1  local_2d04
; undefined        Stack[-0x2c3c]:1  local_2c3c
; undefined        Stack[-0x2b74]:1  local_2b74
; undefined        Stack[-0x2aac]:1  local_2aac
; undefined        Stack[-0x29e4]:1  local_29e4
; undefined        Stack[-0x291c]:1  local_291c
; undefined        Stack[-0x2854]:1  local_2854
; undefined        Stack[-0x278c]:1  local_278c
; undefined        Stack[-0x26c4]:1  local_26c4
; undefined        Stack[-0x25fc]:1  local_25fc
; undefined        Stack[-0x2534]:1  local_2534
; undefined        Stack[-0x246c]:1  local_246c
; undefined        Stack[-0x23a4]:1  local_23a4
; undefined        Stack[-0x22dc]:1  local_22dc
; undefined        Stack[-0x2214]:1  local_2214
; undefined        Stack[-0x214c]:1  local_214c
; undefined        Stack[-0x2084]:1  local_2084
; undefined        Stack[-0x1fbc]:1  local_1fbc
; undefined        Stack[-0x1ef4]:1  local_1ef4
; undefined        Stack[-0x1e2c]:1  local_1e2c
; undefined        Stack[-0x1d64]:1  local_1d64
; undefined        Stack[-0x1c9c]:1  local_1c9c
; undefined        Stack[-0x1bd4]:1  local_1bd4
; undefined        Stack[-0x1b0c]:1  local_1b0c
; undefined        Stack[-0x1a44]:1  local_1a44
; undefined        Stack[-0x197c]:1  local_197c
; undefined        Stack[-0x18b4]:1  local_18b4
; undefined        Stack[-0x17ec]:1  local_17ec
; undefined        Stack[-0x1724]:1  local_1724
; undefined        Stack[-0x165c]:1  local_165c
; undefined        Stack[-0x1594]:1  local_1594
; undefined        Stack[-0x14cc]:1  local_14cc
; undefined        Stack[-0x1404]:1  local_1404
; undefined        Stack[-0x133c]:1  local_133c
; undefined        Stack[-0x1274]:1  local_1274
; undefined        Stack[-0x11ac]:1  local_11ac
; undefined        Stack[-0x10e4]:1  local_10e4
; undefined1       Stack[-0x10e3]:1  local_10e3
; undefined        Stack[-0x101c]:1  local_101c
; undefined        Stack[-0xf54]:1  local_f54
; undefined        Stack[-0xe8c]:1  local_e8c
; undefined        Stack[-0xdc4]:1  local_dc4
; undefined        Stack[-0xcfc]:1  local_cfc
; undefined        Stack[-0xc98]:1  local_c98
; undefined        Stack[-0xc34]:1  local_c34
; undefined        Stack[-0xbd0]:1  local_bd0
; undefined        Stack[-0xb6c]:1  local_b6c
; undefined        Stack[-0xb08]:1  local_b08
; undefined1       Stack[-0xb07]:1  local_b07
; undefined        Stack[-0xaa4]:1  local_aa4
; undefined        Stack[-0xa40]:1  local_a40
; undefined        Stack[-0x9dc]:1  local_9dc
; undefined        Stack[-0x978]:1  local_978
; undefined        Stack[-0x914]:1  local_914
; undefined        Stack[-0x8b0]:1  local_8b0
; undefined        Stack[-0x84c]:1  local_84c
; undefined        Stack[-0x7e8]:1  local_7e8
; undefined        Stack[-0x784]:1  local_784
; undefined        Stack[-0x720]:1  local_720
; undefined        Stack[-0x6bc]:1  local_6bc
; undefined        Stack[-0x658]:1  local_658
; undefined        Stack[-0x5f4]:1  local_5f4
; undefined        Stack[-0x590]:1  local_590
; undefined        Stack[-0x52c]:1  local_52c
; undefined1       Stack[-0x52b]:1  local_52b
; undefined        Stack[-0x4c8]:1  local_4c8
; undefined        Stack[-0x464]:1  local_464
; undefined        Stack[-0x400]:1  local_400
; undefined        Stack[-0x39c]:1  local_39c
; undefined1       Stack[-0x39b]:1  local_39b
; undefined        Stack[-0x338]:1  local_338
; undefined        Stack[-0x2d4]:1  local_2d4
; undefined        Stack[-0x270]:1  local_270
; undefined        Stack[-0x20c]:1  local_20c
; undefined        Stack[-0x1e4]:1  local_1e4
; undefined        Stack[-0x1d8]:1  local_1d8
; undefined        Stack[-0x1cc]:1  local_1cc
; undefined4       Stack[-0x1c8]:4  local_1c8
; undefined        Stack[-0x1c0]:1  local_1c0
; undefined        Stack[-0x1b4]:1  local_1b4
; undefined        Stack[-0x1a8]:1  local_1a8
; undefined        Stack[-0x19c]:1  local_19c
; undefined        Stack[-0x198]:1  local_198
; undefined        Stack[-0x194]:1  local_194
; undefined        Stack[-0x190]:1  local_190
; undefined        Stack[-0x184]:1  local_184
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined        Stack[-0x11c]:1  local_11c
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
;   core_script.cpp_CScript_executeInitSection_FUN_00544310 at 00544386
;   core_script.cpp_CScript_process_FUN_005437f0 at 005438a1
;   core_script.cpp_CScript_skipCinematic_FUN_0054ae40 at 0054ae9d
;   core_script.cpp_FUN_00544100 at 0054414d
;
; Referenced Globals:
;   TerminatedCString s_core_script_cpp_005ee3bd
;   TerminatedCString s_CScript_step_Invalid_ins_005ee3d0
;   TerminatedCString s_no_error_message_provide_005ee46a
;   undefined4 s_no_error_message_provide_005ee46a+1
;   undefined4 s_no_error_message_provide_005ee46a+2
;   undefined4 s_no_error_message_provide_005ee46a+3
;   undefined1 DAT_005ee486
;   TerminatedCString s_Invalid_label_s_on_line_005ee487
;   TerminatedCString s_core_script_cpp_005ee4a2
;   TerminatedCString s_Internal_script_error_ch_005ee4b5
;   TerminatedCString s_Duplicate_label_s_on_lin_005ee4e9
;   undefined1 DAT_005ee50f
;   TerminatedCString s_syntaxCheckOn_005ee510
;   undefined1 DAT_005ee51e
;   TerminatedCString s_syntaxCheckOff_005ee51f
;   ... and 374 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_actor.cpp_CVector3f_ctor_FUN_0040cfe0
;   core_actor.cpp_FUN_0040cff0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_isOfClass_FUN_0040c550
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90
;   core_bodypart.cpp_createBodyPart_FUN_00418940
;   core_bodypart.cpp_FUN_0041afe0
;   core_bugs.cpp_FUN_00428120
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210
;   core_charactr.cpp_CCharacter_initGesture_FUN_00432c70
;   core_charactr.cpp_CCharacter_setLookAtTarget_FUN_00433c50
;   core_charactr.cpp_FUN_0042e8e0
;   core_charactr.cpp_FUN_0042e920
;   ... and 80 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544460
        ;   Label: core_script.cpp_CScript_step_FUN_00544460
    PUSH ESI                            ; 00544461
    PUSH EDI                            ; 00544462
    PUSH EBP                            ; 00544463
    MOV EBP,ESP                         ; 00544464
    SUB ESP,0x4948                      ; 00544466
    AND ESP,0xfffffff8                  ; 0054446c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054446f
    MOV EDX,dword ptr [EBX + 0x44]      ; 00544472
    TEST EDX,EDX                        ; 00544475
    JL 0x0054447e                       ; 00544477
        ;   XREF to: 0054447e (CONDITIONAL_JUMP)  ; LAB_0054447e
    CMP EDX,dword ptr [EBX + 0x2c]      ; 00544479
    JL 0x005444a1                       ; 0054447c
        ;   XREF to: 005444a1 (CONDITIONAL_JUMP)  ; LAB_005444a1
    MOV ESI,0x5ee3bd                    ; 0054447e | = "..\\core\\script.cpp"
        ;   Label: LAB_0054447e
    MOV EDI,0x47b                       ; 00544483
    PUSH 0x5ee3d0                       ; 00544488 | = "CScript::step - Invalid instruction p..."
    MOV dword ptr [0x01d1d400],ESI      ; 0054448d | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00544493 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00544499
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0054449e
    MOV ESI,0x5ee46a                    ; 005444a1 | = "(no error message provided)"
        ;   Label: LAB_005444a1
    MOV EDI,0x1e810b0                   ; 005444a6
    PUSH EDI                            ; 005444ab | DAT_01e810b0
    MOV AL,byte ptr [ESI]               ; 005444ac | = "(no error message provided)" | s_no_error_message_provide_005ee46a+2
        ;   Label: LAB_005444ac
    MOV byte ptr [EDI],AL               ; 005444ae | DAT_01e810b0 | DAT_01e810b2
    CMP AL,0x0                          ; 005444b0
    JZ 0x005444c4                       ; 005444b2
        ;   XREF to: 005444c4 (CONDITIONAL_JUMP)  ; LAB_005444c4
    MOV AL,byte ptr [ESI + 0x1]         ; 005444b4 | s_no_error_message_provide_005ee46a+1 | s_no_error_message_provide_005ee46a+3
    ADD ESI,0x2                         ; 005444b7
    MOV byte ptr [EDI + 0x1],AL         ; 005444ba | DAT_01e810b1 | DAT_01e810b3
    ADD EDI,0x2                         ; 005444bd
    CMP AL,0x0                          ; 005444c0
    JNZ 0x005444ac                      ; 005444c2
        ;   XREF to: 005444ac (CONDITIONAL_JUMP)  ; LAB_005444ac
    POP EDI                             ; 005444c4
        ;   Label: LAB_005444c4
    MOV EAX,dword ptr [EBX + 0x44]      ; 005444c5
    MOV EDX,dword ptr [EBX + 0x30]      ; 005444c8
    MOV ESI,dword ptr [EDX + EAX*0x8 + 0x4] ; 005444cb
    MOV EAX,dword ptr [EDX + EAX*0x8]   ; 005444cf
    MOV dword ptr [ESP + 0x47f0],EAX    ; 005444d2
    MOV EAX,dword ptr [EBX + 0x44]      ; 005444d9
    MOV dword ptr [ESP + 0x4928],EAX    ; 005444dc
    MOV dword ptr [ESP + 0x47f4],0x1    ; 005444e3
    MOV EAX,dword ptr [ESP + 0x4928]    ; 005444ee
    INC EAX                             ; 005444f5
    MOV dword ptr [EBX + 0x44],EAX      ; 005444f6
    MOV AH,byte ptr [ESI]               ; 005444f9
    CMP AH,0x7b                         ; 005444fb
    JNZ 0x00544566                      ; 005444fe
        ;   XREF to: 00544566 (CONDITIONAL_JUMP)  ; LAB_00544566
    MOV dword ptr [ESP + 0x4924],0x5ee486 ; 00544500 | DAT_005ee486
        ;   Label: LAB_00544500
    CMP dword ptr [0x01e810a8],0x2      ; 0054450b | DAT_01e810a8
        ;   Label: LAB_0054450b
    JZ 0x00544524                       ; 00544512
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    MOV EAX,dword ptr [ESP + 0x4924]    ; 00544514
    CMP byte ptr [EAX],0x0              ; 0054451b | DAT_005ee486 | DAT_005ee50f | DAT_005eefc3
    JNZ 0x0054a9dc                      ; 0054451e
        ;   XREF to: 0054a9dc (CONDITIONAL_JUMP)  ; LAB_0054a9dc
    MOV ECX,dword ptr [ESP + 0x47f4]    ; 00544524
        ;   Label: LAB_00544524
    CMP ECX,0x1                         ; 0054452b
    JNZ 0x0054aa3d                      ; 0054452e
        ;   XREF to: 0054aa3d (CONDITIONAL_JUMP)  ; LAB_0054aa3d
    MOV dword ptr [EBX + 0x4c],0xbf800000 ; 00544534
    MOV EDI,dword ptr [0x01e810a8]      ; 0054453b | DAT_01e810a8
    MOV dword ptr [EBX + 0x48],0xbf800000 ; 00544541
    TEST EDI,EDI                        ; 00544548
    JNZ 0x00544558                      ; 0054454a
        ;   XREF to: 00544558 (CONDITIONAL_JUMP)  ; LAB_00544558
    MOV EDX,dword ptr [EBX + 0x2c]      ; 0054454c
    CMP EDX,dword ptr [EBX + 0x44]      ; 0054454f
    JLE 0x0054aa11                      ; 00544552
        ;   XREF to: 0054aa11 (CONDITIONAL_JUMP)  ; LAB_0054aa11
    MOV EAX,dword ptr [ESP + 0x47f4]    ; 00544558
        ;   Label: LAB_00544558
    MOV ESP,EBP                         ; 0054455f
    POP EBP                             ; 00544561
    POP EDI                             ; 00544562
    POP ESI                             ; 00544563
    POP EBX                             ; 00544564
    RET                                 ; 00544565
    CMP AH,0x7d                         ; 00544566
        ;   Label: LAB_00544566
    JZ 0x00544500                       ; 00544569
        ;   XREF to: 00544500 (CONDITIONAL_JUMP)  ; LAB_00544500
    CMP AH,0x3a                         ; 0054456b
    JNZ 0x0054467e                      ; 0054456e
        ;   XREF to: 0054467e (CONDITIONAL_JUMP)  ; LAB_0054467e
    INC ESI                             ; 00544574
    PUSH ESI                            ; 00544575
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00544576
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    MOV ESI,dword ptr [0x01e810a8]      ; 0054457b | DAT_01e810a8
    ADD ESP,0x4                         ; 00544581
    MOV EDX,EAX                         ; 00544584
    MOV dword ptr [ESP + 0x4924],EAX    ; 00544586
    TEST ESI,ESI                        ; 0054458d
    JZ 0x0054461c                       ; 0054458f
        ;   XREF to: 0054461c (CONDITIONAL_JUMP)  ; LAB_0054461c
    CMP byte ptr [EAX],0x0              ; 00544595
    JZ 0x005445b5                       ; 00544598
        ;   XREF to: 005445b5 (CONDITIONAL_JUMP)  ; LAB_005445b5
    MOV DL,byte ptr [EAX]               ; 0054459a
        ;   Label: LAB_0054459a
    INC DL                              ; 0054459c
    AND EDX,0xff                        ; 0054459e
    TEST byte ptr [EDX + 0x626114],0xe0 ; 005445a4 | DAT_00626114
    JZ 0x005445f5                       ; 005445ab
        ;   XREF to: 005445f5 (CONDITIONAL_JUMP)  ; LAB_005445f5
    MOV CH,byte ptr [EAX + 0x1]         ; 005445ad
        ;   Label: LAB_005445ad
    INC EAX                             ; 005445b0
    TEST CH,CH                          ; 005445b1
    JNZ 0x0054459a                      ; 005445b3
        ;   XREF to: 0054459a (CONDITIONAL_JUMP)  ; LAB_0054459a
    CMP byte ptr [EAX],0x0              ; 005445b5
        ;   Label: LAB_005445b5
    JZ 0x005445fc                       ; 005445b8
        ;   XREF to: 005445fc (CONDITIONAL_JUMP)  ; LAB_005445fc
    MOV EDI,dword ptr [ESP + 0x47f0]    ; 005445ba
    PUSH EDI                            ; 005445c1
    MOV EAX,dword ptr [ESP + 0x4928]    ; 005445c2
    PUSH EAX                            ; 005445c9
    PUSH 0x5ee487                       ; 005445ca | = "Invalid label \"%s\" on line"
    PUSH 0x1e810b0                      ; 005445cf | DAT_01e810b0
        ;   Label: LAB_005445cf
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005445d4
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 005445d9
    MOV dword ptr [ESP + 0x47f4],0xffffffff ; 005445dc
        ;   Label: LAB_005445dc
    MOV EAX,dword ptr [ESP + 0x47f4]    ; 005445e7
    MOV ESP,EBP                         ; 005445ee
    POP EBP                             ; 005445f0
    POP EDI                             ; 005445f1
    POP ESI                             ; 005445f2
    POP EBX                             ; 005445f3
    RET                                 ; 005445f4
    CMP byte ptr [EAX],0x5f             ; 005445f5
        ;   Label: LAB_005445f5
    JNZ 0x005445b5                      ; 005445f8
        ;   XREF to: 005445b5 (CONDITIONAL_JUMP)  ; LAB_005445b5
    JMP 0x005445ad                      ; 005445fa
        ;   XREF to: 005445ad (UNCONDITIONAL_JUMP)  ; LAB_005445ad
    MOV ECX,dword ptr [ESP + 0x4924]    ; 005445fc
        ;   Label: LAB_005445fc
    PUSH ECX                            ; 00544603
    PUSH EBX                            ; 00544604
    CALL core_script.cpp_CScript_findLabelIndex_FUN_0054acc0 ; 00544605
        ;   XREF to: 0054acc0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_findLabelIndex_FUN_0054acc0(CScript * this_ptr, char * label_name)
    ADD ESP,0x8                         ; 0054460a
    MOV ESI,EAX                         ; 0054460d
    TEST EAX,EAX                        ; 0054460f
    JL 0x0054462c                       ; 00544611
        ;   XREF to: 0054462c (CONDITIONAL_JUMP)  ; LAB_0054462c
    CMP ESI,dword ptr [ESP + 0x4928]    ; 00544613
        ;   Label: LAB_00544613
    JNZ 0x00544650                      ; 0054461a
        ;   XREF to: 00544650 (CONDITIONAL_JUMP)  ; LAB_00544650
    MOV dword ptr [ESP + 0x4924],0x5ee50f ; 0054461c | DAT_005ee50f
        ;   Label: LAB_0054461c
    JMP 0x0054450b                      ; 00544627
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EDI,0x5ee4a2                    ; 0054462c | = "..\\core\\script.cpp"
        ;   Label: LAB_0054462c
    MOV EAX,0x4ad                       ; 00544631
    PUSH 0x5ee4b5                       ; 00544636 | = "Internal script error checking for du..."
    MOV dword ptr [0x01d1d400],EDI      ; 0054463b | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00544641 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00544646
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0054464b
    JMP 0x00544613                      ; 0054464e
        ;   XREF to: 00544613 (UNCONDITIONAL_JUMP)  ; LAB_00544613
    MOV EAX,dword ptr [EBX + 0x30]      ; 00544650
        ;   Label: LAB_00544650
    MOV ECX,dword ptr [EAX + ESI*0x8]   ; 00544653
    PUSH ECX                            ; 00544656
    MOV EBX,dword ptr [ESP + 0x47f4]    ; 00544657
    PUSH EBX                            ; 0054465e
    MOV ESI,dword ptr [ESP + 0x492c]    ; 0054465f
    PUSH ESI                            ; 00544666
    PUSH 0x5ee4e9                       ; 00544667 | = "Duplicate label %s on lines %d and %d"
    PUSH 0x1e810b0                      ; 0054466c | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00544671
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x14                        ; 00544676
    JMP 0x005445dc                      ; 00544679
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    PUSH 0xd                            ; 0054467e
        ;   Label: LAB_0054467e
    PUSH 0x5ee510                       ; 00544680 | = "syntaxCheckOn"
    PUSH ESI                            ; 00544685
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544686
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054468b
    TEST EAX,EAX                        ; 0054468e
    JNZ 0x005446a9                      ; 00544690
        ;   XREF to: 005446a9 (CONDITIONAL_JUMP)  ; LAB_005446a9
    MOV AL,byte ptr [ESI + 0xd]         ; 00544692
    INC AL                              ; 00544695
    AND EAX,0xff                        ; 00544697
    TEST byte ptr [EAX + 0x626114],0xe0 ; 0054469c | DAT_00626114
    JZ 0x00545b47                       ; 005446a3
        ;   XREF to: 00545b47 (CONDITIONAL_JUMP)  ; LAB_00545b47
    PUSH 0xe                            ; 005446a9
        ;   Label: LAB_005446a9
    PUSH 0x5ee51f                       ; 005446ab | = "syntaxCheckOff"
    PUSH ESI                            ; 005446b0
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005446b1
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005446b6
    TEST EAX,EAX                        ; 005446b9
    JNZ 0x005446d4                      ; 005446bb
        ;   XREF to: 005446d4 (CONDITIONAL_JUMP)  ; LAB_005446d4
    MOV AL,byte ptr [ESI + 0xe]         ; 005446bd
    INC AL                              ; 005446c0
    AND EAX,0xff                        ; 005446c2
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005446c7 | DAT_00626114
    JZ 0x00545b6a                       ; 005446ce
        ;   XREF to: 00545b6a (CONDITIONAL_JUMP)  ; LAB_00545b6a
    CMP dword ptr [0x01e810a8],0x2      ; 005446d4 | DAT_01e810a8
        ;   Label: LAB_005446d4
    JZ 0x0054450b                       ; 005446db
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH 0xe                            ; 005446e1
    PUSH 0x5ee52f                       ; 005446e3 | = "activateGadget"
    PUSH ESI                            ; 005446e8
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005446e9
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005446ee
    TEST EAX,EAX                        ; 005446f1
    JNZ 0x0054470c                      ; 005446f3
        ;   XREF to: 0054470c (CONDITIONAL_JUMP)  ; LAB_0054470c
    MOV AL,byte ptr [ESI + 0xe]         ; 005446f5
    INC AL                              ; 005446f8
    AND EAX,0xff                        ; 005446fa
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005446ff | DAT_00626114
    JZ 0x00545b8d                       ; 00544706
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0xe                            ; 0054470c
        ;   Label: LAB_0054470c
    PUSH 0x5ee53e                       ; 0054470e | = "activatePuzzle"
    PUSH ESI                            ; 00544713
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544714
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544719
    TEST EAX,EAX                        ; 0054471c
    JNZ 0x00544737                      ; 0054471e
        ;   XREF to: 00544737 (CONDITIONAL_JUMP)  ; LAB_00544737
    MOV AL,byte ptr [ESI + 0xe]         ; 00544720
    INC AL                              ; 00544723
    AND EAX,0xff                        ; 00544725
    TEST byte ptr [EAX + 0x626114],0xe0 ; 0054472a | DAT_00626114
    JZ 0x00545b8d                       ; 00544731
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0x11                           ; 00544737
        ;   Label: LAB_00544737
    PUSH 0x5ee54d                       ; 00544739 | = "addFieldNotesTask"
    PUSH ESI                            ; 0054473e
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054473f
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544744
    TEST EAX,EAX                        ; 00544747
    JNZ 0x00544762                      ; 00544749
        ;   XREF to: 00544762 (CONDITIONAL_JUMP)  ; LAB_00544762
    MOV AL,byte ptr [ESI + 0x11]        ; 0054474b
    INC AL                              ; 0054474e
    AND EAX,0xff                        ; 00544750
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544755 | DAT_00626114
    JZ 0x00545b8d                       ; 0054475c
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0x12                           ; 00544762
        ;   Label: LAB_00544762
    PUSH 0x5ee55f                       ; 00544764 | = "advanceLightFilter"
    PUSH ESI                            ; 00544769
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054476a
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054476f
    TEST EAX,EAX                        ; 00544772
    JNZ 0x0054478d                      ; 00544774
        ;   XREF to: 0054478d (CONDITIONAL_JUMP)  ; LAB_0054478d
    MOV AL,byte ptr [ESI + 0x12]        ; 00544776
    INC AL                              ; 00544779
    AND EAX,0xff                        ; 0054477b
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544780 | DAT_00626114
    JZ 0x00545b8d                       ; 00544787
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0xe                            ; 0054478d
        ;   Label: LAB_0054478d
    PUSH 0x5ee572                       ; 0054478f | = "beginCarryItem"
    PUSH ESI                            ; 00544794
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544795
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054479a
    TEST EAX,EAX                        ; 0054479d
    JNZ 0x005447b8                      ; 0054479f
        ;   XREF to: 005447b8 (CONDITIONAL_JUMP)  ; LAB_005447b8
    MOV AL,byte ptr [ESI + 0xe]         ; 005447a1
    INC AL                              ; 005447a4
    AND EAX,0xff                        ; 005447a6
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005447ab | DAT_00626114
    JZ 0x00545b8d                       ; 005447b2
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0x16                           ; 005447b8
        ;   Label: LAB_005447b8
    PUSH 0x5ee581                       ; 005447ba | = "completeFieldNotesTask"
    PUSH ESI                            ; 005447bf
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005447c0
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005447c5
    TEST EAX,EAX                        ; 005447c8
    JNZ 0x005447e3                      ; 005447ca
        ;   XREF to: 005447e3 (CONDITIONAL_JUMP)  ; LAB_005447e3
    MOV AL,byte ptr [ESI + 0x16]        ; 005447cc
    INC AL                              ; 005447cf
    AND EAX,0xff                        ; 005447d1
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005447d6 | DAT_00626114
    JZ 0x00545b8d                       ; 005447dd
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0xf                            ; 005447e3
        ;   Label: LAB_005447e3
    PUSH 0x5ee598                       ; 005447e5 | = "createExplosion"
    PUSH ESI                            ; 005447ea
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005447eb
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005447f0
    TEST EAX,EAX                        ; 005447f3
    JNZ 0x0054480e                      ; 005447f5
        ;   XREF to: 0054480e (CONDITIONAL_JUMP)  ; LAB_0054480e
    MOV AL,byte ptr [ESI + 0xf]         ; 005447f7
    INC AL                              ; 005447fa
    AND EAX,0xff                        ; 005447fc
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544801 | DAT_00626114
    JZ 0x00545b8d                       ; 00544808
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0xb                            ; 0054480e
        ;   Label: LAB_0054480e
    PUSH 0x5ee5a8                       ; 00544810 | = "deleteActor"
    PUSH ESI                            ; 00544815
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544816
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054481b
    TEST EAX,EAX                        ; 0054481e
    JNZ 0x00544839                      ; 00544820
        ;   XREF to: 00544839 (CONDITIONAL_JUMP)  ; LAB_00544839
    MOV AL,byte ptr [ESI + 0xb]         ; 00544822
    INC AL                              ; 00544825
    AND EAX,0xff                        ; 00544827
    TEST byte ptr [EAX + 0x626114],0xe0 ; 0054482c | DAT_00626114
    JZ 0x00545b8d                       ; 00544833
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0xd                            ; 00544839
        ;   Label: LAB_00544839
    PUSH 0x5ee5b4                       ; 0054483b | = "displayBitmap"
    PUSH ESI                            ; 00544840
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544841
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544846
    TEST EAX,EAX                        ; 00544849
    JNZ 0x00544864                      ; 0054484b
        ;   XREF to: 00544864 (CONDITIONAL_JUMP)  ; LAB_00544864
    MOV AL,byte ptr [ESI + 0xd]         ; 0054484d
    INC AL                              ; 00544850
    AND EAX,0xff                        ; 00544852
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544857 | DAT_00626114
    JZ 0x00545b8d                       ; 0054485e
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0x11                           ; 00544864
        ;   Label: LAB_00544864
    PUSH 0x5ee5c2                       ; 00544866 | = "displayFieldNotes"
    PUSH ESI                            ; 0054486b
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054486c
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544871
    TEST EAX,EAX                        ; 00544874
    JNZ 0x0054488f                      ; 00544876
        ;   XREF to: 0054488f (CONDITIONAL_JUMP)  ; LAB_0054488f
    MOV AL,byte ptr [ESI + 0x11]        ; 00544878
    INC AL                              ; 0054487b
    AND EAX,0xff                        ; 0054487d
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544882 | DAT_00626114
    JZ 0x00545b8d                       ; 00544889
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0x8                            ; 0054488f
        ;   Label: LAB_0054488f
    PUSH 0x5ee5d4                       ; 00544891 | = "dropItem"
    PUSH ESI                            ; 00544896
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544897
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054489c
    TEST EAX,EAX                        ; 0054489f
    JNZ 0x005448ba                      ; 005448a1
        ;   XREF to: 005448ba (CONDITIONAL_JUMP)  ; LAB_005448ba
    MOV AL,byte ptr [ESI + 0x8]         ; 005448a3
    INC AL                              ; 005448a6
    AND EAX,0xff                        ; 005448a8
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005448ad | DAT_00626114
    JZ 0x00545b8d                       ; 005448b4
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0xd                            ; 005448ba
        ;   Label: LAB_005448ba
    PUSH 0x5ee5dd                       ; 005448bc | = "hurtCharacter"
    PUSH ESI                            ; 005448c1
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005448c2
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005448c7
    TEST EAX,EAX                        ; 005448ca
    JNZ 0x005448e5                      ; 005448cc
        ;   XREF to: 005448e5 (CONDITIONAL_JUMP)  ; LAB_005448e5
    MOV AL,byte ptr [ESI + 0xd]         ; 005448ce
    INC AL                              ; 005448d1
    AND EAX,0xff                        ; 005448d3
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005448d8 | DAT_00626114
    JZ 0x00545b8d                       ; 005448df
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0xa                            ; 005448e5
        ;   Label: LAB_005448e5
    PUSH 0x5ee5eb                       ; 005448e7 | = "incCounter"
    PUSH ESI                            ; 005448ec
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005448ed
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005448f2
    TEST EAX,EAX                        ; 005448f5
    JNZ 0x00544910                      ; 005448f7
        ;   XREF to: 00544910 (CONDITIONAL_JUMP)  ; LAB_00544910
    MOV AL,byte ptr [ESI + 0xa]         ; 005448f9
    INC AL                              ; 005448fc
    AND EAX,0xff                        ; 005448fe
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544903 | DAT_00626114
    JZ 0x00545b8d                       ; 0054490a
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0xa                            ; 00544910
        ;   Label: LAB_00544910
    PUSH 0x5ee5f6                       ; 00544912 | = "decCounter"
    PUSH ESI                            ; 00544917
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544918
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054491d
    TEST EAX,EAX                        ; 00544920
    JNZ 0x0054493b                      ; 00544922
        ;   XREF to: 0054493b (CONDITIONAL_JUMP)  ; LAB_0054493b
    MOV AL,byte ptr [ESI + 0xa]         ; 00544924
    INC AL                              ; 00544927
    AND EAX,0xff                        ; 00544929
    TEST byte ptr [EAX + 0x626114],0xe0 ; 0054492e | DAT_00626114
    JZ 0x00545b8d                       ; 00544935
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0x15                           ; 0054493b
        ;   Label: LAB_0054493b
    PUSH 0x5ee601                       ; 0054493d | = "enableFieldNotesEntry"
    PUSH ESI                            ; 00544942
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544943
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544948
    TEST EAX,EAX                        ; 0054494b
    JNZ 0x00544966                      ; 0054494d
        ;   XREF to: 00544966 (CONDITIONAL_JUMP)  ; LAB_00544966
    MOV AL,byte ptr [ESI + 0x15]        ; 0054494f
    INC AL                              ; 00544952
    AND EAX,0xff                        ; 00544954
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544959 | DAT_00626114
    JZ 0x00545b8d                       ; 00544960
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0x1a                           ; 00544966
        ;   Label: LAB_00544966
    PUSH 0x5ee617                       ; 00544968 | = "enableFieldNotesAnnotation"
    PUSH ESI                            ; 0054496d
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054496e
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544973
    TEST EAX,EAX                        ; 00544976
    JNZ 0x00544991                      ; 00544978
        ;   XREF to: 00544991 (CONDITIONAL_JUMP)  ; LAB_00544991
    MOV AL,byte ptr [ESI + 0x1a]        ; 0054497a
    INC AL                              ; 0054497d
    AND EAX,0xff                        ; 0054497f
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544984 | DAT_00626114
    JZ 0x00545b8d                       ; 0054498b
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0x7                            ; 00544991
        ;   Label: LAB_00544991
    PUSH 0x5ee632                       ; 00544993 | = "fadeSfx"
    PUSH ESI                            ; 00544998
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544999
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054499e
    TEST EAX,EAX                        ; 005449a1
    JNZ 0x005449bc                      ; 005449a3
        ;   XREF to: 005449bc (CONDITIONAL_JUMP)  ; LAB_005449bc
    MOV AL,byte ptr [ESI + 0x7]         ; 005449a5
    INC AL                              ; 005449a8
    AND EAX,0xff                        ; 005449aa
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005449af | DAT_00626114
    JZ 0x00545b8d                       ; 005449b6
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0x10                           ; 005449bc
        ;   Label: LAB_005449bc
    PUSH 0x5ee63a                       ; 005449be | = "fadeAmbientSound"
    PUSH ESI                            ; 005449c3
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005449c4
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005449c9
    TEST EAX,EAX                        ; 005449cc
    JNZ 0x005449e7                      ; 005449ce
        ;   XREF to: 005449e7 (CONDITIONAL_JUMP)  ; LAB_005449e7
    MOV AL,byte ptr [ESI + 0x10]        ; 005449d0
    INC AL                              ; 005449d3
    AND EAX,0xff                        ; 005449d5
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005449da | DAT_00626114
    JZ 0x00545b8d                       ; 005449e1
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0x6                            ; 005449e7
        ;   Label: LAB_005449e7
    PUSH 0x5ee64b                       ; 005449e9 | = "flagOn"
    PUSH ESI                            ; 005449ee
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005449ef
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005449f4
    TEST EAX,EAX                        ; 005449f7
    JNZ 0x00544a12                      ; 005449f9
        ;   XREF to: 00544a12 (CONDITIONAL_JUMP)  ; LAB_00544a12
    MOV AL,byte ptr [ESI + 0x6]         ; 005449fb
    INC AL                              ; 005449fe
    AND EAX,0xff                        ; 00544a00
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544a05 | DAT_00626114
    JZ 0x00545b8d                       ; 00544a0c
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0x7                            ; 00544a12
        ;   Label: LAB_00544a12
    PUSH 0x5ee652                       ; 00544a14 | = "flagOff"
    PUSH ESI                            ; 00544a19
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544a1a
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544a1f
    TEST EAX,EAX                        ; 00544a22
    JNZ 0x00544a3d                      ; 00544a24
        ;   XREF to: 00544a3d (CONDITIONAL_JUMP)  ; LAB_00544a3d
    MOV AL,byte ptr [ESI + 0x7]         ; 00544a26
    INC AL                              ; 00544a29
    AND EAX,0xff                        ; 00544a2b
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544a30 | DAT_00626114
    JZ 0x00545b8d                       ; 00544a37
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0xa                            ; 00544a3d
        ;   Label: LAB_00544a3d
    PUSH 0x5ee65a                       ; 00544a3f | = "gameFlagOn"
    PUSH ESI                            ; 00544a44
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544a45
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544a4a
    TEST EAX,EAX                        ; 00544a4d
    JNZ 0x00544a68                      ; 00544a4f
        ;   XREF to: 00544a68 (CONDITIONAL_JUMP)  ; LAB_00544a68
    MOV AL,byte ptr [ESI + 0xa]         ; 00544a51
    INC AL                              ; 00544a54
    AND EAX,0xff                        ; 00544a56
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544a5b | DAT_00626114
    JZ 0x00545b8d                       ; 00544a62
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0xb                            ; 00544a68
        ;   Label: LAB_00544a68
    PUSH 0x5ee665                       ; 00544a6a | = "gameFlagOff"
    PUSH ESI                            ; 00544a6f
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544a70
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544a75
    TEST EAX,EAX                        ; 00544a78
    JNZ 0x00544a93                      ; 00544a7a
        ;   XREF to: 00544a93 (CONDITIONAL_JUMP)  ; LAB_00544a93
    MOV AL,byte ptr [ESI + 0xb]         ; 00544a7c
    INC AL                              ; 00544a7f
    AND EAX,0xff                        ; 00544a81
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544a86 | DAT_00626114
    JZ 0x00545b8d                       ; 00544a8d
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0xd                            ; 00544a93
        ;   Label: LAB_00544a93
    PUSH 0x5ee671                       ; 00544a95 | = "killCharacter"
    PUSH ESI                            ; 00544a9a
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544a9b
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544aa0
    TEST EAX,EAX                        ; 00544aa3
    JNZ 0x00544abe                      ; 00544aa5
        ;   XREF to: 00544abe (CONDITIONAL_JUMP)  ; LAB_00544abe
    MOV AL,byte ptr [ESI + 0xd]         ; 00544aa7
    INC AL                              ; 00544aaa
    AND EAX,0xff                        ; 00544aac
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544ab1 | DAT_00626114
    JZ 0x00545b8d                       ; 00544ab8
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0x8                            ; 00544abe
        ;   Label: LAB_00544abe
    PUSH 0x5ee67f                       ; 00544ac0 | = "killHero"
    PUSH ESI                            ; 00544ac5
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544ac6
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544acb
    TEST EAX,EAX                        ; 00544ace
    JNZ 0x00544ae9                      ; 00544ad0
        ;   XREF to: 00544ae9 (CONDITIONAL_JUMP)  ; LAB_00544ae9
    MOV AL,byte ptr [ESI + 0x8]         ; 00544ad2
    INC AL                              ; 00544ad5
    AND EAX,0xff                        ; 00544ad7
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544adc | DAT_00626114
    JZ 0x00545b8d                       ; 00544ae3
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0x7                            ; 00544ae9
        ;   Label: LAB_00544ae9
    PUSH 0x5ee688                       ; 00544aeb | = "killSfx"
    PUSH ESI                            ; 00544af0
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544af1
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544af6
    TEST EAX,EAX                        ; 00544af9
    JNZ 0x00544b14                      ; 00544afb
        ;   XREF to: 00544b14 (CONDITIONAL_JUMP)  ; LAB_00544b14
    MOV AL,byte ptr [ESI + 0x7]         ; 00544afd
    INC AL                              ; 00544b00
    AND EAX,0xff                        ; 00544b02
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544b07 | DAT_00626114
    JZ 0x00545b8d                       ; 00544b0e
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0x9                            ; 00544b14
        ;   Label: LAB_00544b14
    PUSH 0x5ee690                       ; 00544b16 | = "lightning"
    PUSH ESI                            ; 00544b1b
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544b1c
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544b21
    TEST EAX,EAX                        ; 00544b24
    JNZ 0x00544b3f                      ; 00544b26
        ;   XREF to: 00544b3f (CONDITIONAL_JUMP)  ; LAB_00544b3f
    MOV AL,byte ptr [ESI + 0x9]         ; 00544b28
    INC AL                              ; 00544b2b
    AND EAX,0xff                        ; 00544b2d
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544b32 | DAT_00626114
    JZ 0x00545b8d                       ; 00544b39
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0x7                            ; 00544b3f
        ;   Label: LAB_00544b3f
    PUSH 0x5ee69a                       ; 00544b41 | = "playSfx"
    PUSH ESI                            ; 00544b46
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544b47
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544b4c
    TEST EAX,EAX                        ; 00544b4f
    JNZ 0x00544b6a                      ; 00544b51
        ;   XREF to: 00544b6a (CONDITIONAL_JUMP)  ; LAB_00544b6a
    MOV AL,byte ptr [ESI + 0x7]         ; 00544b53
    INC AL                              ; 00544b56
    AND EAX,0xff                        ; 00544b58
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544b5d | DAT_00626114
    JZ 0x00545b8d                       ; 00544b64
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0x9                            ; 00544b6a
        ;   Label: LAB_00544b6a
    PUSH 0x5ee6a2                       ; 00544b6c | = "resetGore"
    PUSH ESI                            ; 00544b71
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544b72
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544b77
    TEST EAX,EAX                        ; 00544b7a
    JNZ 0x00544b95                      ; 00544b7c
        ;   XREF to: 00544b95 (CONDITIONAL_JUMP)  ; LAB_00544b95
    MOV AL,byte ptr [ESI + 0x9]         ; 00544b7e
    INC AL                              ; 00544b81
    AND EAX,0xff                        ; 00544b83
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544b88 | DAT_00626114
    JZ 0x00545b8d                       ; 00544b8f
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0xc                            ; 00544b95
        ;   Label: LAB_00544b95
    PUSH 0x5ee6ac                       ; 00544b97 | = "setActorBool"
    PUSH ESI                            ; 00544b9c
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544b9d
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544ba2
    TEST EAX,EAX                        ; 00544ba5
    JNZ 0x00544bc0                      ; 00544ba7
        ;   XREF to: 00544bc0 (CONDITIONAL_JUMP)  ; LAB_00544bc0
    MOV AL,byte ptr [ESI + 0xc]         ; 00544ba9
    INC AL                              ; 00544bac
    AND EAX,0xff                        ; 00544bae
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544bb3 | DAT_00626114
    JZ 0x00545b8d                       ; 00544bba
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0x10                           ; 00544bc0
        ;   Label: LAB_00544bc0
    PUSH 0x5ee6b9                       ; 00544bc2 | = "setCameraAmbient"
    PUSH ESI                            ; 00544bc7
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544bc8
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544bcd
    TEST EAX,EAX                        ; 00544bd0
    JNZ 0x00544beb                      ; 00544bd2
        ;   XREF to: 00544beb (CONDITIONAL_JUMP)  ; LAB_00544beb
    MOV AL,byte ptr [ESI + 0x10]        ; 00544bd4
    INC AL                              ; 00544bd7
    AND EAX,0xff                        ; 00544bd9
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544bde | DAT_00626114
    JZ 0x00545b8d                       ; 00544be5
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0xa                            ; 00544beb
        ;   Label: LAB_00544beb
    PUSH 0x5ee6ca                       ; 00544bed | = "setCounter"
    PUSH ESI                            ; 00544bf2
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544bf3
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544bf8
    TEST EAX,EAX                        ; 00544bfb
    JNZ 0x00544c16                      ; 00544bfd
        ;   XREF to: 00544c16 (CONDITIONAL_JUMP)  ; LAB_00544c16
    MOV AL,byte ptr [ESI + 0xa]         ; 00544bff
    INC AL                              ; 00544c02
    AND EAX,0xff                        ; 00544c04
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544c09 | DAT_00626114
    JZ 0x00545b8d                       ; 00544c10
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0xc                            ; 00544c16
        ;   Label: LAB_00544c16
    PUSH 0x5ee6d5                       ; 00544c18 | = "setDoorState"
    PUSH ESI                            ; 00544c1d
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544c1e
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544c23
    TEST EAX,EAX                        ; 00544c26
    JNZ 0x00544c41                      ; 00544c28
        ;   XREF to: 00544c41 (CONDITIONAL_JUMP)  ; LAB_00544c41
    MOV AL,byte ptr [ESI + 0xc]         ; 00544c2a
    INC AL                              ; 00544c2d
    AND EAX,0xff                        ; 00544c2f
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544c34 | DAT_00626114
    JZ 0x00545b8d                       ; 00544c3b
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0xf                            ; 00544c41
        ;   Label: LAB_00544c41
    PUSH 0x5ee6e2                       ; 00544c43 | = "setGroupAmbient"
    PUSH ESI                            ; 00544c48
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544c49
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544c4e
    TEST EAX,EAX                        ; 00544c51
    JNZ 0x00544c6c                      ; 00544c53
        ;   XREF to: 00544c6c (CONDITIONAL_JUMP)  ; LAB_00544c6c
    MOV AL,byte ptr [ESI + 0xf]         ; 00544c55
    INC AL                              ; 00544c58
    AND EAX,0xff                        ; 00544c5a
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544c5f | DAT_00626114
    JZ 0x00545b8d                       ; 00544c66
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0x13                           ; 00544c6c
        ;   Label: LAB_00544c6c
    PUSH 0x5ee6f2                       ; 00544c6e | = "setLightFilterFrame"
    PUSH ESI                            ; 00544c73
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544c74
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544c79
    TEST EAX,EAX                        ; 00544c7c
    JNZ 0x00544c97                      ; 00544c7e
        ;   XREF to: 00544c97 (CONDITIONAL_JUMP)  ; LAB_00544c97
    MOV AL,byte ptr [ESI + 0x13]        ; 00544c80
    INC AL                              ; 00544c83
    AND EAX,0xff                        ; 00544c85
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544c8a | DAT_00626114
    JZ 0x00545b8d                       ; 00544c91
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0xd                            ; 00544c97
        ;   Label: LAB_00544c97
    PUSH 0x5ee706                       ; 00544c99 | = "setLeverState"
    PUSH ESI                            ; 00544c9e
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544c9f
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544ca4
    TEST EAX,EAX                        ; 00544ca7
    JNZ 0x00544cc2                      ; 00544ca9
        ;   XREF to: 00544cc2 (CONDITIONAL_JUMP)  ; LAB_00544cc2
    MOV AL,byte ptr [ESI + 0xd]         ; 00544cab
    INC AL                              ; 00544cae
    AND EAX,0xff                        ; 00544cb0
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544cb5 | DAT_00626114
    JZ 0x00545b8d                       ; 00544cbc
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0xd                            ; 00544cc2
        ;   Label: LAB_00544cc2
    PUSH 0x5ee714                       ; 00544cc4 | = "setModelState"
    PUSH ESI                            ; 00544cc9
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544cca
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544ccf
    TEST EAX,EAX                        ; 00544cd2
    JNZ 0x00544ced                      ; 00544cd4
        ;   XREF to: 00544ced (CONDITIONAL_JUMP)  ; LAB_00544ced
    MOV AL,byte ptr [ESI + 0xd]         ; 00544cd6
    INC AL                              ; 00544cd9
    AND EAX,0xff                        ; 00544cdb
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544ce0 | DAT_00626114
    JZ 0x00545b8d                       ; 00544ce7
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0xb                            ; 00544ced
        ;   Label: LAB_00544ced
    PUSH 0x5ee722                       ; 00544cef | = "setSunlight"
    PUSH ESI                            ; 00544cf4
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544cf5
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544cfa
    TEST EAX,EAX                        ; 00544cfd
    JNZ 0x00544d18                      ; 00544cff
        ;   XREF to: 00544d18 (CONDITIONAL_JUMP)  ; LAB_00544d18
    MOV AL,byte ptr [ESI + 0xb]         ; 00544d01
    INC AL                              ; 00544d04
    AND EAX,0xff                        ; 00544d06
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544d0b | DAT_00626114
    JZ 0x00545b8d                       ; 00544d12
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0x8                            ; 00544d18
        ;   Label: LAB_00544d18
    PUSH 0x5ee72e                       ; 00544d1a | = "setTimer"
    PUSH ESI                            ; 00544d1f
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544d20
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544d25
    TEST EAX,EAX                        ; 00544d28
    JNZ 0x00544d43                      ; 00544d2a
        ;   XREF to: 00544d43 (CONDITIONAL_JUMP)  ; LAB_00544d43
    MOV AL,byte ptr [ESI + 0x8]         ; 00544d2c
    INC AL                              ; 00544d2f
    AND EAX,0xff                        ; 00544d31
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544d36 | DAT_00626114
    JZ 0x00545b8d                       ; 00544d3d
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0xa                            ; 00544d43
        ;   Label: LAB_00544d43
    PUSH 0x5ee737                       ; 00544d45 | = "setWeather"
    PUSH ESI                            ; 00544d4a
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544d4b
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544d50
    TEST EAX,EAX                        ; 00544d53
    JNZ 0x00544d6e                      ; 00544d55
        ;   XREF to: 00544d6e (CONDITIONAL_JUMP)  ; LAB_00544d6e
    MOV AL,byte ptr [ESI + 0xa]         ; 00544d57
    INC AL                              ; 00544d5a
    AND EAX,0xff                        ; 00544d5c
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544d61 | DAT_00626114
    JZ 0x00545b8d                       ; 00544d68
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0xb                            ; 00544d6e
        ;   Label: LAB_00544d6e
    PUSH 0x5ee742                       ; 00544d70 | = "shakeScreen"
    PUSH ESI                            ; 00544d75
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544d76
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544d7b
    TEST EAX,EAX                        ; 00544d7e
    JNZ 0x00544d99                      ; 00544d80
        ;   XREF to: 00544d99 (CONDITIONAL_JUMP)  ; LAB_00544d99
    MOV AL,byte ptr [ESI + 0xb]         ; 00544d82
    INC AL                              ; 00544d85
    AND EAX,0xff                        ; 00544d87
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544d8c | DAT_00626114
    JZ 0x00545b8d                       ; 00544d93
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0x11                           ; 00544d99
        ;   Label: LAB_00544d99
    PUSH 0x5ee74e                       ; 00544d9b | = "slamModelToMotion"
    PUSH ESI                            ; 00544da0
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544da1
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544da6
    TEST EAX,EAX                        ; 00544da9
    JNZ 0x00544dc4                      ; 00544dab
        ;   XREF to: 00544dc4 (CONDITIONAL_JUMP)  ; LAB_00544dc4
    MOV AL,byte ptr [ESI + 0x11]        ; 00544dad
    INC AL                              ; 00544db0
    AND EAX,0xff                        ; 00544db2
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544db7 | DAT_00626114
    JZ 0x00545b8d                       ; 00544dbe
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0x15                           ; 00544dc4
        ;   Label: LAB_00544dc4
    PUSH 0x5ee760                       ; 00544dc6 | = "turnToFieldNotesEntry"
    PUSH ESI                            ; 00544dcb
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544dcc
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544dd1
    TEST EAX,EAX                        ; 00544dd4
    JNZ 0x00544def                      ; 00544dd6
        ;   XREF to: 00544def (CONDITIONAL_JUMP)  ; LAB_00544def
    MOV AL,byte ptr [ESI + 0x15]        ; 00544dd8
    INC AL                              ; 00544ddb
    AND EAX,0xff                        ; 00544ddd
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544de2 | DAT_00626114
    JZ 0x00545b8d                       ; 00544de9
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0x6                            ; 00544def
        ;   Label: LAB_00544def
    PUSH 0x5ee776                       ; 00544df1 | = "warpTo"
    PUSH ESI                            ; 00544df6
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544df7
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544dfc
    TEST EAX,EAX                        ; 00544dff
    JNZ 0x00544e1a                      ; 00544e01
        ;   XREF to: 00544e1a (CONDITIONAL_JUMP)  ; LAB_00544e1a
    MOV AL,byte ptr [ESI + 0x6]         ; 00544e03
    INC AL                              ; 00544e06
    AND EAX,0xff                        ; 00544e08
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544e0d | DAT_00626114
    JZ 0x00545b8d                       ; 00544e14
        ;   XREF to: 00545b8d (CONDITIONAL_JUMP)  ; LAB_00545b8d
    PUSH 0x12                           ; 00544e1a
        ;   Label: LAB_00544e1a
    PUSH 0x5ee77e                       ; 00544e1c | = "addItemToInventory"
    PUSH ESI                            ; 00544e21
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544e22
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544e27
    TEST EAX,EAX                        ; 00544e2a
    JNZ 0x00544e45                      ; 00544e2c
        ;   XREF to: 00544e45 (CONDITIONAL_JUMP)  ; LAB_00544e45
    MOV AL,byte ptr [ESI + 0x12]        ; 00544e2e
    INC AL                              ; 00544e31
    AND EAX,0xff                        ; 00544e33
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544e38 | DAT_00626114
    JZ 0x00545bef                       ; 00544e3f
        ;   XREF to: 00545bef (CONDITIONAL_JUMP)  ; LAB_00545bef
    PUSH 0xe                            ; 00544e45
        ;   Label: LAB_00544e45
    PUSH 0x5ee7d3                       ; 00544e47 | = "addLightFilter"
    PUSH ESI                            ; 00544e4c
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544e4d
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544e52
    TEST EAX,EAX                        ; 00544e55
    JNZ 0x00544e70                      ; 00544e57
        ;   XREF to: 00544e70 (CONDITIONAL_JUMP)  ; LAB_00544e70
    MOV AL,byte ptr [ESI + 0xe]         ; 00544e59
    INC AL                              ; 00544e5c
    AND EAX,0xff                        ; 00544e5e
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544e63 | DAT_00626114
    JZ 0x00545d11                       ; 00544e6a
        ;   XREF to: 00545d11 (CONDITIONAL_JUMP)  ; LAB_00545d11
    PUSH 0x10                           ; 00544e70
        ;   Label: LAB_00544e70
    PUSH 0x5ee859                       ; 00544e72 | = "allowEnemyAttack"
    PUSH ESI                            ; 00544e77
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544e78
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544e7d
    TEST EAX,EAX                        ; 00544e80
    JNZ 0x00544e9b                      ; 00544e82
        ;   XREF to: 00544e9b (CONDITIONAL_JUMP)  ; LAB_00544e9b
    MOV AL,byte ptr [ESI + 0x10]        ; 00544e84
    INC AL                              ; 00544e87
    AND EAX,0xff                        ; 00544e89
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544e8e | DAT_00626114
    JZ 0x00545e4c                       ; 00544e95
        ;   XREF to: 00545e4c (CONDITIONAL_JUMP)  ; LAB_00545e4c
    PUSH 0x11                           ; 00544e9b
        ;   Label: LAB_00544e9b
    PUSH 0x5ee86a                       ; 00544e9d | = "allowHeroControls"
    PUSH ESI                            ; 00544ea2
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544ea3
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544ea8
    TEST EAX,EAX                        ; 00544eab
    JNZ 0x00544ec6                      ; 00544ead
        ;   XREF to: 00544ec6 (CONDITIONAL_JUMP)  ; LAB_00544ec6
    MOV AL,byte ptr [ESI + 0x11]        ; 00544eaf
    INC AL                              ; 00544eb2
    AND EAX,0xff                        ; 00544eb4
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544eb9 | DAT_00626114
    JZ 0x00545eb4                       ; 00544ec0
        ;   XREF to: 00545eb4 (CONDITIONAL_JUMP)  ; LAB_00545eb4
    PUSH 0xf                            ; 00544ec6
        ;   Label: LAB_00544ec6
    PUSH 0x5ee87c                       ; 00544ec8 | = "allowHeroDamage"
    PUSH ESI                            ; 00544ecd
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544ece
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544ed3
    TEST EAX,EAX                        ; 00544ed6
    JNZ 0x00544ef1                      ; 00544ed8
        ;   XREF to: 00544ef1 (CONDITIONAL_JUMP)  ; LAB_00544ef1
    MOV AL,byte ptr [ESI + 0xf]         ; 00544eda
    INC AL                              ; 00544edd
    AND EAX,0xff                        ; 00544edf
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544ee4 | DAT_00626114
    JZ 0x00545f2a                       ; 00544eeb
        ;   XREF to: 00545f2a (CONDITIONAL_JUMP)  ; LAB_00545f2a
    PUSH 0x15                           ; 00544ef1
        ;   Label: LAB_00544ef1
    PUSH 0x5ee88c                       ; 00544ef3 | = "attachActorToPlatform"
    PUSH ESI                            ; 00544ef8
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544ef9
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544efe
    TEST EAX,EAX                        ; 00544f01
    JNZ 0x00544f1c                      ; 00544f03
        ;   XREF to: 00544f1c (CONDITIONAL_JUMP)  ; LAB_00544f1c
    MOV AL,byte ptr [ESI + 0x15]        ; 00544f05
    INC AL                              ; 00544f08
    AND EAX,0xff                        ; 00544f0a
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544f0f | DAT_00626114
    JZ 0x00545f92                       ; 00544f16
        ;   XREF to: 00545f92 (CONDITIONAL_JUMP)  ; LAB_00545f92
    PUSH 0xb                            ; 00544f1c
        ;   Label: LAB_00544f1c
    PUSH 0x5ee8e5                       ; 00544f1e | = "beginFadeIn"
    PUSH ESI                            ; 00544f23
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544f24
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544f29
    TEST EAX,EAX                        ; 00544f2c
    JNZ 0x00544f47                      ; 00544f2e
        ;   XREF to: 00544f47 (CONDITIONAL_JUMP)  ; LAB_00544f47
    MOV AL,byte ptr [ESI + 0xb]         ; 00544f30
    INC AL                              ; 00544f33
    AND EAX,0xff                        ; 00544f35
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544f3a | DAT_00626114
    JZ 0x005460ab                       ; 00544f41
        ;   XREF to: 005460ab (CONDITIONAL_JUMP)  ; LAB_005460ab
    PUSH 0xc                            ; 00544f47
        ;   Label: LAB_00544f47
    PUSH 0x5ee8f1                       ; 00544f49 | = "beginFadeOut"
    PUSH ESI                            ; 00544f4e
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544f4f
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544f54
    TEST EAX,EAX                        ; 00544f57
    JNZ 0x00544f72                      ; 00544f59
        ;   XREF to: 00544f72 (CONDITIONAL_JUMP)  ; LAB_00544f72
    MOV AL,byte ptr [ESI + 0xc]         ; 00544f5b
    INC AL                              ; 00544f5e
    AND EAX,0xff                        ; 00544f60
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544f65 | DAT_00626114
    JZ 0x005460df                       ; 00544f6c
        ;   XREF to: 005460df (CONDITIONAL_JUMP)  ; LAB_005460df
    PUSH 0xa                            ; 00544f72
        ;   Label: LAB_00544f72
    PUSH 0x5ee8fe                       ; 00544f74 | = "breakPoint"
    PUSH ESI                            ; 00544f79
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544f7a
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544f7f
    TEST EAX,EAX                        ; 00544f82
    JNZ 0x00544f9d                      ; 00544f84
        ;   XREF to: 00544f9d (CONDITIONAL_JUMP)  ; LAB_00544f9d
    MOV AL,byte ptr [ESI + 0xa]         ; 00544f86
    INC AL                              ; 00544f89
    AND EAX,0xff                        ; 00544f8b
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544f90 | DAT_00626114
    JZ 0x00546114                       ; 00544f97
        ;   XREF to: 00546114 (CONDITIONAL_JUMP)  ; LAB_00546114
    PUSH 0x10                           ; 00544f9d
        ;   Label: LAB_00544f9d
    PUSH 0x5ee92e                       ; 00544f9f | = "cancelCameraHold"
    PUSH ESI                            ; 00544fa4
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544fa5
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544faa
    TEST EAX,EAX                        ; 00544fad
    JNZ 0x00544fc8                      ; 00544faf
        ;   XREF to: 00544fc8 (CONDITIONAL_JUMP)  ; LAB_00544fc8
    MOV AL,byte ptr [ESI + 0x10]        ; 00544fb1
    INC AL                              ; 00544fb4
    AND EAX,0xff                        ; 00544fb6
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544fbb | DAT_00626114
    JZ 0x0054617a                       ; 00544fc2
        ;   XREF to: 0054617a (CONDITIONAL_JUMP)  ; LAB_0054617a
    PUSH 0xc                            ; 00544fc8
        ;   Label: LAB_00544fc8
    PUSH 0x5ee93f                       ; 00544fca | = "cancelWalkTo"
    PUSH ESI                            ; 00544fcf
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544fd0
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00544fd5
    TEST EAX,EAX                        ; 00544fd8
    JNZ 0x00544ff3                      ; 00544fda
        ;   XREF to: 00544ff3 (CONDITIONAL_JUMP)  ; LAB_00544ff3
    MOV AL,byte ptr [ESI + 0xc]         ; 00544fdc
    INC AL                              ; 00544fdf
    AND EAX,0xff                        ; 00544fe1
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00544fe6 | DAT_00626114
    JZ 0x005461af                       ; 00544fed
        ;   XREF to: 005461af (CONDITIONAL_JUMP)  ; LAB_005461af
    PUSH 0xe                            ; 00544ff3
        ;   Label: LAB_00544ff3
    PUSH 0x5ee950                       ; 00544ff5 | = "chainToMission"
    PUSH ESI                            ; 00544ffa
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00544ffb
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545000
    TEST EAX,EAX                        ; 00545003
    JNZ 0x0054501e                      ; 00545005
        ;   XREF to: 0054501e (CONDITIONAL_JUMP)  ; LAB_0054501e
    MOV AL,byte ptr [ESI + 0xe]         ; 00545007
    INC AL                              ; 0054500a
    AND EAX,0xff                        ; 0054500c
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545011 | DAT_00626114
    JZ 0x005462d6                       ; 00545018
        ;   XREF to: 005462d6 (CONDITIONAL_JUMP)  ; LAB_005462d6
    PUSH 0x11                           ; 0054501e
        ;   Label: LAB_0054501e
    PUSH 0x5ee95f                       ; 00545020 | = "changeSetFilename"
    PUSH ESI                            ; 00545025
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545026
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054502b
    TEST EAX,EAX                        ; 0054502e
    JNZ 0x00545049                      ; 00545030
        ;   XREF to: 00545049 (CONDITIONAL_JUMP)  ; LAB_00545049
    MOV AL,byte ptr [ESI + 0x11]        ; 00545032
    INC AL                              ; 00545035
    AND EAX,0xff                        ; 00545037
    TEST byte ptr [EAX + 0x626114],0xe0 ; 0054503c | DAT_00626114
    JZ 0x00546376                       ; 00545043
        ;   XREF to: 00546376 (CONDITIONAL_JUMP)  ; LAB_00546376
    PUSH 0x5                            ; 00545049
        ;   Label: LAB_00545049
    PUSH 0x5ee9e9                       ; 0054504b | = "dbSay"
    PUSH ESI                            ; 00545050
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545051
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545056
    TEST EAX,EAX                        ; 00545059
    JNZ 0x00545074                      ; 0054505b
        ;   XREF to: 00545074 (CONDITIONAL_JUMP)  ; LAB_00545074
    MOV AL,byte ptr [ESI + 0x5]         ; 0054505d
    INC AL                              ; 00545060
    AND EAX,0xff                        ; 00545062
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545067 | DAT_00626114
    JZ 0x005464f1                       ; 0054506e
        ;   XREF to: 005464f1 (CONDITIONAL_JUMP)  ; LAB_005464f1
    PUSH 0xa                            ; 00545074
        ;   Label: LAB_00545074
    PUSH 0x5eea35                       ; 00545076 | = "dbStartSay"
    PUSH ESI                            ; 0054507b
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054507c
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545081
    TEST EAX,EAX                        ; 00545084
    JNZ 0x0054509f                      ; 00545086
        ;   XREF to: 0054509f (CONDITIONAL_JUMP)  ; LAB_0054509f
    MOV AL,byte ptr [ESI + 0xa]         ; 00545088
    INC AL                              ; 0054508b
    AND EAX,0xff                        ; 0054508d
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545092 | DAT_00626114
    JZ 0x005466bd                       ; 00545099
        ;   XREF to: 005466bd (CONDITIONAL_JUMP)  ; LAB_005466bd
    PUSH 0xe                            ; 0054509f
        ;   Label: LAB_0054509f
    PUSH 0x5eea86                       ; 005450a1 | = "dbTimedDisplay"
    PUSH ESI                            ; 005450a6
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005450a7
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005450ac
    TEST EAX,EAX                        ; 005450af
    JNZ 0x005450ca                      ; 005450b1
        ;   XREF to: 005450ca (CONDITIONAL_JUMP)  ; LAB_005450ca
    MOV AL,byte ptr [ESI + 0xe]         ; 005450b3
    INC AL                              ; 005450b6
    AND EAX,0xff                        ; 005450b8
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005450bd | DAT_00626114
    JZ 0x0054683b                       ; 005450c4
        ;   XREF to: 0054683b (CONDITIONAL_JUMP)  ; LAB_0054683b
    PUSH 0x5                            ; 005450ca
        ;   Label: LAB_005450ca
    PUSH 0x5eeae6                       ; 005450cc | = "debug"
    PUSH ESI                            ; 005450d1
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005450d2
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005450d7
    TEST EAX,EAX                        ; 005450da
    JNZ 0x005450f5                      ; 005450dc
        ;   XREF to: 005450f5 (CONDITIONAL_JUMP)  ; LAB_005450f5
    MOV AL,byte ptr [ESI + 0x5]         ; 005450de
    INC AL                              ; 005450e1
    AND EAX,0xff                        ; 005450e3
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005450e8 | DAT_00626114
    JZ 0x005469ae                       ; 005450ef
        ;   XREF to: 005469ae (CONDITIONAL_JUMP)  ; LAB_005469ae
    PUSH 0x9                            ; 005450f5
        ;   Label: LAB_005450f5
    PUSH 0x5eeb10                       ; 005450f7 | = "dismember"
    PUSH ESI                            ; 005450fc
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005450fd
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545102
    TEST EAX,EAX                        ; 00545105
    JNZ 0x00545120                      ; 00545107
        ;   XREF to: 00545120 (CONDITIONAL_JUMP)  ; LAB_00545120
    MOV AL,byte ptr [ESI + 0x9]         ; 00545109
    INC AL                              ; 0054510c
    AND EAX,0xff                        ; 0054510e
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545113 | DAT_00626114
    JZ 0x00546a1c                       ; 0054511a
        ;   XREF to: 00546a1c (CONDITIONAL_JUMP)  ; LAB_00546a1c
    PUSH 0x7                            ; 00545120
        ;   Label: LAB_00545120
    PUSH 0x5eebba                       ; 00545122 | = "display"
    PUSH ESI                            ; 00545127
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545128
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054512d
    TEST EAX,EAX                        ; 00545130
    JNZ 0x0054514b                      ; 00545132
        ;   XREF to: 0054514b (CONDITIONAL_JUMP)  ; LAB_0054514b
    MOV AL,byte ptr [ESI + 0x7]         ; 00545134
    INC AL                              ; 00545137
    AND EAX,0xff                        ; 00545139
    TEST byte ptr [EAX + 0x626114],0xe0 ; 0054513e | DAT_00626114
    JZ 0x00546d64                       ; 00545145
        ;   XREF to: 00546d64 (CONDITIONAL_JUMP)  ; LAB_00546d64
    PUSH 0x4                            ; 0054514b
        ;   Label: LAB_0054514b
    PUSH 0x5eebf6                       ; 0054514d | DAT_005eebf6
    PUSH ESI                            ; 00545152
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545153
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545158
    TEST EAX,EAX                        ; 0054515b
    JNZ 0x00545176                      ; 0054515d
        ;   XREF to: 00545176 (CONDITIONAL_JUMP)  ; LAB_00545176
    MOV AL,byte ptr [ESI + 0x4]         ; 0054515f
    INC AL                              ; 00545162
    AND EAX,0xff                        ; 00545164
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545169 | DAT_00626114
    JZ 0x00546db0                       ; 00545170
        ;   XREF to: 00546db0 (CONDITIONAL_JUMP)  ; LAB_00546db0
    PUSH 0xc                            ; 00545176
        ;   Label: LAB_00545176
    PUSH 0x5eec33                       ; 00545178 | = "enableCamera"
    PUSH ESI                            ; 0054517d
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054517e
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545183
    TEST EAX,EAX                        ; 00545186
    JNZ 0x005451a1                      ; 00545188
        ;   XREF to: 005451a1 (CONDITIONAL_JUMP)  ; LAB_005451a1
    MOV AL,byte ptr [ESI + 0xc]         ; 0054518a
    INC AL                              ; 0054518d
    AND EAX,0xff                        ; 0054518f
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545194 | DAT_00626114
    JZ 0x00546dfd                       ; 0054519b
        ;   XREF to: 00546dfd (CONDITIONAL_JUMP)  ; LAB_00546dfd
    PUSH 0x11                           ; 005451a1
        ;   Label: LAB_005451a1
    PUSH 0x5eec8e                       ; 005451a3 | = "enableCameraGroup"
    PUSH ESI                            ; 005451a8
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005451a9
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005451ae
    TEST EAX,EAX                        ; 005451b1
    JNZ 0x005451cc                      ; 005451b3
        ;   XREF to: 005451cc (CONDITIONAL_JUMP)  ; LAB_005451cc
    MOV AL,byte ptr [ESI + 0x11]        ; 005451b5
    INC AL                              ; 005451b8
    AND EAX,0xff                        ; 005451ba
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005451bf | DAT_00626114
    JZ 0x00546f4b                       ; 005451c6
        ;   XREF to: 00546f4b (CONDITIONAL_JUMP)  ; LAB_00546f4b
    PUSH 0xf                            ; 005451cc
        ;   Label: LAB_005451cc
    PUSH 0x5eecd5                       ; 005451ce | = "enableHealthBar"
    PUSH ESI                            ; 005451d3
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005451d4
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005451d9
    TEST EAX,EAX                        ; 005451dc
    JNZ 0x005451f7                      ; 005451de
        ;   XREF to: 005451f7 (CONDITIONAL_JUMP)  ; LAB_005451f7
    MOV AL,byte ptr [ESI + 0xf]         ; 005451e0
    INC AL                              ; 005451e3
    AND EAX,0xff                        ; 005451e5
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005451ea | DAT_00626114
    JZ 0x00547055                       ; 005451f1
        ;   XREF to: 00547055 (CONDITIONAL_JUMP)  ; LAB_00547055
    PUSH 0x3                            ; 005451f7
        ;   Label: LAB_005451f7
    PUSH 0x5eed49                       ; 005451f9 | DAT_005eed49
    PUSH ESI                            ; 005451fe
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005451ff
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545204
    TEST EAX,EAX                        ; 00545207
    JNZ 0x00545222                      ; 00545209
        ;   XREF to: 00545222 (CONDITIONAL_JUMP)  ; LAB_00545222
    MOV AL,byte ptr [ESI + 0x3]         ; 0054520b
    INC AL                              ; 0054520e
    AND EAX,0xff                        ; 00545210
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545215 | DAT_00626114
    JZ 0x005471b0                       ; 0054521c
        ;   XREF to: 005471b0 (CONDITIONAL_JUMP)  ; LAB_005471b0
    PUSH 0x6                            ; 00545222
        ;   Label: LAB_00545222
    PUSH 0x5eed4d                       ; 00545224 | = "fadeIn"
    PUSH ESI                            ; 00545229
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054522a
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054522f
    TEST EAX,EAX                        ; 00545232
    JNZ 0x0054524d                      ; 00545234
        ;   XREF to: 0054524d (CONDITIONAL_JUMP)  ; LAB_0054524d
    MOV AL,byte ptr [ESI + 0x6]         ; 00545236
    INC AL                              ; 00545239
    AND EAX,0xff                        ; 0054523b
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545240 | DAT_00626114
    JZ 0x005471e3                       ; 00545247
        ;   XREF to: 005471e3 (CONDITIONAL_JUMP)  ; LAB_005471e3
    PUSH 0x7                            ; 0054524d
        ;   Label: LAB_0054524d
    PUSH 0x5eed54                       ; 0054524f | = "fadeOut"
    PUSH ESI                            ; 00545254
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545255
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054525a
    TEST EAX,EAX                        ; 0054525d
    JNZ 0x00545278                      ; 0054525f
        ;   XREF to: 00545278 (CONDITIONAL_JUMP)  ; LAB_00545278
    MOV AL,byte ptr [ESI + 0x7]         ; 00545261
    INC AL                              ; 00545264
    AND EAX,0xff                        ; 00545266
    TEST byte ptr [EAX + 0x626114],0xe0 ; 0054526b | DAT_00626114
    JZ 0x00547268                       ; 00545272
        ;   XREF to: 00547268 (CONDITIONAL_JUMP)  ; LAB_00547268
    PUSH 0x7                            ; 00545278
        ;   Label: LAB_00545278
    PUSH 0x5eed5c                       ; 0054527a | = "gesture"
    PUSH ESI                            ; 0054527f
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545280
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545285
    TEST EAX,EAX                        ; 00545288
    JNZ 0x005452a3                      ; 0054528a
        ;   XREF to: 005452a3 (CONDITIONAL_JUMP)  ; LAB_005452a3
    MOV AL,byte ptr [ESI + 0x7]         ; 0054528c
    INC AL                              ; 0054528f
    AND EAX,0xff                        ; 00545291
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545296 | DAT_00626114
    JZ 0x005472dd                       ; 0054529d
        ;   XREF to: 005472dd (CONDITIONAL_JUMP)  ; LAB_005472dd
    PUSH 0x9                            ; 005452a3
        ;   Label: LAB_005452a3
    PUSH 0x5eee2e                       ; 005452a5 | = "getIniInt"
    PUSH ESI                            ; 005452aa
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005452ab
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005452b0
    TEST EAX,EAX                        ; 005452b3
    JNZ 0x005452ce                      ; 005452b5
        ;   XREF to: 005452ce (CONDITIONAL_JUMP)  ; LAB_005452ce
    MOV AL,byte ptr [ESI + 0x9]         ; 005452b7
    INC AL                              ; 005452ba
    AND EAX,0xff                        ; 005452bc
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005452c1 | DAT_00626114
    JZ 0x005474dd                       ; 005452c8
        ;   XREF to: 005474dd (CONDITIONAL_JUMP)  ; LAB_005474dd
    PUSH 0xf                            ; 005452ce
        ;   Label: LAB_005452ce
    PUSH 0x5eee8a                       ; 005452d0 | = "getTriggerActor"
    PUSH ESI                            ; 005452d5
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005452d6
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005452db
    TEST EAX,EAX                        ; 005452de
    JNZ 0x005452f9                      ; 005452e0
        ;   XREF to: 005452f9 (CONDITIONAL_JUMP)  ; LAB_005452f9
    MOV AL,byte ptr [ESI + 0xf]         ; 005452e2
    INC AL                              ; 005452e5
    AND EAX,0xff                        ; 005452e7
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005452ec | DAT_00626114
    JZ 0x00547607                       ; 005452f3
        ;   XREF to: 00547607 (CONDITIONAL_JUMP)  ; LAB_00547607
    PUSH 0x5                            ; 005452f9
        ;   Label: LAB_005452f9
    PUSH 0x5eeed7                       ; 005452fb | = "gosub"
    PUSH ESI                            ; 00545300
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545301
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545306
    TEST EAX,EAX                        ; 00545309
    JNZ 0x00545324                      ; 0054530b
        ;   XREF to: 00545324 (CONDITIONAL_JUMP)  ; LAB_00545324
    MOV AL,byte ptr [ESI + 0x5]         ; 0054530d
    INC AL                              ; 00545310
    AND EAX,0xff                        ; 00545312
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545317 | DAT_00626114
    JZ 0x00547718                       ; 0054531e
        ;   XREF to: 00547718 (CONDITIONAL_JUMP)  ; LAB_00547718
    PUSH 0x4                            ; 00545324
        ;   Label: LAB_00545324
    PUSH 0x5eef89                       ; 00545326 | DAT_005eef89
    PUSH ESI                            ; 0054532b
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054532c
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545331
    TEST EAX,EAX                        ; 00545334
    JNZ 0x0054534f                      ; 00545336
        ;   XREF to: 0054534f (CONDITIONAL_JUMP)  ; LAB_0054534f
    MOV AL,byte ptr [ESI + 0x4]         ; 00545338
    INC AL                              ; 0054533b
    AND EAX,0xff                        ; 0054533d
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545342 | DAT_00626114
    JZ 0x0054784f                       ; 00545349
        ;   XREF to: 0054784f (CONDITIONAL_JUMP)  ; LAB_0054784f
    PUSH 0x4                            ; 0054534f
        ;   Label: LAB_0054534f
    PUSH 0x5eefc4                       ; 00545351 | DAT_005eefc4
    PUSH ESI                            ; 00545356
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545357
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054535c
    TEST EAX,EAX                        ; 0054535f
    JNZ 0x0054537a                      ; 00545361
        ;   XREF to: 0054537a (CONDITIONAL_JUMP)  ; LAB_0054537a
    MOV AL,byte ptr [ESI + 0x4]         ; 00545363
    INC AL                              ; 00545366
    AND EAX,0xff                        ; 00545368
    TEST byte ptr [EAX + 0x626114],0xe0 ; 0054536d | DAT_00626114
    JZ 0x005478b6                       ; 00545374
        ;   XREF to: 005478b6 (CONDITIONAL_JUMP)  ; LAB_005478b6
    PUSH 0xd                            ; 0054537a
        ;   Label: LAB_0054537a
    PUSH 0x5eeff9                       ; 0054537c | = "holsterWeapon"
    PUSH ESI                            ; 00545381
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545382
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545387
    TEST EAX,EAX                        ; 0054538a
    JNZ 0x005453a5                      ; 0054538c
        ;   XREF to: 005453a5 (CONDITIONAL_JUMP)  ; LAB_005453a5
    MOV AL,byte ptr [ESI + 0xd]         ; 0054538e
    INC AL                              ; 00545391
    AND EAX,0xff                        ; 00545393
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545398 | DAT_00626114
    JZ 0x00547933                       ; 0054539f
        ;   XREF to: 00547933 (CONDITIONAL_JUMP)  ; LAB_00547933
    PUSH 0x4                            ; 005453a5
        ;   Label: LAB_005453a5
    PUSH 0x5ef092                       ; 005453a7 | DAT_005ef092
    PUSH ESI                            ; 005453ac
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005453ad
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005453b2
    TEST EAX,EAX                        ; 005453b5
    JNZ 0x005453d0                      ; 005453b7
        ;   XREF to: 005453d0 (CONDITIONAL_JUMP)  ; LAB_005453d0
    MOV AL,byte ptr [ESI + 0x4]         ; 005453b9
    INC AL                              ; 005453bc
    AND EAX,0xff                        ; 005453be
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005453c3 | DAT_00626114
    JZ 0x00547b65                       ; 005453ca
        ;   XREF to: 00547b65 (CONDITIONAL_JUMP)  ; LAB_00547b65
    PUSH 0x2                            ; 005453d0
        ;   Label: LAB_005453d0
    PUSH 0x5ef097                       ; 005453d2 | DAT_005ef097
    PUSH ESI                            ; 005453d7
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005453d8
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005453dd
    TEST EAX,EAX                        ; 005453e0
    JNZ 0x005453fb                      ; 005453e2
        ;   XREF to: 005453fb (CONDITIONAL_JUMP)  ; LAB_005453fb
    MOV AL,byte ptr [ESI + 0x2]         ; 005453e4
    INC AL                              ; 005453e7
    AND EAX,0xff                        ; 005453e9
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005453ee | DAT_00626114
    JZ 0x00547b90                       ; 005453f5
        ;   XREF to: 00547b90 (CONDITIONAL_JUMP)  ; LAB_00547b90
    PUSH 0xb                            ; 005453fb
        ;   Label: LAB_005453fb
    PUSH 0x5ef0d5                       ; 005453fd | = "finishedAct"
    PUSH ESI                            ; 00545402
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545403
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545408
    TEST EAX,EAX                        ; 0054540b
    JNZ 0x00545426                      ; 0054540d
        ;   XREF to: 00545426 (CONDITIONAL_JUMP)  ; LAB_00545426
    MOV AL,byte ptr [ESI + 0xb]         ; 0054540f
    INC AL                              ; 00545412
    AND EAX,0xff                        ; 00545414
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545419 | DAT_00626114
    JZ 0x00547c4a                       ; 00545420
        ;   XREF to: 00547c4a (CONDITIONAL_JUMP)  ; LAB_00547c4a
    PUSH 0x9                            ; 00545426
        ;   Label: LAB_00545426
    PUSH 0x5ef10a                       ; 00545428 | = "letterbox"
    PUSH ESI                            ; 0054542d
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054542e
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545433
    TEST EAX,EAX                        ; 00545436
    JNZ 0x00545451                      ; 00545438
        ;   XREF to: 00545451 (CONDITIONAL_JUMP)  ; LAB_00545451
    MOV AL,byte ptr [ESI + 0x9]         ; 0054543a
    INC AL                              ; 0054543d
    AND EAX,0xff                        ; 0054543f
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545444 | DAT_00626114
    JZ 0x00547ce0                       ; 0054544b
        ;   XREF to: 00547ce0 (CONDITIONAL_JUMP)  ; LAB_00547ce0
    PUSH 0xe                            ; 00545451
        ;   Label: LAB_00545451
    PUSH 0x5ef141                       ; 00545453 | = "loadFieldNotes"
    PUSH ESI                            ; 00545458
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545459
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054545e
    TEST EAX,EAX                        ; 00545461
    JNZ 0x0054547c                      ; 00545463
        ;   XREF to: 0054547c (CONDITIONAL_JUMP)  ; LAB_0054547c
    MOV AL,byte ptr [ESI + 0xe]         ; 00545465
    INC AL                              ; 00545468
    AND EAX,0xff                        ; 0054546a
    TEST byte ptr [EAX + 0x626114],0xe0 ; 0054546f | DAT_00626114
    JZ 0x00547eba                       ; 00545476
        ;   XREF to: 00547eba (CONDITIONAL_JUMP)  ; LAB_00547eba
    PUSH 0xe                            ; 0054547c
        ;   Label: LAB_0054547c
    PUSH 0x5ef150                       ; 0054547e | = "lockFocusActor"
    PUSH ESI                            ; 00545483
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545484
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545489
    TEST EAX,EAX                        ; 0054548c
    JNZ 0x005454a7                      ; 0054548e
        ;   XREF to: 005454a7 (CONDITIONAL_JUMP)  ; LAB_005454a7
    MOV AL,byte ptr [ESI + 0xe]         ; 00545490
    INC AL                              ; 00545493
    AND EAX,0xff                        ; 00545495
    TEST byte ptr [EAX + 0x626114],0xe0 ; 0054549a | DAT_00626114
    JZ 0x00547f5d                       ; 005454a1
        ;   XREF to: 00547f5d (CONDITIONAL_JUMP)  ; LAB_00547f5d
    PUSH 0x6                            ; 005454a7
        ;   Label: LAB_005454a7
    PUSH 0x5ef15f                       ; 005454a9 | = "lookAt"
    PUSH ESI                            ; 005454ae
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005454af
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005454b4
    TEST EAX,EAX                        ; 005454b7
    JNZ 0x005454d2                      ; 005454b9
        ;   XREF to: 005454d2 (CONDITIONAL_JUMP)  ; LAB_005454d2
    MOV AL,byte ptr [ESI + 0x6]         ; 005454bb
    INC AL                              ; 005454be
    AND EAX,0xff                        ; 005454c0
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005454c5 | DAT_00626114
    JZ 0x00547fbc                       ; 005454cc
        ;   XREF to: 00547fbc (CONDITIONAL_JUMP)  ; LAB_00547fbc
    PUSH 0xd                            ; 005454d2
        ;   Label: LAB_005454d2
    PUSH 0x5ef1e6                       ; 005454d4 | = "monsterVision"
    PUSH ESI                            ; 005454d9
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005454da
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005454df
    TEST EAX,EAX                        ; 005454e2
    JNZ 0x005454fd                      ; 005454e4
        ;   XREF to: 005454fd (CONDITIONAL_JUMP)  ; LAB_005454fd
    MOV AL,byte ptr [ESI + 0xd]         ; 005454e6
    INC AL                              ; 005454e9
    AND EAX,0xff                        ; 005454eb
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005454f0 | DAT_00626114
    JZ 0x00548177                       ; 005454f7
        ;   XREF to: 00548177 (CONDITIONAL_JUMP)  ; LAB_00548177
    PUSH 0xc                            ; 005454fd
        ;   Label: LAB_005454fd
    PUSH 0x5ef22d                       ; 005454ff | = "movePlatform"
    PUSH ESI                            ; 00545504
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545505
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054550a
    TEST EAX,EAX                        ; 0054550d
    JNZ 0x00545528                      ; 0054550f
        ;   XREF to: 00545528 (CONDITIONAL_JUMP)  ; LAB_00545528
    MOV AL,byte ptr [ESI + 0xc]         ; 00545511
    INC AL                              ; 00545514
    AND EAX,0xff                        ; 00545516
    TEST byte ptr [EAX + 0x626114],0xe0 ; 0054551b | DAT_00626114
    JZ 0x00548277                       ; 00545522
        ;   XREF to: 00548277 (CONDITIONAL_JUMP)  ; LAB_00548277
    PUSH 0x8                            ; 00545528
        ;   Label: LAB_00545528
    PUSH 0x5ef2b6                       ; 0054552a | = "openDoor"
    PUSH ESI                            ; 0054552f
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545530
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545535
    TEST EAX,EAX                        ; 00545538
    JNZ 0x00545553                      ; 0054553a
        ;   XREF to: 00545553 (CONDITIONAL_JUMP)  ; LAB_00545553
    MOV AL,byte ptr [ESI + 0x8]         ; 0054553c
    INC AL                              ; 0054553f
    AND EAX,0xff                        ; 00545541
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545546 | DAT_00626114
    JZ 0x005483b6                       ; 0054554d
        ;   XREF to: 005483b6 (CONDITIONAL_JUMP)  ; LAB_005483b6
    PUSH 0xb                            ; 00545553
        ;   Label: LAB_00545553
    PUSH 0x5ef2f5                       ; 00545555 | = "pressButton"
    PUSH ESI                            ; 0054555a
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054555b
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545560
    TEST EAX,EAX                        ; 00545563
    JNZ 0x0054557e                      ; 00545565
        ;   XREF to: 0054557e (CONDITIONAL_JUMP)  ; LAB_0054557e
    MOV AL,byte ptr [ESI + 0xb]         ; 00545567
    INC AL                              ; 0054556a
    AND EAX,0xff                        ; 0054556c
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545571 | DAT_00626114
    JZ 0x0054851b                       ; 00545578
        ;   XREF to: 0054851b (CONDITIONAL_JUMP)  ; LAB_0054851b
    PUSH 0x5                            ; 0054557e
        ;   Label: LAB_0054557e
    PUSH 0x5ef355                       ; 00545580 | = "raise"
    PUSH ESI                            ; 00545585
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545586
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054558b
    TEST EAX,EAX                        ; 0054558e
    JNZ 0x005455a9                      ; 00545590
        ;   XREF to: 005455a9 (CONDITIONAL_JUMP)  ; LAB_005455a9
    MOV AL,byte ptr [ESI + 0x5]         ; 00545592
    INC AL                              ; 00545595
    AND EAX,0xff                        ; 00545597
    TEST byte ptr [EAX + 0x626114],0xe0 ; 0054559c | DAT_00626114
    JZ 0x00548657                       ; 005455a3
        ;   XREF to: 00548657 (CONDITIONAL_JUMP)  ; LAB_00548657
    PUSH 0xd                            ; 005455a9
        ;   Label: LAB_005455a9
    PUSH 0x5ef391                       ; 005455ab | = "releaseButton"
    PUSH ESI                            ; 005455b0
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005455b1
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005455b6
    TEST EAX,EAX                        ; 005455b9
    JNZ 0x005455d4                      ; 005455bb
        ;   XREF to: 005455d4 (CONDITIONAL_JUMP)  ; LAB_005455d4
    MOV AL,byte ptr [ESI + 0xd]         ; 005455bd
    INC AL                              ; 005455c0
    AND EAX,0xff                        ; 005455c2
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005455c7 | DAT_00626114
    JZ 0x00548709                       ; 005455ce
        ;   XREF to: 00548709 (CONDITIONAL_JUMP)  ; LAB_00548709
    PUSH 0x1b                           ; 005455d4
        ;   Label: LAB_005455d4
    PUSH 0x5ef3f5                       ; 005455d6 | = "removeAllItemsFromInventory"
    PUSH ESI                            ; 005455db
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005455dc
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005455e1
    TEST EAX,EAX                        ; 005455e4
    JNZ 0x005455ff                      ; 005455e6
        ;   XREF to: 005455ff (CONDITIONAL_JUMP)  ; LAB_005455ff
    MOV AL,byte ptr [ESI + 0x1b]        ; 005455e8
    INC AL                              ; 005455eb
    AND EAX,0xff                        ; 005455ed
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005455f2 | DAT_00626114
    JZ 0x00548844                       ; 005455f9
        ;   XREF to: 00548844 (CONDITIONAL_JUMP)  ; LAB_00548844
    PUSH 0x17                           ; 005455ff
        ;   Label: LAB_005455ff
    PUSH 0x5ef455                       ; 00545601 | = "removeItemFromInventory"
    PUSH ESI                            ; 00545606
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545607
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054560c
    TEST EAX,EAX                        ; 0054560f
    JNZ 0x0054562a                      ; 00545611
        ;   XREF to: 0054562a (CONDITIONAL_JUMP)  ; LAB_0054562a
    MOV AL,byte ptr [ESI + 0x17]        ; 00545613
    INC AL                              ; 00545616
    AND EAX,0xff                        ; 00545618
    TEST byte ptr [EAX + 0x626114],0xe0 ; 0054561d | DAT_00626114
    JZ 0x00548915                       ; 00545624
        ;   XREF to: 00548915 (CONDITIONAL_JUMP)  ; LAB_00548915
    PUSH 0xa                            ; 0054562a
        ;   Label: LAB_0054562a
    PUSH 0x5ef526                       ; 0054562c | = "removeKeys"
    PUSH ESI                            ; 00545631
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545632
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545637
    TEST EAX,EAX                        ; 0054563a
    JNZ 0x00545655                      ; 0054563c
        ;   XREF to: 00545655 (CONDITIONAL_JUMP)  ; LAB_00545655
    MOV AL,byte ptr [ESI + 0xa]         ; 0054563e
    INC AL                              ; 00545641
    AND EAX,0xff                        ; 00545643
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545648 | DAT_00626114
    JZ 0x00548b7d                       ; 0054564f
        ;   XREF to: 00548b7d (CONDITIONAL_JUMP)  ; LAB_00548b7d
    PUSH 0x6                            ; 00545655
        ;   Label: LAB_00545655
    PUSH 0x5ef590                       ; 00545657 | = "return"
    PUSH ESI                            ; 0054565c
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054565d
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545662
    TEST EAX,EAX                        ; 00545665
    JNZ 0x00545680                      ; 00545667
        ;   XREF to: 00545680 (CONDITIONAL_JUMP)  ; LAB_00545680
    MOV AL,byte ptr [ESI + 0x6]         ; 00545669
    INC AL                              ; 0054566c
    AND EAX,0xff                        ; 0054566e
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545673 | DAT_00626114
    JZ 0x00548c3d                       ; 0054567a
        ;   XREF to: 00548c3d (CONDITIONAL_JUMP)  ; LAB_00548c3d
    PUSH 0xb                            ; 00545680
        ;   Label: LAB_00545680
    PUSH 0x5ef5c8                       ; 00545682 | = "rollCredits"
    PUSH ESI                            ; 00545687
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545688
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054568d
    TEST EAX,EAX                        ; 00545690
    JNZ 0x005456ab                      ; 00545692
        ;   XREF to: 005456ab (CONDITIONAL_JUMP)  ; LAB_005456ab
    MOV AL,byte ptr [ESI + 0xb]         ; 00545694
    INC AL                              ; 00545697
    AND EAX,0xff                        ; 00545699
    TEST byte ptr [EAX + 0x626114],0xe0 ; 0054569e | DAT_00626114
    JZ 0x00548ca0                       ; 005456a5
        ;   XREF to: 00548ca0 (CONDITIONAL_JUMP)  ; LAB_00548ca0
    PUSH 0x3                            ; 005456ab
        ;   Label: LAB_005456ab
    PUSH 0x5ef5fd                       ; 005456ad | DAT_005ef5fd
    PUSH ESI                            ; 005456b2
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005456b3
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005456b8
    TEST EAX,EAX                        ; 005456bb
    JNZ 0x005456d6                      ; 005456bd
        ;   XREF to: 005456d6 (CONDITIONAL_JUMP)  ; LAB_005456d6
    MOV AL,byte ptr [ESI + 0x3]         ; 005456bf
    INC AL                              ; 005456c2
    AND EAX,0xff                        ; 005456c4
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005456c9 | DAT_00626114
    JZ 0x00548d36                       ; 005456d0
        ;   XREF to: 00548d36 (CONDITIONAL_JUMP)  ; LAB_00548d36
    PUSH 0xc                            ; 005456d6
        ;   Label: LAB_005456d6
    PUSH 0x5ef63a                       ; 005456d8 | = "selectWeapon"
    PUSH ESI                            ; 005456dd
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005456de
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005456e3
    TEST EAX,EAX                        ; 005456e6
    JNZ 0x00545701                      ; 005456e8
        ;   XREF to: 00545701 (CONDITIONAL_JUMP)  ; LAB_00545701
    MOV AL,byte ptr [ESI + 0xc]         ; 005456ea
    INC AL                              ; 005456ed
    AND EAX,0xff                        ; 005456ef
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005456f4 | DAT_00626114
    JZ 0x00548ea9                       ; 005456fb
        ;   XREF to: 00548ea9 (CONDITIONAL_JUMP)  ; LAB_00548ea9
    PUSH 0x10                           ; 00545701
        ;   Label: LAB_00545701
    PUSH 0x5ef6da                       ; 00545703 | = "setActorVariable"
    PUSH ESI                            ; 00545708
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545709
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054570e
    TEST EAX,EAX                        ; 00545711
    JNZ 0x0054572c                      ; 00545713
        ;   XREF to: 0054572c (CONDITIONAL_JUMP)  ; LAB_0054572c
    MOV AL,byte ptr [ESI + 0x10]        ; 00545715
    INC AL                              ; 00545718
    AND EAX,0xff                        ; 0054571a
    TEST byte ptr [EAX + 0x626114],0xe0 ; 0054571f | DAT_00626114
    JZ 0x00549043                       ; 00545726
        ;   XREF to: 00549043 (CONDITIONAL_JUMP)  ; LAB_00549043
    PUSH 0xf                            ; 0054572c
        ;   Label: LAB_0054572c
    PUSH 0x5ef729                       ; 0054572e | = "setAmbientSound"
    PUSH ESI                            ; 00545733
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545734
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545739
    TEST EAX,EAX                        ; 0054573c
    JNZ 0x00545757                      ; 0054573e
        ;   XREF to: 00545757 (CONDITIONAL_JUMP)  ; LAB_00545757
    MOV AL,byte ptr [ESI + 0xf]         ; 00545740
    INC AL                              ; 00545743
    AND EAX,0xff                        ; 00545745
    TEST byte ptr [EAX + 0x626114],0xe0 ; 0054574a | DAT_00626114
    JZ 0x00549150                       ; 00545751
        ;   XREF to: 00549150 (CONDITIONAL_JUMP)  ; LAB_00549150
    PUSH 0xe                            ; 00545757
        ;   Label: LAB_00545757
    PUSH 0x5ef739                       ; 00545759 | = "setCameraGroup"
    PUSH ESI                            ; 0054575e
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054575f
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545764
    TEST EAX,EAX                        ; 00545767
    JNZ 0x00545782                      ; 00545769
        ;   XREF to: 00545782 (CONDITIONAL_JUMP)  ; LAB_00545782
    MOV AL,byte ptr [ESI + 0xe]         ; 0054576b
    INC AL                              ; 0054576e
    AND EAX,0xff                        ; 00545770
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545775 | DAT_00626114
    JZ 0x005491ad                       ; 0054577c
        ;   XREF to: 005491ad (CONDITIONAL_JUMP)  ; LAB_005491ad
    PUSH 0x12                           ; 00545782
        ;   Label: LAB_00545782
    PUSH 0x5ef798                       ; 00545784 | = "setCharacterHealth"
    PUSH ESI                            ; 00545789
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054578a
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054578f
    TEST EAX,EAX                        ; 00545792
    JNZ 0x005457ad                      ; 00545794
        ;   XREF to: 005457ad (CONDITIONAL_JUMP)  ; LAB_005457ad
    MOV AL,byte ptr [ESI + 0x12]        ; 00545796
    INC AL                              ; 00545799
    AND EAX,0xff                        ; 0054579b
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005457a0 | DAT_00626114
    JZ 0x005492c7                       ; 005457a7
        ;   XREF to: 005492c7 (CONDITIONAL_JUMP)  ; LAB_005492c7
    PUSH 0x7                            ; 005457ad
        ;   Label: LAB_005457ad
    PUSH 0x5ef7e0                       ; 005457af | = "setEyes"
    PUSH ESI                            ; 005457b4
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005457b5
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005457ba
    TEST EAX,EAX                        ; 005457bd
    JNZ 0x005457d8                      ; 005457bf
        ;   XREF to: 005457d8 (CONDITIONAL_JUMP)  ; LAB_005457d8
    MOV AL,byte ptr [ESI + 0x7]         ; 005457c1
    INC AL                              ; 005457c4
    AND EAX,0xff                        ; 005457c6
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005457cb | DAT_00626114
    JZ 0x005493a6                       ; 005457d2
        ;   XREF to: 005493a6 (CONDITIONAL_JUMP)  ; LAB_005493a6
    PUSH 0xc                            ; 005457d8
        ;   Label: LAB_005457d8
    PUSH 0x5ef81a                       ; 005457da | = "setSwitchmap"
    PUSH ESI                            ; 005457df
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005457e0
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005457e5
    TEST EAX,EAX                        ; 005457e8
    JNZ 0x00545803                      ; 005457ea
        ;   XREF to: 00545803 (CONDITIONAL_JUMP)  ; LAB_00545803
    MOV AL,byte ptr [ESI + 0xc]         ; 005457ec
    INC AL                              ; 005457ef
    AND EAX,0xff                        ; 005457f1
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005457f6 | DAT_00626114
    JZ 0x005494b8                       ; 005457fd
        ;   XREF to: 005494b8 (CONDITIONAL_JUMP)  ; LAB_005494b8
    PUSH 0x18                           ; 00545803
        ;   Label: LAB_00545803
    PUSH 0x5ef827                       ; 00545805 | = "setFieldNotesImageSuffix"
    PUSH ESI                            ; 0054580a
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054580b
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545810
    TEST EAX,EAX                        ; 00545813
    JNZ 0x0054582e                      ; 00545815
        ;   XREF to: 0054582e (CONDITIONAL_JUMP)  ; LAB_0054582e
    MOV AL,byte ptr [ESI + 0x18]        ; 00545817
    INC AL                              ; 0054581a
    AND EAX,0xff                        ; 0054581c
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545821 | DAT_00626114
    JZ 0x0054954c                       ; 00545828
        ;   XREF to: 0054954c (CONDITIONAL_JUMP)  ; LAB_0054954c
    PUSH 0xd                            ; 0054582e
        ;   Label: LAB_0054582e
    PUSH 0x5ef840                       ; 00545830 | = "setFocusActor"
    PUSH ESI                            ; 00545835
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545836
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054583b
    TEST EAX,EAX                        ; 0054583e
    JNZ 0x00545859                      ; 00545840
        ;   XREF to: 00545859 (CONDITIONAL_JUMP)  ; LAB_00545859
    MOV AL,byte ptr [ESI + 0xd]         ; 00545842
    INC AL                              ; 00545845
    AND EAX,0xff                        ; 00545847
    TEST byte ptr [EAX + 0x626114],0xe0 ; 0054584c | DAT_00626114
    JZ 0x005495ad                       ; 00545853
        ;   XREF to: 005495ad (CONDITIONAL_JUMP)  ; LAB_005495ad
    PUSH 0xb                            ; 00545859
        ;   Label: LAB_00545859
    PUSH 0x5ef84e                       ; 0054585b | = "setHeroTask"
    PUSH ESI                            ; 00545860
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545861
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545866
    TEST EAX,EAX                        ; 00545869
    JNZ 0x00545884                      ; 0054586b
        ;   XREF to: 00545884 (CONDITIONAL_JUMP)  ; LAB_00545884
    MOV AL,byte ptr [ESI + 0xb]         ; 0054586d
    INC AL                              ; 00545870
    AND EAX,0xff                        ; 00545872
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545877 | DAT_00626114
    JZ 0x0054964e                       ; 0054587e
        ;   XREF to: 0054964e (CONDITIONAL_JUMP)  ; LAB_0054964e
    PUSH 0x9                            ; 00545884
        ;   Label: LAB_00545884
    PUSH 0x5ef8c3                       ; 00545886 | = "setIniInt"
    PUSH ESI                            ; 0054588b
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054588c
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545891
    TEST EAX,EAX                        ; 00545894
    JNZ 0x005458af                      ; 00545896
        ;   XREF to: 005458af (CONDITIONAL_JUMP)  ; LAB_005458af
    MOV AL,byte ptr [ESI + 0x9]         ; 00545898
    INC AL                              ; 0054589b
    AND EAX,0xff                        ; 0054589d
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005458a2 | DAT_00626114
    JZ 0x005497f6                       ; 005458a9
        ;   XREF to: 005497f6 (CONDITIONAL_JUMP)  ; LAB_005497f6
    PUSH 0x8                            ; 005458af
        ;   Label: LAB_005458af
    PUSH 0x5ef91b                       ; 005458b1 | = "setMouth"
    PUSH ESI                            ; 005458b6
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005458b7
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005458bc
    TEST EAX,EAX                        ; 005458bf
    JNZ 0x005458da                      ; 005458c1
        ;   XREF to: 005458da (CONDITIONAL_JUMP)  ; LAB_005458da
    MOV AL,byte ptr [ESI + 0x8]         ; 005458c3
    INC AL                              ; 005458c6
    AND EAX,0xff                        ; 005458c8
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005458cd | DAT_00626114
    JZ 0x005498dd                       ; 005458d4
        ;   XREF to: 005498dd (CONDITIONAL_JUMP)  ; LAB_005498dd
    PUSH 0x12                           ; 005458da
        ;   Label: LAB_005458da
    PUSH 0x5ef953                       ; 005458dc | = "setSayTimeOverride"
    PUSH ESI                            ; 005458e1
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005458e2
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005458e7
    TEST EAX,EAX                        ; 005458ea
    JNZ 0x00545905                      ; 005458ec
        ;   XREF to: 00545905 (CONDITIONAL_JUMP)  ; LAB_00545905
    MOV AL,byte ptr [ESI + 0x12]        ; 005458ee
    INC AL                              ; 005458f1
    AND EAX,0xff                        ; 005458f3
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005458f8 | DAT_00626114
    JZ 0x005499c9                       ; 005458ff
        ;   XREF to: 005499c9 (CONDITIONAL_JUMP)  ; LAB_005499c9
    PUSH 0xc                            ; 00545905
        ;   Label: LAB_00545905
    PUSH 0x5ef9cf                       ; 00545907 | = "setSkipLabel"
    PUSH ESI                            ; 0054590c
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054590d
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545912
    TEST EAX,EAX                        ; 00545915
    JNZ 0x00545930                      ; 00545917
        ;   XREF to: 00545930 (CONDITIONAL_JUMP)  ; LAB_00545930
    MOV AL,byte ptr [ESI + 0xc]         ; 00545919
    INC AL                              ; 0054591c
    AND EAX,0xff                        ; 0054591e
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545923 | DAT_00626114
    JZ 0x00549ac1                       ; 0054592a
        ;   XREF to: 00549ac1 (CONDITIONAL_JUMP)  ; LAB_00549ac1
    PUSH 0xa                            ; 00545930
        ;   Label: LAB_00545930
    PUSH 0x5ef9f1                       ; 00545932 | = "setSpeaker"
    PUSH ESI                            ; 00545937
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545938
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054593d
    TEST EAX,EAX                        ; 00545940
    JNZ 0x0054595b                      ; 00545942
        ;   XREF to: 0054595b (CONDITIONAL_JUMP)  ; LAB_0054595b
    MOV AL,byte ptr [ESI + 0xa]         ; 00545944
    INC AL                              ; 00545947
    AND EAX,0xff                        ; 00545949
    TEST byte ptr [EAX + 0x626114],0xe0 ; 0054594e | DAT_00626114
    JZ 0x00549b64                       ; 00545955
        ;   XREF to: 00549b64 (CONDITIONAL_JUMP)  ; LAB_00549b64
    PUSH 0xd                            ; 0054595b
        ;   Label: LAB_0054595b
    PUSH 0x5ef9fc                       ; 0054595d | = "setTimeFactor"
    PUSH ESI                            ; 00545962
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545963
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545968
    TEST EAX,EAX                        ; 0054596b
    JNZ 0x00545986                      ; 0054596d
        ;   XREF to: 00545986 (CONDITIONAL_JUMP)  ; LAB_00545986
    MOV AL,byte ptr [ESI + 0xd]         ; 0054596f
    INC AL                              ; 00545972
    AND EAX,0xff                        ; 00545974
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545979 | DAT_00626114
    JZ 0x00549c09                       ; 00545980
        ;   XREF to: 00549c09 (CONDITIONAL_JUMP)  ; LAB_00549c09
    PUSH 0x9                            ; 00545986
        ;   Label: LAB_00545986
    PUSH 0x5efa24                       ; 00545988 | = "setVictim"
    PUSH ESI                            ; 0054598d
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054598e
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545993
    TEST EAX,EAX                        ; 00545996
    JNZ 0x005459b1                      ; 00545998
        ;   XREF to: 005459b1 (CONDITIONAL_JUMP)  ; LAB_005459b1
    MOV AL,byte ptr [ESI + 0x9]         ; 0054599a
    INC AL                              ; 0054599d
    AND EAX,0xff                        ; 0054599f
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005459a4 | DAT_00626114
    JZ 0x00549d0d                       ; 005459ab
        ;   XREF to: 00549d0d (CONDITIONAL_JUMP)  ; LAB_00549d0d
    PUSH 0xe                            ; 005459b1
        ;   Label: LAB_005459b1
    PUSH 0x5efabf                       ; 005459b3 | = "setWalkTimeout"
    PUSH ESI                            ; 005459b8
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005459b9
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005459be
    TEST EAX,EAX                        ; 005459c1
    JNZ 0x005459dc                      ; 005459c3
        ;   XREF to: 005459dc (CONDITIONAL_JUMP)  ; LAB_005459dc
    MOV AL,byte ptr [ESI + 0xe]         ; 005459c5
    INC AL                              ; 005459c8
    AND EAX,0xff                        ; 005459ca
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005459cf | DAT_00626114
    JZ 0x00549ee3                       ; 005459d6
        ;   XREF to: 00549ee3 (CONDITIONAL_JUMP)  ; LAB_00549ee3
    PUSH 0xa                            ; 005459dc
        ;   Label: LAB_005459dc
    PUSH 0x5efaff                       ; 005459de | = "snapToFace"
    PUSH ESI                            ; 005459e3
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005459e4
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005459e9
    TEST EAX,EAX                        ; 005459ec
    JNZ 0x00545a07                      ; 005459ee
        ;   XREF to: 00545a07 (CONDITIONAL_JUMP)  ; LAB_00545a07
    MOV AL,byte ptr [ESI + 0xa]         ; 005459f0
    INC AL                              ; 005459f3
    AND EAX,0xff                        ; 005459f5
    TEST byte ptr [EAX + 0x626114],0xe0 ; 005459fa | DAT_00626114
    JZ 0x00549fc6                       ; 00545a01
        ;   XREF to: 00549fc6 (CONDITIONAL_JUMP)  ; LAB_00549fc6
    PUSH 0x8                            ; 00545a07
        ;   Label: LAB_00545a07
    PUSH 0x5efb42                       ; 00545a09 | = "startSay"
    PUSH ESI                            ; 00545a0e
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545a0f
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545a14
    TEST EAX,EAX                        ; 00545a17
    JNZ 0x00545a32                      ; 00545a19
        ;   XREF to: 00545a32 (CONDITIONAL_JUMP)  ; LAB_00545a32
    MOV AL,byte ptr [ESI + 0x8]         ; 00545a1b
    INC AL                              ; 00545a1e
    AND EAX,0xff                        ; 00545a20
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545a25 | DAT_00626114
    JZ 0x0054a14c                       ; 00545a2c
        ;   XREF to: 0054a14c (CONDITIONAL_JUMP)  ; LAB_0054a14c
    PUSH 0xc                            ; 00545a32
        ;   Label: LAB_00545a32
    PUSH 0x5efb84                       ; 00545a34 | = "switchCamera"
    PUSH ESI                            ; 00545a39
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545a3a
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545a3f
    TEST EAX,EAX                        ; 00545a42
    JNZ 0x00545a5d                      ; 00545a44
        ;   XREF to: 00545a5d (CONDITIONAL_JUMP)  ; LAB_00545a5d
    MOV AL,byte ptr [ESI + 0xc]         ; 00545a46
    INC AL                              ; 00545a49
    AND EAX,0xff                        ; 00545a4b
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545a50 | DAT_00626114
    JZ 0x0054a274                       ; 00545a57
        ;   XREF to: 0054a274 (CONDITIONAL_JUMP)  ; LAB_0054a274
    PUSH 0xc                            ; 00545a5d
        ;   Label: LAB_00545a5d
    PUSH 0x5efbd5                       ; 00545a5f | = "timedDisplay"
    PUSH ESI                            ; 00545a64
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545a65
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545a6a
    TEST EAX,EAX                        ; 00545a6d
    JNZ 0x00545a88                      ; 00545a6f
        ;   XREF to: 00545a88 (CONDITIONAL_JUMP)  ; LAB_00545a88
    MOV AL,byte ptr [ESI + 0xc]         ; 00545a71
    INC AL                              ; 00545a74
    AND EAX,0xff                        ; 00545a76
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545a7b | DAT_00626114
    JZ 0x0054a450                       ; 00545a82
        ;   XREF to: 0054a450 (CONDITIONAL_JUMP)  ; LAB_0054a450
    PUSH 0xa                            ; 00545a88
        ;   Label: LAB_00545a88
    PUSH 0x5efc01                       ; 00545a8a | = "turnToFace"
    PUSH ESI                            ; 00545a8f
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545a90
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545a95
    TEST EAX,EAX                        ; 00545a98
    JNZ 0x00545ab3                      ; 00545a9a
        ;   XREF to: 00545ab3 (CONDITIONAL_JUMP)  ; LAB_00545ab3
    MOV AL,byte ptr [ESI + 0xa]         ; 00545a9c
    INC AL                              ; 00545a9f
    AND EAX,0xff                        ; 00545aa1
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545aa6 | DAT_00626114
    JZ 0x0054a568                       ; 00545aad
        ;   XREF to: 0054a568 (CONDITIONAL_JUMP)  ; LAB_0054a568
    PUSH 0x4                            ; 00545ab3
        ;   Label: LAB_00545ab3
    PUSH 0x5efc44                       ; 00545ab5 | DAT_005efc44
    PUSH ESI                            ; 00545aba
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545abb
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545ac0
    TEST EAX,EAX                        ; 00545ac3
    JNZ 0x00545ade                      ; 00545ac5
        ;   XREF to: 00545ade (CONDITIONAL_JUMP)  ; LAB_00545ade
    MOV AL,byte ptr [ESI + 0x4]         ; 00545ac7
    INC AL                              ; 00545aca
    AND EAX,0xff                        ; 00545acc
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545ad1 | DAT_00626114
    JZ 0x0054a689                       ; 00545ad8
        ;   XREF to: 0054a689 (CONDITIONAL_JUMP)  ; LAB_0054a689
    PUSH 0x7                            ; 00545ade
        ;   Label: LAB_00545ade
    PUSH 0x5efc7b                       ; 00545ae0 | = "waitFor"
    PUSH ESI                            ; 00545ae5
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545ae6
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545aeb
    TEST EAX,EAX                        ; 00545aee
    JNZ 0x00545b09                      ; 00545af0
        ;   XREF to: 00545b09 (CONDITIONAL_JUMP)  ; LAB_00545b09
    MOV AL,byte ptr [ESI + 0x7]         ; 00545af2
    INC AL                              ; 00545af5
    AND EAX,0xff                        ; 00545af7
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545afc | DAT_00626114
    JZ 0x0054a727                       ; 00545b03
        ;   XREF to: 0054a727 (CONDITIONAL_JUMP)  ; LAB_0054a727
    PUSH 0x6                            ; 00545b09
        ;   Label: LAB_00545b09
    PUSH 0x5efc83                       ; 00545b0b | = "walkTo"
    PUSH ESI                            ; 00545b10
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00545b11
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00545b16
    TEST EAX,EAX                        ; 00545b19
    JNZ 0x00545b34                      ; 00545b1b
        ;   XREF to: 00545b34 (CONDITIONAL_JUMP)  ; LAB_00545b34
    MOV AL,byte ptr [ESI + 0x6]         ; 00545b1d
    INC AL                              ; 00545b20
    AND EAX,0xff                        ; 00545b22
    TEST byte ptr [EAX + 0x626114],0xe0 ; 00545b27 | DAT_00626114
    JZ 0x0054a791                       ; 00545b2e
        ;   XREF to: 0054a791 (CONDITIONAL_JUMP)  ; LAB_0054a791
    PUSH ESI                            ; 00545b34
        ;   Label: LAB_00545b34
    MOV ECX,dword ptr [ESP + 0x47f4]    ; 00545b35
    PUSH ECX                            ; 00545b3c
    PUSH 0x5efd3f                       ; 00545b3d | = "Unknown command on line %d: %s"
    JMP 0x005445cf                      ; 00545b42
        ;   XREF to: 005445cf (UNCONDITIONAL_JUMP)  ; LAB_005445cf
    CMP dword ptr [0x01e810a8],0x0      ; 00545b47 | DAT_01e810a8
        ;   Label: LAB_00545b47
    JZ 0x00545b5a                       ; 00545b4e
        ;   XREF to: 00545b5a (CONDITIONAL_JUMP)  ; LAB_00545b5a
    MOV dword ptr [0x01e810a8],0x1      ; 00545b50 | DAT_01e810a8
    MOV dword ptr [ESP + 0x4924],0x5ee51e ; 00545b5a | DAT_005ee51e
        ;   Label: LAB_00545b5a
    JMP 0x0054450b                      ; 00545b65
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    CMP dword ptr [0x01e810a8],0x0      ; 00545b6a | DAT_01e810a8
        ;   Label: LAB_00545b6a
    JZ 0x00545b7d                       ; 00545b71
        ;   XREF to: 00545b7d (CONDITIONAL_JUMP)  ; LAB_00545b7d
    MOV dword ptr [0x01e810a8],0x2      ; 00545b73 | DAT_01e810a8
    MOV dword ptr [ESP + 0x4924],0x5ee52e ; 00545b7d | DAT_005ee52e
        ;   Label: LAB_00545b7d
    JMP 0x0054450b                      ; 00545b88
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    CMP dword ptr [0x01e810a8],0x0      ; 00545b8d | DAT_01e810a8
        ;   Label: LAB_00545b8d
    JNZ 0x00545bb5                      ; 00545b94
        ;   XREF to: 00545bb5 (CONDITIONAL_JUMP)  ; LAB_00545bb5
    PUSH ESI                            ; 00545b96
    MOV EAX,[0x0061b4d0]                ; 00545b97 | DAT_0061b4d0
    PUSH EAX                            ; 00545b9c
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 00545b9d
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00545ba2
    MOV dword ptr [ESP + 0x4924],0x5ee77d ; 00545ba5 | DAT_005ee77d
        ;   Label: LAB_00545ba5
    JMP 0x0054450b                      ; 00545bb0
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH ESI                            ; 00545bb5
        ;   Label: LAB_00545bb5
    MOV EDX,dword ptr [0x0061b4d0]      ; 00545bb6 | DAT_0061b4d0
    PUSH EDX                            ; 00545bbc
    CALL core_event.cpp_CEventList_validateCommands_FUN_004a6cd0 ; 00545bbd
        ;   XREF to: 004a6cd0 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCommands_FUN_004a6cd0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00545bc2
    TEST EAX,EAX                        ; 00545bc5
    JZ 0x00545ba5                       ; 00545bc7
        ;   XREF to: 00545ba5 (CONDITIONAL_JUMP)  ; LAB_00545ba5
    MOV EDI,0x1e810b0                   ; 00545bc9
        ;   Label: LAB_00545bc9
    MOV ESI,EAX                         ; 00545bce
    PUSH EDI                            ; 00545bd0 | DAT_01e810b0
    MOV AL,byte ptr [ESI]               ; 00545bd1
        ;   Label: LAB_00545bd1
    MOV byte ptr [EDI],AL               ; 00545bd3 | DAT_01e810b0 | DAT_01e810b2
    CMP AL,0x0                          ; 00545bd5
    JZ 0x00545be9                       ; 00545bd7
        ;   XREF to: 00545be9 (CONDITIONAL_JUMP)  ; LAB_00545be9
    MOV AL,byte ptr [ESI + 0x1]         ; 00545bd9
    ADD ESI,0x2                         ; 00545bdc
    MOV byte ptr [EDI + 0x1],AL         ; 00545bdf | DAT_01e810b1 | DAT_01e810b3
    ADD EDI,0x2                         ; 00545be2
    CMP AL,0x0                          ; 00545be5
    JNZ 0x00545bd1                      ; 00545be7
        ;   XREF to: 00545bd1 (CONDITIONAL_JUMP)  ; LAB_00545bd1
    POP EDI                             ; 00545be9
        ;   Label: LAB_00545be9
    JMP 0x005445dc                      ; 00545bea
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0x12                        ; 00545bef
        ;   Label: LAB_00545bef
    PUSH ESI                            ; 00545bf2
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00545bf3
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00545bf8
    LEA EDX,[ESP + 0x47e4]              ; 00545bfb
    PUSH EDX                            ; 00545c02
    LEA EDX,[ESP + 0x3558]              ; 00545c03
    PUSH EDX                            ; 00545c0a
    LEA EDX,[ESP + 0x3494]              ; 00545c0b
    PUSH EDX                            ; 00545c12
    PUSH 0x5ee791                       ; 00545c13 | = " ( %[^,], %[^)])%n"
    MOV ESI,0xffffffff                  ; 00545c18
    PUSH EAX                            ; 00545c1d
    MOV dword ptr [ESP + 0x4938],EAX    ; 00545c1e
    MOV dword ptr [ESP + 0x47f8],ESI    ; 00545c25
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00545c2c
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 00545c31
    MOV EDI,dword ptr [ESP + 0x47e4]    ; 00545c34
    CMP EDI,0x3                         ; 00545c3b
    JGE 0x00545c57                      ; 00545c3e
        ;   XREF to: 00545c57 (CONDITIONAL_JUMP)  ; LAB_00545c57
    PUSH 0x5ee7a4                       ; 00545c40 | = "Error parsing addItemToInventory comm..."
    PUSH 0x1e810b0                      ; 00545c45 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00545c4a
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00545c4f
    JMP 0x005445dc                      ; 00545c52
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDX,dword ptr [ESP + 0x4924]    ; 00545c57
        ;   Label: LAB_00545c57
    LEA EAX,[ESP + 0x348c]              ; 00545c5e
    ADD EDX,EDI                         ; 00545c65
    PUSH EAX                            ; 00545c67
    MOV dword ptr [ESP + 0x4928],EDX    ; 00545c68
    CALL core_script.cpp_trimString_FUN_00543240 ; 00545c6f
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 00545c74
    LEA EAX,[ESP + 0x3554]              ; 00545c77
    PUSH EAX                            ; 00545c7e
    CALL core_script.cpp_trimString_FUN_00543240 ; 00545c7f
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 00545c84
    PUSH 0x1d06ad8                      ; 00545c87
    MOV ECX,dword ptr [0x01d06b10]      ; 00545c8c | g_CHeroClassInfo.name_hash
    PUSH ECX                            ; 00545c92
    LEA EAX,[ESP + 0x3494]              ; 00545c93
    PUSH EAX                            ; 00545c9a
    CALL core_script.cpp_getActor_FUN_005433c0 ; 00545c9b
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV ESI,EAX                         ; 00545ca0
    ADD ESP,0xc                         ; 00545ca2
    TEST EAX,EAX                        ; 00545ca5
    JNZ 0x00545cbb                      ; 00545ca7
        ;   XREF to: 00545cbb (CONDITIONAL_JUMP)  ; LAB_00545cbb
    CMP dword ptr [0x01e818bc],0x0      ; 00545ca9 | DAT_01e818bc
    JNZ 0x00544524                      ; 00545cb0
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 00545cb6
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    PUSH 0x7c2ff8                       ; 00545cbb | g_CDemonActorClassInfo
        ;   Label: LAB_00545cbb
    MOV EDI,dword ptr [0x007c3030]      ; 00545cc0 | g_CDemonActorClassInfo.name_hash
    PUSH EDI                            ; 00545cc6
    LEA EAX,[ESP + 0x355c]              ; 00545cc7
    PUSH EAX                            ; 00545cce
    CALL core_script.cpp_getActor_FUN_005433c0 ; 00545ccf
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00545cd4
    TEST EAX,EAX                        ; 00545cd7
    JNZ 0x00545ced                      ; 00545cd9
        ;   XREF to: 00545ced (CONDITIONAL_JUMP)  ; LAB_00545ced
    CMP dword ptr [0x01e818bc],0x0      ; 00545cdb | DAT_01e818bc
    JNZ 0x00544524                      ; 00545ce2
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 00545ce8
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDX,dword ptr [0x01e810a8]      ; 00545ced | DAT_01e810a8
        ;   Label: LAB_00545ced
    TEST EDX,EDX                        ; 00545cf3
    JNZ 0x0054450b                      ; 00545cf5
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH EDX                            ; 00545cfb
    PUSH EAX                            ; 00545cfc
    ADD ESI,0x1fae8                     ; 00545cfd
    PUSH ESI                            ; 00545d03
    CALL core_inv.cpp_FUN_004f7690      ; 00545d04
        ;   XREF to: 004f7690 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004f7690(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 00545d09
    JMP 0x0054450b                      ; 00545d0c
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0xe                         ; 00545d11
        ;   Label: LAB_00545d11
    PUSH ESI                            ; 00545d14
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00545d15
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00545d1a
    LEA EDX,[ESP + 0x47e8]              ; 00545d1d
    PUSH EDX                            ; 00545d24
    LEA EDX,[ESP + 0x4810]              ; 00545d25
    PUSH EDX                            ; 00545d2c
    LEA EDX,[ESP + 0x42a4]              ; 00545d2d
    PUSH EDX                            ; 00545d34
    LEA EDX,[ESP + 0x3d94]              ; 00545d35
    PUSH EDX                            ; 00545d3c
    PUSH 0x5ee7e2                       ; 00545d3d | = "( %[^,], %[^,], %f )%n"
    MOV EDI,0xffffffff                  ; 00545d42
    PUSH EAX                            ; 00545d47
    MOV dword ptr [ESP + 0x493c],EAX    ; 00545d48
    MOV dword ptr [ESP + 0x4800],EDI    ; 00545d4f
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00545d56
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x18                        ; 00545d5b
    MOV EAX,dword ptr [ESP + 0x47e8]    ; 00545d5e
    CMP EAX,0x5                         ; 00545d65
    JGE 0x00545d81                      ; 00545d68
        ;   XREF to: 00545d81 (CONDITIONAL_JUMP)  ; LAB_00545d81
    PUSH 0x5ee7f9                       ; 00545d6a | = "Error parsing addLightFilter command ..."
    PUSH 0x1e810b0                      ; 00545d6f | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00545d74
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00545d79
    JMP 0x005445dc                      ; 00545d7c
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDX,dword ptr [ESP + 0x4924]    ; 00545d81
        ;   Label: LAB_00545d81
    ADD EDX,EAX                         ; 00545d88
    LEA EAX,[ESP + 0x483c]              ; 00545d8a
    PUSH EAX                            ; 00545d91
    LEA EAX,[ESP + 0x47f0]              ; 00545d92
    PUSH EAX                            ; 00545d99
    LEA EAX,[ESP + 0x3d90]              ; 00545d9a
    PUSH EAX                            ; 00545da1
    MOV ECX,dword ptr [0x00622c18]      ; 00545da2 | g_CDemonSetPtr
    PUSH ECX                            ; 00545da8 | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x4934],EDX    ; 00545da9
    CALL core_set.cpp_CDemonSet_addLightFilter_FUN_00555a20 ; 00545db0
        ;   XREF to: 00555a20 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addLightFilter_FUN_00555a20(CDemonSet * this_ptr, char * light_name, C3DSLight * * out_light, CDemonLight * * out_master_light)
    ADD ESP,0x10                        ; 00545db5
    CMP dword ptr [ESP + 0x47ec],0x0    ; 00545db8
    JNZ 0x00545de1                      ; 00545dc0
        ;   XREF to: 00545de1 (CONDITIONAL_JUMP)  ; LAB_00545de1
    LEA EAX,[ESP + 0x3d88]              ; 00545dc2
    PUSH EAX                            ; 00545dc9
    PUSH 0x5ee824                       ; 00545dca | = "Light \"%s\" does not exist"
    PUSH 0x1e810b0                      ; 00545dcf | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00545dd4
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00545dd9
    JMP 0x005445dc                      ; 00545ddc
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EAX,[ESP + 0x429c]              ; 00545de1
        ;   Label: LAB_00545de1
    PUSH EAX                            ; 00545de8
    PUSH 0x5ee83e                       ; 00545de9 | DAT_005ee83e
    CALL engine_dosio.cpp_getFileSize_FUN_00478fb0 ; 00545dee
        ;   XREF to: 00478fb0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00478fb0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00545df3
    TEST EAX,EAX                        ; 00545df6
    JLE 0x00545e2d                      ; 00545df8
        ;   XREF to: 00545e2d (CONDITIONAL_JUMP)  ; LAB_00545e2d
    MOV EDI,dword ptr [0x01e810a8]      ; 00545dfa | DAT_01e810a8
    TEST EDI,EDI                        ; 00545e00
    JNZ 0x0054450b                      ; 00545e02
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH EDI                            ; 00545e08
    LEA EAX,[ESP + 0x42a0]              ; 00545e09
    PUSH dword ptr [ESP + 0x4810]       ; 00545e10
    PUSH EAX                            ; 00545e17
    MOV EAX,dword ptr [ESP + 0x47f8]    ; 00545e18
    PUSH EAX                            ; 00545e1f
    CALL core_setutil.cpp_C3DSLight_addFilter_FUN_0055d490 ; 00545e20
        ;   XREF to: 0055d490 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSLight_addFilter_FUN_0055d490(C3DSLight * this_ptr, char * filter_name, float duration, int filter_mode)
    ADD ESP,0x10                        ; 00545e25
    JMP 0x0054450b                      ; 00545e28
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EAX,[ESP + 0x429c]              ; 00545e2d
        ;   Label: LAB_00545e2d
    PUSH EAX                            ; 00545e34
    PUSH 0x5ee842                       ; 00545e35 | = "Can't open filter \"%s\""
    PUSH 0x1e810b0                      ; 00545e3a | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00545e3f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00545e44
    JMP 0x005445dc                      ; 00545e47
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0x10                        ; 00545e4c
        ;   Label: LAB_00545e4c
    PUSH ESI                            ; 00545e4f
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00545e50
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00545e55
    MOV dword ptr [ESP + 0x4924],EAX    ; 00545e58
    LEA EAX,[ESP + 0x3dec]              ; 00545e5f
    PUSH EAX                            ; 00545e66
    LEA EAX,[ESP + 0x4928]              ; 00545e67
    PUSH EAX                            ; 00545e6e
    CALL core_script.cpp_parseConditionExpr_FUN_00543380 ; 00545e6f
        ;   XREF to: 00543380 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseConditionExpr_FUN_00543380(char * * cursor, char * out_buffer)
    ADD ESP,0x8                         ; 00545e74
    TEST EAX,EAX                        ; 00545e77
    JNZ 0x00545bc9                      ; 00545e79
        ;   XREF to: 00545bc9 (CONDITIONAL_JUMP)  ; LAB_00545bc9
    CMP dword ptr [0x01e810a8],0x0      ; 00545e7f | DAT_01e810a8
    JNZ 0x0054450b                      ; 00545e86
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EAX,[ESP + 0x3dec]              ; 00545e8c
    PUSH EAX                            ; 00545e93
    MOV ECX,dword ptr [0x0061b4d0]      ; 00545e94 | DAT_0061b4d0
    PUSH ECX                            ; 00545e9a
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00545e9b
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    MOV EDX,dword ptr [0x0061d95c]      ; 00545ea0 | g_CGamePtr
    ADD ESP,0x8                         ; 00545ea6
    MOV dword ptr [EDX + 0x24c],EAX     ; 00545ea9 | g_CGameInstance.allow_enemy_attack_flag
    JMP 0x0054450b                      ; 00545eaf
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0x11                        ; 00545eb4
        ;   Label: LAB_00545eb4
    PUSH ESI                            ; 00545eb7
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00545eb8
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00545ebd
    MOV dword ptr [ESP + 0x4924],EAX    ; 00545ec0
    LEA EAX,[ESP + 0x4620]              ; 00545ec7
    PUSH EAX                            ; 00545ece
    LEA EAX,[ESP + 0x4928]              ; 00545ecf
    PUSH EAX                            ; 00545ed6
    CALL core_script.cpp_parseConditionExpr_FUN_00543380 ; 00545ed7
        ;   XREF to: 00543380 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseConditionExpr_FUN_00543380(char * * cursor, char * out_buffer)
    ADD ESP,0x8                         ; 00545edc
    TEST EAX,EAX                        ; 00545edf
    JNZ 0x00545bc9                      ; 00545ee1
        ;   XREF to: 00545bc9 (CONDITIONAL_JUMP)  ; LAB_00545bc9
    CMP dword ptr [0x01e810a8],0x0      ; 00545ee7 | DAT_01e810a8
    JNZ 0x0054450b                      ; 00545eee
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EAX,[ESP + 0x4620]              ; 00545ef4
    PUSH EAX                            ; 00545efb
    MOV EDI,dword ptr [0x0061b4d0]      ; 00545efc | DAT_0061b4d0
    PUSH EDI                            ; 00545f02
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00545f03
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00545f08
    XOR EDX,EDX                         ; 00545f0b
    TEST EAX,EAX                        ; 00545f0d
    SETZ AL                             ; 00545f0f
    MOV DL,AL                           ; 00545f12
    MOV EAX,[0x0061d95c]                ; 00545f14 | g_CGamePtr
    MOV dword ptr [0x01e818b4],EDX      ; 00545f19 | DAT_01e818b4
    MOV dword ptr [EAX + 0x254],EDX     ; 00545f1f | g_CGameInstance.hero_controls_blocked
    JMP 0x0054450b                      ; 00545f25
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0xf                         ; 00545f2a
        ;   Label: LAB_00545f2a
    PUSH ESI                            ; 00545f2d
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00545f2e
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00545f33
    MOV dword ptr [ESP + 0x4924],EAX    ; 00545f36
    LEA EAX,[ESP + 0x3c5c]              ; 00545f3d
    PUSH EAX                            ; 00545f44
    LEA EAX,[ESP + 0x4928]              ; 00545f45
    PUSH EAX                            ; 00545f4c
    CALL core_script.cpp_parseConditionExpr_FUN_00543380 ; 00545f4d
        ;   XREF to: 00543380 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseConditionExpr_FUN_00543380(char * * cursor, char * out_buffer)
    ADD ESP,0x8                         ; 00545f52
    TEST EAX,EAX                        ; 00545f55
    JNZ 0x00545bc9                      ; 00545f57
        ;   XREF to: 00545bc9 (CONDITIONAL_JUMP)  ; LAB_00545bc9
    CMP dword ptr [0x01e810a8],0x0      ; 00545f5d | DAT_01e810a8
    JNZ 0x0054450b                      ; 00545f64
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EAX,[ESP + 0x3c5c]              ; 00545f6a
    PUSH EAX                            ; 00545f71
    MOV EDX,dword ptr [0x0061b4d0]      ; 00545f72 | DAT_0061b4d0
    PUSH EDX                            ; 00545f78
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00545f79
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    MOV EDX,dword ptr [0x0061d95c]      ; 00545f7e | g_CGamePtr
    ADD ESP,0x8                         ; 00545f84
    MOV dword ptr [EDX + 0x248],EAX     ; 00545f87 | g_CGameInstance.allow_damage_flag
    JMP 0x0054450b                      ; 00545f8d
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0x15                        ; 00545f92
        ;   Label: LAB_00545f92
    PUSH ESI                            ; 00545f95
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00545f96
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00545f9b
    LEA EDX,[ESP + 0x4820]              ; 00545f9e
    PUSH EDX                            ; 00545fa5
    LEA EDX,[ESP + 0x1870]              ; 00545fa6
    PUSH EDX                            ; 00545fad
    LEA EDX,[ESP + 0x1f7c]              ; 00545fae
    PUSH EDX                            ; 00545fb5
    PUSH 0x5ee8a2                       ; 00545fb6 | = "(%[^,], %[^)])%n"
    MOV ECX,0xffffffff                  ; 00545fbb
    PUSH EAX                            ; 00545fc0
    MOV dword ptr [ESP + 0x4938],EAX    ; 00545fc1
    MOV dword ptr [ESP + 0x4834],ECX    ; 00545fc8
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00545fcf
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 00545fd4
    MOV ESI,dword ptr [ESP + 0x4820]    ; 00545fd7
    CMP ESI,0x2                         ; 00545fde
    JGE 0x00545ffa                      ; 00545fe1
        ;   XREF to: 00545ffa (CONDITIONAL_JUMP)  ; LAB_00545ffa
    PUSH 0x5ee8b3                       ; 00545fe3 | = "Error parsing attachActorToPlatform c..."
    PUSH 0x1e810b0                      ; 00545fe8 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00545fed
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00545ff2
    JMP 0x005445dc                      ; 00545ff5
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDI,dword ptr [ESP + 0x4924]    ; 00545ffa
        ;   Label: LAB_00545ffa
    LEA EAX,[ESP + 0x1f74]              ; 00546001
    ADD EDI,ESI                         ; 00546008
    PUSH EAX                            ; 0054600a
    MOV dword ptr [ESP + 0x4928],EDI    ; 0054600b
    CALL core_script.cpp_trimString_FUN_00543240 ; 00546012
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 00546017
    LEA EAX,[ESP + 0x186c]              ; 0054601a
    PUSH EAX                            ; 00546021
    CALL core_script.cpp_trimString_FUN_00543240 ; 00546022
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 00546027
    PUSH 0x1e7d3e4                      ; 0054602a
    MOV EAX,[0x01e7d41c]                ; 0054602f | g_CPlatformClassInfo.name_hash
    PUSH EAX                            ; 00546034
    LEA EAX,[ESP + 0x1874]              ; 00546035
    PUSH EAX                            ; 0054603c
    CALL core_script.cpp_getActor_FUN_005433c0 ; 0054603d
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV ESI,EAX                         ; 00546042
    ADD ESP,0xc                         ; 00546044
    TEST EAX,EAX                        ; 00546047
    JNZ 0x0054605d                      ; 00546049
        ;   XREF to: 0054605d (CONDITIONAL_JUMP)  ; LAB_0054605d
    CMP dword ptr [0x01e818bc],0x0      ; 0054604b | DAT_01e818bc
    JNZ 0x00544524                      ; 00546052
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 00546058
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    PUSH 0x7c2ff8                       ; 0054605d | g_CDemonActorClassInfo
        ;   Label: LAB_0054605d
    MOV EDX,dword ptr [0x007c3030]      ; 00546062 | g_CDemonActorClassInfo.name_hash
    PUSH EDX                            ; 00546068
    LEA EAX,[ESP + 0x1f7c]              ; 00546069
    PUSH EAX                            ; 00546070
    CALL core_script.cpp_getActor_FUN_005433c0 ; 00546071
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00546076
    TEST EAX,EAX                        ; 00546079
    JNZ 0x0054608f                      ; 0054607b
        ;   XREF to: 0054608f (CONDITIONAL_JUMP)  ; LAB_0054608f
    CMP dword ptr [0x01e818bc],0x0      ; 0054607d | DAT_01e818bc
    JNZ 0x00544524                      ; 00546084
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 0054608a
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    CMP dword ptr [0x01e810a8],0x0      ; 0054608f | DAT_01e810a8
        ;   Label: LAB_0054608f
    JNZ 0x0054450b                      ; 00546096
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH EAX                            ; 0054609c
    PUSH ESI                            ; 0054609d
    CALL core_platfrm.cpp_CPlatform_attachActor_FUN_0053adb0 ; 0054609e
        ;   XREF to: 0053adb0 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_attachActor_FUN_0053adb0(CPlatform * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005460a3
    JMP 0x0054450b                      ; 005460a6
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0xb                         ; 005460ab
        ;   Label: LAB_005460ab
    PUSH ESI                            ; 005460ae
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 005460af
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 005460b4
    MOV dword ptr [ESP + 0x4924],EAX    ; 005460b7
    CMP dword ptr [0x01e810a8],0x0      ; 005460be | DAT_01e810a8
    JNZ 0x0054450b                      ; 005460c5
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EDX,dword ptr [0x0061d95c]      ; 005460cb | g_CGamePtr
    PUSH EDX                            ; 005460d1 | g_CGameInstance
    CALL core_game.cpp_FUN_004d6030     ; 005460d2
        ;   XREF to: 004d6030 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004d6030(CGame * this_ptr)
    ADD ESP,0x4                         ; 005460d7
    JMP 0x0054450b                      ; 005460da
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0xc                         ; 005460df
        ;   Label: LAB_005460df
    PUSH ESI                            ; 005460e2
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 005460e3
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 005460e8
    MOV ECX,dword ptr [0x01e810a8]      ; 005460eb | DAT_01e810a8
    MOV dword ptr [ESP + 0x4924],EAX    ; 005460f1
    TEST ECX,ECX                        ; 005460f8
    JNZ 0x0054450b                      ; 005460fa
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV ESI,dword ptr [0x0061d95c]      ; 00546100 | g_CGamePtr
    PUSH ESI                            ; 00546106 | g_CGameInstance
    CALL core_game.cpp_CGame_beginFadeOut_FUN_004d6070 ; 00546107
        ;   XREF to: 004d6070 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_beginFadeOut_FUN_004d6070(CGame * this_ptr)
    ADD ESP,0x4                         ; 0054610c
    JMP 0x0054450b                      ; 0054610f
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0xa                         ; 00546114
        ;   Label: LAB_00546114
    PUSH ESI                            ; 00546117
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00546118
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 0054611d
    MOV EDI,dword ptr [0x01e810a8]      ; 00546120 | DAT_01e810a8
    MOV dword ptr [ESP + 0x4924],EAX    ; 00546126
    TEST EDI,EDI                        ; 0054612d
    JNZ 0x0054450b                      ; 0054612f
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EAX,dword ptr [ESP + 0x47f0]    ; 00546135
    PUSH EAX                            ; 0054613c
    PUSH 0x5ee909                       ; 0054613d | = "Script breakpoint reached at line %d"
    LEA EAX,[ESP + 0x4240]              ; 00546142
    PUSH EAX                            ; 00546149
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0054614a
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0054614f
    LEA EAX,[ESP + 0x4238]              ; 00546152
    PUSH 0x40a00000                     ; 00546159
    PUSH EAX                            ; 0054615e
    MOV EDX,dword ptr [0x0061d95c]      ; 0054615f | g_CGamePtr
    PUSH EDX                            ; 00546165 | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 00546166
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 0054616b
    MOV dword ptr [EBX + 0x1c],0x2      ; 0054616e
    JMP 0x0054450b                      ; 00546175
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0x10                        ; 0054617a
        ;   Label: LAB_0054617a
    PUSH ESI                            ; 0054617d
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 0054617e
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00546183
    MOV ECX,dword ptr [0x01e810a8]      ; 00546186 | DAT_01e810a8
    MOV dword ptr [ESP + 0x4924],EAX    ; 0054618c
    TEST ECX,ECX                        ; 00546193
    JNZ 0x0054450b                      ; 00546195
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV ESI,dword ptr [0x00622c18]      ; 0054619b | g_CDemonSetPtr
    PUSH ESI                            ; 005461a1 | g_CDemonSetInstance
    CALL core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_0055b200 ; 005461a2
        ;   XREF to: 0055b200 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_0055b200(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005461a7
    JMP 0x0054450b                      ; 005461aa
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0xc                         ; 005461af
        ;   Label: LAB_005461af
    PUSH ESI                            ; 005461b2
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 005461b3
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 005461b8
    PUSH 0xc8                           ; 005461bb
    MOV dword ptr [ESP + 0x4928],EAX    ; 005461c0
    LEA EAX,[ESP + 0x3940]              ; 005461c7
    PUSH EAX                            ; 005461ce
    LEA EAX,[ESP + 0x492c]              ; 005461cf
    PUSH EAX                            ; 005461d6
    CALL core_script.cpp_parseArgument_FUN_005432d0 ; 005461d7
        ;   XREF to: 005432d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005432d0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 005461dc
    TEST EAX,EAX                        ; 005461df
    JZ 0x00546209                       ; 005461e1
        ;   XREF to: 00546209 (CONDITIONAL_JUMP)  ; LAB_00546209
    MOV EDI,0x1e810b0                   ; 005461e3
    MOV ESI,EAX                         ; 005461e8
    PUSH EDI                            ; 005461ea | DAT_01e810b0
    MOV AL,byte ptr [ESI]               ; 005461eb
        ;   Label: LAB_005461eb
    MOV byte ptr [EDI],AL               ; 005461ed | DAT_01e810b0 | DAT_01e810b2
    CMP AL,0x0                          ; 005461ef
    JZ 0x00546203                       ; 005461f1
        ;   XREF to: 00546203 (CONDITIONAL_JUMP)  ; LAB_00546203
    MOV AL,byte ptr [ESI + 0x1]         ; 005461f3
    ADD ESI,0x2                         ; 005461f6
    MOV byte ptr [EDI + 0x1],AL         ; 005461f9 | DAT_01e810b1 | DAT_01e810b3
    ADD EDI,0x2                         ; 005461fc
    CMP AL,0x0                          ; 005461ff
    JNZ 0x005461eb                      ; 00546201
        ;   XREF to: 005461eb (CONDITIONAL_JUMP)  ; LAB_005461eb
    POP EDI                             ; 00546203
        ;   Label: LAB_00546203
    JMP 0x005445dc                      ; 00546204
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    PUSH 0x5ee94c                       ; 00546209 | DAT_005ee94c
        ;   Label: LAB_00546209
    LEA EAX,[ESP + 0x3940]              ; 0054620e
    PUSH EAX                            ; 00546215
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 00546216
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0054621b
    TEST EAX,EAX                        ; 0054621e
    JNZ 0x0054627c                      ; 00546220
        ;   XREF to: 0054627c (CONDITIONAL_JUMP)  ; LAB_0054627c
    MOV ESI,dword ptr [0x01e810a8]      ; 00546222 | DAT_01e810a8
    TEST ESI,ESI                        ; 00546228
    JNZ 0x0054450b                      ; 0054622a
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    XOR EDI,EDI                         ; 00546230
    MOV EAX,[0x00622c18]                ; 00546232 | g_CDemonSetPtr
        ;   Label: LAB_00546232
    CMP EDI,dword ptr [EAX + 0x14d164]  ; 00546237 | g_CDemonSetInstance.actor_count
    JGE 0x0054450b                      ; 0054623d
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV ECX,dword ptr [0x007c637c]      ; 00546243 | g_CCharacterClassInfo.name_hash
    PUSH ECX                            ; 00546249
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 0054624a | g_CDemonSetInstance.actors[0]
    PUSH EDX                            ; 00546251
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00546252
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00546257
    TEST EAX,EAX                        ; 0054625a
    JNZ 0x00546264                      ; 0054625c
        ;   XREF to: 00546264 (CONDITIONAL_JUMP)  ; LAB_00546264
    INC EDI                             ; 0054625e
        ;   Label: LAB_0054625e
    ADD ESI,0x4                         ; 0054625f
    JMP 0x00546232                      ; 00546262
        ;   XREF to: 00546232 (UNCONDITIONAL_JUMP)  ; LAB_00546232
    PUSH 0x0                            ; 00546264
        ;   Label: LAB_00546264
    PUSH 0x0                            ; 00546266
    PUSH 0x0                            ; 00546268
    MOV EDX,dword ptr [EAX + 0x154]     ; 0054626a
    PUSH EAX                            ; 00546270
    CALL dword ptr [EDX + 0x130]        ; 00546271
    ADD ESP,0x10                        ; 00546277
    JMP 0x0054625e                      ; 0054627a
        ;   XREF to: 0054625e (UNCONDITIONAL_JUMP)  ; LAB_0054625e
    PUSH 0x7c6344                       ; 0054627c | g_CCharacterClassInfo
        ;   Label: LAB_0054627c
    MOV EDI,dword ptr [0x007c637c]      ; 00546281 | g_CCharacterClassInfo.name_hash
    PUSH EDI                            ; 00546287
    LEA EAX,[ESP + 0x3944]              ; 00546288
    PUSH EAX                            ; 0054628f
    CALL core_script.cpp_getActor_FUN_005433c0 ; 00546290
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00546295
    TEST EAX,EAX                        ; 00546298
    JNZ 0x005462ae                      ; 0054629a
        ;   XREF to: 005462ae (CONDITIONAL_JUMP)  ; LAB_005462ae
    CMP dword ptr [0x01e818bc],0x0      ; 0054629c | DAT_01e818bc
    JNZ 0x00544524                      ; 005462a3
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 005462a9
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    CMP dword ptr [0x01e810a8],0x0      ; 005462ae | DAT_01e810a8
        ;   Label: LAB_005462ae
    JNZ 0x0054450b                      ; 005462b5
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH 0x0                            ; 005462bb
    PUSH 0x0                            ; 005462bd
    PUSH 0x0                            ; 005462bf
    MOV EDX,dword ptr [EAX + 0x154]     ; 005462c1
    PUSH EAX                            ; 005462c7
    CALL dword ptr [EDX + 0x130]        ; 005462c8
    ADD ESP,0x10                        ; 005462ce
    JMP 0x0054450b                      ; 005462d1
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0xe                         ; 005462d6
        ;   Label: LAB_005462d6
    PUSH ESI                            ; 005462d9
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 005462da
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 005462df
    PUSH 0xc8                           ; 005462e2
    MOV dword ptr [ESP + 0x4928],EAX    ; 005462e7
    LEA EAX,[ESP + 0x24f0]              ; 005462ee
    PUSH EAX                            ; 005462f5
    LEA EAX,[ESP + 0x492c]              ; 005462f6
    PUSH EAX                            ; 005462fd
    CALL core_script.cpp_parseArgument_FUN_005432d0 ; 005462fe
        ;   XREF to: 005432d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005432d0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 00546303
    TEST EAX,EAX                        ; 00546306
    JZ 0x00546330                       ; 00546308
        ;   XREF to: 00546330 (CONDITIONAL_JUMP)  ; LAB_00546330
    MOV EDI,0x1e810b0                   ; 0054630a
        ;   Label: LAB_0054630a
    MOV ESI,EAX                         ; 0054630f
    PUSH EDI                            ; 00546311 | DAT_01e810b0
    MOV AL,byte ptr [ESI]               ; 00546312
        ;   Label: LAB_00546312
    MOV byte ptr [EDI],AL               ; 00546314 | DAT_01e810b0 | DAT_01e810b2
    CMP AL,0x0                          ; 00546316
    JZ 0x0054632a                       ; 00546318
        ;   XREF to: 0054632a (CONDITIONAL_JUMP)  ; LAB_0054632a
    MOV AL,byte ptr [ESI + 0x1]         ; 0054631a
    ADD ESI,0x2                         ; 0054631d
    MOV byte ptr [EDI + 0x1],AL         ; 00546320 | DAT_01e810b1 | DAT_01e810b3
    ADD EDI,0x2                         ; 00546323
    CMP AL,0x0                          ; 00546326
    JNZ 0x00546312                      ; 00546328
        ;   XREF to: 00546312 (CONDITIONAL_JUMP)  ; LAB_00546312
    POP EDI                             ; 0054632a
        ;   Label: LAB_0054632a
    JMP 0x005445dc                      ; 0054632b
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EAX,[ESP + 0x24ec]              ; 00546330
        ;   Label: LAB_00546330
    PUSH EAX                            ; 00546337
    CALL core_script.cpp_trimString_FUN_00543240 ; 00546338
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    MOV EDI,dword ptr [0x01e810a8]      ; 0054633d | DAT_01e810a8
    ADD ESP,0x4                         ; 00546343
    TEST EDI,EDI                        ; 00546346
    JNZ 0x0054450b                      ; 00546348
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EAX,[ESP + 0x24ec]              ; 0054634e
    PUSH EAX                            ; 00546355
    MOV EAX,[0x0061f650]                ; 00546356 | DAT_0061f650
    PUSH EAX                            ; 0054635b | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_setMissionName_FUN_0051bc90 ; 0054635c
        ;   XREF to: 0051bc90 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_setMissionName_FUN_0051bc90(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 00546361
    MOV dword ptr [EBX],0x1             ; 00546364
    MOV dword ptr [ESP + 0x47f4],EDI    ; 0054636a
    JMP 0x0054450b                      ; 00546371
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0x11                        ; 00546376
        ;   Label: LAB_00546376
    PUSH ESI                            ; 00546379
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 0054637a
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 0054637f
    LEA EDX,[ESP + 0x4864]              ; 00546382
    PUSH EDX                            ; 00546389
    LEA EDX,[ESP + 0xdb0]               ; 0054638a
    PUSH EDX                            ; 00546391
    LEA EDX,[ESP + 0x4800]              ; 00546392
    PUSH EDX                            ; 00546399
    PUSH 0x5ee971                       ; 0054639a | = "(%d , %[^)])%n"
    MOV ECX,0xffffffff                  ; 0054639f
    PUSH EAX                            ; 005463a4
    MOV dword ptr [ESP + 0x4938],EAX    ; 005463a5
    MOV dword ptr [ESP + 0x4878],ECX    ; 005463ac
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 005463b3
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 005463b8
    MOV ESI,dword ptr [ESP + 0x4864]    ; 005463bb
    CMP ESI,0x2                         ; 005463c2
    JGE 0x005463de                      ; 005463c5
        ;   XREF to: 005463de (CONDITIONAL_JUMP)  ; LAB_005463de
    PUSH 0x5ee980                       ; 005463c7 | = "Error parsing changeSetFilename comma..."
    PUSH 0x1e810b0                      ; 005463cc | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005463d1
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 005463d6
    JMP 0x005445dc                      ; 005463d9
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDI,dword ptr [ESP + 0x4924]    ; 005463de
        ;   Label: LAB_005463de
    LEA EAX,[ESP + 0xdac]               ; 005463e5
    ADD EDI,ESI                         ; 005463ec
    PUSH EAX                            ; 005463ee
    MOV dword ptr [ESP + 0x4928],EDI    ; 005463ef
    CALL core_script.cpp_trimString_FUN_00543240 ; 005463f6
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 005463fb
    MOV EAX,dword ptr [ESP + 0x47f8]    ; 005463fe
    TEST EAX,EAX                        ; 00546405
    JL 0x005464bb                       ; 00546407
        ;   XREF to: 005464bb (CONDITIONAL_JUMP)  ; LAB_005464bb
    MOV EDX,dword ptr [0x0061f650]      ; 0054640d | DAT_0061f650
    CMP EAX,dword ptr [EDX + 0x4]       ; 00546413 | DAT_01d2c904
    JGE 0x005464bb                      ; 00546416
        ;   XREF to: 005464bb (CONDITIONAL_JUMP)  ; LAB_005464bb
    LEA EAX,[ESP + 0xcac]               ; 0054641c
    PUSH EAX                            ; 00546423
    PUSH 0x0                            ; 00546424
    PUSH 0x0                            ; 00546426
    PUSH 0x0                            ; 00546428
    LEA EAX,[ESP + 0xdbc]               ; 0054642a
    PUSH EAX                            ; 00546431
    CALL engine_dosio.cpp_splitPath_FUN_00479580 ; 00546432
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00546437
    CMP byte ptr [ESP + 0xcac],0x0      ; 0054643a
    JNZ 0x00546472                      ; 00546442
        ;   XREF to: 00546472 (CONDITIONAL_JUMP)  ; LAB_00546472
    MOV ESI,0x5ee9c0                    ; 00546444 | DAT_005ee9c0
    LEA EDI,[ESP + 0xdac]               ; 00546449
    PUSH EDI                            ; 00546450
    SUB ECX,ECX                         ; 00546451
    DEC ECX                             ; 00546453
    MOV AL,0x0                          ; 00546454
    SCASB.REPNE ES:EDI                  ; 00546456
    DEC EDI                             ; 00546458
    MOV AL,byte ptr [ESI]               ; 00546459 | DAT_005ee9c0 | DAT_005ee9c2
        ;   Label: LAB_00546459
    MOV byte ptr [EDI],AL               ; 0054645b
    CMP AL,0x0                          ; 0054645d
    JZ 0x00546471                       ; 0054645f
        ;   XREF to: 00546471 (CONDITIONAL_JUMP)  ; LAB_00546471
    MOV AL,byte ptr [ESI + 0x1]         ; 00546461 | DAT_005ee9c1 | DAT_005ee9c3
    ADD ESI,0x2                         ; 00546464
    MOV byte ptr [EDI + 0x1],AL         ; 00546467
    ADD EDI,0x2                         ; 0054646a
    CMP AL,0x0                          ; 0054646d
    JNZ 0x00546459                      ; 0054646f
        ;   XREF to: 00546459 (CONDITIONAL_JUMP)  ; LAB_00546459
    POP EDI                             ; 00546471
        ;   Label: LAB_00546471
    LEA EAX,[ESP + 0xdac]               ; 00546472
        ;   Label: LAB_00546472
    PUSH EAX                            ; 00546479
    PUSH 0x5ee9c5                       ; 0054647a | = "models"
    CALL engine_dosio.cpp_getFileSize_FUN_00478fb0 ; 0054647f
        ;   XREF to: 00478fb0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00478fb0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00546484
    TEST EAX,EAX                        ; 00546487
    JLE 0x005464d2                      ; 00546489
        ;   XREF to: 005464d2 (CONDITIONAL_JUMP)  ; LAB_005464d2
    CMP dword ptr [0x01e810a8],0x0      ; 0054648b | DAT_01e810a8
    JNZ 0x0054450b                      ; 00546492
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EAX,[ESP + 0xdac]               ; 00546498
    PUSH EAX                            ; 0054649f
    MOV EDI,dword ptr [ESP + 0x47fc]    ; 005464a0
    PUSH EDI                            ; 005464a7
    MOV EAX,[0x0061f650]                ; 005464a8 | DAT_0061f650
    PUSH EAX                            ; 005464ad | DAT_01d2c900
    CALL core_mission.cpp_FUN_0051b500  ; 005464ae
        ;   XREF to: 0051b500 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_0051b500()
    ADD ESP,0xc                         ; 005464b3
    JMP 0x0054450b                      ; 005464b6
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH 0x5ee9ae                       ; 005464bb | = "Invalid set index"
        ;   Label: LAB_005464bb
    PUSH 0x1e810b0                      ; 005464c0 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005464c5
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 005464ca
    JMP 0x005445dc                      ; 005464cd
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EAX,[ESP + 0xdac]               ; 005464d2
        ;   Label: LAB_005464d2
    PUSH EAX                            ; 005464d9
    PUSH 0x5ee9cc                       ; 005464da | = "File models\\%s doesn't exist"
    PUSH 0x1e810b0                      ; 005464df | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005464e4
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 005464e9
    JMP 0x005445dc                      ; 005464ec
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0x5                         ; 005464f1
        ;   Label: LAB_005464f1
    PUSH ESI                            ; 005464f4
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 005464f5
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    MOV EDX,0xffffffff                  ; 005464fa
    ADD ESP,0x4                         ; 005464ff
    MOV dword ptr [ESP + 0x47fc],EDX    ; 00546502
    LEA EDX,[ESP + 0x47fc]              ; 00546509
    PUSH EDX                            ; 00546510
    LEA EDX,[ESP + 0x45c0]              ; 00546511
    PUSH EDX                            ; 00546518
    PUSH 0x5ee9ef                       ; 00546519 | = "(%[^)])%n"
    PUSH EAX                            ; 0054651e
    MOV dword ptr [ESP + 0x4934],EAX    ; 0054651f
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00546526
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 0054652b
    CMP dword ptr [ESP + 0x47fc],0x3    ; 0054652e
    JL 0x00546610                       ; 00546536
        ;   XREF to: 00546610 (CONDITIONAL_JUMP)  ; LAB_00546610
    LEA EAX,[ESP + 0x45bc]              ; 0054653c
    PUSH EAX                            ; 00546543
    CALL core_script.cpp_trimString_FUN_00543240 ; 00546544
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 00546549
    MOV EAX,dword ptr [ESP + 0x47fc]    ; 0054654c
    MOV ESI,dword ptr [ESP + 0x4924]    ; 00546553
    ADD ESI,EAX                         ; 0054655a
    LEA EAX,[ESP + 0x45bc]              ; 0054655c
    PUSH EAX                            ; 00546563
    PUSH EBX                            ; 00546564
    MOV dword ptr [ESP + 0x492c],ESI    ; 00546565
    CALL core_script.cpp_CScript_findDialogEntry_FUN_0054b2a0 ; 0054656c
        ;   XREF to: 0054b2a0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_findDialogEntry_FUN_0054b2a0(CScript * this_ptr, char * path)
    ADD ESP,0x8                         ; 00546571
    TEST EAX,EAX                        ; 00546574
    JL 0x00546627                       ; 00546576
        ;   XREF to: 00546627 (CONDITIONAL_JUMP)  ; LAB_00546627
    IMUL EDX,EAX,0x226                  ; 0054657c
    MOV EAX,dword ptr [EBX + 0x24]      ; 00546582
    ADD EAX,EDX                         ; 00546585
    LEA EDX,[EAX + 0x78]                ; 00546587
    MOV dword ptr [ESP + 0x4800],EDX    ; 0054658a
    LEA EDX,[EAX + 0x96]                ; 00546591
    LEA EDI,[ESP + 0x45bc]              ; 00546597
    LEA ESI,[EAX + 0x3c]                ; 0054659e
    MOV dword ptr [ESP + 0x4804],EDX    ; 005465a1
    PUSH EDI                            ; 005465a8
    MOV AL,byte ptr [ESI]               ; 005465a9
        ;   Label: LAB_005465a9
    MOV byte ptr [EDI],AL               ; 005465ab
    CMP AL,0x0                          ; 005465ad
    JZ 0x005465c1                       ; 005465af
        ;   XREF to: 005465c1 (CONDITIONAL_JUMP)  ; LAB_005465c1
    MOV AL,byte ptr [ESI + 0x1]         ; 005465b1
    ADD ESI,0x2                         ; 005465b4
    MOV byte ptr [EDI + 0x1],AL         ; 005465b7
    ADD EDI,0x2                         ; 005465ba
    CMP AL,0x0                          ; 005465bd
    JNZ 0x005465a9                      ; 005465bf
        ;   XREF to: 005465a9 (CONDITIONAL_JUMP)  ; LAB_005465a9
    POP EDI                             ; 005465c1
        ;   Label: LAB_005465c1
    FLD float ptr [EBX + 0x4c]          ; 005465c2
        ;   Label: LAB_005465c2
    FLDZ                                ; 005465c5
    FCOMPP                              ; 005465c7
    FNSTSW AX                           ; 005465c9
    SAHF                                ; 005465cb
    JA 0x00546678                       ; 005465cc
        ;   XREF to: 00546678 (CONDITIONAL_JUMP)  ; LAB_00546678
    CMP dword ptr [0x01e810a8],0x0      ; 005465d2 | DAT_01e810a8
        ;   Label: LAB_005465d2
    JNZ 0x0054450b                      ; 005465d9
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV ESI,dword ptr [EBP + 0x18]      ; 005465df
    PUSH ESI                            ; 005465e2
    PUSH dword ptr [EBX + 0x4c]         ; 005465e3
    PUSH EBX                            ; 005465e6
    CALL core_script.cpp_CScript_processTimer_FUN_0054ac20 ; 005465e7
        ;   XREF to: 0054ac20 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_processTimer_FUN_0054ac20(CScript * this_ptr, float delta_time, float * timer_value)
    ADD ESP,0xc                         ; 005465ec
    MOV dword ptr [ESP + 0x47f4],EAX    ; 005465ef
    TEST EAX,EAX                        ; 005465f6
    JLE 0x0054450b                      ; 005465f8
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EDI,dword ptr [EBX + 0x4]       ; 005465fe
    PUSH EDI                            ; 00546601
    PUSH EBX                            ; 00546602
    CALL core_script.cpp_CScript_setSpeaker_FUN_0054aca0 ; 00546603
        ;   XREF to: 0054aca0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_setSpeaker_FUN_0054aca0(CScript * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00546608
    JMP 0x0054450b                      ; 0054660b
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH 0x5ee9f9                       ; 00546610 | = "Error parsing dbSay arguments"
        ;   Label: LAB_00546610
    PUSH 0x1e810b0                      ; 00546615 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0054661a
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 0054661f
    JMP 0x005445dc                      ; 00546622
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EAX,[ESP + 0x109c]              ; 00546627
        ;   Label: LAB_00546627
    MOV dword ptr [ESP + 0x4804],EAX    ; 0054662e
    LEA EAX,[ESP + 0x45bc]              ; 00546635
    PUSH EAX                            ; 0054663c
    PUSH 0x5eea19                       ; 0054663d | = "[Can't find %s in database]"
    LEA EAX,[ESP + 0x10a4]              ; 00546642
    MOV EDI,0x5eea17                    ; 00546649 | DAT_005eea17
    PUSH EAX                            ; 0054664e
    MOV dword ptr [ESP + 0x480c],EDI    ; 0054664f | DAT_005eea17
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00546656
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0054665b
    LEA EAX,[ESP + 0x109c]              ; 0054665e
    PUSH EAX                            ; 00546665
    PUSH 0x1e818c0                      ; 00546666
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 0054666b
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00546670
    JMP 0x005465c2                      ; 00546673
        ;   XREF to: 005465c2 (UNCONDITIONAL_JUMP)  ; LAB_005465c2
    MOV EAX,dword ptr [ESP + 0x4804]    ; 00546678
        ;   Label: LAB_00546678
    PUSH EAX                            ; 0054667f
    LEA EAX,[ESP + 0x45c0]              ; 00546680
    PUSH EAX                            ; 00546687
    MOV EDX,dword ptr [ESP + 0x4808]    ; 00546688
    PUSH EDX                            ; 0054668f
    PUSH EBX                            ; 00546690
    CALL core_script.cpp_CScript_startDialogLine_FUN_0054aa60 ; 00546691
        ;   XREF to: 0054aa60 (UNCONDITIONAL_CALL)  ; float core_script.cpp_CScript_startDialogLine_FUN_0054aa60(CScript * this_ptr, char * actor_specifier, char * sound_name, char * dialog_text)
    MOV dword ptr [ESP + 0x4954],EAX    ; 00546696
    FLDZ                                ; 0054669d
    MOV EAX,dword ptr [ESP + 0x4954]    ; 0054669f
    MOV dword ptr [EBX + 0x4c],EAX      ; 005466a6
    ADD ESP,0x10                        ; 005466a9
    FCOMP float ptr [EBX + 0x4c]        ; 005466ac
    FNSTSW AX                           ; 005466af
    SAHF                                ; 005466b1
    JA 0x005445dc                       ; 005466b2
        ;   XREF to: 005445dc (CONDITIONAL_JUMP)  ; LAB_005445dc
    JMP 0x005465d2                      ; 005466b8
        ;   XREF to: 005465d2 (UNCONDITIONAL_JUMP)  ; LAB_005465d2
    ADD ESI,0xa                         ; 005466bd
        ;   Label: LAB_005466bd
    PUSH ESI                            ; 005466c0
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 005466c1
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    MOV EDX,0xffffffff                  ; 005466c6
    ADD ESP,0x4                         ; 005466cb
    MOV dword ptr [ESP + 0x4808],EDX    ; 005466ce
    LEA EDX,[ESP + 0x4808]              ; 005466d5
    PUSH EDX                            ; 005466dc
    LEA EDX,[ESP + 0x3e54]              ; 005466dd
    PUSH EDX                            ; 005466e4
    PUSH 0x5eea40                       ; 005466e5 | = "(%[^)])%n"
    PUSH EAX                            ; 005466ea
    MOV dword ptr [ESP + 0x4934],EAX    ; 005466eb
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 005466f2
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 005466f7
    CMP dword ptr [ESP + 0x4808],0x3    ; 005466fa
    JL 0x005467d3                       ; 00546702
        ;   XREF to: 005467d3 (CONDITIONAL_JUMP)  ; LAB_005467d3
    LEA EAX,[ESP + 0x3e50]              ; 00546708
    PUSH EAX                            ; 0054670f
    CALL core_script.cpp_trimString_FUN_00543240 ; 00546710
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 00546715
    MOV EAX,dword ptr [ESP + 0x4808]    ; 00546718
    MOV ESI,dword ptr [ESP + 0x4924]    ; 0054671f
    ADD ESI,EAX                         ; 00546726
    LEA EAX,[ESP + 0x3e50]              ; 00546728
    PUSH EAX                            ; 0054672f
    PUSH EBX                            ; 00546730
    MOV dword ptr [ESP + 0x492c],ESI    ; 00546731
    CALL core_script.cpp_CScript_findDialogEntry_FUN_0054b2a0 ; 00546738
        ;   XREF to: 0054b2a0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_findDialogEntry_FUN_0054b2a0(CScript * this_ptr, char * path)
    ADD ESP,0x8                         ; 0054673d
    TEST EAX,EAX                        ; 00546740
    JL 0x005467ea                       ; 00546742
        ;   XREF to: 005467ea (CONDITIONAL_JUMP)  ; LAB_005467ea
    IMUL EAX,EAX,0x226                  ; 00546748
    MOV EDX,dword ptr [EBX + 0x24]      ; 0054674e
    ADD EAX,EDX                         ; 00546751
    LEA EDX,[EAX + 0x78]                ; 00546753
    MOV dword ptr [ESP + 0x4810],EDX    ; 00546756
    LEA EDX,[EAX + 0x96]                ; 0054675d
    LEA EDI,[ESP + 0x3e50]              ; 00546763
    LEA ESI,[EAX + 0x3c]                ; 0054676a
    MOV dword ptr [ESP + 0x4814],EDX    ; 0054676d
    PUSH EDI                            ; 00546774
    MOV AL,byte ptr [ESI]               ; 00546775
        ;   Label: LAB_00546775
    MOV byte ptr [EDI],AL               ; 00546777
    CMP AL,0x0                          ; 00546779
    JZ 0x0054678d                       ; 0054677b
        ;   XREF to: 0054678d (CONDITIONAL_JUMP)  ; LAB_0054678d
    MOV AL,byte ptr [ESI + 0x1]         ; 0054677d
    ADD ESI,0x2                         ; 00546780
    MOV byte ptr [EDI + 0x1],AL         ; 00546783
    ADD EDI,0x2                         ; 00546786
    CMP AL,0x0                          ; 00546789
    JNZ 0x00546775                      ; 0054678b
        ;   XREF to: 00546775 (CONDITIONAL_JUMP)  ; LAB_00546775
    POP EDI                             ; 0054678d
        ;   Label: LAB_0054678d
    MOV EAX,dword ptr [ESP + 0x4814]    ; 0054678e
        ;   Label: LAB_0054678e
    PUSH EAX                            ; 00546795
    LEA EAX,[ESP + 0x3e54]              ; 00546796
    PUSH EAX                            ; 0054679d
    MOV EDX,dword ptr [ESP + 0x4818]    ; 0054679e
    PUSH EDX                            ; 005467a5 | DAT_005eea68
    PUSH EBX                            ; 005467a6
    CALL core_script.cpp_CScript_startDialogLine_FUN_0054aa60 ; 005467a7
        ;   XREF to: 0054aa60 (UNCONDITIONAL_CALL)  ; float core_script.cpp_CScript_startDialogLine_FUN_0054aa60(CScript * this_ptr, char * actor_specifier, char * sound_name, char * dialog_text)
    MOV dword ptr [ESP + 0x4954],EAX    ; 005467ac
    FLDZ                                ; 005467b3
    MOV EAX,dword ptr [ESP + 0x4954]    ; 005467b5
    MOV dword ptr [EBX + 0x4c],EAX      ; 005467bc
    ADD ESP,0x10                        ; 005467bf
    FCOMP float ptr [EBX + 0x4c]        ; 005467c2
    FNSTSW AX                           ; 005467c5
    SAHF                                ; 005467c7
    JA 0x005445dc                       ; 005467c8
        ;   XREF to: 005445dc (CONDITIONAL_JUMP)  ; LAB_005445dc
    JMP 0x0054450b                      ; 005467ce
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH 0x5eea4a                       ; 005467d3 | = "Error parsing dbSay arguments"
        ;   Label: LAB_005467d3
    PUSH 0x1e810b0                      ; 005467d8 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005467dd
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 005467e2
    JMP 0x005445dc                      ; 005467e5
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EAX,[ESP + 0x1934]              ; 005467ea
        ;   Label: LAB_005467ea
    MOV dword ptr [ESP + 0x4814],EAX    ; 005467f1
    LEA EAX,[ESP + 0x3e50]              ; 005467f8
    PUSH EAX                            ; 005467ff
    PUSH 0x5eea6a                       ; 00546800 | = "[Can't find %s in database]"
    LEA EAX,[ESP + 0x193c]              ; 00546805
    MOV EDI,0x5eea68                    ; 0054680c | DAT_005eea68
    PUSH EAX                            ; 00546811
    MOV dword ptr [ESP + 0x481c],EDI    ; 00546812 | DAT_005eea68
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00546819
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0054681e
    LEA EAX,[ESP + 0x1934]              ; 00546821
    PUSH EAX                            ; 00546828
    PUSH 0x1e818c0                      ; 00546829
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 0054682e
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00546833
    JMP 0x0054678e                      ; 00546836
        ;   XREF to: 0054678e (UNCONDITIONAL_JUMP)  ; LAB_0054678e
    ADD ESI,0xe                         ; 0054683b
        ;   Label: LAB_0054683b
    PUSH ESI                            ; 0054683e
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 0054683f
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00546844
    LEA EDX,[ESP + 0x4818]              ; 00546847
    PUSH EDX                            ; 0054684e
    LEA EDX,[ESP + 0x4820]              ; 0054684f
    PUSH EDX                            ; 00546856
    LEA EDX,[ESP + 0x4434]              ; 00546857
    PUSH EDX                            ; 0054685e
    PUSH 0x5eea95                       ; 0054685f | = "(%[^,], %f)%n"
    MOV ECX,0xffffffff                  ; 00546864
    PUSH EAX                            ; 00546869
    MOV dword ptr [ESP + 0x4938],EAX    ; 0054686a
    MOV dword ptr [ESP + 0x482c],ECX    ; 00546871
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00546878
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 0054687d
    CMP dword ptr [ESP + 0x4818],0x3    ; 00546880
    JL 0x00546967                       ; 00546888
        ;   XREF to: 00546967 (CONDITIONAL_JUMP)  ; LAB_00546967
    LEA EAX,[ESP + 0x442c]              ; 0054688e
    PUSH EAX                            ; 00546895
    CALL core_script.cpp_trimString_FUN_00543240 ; 00546896
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 0054689b
    MOV EAX,dword ptr [ESP + 0x4818]    ; 0054689e
    MOV EDI,dword ptr [ESP + 0x4924]    ; 005468a5
    ADD EDI,EAX                         ; 005468ac
    LEA EAX,[ESP + 0x442c]              ; 005468ae
    PUSH EAX                            ; 005468b5
    PUSH EBX                            ; 005468b6
    MOV dword ptr [ESP + 0x492c],EDI    ; 005468b7
    CALL core_script.cpp_CScript_findDialogEntry_FUN_0054b2a0 ; 005468be
        ;   XREF to: 0054b2a0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_findDialogEntry_FUN_0054b2a0(CScript * this_ptr, char * path)
    ADD ESP,0x8                         ; 005468c3
    TEST EAX,EAX                        ; 005468c6
    JL 0x0054697e                       ; 005468c8
        ;   XREF to: 0054697e (CONDITIONAL_JUMP)  ; LAB_0054697e
    IMUL EAX,EAX,0x226                  ; 005468ce
    MOV EDX,dword ptr [EBX + 0x24]      ; 005468d4
    ADD EAX,EDX                         ; 005468d7
    LEA EDX,[EAX + 0x96]                ; 005468d9
    LEA EDI,[ESP + 0x442c]              ; 005468df
    LEA ESI,[EAX + 0x3c]                ; 005468e6
    MOV dword ptr [ESP + 0x4840],EDX    ; 005468e9
    PUSH EDI                            ; 005468f0
    MOV AL,byte ptr [ESI]               ; 005468f1
        ;   Label: LAB_005468f1
    MOV byte ptr [EDI],AL               ; 005468f3
    CMP AL,0x0                          ; 005468f5
    JZ 0x00546909                       ; 005468f7
        ;   XREF to: 00546909 (CONDITIONAL_JUMP)  ; LAB_00546909
    MOV AL,byte ptr [ESI + 0x1]         ; 005468f9
    ADD ESI,0x2                         ; 005468fc
    MOV byte ptr [EDI + 0x1],AL         ; 005468ff
    ADD EDI,0x2                         ; 00546902
    CMP AL,0x0                          ; 00546905
    JNZ 0x005468f1                      ; 00546907
        ;   XREF to: 005468f1 (CONDITIONAL_JUMP)  ; LAB_005468f1
    POP EDI                             ; 00546909
        ;   Label: LAB_00546909
    CMP dword ptr [0x01e810a8],0x0      ; 0054690a | DAT_01e810a8
        ;   Label: LAB_0054690a
    JNZ 0x0054450b                      ; 00546911
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV ESI,dword ptr [ESP + 0x4840]    ; 00546917
    LEA EDI,[EBX + 0x50]                ; 0054691e
    MOV EDX,dword ptr [EBP + 0x18]      ; 00546921
    PUSH EDI                            ; 00546924
    MOV AL,byte ptr [ESI]               ; 00546925
        ;   Label: LAB_00546925
    MOV byte ptr [EDI],AL               ; 00546927
    CMP AL,0x0                          ; 00546929
    JZ 0x0054693d                       ; 0054692b
        ;   XREF to: 0054693d (CONDITIONAL_JUMP)  ; LAB_0054693d
    MOV AL,byte ptr [ESI + 0x1]         ; 0054692d
    ADD ESI,0x2                         ; 00546930
    MOV byte ptr [EDI + 0x1],AL         ; 00546933
    ADD EDI,0x2                         ; 00546936
    CMP AL,0x0                          ; 00546939
    JNZ 0x00546925                      ; 0054693b
        ;   XREF to: 00546925 (CONDITIONAL_JUMP)  ; LAB_00546925
    POP EDI                             ; 0054693d
        ;   Label: LAB_0054693d
    PUSH EDX                            ; 0054693e
    PUSH dword ptr [ESP + 0x4820]       ; 0054693f
    PUSH EBX                            ; 00546946
    CALL core_script.cpp_CScript_processTimer_FUN_0054ac20 ; 00546947
        ;   XREF to: 0054ac20 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_processTimer_FUN_0054ac20(CScript * this_ptr, float delta_time, float * timer_value)
    ADD ESP,0xc                         ; 0054694c
    MOV dword ptr [ESP + 0x47f4],EAX    ; 0054694f
    TEST EAX,EAX                        ; 00546956
    JLE 0x0054450b                      ; 00546958
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV byte ptr [EBX + 0x50],0x0       ; 0054695e
    JMP 0x0054450b                      ; 00546962
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH 0x5eeaa3                       ; 00546967 | = "Error parsing dbTimedDisplay arguments"
        ;   Label: LAB_00546967
    PUSH 0x1e810b0                      ; 0054696c | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00546971
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00546976
    JMP 0x005445dc                      ; 00546979
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EAX,[ESP + 0x3874]              ; 0054697e
        ;   Label: LAB_0054697e
    MOV dword ptr [ESP + 0x4840],EAX    ; 00546985
    LEA EAX,[ESP + 0x442c]              ; 0054698c
    PUSH EAX                            ; 00546993
    PUSH 0x5eeaca                       ; 00546994 | = "[Can't find %s in database]"
    LEA EAX,[ESP + 0x387c]              ; 00546999
    PUSH EAX                            ; 005469a0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005469a1
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 005469a6
    JMP 0x0054690a                      ; 005469a9
        ;   XREF to: 0054690a (UNCONDITIONAL_JUMP)  ; LAB_0054690a
    ADD ESI,0x5                         ; 005469ae
        ;   Label: LAB_005469ae
    PUSH ESI                            ; 005469b1
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 005469b2
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 005469b7
    PUSH 0x12c                          ; 005469ba
    MOV dword ptr [ESP + 0x4928],EAX    ; 005469bf
    LEA EAX,[ESP + 0xa80]               ; 005469c6
    PUSH EAX                            ; 005469cd
    LEA EAX,[ESP + 0x492c]              ; 005469ce
    PUSH EAX                            ; 005469d5
    CALL core_script.cpp_parseArgument_FUN_005432d0 ; 005469d6
        ;   XREF to: 005432d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005432d0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 005469db
    TEST EAX,EAX                        ; 005469de
    JNZ 0x0054630a                      ; 005469e0
        ;   XREF to: 0054630a (CONDITIONAL_JUMP)  ; LAB_0054630a
    CMP dword ptr [0x01e810a8],0x0      ; 005469e6 | DAT_01e810a8
    JNZ 0x0054450b                      ; 005469ed
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EAX,[ESP + 0xa7c]               ; 005469f3
    PUSH EAX                            ; 005469fa
    MOV ESI,dword ptr [ESP + 0x47f4]    ; 005469fb
    PUSH ESI                            ; 00546a02
    PUSH 0x5eeaec                       ; 00546a03 | = "Script debug message at line %d:\n%s"
    MOV EDI,dword ptr [0x0061abc0]      ; 00546a08 | g_CEditorToolsPtr
    PUSH EDI                            ; 00546a0e
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_004942e0 ; 00546a0f
        ;   XREF to: 004942e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_004942e0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 00546a14
    JMP 0x0054450b                      ; 00546a17
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0x9                         ; 00546a1c
        ;   Label: LAB_00546a1c
    PUSH ESI                            ; 00546a1f
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00546a20
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    MOV EDX,0xffffffff                  ; 00546a25
    ADD ESP,0x4                         ; 00546a2a
    MOV dword ptr [ESP + 0x4824],EDX    ; 00546a2d
    LEA EDX,[ESP + 0x4824]              ; 00546a34
    PUSH EDX                            ; 00546a3b
    LEA EDX,[ESP + 0x2d88]              ; 00546a3c
    PUSH EDX                            ; 00546a43
    LEA EDX,[ESP + 0x2e54]              ; 00546a44
    PUSH EDX                            ; 00546a4b
    PUSH 0x5eeb1a                       ; 00546a4c | = "(%[^,], %[^,)]%n"
    PUSH EAX                            ; 00546a51
    MOV dword ptr [ESP + 0x4938],EAX    ; 00546a52
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00546a59
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 00546a5e
    MOV ECX,dword ptr [ESP + 0x4824]    ; 00546a61
    CMP ECX,0x5                         ; 00546a68
    JGE 0x00546a84                      ; 00546a6b
        ;   XREF to: 00546a84 (CONDITIONAL_JUMP)  ; LAB_00546a84
    PUSH 0x5eeb2b                       ; 00546a6d | = "Error parsing dismember command parms"
    PUSH 0x1e810b0                      ; 00546a72 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00546a77
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00546a7c
    JMP 0x005445dc                      ; 00546a7f
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV ESI,dword ptr [ESP + 0x4924]    ; 00546a84
        ;   Label: LAB_00546a84
    LEA EAX,[ESP + 0x2e4c]              ; 00546a8b
    ADD ESI,ECX                         ; 00546a92
    PUSH EAX                            ; 00546a94
    MOV dword ptr [ESP + 0x4928],ESI    ; 00546a95
    CALL core_script.cpp_trimString_FUN_00543240 ; 00546a9c
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 00546aa1
    LEA EAX,[ESP + 0x2d84]              ; 00546aa4
    PUSH EAX                            ; 00546aab
    CALL core_script.cpp_trimString_FUN_00543240 ; 00546aac
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 00546ab1
    PUSH 0x7c6344                       ; 00546ab4 | g_CCharacterClassInfo
    MOV EDI,dword ptr [0x007c637c]      ; 00546ab9 | g_CCharacterClassInfo.name_hash
    PUSH EDI                            ; 00546abf
    LEA EAX,[ESP + 0x2e54]              ; 00546ac0
    PUSH EAX                            ; 00546ac7
    CALL core_script.cpp_getActor_FUN_005433c0 ; 00546ac8
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00546acd
    MOV dword ptr [ESP + 0x4828],EAX    ; 00546ad0
    TEST EAX,EAX                        ; 00546ad7
    JNZ 0x00546aed                      ; 00546ad9
        ;   XREF to: 00546aed (CONDITIONAL_JUMP)  ; LAB_00546aed
    CMP dword ptr [0x01e818bc],0x0      ; 00546adb | DAT_01e818bc
    JNZ 0x00544524                      ; 00546ae2
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 00546ae8
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EDX,[ESP + 0xfac]               ; 00546aed
        ;   Label: LAB_00546aed
    PUSH EDX                            ; 00546af4
    LEA EDX,[ESP + 0x2d88]              ; 00546af5
    PUSH EDX                            ; 00546afc
    PUSH EAX                            ; 00546afd
    CALL core_script.cpp_parseBodyPartMask_FUN_00543610 ; 00546afe
        ;   XREF to: 00543610 (UNCONDITIONAL_CALL)  ; int core_script.cpp_parseBodyPartMask_FUN_00543610(CCharacter * character, char * part_names, int * part_mask)
    ADD ESP,0xc                         ; 00546b03
    TEST EAX,EAX                        ; 00546b06
    JZ 0x005445dc                       ; 00546b08
        ;   XREF to: 005445dc (CONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EAX,[ESP + 0x47bc]              ; 00546b0e
    PUSH EAX                            ; 00546b15
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 00546b16
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 00546b1b
    MOV EDX,dword ptr [ESP + 0x4924]    ; 00546b1e
    MOV CL,byte ptr [EDX]               ; 00546b25
    XOR EAX,EAX                         ; 00546b27
    CMP CL,0x2c                         ; 00546b29
    JZ 0x00546bcc                       ; 00546b2c
        ;   XREF to: 00546bcc (CONDITIONAL_JUMP)  ; LAB_00546bcc
    MOV EDX,dword ptr [ESP + 0x4924]    ; 00546b32
        ;   Label: LAB_00546b32
    CMP byte ptr [EDX],0x29             ; 00546b39
    JNZ 0x00546d4c                      ; 00546b3c
        ;   XREF to: 00546d4c (CONDITIONAL_JUMP)  ; LAB_00546d4c
    LEA EDI,[EDX + 0x1]                 ; 00546b42
    MOV EDX,dword ptr [0x01e810a8]      ; 00546b45 | DAT_01e810a8
    MOV dword ptr [ESP + 0x4924],EDI    ; 00546b4b
    TEST EDX,EDX                        ; 00546b52
    JNZ 0x0054450b                      ; 00546b54
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EDX,dword ptr [ESP + 0x4828]    ; 00546b5a
    MOV ECX,dword ptr [EDX + 0x27a0]    ; 00546b61
    PUSH ECX                            ; 00546b67
    PUSH 0x0                            ; 00546b68
    PUSH 0x0                            ; 00546b6a
    PUSH EDX                            ; 00546b6c
    PUSH EAX                            ; 00546b6d
    LEA EAX,[EDX + 0x30]                ; 00546b6e
    PUSH EAX                            ; 00546b71
    LEA EAX,[EDX + 0x20]                ; 00546b72
    PUSH EAX                            ; 00546b75
    XOR ESI,ESI                         ; 00546b76
    CALL core_bodypart.cpp_createBodyPart_FUN_00418940 ; 00546b78
        ;   XREF to: 00418940 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00418940(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 00546b7d
    XOR EDI,EDI                         ; 00546b80
    MOV dword ptr [ESP + 0x482c],EAX    ; 00546b82
    CMP dword ptr [ESP + EDI*0x1 + 0xfac],0x0 ; 00546b89
        ;   Label: LAB_00546b89
    JZ 0x00546bae                       ; 00546b91
        ;   XREF to: 00546bae (CONDITIONAL_JUMP)  ; LAB_00546bae
    PUSH 0x0                            ; 00546b93
    PUSH ESI                            ; 00546b95
    MOV EAX,dword ptr [ESP + 0x4834]    ; 00546b96
    PUSH EAX                            ; 00546b9d
    MOV EDX,dword ptr [ESP + 0x4834]    ; 00546b9e
    PUSH EDX                            ; 00546ba5
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 00546ba6
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 00546bab
    INC ESI                             ; 00546bae
        ;   Label: LAB_00546bae
    ADD EDI,0x4                         ; 00546baf
    CMP ESI,0x3c                        ; 00546bb2
    JL 0x00546b89                       ; 00546bb5
        ;   XREF to: 00546b89 (CONDITIONAL_JUMP)  ; LAB_00546b89
    MOV ECX,dword ptr [ESP + 0x482c]    ; 00546bb7
    PUSH ECX                            ; 00546bbe
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90 ; 00546bbf
        ;   XREF to: 00419b90 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 00546bc4
    JMP 0x0054450b                      ; 00546bc7
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    MOV dword ptr [ESP + 0x4824],0xffffffff ; 00546bcc
        ;   Label: LAB_00546bcc
    LEA EAX,[ESP + 0x4824]              ; 00546bd7
    PUSH EAX                            ; 00546bde
    LEA EAX,[ESP + 0x30]                ; 00546bdf
    PUSH EAX                            ; 00546be3
    LEA EAX,[ESP + 0x47cc]              ; 00546be4
    PUSH EAX                            ; 00546beb
    LEA EAX,[ESP + 0x47cc]              ; 00546bec
    PUSH EAX                            ; 00546bf3
    LEA EAX,[ESP + 0x47cc]              ; 00546bf4
    PUSH EAX                            ; 00546bfb
    PUSH 0x5eeb51                       ; 00546bfc | = ",%f ,%f ,%f ,%f %n"
    PUSH EDX                            ; 00546c01
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00546c02
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x1c                        ; 00546c07
    MOV ECX,dword ptr [ESP + 0x4824]    ; 00546c0a
    CMP ECX,0x5                         ; 00546c11
    JL 0x00546d35                       ; 00546c14
        ;   XREF to: 00546d35 (CONDITIONAL_JUMP)  ; LAB_00546d35
    MOV ESI,dword ptr [ESP + 0x4924]    ; 00546c1a
    FLD float ptr [ESP + 0x2c]          ; 00546c21
    ADD ESI,ECX                         ; 00546c25
    FLDZ                                ; 00546c27
    MOV dword ptr [ESP + 0x4924],ESI    ; 00546c29
    FCOMPP                              ; 00546c30
    FNSTSW AX                           ; 00546c32
    SAHF                                ; 00546c34
    JNC 0x00546d29                      ; 00546c35
        ;   XREF to: 00546d29 (CONDITIONAL_JUMP)  ; LAB_00546d29
    FLD float ptr [ESP + 0x2c]          ; 00546c3b
    FMUL float ptr [0x005efda3]         ; 00546c3f | DAT_005efda3
    FMUL float ptr [0x005efda7]         ; 00546c45 | DAT_005efda7
    FSTP float ptr [ESP + 0x2c]         ; 00546c4b
    PUSH dword ptr [ESP + 0x2c]         ; 00546c4f
    FLD float ptr [ESP + 0x30]          ; 00546c53
    SUB ESP,0x4                         ; 00546c57
    FCHS                                ; 00546c5a
    FSTP float ptr [ESP]                ; 00546c5c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00546c5f
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x494c],EAX    ; 00546c64
    FLD float ptr [ESP + 0x494c]        ; 00546c6b
    ADD ESP,0x8                         ; 00546c72
    SUB ESP,0x4                         ; 00546c75
    FSTP float ptr [ESP]                ; 00546c78
    PUSH 0x0                            ; 00546c7b
    PUSH dword ptr [ESP + 0x34]         ; 00546c7d
    FLD float ptr [ESP + 0x38]          ; 00546c81
    SUB ESP,0x4                         ; 00546c85
    FCHS                                ; 00546c88
    FSTP float ptr [ESP]                ; 00546c8a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00546c8d
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x4954],EAX    ; 00546c92
    FLD float ptr [ESP + 0x4954]        ; 00546c99
    ADD ESP,0x8                         ; 00546ca0
    SUB ESP,0x4                         ; 00546ca3
    LEA ESI,[ESP + 0x47a4]              ; 00546ca6
    FSTP float ptr [ESP]                ; 00546cad
    CALL core_doc.cpp_FUN_00476620      ; 00546cb0
        ;   XREF to: 00476620 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_00476620()
    ADD ESP,0xc                         ; 00546cb5
    LEA EAX,[ESP + 0x47b0]              ; 00546cb8
    LEA EDI,[ESP + 0x47b0]              ; 00546cbf
    PUSH EAX                            ; 00546cc6
    LEA EAX,[ESP + 0x4750]              ; 00546cc7
    LEA ESI,[ESP + 0x479c]              ; 00546cce
    PUSH EAX                            ; 00546cd5
    MOVSD ES:EDI,ESI                    ; 00546cd6
    MOVSD ES:EDI,ESI                    ; 00546cd7
    MOVSD ES:EDI,ESI                    ; 00546cd8
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 00546cd9
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00546cde
    LEA EAX,[ESP + 0x47bc]              ; 00546ce1
    PUSH EAX                            ; 00546ce8
    LEA EAX,[ESP + 0x4750]              ; 00546ce9
    PUSH EAX                            ; 00546cf0
    LEA ESI,[ESP + 0x4788]              ; 00546cf1
    CALL core_dirmat.cpp_FUN_0045f690   ; 00546cf8
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    ADD ESP,0x8                         ; 00546cfd
    LEA EAX,[ESP + 0x47a4]              ; 00546d00
    LEA EDI,[ESP + 0x47a4]              ; 00546d07
    PUSH EAX                            ; 00546d0e
    LEA EAX,[ESP + 0x47c0]              ; 00546d0f
    LEA ESI,[ESP + 0x4784]              ; 00546d16
    PUSH EAX                            ; 00546d1d
    MOVSD ES:EDI,ESI                    ; 00546d1e
    MOVSD ES:EDI,ESI                    ; 00546d1f
    MOVSD ES:EDI,ESI                    ; 00546d20
    CALL core_actor.cpp_FUN_0040cff0    ; 00546d21
        ;   XREF to: 0040cff0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cff0()
    ADD ESP,0x8                         ; 00546d26
    LEA EAX,[ESP + 0x47bc]              ; 00546d29
        ;   Label: LAB_00546d29
    JMP 0x00546b32                      ; 00546d30
        ;   XREF to: 00546b32 (UNCONDITIONAL_JUMP)  ; LAB_00546b32
    PUSH 0x5eeb64                       ; 00546d35 | = "Error parsing dismember command parms"
        ;   Label: LAB_00546d35
    PUSH 0x1e810b0                      ; 00546d3a | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00546d3f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00546d44
    JMP 0x005445dc                      ; 00546d47
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    PUSH EDX                            ; 00546d4c
        ;   Label: LAB_00546d4c
    PUSH 0x5eeb8a                       ; 00546d4d | = "Error parsing dismember command parms..."
    PUSH 0x1e810b0                      ; 00546d52 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00546d57
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00546d5c
    JMP 0x005445dc                      ; 00546d5f
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0x7                         ; 00546d64
        ;   Label: LAB_00546d64
    PUSH ESI                            ; 00546d67
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00546d68
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00546d6d
    PUSH 0x400                          ; 00546d70
    MOV dword ptr [ESP + 0x4928],EAX    ; 00546d75
    LEA EAX,[EBX + 0x50]                ; 00546d7c
    PUSH EAX                            ; 00546d7f
    LEA EAX,[ESP + 0x492c]              ; 00546d80
    PUSH EAX                            ; 00546d87
    CALL core_script.cpp_parseArgument_FUN_005432d0 ; 00546d88
        ;   XREF to: 005432d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005432d0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 00546d8d
    TEST EAX,EAX                        ; 00546d90
    JZ 0x0054450b                       ; 00546d92
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH EAX                            ; 00546d98
    PUSH 0x5eebc2                       ; 00546d99 | = "Error parsing message text on display..."
    PUSH 0x1e810b0                      ; 00546d9e | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00546da3
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00546da8
    JMP 0x005445dc                      ; 00546dab
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0x4                         ; 00546db0
        ;   Label: LAB_00546db0
    PUSH ESI                            ; 00546db3
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00546db4
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00546db9
    MOV dword ptr [ESP + 0x4924],EAX    ; 00546dbc
    PUSH 0x1                            ; 00546dc3
    MOV EDX,dword ptr [EBX + 0x44]      ; 00546dc5
    PUSH EDX                            ; 00546dc8
    PUSH EBX                            ; 00546dc9
    CALL core_script.cpp_CScript_skipCommands_FUN_0054ad20 ; 00546dca
        ;   XREF to: 0054ad20 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_skipCommands_FUN_0054ad20(CScript * this_ptr, int direction, int count)
    ADD ESP,0xc                         ; 00546dcf
    TEST EAX,EAX                        ; 00546dd2
    JL 0x00546dde                       ; 00546dd4
        ;   XREF to: 00546dde (CONDITIONAL_JUMP)  ; LAB_00546dde
    MOV dword ptr [EBX + 0x44],EAX      ; 00546dd6
    JMP 0x0054450b                      ; 00546dd9
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    MOV ECX,dword ptr [ESP + 0x47f0]    ; 00546dde
        ;   Label: LAB_00546dde
    PUSH ECX                            ; 00546de5
    PUSH 0x5eebfb                       ; 00546de6 | = "Can't skip next command after else st..."
    PUSH 0x1e810b0                      ; 00546deb | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00546df0
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00546df5
    JMP 0x005445dc                      ; 00546df8
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0xc                         ; 00546dfd
        ;   Label: LAB_00546dfd
    PUSH ESI                            ; 00546e00
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00546e01
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00546e06
    LEA EDX,[ESP + 0x4830]              ; 00546e09
    PUSH EDX                            ; 00546e10
    LEA EDX,[ESP + 0x2428]              ; 00546e11
    PUSH EDX                            ; 00546e18
    LEA EDX,[ESP + 0x2364]              ; 00546e19
    PUSH EDX                            ; 00546e20
    PUSH 0x5eec40                       ; 00546e21 | = "(%[^,], %[^)])%n"
    MOV ESI,0xffffffff                  ; 00546e26
    PUSH EAX                            ; 00546e2b
    MOV dword ptr [ESP + 0x4938],EAX    ; 00546e2c
    MOV dword ptr [ESP + 0x4844],ESI    ; 00546e33
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00546e3a
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 00546e3f
    MOV EDI,dword ptr [ESP + 0x4830]    ; 00546e42
    CMP EDI,0x3                         ; 00546e49
    JGE 0x00546e65                      ; 00546e4c
        ;   XREF to: 00546e65 (CONDITIONAL_JUMP)  ; LAB_00546e65
    PUSH 0x5eec51                       ; 00546e4e | = "Error parsing enableCamera parms"
    PUSH 0x1e810b0                      ; 00546e53 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00546e58
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00546e5d
    JMP 0x005445dc                      ; 00546e60
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDX,dword ptr [ESP + 0x4924]    ; 00546e65
        ;   Label: LAB_00546e65
    LEA EAX,[ESP + 0x235c]              ; 00546e6c
    ADD EDX,EDI                         ; 00546e73
    PUSH EAX                            ; 00546e75
    MOV dword ptr [ESP + 0x4928],EDX    ; 00546e76
    CALL core_script.cpp_trimString_FUN_00543240 ; 00546e7d
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 00546e82
    LEA EAX,[ESP + 0x2424]              ; 00546e85
    PUSH EAX                            ; 00546e8c
    CALL core_script.cpp_trimString_FUN_00543240 ; 00546e8d
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 00546e92
    LEA EAX,[ESP + 0x235c]              ; 00546e95
    PUSH EAX                            ; 00546e9c
    MOV ECX,dword ptr [0x00622c18]      ; 00546e9d | g_CDemonSetPtr
    PUSH ECX                            ; 00546ea3 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_findCameraByName_FUN_0054fba0 ; 00546ea4
        ;   XREF to: 0054fba0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_findCameraByName_FUN_0054fba0(CDemonSet * this_ptr, char * name)
    MOV ESI,EAX                         ; 00546ea9
    ADD ESP,0x8                         ; 00546eab
    TEST EAX,EAX                        ; 00546eae
    JL 0x00546f00                       ; 00546eb0
        ;   XREF to: 00546f00 (CONDITIONAL_JUMP)  ; LAB_00546f00
    CMP dword ptr [0x01e810a8],0x0      ; 00546eb2 | DAT_01e810a8
    JZ 0x00546f1f                       ; 00546eb9
        ;   XREF to: 00546f1f (CONDITIONAL_JUMP)  ; LAB_00546f1f
    LEA EAX,[ESP + 0x2424]              ; 00546ebb
    PUSH EAX                            ; 00546ec2
    MOV ECX,dword ptr [0x0061b4d0]      ; 00546ec3 | DAT_0061b4d0
    PUSH ECX                            ; 00546ec9
    CALL core_event.cpp_CEventList_validateCondition_FUN_004a6c90 ; 00546eca
        ;   XREF to: 004a6c90 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCondition_FUN_004a6c90(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 00546ecf
    TEST EAX,EAX                        ; 00546ed2
    JZ 0x0054450b                       ; 00546ed4
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EDI,0x1e810b0                   ; 00546eda
    MOV ESI,EAX                         ; 00546edf
    PUSH EDI                            ; 00546ee1 | DAT_01e810b0
    MOV AL,byte ptr [ESI]               ; 00546ee2
        ;   Label: LAB_00546ee2
    MOV byte ptr [EDI],AL               ; 00546ee4 | DAT_01e810b0 | DAT_01e810b2
    CMP AL,0x0                          ; 00546ee6
    JZ 0x00546efa                       ; 00546ee8
        ;   XREF to: 00546efa (CONDITIONAL_JUMP)  ; LAB_00546efa
    MOV AL,byte ptr [ESI + 0x1]         ; 00546eea
    ADD ESI,0x2                         ; 00546eed
    MOV byte ptr [EDI + 0x1],AL         ; 00546ef0 | DAT_01e810b1 | DAT_01e810b3
    ADD EDI,0x2                         ; 00546ef3
    CMP AL,0x0                          ; 00546ef6
    JNZ 0x00546ee2                      ; 00546ef8
        ;   XREF to: 00546ee2 (CONDITIONAL_JUMP)  ; LAB_00546ee2
    POP EDI                             ; 00546efa
        ;   Label: LAB_00546efa
    JMP 0x005445dc                      ; 00546efb
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EAX,[ESP + 0x235c]              ; 00546f00
        ;   Label: LAB_00546f00
    PUSH EAX                            ; 00546f07
    PUSH 0x5eec72                       ; 00546f08 | = "Camera \"%s\" does not exist."
    PUSH 0x1e810b0                      ; 00546f0d | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00546f12
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00546f17
    JMP 0x005445dc                      ; 00546f1a
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EAX,[ESP + 0x2424]              ; 00546f1f
        ;   Label: LAB_00546f1f
    PUSH EAX                            ; 00546f26
    MOV EAX,[0x0061b4d0]                ; 00546f27 | DAT_0061b4d0
    PUSH EAX                            ; 00546f2c
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00546f2d
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00546f32
    PUSH EAX                            ; 00546f35
    PUSH ESI                            ; 00546f36
    MOV EDX,dword ptr [0x00622c18]      ; 00546f37 | g_CDemonSetPtr
    PUSH EDX                            ; 00546f3d | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraEnabled_FUN_005559b0 ; 00546f3e
        ;   XREF to: 005559b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraEnabled_FUN_005559b0(CDemonSet * this_ptr, int camera_index, int enabled)
    ADD ESP,0xc                         ; 00546f43
    JMP 0x0054450b                      ; 00546f46
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0x11                        ; 00546f4b
        ;   Label: LAB_00546f4b
    PUSH ESI                            ; 00546f4e
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00546f4f
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00546f54
    LEA EDX,[ESP + 0x4834]              ; 00546f57
    PUSH EDX                            ; 00546f5e
    LEA EDX,[ESP + 0x1618]              ; 00546f5f
    PUSH EDX                            ; 00546f66
    LEA EDX,[ESP + 0x4900]              ; 00546f67
    PUSH EDX                            ; 00546f6e
    PUSH 0x5eeca0                       ; 00546f6f | = "(%d , %[^)])%n"
    MOV ESI,0xffffffff                  ; 00546f74
    PUSH EAX                            ; 00546f79
    MOV dword ptr [ESP + 0x4938],EAX    ; 00546f7a
    MOV dword ptr [ESP + 0x4848],ESI    ; 00546f81
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00546f88
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 00546f8d
    MOV EDI,dword ptr [ESP + 0x4834]    ; 00546f90
    CMP EDI,0x3                         ; 00546f97
    JGE 0x00546fb3                      ; 00546f9a
        ;   XREF to: 00546fb3 (CONDITIONAL_JUMP)  ; LAB_00546fb3
    PUSH 0x5eecaf                       ; 00546f9c | = "Error parsing enableCameraGroup parms"
    PUSH 0x1e810b0                      ; 00546fa1 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00546fa6
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00546fab
    JMP 0x005445dc                      ; 00546fae
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDX,dword ptr [ESP + 0x4924]    ; 00546fb3
        ;   Label: LAB_00546fb3
    LEA EAX,[ESP + 0x1614]              ; 00546fba
    ADD EDX,EDI                         ; 00546fc1
    PUSH EAX                            ; 00546fc3
    MOV dword ptr [ESP + 0x4928],EDX    ; 00546fc4
    CALL core_script.cpp_trimString_FUN_00543240 ; 00546fcb
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    MOV ECX,dword ptr [0x01e810a8]      ; 00546fd0 | DAT_01e810a8
    ADD ESP,0x4                         ; 00546fd6
    TEST ECX,ECX                        ; 00546fd9
    JZ 0x00547022                       ; 00546fdb
        ;   XREF to: 00547022 (CONDITIONAL_JUMP)  ; LAB_00547022
    LEA EAX,[ESP + 0x1614]              ; 00546fdd
    PUSH EAX                            ; 00546fe4
    MOV EDX,dword ptr [0x0061b4d0]      ; 00546fe5 | DAT_0061b4d0
    PUSH EDX                            ; 00546feb
    CALL core_event.cpp_CEventList_validateCondition_FUN_004a6c90 ; 00546fec
        ;   XREF to: 004a6c90 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCondition_FUN_004a6c90(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 00546ff1
    TEST EAX,EAX                        ; 00546ff4
    JZ 0x0054450b                       ; 00546ff6
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EDI,0x1e810b0                   ; 00546ffc
        ;   Label: LAB_00546ffc
    MOV ESI,EAX                         ; 00547001
    PUSH EDI                            ; 00547003 | DAT_01e810b0
    MOV AL,byte ptr [ESI]               ; 00547004
        ;   Label: LAB_00547004
    MOV byte ptr [EDI],AL               ; 00547006 | DAT_01e810b0 | DAT_01e810b2
    CMP AL,0x0                          ; 00547008
    JZ 0x0054701c                       ; 0054700a
        ;   XREF to: 0054701c (CONDITIONAL_JUMP)  ; LAB_0054701c
    MOV AL,byte ptr [ESI + 0x1]         ; 0054700c
    ADD ESI,0x2                         ; 0054700f
    MOV byte ptr [EDI + 0x1],AL         ; 00547012 | DAT_01e810b1 | DAT_01e810b3
    ADD EDI,0x2                         ; 00547015
    CMP AL,0x0                          ; 00547018
    JNZ 0x00547004                      ; 0054701a
        ;   XREF to: 00547004 (CONDITIONAL_JUMP)  ; LAB_00547004
    POP EDI                             ; 0054701c
        ;   Label: LAB_0054701c
    JMP 0x005445dc                      ; 0054701d
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EAX,[ESP + 0x1614]              ; 00547022
        ;   Label: LAB_00547022
    PUSH EAX                            ; 00547029
    MOV ESI,dword ptr [0x0061b4d0]      ; 0054702a | DAT_0061b4d0
    PUSH ESI                            ; 00547030
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00547031
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00547036
    PUSH EAX                            ; 00547039
    MOV EDI,dword ptr [ESP + 0x48fc]    ; 0054703a
    PUSH EDI                            ; 00547041
    MOV EAX,[0x00622c18]                ; 00547042 | g_CDemonSetPtr
    PUSH EAX                            ; 00547047 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraEnabledByGroup_FUN_005559d0 ; 00547048
        ;   XREF to: 005559d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraEnabledByGroup_FUN_005559d0(CDemonSet * this_ptr, int group_id, int enabled)
    ADD ESP,0xc                         ; 0054704d
    JMP 0x0054450b                      ; 00547050
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0xf                         ; 00547055
        ;   Label: LAB_00547055
    PUSH ESI                            ; 00547058
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00547059
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 0054705e
    LEA EDX,[ESP + 0x4838]              ; 00547061
    PUSH EDX                            ; 00547068
    LEA EDX,[ESP + 0x1230]              ; 00547069
    PUSH EDX                            ; 00547070
    LEA EDX,[ESP + 0x1b94]              ; 00547071
    PUSH EDX                            ; 00547078
    PUSH 0x5eece5                       ; 00547079 | = "(%[^,], %[^)])%n"
    MOV ECX,0xffffffff                  ; 0054707e
    PUSH EAX                            ; 00547083
    MOV dword ptr [ESP + 0x4938],EAX    ; 00547084
    MOV dword ptr [ESP + 0x484c],ECX    ; 0054708b
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00547092
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 00547097
    MOV ESI,dword ptr [ESP + 0x4838]    ; 0054709a
    CMP ESI,0x3                         ; 005470a1
    JGE 0x005470bd                      ; 005470a4
        ;   XREF to: 005470bd (CONDITIONAL_JUMP)  ; LAB_005470bd
    PUSH 0x5eecf6                       ; 005470a6 | = "Error parsing enableHealthBar parms"
    PUSH 0x1e810b0                      ; 005470ab | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005470b0
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 005470b5
    JMP 0x005445dc                      ; 005470b8
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDI,dword ptr [ESP + 0x4924]    ; 005470bd
        ;   Label: LAB_005470bd
    LEA EAX,[ESP + 0x1b8c]              ; 005470c4
    ADD EDI,ESI                         ; 005470cb
    PUSH EAX                            ; 005470cd
    MOV dword ptr [ESP + 0x4928],EDI    ; 005470ce
    CALL core_script.cpp_trimString_FUN_00543240 ; 005470d5
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 005470da
    LEA EAX,[ESP + 0x122c]              ; 005470dd
    PUSH EAX                            ; 005470e4
    CALL core_script.cpp_trimString_FUN_00543240 ; 005470e5
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 005470ea
    PUSH 0x7c6344                       ; 005470ed | g_CCharacterClassInfo
    MOV EAX,[0x007c637c]                ; 005470f2 | g_CCharacterClassInfo.name_hash
    PUSH EAX                            ; 005470f7
    LEA EAX,[ESP + 0x1b94]              ; 005470f8
    PUSH EAX                            ; 005470ff
    CALL core_script.cpp_getActor_FUN_005433c0 ; 00547100
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00547105
    MOV ESI,EAX                         ; 00547108
    TEST EAX,EAX                        ; 0054710a
    JNZ 0x00547120                      ; 0054710c
        ;   XREF to: 00547120 (CONDITIONAL_JUMP)  ; LAB_00547120
    CMP dword ptr [0x01e818bc],0x0      ; 0054710e | DAT_01e818bc
    JNZ 0x00544524                      ; 00547115
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 0054711b
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    PUSH 0x5eed1a                       ; 00547120 | = "false"
        ;   Label: LAB_00547120
    LEA EAX,[ESP + 0x1230]              ; 00547125
    PUSH EAX                            ; 0054712c
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0054712d
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00547132
    TEST EAX,EAX                        ; 00547135
    JNZ 0x00547151                      ; 00547137
        ;   XREF to: 00547151 (CONDITIONAL_JUMP)  ; LAB_00547151
    CMP dword ptr [0x01e810a8],0x0      ; 00547139 | DAT_01e810a8
        ;   Label: LAB_00547139
    JNZ 0x0054450b                      ; 00547140
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV dword ptr [ESI + 0x2540],EAX    ; 00547146
    JMP 0x0054450b                      ; 0054714c
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH 0x5eed20                       ; 00547151 | DAT_005eed20
        ;   Label: LAB_00547151
    LEA EAX,[ESP + 0x1230]              ; 00547156
    PUSH EAX                            ; 0054715d
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0054715e
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00547163
    TEST EAX,EAX                        ; 00547166
    JNZ 0x00547171                      ; 00547168
        ;   XREF to: 00547171 (CONDITIONAL_JUMP)  ; LAB_00547171
    MOV EAX,0x1                         ; 0054716a
    JMP 0x00547139                      ; 0054716f
        ;   XREF to: 00547139 (UNCONDITIONAL_JUMP)  ; LAB_00547139
    PUSH 0x5eed25                       ; 00547171 | = "always"
        ;   Label: LAB_00547171
    LEA EAX,[ESP + 0x1230]              ; 00547176
    PUSH EAX                            ; 0054717d
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0054717e
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00547183
    TEST EAX,EAX                        ; 00547186
    JNZ 0x00547191                      ; 00547188
        ;   XREF to: 00547191 (CONDITIONAL_JUMP)  ; LAB_00547191
    MOV EAX,0x2                         ; 0054718a
    JMP 0x00547139                      ; 0054718f
        ;   XREF to: 00547139 (UNCONDITIONAL_JUMP)  ; LAB_00547139
    LEA EAX,[ESP + 0x122c]              ; 00547191
        ;   Label: LAB_00547191
    PUSH EAX                            ; 00547198
    PUSH 0x5eed2c                       ; 00547199 | = "Invalid health bar mode '%s'"
    PUSH 0x1e810b0                      ; 0054719e | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005471a3
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 005471a8
    JMP 0x005445dc                      ; 005471ab
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0x3                         ; 005471b0
        ;   Label: LAB_005471b0
    PUSH ESI                            ; 005471b3
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 005471b4
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 005471b9
    MOV ESI,dword ptr [0x01e810a8]      ; 005471bc | DAT_01e810a8
    MOV dword ptr [ESP + 0x4924],EAX    ; 005471c2
    TEST ESI,ESI                        ; 005471c9
    JNZ 0x0054450b                      ; 005471cb
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV dword ptr [ESP + 0x47f4],ESI    ; 005471d1
    MOV dword ptr [EBX],0x1             ; 005471d8
    JMP 0x0054450b                      ; 005471de
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0x6                         ; 005471e3
        ;   Label: LAB_005471e3
    PUSH ESI                            ; 005471e6
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 005471e7
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 005471ec
    MOV dword ptr [ESP + 0x4924],EAX    ; 005471ef
    MOV EAX,[0x01e810a8]                ; 005471f6 | DAT_01e810a8
    TEST EAX,EAX                        ; 005471fb
    JNZ 0x0054450b                      ; 005471fd
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    FLD float ptr [EBX + 0x48]          ; 00547203
    FLDZ                                ; 00547206
    MOV dword ptr [ESP + 0x47f4],EAX    ; 00547208
    FCOMPP                              ; 0054720f
    FNSTSW AX                           ; 00547211
    SAHF                                ; 00547213
    JBE 0x00547231                      ; 00547214
        ;   XREF to: 00547231 (CONDITIONAL_JUMP)  ; LAB_00547231
    MOV EDI,dword ptr [0x0061d95c]      ; 00547216 | g_CGamePtr
    PUSH EDI                            ; 0054721c | g_CGameInstance
    CALL core_game.cpp_FUN_004d6030     ; 0054721d
        ;   XREF to: 004d6030 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004d6030(CGame * this_ptr)
    ADD ESP,0x4                         ; 00547222
    MOV dword ptr [EBX + 0x48],0x3f800000 ; 00547225
    JMP 0x0054450b                      ; 0054722c
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    MOV ECX,dword ptr [0x0061d95c]      ; 00547231 | g_CGamePtr
        ;   Label: LAB_00547231
    PUSH ECX                            ; 00547237 | g_CGameInstance
    CALL core_game.cpp_CGame_fadeIn_FUN_004d62e0 ; 00547238
        ;   XREF to: 004d62e0 (UNCONDITIONAL_CALL)  ; uint core_game.cpp_CGame_fadeIn_FUN_004d62e0(CGame * this_ptr)
    ADD ESP,0x4                         ; 0054723d
    TEST EAX,EAX                        ; 00547240
    JZ 0x0054450b                       ; 00547242
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV ESI,0x1                         ; 00547248
    MOV EAX,[0x0061d95c]                ; 0054724d | g_CGamePtr
    MOV dword ptr [ESP + 0x47f4],ESI    ; 00547252
    MOV dword ptr [EAX + 0x248],0x1     ; 00547259 | g_CGameInstance.allow_damage_flag
    JMP 0x0054450b                      ; 00547263
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0x7                         ; 00547268
        ;   Label: LAB_00547268
    PUSH ESI                            ; 0054726b
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 0054726c
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00547271
    MOV dword ptr [ESP + 0x4924],EAX    ; 00547274
    MOV EAX,[0x01e810a8]                ; 0054727b | DAT_01e810a8
    TEST EAX,EAX                        ; 00547280
    JNZ 0x0054450b                      ; 00547282
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EDX,dword ptr [0x0061d95c]      ; 00547288 | g_CGamePtr
    MOV dword ptr [EDX + 0x248],EAX     ; 0054728e | g_CGameInstance.allow_damage_flag
    MOV dword ptr [ESP + 0x47f4],EAX    ; 00547294
    FLD float ptr [EBX + 0x48]          ; 0054729b
    FLDZ                                ; 0054729e
    FCOMPP                              ; 005472a0
    FNSTSW AX                           ; 005472a2
    SAHF                                ; 005472a4
    JBE 0x005472bc                      ; 005472a5
        ;   XREF to: 005472bc (CONDITIONAL_JUMP)  ; LAB_005472bc
    PUSH EDX                            ; 005472a7 | g_CGameInstance
    CALL core_game.cpp_CGame_beginFadeOut_FUN_004d6070 ; 005472a8
        ;   XREF to: 004d6070 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_beginFadeOut_FUN_004d6070(CGame * this_ptr)
    ADD ESP,0x4                         ; 005472ad
    MOV dword ptr [EBX + 0x48],0x3f800000 ; 005472b0
    JMP 0x0054450b                      ; 005472b7
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH EDX                            ; 005472bc | g_CGameInstance
        ;   Label: LAB_005472bc
    CALL core_game.cpp_CGame_fadeIn_FUN_004d62e0 ; 005472bd
        ;   XREF to: 004d62e0 (UNCONDITIONAL_CALL)  ; uint core_game.cpp_CGame_fadeIn_FUN_004d62e0(CGame * this_ptr)
    ADD ESP,0x4                         ; 005472c2
    TEST EAX,EAX                        ; 005472c5
    JZ 0x0054450b                       ; 005472c7
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV dword ptr [ESP + 0x47f4],0x1    ; 005472cd
    JMP 0x0054450b                      ; 005472d8
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0x7                         ; 005472dd
        ;   Label: LAB_005472dd
    PUSH ESI                            ; 005472e0
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 005472e1
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 005472e6
    LEA EDX,[ESP + 0x4910]              ; 005472e9
    PUSH EDX                            ; 005472f0
    LEA EDX,[ESP + 0x3b98]              ; 005472f1
    PUSH EDX                            ; 005472f8
    LEA EDX,[ESP + 0x3174]              ; 005472f9
    PUSH EDX                            ; 00547300
    PUSH 0x5eed64                       ; 00547301 | = "(%[^,], %[^,)]%n"
    MOV EDI,0xffffffff                  ; 00547306
    PUSH EAX                            ; 0054730b
    MOV dword ptr [ESP + 0x4938],EAX    ; 0054730c
    MOV dword ptr [ESP + 0x4924],EDI    ; 00547313
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 0054731a
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 0054731f
    MOV EAX,dword ptr [ESP + 0x4910]    ; 00547322
    CMP EAX,0x5                         ; 00547329
    JGE 0x00547345                      ; 0054732c
        ;   XREF to: 00547345 (CONDITIONAL_JUMP)  ; LAB_00547345
    PUSH 0x5eed75                       ; 0054732e | = "Error parsing gesture command parms"
    PUSH 0x1e810b0                      ; 00547333 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00547338
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 0054733d
    JMP 0x005445dc                      ; 00547340
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDX,dword ptr [ESP + 0x4924]    ; 00547345
        ;   Label: LAB_00547345
    ADD EDX,EAX                         ; 0054734c
    LEA EAX,[ESP + 0x316c]              ; 0054734e
    PUSH EAX                            ; 00547355
    MOV dword ptr [ESP + 0x4928],EDX    ; 00547356
    CALL core_script.cpp_trimString_FUN_00543240 ; 0054735d
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 00547362
    LEA EAX,[ESP + 0x3b94]              ; 00547365
    PUSH EAX                            ; 0054736c
    CALL core_script.cpp_trimString_FUN_00543240 ; 0054736d
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 00547372
    XOR ECX,ECX                         ; 00547375
    MOV EAX,dword ptr [ESP + 0x4924]    ; 00547377
    MOV dword ptr [ESP + 0x4844],ECX    ; 0054737e
    CMP byte ptr [EAX],0x2c             ; 00547385
    JNZ 0x005473c9                      ; 00547388
        ;   XREF to: 005473c9 (CONDITIONAL_JUMP)  ; LAB_005473c9
    LEA EAX,[ESP + 0x4910]              ; 0054738a
    PUSH EAX                            ; 00547391
    LEA EAX,[ESP + 0x4848]              ; 00547392
    PUSH EAX                            ; 00547399
    PUSH 0x5eed99                       ; 0054739a | = ", %d %n"
    MOV dword ptr [ESP + 0x491c],EDI    ; 0054739f
    MOV EDI,dword ptr [ESP + 0x4930]    ; 005473a6
    PUSH EDI                            ; 005473ad
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 005473ae
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 005473b3
    MOV EAX,dword ptr [ESP + 0x4910]    ; 005473b6
    CMP EAX,0x1                         ; 005473bd
    JL 0x005473ec                       ; 005473c0
        ;   XREF to: 005473ec (CONDITIONAL_JUMP)  ; LAB_005473ec
    ADD dword ptr [ESP + 0x4924],EAX    ; 005473c2
    MOV EAX,dword ptr [ESP + 0x4924]    ; 005473c9
        ;   Label: LAB_005473c9
    CMP byte ptr [EAX],0x29             ; 005473d0
    JZ 0x00547403                       ; 005473d3
        ;   XREF to: 00547403 (CONDITIONAL_JUMP)  ; LAB_00547403
    PUSH 0x5eedc2                       ; 005473d5 | = "Error parsing gesture command parms -..."
    PUSH 0x1e810b0                      ; 005473da | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005473df
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 005473e4
    JMP 0x005445dc                      ; 005473e7
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    PUSH 0x5eeda1                       ; 005473ec | = "Error parsing gesture loop parms"
        ;   Label: LAB_005473ec
    PUSH 0x1e810b0                      ; 005473f1 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005473f6
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 005473fb
    JMP 0x005445dc                      ; 005473fe
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    PUSH 0x7c6344                       ; 00547403 | g_CCharacterClassInfo
        ;   Label: LAB_00547403
    MOV ECX,dword ptr [0x007c637c]      ; 00547408 | g_CCharacterClassInfo.name_hash
    MOV ESI,dword ptr [ESP + 0x4928]    ; 0054740e
    PUSH ECX                            ; 00547415
    LEA EAX,[ESP + 0x3174]              ; 00547416
    INC ESI                             ; 0054741d
    PUSH EAX                            ; 0054741e
    MOV dword ptr [ESP + 0x4930],ESI    ; 0054741f
    CALL core_script.cpp_getActor_FUN_005433c0 ; 00547426
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV ESI,EAX                         ; 0054742b
    ADD ESP,0xc                         ; 0054742d
    MOV EDI,EAX                         ; 00547430
    TEST EAX,EAX                        ; 00547432
    JNZ 0x00547448                      ; 00547434
        ;   XREF to: 00547448 (CONDITIONAL_JUMP)  ; LAB_00547448
    CMP dword ptr [0x01e818bc],0x0      ; 00547436 | DAT_01e818bc
    JNZ 0x00544524                      ; 0054743d
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 00547443
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    CMP dword ptr [0x01e810a8],0x0      ; 00547448 | DAT_01e810a8
        ;   Label: LAB_00547448
    JZ 0x005474bb                       ; 0054744f
        ;   XREF to: 005474bb (CONDITIONAL_JUMP)  ; LAB_005474bb
    PUSH 0x0                            ; 00547451
    LEA EAX,[ESP + 0x3b98]              ; 00547453
    PUSH EAX                            ; 0054745a
    ADD ESI,0x158                       ; 0054745b
    PUSH ESI                            ; 00547461
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00524a00 ; 00547462
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00524a00(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00547467
    PUSH EAX                            ; 0054746a
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0 ; 0054746b
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00547470
    XOR EDX,EDX                         ; 00547473
    TEST EAX,EAX                        ; 00547475
    SETGE AL                            ; 00547477
    MOV DL,AL                           ; 0054747a
    TEST EDX,EDX                        ; 0054747c
        ;   Label: LAB_0054747c
    JNZ 0x0054450b                      ; 0054747e
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EAX,[EDI + 0x158]               ; 00547484
    PUSH EAX                            ; 0054748a
    CALL core_bugs.cpp_FUN_00428120     ; 0054748b
        ;   XREF to: 00428120 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_00428120()
    ADD ESP,0x4                         ; 00547490
    PUSH EAX                            ; 00547493
    LEA EAX,[ESP + 0x3170]              ; 00547494
    PUSH EAX                            ; 0054749b
    LEA EAX,[ESP + 0x3b9c]              ; 0054749c
    PUSH EAX                            ; 005474a3
    PUSH 0x5eedfa                       ; 005474a4 | = "Gesture name %s is not valid for acto..."
    PUSH 0x1e810b0                      ; 005474a9 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005474ae
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x14                        ; 005474b3
    JMP 0x005445dc                      ; 005474b6
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EAX,[ESP + 0x3b94]              ; 005474bb
        ;   Label: LAB_005474bb
    PUSH EAX                            ; 005474c2
    PUSH ESI                            ; 005474c3
    CALL core_charactr.cpp_CCharacter_initGesture_FUN_00432c70 ; 005474c4
        ;   XREF to: 00432c70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_initGesture_FUN_00432c70(CCharacter * this_ptr, char * motion_name)
    ADD ESP,0x8                         ; 005474c9
    MOV EDX,EAX                         ; 005474cc
    MOV EAX,dword ptr [ESP + 0x4844]    ; 005474ce
    MOV dword ptr [ESI + 0x275c],EAX    ; 005474d5
    JMP 0x0054747c                      ; 005474db
        ;   XREF to: 0054747c (UNCONDITIONAL_JUMP)  ; LAB_0054747c
    ADD ESI,0x9                         ; 005474dd
        ;   Label: LAB_005474dd
    PUSH ESI                            ; 005474e0
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 005474e1
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 005474e6
    LEA EDX,[ESP + 0x4848]              ; 005474e9
    PUSH EDX                            ; 005474f0
    LEA EDX,[ESP + 0x2bf8]              ; 005474f1
    PUSH EDX                            ; 005474f8
    LEA EDX,[ESP + 0x16e4]              ; 005474f9
    PUSH EDX                            ; 00547500
    PUSH 0x5eee38                       ; 00547501 | = "(%[^,], %[^,)] )%n"
    MOV ECX,0xffffffff                  ; 00547506
    PUSH EAX                            ; 0054750b
    MOV dword ptr [ESP + 0x4938],EAX    ; 0054750c
    MOV dword ptr [ESP + 0x485c],ECX    ; 00547513
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 0054751a
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 0054751f
    MOV ESI,dword ptr [ESP + 0x4848]    ; 00547522
    CMP ESI,0x5                         ; 00547529
    JGE 0x00547545                      ; 0054752c
        ;   XREF to: 00547545 (CONDITIONAL_JUMP)  ; LAB_00547545
    PUSH 0x5eee4b                       ; 0054752e | = "Error parsing getIniInt command parms"
    PUSH 0x1e810b0                      ; 00547533 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00547538
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 0054753d
    JMP 0x005445dc                      ; 00547540
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDI,dword ptr [ESP + 0x4924]    ; 00547545
        ;   Label: LAB_00547545
    LEA EAX,[ESP + 0x16dc]              ; 0054754c
    ADD EDI,ESI                         ; 00547553
    PUSH EAX                            ; 00547555
    MOV dword ptr [ESP + 0x4928],EDI    ; 00547556
    CALL core_script.cpp_trimString_FUN_00543240 ; 0054755d
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 00547562
    LEA EAX,[ESP + 0x2bf4]              ; 00547565
    PUSH EAX                            ; 0054756c
    CALL core_script.cpp_trimString_FUN_00543240 ; 0054756d
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    MOV EAX,[0x01e810a8]                ; 00547572 | DAT_01e810a8
    ADD ESP,0x4                         ; 00547577
    TEST EAX,EAX                        ; 0054757a
    JNZ 0x0054450b                      ; 0054757c
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH 0x5eee71                       ; 00547582 | DAT_005eee71
    PUSH 0x5eee76                       ; 00547587 | = "system\\nocturne.ini"
    LEA EAX,[ESP + 0x3c]                ; 0054758c
    PUSH EAX                            ; 00547590
    CALL engine_ini.cpp_FUN_004f4b00    ; 00547591
        ;   XREF to: 004f4b00 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4b00()
    ADD ESP,0xc                         ; 00547596
    LEA EAX,[ESP + 0x2bf4]              ; 00547599
    PUSH EAX                            ; 005475a0
    MOV EDX,dword ptr [0x0061b4d0]      ; 005475a1 | DAT_0061b4d0
    PUSH EDX                            ; 005475a7
    CALL core_event.cpp_CEventList_getCounterValue_FUN_004a9e80 ; 005475a8
        ;   XREF to: 004a9e80 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_getCounterValue_FUN_004a9e80(CEventList * this_ptr, char * str)
    ADD ESP,0x8                         ; 005475ad
    MOV dword ptr [ESP + 0x484c],EAX    ; 005475b0
    LEA EAX,[ESP + 0x484c]              ; 005475b7
    PUSH EAX                            ; 005475be
    LEA EAX,[ESP + 0x16e0]              ; 005475bf
    PUSH EAX                            ; 005475c6
    LEA EAX,[ESP + 0x3c]                ; 005475c7
    PUSH EAX                            ; 005475cb
    CALL engine_ini.cpp_FUN_004f4d10    ; 005475cc
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 005475d1
    MOV ECX,dword ptr [ESP + 0x484c]    ; 005475d4
    PUSH ECX                            ; 005475db
    LEA EAX,[ESP + 0x2bf8]              ; 005475dc
    PUSH EAX                            ; 005475e3
    MOV ESI,dword ptr [0x0061b4d0]      ; 005475e4 | DAT_0061b4d0
    PUSH ESI                            ; 005475ea
    CALL core_event.cpp_CEventList_setCounter_FUN_004a9d70 ; 005475eb
        ;   XREF to: 004a9d70 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_setCounter_FUN_004a9d70(CEventList * this_ptr, char * name, int value)
    ADD ESP,0xc                         ; 005475f0
    PUSH 0x0                            ; 005475f3
    LEA EAX,[ESP + 0x38]                ; 005475f5
    PUSH EAX                            ; 005475f9
    CALL engine_ini.cpp_CIniFile_dtor_FUN_004f4b30 ; 005475fa
        ;   XREF to: 004f4b30 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_CIniFile_dtor_FUN_004f4b30(CIniFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005475ff
    JMP 0x0054450b                      ; 00547602
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0xf                         ; 00547607
        ;   Label: LAB_00547607
    PUSH ESI                            ; 0054760a
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 0054760b
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00547610
    LEA EDX,[ESP + 0x4850]              ; 00547613
    PUSH EDX                            ; 0054761a
    LEA EDX,[ESP + 0x1550]              ; 0054761b
    PUSH EDX                            ; 00547622
    LEA EDX,[ESP + 0x2a6c]              ; 00547623
    PUSH EDX                            ; 0054762a
    PUSH 0x5eee9a                       ; 0054762b | = "(%[^,], %[^)])%n"
    MOV EDI,0xffffffff                  ; 00547630
    PUSH EAX                            ; 00547635
    MOV dword ptr [ESP + 0x4938],EAX    ; 00547636
    MOV dword ptr [ESP + 0x4864],EDI    ; 0054763d
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00547644
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 00547649
    MOV EAX,dword ptr [ESP + 0x4850]    ; 0054764c
    CMP EAX,0x5                         ; 00547653
    JGE 0x0054766f                      ; 00547656
        ;   XREF to: 0054766f (CONDITIONAL_JUMP)  ; LAB_0054766f
    PUSH 0x5eeeab                       ; 00547658 | = "Error parsing getTriggerActor command..."
    PUSH 0x1e810b0                      ; 0054765d | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00547662
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00547667
    JMP 0x005445dc                      ; 0054766a
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDX,dword ptr [ESP + 0x4924]    ; 0054766f
        ;   Label: LAB_0054766f
    ADD EDX,EAX                         ; 00547676
    LEA EAX,[ESP + 0x2a64]              ; 00547678
    PUSH EAX                            ; 0054767f
    MOV dword ptr [ESP + 0x4928],EDX    ; 00547680
    CALL core_script.cpp_trimString_FUN_00543240 ; 00547687
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 0054768c
    LEA EAX,[ESP + 0x154c]              ; 0054768f
    PUSH EAX                            ; 00547696
    CALL core_script.cpp_trimString_FUN_00543240 ; 00547697
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 0054769c
    LEA EAX,[ESP + 0x2a64]              ; 0054769f
    PUSH EAX                            ; 005476a6
    CALL core_script.cpp_validateActorVariableName_FUN_00543100 ; 005476a7
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_script.cpp_validateActorVariableName_FUN_00543100(char * variable_name)
    ADD ESP,0x4                         ; 005476ac
    TEST EAX,EAX                        ; 005476af
    JZ 0x005445dc                       ; 005476b1
        ;   XREF to: 005445dc (CONDITIONAL_JUMP)  ; LAB_005445dc
    PUSH 0x2c8ae0c                      ; 005476b7
    MOV ECX,dword ptr [0x02c8ae44]      ; 005476bc | g_CTriggerClassInfo.name_hash
    PUSH ECX                            ; 005476c2
    LEA EAX,[ESP + 0x1554]              ; 005476c3
    PUSH EAX                            ; 005476ca
    CALL core_script.cpp_getActor_FUN_005433c0 ; 005476cb
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 005476d0
    TEST EAX,EAX                        ; 005476d3
    JNZ 0x005476e9                      ; 005476d5
        ;   XREF to: 005476e9 (CONDITIONAL_JUMP)  ; LAB_005476e9
    CMP dword ptr [0x01e818bc],0x0      ; 005476d7 | DAT_01e818bc
    JNZ 0x00544524                      ; 005476de
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 005476e4
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    CMP dword ptr [0x01e810a8],0x0      ; 005476e9 | DAT_01e810a8
        ;   Label: LAB_005476e9
    JNZ 0x0054450b                      ; 005476f0
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EDI,dword ptr [EAX + 0x300]     ; 005476f6
    PUSH EDI                            ; 005476fc
    LEA EAX,[ESP + 0x2a68]              ; 005476fd
    PUSH EAX                            ; 00547704
    MOV EAX,[0x0061b4d0]                ; 00547705 | DAT_0061b4d0
    PUSH EAX                            ; 0054770a
    CALL core_event.cpp_CEventList_setActorVariable_FUN_004a9ff0 ; 0054770b
        ;   XREF to: 004a9ff0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_setActorVariable_FUN_004a9ff0(CEventList * this_ptr, char * var_name, CDemonActor * actor)
    ADD ESP,0xc                         ; 00547710
    JMP 0x0054450b                      ; 00547713
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EAX,[ESI + 0x5]                 ; 00547718
        ;   Label: LAB_00547718
    PUSH EAX                            ; 0054771b
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 0054771c
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00547721
    PUSH EAX                            ; 00547724
    PUSH EBX                            ; 00547725
    MOV dword ptr [ESP + 0x492c],EAX    ; 00547726
    CALL core_script.cpp_CScript_findLabelIndex_FUN_0054acc0 ; 0054772d
        ;   XREF to: 0054acc0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_findLabelIndex_FUN_0054acc0(CScript * this_ptr, char * label_name)
    ADD ESP,0x8                         ; 00547732
    TEST EAX,EAX                        ; 00547735
    JL 0x00547752                       ; 00547737
        ;   XREF to: 00547752 (CONDITIONAL_JUMP)  ; LAB_00547752
    CMP dword ptr [0x01e810a8],0x0      ; 00547739 | DAT_01e810a8
    JZ 0x0054776c                       ; 00547740
        ;   XREF to: 0054776c (CONDITIONAL_JUMP)  ; LAB_0054776c
    MOV dword ptr [ESP + 0x4924],0x5eef88 ; 00547742 | DAT_005eef88
    JMP 0x0054450b                      ; 0054774d
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EDI,dword ptr [ESP + 0x47f0]    ; 00547752
        ;   Label: LAB_00547752
    PUSH EDI                            ; 00547759
    MOV EAX,dword ptr [ESP + 0x4928]    ; 0054775a
    PUSH EAX                            ; 00547761
    PUSH 0x5eeedd                       ; 00547762 | = "Undefined label %s used in gosub stat..."
    JMP 0x005445cf                      ; 00547767
        ;   XREF to: 005445cf (UNCONDITIONAL_JUMP)  ; LAB_005445cf
    MOV EDI,dword ptr [EBX + 0x458]     ; 0054776c
        ;   Label: LAB_0054776c
    CMP EDI,0x8                         ; 00547772
    JGE 0x005477aa                      ; 00547775
        ;   XREF to: 005477aa (CONDITIONAL_JUMP)  ; LAB_005477aa
    LEA EDX,[EDI*0x4 + 0x0]             ; 00547777
    LEA ECX,[EBX + EDX*0x1]             ; 0054777e
    MOV EDX,dword ptr [EBX + 0x44]      ; 00547781
    MOV dword ptr [ECX + 0x45c],EDX     ; 00547784
    MOV EDX,dword ptr [EBX + 0x458]     ; 0054778a
    MOV dword ptr [EBX + 0x44],EAX      ; 00547790
    INC EDX                             ; 00547793
    MOV dword ptr [EBX + 0x458],EDX     ; 00547794
    MOV dword ptr [ESP + 0x4924],0x5eef88 ; 0054779a | DAT_005eef88
    JMP 0x0054450b                      ; 005477a5
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH 0x5eef13                       ; 005477aa | DAT_005eef13
        ;   Label: LAB_005477aa
    PUSH 0x5eef16                       ; 005477af | = "stack.txt"
    CALL crt_stdio.c_fopen_FUN_005c157c ; 005477b4
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_005c157c(char * filename, char * mode)
    ADD ESP,0x8                         ; 005477b9
    PUSH ESI                            ; 005477bc
    MOV ECX,dword ptr [ESP + 0x47f4]    ; 005477bd
    PUSH ECX                            ; 005477c4
    PUSH 0x5eef20                       ; 005477c5 | = "line%6d: %s\n"
    PUSH EAX                            ; 005477ca
    MOV dword ptr [ESP + 0x4864],EAX    ; 005477cb
    CALL crt_unknown.c_FUN_005c03c0     ; 005477d2
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV ESI,dword ptr [EBX + 0x458]     ; 005477d7
    DEC ESI                             ; 005477dd
    ADD ESP,0x10                        ; 005477de
    TEST ESI,ESI                        ; 005477e1
    JL 0x00547820                       ; 005477e3
        ;   XREF to: 00547820 (CONDITIONAL_JUMP)  ; LAB_00547820
    LEA EDI,[ESI*0x4 + 0x0]             ; 005477e5
    ADD EDI,EBX                         ; 005477ec
    MOV EDX,dword ptr [EDI + 0x45c]     ; 005477ee
        ;   Label: LAB_005477ee
    MOV EAX,dword ptr [EBX + 0x30]      ; 005477f4
    MOV ECX,dword ptr [EAX + EDX*0x8 + 0x4] ; 005477f7
    PUSH ECX                            ; 005477fb
    MOV ECX,dword ptr [EAX + EDX*0x8]   ; 005477fc
    PUSH ECX                            ; 005477ff
    PUSH 0x5eef2d                       ; 00547800 | = "line%6d: %s\n"
    MOV EAX,dword ptr [ESP + 0x4860]    ; 00547805
    PUSH EAX                            ; 0054780c
    SUB EDI,0x4                         ; 0054780d
    DEC ESI                             ; 00547810
    CALL crt_unknown.c_FUN_005c03c0     ; 00547811
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x10                        ; 00547816
    TEST ESI,ESI                        ; 00547819
    JGE 0x005477ee                      ; 0054781b
        ;   XREF to: 005477ee (CONDITIONAL_JUMP)  ; LAB_005477ee
    LEA EAX,[EAX]                       ; 0054781d
    MOV EDX,dword ptr [ESP + 0x4854]    ; 00547820
        ;   Label: LAB_00547820
    PUSH EDX                            ; 00547827
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 00547828
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 0054782d
    MOV ECX,dword ptr [ESP + 0x47f0]    ; 00547830
    PUSH ECX                            ; 00547837
    PUSH 0x5eef3a                       ; 00547838 | = "Call stack overflow detected on scrip..."
    PUSH 0x1e810b0                      ; 0054783d | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00547842
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00547847
    JMP 0x005445dc                      ; 0054784a
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0x4                         ; 0054784f
        ;   Label: LAB_0054784f
    PUSH ESI                            ; 00547852
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00547853
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00547858
    PUSH EAX                            ; 0054785b
    PUSH EBX                            ; 0054785c
    MOV dword ptr [ESP + 0x492c],EAX    ; 0054785d
    CALL core_script.cpp_CScript_findLabelIndex_FUN_0054acc0 ; 00547864
        ;   XREF to: 0054acc0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_findLabelIndex_FUN_0054acc0(CScript * this_ptr, char * label_name)
    ADD ESP,0x8                         ; 00547869
    TEST EAX,EAX                        ; 0054786c
    JL 0x00547889                       ; 0054786e
        ;   XREF to: 00547889 (CONDITIONAL_JUMP)  ; LAB_00547889
    CMP dword ptr [0x01e810a8],0x0      ; 00547870 | DAT_01e810a8
    JZ 0x005478a3                       ; 00547877
        ;   XREF to: 005478a3 (CONDITIONAL_JUMP)  ; LAB_005478a3
    MOV dword ptr [ESP + 0x4924],0x5eefc3 ; 00547879 | DAT_005eefc3
    JMP 0x0054450b                      ; 00547884
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EBX,dword ptr [ESP + 0x47f0]    ; 00547889
        ;   Label: LAB_00547889
    PUSH EBX                            ; 00547890
    MOV ESI,dword ptr [ESP + 0x4928]    ; 00547891
    PUSH ESI                            ; 00547898
    PUSH 0x5eef8e                       ; 00547899 | = "Undefined label %s used in goto state..."
    JMP 0x005445cf                      ; 0054789e
        ;   XREF to: 005445cf (UNCONDITIONAL_JUMP)  ; LAB_005445cf
    MOV dword ptr [EBX + 0x44],EAX      ; 005478a3
        ;   Label: LAB_005478a3
    MOV dword ptr [ESP + 0x4924],0x5eefc3 ; 005478a6 | DAT_005eefc3
    JMP 0x0054450b                      ; 005478b1
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0x4                         ; 005478b6
        ;   Label: LAB_005478b6
    PUSH ESI                            ; 005478b9
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 005478ba
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 005478bf
    PUSH 0x12c                          ; 005478c2
    MOV dword ptr [ESP + 0x4928],EAX    ; 005478c7
    LEA EAX,[ESP + 0x828]               ; 005478ce
    PUSH EAX                            ; 005478d5
    LEA EAX,[ESP + 0x492c]              ; 005478d6
    PUSH EAX                            ; 005478dd
    CALL core_script.cpp_parseArgument_FUN_005432d0 ; 005478de
        ;   XREF to: 005432d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005432d0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 005478e3
    TEST EAX,EAX                        ; 005478e6
    JNZ 0x00546ffc                      ; 005478e8
        ;   XREF to: 00546ffc (CONDITIONAL_JUMP)  ; LAB_00546ffc
    CMP dword ptr [0x01e810a8],0x0      ; 005478ee | DAT_01e810a8
    JNZ 0x0054450b                      ; 005478f5
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EAX,[ESP + 0x824]               ; 005478fb
    PUSH EAX                            ; 00547902
    MOV EAX,dword ptr [ESP + 0x47f4]    ; 00547903
    PUSH EAX                            ; 0054790a
    PUSH 0x5eefc9                       ; 0054790b | = "Script GTFO at line %d:\n%s\nTerminat..."
    MOV EDX,dword ptr [0x0061abc0]      ; 00547910 | g_CEditorToolsPtr
    PUSH EDX                            ; 00547916
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_004943a0 ; 00547917
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_004943a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 0054791c
    XOR ECX,ECX                         ; 0054791f
    MOV dword ptr [EBX],0x1             ; 00547921
    MOV dword ptr [ESP + 0x47f4],ECX    ; 00547927
    JMP 0x0054450b                      ; 0054792e
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0xd                         ; 00547933
        ;   Label: LAB_00547933
    PUSH ESI                            ; 00547936
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00547937
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 0054793c
    LEA EDX,[ESP + 0x4858]              ; 0054793f
    PUSH EDX                            ; 00547946
    LEA EDX,[ESP + 0x2fe0]              ; 00547947
    PUSH EDX                            ; 0054794e
    PUSH 0x5ef007                       ; 0054794f | = "(%[^,)]%n"
    MOV ESI,0xffffffff                  ; 00547954
    PUSH EAX                            ; 00547959
    MOV dword ptr [ESP + 0x4934],EAX    ; 0054795a
    MOV dword ptr [ESP + 0x4868],ESI    ; 00547961
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00547968
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 0054796d
    MOV EDI,dword ptr [ESP + 0x4858]    ; 00547970
    CMP EDI,0x2                         ; 00547977
    JGE 0x00547993                      ; 0054797a
        ;   XREF to: 00547993 (CONDITIONAL_JUMP)  ; LAB_00547993
    PUSH 0x5ef011                       ; 0054797c | = "Error parsing holsterWeapon command p..."
    PUSH 0x1e810b0                      ; 00547981 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00547986
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 0054798b
    JMP 0x005445dc                      ; 0054798e
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDX,dword ptr [ESP + 0x4924]    ; 00547993
        ;   Label: LAB_00547993
    LEA EAX,[ESP + 0x2fdc]              ; 0054799a
    ADD EDX,EDI                         ; 005479a1
    PUSH EAX                            ; 005479a3
    MOV dword ptr [ESP + 0x4928],EDX    ; 005479a4
    CALL core_script.cpp_trimString_FUN_00543240 ; 005479ab
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 005479b0
    PUSH 0x1d06ad8                      ; 005479b3
    MOV ECX,dword ptr [0x01d06b10]      ; 005479b8 | g_CHeroClassInfo.name_hash
    PUSH ECX                            ; 005479be
    LEA EAX,[ESP + 0x2fe4]              ; 005479bf
    PUSH EAX                            ; 005479c6
    CALL core_script.cpp_getActor_FUN_005433c0 ; 005479c7
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 005479cc
    MOV dword ptr [ESP + 0x485c],EAX    ; 005479cf
    TEST EAX,EAX                        ; 005479d6
    JNZ 0x005479ec                      ; 005479d8
        ;   XREF to: 005479ec (CONDITIONAL_JUMP)  ; LAB_005479ec
    CMP dword ptr [0x01e818bc],0x0      ; 005479da | DAT_01e818bc
    JNZ 0x00544524                      ; 005479e1
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 005479e7
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EAX,dword ptr [ESP + 0x4924]    ; 005479ec
        ;   Label: LAB_005479ec
    MOV ESI,0x1                         ; 005479f3
    MOV DH,byte ptr [EAX]               ; 005479f8
    MOV dword ptr [ESP + 0x4860],ESI    ; 005479fa
    CMP DH,0x2c                         ; 00547a01
    JZ 0x00547a62                       ; 00547a04
        ;   XREF to: 00547a62 (CONDITIONAL_JUMP)  ; LAB_00547a62
    MOV EAX,dword ptr [ESP + 0x4924]    ; 00547a06
        ;   Label: LAB_00547a06
    CMP byte ptr [EAX],0x29             ; 00547a0d
    JNZ 0x00547b4e                      ; 00547a10
        ;   XREF to: 00547b4e (CONDITIONAL_JUMP)  ; LAB_00547b4e
    INC EAX                             ; 00547a16
    MOV EDX,dword ptr [0x01e810a8]      ; 00547a17 | DAT_01e810a8
    MOV dword ptr [ESP + 0x4924],EAX    ; 00547a1d
    TEST EDX,EDX                        ; 00547a24
    JNZ 0x0054450b                      ; 00547a26
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EAX,dword ptr [ESP + 0x485c]    ; 00547a2c
    MOV ECX,dword ptr [ESP + 0x4860]    ; 00547a33
    MOV EAX,dword ptr [EAX + 0x154]     ; 00547a3a
    TEST ECX,ECX                        ; 00547a40
    SETZ DL                             ; 00547a42
    AND EDX,0xff                        ; 00547a45
    PUSH EDX                            ; 00547a4b
    MOV ESI,dword ptr [ESP + 0x4860]    ; 00547a4c
    PUSH ESI                            ; 00547a53
    CALL dword ptr [EAX + 0x144]        ; 00547a54
    ADD ESP,0x8                         ; 00547a5a
    JMP 0x0054450b                      ; 00547a5d
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EDI,[EAX + ESI*0x1]             ; 00547a62
        ;   Label: LAB_00547a62
    MOV dword ptr [ESP + 0x4924],EDI    ; 00547a65
    SUB ECX,ECX                         ; 00547a6c
    DEC ECX                             ; 00547a6e
    XOR EAX,EAX                         ; 00547a6f
    SCASB.REPNE ES:EDI                  ; 00547a71
    NOT ECX                             ; 00547a73
    DEC ECX                             ; 00547a75
    SUB ECX,ESI                         ; 00547a76
    MOV dword ptr [ESP + 0x4858],ECX    ; 00547a78
    CMP ECX,ESI                         ; 00547a7f
    JL 0x00547b14                       ; 00547a81
        ;   XREF to: 00547b14 (CONDITIONAL_JUMP)  ; LAB_00547b14
    MOV ESI,dword ptr [ESP + 0x4924]    ; 00547a87
    LEA EDI,[ESP + 0x25b4]              ; 00547a8e
    PUSH EDI                            ; 00547a95
    MOV EAX,ECX                         ; 00547a96
    SHR ECX,0x2                         ; 00547a98
    MOVSD.REP ES:EDI,ESI                ; 00547a9b
    MOV CL,AL                           ; 00547a9d
    AND CL,0x3                          ; 00547a9f
    MOVSB.REP ES:EDI,ESI                ; 00547aa2
    POP EDI                             ; 00547aa4
    MOV EAX,dword ptr [ESP + 0x4858]    ; 00547aa5
    MOV EDX,dword ptr [ESP + 0x4924]    ; 00547aac
    XOR CL,CL                           ; 00547ab3
    ADD EDX,EAX                         ; 00547ab5
    MOV byte ptr [ESP + EAX*0x1 + 0x25b4],CL ; 00547ab7
    MOV ECX,dword ptr [0x01e810a8]      ; 00547abe | DAT_01e810a8
    MOV dword ptr [ESP + 0x4924],EDX    ; 00547ac4
    TEST ECX,ECX                        ; 00547acb
    JZ 0x00547b2b                       ; 00547acd
        ;   XREF to: 00547b2b (CONDITIONAL_JUMP)  ; LAB_00547b2b
    LEA EAX,[ESP + 0x25b4]              ; 00547acf
    PUSH EAX                            ; 00547ad6
    MOV EDI,dword ptr [0x0061b4d0]      ; 00547ad7 | DAT_0061b4d0
    PUSH EDI                            ; 00547add
    CALL core_event.cpp_CEventList_validateCondition_FUN_004a6c90 ; 00547ade
        ;   XREF to: 004a6c90 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCondition_FUN_004a6c90(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 00547ae3
    TEST EAX,EAX                        ; 00547ae6
    JZ 0x00547a06                       ; 00547ae8
        ;   XREF to: 00547a06 (CONDITIONAL_JUMP)  ; LAB_00547a06
    MOV EDI,0x1e810b0                   ; 00547aee
        ;   Label: LAB_00547aee
    MOV ESI,EAX                         ; 00547af3
    PUSH EDI                            ; 00547af5 | DAT_01e810b0
    MOV AL,byte ptr [ESI]               ; 00547af6
        ;   Label: LAB_00547af6
    MOV byte ptr [EDI],AL               ; 00547af8 | DAT_01e810b0 | DAT_01e810b2
    CMP AL,0x0                          ; 00547afa
    JZ 0x00547b0e                       ; 00547afc
        ;   XREF to: 00547b0e (CONDITIONAL_JUMP)  ; LAB_00547b0e
    MOV AL,byte ptr [ESI + 0x1]         ; 00547afe
    ADD ESI,0x2                         ; 00547b01
    MOV byte ptr [EDI + 0x1],AL         ; 00547b04 | DAT_01e810b1 | DAT_01e810b3
    ADD EDI,0x2                         ; 00547b07
    CMP AL,0x0                          ; 00547b0a
    JNZ 0x00547af6                      ; 00547b0c
        ;   XREF to: 00547af6 (CONDITIONAL_JUMP)  ; LAB_00547af6
    POP EDI                             ; 00547b0e
        ;   Label: LAB_00547b0e
    JMP 0x005445dc                      ; 00547b0f
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    PUSH 0x5ef03b                       ; 00547b14 | = "Error parsing holsterWeapon command p..."
        ;   Label: LAB_00547b14
    PUSH 0x1e810b0                      ; 00547b19 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00547b1e
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00547b23
    JMP 0x005445dc                      ; 00547b26
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EAX,[ESP + 0x25b4]              ; 00547b2b
        ;   Label: LAB_00547b2b
    PUSH EAX                            ; 00547b32
    MOV ESI,dword ptr [0x0061b4d0]      ; 00547b33 | DAT_0061b4d0
    PUSH ESI                            ; 00547b39
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00547b3a
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00547b3f
    MOV dword ptr [ESP + 0x4860],EAX    ; 00547b42
    JMP 0x00547a06                      ; 00547b49
        ;   XREF to: 00547a06 (UNCONDITIONAL_JUMP)  ; LAB_00547a06
    PUSH 0x5ef065                       ; 00547b4e | = "Missing closing ')' in holsterWeapon ..."
        ;   Label: LAB_00547b4e
    PUSH 0x1e810b0                      ; 00547b53 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00547b58
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00547b5d
    JMP 0x005445dc                      ; 00547b60
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0x4                         ; 00547b65
        ;   Label: LAB_00547b65
    PUSH ESI                            ; 00547b68
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00547b69
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00547b6e
    MOV dword ptr [ESP + 0x4924],EAX    ; 00547b71
    MOV EAX,dword ptr [EBX + 0x44]      ; 00547b78
    MOV dword ptr [ESP + 0x4928],EAX    ; 00547b7b
    XOR EAX,EAX                         ; 00547b82
    MOV dword ptr [ESP + 0x47f4],EAX    ; 00547b84
    JMP 0x0054450b                      ; 00547b8b
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0x2                         ; 00547b90
        ;   Label: LAB_00547b90
    PUSH ESI                            ; 00547b93
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00547b94
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00547b99
    MOV dword ptr [ESP + 0x4924],EAX    ; 00547b9c
    LEA EAX,[ESP + 0x43c8]              ; 00547ba3
    PUSH EAX                            ; 00547baa
    LEA EAX,[ESP + 0x4928]              ; 00547bab
    PUSH EAX                            ; 00547bb2
    CALL core_script.cpp_parseConditionExpr_FUN_00543380 ; 00547bb3
        ;   XREF to: 00543380 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseConditionExpr_FUN_00543380(char * * cursor, char * out_buffer)
    ADD ESP,0x8                         ; 00547bb8
    TEST EAX,EAX                        ; 00547bbb
    JNZ 0x00547aee                      ; 00547bbd
        ;   XREF to: 00547aee (CONDITIONAL_JUMP)  ; LAB_00547aee
    CMP dword ptr [0x01e810a8],0x0      ; 00547bc3 | DAT_01e810a8
    JNZ 0x0054450b                      ; 00547bca
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EAX,[ESP + 0x43c8]              ; 00547bd0
    PUSH EAX                            ; 00547bd7
    MOV ECX,dword ptr [0x0061b4d0]      ; 00547bd8 | DAT_0061b4d0
    PUSH ECX                            ; 00547bde
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00547bdf
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00547be4
    TEST EAX,EAX                        ; 00547be7
    JNZ 0x0054450b                      ; 00547be9
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH EAX                            ; 00547bef
    MOV ESI,dword ptr [EBX + 0x44]      ; 00547bf0
    PUSH ESI                            ; 00547bf3
    PUSH EBX                            ; 00547bf4
    CALL core_script.cpp_CScript_skipCommands_FUN_0054ad20 ; 00547bf5
        ;   XREF to: 0054ad20 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_skipCommands_FUN_0054ad20(CScript * this_ptr, int direction, int count)
    MOV ESI,EAX                         ; 00547bfa
    ADD ESP,0xc                         ; 00547bfc
    MOV EDI,EAX                         ; 00547bff
    TEST EAX,EAX                        ; 00547c01
    JL 0x00547c2b                       ; 00547c03
        ;   XREF to: 00547c2b (CONDITIONAL_JUMP)  ; LAB_00547c2b
    PUSH 0x4                            ; 00547c05
    MOV EDX,dword ptr [EBX + 0x30]      ; 00547c07
    PUSH 0x5ef0d0                       ; 00547c0a | DAT_005ef0d0
    MOV EAX,dword ptr [EDX + ESI*0x8 + 0x4] ; 00547c0f
    PUSH EAX                            ; 00547c13
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 00547c14
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00547c19
    TEST EAX,EAX                        ; 00547c1c
    JNZ 0x00547c23                      ; 00547c1e
        ;   XREF to: 00547c23 (CONDITIONAL_JUMP)  ; LAB_00547c23
    LEA EDI,[ESI + 0x1]                 ; 00547c20
    MOV dword ptr [EBX + 0x44],EDI      ; 00547c23
        ;   Label: LAB_00547c23
    JMP 0x0054450b                      ; 00547c26
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EDX,dword ptr [ESP + 0x47f0]    ; 00547c2b
        ;   Label: LAB_00547c2b
    PUSH EDX                            ; 00547c32
    PUSH 0x5ef09a                       ; 00547c33 | = "Can't skip next command after if stat..."
    PUSH 0x1e810b0                      ; 00547c38 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00547c3d
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00547c42
    JMP 0x005445dc                      ; 00547c45
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0xb                         ; 00547c4a
        ;   Label: LAB_00547c4a
    PUSH ESI                            ; 00547c4d
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00547c4e
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00547c53
    LEA EDX,[ESP + 0x4868]              ; 00547c56
    PUSH EDX                            ; 00547c5d
    PUSH 0x5ef0e1                       ; 00547c5e | = " ( )%n"
    MOV ECX,0xffffffff                  ; 00547c63
    PUSH EAX                            ; 00547c68
    MOV dword ptr [ESP + 0x4930],EAX    ; 00547c69
    MOV dword ptr [ESP + 0x4874],ECX    ; 00547c70
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00547c77
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0xc                         ; 00547c7c
    MOV ESI,dword ptr [ESP + 0x4868]    ; 00547c7f
    CMP ESI,0x2                         ; 00547c86
    JL 0x00547cc9                       ; 00547c89
        ;   XREF to: 00547cc9 (CONDITIONAL_JUMP)  ; LAB_00547cc9
    MOV EDI,dword ptr [ESP + 0x4924]    ; 00547c8b
    ADD EDI,ESI                         ; 00547c92
    MOV EAX,[0x01e810a8]                ; 00547c94 | DAT_01e810a8
    MOV dword ptr [ESP + 0x4924],EDI    ; 00547c99
    TEST EAX,EAX                        ; 00547ca0
    JNZ 0x0054450b                      ; 00547ca2
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV dword ptr [ESP + 0x47f4],EAX    ; 00547ca8
    MOV EAX,[0x0061d95c]                ; 00547caf | g_CGamePtr
    MOV dword ptr [EBX],0x1             ; 00547cb4
    MOV dword ptr [EAX + 0x27c],0x1     ; 00547cba | g_CGameInstance.act_completion_state
    JMP 0x0054450b                      ; 00547cc4
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH 0x5ef0e8                       ; 00547cc9 | = "Error parsing finishedAct command"
        ;   Label: LAB_00547cc9
    PUSH 0x1e810b0                      ; 00547cce | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00547cd3
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00547cd8
    JMP 0x005445dc                      ; 00547cdb
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0x9                         ; 00547ce0
        ;   Label: LAB_00547ce0
    PUSH ESI                            ; 00547ce3
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00547ce4
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00547ce9
    PUSH 0x64                           ; 00547cec
    MOV dword ptr [ESP + 0x4928],EAX    ; 00547cee
    LEA EAX,[ESP + 0x4304]              ; 00547cf5
    PUSH EAX                            ; 00547cfc
    LEA EAX,[ESP + 0x492c]              ; 00547cfd
    PUSH EAX                            ; 00547d04
    CALL core_script.cpp_parseArgument_FUN_005432d0 ; 00547d05
        ;   XREF to: 005432d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005432d0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 00547d0a
    TEST EAX,EAX                        ; 00547d0d
    JNZ 0x00547aee                      ; 00547d0f
        ;   XREF to: 00547aee (CONDITIONAL_JUMP)  ; LAB_00547aee
    PUSH 0x5ef114                       ; 00547d15 | = "false"
    LEA EAX,[ESP + 0x4304]              ; 00547d1a
    PUSH EAX                            ; 00547d21
    MOV ESI,0xffffffff                  ; 00547d22
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 00547d27
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00547d2c
    TEST EAX,EAX                        ; 00547d2f
    JNZ 0x00547d35                      ; 00547d31
        ;   XREF to: 00547d35 (CONDITIONAL_JUMP)  ; LAB_00547d35
    XOR ESI,ESI                         ; 00547d33
    PUSH 0x5ef11a                       ; 00547d35 | DAT_005ef11a
        ;   Label: LAB_00547d35
    LEA EAX,[ESP + 0x4304]              ; 00547d3a
    PUSH EAX                            ; 00547d41
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 00547d42
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00547d47
    TEST EAX,EAX                        ; 00547d4a
    JNZ 0x00547d53                      ; 00547d4c
        ;   XREF to: 00547d53 (CONDITIONAL_JUMP)  ; LAB_00547d53
    MOV ESI,0x1                         ; 00547d4e
    PUSH 0x5ef11f                       ; 00547d53 | = "bottom"
        ;   Label: LAB_00547d53
    LEA EAX,[ESP + 0x4304]              ; 00547d58
    PUSH EAX                            ; 00547d5f
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 00547d60
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00547d65
    TEST EAX,EAX                        ; 00547d68
    JNZ 0x00547e93                      ; 00547d6a
        ;   XREF to: 00547e93 (CONDITIONAL_JUMP)  ; LAB_00547e93
    MOV ESI,0x2                         ; 00547d70
    MOV ECX,dword ptr [0x01e810a8]      ; 00547d75 | DAT_01e810a8
        ;   Label: LAB_00547d75
    TEST ECX,ECX                        ; 00547d7b
    JNZ 0x0054450b                      ; 00547d7d
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EAX,[0x0061d95c]                ; 00547d83 | g_CGamePtr
    MOV dword ptr [EAX + 0x244],ESI     ; 00547d88 | g_CGameInstance.letterbox_mode
    TEST ESI,ESI                        ; 00547d8e
    SETZ DL                             ; 00547d90
    AND EDX,0xff                        ; 00547d93
    MOV EDI,dword ptr [EAX + 0x244]     ; 00547d99 | g_CGameInstance.letterbox_mode
    MOV dword ptr [EAX + 0x248],EDX     ; 00547d9f | g_CGameInstance.allow_damage_flag
    TEST EDI,EDI                        ; 00547da5
    SETZ DL                             ; 00547da7
    AND EDX,0xff                        ; 00547daa
    MOV dword ptr [EAX + 0x24c],EDX     ; 00547db0 | g_CGameInstance.allow_enemy_attack_flag
    MOV EDX,dword ptr [EAX + 0x244]     ; 00547db6 | g_CGameInstance.letterbox_mode
    MOV dword ptr [EAX + 0x254],EDX     ; 00547dbc | g_CGameInstance.hero_controls_blocked
    TEST EDX,EDX                        ; 00547dc2
    JZ 0x00547dce                       ; 00547dc4
        ;   XREF to: 00547dce (CONDITIONAL_JUMP)  ; LAB_00547dce
    MOV EAX,[0x0061d418]                ; 00547dc6 | g_CFieldNotesPtr
    MOV dword ptr [EAX + 0x40],ECX      ; 00547dcb | g_CFieldNotesInstance.is_displayed
    MOV EAX,[0x0061d95c]                ; 00547dce | g_CGamePtr
        ;   Label: LAB_00547dce
    MOV dword ptr [EBX + 0x454],0xffffffff ; 00547dd3
    MOV ECX,0x1                         ; 00547ddd
    MOV ESI,dword ptr [EAX + 0x25c]     ; 00547de2 | g_CGameInstance.goggles_active
    MOV dword ptr [0x01e818b4],ECX      ; 00547de8 | DAT_01e818b4
    TEST ESI,ESI                        ; 00547dee
    JZ 0x0054450b                       ; 00547df0
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    CMP dword ptr [EAX + 0x244],0x0     ; 00547df6 | g_CGameInstance.letterbox_mode
    JZ 0x0054450b                       ; 00547dfd
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EAX,[0x01d06ab4]                ; 00547e03 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 00547e08
    PUSH EAX                            ; 00547e0f
    MOV EDX,dword ptr [EAX + 0x154]     ; 00547e10
    CALL dword ptr [EDX + 0x150]        ; 00547e16
    ADD ESP,0x4                         ; 00547e1c
    MOV EAX,[0x0061d95c]                ; 00547e1f | g_CGamePtr
    PUSH 0x0                            ; 00547e24
    MOV EDX,dword ptr [EAX + 0xb00]     ; 00547e26 | g_CGameInstance.vtable
    PUSH EAX                            ; 00547e2c | g_CGameInstance
    CALL dword ptr [EDX]                ; 00547e2d
    ADD ESP,0x8                         ; 00547e2f
    MOV EAX,[0x00622c18]                ; 00547e32 | g_CDemonSetPtr
    PUSH EAX                            ; 00547e37 | g_CDemonSetInstance
    CALL core_event.cpp_FUN_004aafe0    ; 00547e38
        ;   XREF to: 004aafe0 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004aafe0()
    ADD ESP,0x4                         ; 00547e3d
    MOV ESI,EAX                         ; 00547e40
    MOV EAX,[0x00622ad0]                ; 00547e42 | g_CScriptPtr
    PUSH 0x1                            ; 00547e47
    MOV EDX,dword ptr [EAX + 0xc]       ; 00547e49 | g_CScriptInstance.focus_actor
    PUSH EDX                            ; 00547e4c
    MOV ECX,dword ptr [0x00622c18]      ; 00547e4d | g_CDemonSetPtr
    PUSH ECX                            ; 00547e53 | g_CDemonSetInstance
    CALL core_setdir.cpp_FUN_00559f80   ; 00547e54
        ;   XREF to: 00559f80 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_FUN_00559f80()
    ADD ESP,0xc                         ; 00547e59
    MOV EDI,dword ptr [0x00622c18]      ; 00547e5c | g_CDemonSetPtr
    MOV EAX,[0x00622ad0]                ; 00547e62 | g_CScriptPtr
    PUSH EDI                            ; 00547e67 | g_CDemonSetInstance
    MOV dword ptr [EAX + 0x10],0x0      ; 00547e68 | g_CScriptInstance.focus_actor_changed
    CALL core_event.cpp_FUN_004aafe0    ; 00547e6f
        ;   XREF to: 004aafe0 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004aafe0()
    ADD ESP,0x4                         ; 00547e74
    CMP ESI,EAX                         ; 00547e77
    JNZ 0x0054450b                      ; 00547e79
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH EAX                            ; 00547e7f
    MOV EAX,[0x00622c18]                ; 00547e80 | g_CDemonSetPtr
    PUSH EAX                            ; 00547e85 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 ; 00547e86
        ;   XREF to: 0054f0d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 00547e8b
    JMP 0x0054450b                      ; 00547e8e
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    TEST ESI,ESI                        ; 00547e93
        ;   Label: LAB_00547e93
    JGE 0x00547d75                      ; 00547e95
        ;   XREF to: 00547d75 (CONDITIONAL_JUMP)  ; LAB_00547d75
    LEA EAX,[ESP + 0x4300]              ; 00547e9b
    PUSH EAX                            ; 00547ea2
    PUSH 0x5ef126                       ; 00547ea3 | = "Invalid letterBox mode: %s"
    PUSH 0x1e810b0                      ; 00547ea8 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00547ead
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00547eb2
    JMP 0x005445dc                      ; 00547eb5
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0xe                         ; 00547eba
        ;   Label: LAB_00547eba
    PUSH ESI                            ; 00547ebd
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00547ebe
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00547ec3
    PUSH 0x104                          ; 00547ec6
    MOV dword ptr [ESP + 0x4928],EAX    ; 00547ecb
    LEA EAX,[ESP + 0xbac]               ; 00547ed2
    PUSH EAX                            ; 00547ed9
    LEA EAX,[ESP + 0x492c]              ; 00547eda
    PUSH EAX                            ; 00547ee1
    CALL core_script.cpp_parseArgument_FUN_005432d0 ; 00547ee2
        ;   XREF to: 005432d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005432d0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 00547ee7
    TEST EAX,EAX                        ; 00547eea
    JNZ 0x00547aee                      ; 00547eec
        ;   XREF to: 00547aee (CONDITIONAL_JUMP)  ; LAB_00547aee
    CMP dword ptr [0x01e810a8],0x0      ; 00547ef2 | DAT_01e810a8
    JZ 0x00547f40                       ; 00547ef9
        ;   XREF to: 00547f40 (CONDITIONAL_JUMP)  ; LAB_00547f40
    MOV EAX,[0x0061f650]                ; 00547efb | DAT_0061f650
    CMP dword ptr [EAX + 0x1008],0x0    ; 00547f00 | DAT_01d2d908
    JNZ 0x00547f17                      ; 00547f07
        ;   XREF to: 00547f17 (CONDITIONAL_JUMP)  ; LAB_00547f17
    MOV EAX,[0x0061d418]                ; 00547f09 | g_CFieldNotesPtr
    CMP byte ptr [EAX],0x0              ; 00547f0e | g_CFieldNotesInstance
    JNZ 0x0054450b                      ; 00547f11
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH 0x1e810b0                      ; 00547f17 | DAT_01e810b0
        ;   Label: LAB_00547f17
    LEA EAX,[ESP + 0xbac]               ; 00547f1c
    PUSH EAX                            ; 00547f23
    MOV EDI,dword ptr [0x0061d418]      ; 00547f24 | g_CFieldNotesPtr
    PUSH EDI                            ; 00547f2a | g_CFieldNotesInstance
    CALL core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004bcba0 ; 00547f2b
        ;   XREF to: 004bcba0 (UNCONDITIONAL_CALL)  ; undefined4 core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004bcba0(CFieldNotes * this_ptr, char * param_2, char * param_3)
    ADD ESP,0xc                         ; 00547f30
    TEST EAX,EAX                        ; 00547f33
    JNZ 0x0054450b                      ; 00547f35
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    JMP 0x005445dc                      ; 00547f3b
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    PUSH EAX                            ; 00547f40
        ;   Label: LAB_00547f40
    LEA EAX,[ESP + 0xbac]               ; 00547f41
    PUSH EAX                            ; 00547f48
    MOV ECX,dword ptr [0x0061d418]      ; 00547f49 | g_CFieldNotesPtr
    PUSH ECX                            ; 00547f4f | g_CFieldNotesInstance
    CALL core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004bcba0 ; 00547f50
        ;   XREF to: 004bcba0 (UNCONDITIONAL_CALL)  ; undefined4 core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004bcba0(CFieldNotes * this_ptr, char * param_2, char * param_3)
    ADD ESP,0xc                         ; 00547f55
    JMP 0x0054450b                      ; 00547f58
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0xe                         ; 00547f5d
        ;   Label: LAB_00547f5d
    PUSH ESI                            ; 00547f60
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00547f61
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00547f66
    MOV dword ptr [ESP + 0x4924],EAX    ; 00547f69
    LEA EAX,[ESP + 0x4044]              ; 00547f70
    PUSH EAX                            ; 00547f77
    LEA EAX,[ESP + 0x4928]              ; 00547f78
    PUSH EAX                            ; 00547f7f
    CALL core_script.cpp_parseConditionExpr_FUN_00543380 ; 00547f80
        ;   XREF to: 00543380 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseConditionExpr_FUN_00543380(char * * cursor, char * out_buffer)
    ADD ESP,0x8                         ; 00547f85
    TEST EAX,EAX                        ; 00547f88
    JNZ 0x00547aee                      ; 00547f8a
        ;   XREF to: 00547aee (CONDITIONAL_JUMP)  ; LAB_00547aee
    CMP dword ptr [0x01e810a8],0x0      ; 00547f90 | DAT_01e810a8
    JNZ 0x0054450b                      ; 00547f97
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EAX,[ESP + 0x4044]              ; 00547f9d
    PUSH EAX                            ; 00547fa4
    MOV EDX,dword ptr [0x0061b4d0]      ; 00547fa5 | DAT_0061b4d0
    PUSH EDX                            ; 00547fab
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00547fac
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00547fb1
    MOV dword ptr [EBX + 0x14],EAX      ; 00547fb4
    JMP 0x0054450b                      ; 00547fb7
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0x6                         ; 00547fbc
        ;   Label: LAB_00547fbc
    PUSH ESI                            ; 00547fbf
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00547fc0
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00547fc5
    LEA EDX,[ESP + 0x486c]              ; 00547fc8
    PUSH EDX                            ; 00547fcf
    LEA EDX,[ESP + 0x2f18]              ; 00547fd0
    PUSH EDX                            ; 00547fd7
    PUSH 0x5ef166                       ; 00547fd8 | = "(%[^,)]%n"
    MOV ECX,0xffffffff                  ; 00547fdd
    PUSH EAX                            ; 00547fe2
    MOV dword ptr [ESP + 0x4934],EAX    ; 00547fe3
    MOV dword ptr [ESP + 0x487c],ECX    ; 00547fea
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00547ff1
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 00547ff6
    MOV ESI,dword ptr [ESP + 0x486c]    ; 00547ff9
    CMP ESI,0x2                         ; 00548000
    JGE 0x0054801c                      ; 00548003
        ;   XREF to: 0054801c (CONDITIONAL_JUMP)  ; LAB_0054801c
    PUSH 0x5ef170                       ; 00548005 | = "Error parsing lookAt command parms"
    PUSH 0x1e810b0                      ; 0054800a | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0054800f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00548014
    JMP 0x005445dc                      ; 00548017
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDI,dword ptr [ESP + 0x4924]    ; 0054801c
        ;   Label: LAB_0054801c
    LEA EAX,[ESP + 0x2f14]              ; 00548023
    ADD EDI,ESI                         ; 0054802a
    PUSH EAX                            ; 0054802c
    MOV dword ptr [ESP + 0x4928],EDI    ; 0054802d
    CALL core_script.cpp_trimString_FUN_00543240 ; 00548034
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 00548039
    PUSH 0x7c6344                       ; 0054803c | g_CCharacterClassInfo
    MOV EAX,[0x007c637c]                ; 00548041 | g_CCharacterClassInfo.name_hash
    PUSH EAX                            ; 00548046
    LEA EAX,[ESP + 0x2f1c]              ; 00548047
    PUSH EAX                            ; 0054804e
    CALL core_script.cpp_getActor_FUN_005433c0 ; 0054804f
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00548054
    MOV ESI,EAX                         ; 00548057
    TEST EAX,EAX                        ; 00548059
    JNZ 0x0054806f                      ; 0054805b
        ;   XREF to: 0054806f (CONDITIONAL_JUMP)  ; LAB_0054806f
    CMP dword ptr [0x01e818bc],0x0      ; 0054805d | DAT_01e818bc
    JNZ 0x00544524                      ; 00548064
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 0054806a
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDX,dword ptr [ESP + 0x4924]    ; 0054806f
        ;   Label: LAB_0054806f
    MOV CL,byte ptr [EDX]               ; 00548076
    XOR EAX,EAX                         ; 00548078
    CMP CL,0x2c                         ; 0054807a
    JZ 0x005480b6                       ; 0054807d
        ;   XREF to: 005480b6 (CONDITIONAL_JUMP)  ; LAB_005480b6
    MOV EDX,dword ptr [ESP + 0x4924]    ; 0054807f
        ;   Label: LAB_0054807f
    CMP byte ptr [EDX],0x29             ; 00548086
    JNZ 0x00548160                      ; 00548089
        ;   XREF to: 00548160 (CONDITIONAL_JUMP)  ; LAB_00548160
    LEA EDI,[EDX + 0x1]                 ; 0054808f
    MOV EDX,dword ptr [0x01e810a8]      ; 00548092 | DAT_01e810a8
    MOV dword ptr [ESP + 0x4924],EDI    ; 00548098
    TEST EDX,EDX                        ; 0054809f
    JNZ 0x0054450b                      ; 005480a1
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH EAX                            ; 005480a7
    PUSH ESI                            ; 005480a8
    CALL core_charactr.cpp_CCharacter_setLookAtTarget_FUN_00433c50 ; 005480a9
        ;   XREF to: 00433c50 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setLookAtTarget_FUN_00433c50(CCharacter * this_ptr, CDemonActor * target)
    ADD ESP,0x8                         ; 005480ae
    JMP 0x0054450b                      ; 005480b1
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EAX,[ESP + 0x486c]              ; 005480b6
        ;   Label: LAB_005480b6
    PUSH EAX                            ; 005480bd
    LEA EAX,[ESP + 0x1de8]              ; 005480be
    PUSH EAX                            ; 005480c5
    PUSH 0x5ef193                       ; 005480c6 | = ", %[^)]%n"
    MOV ECX,dword ptr [ESP + 0x4930]    ; 005480cb
    MOV EDX,0xffffffff                  ; 005480d2
    PUSH ECX                            ; 005480d7
    MOV dword ptr [ESP + 0x487c],EDX    ; 005480d8
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 005480df
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 005480e4
    MOV EDI,dword ptr [ESP + 0x486c]    ; 005480e7
    CMP EDI,0x3                         ; 005480ee
    JGE 0x0054810a                      ; 005480f1
        ;   XREF to: 0054810a (CONDITIONAL_JUMP)  ; LAB_0054810a
    PUSH 0x5ef19d                       ; 005480f3 | = "Error parsing lookAt command parms"
    PUSH 0x1e810b0                      ; 005480f8 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005480fd
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00548102
    JMP 0x005445dc                      ; 00548105
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDX,dword ptr [ESP + 0x4924]    ; 0054810a
        ;   Label: LAB_0054810a
    LEA EAX,[ESP + 0x1de4]              ; 00548111
    ADD EDX,EDI                         ; 00548118
    PUSH EAX                            ; 0054811a
    MOV dword ptr [ESP + 0x4928],EDX    ; 0054811b
    CALL core_script.cpp_trimString_FUN_00543240 ; 00548122
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 00548127
    PUSH 0x7c2ff8                       ; 0054812a | g_CDemonActorClassInfo
    MOV ECX,dword ptr [0x007c3030]      ; 0054812f | g_CDemonActorClassInfo.name_hash
    PUSH ECX                            ; 00548135
    LEA EAX,[ESP + 0x1dec]              ; 00548136
    PUSH EAX                            ; 0054813d
    CALL core_script.cpp_getActor_FUN_005433c0 ; 0054813e
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00548143
    TEST EAX,EAX                        ; 00548146
    JNZ 0x0054807f                      ; 00548148
        ;   XREF to: 0054807f (CONDITIONAL_JUMP)  ; LAB_0054807f
    CMP dword ptr [0x01e818bc],0x0      ; 0054814e | DAT_01e818bc
    JNZ 0x00544524                      ; 00548155
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 0054815b
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    PUSH 0x5ef1c0                       ; 00548160 | = "Missing closing ')' in lookAt command"
        ;   Label: LAB_00548160
    PUSH 0x1e810b0                      ; 00548165 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0054816a
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 0054816f
    JMP 0x005445dc                      ; 00548172
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0xd                         ; 00548177
        ;   Label: LAB_00548177
    PUSH ESI                            ; 0054817a
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 0054817b
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00548180
    LEA EDX,[ESP + 0x4870]              ; 00548183
    PUSH EDX                            ; 0054818a
    LEA EDX,[ESP + 0x48e4]              ; 0054818b
    PUSH EDX                            ; 00548192
    LEA EDX,[ESP + 0x30ac]              ; 00548193
    PUSH EDX                            ; 0054819a
    PUSH 0x5ef1f4                       ; 0054819b | = "(%[^,], %d )%n"
    MOV EDI,0xffffffff                  ; 005481a0
    MOV dword ptr [ESP + 0x4934],EAX    ; 005481a5
    PUSH EAX                            ; 005481ac
    MOV dword ptr [ESP + 0x48f4],EDI    ; 005481ad
    MOV dword ptr [ESP + 0x4884],EDI    ; 005481b4
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 005481bb
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 005481c0
    MOV ECX,dword ptr [ESP + 0x4870]    ; 005481c3
    CMP ECX,0x3                         ; 005481ca
    JGE 0x005481e6                      ; 005481cd
        ;   XREF to: 005481e6 (CONDITIONAL_JUMP)  ; LAB_005481e6
    PUSH 0x5ef203                       ; 005481cf | = "Error parsing monsterVision command p..."
    PUSH 0x1e810b0                      ; 005481d4 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005481d9
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 005481de
    JMP 0x005445dc                      ; 005481e1
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV ESI,dword ptr [ESP + 0x4924]    ; 005481e6
        ;   Label: LAB_005481e6
    LEA EAX,[ESP + 0x30a4]              ; 005481ed
    ADD ESI,ECX                         ; 005481f4
    PUSH EAX                            ; 005481f6
    MOV dword ptr [ESP + 0x4928],ESI    ; 005481f7
    CALL core_script.cpp_trimString_FUN_00543240 ; 005481fe
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 00548203
    PUSH 0x7c6344                       ; 00548206 | g_CCharacterClassInfo
    MOV EDI,dword ptr [0x007c637c]      ; 0054820b | g_CCharacterClassInfo.name_hash
    PUSH EDI                            ; 00548211
    LEA EAX,[ESP + 0x30ac]              ; 00548212
    PUSH EAX                            ; 00548219
    CALL core_script.cpp_getActor_FUN_005433c0 ; 0054821a
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0054821f
    TEST EAX,EAX                        ; 00548222
    JNZ 0x00548238                      ; 00548224
        ;   XREF to: 00548238 (CONDITIONAL_JUMP)  ; LAB_00548238
    CMP dword ptr [0x01e818bc],0x0      ; 00548226 | DAT_01e818bc
    JNZ 0x00544524                      ; 0054822d
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 00548233
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    CMP dword ptr [0x01e810a8],0x0      ; 00548238 | DAT_01e810a8
        ;   Label: LAB_00548238
    JNZ 0x0054450b                      ; 0054823f
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV dword ptr [EBX + 0x18],EAX      ; 00548245
    MOV EAX,[0x0061d95c]                ; 00548248 | g_CGamePtr
    CMP dword ptr [EAX + 0x260],0x0     ; 0054824d | g_CGameInstance.special_view_active
    SETZ DL                             ; 00548254
    AND EDX,0xff                        ; 00548257
    PUSH EDX                            ; 0054825d
    MOV dword ptr [ESP + 0x48e4],EDX    ; 0054825e
    PUSH EAX                            ; 00548265 | g_CGameInstance
    MOV ECX,dword ptr [EAX + 0xb00]     ; 00548266 | g_CGameInstance.vtable
    CALL dword ptr [ECX + 0x4]          ; 0054826c
    ADD ESP,0x8                         ; 0054826f
    JMP 0x0054450b                      ; 00548272
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0xc                         ; 00548277
        ;   Label: LAB_00548277
    PUSH ESI                            ; 0054827a
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 0054827b
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00548280
    LEA EDX,[ESP + 0x4874]              ; 00548283
    PUSH EDX                            ; 0054828a
    LEA EDX,[ESP + 0x34]                ; 0054828b
    PUSH EDX                            ; 0054828f
    LEA EDX,[ESP + 0x28]                ; 00548290
    PUSH EDX                            ; 00548294
    LEA EDX,[ESP + 0x29a8]              ; 00548295
    PUSH EDX                            ; 0054829c
    PUSH 0x5ef23a                       ; 0054829d | = "(%[^,], %f , %f )%n"
    MOV EDI,0xffffffff                  ; 005482a2
    PUSH EAX                            ; 005482a7
    MOV dword ptr [ESP + 0x493c],EAX    ; 005482a8
    MOV dword ptr [ESP + 0x488c],EDI    ; 005482af
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 005482b6
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x18                        ; 005482bb
    MOV EAX,dword ptr [ESP + 0x4874]    ; 005482be
    CMP EAX,0x5                         ; 005482c5
    JGE 0x005482e1                      ; 005482c8
        ;   XREF to: 005482e1 (CONDITIONAL_JUMP)  ; LAB_005482e1
    PUSH 0x5ef24e                       ; 005482ca | = "Error parsing movePlatform command parms"
    PUSH 0x1e810b0                      ; 005482cf | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005482d4
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 005482d9
    JMP 0x005445dc                      ; 005482dc
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDX,dword ptr [ESP + 0x4924]    ; 005482e1
        ;   Label: LAB_005482e1
    ADD EDX,EAX                         ; 005482e8
    LEA EAX,[ESP + 0x299c]              ; 005482ea
    PUSH EAX                            ; 005482f1
    MOV dword ptr [ESP + 0x4928],EDX    ; 005482f2
    CALL core_script.cpp_trimString_FUN_00543240 ; 005482f9
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 005482fe
    PUSH 0x1e7d3e4                      ; 00548301
    MOV ECX,dword ptr [0x01e7d41c]      ; 00548306 | g_CPlatformClassInfo.name_hash
    PUSH ECX                            ; 0054830c
    LEA EAX,[ESP + 0x29a4]              ; 0054830d
    PUSH EAX                            ; 00548314
    CALL core_script.cpp_getActor_FUN_005433c0 ; 00548315
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV EDX,EAX                         ; 0054831a
    ADD ESP,0xc                         ; 0054831c
    TEST EAX,EAX                        ; 0054831f
    JNZ 0x00548335                      ; 00548321
        ;   XREF to: 00548335 (CONDITIONAL_JUMP)  ; LAB_00548335
    CMP dword ptr [0x01e818bc],0x0      ; 00548323 | DAT_01e818bc
    JNZ 0x00544524                      ; 0054832a
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 00548330
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    FLD float ptr [ESP + 0x20]          ; 00548335
        ;   Label: LAB_00548335
    FLDZ                                ; 00548339
    FXCH                                ; 0054833b
    FSTP double ptr [ESP + 0x10]        ; 0054833d
    FCOMP double ptr [ESP + 0x10]       ; 00548341
    FNSTSW AX                           ; 00548345
    SAHF                                ; 00548347
    JA 0x0054838b                       ; 00548348
        ;   XREF to: 0054838b (CONDITIONAL_JUMP)  ; LAB_0054838b
    FLD1                                ; 0054834a
    FCOMP double ptr [ESP + 0x10]       ; 0054834c
    FNSTSW AX                           ; 00548350
    SAHF                                ; 00548352
    JC 0x0054838b                       ; 00548353
        ;   XREF to: 0054838b (CONDITIONAL_JUMP)  ; LAB_0054838b
    FLD float ptr [ESP + 0x30]          ; 00548355
    FLDZ                                ; 00548359
    FXCH                                ; 0054835b
    FSTP double ptr [ESP]               ; 0054835d
    FCOMP double ptr [ESP]              ; 00548360
    FNSTSW AX                           ; 00548363
    SAHF                                ; 00548365
    JNC 0x005483a2                      ; 00548366
        ;   XREF to: 005483a2 (CONDITIONAL_JUMP)  ; LAB_005483a2
    CMP dword ptr [0x01e810a8],0x0      ; 00548368 | DAT_01e810a8
    JNZ 0x0054450b                      ; 0054836f
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH dword ptr [ESP + 0x30]         ; 00548375
    PUSH dword ptr [ESP + 0x24]         ; 00548379
    PUSH EDX                            ; 0054837d
    CALL core_platfrm.cpp_CPlatform_startMovement_FUN_0053a340 ; 0054837e
        ;   XREF to: 0053a340 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_startMovement_FUN_0053a340(CPlatform * this_ptr, float goal_param, float movement_rate)
    ADD ESP,0xc                         ; 00548383
    JMP 0x0054450b                      ; 00548386
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH 0x5ef277                       ; 0054838b | = "Paramater must be in range 0.0 .. 1.0"
        ;   Label: LAB_0054838b
    PUSH 0x1e810b0                      ; 00548390 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00548395
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 0054839a
    JMP 0x005445dc                      ; 0054839d
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDI,dword ptr [ESP + 0x4]       ; 005483a2
        ;   Label: LAB_005483a2
    PUSH EDI                            ; 005483a6
    MOV EAX,dword ptr [ESP + 0x4]       ; 005483a7
    PUSH EAX                            ; 005483ab
    PUSH 0x5ef29d                       ; 005483ac | = "Invalid movement rate %f"
    JMP 0x005445cf                      ; 005483b1
        ;   XREF to: 005445cf (UNCONDITIONAL_JUMP)  ; LAB_005445cf
    ADD ESI,0x8                         ; 005483b6
        ;   Label: LAB_005483b6
    PUSH ESI                            ; 005483b9
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 005483ba
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 005483bf
    LEA EDX,[ESP + 0x4878]              ; 005483c2
    PUSH EDX                            ; 005483c9
    LEA EDX,[ESP + 0x1eb0]              ; 005483ca
    PUSH EDX                            ; 005483d1
    LEA EDX,[ESP + 0x1d24]              ; 005483d2
    PUSH EDX                            ; 005483d9
    PUSH 0x5ef2bf                       ; 005483da | = "(%[^,], %[^)])%n"
    MOV ECX,0xffffffff                  ; 005483df
    PUSH EAX                            ; 005483e4
    MOV dword ptr [ESP + 0x4938],EAX    ; 005483e5
    MOV dword ptr [ESP + 0x488c],ECX    ; 005483ec
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 005483f3
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 005483f8
    MOV ESI,dword ptr [ESP + 0x4878]    ; 005483fb
    CMP ESI,0x5                         ; 00548402
    JGE 0x0054841e                      ; 00548405
        ;   XREF to: 0054841e (CONDITIONAL_JUMP)  ; LAB_0054841e
    PUSH 0x5ef2d0                       ; 00548407 | = "Error parsing openDoor command parms"
    PUSH 0x1e810b0                      ; 0054840c | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00548411
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00548416
    JMP 0x005445dc                      ; 00548419
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDI,dword ptr [ESP + 0x4924]    ; 0054841e
        ;   Label: LAB_0054841e
    LEA EAX,[ESP + 0x1eac]              ; 00548425
    ADD EDI,ESI                         ; 0054842c
    PUSH EAX                            ; 0054842e
    MOV dword ptr [ESP + 0x4928],EDI    ; 0054842f
    CALL core_script.cpp_trimString_FUN_00543240 ; 00548436
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 0054843b
    LEA EAX,[ESP + 0x1d1c]              ; 0054843e
    PUSH EAX                            ; 00548445
    CALL core_script.cpp_trimString_FUN_00543240 ; 00548446
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 0054844b
    PUSH 0x1b688f0                      ; 0054844e
    MOV EAX,[0x01b68928]                ; 00548453 | g_CDoorClassInfo.name_hash
    PUSH EAX                            ; 00548458
    LEA EAX,[ESP + 0x1eb4]              ; 00548459
    PUSH EAX                            ; 00548460
    CALL core_script.cpp_getActor_FUN_005433c0 ; 00548461
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV ESI,EAX                         ; 00548466
    ADD ESP,0xc                         ; 00548468
    TEST EAX,EAX                        ; 0054846b
    JNZ 0x00548481                      ; 0054846d
        ;   XREF to: 00548481 (CONDITIONAL_JUMP)  ; LAB_00548481
    CMP dword ptr [0x01e818bc],0x0      ; 0054846f | DAT_01e818bc
    JNZ 0x00544524                      ; 00548476
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 0054847c
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    PUSH 0x7c6344                       ; 00548481 | g_CCharacterClassInfo
        ;   Label: LAB_00548481
    MOV EDX,dword ptr [0x007c637c]      ; 00548486 | g_CCharacterClassInfo.name_hash
    PUSH EDX                            ; 0054848c
    LEA EAX,[ESP + 0x1d24]              ; 0054848d
    PUSH EAX                            ; 00548494
    CALL core_script.cpp_getActor_FUN_005433c0 ; 00548495
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV EDX,EAX                         ; 0054849a
    ADD ESP,0xc                         ; 0054849c
    TEST EAX,EAX                        ; 0054849f
    JNZ 0x005484b5                      ; 005484a1
        ;   XREF to: 005484b5 (CONDITIONAL_JUMP)  ; LAB_005484b5
    CMP dword ptr [0x01e818bc],0x0      ; 005484a3 | DAT_01e818bc
    JNZ 0x00544524                      ; 005484aa
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 005484b0
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV ECX,dword ptr [0x01e810a8]      ; 005484b5 | DAT_01e810a8
        ;   Label: LAB_005484b5
    TEST ECX,ECX                        ; 005484bb
    JNZ 0x0054450b                      ; 005484bd
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    FLD float ptr [EBX + 0x48]          ; 005484c3
    FLDZ                                ; 005484c6
    MOV dword ptr [ESP + 0x47f4],ECX    ; 005484c8
    FCOMPP                              ; 005484cf
    FNSTSW AX                           ; 005484d1
    SAHF                                ; 005484d3
    JBE 0x005484f3                      ; 005484d4
        ;   XREF to: 005484f3 (CONDITIONAL_JUMP)  ; LAB_005484f3
    PUSH ESI                            ; 005484d6
    MOV EAX,dword ptr [EDX + 0x154]     ; 005484d7
    PUSH EDX                            ; 005484dd
    CALL dword ptr [EAX + 0x11c]        ; 005484de
    ADD ESP,0x8                         ; 005484e4
    MOV dword ptr [EBX + 0x48],0x3f800000 ; 005484e7
    JMP 0x0054450b                      ; 005484ee
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH EDX                            ; 005484f3
        ;   Label: LAB_005484f3
    MOV EAX,dword ptr [EDX + 0x154]     ; 005484f4
    CALL dword ptr [EAX + 0x124]        ; 005484fa
    ADD ESP,0x4                         ; 00548500
    TEST EAX,EAX                        ; 00548503
    JZ 0x0054450b                       ; 00548505
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV dword ptr [ESP + 0x47f4],0x1    ; 0054850b
    JMP 0x0054450b                      ; 00548516
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0xb                         ; 0054851b
        ;   Label: LAB_0054851b
    PUSH ESI                            ; 0054851e
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 0054851f
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00548524
    LEA EDX,[ESP + 0x487c]              ; 00548527
    PUSH EDX                            ; 0054852e
    LEA EDX,[ESP + 0x3f1c]              ; 0054852f
    PUSH EDX                            ; 00548536
    LEA EDX,[ESP + 0x3ebc]              ; 00548537
    PUSH EDX                            ; 0054853e
    PUSH 0x5ef301                       ; 0054853f | = "( %[^,], %[^)])%n"
    MOV ESI,0xffffffff                  ; 00548544
    PUSH EAX                            ; 00548549
    MOV dword ptr [ESP + 0x4938],EAX    ; 0054854a
    MOV dword ptr [ESP + 0x4890],ESI    ; 00548551
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00548558
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 0054855d
    MOV EDI,dword ptr [ESP + 0x487c]    ; 00548560
    CMP EDI,0x5                         ; 00548567
    JGE 0x00548583                      ; 0054856a
        ;   XREF to: 00548583 (CONDITIONAL_JUMP)  ; LAB_00548583
    PUSH 0x5ef313                       ; 0054856c | = "Error parsing pressButton() command p..."
    PUSH 0x1e810b0                      ; 00548571 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00548576
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 0054857b
    JMP 0x005445dc                      ; 0054857e
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDX,dword ptr [ESP + 0x4924]    ; 00548583
        ;   Label: LAB_00548583
    LEA EAX,[ESP + 0x3eb4]              ; 0054858a
    ADD EDX,EDI                         ; 00548591
    PUSH EAX                            ; 00548593
    MOV dword ptr [ESP + 0x4928],EDX    ; 00548594
    CALL core_script.cpp_trimString_FUN_00543240 ; 0054859b
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 005485a0
    LEA EAX,[ESP + 0x3f18]              ; 005485a3
    PUSH EAX                            ; 005485aa
    CALL core_script.cpp_trimString_FUN_00543240 ; 005485ab
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 005485b0
    PUSH 0x1d06ad8                      ; 005485b3
    MOV ECX,dword ptr [0x01d06b10]      ; 005485b8 | g_CHeroClassInfo.name_hash
    PUSH ECX                            ; 005485be
    LEA EAX,[ESP + 0x3ebc]              ; 005485bf
    PUSH EAX                            ; 005485c6
    CALL core_script.cpp_getActor_FUN_005433c0 ; 005485c7
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 005485cc
    TEST EAX,EAX                        ; 005485cf
    JNZ 0x005485e5                      ; 005485d1
        ;   XREF to: 005485e5 (CONDITIONAL_JUMP)  ; LAB_005485e5
    CMP dword ptr [0x01e818bc],0x0      ; 005485d3 | DAT_01e818bc
    JNZ 0x00544524                      ; 005485da
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 005485e0
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EDX,[ESP + 0x3f18]              ; 005485e5
        ;   Label: LAB_005485e5
    PUSH EDX                            ; 005485ec
    ADD EAX,0xc1d8                      ; 005485ed
    PUSH EAX                            ; 005485f2
    CALL core_script.cpp_getActionState_FUN_00543540 ; 005485f3
        ;   XREF to: 00543540 (UNCONDITIONAL_CALL)  ; int * core_script.cpp_getActionState_FUN_00543540(SPlayerActionState * action_state, char * action_name)
    ADD ESP,0x8                         ; 005485f8
    MOV ESI,EAX                         ; 005485fb
    TEST EAX,EAX                        ; 005485fd
    JZ 0x00548638                       ; 005485ff
        ;   XREF to: 00548638 (CONDITIONAL_JUMP)  ; LAB_00548638
    MOV EDI,dword ptr [0x01e810a8]      ; 00548601 | DAT_01e810a8
    TEST EDI,EDI                        ; 00548607
    JNZ 0x0054450b                      ; 00548609
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    CMP dword ptr [0x01e818b4],0x0      ; 0054860f | DAT_01e818b4
    JZ 0x0054862d                       ; 00548616
        ;   XREF to: 0054862d (CONDITIONAL_JUMP)  ; LAB_0054862d
    MOV EDX,dword ptr [0x0061d95c]      ; 00548618 | g_CGamePtr
    PUSH EDX                            ; 0054861e | g_CGameInstance
    CALL core_game.cpp_FUN_004d19d0     ; 0054861f
        ;   XREF to: 004d19d0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004d19d0()
    ADD ESP,0x4                         ; 00548624
    MOV dword ptr [0x01e818b4],EDI      ; 00548627 | DAT_01e818b4
    MOV dword ptr [ESI],0x1             ; 0054862d
        ;   Label: LAB_0054862d
    JMP 0x0054450b                      ; 00548633
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EAX,[ESP + 0x3f18]              ; 00548638
        ;   Label: LAB_00548638
    PUSH EAX                            ; 0054863f
    PUSH 0x5ef33d                       ; 00548640 | = "Invalid button name: %s"
    PUSH 0x1e810b0                      ; 00548645 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0054864a
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0054864f
    JMP 0x005445dc                      ; 00548652
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0x5                         ; 00548657
        ;   Label: LAB_00548657
    PUSH ESI                            ; 0054865a
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 0054865b
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00548660
    PUSH 0x64                           ; 00548663
    MOV dword ptr [ESP + 0x4928],EAX    ; 00548665
    LEA EAX,[ESP + 0x455c]              ; 0054866c
    PUSH EAX                            ; 00548673
    LEA EAX,[ESP + 0x492c]              ; 00548674
    PUSH EAX                            ; 0054867b
    CALL core_script.cpp_parseArgument_FUN_005432d0 ; 0054867c
        ;   XREF to: 005432d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005432d0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 00548681
    TEST EAX,EAX                        ; 00548684
    JNZ 0x005486d6                      ; 00548686
        ;   XREF to: 005486d6 (CONDITIONAL_JUMP)  ; LAB_005486d6
    CMP dword ptr [0x01e810a8],0x0      ; 00548688 | DAT_01e810a8
    JZ 0x005486ee                       ; 0054868f
        ;   XREF to: 005486ee (CONDITIONAL_JUMP)  ; LAB_005486ee
    LEA EAX,[ESP + 0x4558]              ; 00548691
    PUSH EAX                            ; 00548698
    MOV EDX,dword ptr [0x0061b4d0]      ; 00548699 | DAT_0061b4d0
    PUSH EDX                            ; 0054869f
    CALL core_event.cpp_CEventList_validateCommands_FUN_004a6cd0 ; 005486a0
        ;   XREF to: 004a6cd0 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCommands_FUN_004a6cd0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 005486a5
    TEST EAX,EAX                        ; 005486a8
    JZ 0x0054450b                       ; 005486aa
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EDI,0x1e810b0                   ; 005486b0
    MOV ESI,EAX                         ; 005486b5
    PUSH EDI                            ; 005486b7 | DAT_01e810b0
    MOV AL,byte ptr [ESI]               ; 005486b8
        ;   Label: LAB_005486b8
    MOV byte ptr [EDI],AL               ; 005486ba | DAT_01e810b0 | DAT_01e810b2
    CMP AL,0x0                          ; 005486bc
    JZ 0x005486d0                       ; 005486be
        ;   XREF to: 005486d0 (CONDITIONAL_JUMP)  ; LAB_005486d0
    MOV AL,byte ptr [ESI + 0x1]         ; 005486c0
    ADD ESI,0x2                         ; 005486c3
    MOV byte ptr [EDI + 0x1],AL         ; 005486c6 | DAT_01e810b1 | DAT_01e810b3
    ADD EDI,0x2                         ; 005486c9
    CMP AL,0x0                          ; 005486cc
    JNZ 0x005486b8                      ; 005486ce
        ;   XREF to: 005486b8 (CONDITIONAL_JUMP)  ; LAB_005486b8
    POP EDI                             ; 005486d0
        ;   Label: LAB_005486d0
    JMP 0x005445dc                      ; 005486d1
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    PUSH EAX                            ; 005486d6
        ;   Label: LAB_005486d6
    PUSH 0x5ef35b                       ; 005486d7 | = "Error parsing event expression on rai..."
    PUSH 0x1e810b0                      ; 005486dc | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005486e1
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 005486e6
    JMP 0x005445dc                      ; 005486e9
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EAX,[ESP + 0x4558]              ; 005486ee
        ;   Label: LAB_005486ee
    PUSH EAX                            ; 005486f5
    MOV EAX,[0x0061b4d0]                ; 005486f6 | DAT_0061b4d0
    PUSH EAX                            ; 005486fb
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 005486fc
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00548701
    JMP 0x0054450b                      ; 00548704
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0xd                         ; 00548709
        ;   Label: LAB_00548709
    PUSH ESI                            ; 0054870c
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 0054870d
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00548712
    LEA EDX,[ESP + 0x4880]              ; 00548715
    PUSH EDX                            ; 0054871c
    LEA EDX,[ESP + 0x40ac]              ; 0054871d
    PUSH EDX                            ; 00548724
    LEA EDX,[ESP + 0x44fc]              ; 00548725
    PUSH EDX                            ; 0054872c
    PUSH 0x5ef39f                       ; 0054872d | = "( %[^,], %[^)])%n"
    MOV ECX,0xffffffff                  ; 00548732
    PUSH EAX                            ; 00548737
    MOV dword ptr [ESP + 0x4938],EAX    ; 00548738
    MOV dword ptr [ESP + 0x4894],ECX    ; 0054873f
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00548746
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 0054874b
    MOV ESI,dword ptr [ESP + 0x4880]    ; 0054874e
    CMP ESI,0x5                         ; 00548755
    JGE 0x00548771                      ; 00548758
        ;   XREF to: 00548771 (CONDITIONAL_JUMP)  ; LAB_00548771
    PUSH 0x5ef3b1                       ; 0054875a | = "Error parsing releaseButton() command..."
    PUSH 0x1e810b0                      ; 0054875f | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00548764
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00548769
    JMP 0x005445dc                      ; 0054876c
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDI,dword ptr [ESP + 0x4924]    ; 00548771
        ;   Label: LAB_00548771
    LEA EAX,[ESP + 0x44f4]              ; 00548778
    ADD EDI,ESI                         ; 0054877f
    PUSH EAX                            ; 00548781
    MOV dword ptr [ESP + 0x4928],EDI    ; 00548782
    CALL core_script.cpp_trimString_FUN_00543240 ; 00548789
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 0054878e
    LEA EAX,[ESP + 0x40a8]              ; 00548791
    PUSH EAX                            ; 00548798
    CALL core_script.cpp_trimString_FUN_00543240 ; 00548799
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 0054879e
    PUSH 0x1d06ad8                      ; 005487a1
    MOV EAX,[0x01d06b10]                ; 005487a6 | g_CHeroClassInfo.name_hash
    PUSH EAX                            ; 005487ab
    LEA EAX,[ESP + 0x44fc]              ; 005487ac
    PUSH EAX                            ; 005487b3
    CALL core_script.cpp_getActor_FUN_005433c0 ; 005487b4
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 005487b9
    TEST EAX,EAX                        ; 005487bc
    JNZ 0x005487d2                      ; 005487be
        ;   XREF to: 005487d2 (CONDITIONAL_JUMP)  ; LAB_005487d2
    CMP dword ptr [0x01e818bc],0x0      ; 005487c0 | DAT_01e818bc
    JNZ 0x00544524                      ; 005487c7
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 005487cd
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EDX,[ESP + 0x40a8]              ; 005487d2
        ;   Label: LAB_005487d2
    PUSH EDX                            ; 005487d9
    ADD EAX,0xc1d8                      ; 005487da
    PUSH EAX                            ; 005487df
    CALL core_script.cpp_getActionState_FUN_00543540 ; 005487e0
        ;   XREF to: 00543540 (UNCONDITIONAL_CALL)  ; int * core_script.cpp_getActionState_FUN_00543540(SPlayerActionState * action_state, char * action_name)
    ADD ESP,0x8                         ; 005487e5
    MOV ESI,EAX                         ; 005487e8
    TEST EAX,EAX                        ; 005487ea
    JZ 0x00548825                       ; 005487ec
        ;   XREF to: 00548825 (CONDITIONAL_JUMP)  ; LAB_00548825
    CMP dword ptr [0x01e810a8],0x0      ; 005487ee | DAT_01e810a8
    JNZ 0x0054450b                      ; 005487f5
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    CMP dword ptr [0x01e818b4],0x0      ; 005487fb | DAT_01e818b4
    JZ 0x0054881a                       ; 00548802
        ;   XREF to: 0054881a (CONDITIONAL_JUMP)  ; LAB_0054881a
    MOV EDI,dword ptr [0x0061d95c]      ; 00548804 | g_CGamePtr
    PUSH EDI                            ; 0054880a | g_CGameInstance
    CALL core_game.cpp_FUN_004d19d0     ; 0054880b
        ;   XREF to: 004d19d0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004d19d0()
    XOR EAX,EAX                         ; 00548810
    ADD ESP,0x4                         ; 00548812
    MOV [0x01e818b4],EAX                ; 00548815 | DAT_01e818b4
    MOV dword ptr [ESI],0x0             ; 0054881a
        ;   Label: LAB_0054881a
    JMP 0x0054450b                      ; 00548820
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EAX,[ESP + 0x40a8]              ; 00548825
        ;   Label: LAB_00548825
    PUSH EAX                            ; 0054882c
    PUSH 0x5ef3dd                       ; 0054882d | = "Invalid button name: %s"
    PUSH 0x1e810b0                      ; 00548832 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00548837
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0054883c
    JMP 0x005445dc                      ; 0054883f
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0x1b                        ; 00548844
        ;   Label: LAB_00548844
    PUSH ESI                            ; 00548847
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00548848
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 0054884d
    LEA EDX,[ESP + 0x4884]              ; 00548850
    PUSH EDX                            ; 00548857
    LEA EDX,[ESP + 0x2680]              ; 00548858
    PUSH EDX                            ; 0054885f
    PUSH 0x5ef411                       ; 00548860 | = " ( %[^)])%n"
    MOV ECX,0xffffffff                  ; 00548865
    PUSH EAX                            ; 0054886a
    MOV dword ptr [ESP + 0x4934],EAX    ; 0054886b
    MOV dword ptr [ESP + 0x4894],ECX    ; 00548872
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00548879
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 0054887e
    MOV ESI,dword ptr [ESP + 0x4884]    ; 00548881
    CMP ESI,0x3                         ; 00548888
    JGE 0x005488a4                      ; 0054888b
        ;   XREF to: 005488a4 (CONDITIONAL_JUMP)  ; LAB_005488a4
    PUSH 0x5ef41d                       ; 0054888d | = "Error parsing removeAllItemsFromInven..."
    PUSH 0x1e810b0                      ; 00548892 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00548897
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 0054889c
    JMP 0x005445dc                      ; 0054889f
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDI,dword ptr [ESP + 0x4924]    ; 005488a4
        ;   Label: LAB_005488a4
    LEA EAX,[ESP + 0x267c]              ; 005488ab
    ADD EDI,ESI                         ; 005488b2
    PUSH EAX                            ; 005488b4
    MOV dword ptr [ESP + 0x4928],EDI    ; 005488b5
    CALL core_script.cpp_trimString_FUN_00543240 ; 005488bc
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 005488c1
    PUSH 0x1d06ad8                      ; 005488c4
    MOV EAX,[0x01d06b10]                ; 005488c9 | g_CHeroClassInfo.name_hash
    PUSH EAX                            ; 005488ce
    LEA EAX,[ESP + 0x2684]              ; 005488cf
    PUSH EAX                            ; 005488d6
    CALL core_script.cpp_getActor_FUN_005433c0 ; 005488d7
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 005488dc
    TEST EAX,EAX                        ; 005488df
    JNZ 0x005488f5                      ; 005488e1
        ;   XREF to: 005488f5 (CONDITIONAL_JUMP)  ; LAB_005488f5
    CMP dword ptr [0x01e818bc],0x0      ; 005488e3 | DAT_01e818bc
    JNZ 0x00544524                      ; 005488ea
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 005488f0
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    CMP dword ptr [0x01e810a8],0x0      ; 005488f5 | DAT_01e810a8
        ;   Label: LAB_005488f5
    JNZ 0x0054450b                      ; 005488fc
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    ADD EAX,0x1fae8                     ; 00548902
    PUSH EAX                            ; 00548907
    CALL core_inv.cpp_CInventory_initialize_FUN_004f7050 ; 00548908
        ;   XREF to: 004f7050 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_initialize_FUN_004f7050(CInventory * this_ptr)
    ADD ESP,0x4                         ; 0054890d
    JMP 0x0054450b                      ; 00548910
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0x17                        ; 00548915
        ;   Label: LAB_00548915
    PUSH ESI                            ; 00548918
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00548919
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 0054891e
    LEA EDX,[ESP + 0x4888]              ; 00548921
    PUSH EDX                            ; 00548928
    LEA EDX,[ESP + 0x2298]              ; 00548929
    PUSH EDX                            ; 00548930
    LEA EDX,[ESP + 0x21d4]              ; 00548931
    PUSH EDX                            ; 00548938
    PUSH 0x5ef46d                       ; 00548939 | = " ( %[^,], %[^,)]%n"
    MOV ESI,0xffffffff                  ; 0054893e
    PUSH EAX                            ; 00548943
    MOV dword ptr [ESP + 0x4938],EAX    ; 00548944
    MOV dword ptr [ESP + 0x489c],ESI    ; 0054894b
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00548952
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 00548957
    MOV EDI,dword ptr [ESP + 0x4888]    ; 0054895a
    CMP EDI,0x3                         ; 00548961
    JGE 0x0054897d                      ; 00548964
        ;   XREF to: 0054897d (CONDITIONAL_JUMP)  ; LAB_0054897d
    PUSH 0x5ef480                       ; 00548966 | = "Error parsing removeItemFromInventory..."
    PUSH 0x1e810b0                      ; 0054896b | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00548970
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00548975
    JMP 0x005445dc                      ; 00548978
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDX,dword ptr [ESP + 0x4924]    ; 0054897d
        ;   Label: LAB_0054897d
    LEA EAX,[ESP + 0x21cc]              ; 00548984
    ADD EDX,EDI                         ; 0054898b
    PUSH EAX                            ; 0054898d
    MOV dword ptr [ESP + 0x4928],EDX    ; 0054898e
    CALL core_script.cpp_trimString_FUN_00543240 ; 00548995
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 0054899a
    LEA EAX,[ESP + 0x2294]              ; 0054899d
    PUSH EAX                            ; 005489a4
    CALL core_script.cpp_trimString_FUN_00543240 ; 005489a5
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 005489aa
    PUSH 0x1d06ad8                      ; 005489ad
    MOV ECX,dword ptr [0x01d06b10]      ; 005489b2 | g_CHeroClassInfo.name_hash
    PUSH ECX                            ; 005489b8
    LEA EAX,[ESP + 0x21d4]              ; 005489b9
    PUSH EAX                            ; 005489c0
    CALL core_script.cpp_getActor_FUN_005433c0 ; 005489c1
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 005489c6
    MOV dword ptr [ESP + 0x488c],EAX    ; 005489c9
    TEST EAX,EAX                        ; 005489d0
    JNZ 0x005489e6                      ; 005489d2
        ;   XREF to: 005489e6 (CONDITIONAL_JUMP)  ; LAB_005489e6
    CMP dword ptr [0x01e818bc],0x0      ; 005489d4 | DAT_01e818bc
    JNZ 0x00544524                      ; 005489db
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 005489e1
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EAX,dword ptr [ESP + 0x4924]    ; 005489e6
        ;   Label: LAB_005489e6
    MOV DL,byte ptr [EAX]               ; 005489ed
    MOV EDI,0x1                         ; 005489ef
    CMP DL,0x2c                         ; 005489f4
    JZ 0x00548a9c                       ; 005489f7
        ;   XREF to: 00548a9c (CONDITIONAL_JUMP)  ; LAB_00548a9c
    MOV EAX,dword ptr [ESP + 0x4924]    ; 005489fd
        ;   Label: LAB_005489fd
    CMP byte ptr [EAX],0x29             ; 00548a04
    JNZ 0x00548b66                      ; 00548a07
        ;   XREF to: 00548b66 (CONDITIONAL_JUMP)  ; LAB_00548b66
    LEA EDX,[EAX + 0x1]                 ; 00548a0d
    MOV ECX,dword ptr [0x01e810a8]      ; 00548a10 | DAT_01e810a8
    MOV dword ptr [ESP + 0x4924],EDX    ; 00548a16
    TEST ECX,ECX                        ; 00548a1d
    JNZ 0x0054450b                      ; 00548a1f
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EAX,[ESP + 0x2294]              ; 00548a25
    PUSH EAX                            ; 00548a2c
    MOV EAX,[0x01d06ab4]                ; 00548a2d | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 00548a32
    ADD EAX,0x1fae8                     ; 00548a39
    PUSH EAX                            ; 00548a3e
    CALL core_inv.cpp_FUN_004f8c40      ; 00548a3f
        ;   XREF to: 004f8c40 (UNCONDITIONAL_CALL)  ; CDemonActor * core_inv.cpp_FUN_004f8c40(CInventory * this_ptr, char * item_name)
    MOV ESI,EAX                         ; 00548a44
    ADD ESP,0x8                         ; 00548a46
    TEST EAX,EAX                        ; 00548a49
    JZ 0x0054450b                       ; 00548a4b
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH EDI                            ; 00548a51
    PUSH EAX                            ; 00548a52
    MOV EAX,dword ptr [ESP + 0x4894]    ; 00548a53
    ADD EAX,0x1fae8                     ; 00548a5a
    PUSH EAX                            ; 00548a5f
    CALL core_inv.cpp_FUN_004f8d00      ; 00548a60
        ;   XREF to: 004f8d00 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004f8d00(CInventory * this_ptr, CDemonActor * item_to_remove, int should_delete_actor)
    ADD ESP,0xc                         ; 00548a65
    TEST EDI,EDI                        ; 00548a68
    JNZ 0x0054450b                      ; 00548a6a
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EAX,dword ptr [ESP + 0x488c]    ; 00548a70
    ADD EAX,0x20                        ; 00548a77
    PUSH EAX                            ; 00548a7a
    LEA EAX,[ESI + 0x20]                ; 00548a7b
    PUSH EAX                            ; 00548a7e
    CALL core_event.cpp_copyQuaternion_FUN_004aafc0 ; 00548a7f
        ;   XREF to: 004aafc0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_event.cpp_copyQuaternion_FUN_004aafc0(CQuaternion4f * dest, CQuaternion4f * src)
    ADD ESP,0x8                         ; 00548a84
    PUSH ESI                            ; 00548a87
    MOV ESI,dword ptr [0x0061f650]      ; 00548a88 | DAT_0061f650
    PUSH ESI                            ; 00548a8e | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_0051b160 ; 00548a8f
        ;   XREF to: 0051b160 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_0051b160(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00548a94
    JMP 0x0054450b                      ; 00548a97
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EAX,[ESP + 0x4888]              ; 00548a9c
        ;   Label: LAB_00548a9c
    PUSH EAX                            ; 00548aa3
    LEA EAX,[ESP + 0x1c58]              ; 00548aa4
    PUSH EAX                            ; 00548aab
    PUSH 0x5ef4b4                       ; 00548aac | = ", %[^)]%n"
    MOV EAX,dword ptr [ESP + 0x4930]    ; 00548ab1
    PUSH EAX                            ; 00548ab8
    MOV dword ptr [ESP + 0x4898],ESI    ; 00548ab9
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00548ac0
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 00548ac5
    MOV EDX,dword ptr [ESP + 0x4888]    ; 00548ac8
    CMP EDX,EDI                         ; 00548acf
    JL 0x00548b31                       ; 00548ad1
        ;   XREF to: 00548b31 (CONDITIONAL_JUMP)  ; LAB_00548b31
    MOV ECX,dword ptr [ESP + 0x4924]    ; 00548ad3
    ADD ECX,EDX                         ; 00548ada
    MOV ESI,dword ptr [0x01e810a8]      ; 00548adc | DAT_01e810a8
    MOV dword ptr [ESP + 0x4924],ECX    ; 00548ae2
    TEST ESI,ESI                        ; 00548ae9
    JZ 0x00548b48                       ; 00548aeb
        ;   XREF to: 00548b48 (CONDITIONAL_JUMP)  ; LAB_00548b48
    LEA EAX,[ESP + 0x1c54]              ; 00548aed
    PUSH EAX                            ; 00548af4
    MOV EAX,[0x0061b4d0]                ; 00548af5 | DAT_0061b4d0
    PUSH EAX                            ; 00548afa
    CALL core_event.cpp_CEventList_validateCondition_FUN_004a6c90 ; 00548afb
        ;   XREF to: 004a6c90 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCondition_FUN_004a6c90(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 00548b00
    TEST EAX,EAX                        ; 00548b03
    JZ 0x005489fd                       ; 00548b05
        ;   XREF to: 005489fd (CONDITIONAL_JUMP)  ; LAB_005489fd
    MOV EDI,0x1e810b0                   ; 00548b0b
    MOV ESI,EAX                         ; 00548b10
    PUSH EDI                            ; 00548b12 | DAT_01e810b0
    MOV AL,byte ptr [ESI]               ; 00548b13
        ;   Label: LAB_00548b13
    MOV byte ptr [EDI],AL               ; 00548b15 | DAT_01e810b0 | DAT_01e810b2
    CMP AL,0x0                          ; 00548b17
    JZ 0x00548b2b                       ; 00548b19
        ;   XREF to: 00548b2b (CONDITIONAL_JUMP)  ; LAB_00548b2b
    MOV AL,byte ptr [ESI + 0x1]         ; 00548b1b
    ADD ESI,0x2                         ; 00548b1e
    MOV byte ptr [EDI + 0x1],AL         ; 00548b21 | DAT_01e810b1 | DAT_01e810b3
    ADD EDI,0x2                         ; 00548b24
    CMP AL,0x0                          ; 00548b27
    JNZ 0x00548b13                      ; 00548b29
        ;   XREF to: 00548b13 (CONDITIONAL_JUMP)  ; LAB_00548b13
    POP EDI                             ; 00548b2b
        ;   Label: LAB_00548b2b
    JMP 0x005445dc                      ; 00548b2c
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    PUSH 0x5ef4be                       ; 00548b31 | = "Error parsing removeItemFromInventory..."
        ;   Label: LAB_00548b31
    PUSH 0x1e810b0                      ; 00548b36 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00548b3b
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00548b40
    JMP 0x005445dc                      ; 00548b43
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EAX,[ESP + 0x1c54]              ; 00548b48
        ;   Label: LAB_00548b48
    PUSH EAX                            ; 00548b4f
    MOV EDI,dword ptr [0x0061b4d0]      ; 00548b50 | DAT_0061b4d0
    PUSH EDI                            ; 00548b56
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00548b57
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00548b5c
    MOV EDI,EAX                         ; 00548b5f
    JMP 0x005489fd                      ; 00548b61
        ;   XREF to: 005489fd (UNCONDITIONAL_JUMP)  ; LAB_005489fd
    PUSH 0x5ef4f2                       ; 00548b66 | = "Error parsing removeItemFromInventory..."
        ;   Label: LAB_00548b66
    PUSH 0x1e810b0                      ; 00548b6b | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00548b70
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00548b75
    JMP 0x005445dc                      ; 00548b78
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0xa                         ; 00548b7d
        ;   Label: LAB_00548b7d
    PUSH ESI                            ; 00548b80
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00548b81
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    MOV EDX,0xffffffff                  ; 00548b86
    ADD ESP,0x4                         ; 00548b8b
    MOV dword ptr [ESP + 0x4894],EDX    ; 00548b8e
    LEA EDX,[ESP + 0x4894]              ; 00548b95
    PUSH EDX                            ; 00548b9c
    LEA EDX,[ESP + 0x4894]              ; 00548b9d
    PUSH EDX                            ; 00548ba4
    PUSH 0x5ef531                       ; 00548ba5 | = " (%d )%n"
    PUSH EAX                            ; 00548baa
    MOV dword ptr [ESP + 0x4934],EAX    ; 00548bab
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00548bb2
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 00548bb7
    MOV ECX,dword ptr [ESP + 0x4894]    ; 00548bba
    CMP ECX,0x3                         ; 00548bc1
    JL 0x00548c0f                       ; 00548bc4
        ;   XREF to: 00548c0f (CONDITIONAL_JUMP)  ; LAB_00548c0f
    MOV ESI,dword ptr [ESP + 0x4924]    ; 00548bc6
    ADD ESI,ECX                         ; 00548bcd
    MOV EAX,[0x00622580]                ; 00548bcf | g_CNetGamePtr
    MOV dword ptr [ESP + 0x4924],ESI    ; 00548bd4
    CMP dword ptr [EAX],0x0             ; 00548bdb | g_CNetGameInstance
    JNZ 0x00548c26                      ; 00548bde
        ;   XREF to: 00548c26 (CONDITIONAL_JUMP)  ; LAB_00548c26
    CMP dword ptr [0x01e810a8],0x0      ; 00548be0 | DAT_01e810a8
    JNZ 0x0054450b                      ; 00548be7
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EDX,dword ptr [ESP + 0x4890]    ; 00548bed
    MOV EAX,[0x01d06ab4]                ; 00548bf4 | DAT_01d06ab4
    PUSH EDX                            ; 00548bf9
    MOV ECX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 00548bfa
    PUSH ECX                            ; 00548c01
    CALL core_hero.cpp_CHero_removeMatchingKeys_FUN_004ec300 ; 00548c02
        ;   XREF to: 004ec300 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_removeMatchingKeys_FUN_004ec300(CHero * this_ptr, uint key_mask)
    ADD ESP,0x8                         ; 00548c07
    JMP 0x0054450b                      ; 00548c0a
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH 0x5ef53a                       ; 00548c0f | = "Error parsing removeKeys() command parms"
        ;   Label: LAB_00548c0f
    PUSH 0x1e810b0                      ; 00548c14 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00548c19
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00548c1e
    JMP 0x005445dc                      ; 00548c21
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    PUSH 0x5ef563                       ; 00548c26 | = "Can't use removeKeys command in multi..."
        ;   Label: LAB_00548c26
    PUSH 0x1e810b0                      ; 00548c2b | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00548c30
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00548c35
    JMP 0x005445dc                      ; 00548c38
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0x6                         ; 00548c3d
        ;   Label: LAB_00548c3d
    PUSH ESI                            ; 00548c40
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00548c41
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00548c46
    MOV ESI,dword ptr [0x01e810a8]      ; 00548c49 | DAT_01e810a8
    MOV dword ptr [ESP + 0x4924],EAX    ; 00548c4f
    TEST ESI,ESI                        ; 00548c56
    JNZ 0x0054450b                      ; 00548c58
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EDI,dword ptr [EBX + 0x458]     ; 00548c5e
    CMP EDI,0x1                         ; 00548c64
    JL 0x00548c81                       ; 00548c67
        ;   XREF to: 00548c81 (CONDITIONAL_JUMP)  ; LAB_00548c81
    LEA EAX,[EDI + -0x1]                ; 00548c69
    MOV dword ptr [EBX + 0x458],EAX     ; 00548c6c
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x45c] ; 00548c72
    MOV dword ptr [EBX + 0x44],EAX      ; 00548c79
    JMP 0x0054450b                      ; 00548c7c
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EDX,dword ptr [ESP + 0x47f0]    ; 00548c81
        ;   Label: LAB_00548c81
    PUSH EDX                            ; 00548c88
    PUSH 0x5ef597                       ; 00548c89 | = "Return without gosub detected on scri..."
    PUSH 0x1e810b0                      ; 00548c8e | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00548c93
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00548c98
    JMP 0x005445dc                      ; 00548c9b
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0xb                         ; 00548ca0
        ;   Label: LAB_00548ca0
    PUSH ESI                            ; 00548ca3
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00548ca4
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00548ca9
    LEA EDX,[ESP + 0x4898]              ; 00548cac
    PUSH EDX                            ; 00548cb3
    PUSH 0x5ef5d4                       ; 00548cb4 | = " ( )%n"
    MOV ECX,0xffffffff                  ; 00548cb9
    PUSH EAX                            ; 00548cbe
    MOV dword ptr [ESP + 0x4930],EAX    ; 00548cbf
    MOV dword ptr [ESP + 0x48a4],ECX    ; 00548cc6
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00548ccd
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0xc                         ; 00548cd2
    MOV ESI,dword ptr [ESP + 0x4898]    ; 00548cd5
    CMP ESI,0x2                         ; 00548cdc
    JL 0x00548d1f                       ; 00548cdf
        ;   XREF to: 00548d1f (CONDITIONAL_JUMP)  ; LAB_00548d1f
    MOV EDI,dword ptr [ESP + 0x4924]    ; 00548ce1
    ADD EDI,ESI                         ; 00548ce8
    MOV EAX,[0x01e810a8]                ; 00548cea | DAT_01e810a8
    MOV dword ptr [ESP + 0x4924],EDI    ; 00548cef
    TEST EAX,EAX                        ; 00548cf6
    JNZ 0x0054450b                      ; 00548cf8
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV dword ptr [ESP + 0x47f4],EAX    ; 00548cfe
    MOV EAX,[0x0061d95c]                ; 00548d05 | g_CGamePtr
    MOV dword ptr [EBX],0x1             ; 00548d0a
    MOV dword ptr [EAX + 0x27c],0x2     ; 00548d10 | g_CGameInstance.act_completion_state
    JMP 0x0054450b                      ; 00548d1a
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH 0x5ef5db                       ; 00548d1f | = "Error parsing rollCredits command"
        ;   Label: LAB_00548d1f
    PUSH 0x1e810b0                      ; 00548d24 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00548d29
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00548d2e
    JMP 0x005445dc                      ; 00548d31
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0x3                         ; 00548d36
        ;   Label: LAB_00548d36
    PUSH ESI                            ; 00548d39
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00548d3a
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00548d3f
    PUSH 0x1f4                          ; 00548d42
    MOV dword ptr [ESP + 0x4928],EAX    ; 00548d47
    LEA EAX,[ESP + 0x634]               ; 00548d4e
    PUSH EAX                            ; 00548d55
    LEA EAX,[ESP + 0x492c]              ; 00548d56
    PUSH EAX                            ; 00548d5d
    CALL core_script.cpp_parseArgument_FUN_005432d0 ; 00548d5e
        ;   XREF to: 005432d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005432d0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 00548d63
    TEST EAX,EAX                        ; 00548d66
    JZ 0x00548d90                       ; 00548d68
        ;   XREF to: 00548d90 (CONDITIONAL_JUMP)  ; LAB_00548d90
    MOV EDI,0x1e810b0                   ; 00548d6a
        ;   Label: LAB_00548d6a
    MOV ESI,EAX                         ; 00548d6f
    PUSH EDI                            ; 00548d71 | DAT_01e810b0
    MOV AL,byte ptr [ESI]               ; 00548d72
        ;   Label: LAB_00548d72
    MOV byte ptr [EDI],AL               ; 00548d74 | DAT_01e810b0 | DAT_01e810b2
    CMP AL,0x0                          ; 00548d76
    JZ 0x00548d8a                       ; 00548d78
        ;   XREF to: 00548d8a (CONDITIONAL_JUMP)  ; LAB_00548d8a
    MOV AL,byte ptr [ESI + 0x1]         ; 00548d7a
    ADD ESI,0x2                         ; 00548d7d
    MOV byte ptr [EDI + 0x1],AL         ; 00548d80 | DAT_01e810b1 | DAT_01e810b3
    ADD EDI,0x2                         ; 00548d83
    CMP AL,0x0                          ; 00548d86
    JNZ 0x00548d72                      ; 00548d88
        ;   XREF to: 00548d72 (CONDITIONAL_JUMP)  ; LAB_00548d72
    POP EDI                             ; 00548d8a
        ;   Label: LAB_00548d8a
    JMP 0x005445dc                      ; 00548d8b
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EAX,[ESP + 0x489c]              ; 00548d90
        ;   Label: LAB_00548d90
    PUSH EAX                            ; 00548d97
    LEA EAX,[ESP + 0x1168]              ; 00548d98
    PUSH EAX                            ; 00548d9f
    LEA EAX,[ESP + 0x148c]              ; 00548da0
    PUSH EAX                            ; 00548da7
    PUSH 0x5ef601                       ; 00548da8 | = "%[^,], %[^,], %n"
    LEA EAX,[ESP + 0x640]               ; 00548dad
    MOV ECX,0xffffffff                  ; 00548db4
    PUSH EAX                            ; 00548db9
    MOV dword ptr [ESP + 0x48b0],ECX    ; 00548dba
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00548dc1
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 00548dc6
    CMP dword ptr [ESP + 0x489c],0x5    ; 00548dc9
    JGE 0x00548dea                      ; 00548dd1
        ;   XREF to: 00548dea (CONDITIONAL_JUMP)  ; LAB_00548dea
    PUSH 0x5ef612                       ; 00548dd3 | = "Error parsing speaker and wav arguments"
    PUSH 0x1e810b0                      ; 00548dd8 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00548ddd
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00548de2
    JMP 0x005445dc                      ; 00548de5
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EAX,[ESP + 0x1484]              ; 00548dea
        ;   Label: LAB_00548dea
    PUSH EAX                            ; 00548df1
    CALL core_script.cpp_trimString_FUN_00543240 ; 00548df2
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 00548df7
    LEA EAX,[ESP + 0x1164]              ; 00548dfa
    PUSH EAX                            ; 00548e01
    CALL core_script.cpp_trimString_FUN_00543240 ; 00548e02
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    FLD float ptr [EBX + 0x4c]          ; 00548e07
    FLDZ                                ; 00548e0a
    ADD ESP,0x4                         ; 00548e0c
    FCOMPP                              ; 00548e0f
    FNSTSW AX                           ; 00548e11
    SAHF                                ; 00548e13
    JA 0x00548e54                       ; 00548e14
        ;   XREF to: 00548e54 (CONDITIONAL_JUMP)  ; LAB_00548e54
    CMP dword ptr [0x01e810a8],0x0      ; 00548e16 | DAT_01e810a8
        ;   Label: LAB_00548e16
    JNZ 0x0054450b                      ; 00548e1d
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EDX,dword ptr [EBP + 0x18]      ; 00548e23
    PUSH EDX                            ; 00548e26
    PUSH dword ptr [EBX + 0x4c]         ; 00548e27
    PUSH EBX                            ; 00548e2a
    CALL core_script.cpp_CScript_processTimer_FUN_0054ac20 ; 00548e2b
        ;   XREF to: 0054ac20 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_processTimer_FUN_0054ac20(CScript * this_ptr, float delta_time, float * timer_value)
    ADD ESP,0xc                         ; 00548e30
    MOV dword ptr [ESP + 0x47f4],EAX    ; 00548e33
    TEST EAX,EAX                        ; 00548e3a
    JLE 0x0054450b                      ; 00548e3c
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV ECX,dword ptr [EBX + 0x4]       ; 00548e42
    PUSH ECX                            ; 00548e45
    PUSH EBX                            ; 00548e46
    CALL core_script.cpp_CScript_setSpeaker_FUN_0054aca0 ; 00548e47
        ;   XREF to: 0054aca0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_setSpeaker_FUN_0054aca0(CScript * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00548e4c
    JMP 0x0054450b                      ; 00548e4f
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EAX,[ESP + 0x630]               ; 00548e54
        ;   Label: LAB_00548e54
    ADD EAX,dword ptr [ESP + 0x489c]    ; 00548e5b
    PUSH EAX                            ; 00548e62
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00548e63
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00548e68
    PUSH EAX                            ; 00548e6b
    LEA EAX,[ESP + 0x1168]              ; 00548e6c
    PUSH EAX                            ; 00548e73
    LEA EAX,[ESP + 0x148c]              ; 00548e74
    PUSH EAX                            ; 00548e7b
    PUSH EBX                            ; 00548e7c
    CALL core_script.cpp_CScript_startDialogLine_FUN_0054aa60 ; 00548e7d
        ;   XREF to: 0054aa60 (UNCONDITIONAL_CALL)  ; float core_script.cpp_CScript_startDialogLine_FUN_0054aa60(CScript * this_ptr, char * actor_specifier, char * sound_name, char * dialog_text)
    MOV dword ptr [ESP + 0x4954],EAX    ; 00548e82
    FLDZ                                ; 00548e89
    MOV EAX,dword ptr [ESP + 0x4954]    ; 00548e8b
    MOV dword ptr [EBX + 0x4c],EAX      ; 00548e92
    ADD ESP,0x10                        ; 00548e95
    FCOMP float ptr [EBX + 0x4c]        ; 00548e98
    FNSTSW AX                           ; 00548e9b
    SAHF                                ; 00548e9d
    JA 0x005445dc                       ; 00548e9e
        ;   XREF to: 005445dc (CONDITIONAL_JUMP)  ; LAB_005445dc
    JMP 0x00548e16                      ; 00548ea4
        ;   XREF to: 00548e16 (UNCONDITIONAL_JUMP)  ; LAB_00548e16
    ADD ESI,0xc                         ; 00548ea9
        ;   Label: LAB_00548ea9
    PUSH ESI                            ; 00548eac
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00548ead
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00548eb2
    LEA EDX,[ESP + 0x48a0]              ; 00548eb5
    PUSH EDX                            ; 00548ebc
    LEA EDX,[ESP + 0x41d8]              ; 00548ebd
    PUSH EDX                            ; 00548ec4
    LEA EDX,[ESP + 0x3fe8]              ; 00548ec5
    PUSH EDX                            ; 00548ecc
    PUSH 0x5ef647                       ; 00548ecd | = " (%[^,], %[^)])%n"
    MOV ESI,0xffffffff                  ; 00548ed2
    PUSH EAX                            ; 00548ed7
    MOV dword ptr [ESP + 0x4938],EAX    ; 00548ed8
    MOV dword ptr [ESP + 0x48b4],ESI    ; 00548edf
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00548ee6
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 00548eeb
    CMP dword ptr [ESP + 0x48a0],0x5    ; 00548eee
    JGE 0x00548f0f                      ; 00548ef6
        ;   XREF to: 00548f0f (CONDITIONAL_JUMP)  ; LAB_00548f0f
    PUSH 0x5ef659                       ; 00548ef8 | = "Error parsing selectWeapon parameters."
    PUSH 0x1e810b0                      ; 00548efd | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00548f02
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00548f07
    JMP 0x005445dc                      ; 00548f0a
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EAX,[ESP + 0x3fe0]              ; 00548f0f
        ;   Label: LAB_00548f0f
    PUSH EAX                            ; 00548f16
    CALL core_script.cpp_trimString_FUN_00543240 ; 00548f17
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 00548f1c
    LEA EAX,[ESP + 0x41d4]              ; 00548f1f
    PUSH EAX                            ; 00548f26
    CALL core_script.cpp_trimString_FUN_00543240 ; 00548f27
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 00548f2c
    MOV ECX,dword ptr [0x01d06b10]      ; 00548f2f | g_CHeroClassInfo.name_hash
    PUSH 0x1d06ad8                      ; 00548f35
    MOV EAX,dword ptr [ESP + 0x48a4]    ; 00548f3a
    MOV EDX,dword ptr [ESP + 0x4928]    ; 00548f41
    PUSH ECX                            ; 00548f48
    ADD EDX,EAX                         ; 00548f49
    LEA EAX,[ESP + 0x3fe8]              ; 00548f4b
    PUSH EAX                            ; 00548f52
    MOV dword ptr [ESP + 0x4930],EDX    ; 00548f53
    CALL core_script.cpp_getActor_FUN_005433c0 ; 00548f5a
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00548f5f
    TEST EAX,EAX                        ; 00548f62
    JNZ 0x00548f78                      ; 00548f64
        ;   XREF to: 00548f78 (CONDITIONAL_JUMP)  ; LAB_00548f78
    CMP dword ptr [0x01e818bc],0x0      ; 00548f66 | DAT_01e818bc
    JNZ 0x00544524                      ; 00548f6d
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 00548f73
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV ESI,dword ptr [0x01e810a8]      ; 00548f78 | DAT_01e810a8
        ;   Label: LAB_00548f78
    TEST ESI,ESI                        ; 00548f7e
    JNZ 0x0054450b                      ; 00548f80
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EDI,[EAX + 0x1fae8]             ; 00548f86
    PUSH EDI                            ; 00548f8c
    MOV dword ptr [ESP + 0x48a8],ESI    ; 00548f8d
    CALL core_doc.cpp_FUN_004766f0      ; 00548f94
        ;   XREF to: 004766f0 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_004766f0()
    ADD ESP,0x4                         ; 00548f99
    MOV dword ptr [ESP + 0x48a8],EAX    ; 00548f9c
    TEST EAX,EAX                        ; 00548fa3
    JZ 0x0054900c                       ; 00548fa5
        ;   XREF to: 0054900c (CONDITIONAL_JUMP)  ; LAB_0054900c
    MOV ESI,EAX                         ; 00548fa7
    TEST ESI,ESI                        ; 00548fa9
        ;   Label: LAB_00548fa9
    JNZ 0x00548fcf                      ; 00548fab
        ;   XREF to: 00548fcf (CONDITIONAL_JUMP)  ; LAB_00548fcf
    MOV EAX,0x5ef680                    ; 00548fad | = "..\\core\\script.cpp"
    MOV EDX,0xbc9                       ; 00548fb2
    PUSH 0x5ef693                       ; 00548fb7 | = "script selectWeapon() command - hell ..."
    MOV [0x01d1d400],EAX                ; 00548fbc | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 00548fc1 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00548fc7
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00548fcc
    LEA EAX,[ESP + 0x41d4]              ; 00548fcf
        ;   Label: LAB_00548fcf
    PUSH EAX                            ; 00548fd6
    PUSH ESI                            ; 00548fd7
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 00548fd8
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00548fdd
    TEST EAX,EAX                        ; 00548fe0
    JNZ 0x0054450b                      ; 00548fe2
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH 0x1                            ; 00548fe8
    PUSH 0x5                            ; 00548fea
    PUSH EAX                            ; 00548fec
    PUSH EDI                            ; 00548fed
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004f8dc0 ; 00548fee
        ;   XREF to: 004f8dc0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004f8dc0(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 00548ff3
    PUSH EDI                            ; 00548ff6
    CALL core_doc.cpp_FUN_004766f0      ; 00548ff7
        ;   XREF to: 004766f0 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_004766f0()
    ADD ESP,0x4                         ; 00548ffc
    MOV ECX,dword ptr [ESP + 0x48a8]    ; 00548fff
    MOV ESI,EAX                         ; 00549006
    CMP EAX,ECX                         ; 00549008
    JNZ 0x00548fa9                      ; 0054900a
        ;   XREF to: 00548fa9 (CONDITIONAL_JUMP)  ; LAB_00548fa9
    CMP dword ptr [ESP + 0x48a4],0x0    ; 0054900c
        ;   Label: LAB_0054900c
    JNZ 0x0054450b                      ; 00549014
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EAX,[ESP + 0x41d4]              ; 0054901a
    PUSH EAX                            ; 00549021
    LEA EAX,[ESP + 0x3fe4]              ; 00549022
    PUSH EAX                            ; 00549029
    PUSH 0x5ef6bf                       ; 0054902a | = "%s can't selectWeapon(%s)\n"
    MOV EDI,dword ptr [0x00611100]      ; 0054902f | g_CConsolePtr
    PUSH EDI                            ; 00549035 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 00549036
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 0054903b
    JMP 0x0054450b                      ; 0054903e
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0x10                        ; 00549043
        ;   Label: LAB_00549043
    PUSH ESI                            ; 00549046
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00549047
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    MOV EDX,0xffffffff                  ; 0054904c
    ADD ESP,0x4                         ; 00549051
    MOV dword ptr [ESP + 0x48ac],EDX    ; 00549054
    LEA EDX,[ESP + 0x48ac]              ; 0054905b
    PUSH EDX                            ; 00549062
    LEA EDX,[ESP + 0x2b30]              ; 00549063
    PUSH EDX                            ; 0054906a
    LEA EDX,[ESP + 0x2044]              ; 0054906b
    PUSH EDX                            ; 00549072
    PUSH 0x5ef6eb                       ; 00549073 | = "(%[^,], %[^)])%n"
    PUSH EAX                            ; 00549078
    MOV dword ptr [ESP + 0x4938],EAX    ; 00549079
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00549080
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 00549085
    MOV ECX,dword ptr [ESP + 0x48ac]    ; 00549088
    CMP ECX,0x5                         ; 0054908f
    JGE 0x005490ab                      ; 00549092
        ;   XREF to: 005490ab (CONDITIONAL_JUMP)  ; LAB_005490ab
    PUSH 0x5ef6fc                       ; 00549094 | = "Error parsing setActorVariable comman..."
    PUSH 0x1e810b0                      ; 00549099 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0054909e
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 005490a3
    JMP 0x005445dc                      ; 005490a6
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV ESI,dword ptr [ESP + 0x4924]    ; 005490ab
        ;   Label: LAB_005490ab
    LEA EAX,[ESP + 0x203c]              ; 005490b2
    ADD ESI,ECX                         ; 005490b9
    PUSH EAX                            ; 005490bb
    MOV dword ptr [ESP + 0x4928],ESI    ; 005490bc
    CALL core_script.cpp_trimString_FUN_00543240 ; 005490c3
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 005490c8
    LEA EAX,[ESP + 0x2b2c]              ; 005490cb
    PUSH EAX                            ; 005490d2
    CALL core_script.cpp_trimString_FUN_00543240 ; 005490d3
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 005490d8
    LEA EAX,[ESP + 0x203c]              ; 005490db
    PUSH EAX                            ; 005490e2
    CALL core_script.cpp_validateActorVariableName_FUN_00543100 ; 005490e3
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_script.cpp_validateActorVariableName_FUN_00543100(char * variable_name)
    ADD ESP,0x4                         ; 005490e8
    TEST EAX,EAX                        ; 005490eb
    JZ 0x005445dc                       ; 005490ed
        ;   XREF to: 005445dc (CONDITIONAL_JUMP)  ; LAB_005445dc
    PUSH 0x7c2ff8                       ; 005490f3 | g_CDemonActorClassInfo
    MOV EDI,dword ptr [0x007c3030]      ; 005490f8 | g_CDemonActorClassInfo.name_hash
    PUSH EDI                            ; 005490fe
    LEA EAX,[ESP + 0x2b34]              ; 005490ff
    PUSH EAX                            ; 00549106
    CALL core_script.cpp_getActor_FUN_005433c0 ; 00549107
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV EDX,dword ptr [0x01e810a8]      ; 0054910c | DAT_01e810a8
    ADD ESP,0xc                         ; 00549112
    TEST EDX,EDX                        ; 00549115
    JZ 0x00549133                       ; 00549117
        ;   XREF to: 00549133 (CONDITIONAL_JUMP)  ; LAB_00549133
    TEST EAX,EAX                        ; 00549119
    JNZ 0x0054450b                      ; 0054911b
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    CMP dword ptr [0x01e818bc],0x0      ; 00549121 | DAT_01e818bc
    JNZ 0x0054450b                      ; 00549128
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    JMP 0x005445dc                      ; 0054912e
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    PUSH EAX                            ; 00549133
        ;   Label: LAB_00549133
    LEA EAX,[ESP + 0x2040]              ; 00549134
    PUSH EAX                            ; 0054913b
    MOV ECX,dword ptr [0x0061b4d0]      ; 0054913c | DAT_0061b4d0
    PUSH ECX                            ; 00549142
    CALL core_event.cpp_CEventList_setActorVariable_FUN_004a9ff0 ; 00549143
        ;   XREF to: 004a9ff0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_setActorVariable_FUN_004a9ff0(CEventList * this_ptr, char * var_name, CDemonActor * actor)
    ADD ESP,0xc                         ; 00549148
    JMP 0x0054450b                      ; 0054914b
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0xf                         ; 00549150
        ;   Label: LAB_00549150
    PUSH ESI                            ; 00549153
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00549154
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00549159
    PUSH 0x64                           ; 0054915c
    MOV dword ptr [ESP + 0x4928],EAX    ; 0054915e
    LEA EAX,[ESP + 0x3cc4]              ; 00549165
    PUSH EAX                            ; 0054916c
    LEA EAX,[ESP + 0x492c]              ; 0054916d
    PUSH EAX                            ; 00549174
    CALL core_script.cpp_parseArgument_FUN_005432d0 ; 00549175
        ;   XREF to: 005432d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005432d0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0054917a
    TEST EAX,EAX                        ; 0054917d
    JNZ 0x00548d6a                      ; 0054917f
        ;   XREF to: 00548d6a (CONDITIONAL_JUMP)  ; LAB_00548d6a
    CMP dword ptr [0x01e810a8],0x0      ; 00549185 | DAT_01e810a8
    JNZ 0x0054450b                      ; 0054918c
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EAX,[ESP + 0x3cc0]              ; 00549192
    PUSH EAX                            ; 00549199
    MOV EAX,[0x006236b8]                ; 0054919a | DAT_006236b8
    PUSH EAX                            ; 0054919f
    CALL core_sound.cpp_CSound_playAmbientSound_FUN_0057d810 ; 005491a0
        ;   XREF to: 0057d810 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_playAmbientSound_FUN_0057d810(CSound * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 005491a5
    JMP 0x0054450b                      ; 005491a8
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0xe                         ; 005491ad
        ;   Label: LAB_005491ad
    PUSH ESI                            ; 005491b0
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 005491b1
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    MOV EDX,0xffffffff                  ; 005491b6
    ADD ESP,0x4                         ; 005491bb
    MOV dword ptr [ESP + 0x48b4],EDX    ; 005491be
    LEA EDX,[ESP + 0x48b4]              ; 005491c5
    PUSH EDX                            ; 005491cc
    LEA EDX,[ESP + 0x48b4]              ; 005491cd
    PUSH EDX                            ; 005491d4
    LEA EDX,[ESP + 0x2cc4]              ; 005491d5
    PUSH EDX                            ; 005491dc
    PUSH 0x5ef748                       ; 005491dd | = "(%[^,], %d)%n"
    PUSH EAX                            ; 005491e2
    MOV dword ptr [ESP + 0x4938],EAX    ; 005491e3
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 005491ea
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 005491ef
    MOV ECX,dword ptr [ESP + 0x48b4]    ; 005491f2
    CMP ECX,0x3                         ; 005491f9
    JL 0x00549257                       ; 005491fc
        ;   XREF to: 00549257 (CONDITIONAL_JUMP)  ; LAB_00549257
    LEA EAX,[ESP + 0x2cbc]              ; 005491fe
    MOV ESI,dword ptr [ESP + 0x4924]    ; 00549205
    PUSH EAX                            ; 0054920c
    ADD ESI,ECX                         ; 0054920d
    XOR EDI,EDI                         ; 0054920f
    MOV dword ptr [ESP + 0x4928],ESI    ; 00549211
    CALL core_script.cpp_trimString_FUN_00543240 ; 00549218
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 0054921d
    XOR ESI,ESI                         ; 00549220
    MOV dword ptr [ESP + 0x48b8],EDI    ; 00549222
    MOV EAX,[0x00622c18]                ; 00549229 | g_CDemonSetPtr
        ;   Label: LAB_00549229
    CMP EDI,dword ptr [EAX]             ; 0054922e | g_CDemonSetInstance
    JGE 0x0054929a                      ; 00549230
        ;   XREF to: 0054929a (CONDITIONAL_JUMP)  ; LAB_0054929a
    ADD EAX,0x4                         ; 00549232
    PUSH 0x0                            ; 00549235
    ADD EAX,ESI                         ; 00549237
    PUSH EAX                            ; 00549239
    LEA EAX,[ESP + 0x2cc4]              ; 0054923a
    PUSH EAX                            ; 00549241
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_0049dea0 ; 00549242
        ;   XREF to: 0049dea0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_0049dea0(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 00549247
    TEST EAX,EAX                        ; 0054924a
    JNZ 0x0054926e                      ; 0054924c
        ;   XREF to: 0054926e (CONDITIONAL_JUMP)  ; LAB_0054926e
    INC EDI                             ; 0054924e
        ;   Label: LAB_0054924e
    ADD ESI,0x1a4                       ; 0054924f
    JMP 0x00549229                      ; 00549255
        ;   XREF to: 00549229 (UNCONDITIONAL_JUMP)  ; LAB_00549229
    PUSH 0x5ef756                       ; 00549257 | = "Error parsing setCameragroup parms"
        ;   Label: LAB_00549257
    PUSH 0x1e810b0                      ; 0054925c | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00549261
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00549266
    JMP 0x005445dc                      ; 00549269
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EAX,0x1                         ; 0054926e
        ;   Label: LAB_0054926e
    MOV EDX,dword ptr [0x01e810a8]      ; 00549273 | DAT_01e810a8
    MOV dword ptr [ESP + 0x48b8],EAX    ; 00549279
    TEST EDX,EDX                        ; 00549280
    JNZ 0x0054924e                      ; 00549282
        ;   XREF to: 0054924e (CONDITIONAL_JUMP)  ; LAB_0054924e
    MOV EDX,dword ptr [0x00622c18]      ; 00549284 | g_CDemonSetPtr
    MOV EAX,dword ptr [ESP + 0x48b0]    ; 0054928a
    MOV dword ptr [EDX + ESI*0x1 + 0x150],EAX ; 00549291 | g_CDemonSetInstance.cameras[0].camera_group
    JMP 0x0054924e                      ; 00549298
        ;   XREF to: 0054924e (UNCONDITIONAL_JUMP)  ; LAB_0054924e
    CMP dword ptr [ESP + 0x48b8],0x0    ; 0054929a
        ;   Label: LAB_0054929a
    JNZ 0x0054450b                      ; 005492a2
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EAX,[ESP + 0x2cbc]              ; 005492a8
    PUSH EAX                            ; 005492af
    PUSH 0x5ef779                       ; 005492b0 | = "No cameras found matching \"%s\""
    PUSH 0x1e810b0                      ; 005492b5 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005492ba
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 005492bf
    JMP 0x005445dc                      ; 005492c2
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0x12                        ; 005492c7
        ;   Label: LAB_005492c7
    PUSH ESI                            ; 005492ca
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 005492cb
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    MOV EDX,0xffffffff                  ; 005492d0
    ADD ESP,0x4                         ; 005492d5
    MOV dword ptr [ESP + 0x48c0],EDX    ; 005492d8
    LEA EDX,[ESP + 0x48c0]              ; 005492df
    PUSH EDX                            ; 005492e6
    LEA EDX,[ESP + 0x48c0]              ; 005492e7
    PUSH EDX                            ; 005492ee
    LEA EDX,[ESP + 0x3ad4]              ; 005492ef
    PUSH EDX                            ; 005492f6
    PUSH 0x5ef7ab                       ; 005492f7 | = "(%[^,], %f)%n"
    PUSH EAX                            ; 005492fc
    MOV dword ptr [ESP + 0x4938],EAX    ; 005492fd
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00549304
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 00549309
    MOV ECX,dword ptr [ESP + 0x48c0]    ; 0054930c
    CMP ECX,0x3                         ; 00549313
    JGE 0x0054932f                      ; 00549316
        ;   XREF to: 0054932f (CONDITIONAL_JUMP)  ; LAB_0054932f
    PUSH 0x5ef7b9                       ; 00549318 | = "Error parsing setCharacterHealth parms"
    PUSH 0x1e810b0                      ; 0054931d | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00549322
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00549327
    JMP 0x005445dc                      ; 0054932a
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV ESI,dword ptr [ESP + 0x4924]    ; 0054932f
        ;   Label: LAB_0054932f
    LEA EAX,[ESP + 0x3acc]              ; 00549336
    ADD ESI,ECX                         ; 0054933d
    PUSH EAX                            ; 0054933f
    MOV dword ptr [ESP + 0x4928],ESI    ; 00549340
    CALL core_script.cpp_trimString_FUN_00543240 ; 00549347
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 0054934c
    PUSH 0x7c6344                       ; 0054934f | g_CCharacterClassInfo
    MOV EDI,dword ptr [0x007c637c]      ; 00549354 | g_CCharacterClassInfo.name_hash
    PUSH EDI                            ; 0054935a
    LEA EAX,[ESP + 0x3ad4]              ; 0054935b
    PUSH EAX                            ; 00549362
    CALL core_script.cpp_getActor_FUN_005433c0 ; 00549363
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00549368
    TEST EAX,EAX                        ; 0054936b
    JNZ 0x00549381                      ; 0054936d
        ;   XREF to: 00549381 (CONDITIONAL_JUMP)  ; LAB_00549381
    CMP dword ptr [0x01e818bc],0x0      ; 0054936f | DAT_01e818bc
    JNZ 0x00544524                      ; 00549376
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 0054937c
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    CMP dword ptr [0x01e810a8],0x0      ; 00549381 | DAT_01e810a8
        ;   Label: LAB_00549381
    JNZ 0x0054450b                      ; 00549388
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    FLD float ptr [EAX + 0x253c]        ; 0054938e
    FMUL float ptr [ESP + 0x48bc]       ; 00549394
    FSTP float ptr [EAX + 0x2538]       ; 0054939b
    JMP 0x0054450b                      ; 005493a1
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0x7                         ; 005493a6
        ;   Label: LAB_005493a6
    PUSH ESI                            ; 005493a9
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 005493aa
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 005493af
    LEA EDX,[ESP + 0x48d0]              ; 005493b2
    PUSH EDX                            ; 005493b9
    LEA EDX,[ESP + 0x48d0]              ; 005493ba
    PUSH EDX                            ; 005493c1
    LEA EDX,[ESP + 0x48d0]              ; 005493c2
    PUSH EDX                            ; 005493c9
    LEA EDX,[ESP + 0x48d0]              ; 005493ca
    PUSH EDX                            ; 005493d1
    LEA EDX,[ESP + 0x281c]              ; 005493d2
    PUSH EDX                            ; 005493d9
    PUSH 0x5ef7e8                       ; 005493da | = "(%[^,], %d, %d, %f)%n"
    MOV ESI,0xffffffff                  ; 005493df
    PUSH EAX                            ; 005493e4
    MOV dword ptr [ESP + 0x4940],EAX    ; 005493e5
    MOV dword ptr [ESP + 0x48ec],ESI    ; 005493ec
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 005493f3
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x1c                        ; 005493f8
    MOV EDI,dword ptr [ESP + 0x48d0]    ; 005493fb
    CMP EDI,0x5                         ; 00549402
    JGE 0x0054941e                      ; 00549405
        ;   XREF to: 0054941e (CONDITIONAL_JUMP)  ; LAB_0054941e
    PUSH 0x5ef7fe                       ; 00549407 | = "Error parsing setEyes parms"
    PUSH 0x1e810b0                      ; 0054940c | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00549411
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00549416
    JMP 0x005445dc                      ; 00549419
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDX,dword ptr [ESP + 0x4924]    ; 0054941e
        ;   Label: LAB_0054941e
    LEA EAX,[ESP + 0x280c]              ; 00549425
    ADD EDX,EDI                         ; 0054942c
    PUSH EAX                            ; 0054942e
    MOV dword ptr [ESP + 0x4928],EDX    ; 0054942f
    CALL core_script.cpp_trimString_FUN_00543240 ; 00549436
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 0054943b
    PUSH 0x7c6344                       ; 0054943e | g_CCharacterClassInfo
    MOV ECX,dword ptr [0x007c637c]      ; 00549443 | g_CCharacterClassInfo.name_hash
    PUSH ECX                            ; 00549449
    LEA EAX,[ESP + 0x2814]              ; 0054944a
    PUSH EAX                            ; 00549451
    CALL core_script.cpp_getActor_FUN_005433c0 ; 00549452
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV ESI,EAX                         ; 00549457
    ADD ESP,0xc                         ; 00549459
    TEST EAX,EAX                        ; 0054945c
    JNZ 0x00549472                      ; 0054945e
        ;   XREF to: 00549472 (CONDITIONAL_JUMP)  ; LAB_00549472
    CMP dword ptr [0x01e818bc],0x0      ; 00549460 | DAT_01e818bc
    JNZ 0x00544524                      ; 00549467
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 0054946d
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDI,dword ptr [0x01e810a8]      ; 00549472 | DAT_01e810a8
        ;   Label: LAB_00549472
    TEST EDI,EDI                        ; 00549478
    JNZ 0x0054450b                      ; 0054947a
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EAX,dword ptr [ESP + 0x48c4]    ; 00549480
    PUSH dword ptr [ESP + 0x48cc]       ; 00549487
    PUSH EAX                            ; 0054948e
    PUSH EDI                            ; 0054948f
    PUSH ESI                            ; 00549490
    CALL core_charactr.cpp_FUN_0042e8e0 ; 00549491
        ;   XREF to: 0042e8e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042e8e0()
    ADD ESP,0x10                        ; 00549496
    MOV EDX,dword ptr [ESP + 0x48c8]    ; 00549499
    PUSH dword ptr [ESP + 0x48cc]       ; 005494a0
    PUSH EDX                            ; 005494a7
    PUSH 0x1                            ; 005494a8
    PUSH ESI                            ; 005494aa
    CALL core_charactr.cpp_FUN_0042e8e0 ; 005494ab
        ;   XREF to: 0042e8e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042e8e0()
    ADD ESP,0x10                        ; 005494b0
    JMP 0x0054450b                      ; 005494b3
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0xc                         ; 005494b8
        ;   Label: LAB_005494b8
    PUSH ESI                            ; 005494bb
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 005494bc
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 005494c1
    PUSH 0xc8                           ; 005494c4
    MOV dword ptr [ESP + 0x4928],EAX    ; 005494c9
    LEA EAX,[ESP + 0x1ac8]              ; 005494d0
    PUSH EAX                            ; 005494d7
    LEA EAX,[ESP + 0x492c]              ; 005494d8
    PUSH EAX                            ; 005494df
    CALL core_script.cpp_parseArgument_FUN_005432d0 ; 005494e0
        ;   XREF to: 005432d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005432d0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 005494e5
    TEST EAX,EAX                        ; 005494e8
    JZ 0x00549512                       ; 005494ea
        ;   XREF to: 00549512 (CONDITIONAL_JUMP)  ; LAB_00549512
    MOV EDI,0x1e810b0                   ; 005494ec
        ;   Label: LAB_005494ec
    MOV ESI,EAX                         ; 005494f1
    PUSH EDI                            ; 005494f3 | DAT_01e810b0
    MOV AL,byte ptr [ESI]               ; 005494f4
        ;   Label: LAB_005494f4
    MOV byte ptr [EDI],AL               ; 005494f6 | DAT_01e810b0 | DAT_01e810b2
    CMP AL,0x0                          ; 005494f8
    JZ 0x0054950c                       ; 005494fa
        ;   XREF to: 0054950c (CONDITIONAL_JUMP)  ; LAB_0054950c
    MOV AL,byte ptr [ESI + 0x1]         ; 005494fc
    ADD ESI,0x2                         ; 005494ff
    MOV byte ptr [EDI + 0x1],AL         ; 00549502 | DAT_01e810b1 | DAT_01e810b3
    ADD EDI,0x2                         ; 00549505
    CMP AL,0x0                          ; 00549508
    JNZ 0x005494f4                      ; 0054950a
        ;   XREF to: 005494f4 (CONDITIONAL_JUMP)  ; LAB_005494f4
    POP EDI                             ; 0054950c
        ;   Label: LAB_0054950c
    JMP 0x005445dc                      ; 0054950d
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EAX,[ESP + 0x1ac4]              ; 00549512
        ;   Label: LAB_00549512
    PUSH EAX                            ; 00549519
    CALL core_script.cpp_trimString_FUN_00543240 ; 0054951a
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    MOV ESI,dword ptr [0x01e810a8]      ; 0054951f | DAT_01e810a8
    ADD ESP,0x4                         ; 00549525
    TEST ESI,ESI                        ; 00549528
    JNZ 0x0054450b                      ; 0054952a
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EAX,[ESP + 0x1ac4]              ; 00549530
    PUSH EAX                            ; 00549537
    MOV EDI,dword ptr [0x0061f650]      ; 00549538 | DAT_0061f650
    PUSH EDI                            ; 0054953e | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_setVersionControlDirectory_FUN_0051c420 ; 0054953f
        ;   XREF to: 0051c420 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_setVersionControlDirectory_FUN_0051c420(CDemonMission * this_ptr, char * directory)
    ADD ESP,0x8                         ; 00549544
    JMP 0x0054450b                      ; 00549547
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0x18                        ; 0054954c
        ;   Label: LAB_0054954c
    PUSH ESI                            ; 0054954f
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00549550
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00549555
    PUSH 0x100                          ; 00549558
    MOV dword ptr [ESP + 0x4928],EAX    ; 0054955d
    LEA EAX,[ESP + 0xeb0]               ; 00549564
    PUSH EAX                            ; 0054956b
    LEA EAX,[ESP + 0x492c]              ; 0054956c
    PUSH EAX                            ; 00549573
    CALL core_script.cpp_parseArgument_FUN_005432d0 ; 00549574
        ;   XREF to: 005432d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005432d0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 00549579
    TEST EAX,EAX                        ; 0054957c
    JNZ 0x005494ec                      ; 0054957e
        ;   XREF to: 005494ec (CONDITIONAL_JUMP)  ; LAB_005494ec
    CMP dword ptr [0x01e810a8],0x0      ; 00549584 | DAT_01e810a8
    JNZ 0x0054450b                      ; 0054958b
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EAX,[ESP + 0xeac]               ; 00549591
    PUSH EAX                            ; 00549598
    MOV EDX,dword ptr [0x0061d418]      ; 00549599 | g_CFieldNotesPtr
    PUSH EDX                            ; 0054959f | g_CFieldNotesInstance
    CALL core_fldnotes.cpp_FUN_004be0b0 ; 005495a0
        ;   XREF to: 004be0b0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004be0b0()
    ADD ESP,0x8                         ; 005495a5
    JMP 0x0054450b                      ; 005495a8
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0xd                         ; 005495ad
        ;   Label: LAB_005495ad
    PUSH ESI                            ; 005495b0
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 005495b1
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 005495b6
    PUSH 0x64                           ; 005495b9
    MOV dword ptr [ESP + 0x4928],EAX    ; 005495bb
    LEA EAX,[ESP + 0x4368]              ; 005495c2
    PUSH EAX                            ; 005495c9
    LEA EAX,[ESP + 0x492c]              ; 005495ca
    PUSH EAX                            ; 005495d1
    CALL core_script.cpp_parseArgument_FUN_005432d0 ; 005495d2
        ;   XREF to: 005432d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005432d0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 005495d7
    TEST EAX,EAX                        ; 005495da
    JZ 0x00549604                       ; 005495dc
        ;   XREF to: 00549604 (CONDITIONAL_JUMP)  ; LAB_00549604
    MOV EDI,0x1e810b0                   ; 005495de
    MOV ESI,EAX                         ; 005495e3
    PUSH EDI                            ; 005495e5 | DAT_01e810b0
    MOV AL,byte ptr [ESI]               ; 005495e6
        ;   Label: LAB_005495e6
    MOV byte ptr [EDI],AL               ; 005495e8 | DAT_01e810b0 | DAT_01e810b2
    CMP AL,0x0                          ; 005495ea
    JZ 0x005495fe                       ; 005495ec
        ;   XREF to: 005495fe (CONDITIONAL_JUMP)  ; LAB_005495fe
    MOV AL,byte ptr [ESI + 0x1]         ; 005495ee
    ADD ESI,0x2                         ; 005495f1
    MOV byte ptr [EDI + 0x1],AL         ; 005495f4 | DAT_01e810b1 | DAT_01e810b3
    ADD EDI,0x2                         ; 005495f7
    CMP AL,0x0                          ; 005495fa
    JNZ 0x005495e6                      ; 005495fc
        ;   XREF to: 005495e6 (CONDITIONAL_JUMP)  ; LAB_005495e6
    POP EDI                             ; 005495fe
        ;   Label: LAB_005495fe
    JMP 0x005445dc                      ; 005495ff
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    PUSH 0x7c2ff8                       ; 00549604 | g_CDemonActorClassInfo
        ;   Label: LAB_00549604
    MOV ECX,dword ptr [0x007c3030]      ; 00549609 | g_CDemonActorClassInfo.name_hash
    PUSH ECX                            ; 0054960f
    LEA EAX,[ESP + 0x436c]              ; 00549610
    PUSH EAX                            ; 00549617
    CALL core_script.cpp_getActor_FUN_005433c0 ; 00549618
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0054961d
    TEST EAX,EAX                        ; 00549620
    JNZ 0x00549636                      ; 00549622
        ;   XREF to: 00549636 (CONDITIONAL_JUMP)  ; LAB_00549636
    CMP dword ptr [0x01e818bc],0x0      ; 00549624 | DAT_01e818bc
    JNZ 0x00544524                      ; 0054962b
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 00549631
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    CMP EAX,dword ptr [EBX + 0xc]       ; 00549636
        ;   Label: LAB_00549636
    JZ 0x0054450b                       ; 00549639
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV dword ptr [EBX + 0x10],0x1      ; 0054963f
    MOV dword ptr [EBX + 0xc],EAX       ; 00549646
    JMP 0x0054450b                      ; 00549649
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0xb                         ; 0054964e
        ;   Label: LAB_0054964e
    PUSH ESI                            ; 00549651
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00549652
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    MOV EDX,0xffffffff                  ; 00549657
    ADD ESP,0x4                         ; 0054965c
    MOV dword ptr [ESP + 0x48d4],EDX    ; 0054965f
    LEA EDX,[ESP + 0x48d4]              ; 00549666
    PUSH EDX                            ; 0054966d
    LEA EDX,[ESP + 0x4688]              ; 0054966e
    PUSH EDX                            ; 00549675
    LEA EDX,[ESP + 0x4114]              ; 00549676
    PUSH EDX                            ; 0054967d
    PUSH 0x5ef85a                       ; 0054967e | = " (%[^,], %[^)])%n"
    PUSH EAX                            ; 00549683
    MOV dword ptr [ESP + 0x4938],EAX    ; 00549684
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 0054968b
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 00549690
    CMP dword ptr [ESP + 0x48d4],0x5    ; 00549693
    JGE 0x005496b4                      ; 0054969b
        ;   XREF to: 005496b4 (CONDITIONAL_JUMP)  ; LAB_005496b4
    PUSH 0x5ef86c                       ; 0054969d | = "Error parsing setHeroTask parameters."
    PUSH 0x1e810b0                      ; 005496a2 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005496a7
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 005496ac
    JMP 0x005445dc                      ; 005496af
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EAX,[ESP + 0x410c]              ; 005496b4
        ;   Label: LAB_005496b4
    PUSH EAX                            ; 005496bb
    CALL core_script.cpp_trimString_FUN_00543240 ; 005496bc
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 005496c1
    LEA EAX,[ESP + 0x4684]              ; 005496c4
    PUSH EAX                            ; 005496cb
    CALL core_script.cpp_trimString_FUN_00543240 ; 005496cc
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 005496d1
    MOV EDI,dword ptr [0x01d06b10]      ; 005496d4 | g_CHeroClassInfo.name_hash
    PUSH 0x1d06ad8                      ; 005496da
    MOV EAX,dword ptr [ESP + 0x48d8]    ; 005496df
    MOV ESI,dword ptr [ESP + 0x4928]    ; 005496e6
    PUSH EDI                            ; 005496ed
    ADD ESI,EAX                         ; 005496ee
    LEA EAX,[ESP + 0x4114]              ; 005496f0
    PUSH EAX                            ; 005496f7
    MOV dword ptr [ESP + 0x4930],ESI    ; 005496f8
    CALL core_script.cpp_getActor_FUN_005433c0 ; 005496ff
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00549704
    MOV ESI,EAX                         ; 00549707
    TEST EAX,EAX                        ; 00549709
    JNZ 0x0054971f                      ; 0054970b
        ;   XREF to: 0054971f (CONDITIONAL_JUMP)  ; LAB_0054971f
    CMP dword ptr [0x01e818bc],0x0      ; 0054970d | DAT_01e818bc
    JNZ 0x00544524                      ; 00549714
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 0054971a
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    PUSH 0x5ef892                       ; 0054971f | = "stand"
        ;   Label: LAB_0054971f
    LEA EAX,[ESP + 0x4688]              ; 00549724
    PUSH EAX                            ; 0054972b
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0054972c
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00549731
    TEST EAX,EAX                        ; 00549734
    JNZ 0x00549754                      ; 00549736
        ;   XREF to: 00549754 (CONDITIONAL_JUMP)  ; LAB_00549754
    CMP dword ptr [0x01e810a8],0x0      ; 00549738 | DAT_01e810a8
        ;   Label: LAB_00549738
    JNZ 0x0054450b                      ; 0054973f
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH EAX                            ; 00549745
    PUSH ESI                            ; 00549746
    CALL core_hero.cpp_CHero_setAiTask_FUN_004ec320 ; 00549747
        ;   XREF to: 004ec320 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_setAiTask_FUN_004ec320(CHero * this_ptr, int ai_task)
    ADD ESP,0x8                         ; 0054974c
    JMP 0x0054450b                      ; 0054974f
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH 0x5ef898                       ; 00549754 | = "follow"
        ;   Label: LAB_00549754
    LEA EAX,[ESP + 0x4688]              ; 00549759
    PUSH EAX                            ; 00549760
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 00549761
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00549766
    TEST EAX,EAX                        ; 00549769
    JNZ 0x00549774                      ; 0054976b
        ;   XREF to: 00549774 (CONDITIONAL_JUMP)  ; LAB_00549774
    MOV EAX,0x1                         ; 0054976d
    JMP 0x00549738                      ; 00549772
        ;   XREF to: 00549738 (UNCONDITIONAL_JUMP)  ; LAB_00549738
    PUSH 0x5ef89f                       ; 00549774 | DAT_005ef89f
        ;   Label: LAB_00549774
    LEA EAX,[ESP + 0x4688]              ; 00549779
    PUSH EAX                            ; 00549780
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 00549781
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00549786
    TEST EAX,EAX                        ; 00549789
    JNZ 0x00549794                      ; 0054978b
        ;   XREF to: 00549794 (CONDITIONAL_JUMP)  ; LAB_00549794
    MOV EAX,0x2                         ; 0054978d
    JMP 0x00549738                      ; 00549792
        ;   XREF to: 00549738 (UNCONDITIONAL_JUMP)  ; LAB_00549738
    PUSH 0x5ef8a4                       ; 00549794 | = "guard"
        ;   Label: LAB_00549794
    LEA EAX,[ESP + 0x4688]              ; 00549799
    PUSH EAX                            ; 005497a0
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 005497a1
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005497a6
    TEST EAX,EAX                        ; 005497a9
    JNZ 0x005497b4                      ; 005497ab
        ;   XREF to: 005497b4 (CONDITIONAL_JUMP)  ; LAB_005497b4
    MOV EAX,0x3                         ; 005497ad
    JMP 0x00549738                      ; 005497b2
        ;   XREF to: 00549738 (UNCONDITIONAL_JUMP)  ; LAB_00549738
    PUSH 0x5ef8aa                       ; 005497b4 | = "suspend"
        ;   Label: LAB_005497b4
    LEA EAX,[ESP + 0x4688]              ; 005497b9
    PUSH EAX                            ; 005497c0
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 005497c1
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005497c6
    TEST EAX,EAX                        ; 005497c9
    JNZ 0x005497d7                      ; 005497cb
        ;   XREF to: 005497d7 (CONDITIONAL_JUMP)  ; LAB_005497d7
    MOV EAX,0x4                         ; 005497cd
    JMP 0x00549738                      ; 005497d2
        ;   XREF to: 00549738 (UNCONDITIONAL_JUMP)  ; LAB_00549738
    LEA EAX,[ESP + 0x4684]              ; 005497d7
        ;   Label: LAB_005497d7
    PUSH EAX                            ; 005497de
    PUSH 0x5ef8b2                       ; 005497df | = "Invalid Task: %s"
    PUSH 0x1e810b0                      ; 005497e4 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005497e9
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 005497ee
    JMP 0x005445dc                      ; 005497f1
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0x9                         ; 005497f6
        ;   Label: LAB_005497f6
    PUSH ESI                            ; 005497f9
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 005497fa
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 005497ff
    LEA EDX,[ESP + 0x48dc]              ; 00549802
    PUSH EDX                            ; 00549809
    LEA EDX,[ESP + 0x48dc]              ; 0054980a
    PUSH EDX                            ; 00549811
    LEA EDX,[ESP + 0x3304]              ; 00549812
    PUSH EDX                            ; 00549819
    PUSH 0x5ef8cd                       ; 0054981a | = "(%[^,], %d )%n"
    MOV ESI,0xffffffff                  ; 0054981f
    PUSH EAX                            ; 00549824
    MOV dword ptr [ESP + 0x4938],EAX    ; 00549825
    MOV dword ptr [ESP + 0x48f0],ESI    ; 0054982c
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00549833
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 00549838
    MOV EDI,dword ptr [ESP + 0x48dc]    ; 0054983b
    CMP EDI,0x5                         ; 00549842
    JGE 0x0054985e                      ; 00549845
        ;   XREF to: 0054985e (CONDITIONAL_JUMP)  ; LAB_0054985e
    PUSH 0x5ef8dc                       ; 00549847 | = "Error parsing setIniInt command parms"
    PUSH 0x1e810b0                      ; 0054984c | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00549851
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00549856
    JMP 0x005445dc                      ; 00549859
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDX,dword ptr [ESP + 0x4924]    ; 0054985e
        ;   Label: LAB_0054985e
    LEA EAX,[ESP + 0x32fc]              ; 00549865
    ADD EDX,EDI                         ; 0054986c
    PUSH EAX                            ; 0054986e
    MOV dword ptr [ESP + 0x4928],EDX    ; 0054986f
    CALL core_script.cpp_trimString_FUN_00543240 ; 00549876
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    MOV ECX,dword ptr [0x01e810a8]      ; 0054987b | DAT_01e810a8
    ADD ESP,0x4                         ; 00549881
    TEST ECX,ECX                        ; 00549884
    JNZ 0x0054450b                      ; 00549886
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH 0x5ef902                       ; 0054988c | DAT_005ef902
    PUSH 0x5ef907                       ; 00549891 | = "system\\nocturne.ini"
    LEA EAX,[ESP + 0x240]               ; 00549896
    PUSH EAX                            ; 0054989d
    CALL engine_ini.cpp_FUN_004f4b00    ; 0054989e
        ;   XREF to: 004f4b00 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4b00()
    ADD ESP,0xc                         ; 005498a3
    MOV ESI,dword ptr [ESP + 0x48d8]    ; 005498a6
    PUSH ESI                            ; 005498ad
    LEA EAX,[ESP + 0x3300]              ; 005498ae
    PUSH EAX                            ; 005498b5
    LEA EAX,[ESP + 0x240]               ; 005498b6
    PUSH EAX                            ; 005498bd
    CALL engine_ini.cpp_FUN_004f4d70    ; 005498be
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 005498c3
    PUSH 0x0                            ; 005498c6
    LEA EAX,[ESP + 0x23c]               ; 005498c8
    PUSH EAX                            ; 005498cf
    CALL engine_ini.cpp_CIniFile_dtor_FUN_004f4b30 ; 005498d0
        ;   XREF to: 004f4b30 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_CIniFile_dtor_FUN_004f4b30(CIniFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005498d5
    JMP 0x0054450b                      ; 005498d8
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0x8                         ; 005498dd
        ;   Label: LAB_005498dd
    PUSH ESI                            ; 005498e0
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 005498e1
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 005498e6
    LEA EDX,[ESP + 0x48ec]              ; 005498e9
    PUSH EDX                            ; 005498f0
    LEA EDX,[ESP + 0x48ec]              ; 005498f1
    PUSH EDX                            ; 005498f8
    LEA EDX,[ESP + 0x48ec]              ; 005498f9
    PUSH EDX                            ; 00549900
    LEA EDX,[ESP + 0x1300]              ; 00549901
    PUSH EDX                            ; 00549908
    PUSH 0x5ef924                       ; 00549909 | = "(%[^,], %d, %f)%n"
    MOV EDI,0xffffffff                  ; 0054990e
    PUSH EAX                            ; 00549913
    MOV dword ptr [ESP + 0x493c],EAX    ; 00549914
    MOV dword ptr [ESP + 0x4904],EDI    ; 0054991b
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00549922
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x18                        ; 00549927
    MOV EAX,dword ptr [ESP + 0x48ec]    ; 0054992a
    CMP EAX,0x4                         ; 00549931
    JGE 0x0054994d                      ; 00549934
        ;   XREF to: 0054994d (CONDITIONAL_JUMP)  ; LAB_0054994d
    PUSH 0x5ef936                       ; 00549936 | = "Error parsing setMouth parms"
    PUSH 0x1e810b0                      ; 0054993b | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00549940
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00549945
    JMP 0x005445dc                      ; 00549948
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDX,dword ptr [ESP + 0x4924]    ; 0054994d
        ;   Label: LAB_0054994d
    ADD EDX,EAX                         ; 00549954
    LEA EAX,[ESP + 0x12f4]              ; 00549956
    PUSH EAX                            ; 0054995d
    MOV dword ptr [ESP + 0x4928],EDX    ; 0054995e
    CALL core_script.cpp_trimString_FUN_00543240 ; 00549965
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 0054996a
    PUSH 0x7c6344                       ; 0054996d | g_CCharacterClassInfo
    MOV ECX,dword ptr [0x007c637c]      ; 00549972 | g_CCharacterClassInfo.name_hash
    PUSH ECX                            ; 00549978
    LEA EAX,[ESP + 0x12fc]              ; 00549979
    PUSH EAX                            ; 00549980
    CALL core_script.cpp_getActor_FUN_005433c0 ; 00549981
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00549986
    TEST EAX,EAX                        ; 00549989
    JNZ 0x0054999f                      ; 0054998b
        ;   XREF to: 0054999f (CONDITIONAL_JUMP)  ; LAB_0054999f
    CMP dword ptr [0x01e818bc],0x0      ; 0054998d | DAT_01e818bc
    JNZ 0x00544524                      ; 00549994
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 0054999a
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    CMP dword ptr [0x01e810a8],0x0      ; 0054999f | DAT_01e810a8
        ;   Label: LAB_0054999f
    JNZ 0x0054450b                      ; 005499a6
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EDI,dword ptr [ESP + 0x48e4]    ; 005499ac
    PUSH dword ptr [ESP + 0x48e8]       ; 005499b3
    PUSH EDI                            ; 005499ba
    PUSH EAX                            ; 005499bb
    CALL core_charactr.cpp_FUN_0042e920 ; 005499bc
        ;   XREF to: 0042e920 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042e920()
    ADD ESP,0xc                         ; 005499c1
    JMP 0x0054450b                      ; 005499c4
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0x12                        ; 005499c9
        ;   Label: LAB_005499c9
    PUSH ESI                            ; 005499cc
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 005499cd
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    MOV EDX,0xffffffff                  ; 005499d2
    ADD ESP,0x4                         ; 005499d7
    MOV dword ptr [ESP + 0x48f0],EDX    ; 005499da
    LEA EDX,[ESP + 0x48f0]              ; 005499e1
    PUSH EDX                            ; 005499e8
    PUSH EDX                            ; 005499e9
    PUSH 0x5ef966                       ; 005499ea | = " (%n %n"
    PUSH EAX                            ; 005499ef
    MOV dword ptr [ESP + 0x4934],EAX    ; 005499f0
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 005499f7
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 005499fc
    MOV ECX,dword ptr [ESP + 0x48f0]    ; 005499ff
    CMP ECX,0x1                         ; 00549a06
    JL 0x00549a55                       ; 00549a09
        ;   XREF to: 00549a55 (CONDITIONAL_JUMP)  ; LAB_00549a55
    MOV ESI,dword ptr [ESP + 0x4924]    ; 00549a0b
    MOV EDI,0xbf800000                  ; 00549a12
    ADD ESI,ECX                         ; 00549a17
    MOV dword ptr [ESP + 0x48f4],EDI    ; 00549a19
    MOV dword ptr [ESP + 0x4924],ESI    ; 00549a20
    CMP byte ptr [ESI],0x29             ; 00549a27
    JNZ 0x00549a6c                      ; 00549a2a
        ;   XREF to: 00549a6c (CONDITIONAL_JUMP)  ; LAB_00549a6c
    LEA EDI,[ESI + 0x1]                 ; 00549a2c
    MOV dword ptr [ESP + 0x4924],EDI    ; 00549a2f
    CMP dword ptr [0x01e810a8],0x0      ; 00549a36 | DAT_01e810a8
        ;   Label: LAB_00549a36
    JNZ 0x0054450b                      ; 00549a3d
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EAX,dword ptr [ESP + 0x48f4]    ; 00549a43
    MOV dword ptr [EBX + 0x450],EAX     ; 00549a4a
    JMP 0x0054450b                      ; 00549a50
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH 0x5ef96e                       ; 00549a55 | = "Error parsing setSayTimeOverride para..."
        ;   Label: LAB_00549a55
    PUSH 0x1e810b0                      ; 00549a5a | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00549a5f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00549a64
    JMP 0x005445dc                      ; 00549a67
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV dword ptr [ESP + 0x48f0],0xffffffff ; 00549a6c
        ;   Label: LAB_00549a6c
    LEA EAX,[ESP + 0x48f0]              ; 00549a77
    PUSH EAX                            ; 00549a7e
    LEA EAX,[ESP + 0x48f8]              ; 00549a7f
    PUSH EAX                            ; 00549a86
    PUSH 0x5ef99b                       ; 00549a87 | = "%f )%n"
    PUSH ESI                            ; 00549a8c
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00549a8d
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 00549a92
    MOV ECX,dword ptr [ESP + 0x48f0]    ; 00549a95
    CMP ECX,0x1                         ; 00549a9c
    JL 0x00549aaa                       ; 00549a9f
        ;   XREF to: 00549aaa (CONDITIONAL_JUMP)  ; LAB_00549aaa
    ADD dword ptr [ESP + 0x4924],ECX    ; 00549aa1
    JMP 0x00549a36                      ; 00549aa8
        ;   XREF to: 00549a36 (UNCONDITIONAL_JUMP)  ; LAB_00549a36
    PUSH 0x5ef9a2                       ; 00549aaa | = "Error parsing setSayTimeOverride para..."
        ;   Label: LAB_00549aaa
    PUSH 0x1e810b0                      ; 00549aaf | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00549ab4
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00549ab9
    JMP 0x005445dc                      ; 00549abc
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0xc                         ; 00549ac1
        ;   Label: LAB_00549ac1
    PUSH ESI                            ; 00549ac4
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00549ac5
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00549aca
    PUSH 0x64                           ; 00549acd
    MOV dword ptr [ESP + 0x4928],EAX    ; 00549acf
    LEA EAX,[ESP + 0x3d28]              ; 00549ad6
    PUSH EAX                            ; 00549add
    LEA EAX,[ESP + 0x492c]              ; 00549ade
    PUSH EAX                            ; 00549ae5
    CALL core_script.cpp_parseArgument_FUN_005432d0 ; 00549ae6
        ;   XREF to: 005432d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005432d0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 00549aeb
    TEST EAX,EAX                        ; 00549aee
    JZ 0x00549b18                       ; 00549af0
        ;   XREF to: 00549b18 (CONDITIONAL_JUMP)  ; LAB_00549b18
    MOV EDI,0x1e810b0                   ; 00549af2
        ;   Label: LAB_00549af2
    MOV ESI,EAX                         ; 00549af7
    PUSH EDI                            ; 00549af9 | DAT_01e810b0
    MOV AL,byte ptr [ESI]               ; 00549afa
        ;   Label: LAB_00549afa
    MOV byte ptr [EDI],AL               ; 00549afc | DAT_01e810b0 | DAT_01e810b2
    CMP AL,0x0                          ; 00549afe
    JZ 0x00549b12                       ; 00549b00
        ;   XREF to: 00549b12 (CONDITIONAL_JUMP)  ; LAB_00549b12
    MOV AL,byte ptr [ESI + 0x1]         ; 00549b02
    ADD ESI,0x2                         ; 00549b05
    MOV byte ptr [EDI + 0x1],AL         ; 00549b08 | DAT_01e810b1 | DAT_01e810b3
    ADD EDI,0x2                         ; 00549b0b
    CMP AL,0x0                          ; 00549b0e
    JNZ 0x00549afa                      ; 00549b10
        ;   XREF to: 00549afa (CONDITIONAL_JUMP)  ; LAB_00549afa
    POP EDI                             ; 00549b12
        ;   Label: LAB_00549b12
    JMP 0x005445dc                      ; 00549b13
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EAX,[ESP + 0x3d24]              ; 00549b18
        ;   Label: LAB_00549b18
    PUSH EAX                            ; 00549b1f
    PUSH EBX                            ; 00549b20
    CALL core_script.cpp_CScript_findLabelIndex_FUN_0054acc0 ; 00549b21
        ;   XREF to: 0054acc0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_findLabelIndex_FUN_0054acc0(CScript * this_ptr, char * label_name)
    ADD ESP,0x8                         ; 00549b26
    TEST EAX,EAX                        ; 00549b29
    JL 0x00549b45                       ; 00549b2b
        ;   XREF to: 00549b45 (CONDITIONAL_JUMP)  ; LAB_00549b45
    CMP dword ptr [0x01e810a8],0x0      ; 00549b2d | DAT_01e810a8
    JNZ 0x0054450b                      ; 00549b34
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV dword ptr [EBX + 0x454],EAX     ; 00549b3a
    JMP 0x0054450b                      ; 00549b40
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EAX,[ESP + 0x3d24]              ; 00549b45
        ;   Label: LAB_00549b45
    PUSH EAX                            ; 00549b4c
    PUSH 0x5ef9dc                       ; 00549b4d | = "Undefined label '%s'"
    PUSH 0x1e810b0                      ; 00549b52 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00549b57
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00549b5c
    JMP 0x005445dc                      ; 00549b5f
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0xa                         ; 00549b64
        ;   Label: LAB_00549b64
    PUSH ESI                            ; 00549b67
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00549b68
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00549b6d
    PUSH 0x64                           ; 00549b70
    MOV dword ptr [ESP + 0x4928],EAX    ; 00549b72
    LEA EAX,[ESP + 0x4494]              ; 00549b79
    PUSH EAX                            ; 00549b80
    LEA EAX,[ESP + 0x492c]              ; 00549b81
    PUSH EAX                            ; 00549b88
    CALL core_script.cpp_parseArgument_FUN_005432d0 ; 00549b89
        ;   XREF to: 005432d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005432d0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 00549b8e
    TEST EAX,EAX                        ; 00549b91
    JNZ 0x00549af2                      ; 00549b93
        ;   XREF to: 00549af2 (CONDITIONAL_JUMP)  ; LAB_00549af2
    CMP byte ptr [ESP + 0x4490],0x0     ; 00549b99
    JNZ 0x00549bd4                      ; 00549ba1
        ;   XREF to: 00549bd4 (CONDITIONAL_JUMP)  ; LAB_00549bd4
    MOV dword ptr [EBX + 0x4],EAX       ; 00549ba3
    MOV EAX,dword ptr [EBX + 0x4]       ; 00549ba6
        ;   Label: LAB_00549ba6
    MOV dword ptr [EBX + 0x8],EAX       ; 00549ba9
    CMP dword ptr [EBX + 0x14],0x0      ; 00549bac
    JNZ 0x0054450b                      ; 00549bb0
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EDX,dword ptr [EBX + 0x4]       ; 00549bb6
    CMP EDX,dword ptr [EBX + 0xc]       ; 00549bb9
    JZ 0x0054450b                       ; 00549bbc
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EAX,dword ptr [EBX + 0x4]       ; 00549bc2
    MOV dword ptr [EBX + 0x10],0x1      ; 00549bc5
    MOV dword ptr [EBX + 0xc],EAX       ; 00549bcc
    JMP 0x0054450b                      ; 00549bcf
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH 0x7c6344                       ; 00549bd4 | g_CCharacterClassInfo
        ;   Label: LAB_00549bd4
    MOV ECX,dword ptr [0x007c637c]      ; 00549bd9 | g_CCharacterClassInfo.name_hash
    PUSH ECX                            ; 00549bdf
    LEA EAX,[ESP + 0x4498]              ; 00549be0
    PUSH EAX                            ; 00549be7
    CALL core_script.cpp_getActor_FUN_005433c0 ; 00549be8
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00549bed
    MOV dword ptr [EBX + 0x4],EAX       ; 00549bf0
    TEST EAX,EAX                        ; 00549bf3
    JNZ 0x00549ba6                      ; 00549bf5
        ;   XREF to: 00549ba6 (CONDITIONAL_JUMP)  ; LAB_00549ba6
    CMP dword ptr [0x01e818bc],0x0      ; 00549bf7 | DAT_01e818bc
    JNZ 0x00544524                      ; 00549bfe
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 00549c04
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0xd                         ; 00549c09
        ;   Label: LAB_00549c09
    PUSH ESI                            ; 00549c0c
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00549c0d
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00549c12
    PUSH 0x64                           ; 00549c15
    MOV dword ptr [ESP + 0x4928],EAX    ; 00549c17
    LEA EAX,[ESP + 0x4174]              ; 00549c1e
    PUSH EAX                            ; 00549c25
    LEA EAX,[ESP + 0x492c]              ; 00549c26
    PUSH EAX                            ; 00549c2d
    CALL core_script.cpp_parseArgument_FUN_005432d0 ; 00549c2e
        ;   XREF to: 005432d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005432d0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 00549c33
    TEST EAX,EAX                        ; 00549c36
    JZ 0x00549c60                       ; 00549c38
        ;   XREF to: 00549c60 (CONDITIONAL_JUMP)  ; LAB_00549c60
    MOV EDI,0x1e810b0                   ; 00549c3a
    MOV ESI,EAX                         ; 00549c3f
    PUSH EDI                            ; 00549c41 | DAT_01e810b0
    MOV AL,byte ptr [ESI]               ; 00549c42
        ;   Label: LAB_00549c42
    MOV byte ptr [EDI],AL               ; 00549c44 | DAT_01e810b0 | DAT_01e810b2
    CMP AL,0x0                          ; 00549c46
    JZ 0x00549c5a                       ; 00549c48
        ;   XREF to: 00549c5a (CONDITIONAL_JUMP)  ; LAB_00549c5a
    MOV AL,byte ptr [ESI + 0x1]         ; 00549c4a
    ADD ESI,0x2                         ; 00549c4d
    MOV byte ptr [EDI + 0x1],AL         ; 00549c50 | DAT_01e810b1 | DAT_01e810b3
    ADD EDI,0x2                         ; 00549c53
    CMP AL,0x0                          ; 00549c56
    JNZ 0x00549c42                      ; 00549c58
        ;   XREF to: 00549c42 (CONDITIONAL_JUMP)  ; LAB_00549c42
    POP EDI                             ; 00549c5a
        ;   Label: LAB_00549c5a
    JMP 0x005445dc                      ; 00549c5b
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EAX,[ESP + 0x28]                ; 00549c60
        ;   Label: LAB_00549c60
    PUSH EAX                            ; 00549c64
    PUSH 0x5efa0a                       ; 00549c65 | DAT_005efa0a
    LEA EAX,[ESP + 0x4178]              ; 00549c6a
    MOV ECX,0xbf800000                  ; 00549c71
    PUSH EAX                            ; 00549c76
    MOV dword ptr [ESP + 0x34],ECX      ; 00549c77
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00549c7b
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0xc                         ; 00549c80
    FLDZ                                ; 00549c83
    FLD float ptr [ESP + 0x28]          ; 00549c85
    FSTP double ptr [ESP + 0x8]         ; 00549c89
    FCOMP double ptr [ESP + 0x8]        ; 00549c8d
    FNSTSW AX                           ; 00549c91
    SAHF                                ; 00549c93
    JNC 0x00549cdd                      ; 00549c94
        ;   XREF to: 00549cdd (CONDITIONAL_JUMP)  ; LAB_00549cdd
    FLD double ptr [ESP + 0x8]          ; 00549c96
    FCOMP double ptr [0x005efdaf]       ; 00549c9a | DAT_005efdaf
    FNSTSW AX                           ; 00549ca0
    SAHF                                ; 00549ca2
    JA 0x00549cdd                       ; 00549ca3
        ;   XREF to: 00549cdd (CONDITIONAL_JUMP)  ; LAB_00549cdd
    MOV ESI,dword ptr [0x01e810a8]      ; 00549ca5 | DAT_01e810a8
    TEST ESI,ESI                        ; 00549cab
    JNZ 0x0054450b                      ; 00549cad
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    CMP dword ptr [ESP + 0x28],0x3f800000 ; 00549cb3
    JNZ 0x00549cfc                      ; 00549cbb
        ;   XREF to: 00549cfc (CONDITIONAL_JUMP)  ; LAB_00549cfc
    MOV EAX,[0x0061d95c]                ; 00549cbd | g_CGamePtr
    MOV dword ptr [EAX + 0x280],ESI     ; 00549cc2 | g_CGameInstance.slow_motion_mode
    MOV EDX,dword ptr [0x0061d95c]      ; 00549cc8 | g_CGamePtr
        ;   Label: LAB_00549cc8
    MOV EAX,dword ptr [ESP + 0x28]      ; 00549cce
    MOV dword ptr [EDX + 0x208],EAX     ; 00549cd2 | g_CGameInstance.time_scale_factor
    JMP 0x0054450b                      ; 00549cd8
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EAX,[ESP + 0x4170]              ; 00549cdd
        ;   Label: LAB_00549cdd
    PUSH EAX                            ; 00549ce4
    PUSH 0x5efa0d                       ; 00549ce5 | = "Invalid time factor %s"
    PUSH 0x1e810b0                      ; 00549cea | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00549cef
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00549cf4
    JMP 0x005445dc                      ; 00549cf7
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EAX,[0x0061d95c]                ; 00549cfc | g_CGamePtr
        ;   Label: LAB_00549cfc
    MOV dword ptr [EAX + 0x280],0x2     ; 00549d01 | g_CGameInstance.slow_motion_mode
    JMP 0x00549cc8                      ; 00549d0b
        ;   XREF to: 00549cc8 (UNCONDITIONAL_JUMP)  ; LAB_00549cc8
    ADD ESI,0x9                         ; 00549d0d
        ;   Label: LAB_00549d0d
    PUSH ESI                            ; 00549d10
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00549d11
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    MOV EDX,0xffffffff                  ; 00549d16
    ADD ESP,0x4                         ; 00549d1b
    MOV dword ptr [ESP + 0x48fc],EDX    ; 00549d1e
    LEA EDX,[ESP + 0x48fc]              ; 00549d25
    PUSH EDX                            ; 00549d2c
    LEA EDX,[ESP + 0x1a00]              ; 00549d2d
    PUSH EDX                            ; 00549d34
    PUSH 0x5efa2e                       ; 00549d35 | = "(%[^,)]%n"
    PUSH EAX                            ; 00549d3a
    MOV dword ptr [ESP + 0x4934],EAX    ; 00549d3b
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00549d42
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 00549d47
    MOV ECX,dword ptr [ESP + 0x48fc]    ; 00549d4a
    CMP ECX,0x2                         ; 00549d51
    JGE 0x00549d6d                      ; 00549d54
        ;   XREF to: 00549d6d (CONDITIONAL_JUMP)  ; LAB_00549d6d
    PUSH 0x5efa38                       ; 00549d56 | = "Error parsing setVictim command parms"
    PUSH 0x1e810b0                      ; 00549d5b | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00549d60
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00549d65
    JMP 0x005445dc                      ; 00549d68
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV ESI,dword ptr [ESP + 0x4924]    ; 00549d6d
        ;   Label: LAB_00549d6d
    LEA EAX,[ESP + 0x19fc]              ; 00549d74
    ADD ESI,ECX                         ; 00549d7b
    PUSH EAX                            ; 00549d7d
    MOV dword ptr [ESP + 0x4928],ESI    ; 00549d7e
    CALL core_script.cpp_trimString_FUN_00543240 ; 00549d85
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 00549d8a
    PUSH 0x1c3f668                      ; 00549d8d
    MOV EDI,dword ptr [0x01c3f6a0]      ; 00549d92 | g_CEnemyClassInfo.name_hash
    PUSH EDI                            ; 00549d98
    LEA EAX,[ESP + 0x1a04]              ; 00549d99
    PUSH EAX                            ; 00549da0
    CALL core_script.cpp_getActor_FUN_005433c0 ; 00549da1
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00549da6
    MOV ESI,EAX                         ; 00549da9
    TEST EAX,EAX                        ; 00549dab
    JNZ 0x00549dc1                      ; 00549dad
        ;   XREF to: 00549dc1 (CONDITIONAL_JUMP)  ; LAB_00549dc1
    CMP dword ptr [0x01e818bc],0x0      ; 00549daf | DAT_01e818bc
    JNZ 0x00544524                      ; 00549db6
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 00549dbc
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDX,dword ptr [ESP + 0x4924]    ; 00549dc1
        ;   Label: LAB_00549dc1
    MOV CL,byte ptr [EDX]               ; 00549dc8
    XOR EAX,EAX                         ; 00549dca
    CMP CL,0x2c                         ; 00549dcc
    JZ 0x00549e08                       ; 00549dcf
        ;   XREF to: 00549e08 (CONDITIONAL_JUMP)  ; LAB_00549e08
    MOV EDX,dword ptr [ESP + 0x4924]    ; 00549dd1
        ;   Label: LAB_00549dd1
    CMP byte ptr [EDX],0x29             ; 00549dd8
    JNZ 0x00549ecc                      ; 00549ddb
        ;   XREF to: 00549ecc (CONDITIONAL_JUMP)  ; LAB_00549ecc
    LEA ECX,[EDX + 0x1]                 ; 00549de1
    MOV EDI,dword ptr [0x01e810a8]      ; 00549de4 | DAT_01e810a8
    MOV dword ptr [ESP + 0x4924],ECX    ; 00549dea
    TEST EDI,EDI                        ; 00549df1
    JNZ 0x0054450b                      ; 00549df3
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH EAX                            ; 00549df9
    PUSH ESI                            ; 00549dfa
    CALL core_enemy.cpp_CEnemy_setVictim_FUN_004a0ee0 ; 00549dfb
        ;   XREF to: 004a0ee0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setVictim_FUN_004a0ee0(CEnemy * this_ptr, CDemonActor * victim)
    ADD ESP,0x8                         ; 00549e00
    JMP 0x0054450b                      ; 00549e03
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    MOV dword ptr [ESP + 0x48fc],0xffffffff ; 00549e08
        ;   Label: LAB_00549e08
    LEA EAX,[ESP + 0x48fc]              ; 00549e13
    PUSH EAX                            ; 00549e1a
    LEA EAX,[ESP + 0x33c8]              ; 00549e1b
    PUSH EAX                            ; 00549e22
    PUSH 0x5efa5e                       ; 00549e23 | = ", %[^)]%n"
    PUSH EDX                            ; 00549e28
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00549e29
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 00549e2e
    MOV ECX,dword ptr [ESP + 0x48fc]    ; 00549e31
    CMP ECX,0x3                         ; 00549e38
    JGE 0x00549e54                      ; 00549e3b
        ;   XREF to: 00549e54 (CONDITIONAL_JUMP)  ; LAB_00549e54
    PUSH 0x5efa68                       ; 00549e3d | = "Error parsing setVictim command parms"
    PUSH 0x1e810b0                      ; 00549e42 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00549e47
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00549e4c
    JMP 0x005445dc                      ; 00549e4f
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDI,dword ptr [ESP + 0x4924]    ; 00549e54
        ;   Label: LAB_00549e54
    LEA EAX,[ESP + 0x33c4]              ; 00549e5b
    ADD EDI,ECX                         ; 00549e62
    PUSH EAX                            ; 00549e64
    MOV dword ptr [ESP + 0x4928],EDI    ; 00549e65
    CALL core_script.cpp_trimString_FUN_00543240 ; 00549e6c
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 00549e71
    PUSH 0x5efa8e                       ; 00549e74 | = "disable"
    LEA EAX,[ESP + 0x33c8]              ; 00549e79
    PUSH EAX                            ; 00549e80
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 00549e81
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00549e86
    TEST EAX,EAX                        ; 00549e89
    JNZ 0x00549e97                      ; 00549e8b
        ;   XREF to: 00549e97 (CONDITIONAL_JUMP)  ; LAB_00549e97
    MOV EAX,[0x00604e00]                ; 00549e8d | DAT_00604e00
    JMP 0x00549dd1                      ; 00549e92
        ;   XREF to: 00549dd1 (UNCONDITIONAL_JUMP)  ; LAB_00549dd1
    PUSH 0x7c6344                       ; 00549e97 | g_CCharacterClassInfo
        ;   Label: LAB_00549e97
    MOV EAX,[0x007c637c]                ; 00549e9c | g_CCharacterClassInfo.name_hash
    PUSH EAX                            ; 00549ea1
    LEA EAX,[ESP + 0x33cc]              ; 00549ea2
    PUSH EAX                            ; 00549ea9
    CALL core_script.cpp_getActor_FUN_005433c0 ; 00549eaa
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00549eaf
    TEST EAX,EAX                        ; 00549eb2
    JNZ 0x00549dd1                      ; 00549eb4
        ;   XREF to: 00549dd1 (CONDITIONAL_JUMP)  ; LAB_00549dd1
    CMP dword ptr [0x01e818bc],0x0      ; 00549eba | DAT_01e818bc
    JNZ 0x00544524                      ; 00549ec1
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 00549ec7
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    PUSH 0x5efa96                       ; 00549ecc | = "Missing closing ')' in setVictim command"
        ;   Label: LAB_00549ecc
    PUSH 0x1e810b0                      ; 00549ed1 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00549ed6
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00549edb
    JMP 0x005445dc                      ; 00549ede
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0xe                         ; 00549ee3
        ;   Label: LAB_00549ee3
    PUSH ESI                            ; 00549ee6
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00549ee7
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    MOV EDX,0xffffffff                  ; 00549eec
    ADD ESP,0x4                         ; 00549ef1
    MOV dword ptr [ESP + 0x4904],EDX    ; 00549ef4
    LEA EDX,[ESP + 0x4904]              ; 00549efb
    PUSH EDX                            ; 00549f02
    LEA EDX,[ESP + 0x4904]              ; 00549f03
    PUSH EDX                            ; 00549f0a
    LEA EDX,[ESP + 0x13c4]              ; 00549f0b
    PUSH EDX                            ; 00549f12
    PUSH 0x5eface                       ; 00549f13 | = "(%[^,], %f)%n"
    PUSH EAX                            ; 00549f18
    MOV dword ptr [ESP + 0x4938],EAX    ; 00549f19
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00549f20
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 00549f25
    MOV ECX,dword ptr [ESP + 0x4904]    ; 00549f28
    CMP ECX,0x3                         ; 00549f2f
    JGE 0x00549f4b                      ; 00549f32
        ;   XREF to: 00549f4b (CONDITIONAL_JUMP)  ; LAB_00549f4b
    PUSH 0x5efadc                       ; 00549f34 | = "Error parsing setWalkTimeout parms"
    PUSH 0x1e810b0                      ; 00549f39 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00549f3e
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 00549f43
    JMP 0x005445dc                      ; 00549f46
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV ESI,dword ptr [ESP + 0x4924]    ; 00549f4b
        ;   Label: LAB_00549f4b
    LEA EAX,[ESP + 0x13bc]              ; 00549f52
    ADD ESI,ECX                         ; 00549f59
    PUSH EAX                            ; 00549f5b
    MOV dword ptr [ESP + 0x4928],ESI    ; 00549f5c
    CALL core_script.cpp_trimString_FUN_00543240 ; 00549f63
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 00549f68
    PUSH 0x7c6344                       ; 00549f6b | g_CCharacterClassInfo
    MOV EDI,dword ptr [0x007c637c]      ; 00549f70 | g_CCharacterClassInfo.name_hash
    PUSH EDI                            ; 00549f76
    LEA EAX,[ESP + 0x13c4]              ; 00549f77
    PUSH EAX                            ; 00549f7e
    CALL core_script.cpp_getActor_FUN_005433c0 ; 00549f7f
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00549f84
    TEST EAX,EAX                        ; 00549f87
    JNZ 0x00549f9d                      ; 00549f89
        ;   XREF to: 00549f9d (CONDITIONAL_JUMP)  ; LAB_00549f9d
    CMP dword ptr [0x01e818bc],0x0      ; 00549f8b | DAT_01e818bc
    JNZ 0x00544524                      ; 00549f92
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 00549f98
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    CMP dword ptr [0x01e810a8],0x0      ; 00549f9d | DAT_01e810a8
        ;   Label: LAB_00549f9d
    JNZ 0x0054450b                      ; 00549fa4
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH dword ptr [ESP + 0x4900]       ; 00549faa
    MOV EDX,dword ptr [EAX + 0x154]     ; 00549fb1
    PUSH EAX                            ; 00549fb7
    CALL dword ptr [EDX + 0x138]        ; 00549fb8
    ADD ESP,0x8                         ; 00549fbe
    JMP 0x0054450b                      ; 00549fc1
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0xa                         ; 00549fc6
        ;   Label: LAB_00549fc6
    PUSH ESI                            ; 00549fc9
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00549fca
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00549fcf
    LEA EDX,[ESP + 0x4908]              ; 00549fd2
    PUSH EDX                            ; 00549fd9
    LEA EDX,[ESP + 0x36e8]              ; 00549fda
    PUSH EDX                            ; 00549fe1
    LEA EDX,[ESP + 0x3a0c]              ; 00549fe2
    PUSH EDX                            ; 00549fe9
    PUSH 0x5efb0a                       ; 00549fea | = "(%[^,], %[^)])%n"
    MOV ESI,0xffffffff                  ; 00549fef
    PUSH EAX                            ; 00549ff4
    MOV dword ptr [ESP + 0x4938],EAX    ; 00549ff5
    MOV dword ptr [ESP + 0x491c],ESI    ; 00549ffc
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 0054a003
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 0054a008
    MOV EDI,dword ptr [ESP + 0x4908]    ; 0054a00b
    CMP EDI,0x5                         ; 0054a012
    JGE 0x0054a02e                      ; 0054a015
        ;   XREF to: 0054a02e (CONDITIONAL_JUMP)  ; LAB_0054a02e
    PUSH 0x5efb1b                       ; 0054a017 | = "Error snaping turnToFace command parms"
    PUSH 0x1e810b0                      ; 0054a01c | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0054a021
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 0054a026
    JMP 0x005445dc                      ; 0054a029
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDX,dword ptr [ESP + 0x4924]    ; 0054a02e
        ;   Label: LAB_0054a02e
    LEA EAX,[ESP + 0x3a04]              ; 0054a035
    ADD EDX,EDI                         ; 0054a03c
    PUSH EAX                            ; 0054a03e
    MOV dword ptr [ESP + 0x4928],EDX    ; 0054a03f
    CALL core_script.cpp_trimString_FUN_00543240 ; 0054a046
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 0054a04b
    LEA EAX,[ESP + 0x36e4]              ; 0054a04e
    PUSH EAX                            ; 0054a055
    CALL core_script.cpp_trimString_FUN_00543240 ; 0054a056
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 0054a05b
    PUSH 0x7c2ff8                       ; 0054a05e | g_CDemonActorClassInfo
    MOV ECX,dword ptr [0x007c3030]      ; 0054a063 | g_CDemonActorClassInfo.name_hash
    PUSH ECX                            ; 0054a069
    LEA EAX,[ESP + 0x3a0c]              ; 0054a06a
    PUSH EAX                            ; 0054a071
    CALL core_script.cpp_getActor_FUN_005433c0 ; 0054a072
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV dword ptr [ESP + 0x4918],EAX    ; 0054a077
    ADD ESP,0xc                         ; 0054a07e
    TEST EAX,EAX                        ; 0054a081
    JNZ 0x0054a097                      ; 0054a083
        ;   XREF to: 0054a097 (CONDITIONAL_JUMP)  ; LAB_0054a097
    CMP dword ptr [0x01e818bc],0x0      ; 0054a085 | DAT_01e818bc
    JNZ 0x00544524                      ; 0054a08c
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 0054a092
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    PUSH 0x7c2ff8                       ; 0054a097 | g_CDemonActorClassInfo
        ;   Label: LAB_0054a097
    MOV EDI,dword ptr [0x007c3030]      ; 0054a09c | g_CDemonActorClassInfo.name_hash
    PUSH EDI                            ; 0054a0a2
    LEA EAX,[ESP + 0x36ec]              ; 0054a0a3
    PUSH EAX                            ; 0054a0aa
    CALL core_script.cpp_getActor_FUN_005433c0 ; 0054a0ab
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0054a0b0
    TEST EAX,EAX                        ; 0054a0b3
    JNZ 0x0054a0c9                      ; 0054a0b5
        ;   XREF to: 0054a0c9 (CONDITIONAL_JUMP)  ; LAB_0054a0c9
    CMP dword ptr [0x01e818bc],0x0      ; 0054a0b7 | DAT_01e818bc
    JNZ 0x00544524                      ; 0054a0be
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 0054a0c4
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    CMP dword ptr [0x01e810a8],0x0      ; 0054a0c9 | DAT_01e810a8
        ;   Label: LAB_0054a0c9
    JNZ 0x0054450b                      ; 0054a0d0
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EDX,dword ptr [ESP + 0x490c]    ; 0054a0d6
    ADD EDX,0x20                        ; 0054a0dd
    PUSH EDX                            ; 0054a0e0
    ADD EAX,0x20                        ; 0054a0e1
    PUSH EAX                            ; 0054a0e4
    LEA ESI,[ESP + 0x477c]              ; 0054a0e5
    LEA EDI,[ESP + 0x47d0]              ; 0054a0ec
    CALL core_bodypart.cpp_FUN_0041afe0 ; 0054a0f3
        ;   XREF to: 0041afe0 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_0041afe0()
    LEA ESI,[ESP + 0x477c]              ; 0054a0f8
    ADD ESP,0x8                         ; 0054a0ff
    LEA EAX,[ESP + 0x47c8]              ; 0054a102
    MOVSD ES:EDI,ESI                    ; 0054a109
    MOVSD ES:EDI,ESI                    ; 0054a10a
    MOVSD ES:EDI,ESI                    ; 0054a10b
    PUSH EAX                            ; 0054a10c
    LEA ESI,[ESP + 0x47d8]              ; 0054a10d
    LEA EDI,[ESP + 0x4790]              ; 0054a114
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 0054a11b
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x47d8]              ; 0054a120
    ADD ESP,0x4                         ; 0054a127
    MOVSD ES:EDI,ESI                    ; 0054a12a
    MOVSD ES:EDI,ESI                    ; 0054a12b
    MOVSD ES:EDI,ESI                    ; 0054a12c
    MOV EDX,dword ptr [ESP + 0x490c]    ; 0054a12d
    MOV EAX,dword ptr [ESP + 0x4790]    ; 0054a134
    PUSH EDX                            ; 0054a13b
    MOV dword ptr [EDX + 0x34],EAX      ; 0054a13c
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 0054a13f
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0054a144
    JMP 0x0054450b                      ; 0054a147
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0x8                         ; 0054a14c
        ;   Label: LAB_0054a14c
    PUSH ESI                            ; 0054a14f
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 0054a150
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 0054a155
    PUSH 0x1f4                          ; 0054a158
    MOV dword ptr [ESP + 0x4928],EAX    ; 0054a15d
    LEA EAX,[ESP + 0x440]               ; 0054a164
    PUSH EAX                            ; 0054a16b
    LEA EAX,[ESP + 0x492c]              ; 0054a16c
    PUSH EAX                            ; 0054a173
    CALL core_script.cpp_parseArgument_FUN_005432d0 ; 0054a174
        ;   XREF to: 005432d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005432d0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0054a179
    TEST EAX,EAX                        ; 0054a17c
    JZ 0x0054a1a6                       ; 0054a17e
        ;   XREF to: 0054a1a6 (CONDITIONAL_JUMP)  ; LAB_0054a1a6
    MOV EDI,0x1e810b0                   ; 0054a180
    MOV ESI,EAX                         ; 0054a185
    PUSH EDI                            ; 0054a187 | DAT_01e810b0
    MOV AL,byte ptr [ESI]               ; 0054a188
        ;   Label: LAB_0054a188
    MOV byte ptr [EDI],AL               ; 0054a18a | DAT_01e810b0 | DAT_01e810b2
    CMP AL,0x0                          ; 0054a18c
    JZ 0x0054a1a0                       ; 0054a18e
        ;   XREF to: 0054a1a0 (CONDITIONAL_JUMP)  ; LAB_0054a1a0
    MOV AL,byte ptr [ESI + 0x1]         ; 0054a190
    ADD ESI,0x2                         ; 0054a193
    MOV byte ptr [EDI + 0x1],AL         ; 0054a196 | DAT_01e810b1 | DAT_01e810b3
    ADD EDI,0x2                         ; 0054a199
    CMP AL,0x0                          ; 0054a19c
    JNZ 0x0054a188                      ; 0054a19e
        ;   XREF to: 0054a188 (CONDITIONAL_JUMP)  ; LAB_0054a188
    POP EDI                             ; 0054a1a0
        ;   Label: LAB_0054a1a0
    JMP 0x005445dc                      ; 0054a1a1
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV dword ptr [ESP + 0x4914],0xffffffff ; 0054a1a6
        ;   Label: LAB_0054a1a6
    LEA EAX,[ESP + 0x4914]              ; 0054a1b1
    PUSH EAX                            ; 0054a1b8
    LEA EAX,[ESP + 0x3238]              ; 0054a1b9
    PUSH EAX                            ; 0054a1c0
    LEA EAX,[ESP + 0x37b4]              ; 0054a1c1
    PUSH EAX                            ; 0054a1c8
    PUSH 0x5efb4b                       ; 0054a1c9 | = "%[^,], %[^,], %n"
    LEA EAX,[ESP + 0x44c]               ; 0054a1ce
    PUSH EAX                            ; 0054a1d5
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 0054a1d6
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 0054a1db
    CMP dword ptr [ESP + 0x4914],0x5    ; 0054a1de
    JGE 0x0054a1ff                      ; 0054a1e6
        ;   XREF to: 0054a1ff (CONDITIONAL_JUMP)  ; LAB_0054a1ff
    PUSH 0x5efb5c                       ; 0054a1e8 | = "Error parsing speaker and wav arguments"
    PUSH 0x1e810b0                      ; 0054a1ed | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0054a1f2
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 0054a1f7
    JMP 0x005445dc                      ; 0054a1fa
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EAX,[ESP + 0x37ac]              ; 0054a1ff
        ;   Label: LAB_0054a1ff
    PUSH EAX                            ; 0054a206
    CALL core_script.cpp_trimString_FUN_00543240 ; 0054a207
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 0054a20c
    LEA EAX,[ESP + 0x3234]              ; 0054a20f
    PUSH EAX                            ; 0054a216
    CALL core_script.cpp_trimString_FUN_00543240 ; 0054a217
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 0054a21c
    LEA EAX,[ESP + 0x43c]               ; 0054a21f
    ADD EAX,dword ptr [ESP + 0x4914]    ; 0054a226
    PUSH EAX                            ; 0054a22d
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 0054a22e
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 0054a233
    PUSH EAX                            ; 0054a236
    LEA EAX,[ESP + 0x3238]              ; 0054a237
    PUSH EAX                            ; 0054a23e
    LEA EAX,[ESP + 0x37b4]              ; 0054a23f
    PUSH EAX                            ; 0054a246
    PUSH EBX                            ; 0054a247
    CALL core_script.cpp_CScript_startDialogLine_FUN_0054aa60 ; 0054a248
        ;   XREF to: 0054aa60 (UNCONDITIONAL_CALL)  ; float core_script.cpp_CScript_startDialogLine_FUN_0054aa60(CScript * this_ptr, char * actor_specifier, char * sound_name, char * dialog_text)
    MOV dword ptr [ESP + 0x4954],EAX    ; 0054a24d
    FLDZ                                ; 0054a254
    MOV EAX,dword ptr [ESP + 0x4954]    ; 0054a256
    MOV dword ptr [EBX + 0x4c],EAX      ; 0054a25d
    ADD ESP,0x10                        ; 0054a260
    FCOMP float ptr [EBX + 0x4c]        ; 0054a263
    FNSTSW AX                           ; 0054a266
    SAHF                                ; 0054a268
    JA 0x005445dc                       ; 0054a269
        ;   XREF to: 005445dc (CONDITIONAL_JUMP)  ; LAB_005445dc
    JMP 0x0054450b                      ; 0054a26f
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0xc                         ; 0054a274
        ;   Label: LAB_0054a274
    PUSH ESI                            ; 0054a277
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 0054a278
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 0054a27d
    PUSH 0xc8                           ; 0054a280
    MOV dword ptr [ESP + 0x4928],EAX    ; 0054a285
    LEA EAX,[ESP + 0x17a8]              ; 0054a28c
    PUSH EAX                            ; 0054a293
    LEA EAX,[ESP + 0x492c]              ; 0054a294
    PUSH EAX                            ; 0054a29b
    CALL core_script.cpp_parseArgument_FUN_005432d0 ; 0054a29c
        ;   XREF to: 005432d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005432d0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0054a2a1
    TEST EAX,EAX                        ; 0054a2a4
    JZ 0x0054a2ce                       ; 0054a2a6
        ;   XREF to: 0054a2ce (CONDITIONAL_JUMP)  ; LAB_0054a2ce
    MOV EDI,0x1e810b0                   ; 0054a2a8
    MOV ESI,EAX                         ; 0054a2ad
    PUSH EDI                            ; 0054a2af | DAT_01e810b0
    MOV AL,byte ptr [ESI]               ; 0054a2b0
        ;   Label: LAB_0054a2b0
    MOV byte ptr [EDI],AL               ; 0054a2b2 | DAT_01e810b0 | DAT_01e810b2
    CMP AL,0x0                          ; 0054a2b4
    JZ 0x0054a2c8                       ; 0054a2b6
        ;   XREF to: 0054a2c8 (CONDITIONAL_JUMP)  ; LAB_0054a2c8
    MOV AL,byte ptr [ESI + 0x1]         ; 0054a2b8
    ADD ESI,0x2                         ; 0054a2bb
    MOV byte ptr [EDI + 0x1],AL         ; 0054a2be | DAT_01e810b1 | DAT_01e810b3
    ADD EDI,0x2                         ; 0054a2c1
    CMP AL,0x0                          ; 0054a2c4
    JNZ 0x0054a2b0                      ; 0054a2c6
        ;   XREF to: 0054a2b0 (CONDITIONAL_JUMP)  ; LAB_0054a2b0
    POP EDI                             ; 0054a2c8
        ;   Label: LAB_0054a2c8
    JMP 0x005445dc                      ; 0054a2c9
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV DL,0x2c                         ; 0054a2ce
        ;   Label: LAB_0054a2ce
    LEA ESI,[ESP + 0x17a4]              ; 0054a2d0
    MOV AL,byte ptr [ESI]               ; 0054a2d7
        ;   Label: LAB_0054a2d7
    CMP AL,DL                           ; 0054a2d9
    JZ 0x0054a2ef                       ; 0054a2db
        ;   XREF to: 0054a2ef (CONDITIONAL_JUMP)  ; LAB_0054a2ef
    CMP AL,0x0                          ; 0054a2dd
    JZ 0x0054a2ed                       ; 0054a2df
        ;   XREF to: 0054a2ed (CONDITIONAL_JUMP)  ; LAB_0054a2ed
    INC ESI                             ; 0054a2e1
    MOV AL,byte ptr [ESI]               ; 0054a2e2
    CMP AL,DL                           ; 0054a2e4
    JZ 0x0054a2ef                       ; 0054a2e6
        ;   XREF to: 0054a2ef (CONDITIONAL_JUMP)  ; LAB_0054a2ef
    INC ESI                             ; 0054a2e8
    CMP AL,0x0                          ; 0054a2e9
    JNZ 0x0054a2d7                      ; 0054a2eb
        ;   XREF to: 0054a2d7 (CONDITIONAL_JUMP)  ; LAB_0054a2d7
    SUB ESI,ESI                         ; 0054a2ed
        ;   Label: LAB_0054a2ed
    TEST ESI,ESI                        ; 0054a2ef
        ;   Label: LAB_0054a2ef
    SETNZ AL                            ; 0054a2f1
    MOV ESI,0xffffffff                  ; 0054a2f4
    LEA EDI,[ESP + 0x17a4]              ; 0054a2f9
    AND EAX,0xff                        ; 0054a300
    MOV dword ptr [ESP + 0x4918],ESI    ; 0054a305
    MOV ESI,0x5efb91                    ; 0054a30c | DAT_005efb91
    MOV dword ptr [ESP + 0x4940],EAX    ; 0054a311
    PUSH EDI                            ; 0054a318
    SUB ECX,ECX                         ; 0054a319
    DEC ECX                             ; 0054a31b
    MOV AL,0x0                          ; 0054a31c
    SCASB.REPNE ES:EDI                  ; 0054a31e
    DEC EDI                             ; 0054a320
    MOV AL,byte ptr [ESI]               ; 0054a321 | DAT_005efb91 | DAT_005efb93
        ;   Label: LAB_0054a321
    MOV byte ptr [EDI],AL               ; 0054a323
    CMP AL,0x0                          ; 0054a325
    JZ 0x0054a339                       ; 0054a327
        ;   XREF to: 0054a339 (CONDITIONAL_JUMP)  ; LAB_0054a339
    MOV AL,byte ptr [ESI + 0x1]         ; 0054a329 | DAT_005efb92 | = "[^,],%n"
    ADD ESI,0x2                         ; 0054a32c
    MOV byte ptr [EDI + 0x1],AL         ; 0054a32f
    ADD EDI,0x2                         ; 0054a332
    CMP AL,0x0                          ; 0054a335
    JNZ 0x0054a321                      ; 0054a337
        ;   XREF to: 0054a321 (CONDITIONAL_JUMP)  ; LAB_0054a321
    POP EDI                             ; 0054a339
        ;   Label: LAB_0054a339
    LEA EAX,[ESP + 0x4918]              ; 0054a33a
    PUSH EAX                            ; 0054a341
    LEA EAX,[ESP + 0x46ec]              ; 0054a342
    PUSH EAX                            ; 0054a349
    PUSH 0x5efb93                       ; 0054a34a | DAT_005efb93
    LEA EAX,[ESP + 0x17b0]              ; 0054a34f
    PUSH EAX                            ; 0054a356
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 0054a357
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 0054a35c
    CMP dword ptr [ESP + 0x4918],0x1    ; 0054a35f
    JGE 0x0054a392                      ; 0054a367
        ;   XREF to: 0054a392 (CONDITIONAL_JUMP)  ; LAB_0054a392
    MOV ESI,0x5efb9c                    ; 0054a369 | = "Error parsing out camera name"
    MOV EDI,0x1e810b0                   ; 0054a36e
    PUSH EDI                            ; 0054a373 | DAT_01e810b0
    MOV AL,byte ptr [ESI]               ; 0054a374 | = "Error parsing out camera name" | s_Error_parsing_out_camera_005efb9c+2
        ;   Label: LAB_0054a374
    MOV byte ptr [EDI],AL               ; 0054a376 | DAT_01e810b0 | DAT_01e810b2
    CMP AL,0x0                          ; 0054a378
    JZ 0x0054a38c                       ; 0054a37a
        ;   XREF to: 0054a38c (CONDITIONAL_JUMP)  ; LAB_0054a38c
    MOV AL,byte ptr [ESI + 0x1]         ; 0054a37c | s_Error_parsing_out_camera_005efb9c+1 | s_Error_parsing_out_camera_005efb9c+3
    ADD ESI,0x2                         ; 0054a37f
    MOV byte ptr [EDI + 0x1],AL         ; 0054a382 | DAT_01e810b1 | DAT_01e810b3
    ADD EDI,0x2                         ; 0054a385
    CMP AL,0x0                          ; 0054a388
    JNZ 0x0054a374                      ; 0054a38a
        ;   XREF to: 0054a374 (CONDITIONAL_JUMP)  ; LAB_0054a374
    POP EDI                             ; 0054a38c
        ;   Label: LAB_0054a38c
    JMP 0x005445dc                      ; 0054a38d
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EAX,[ESP + 0x46e8]              ; 0054a392
        ;   Label: LAB_0054a392
    PUSH EAX                            ; 0054a399
    CALL core_script.cpp_trimString_FUN_00543240 ; 0054a39a
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 0054a39f
    LEA EAX,[ESP + 0x46e8]              ; 0054a3a2
    PUSH EAX                            ; 0054a3a9
    MOV EAX,[0x00622c18]                ; 0054a3aa | g_CDemonSetPtr
    PUSH EAX                            ; 0054a3af | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_findCameraByName_FUN_0054fba0 ; 0054a3b0
        ;   XREF to: 0054fba0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_findCameraByName_FUN_0054fba0(CDemonSet * this_ptr, char * name)
    MOV EDX,0x501502f9                  ; 0054a3b5
    ADD ESP,0x8                         ; 0054a3ba
    MOV ESI,EAX                         ; 0054a3bd
    MOV ECX,dword ptr [ESP + 0x4940]    ; 0054a3bf
    MOV dword ptr [ESP + 0x24],EDX      ; 0054a3c6
    TEST ECX,ECX                        ; 0054a3ca
    JZ 0x0054a413                       ; 0054a3cc
        ;   XREF to: 0054a413 (CONDITIONAL_JUMP)  ; LAB_0054a413
    LEA EAX,[ESP + 0x24]                ; 0054a3ce
    PUSH EAX                            ; 0054a3d2
    MOV EDI,dword ptr [ESP + 0x491c]    ; 0054a3d3
    LEA EAX,[ESP + 0x17a8]              ; 0054a3da
    PUSH 0x5efbba                       ; 0054a3e1 | DAT_005efbba
    ADD EAX,EDI                         ; 0054a3e6
    PUSH EAX                            ; 0054a3e8
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 0054a3e9
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0xc                         ; 0054a3ee
    FLDZ                                ; 0054a3f1
    FLD float ptr [ESP + 0x24]          ; 0054a3f3
    FSTP double ptr [ESP + 0x18]        ; 0054a3f7
    FCOMP double ptr [ESP + 0x18]       ; 0054a3fb
    FNSTSW AX                           ; 0054a3ff
    SAHF                                ; 0054a401
    JA 0x0054a439                       ; 0054a402
        ;   XREF to: 0054a439 (CONDITIONAL_JUMP)  ; LAB_0054a439
    FLD double ptr [ESP + 0x18]         ; 0054a404
    FCOMP double ptr [0x005efdb7]       ; 0054a408 | DAT_005efdb7
    FNSTSW AX                           ; 0054a40e
    SAHF                                ; 0054a410
    JA 0x0054a439                       ; 0054a411
        ;   XREF to: 0054a439 (CONDITIONAL_JUMP)  ; LAB_0054a439
    CMP dword ptr [0x01e810a8],0x0      ; 0054a413 | DAT_01e810a8
        ;   Label: LAB_0054a413
    JNZ 0x0054450b                      ; 0054a41a
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH dword ptr [ESP + 0x24]         ; 0054a420
    PUSH ESI                            ; 0054a424
    MOV EDX,dword ptr [0x00622c18]      ; 0054a425 | g_CDemonSetPtr
    PUSH EDX                            ; 0054a42b | g_CDemonSetInstance
    CALL core_setdir.cpp_CDemonSet_setPendingCamera_FUN_0055b1e0 ; 0054a42c
        ;   XREF to: 0055b1e0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_setPendingCamera_FUN_0055b1e0(CDemonSet * this_ptr, int camera_index, float hold_time)
    ADD ESP,0xc                         ; 0054a431
    JMP 0x0054450b                      ; 0054a434
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH 0x5efbbd                       ; 0054a439 | = "Invalid hold time value"
        ;   Label: LAB_0054a439
    PUSH 0x1e810b0                      ; 0054a43e | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0054a443
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 0054a448
    JMP 0x005445dc                      ; 0054a44b
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0xc                         ; 0054a450
        ;   Label: LAB_0054a450
    PUSH ESI                            ; 0054a453
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 0054a454
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 0054a459
    PUSH 0x12c                          ; 0054a45c
    MOV dword ptr [ESP + 0x4928],EAX    ; 0054a461
    LEA EAX,[ESP + 0x954]               ; 0054a468
    PUSH EAX                            ; 0054a46f
    LEA EAX,[ESP + 0x492c]              ; 0054a470
    PUSH EAX                            ; 0054a477
    CALL core_script.cpp_parseArgument_FUN_005432d0 ; 0054a478
        ;   XREF to: 005432d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005432d0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0054a47d
    TEST EAX,EAX                        ; 0054a480
    JZ 0x0054a4aa                       ; 0054a482
        ;   XREF to: 0054a4aa (CONDITIONAL_JUMP)  ; LAB_0054a4aa
    MOV EDI,0x1e810b0                   ; 0054a484
        ;   Label: LAB_0054a484
    MOV ESI,EAX                         ; 0054a489
    PUSH EDI                            ; 0054a48b | DAT_01e810b0
    MOV AL,byte ptr [ESI]               ; 0054a48c
        ;   Label: LAB_0054a48c
    MOV byte ptr [EDI],AL               ; 0054a48e | DAT_01e810b0 | DAT_01e810b2
    CMP AL,0x0                          ; 0054a490
    JZ 0x0054a4a4                       ; 0054a492
        ;   XREF to: 0054a4a4 (CONDITIONAL_JUMP)  ; LAB_0054a4a4
    MOV AL,byte ptr [ESI + 0x1]         ; 0054a494
    ADD ESI,0x2                         ; 0054a497
    MOV byte ptr [EDI + 0x1],AL         ; 0054a49a | DAT_01e810b1 | DAT_01e810b3
    ADD EDI,0x2                         ; 0054a49d
    CMP AL,0x0                          ; 0054a4a0
    JNZ 0x0054a48c                      ; 0054a4a2
        ;   XREF to: 0054a48c (CONDITIONAL_JUMP)  ; LAB_0054a48c
    POP EDI                             ; 0054a4a4
        ;   Label: LAB_0054a4a4
    JMP 0x005445dc                      ; 0054a4a5
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EAX,[ESP + 0x491c]              ; 0054a4aa
        ;   Label: LAB_0054a4aa
    PUSH EAX                            ; 0054a4b1
    LEA EAX,[ESP + 0x4924]              ; 0054a4b2
    PUSH EAX                            ; 0054a4b9
    PUSH 0x5efbe2                       ; 0054a4ba | = "%f,%n"
    LEA EAX,[ESP + 0x95c]               ; 0054a4bf
    MOV ECX,0xffffffff                  ; 0054a4c6
    PUSH EAX                            ; 0054a4cb
    MOV dword ptr [ESP + 0x492c],ECX    ; 0054a4cc
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 0054a4d3
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 0054a4d8
    MOV ESI,dword ptr [ESP + 0x491c]    ; 0054a4db
    CMP ESI,0x2                         ; 0054a4e2
    JL 0x0054a551                       ; 0054a4e5
        ;   XREF to: 0054a551 (CONDITIONAL_JUMP)  ; LAB_0054a551
    CMP dword ptr [0x01e810a8],0x0      ; 0054a4e7 | DAT_01e810a8
    JNZ 0x0054450b                      ; 0054a4ee
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EAX,[ESP + 0x950]               ; 0054a4f4
    ADD EAX,ESI                         ; 0054a4fb
    PUSH EAX                            ; 0054a4fd
    LEA EDI,[EBX + 0x50]                ; 0054a4fe
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 0054a501
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 0054a506
    MOV ESI,EAX                         ; 0054a509
    MOV ECX,dword ptr [EBP + 0x18]      ; 0054a50b
    PUSH EDI                            ; 0054a50e
    MOV AL,byte ptr [ESI]               ; 0054a50f
        ;   Label: LAB_0054a50f
    MOV byte ptr [EDI],AL               ; 0054a511
    CMP AL,0x0                          ; 0054a513
    JZ 0x0054a527                       ; 0054a515
        ;   XREF to: 0054a527 (CONDITIONAL_JUMP)  ; LAB_0054a527
    MOV AL,byte ptr [ESI + 0x1]         ; 0054a517
    ADD ESI,0x2                         ; 0054a51a
    MOV byte ptr [EDI + 0x1],AL         ; 0054a51d
    ADD EDI,0x2                         ; 0054a520
    CMP AL,0x0                          ; 0054a523
    JNZ 0x0054a50f                      ; 0054a525
        ;   XREF to: 0054a50f (CONDITIONAL_JUMP)  ; LAB_0054a50f
    POP EDI                             ; 0054a527
        ;   Label: LAB_0054a527
    PUSH ECX                            ; 0054a528
    PUSH dword ptr [ESP + 0x4924]       ; 0054a529
    PUSH EBX                            ; 0054a530
    CALL core_script.cpp_CScript_processTimer_FUN_0054ac20 ; 0054a531
        ;   XREF to: 0054ac20 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_processTimer_FUN_0054ac20(CScript * this_ptr, float delta_time, float * timer_value)
    ADD ESP,0xc                         ; 0054a536
    MOV dword ptr [ESP + 0x47f4],EAX    ; 0054a539
    TEST EAX,EAX                        ; 0054a540
    JLE 0x0054450b                      ; 0054a542
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV byte ptr [EBX + 0x50],0x0       ; 0054a548
    JMP 0x0054450b                      ; 0054a54c
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH 0x5efbe8                       ; 0054a551 | = "Error parsing time value"
        ;   Label: LAB_0054a551
    PUSH 0x1e810b0                      ; 0054a556 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0054a55b
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 0054a560
    JMP 0x005445dc                      ; 0054a563
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0xa                         ; 0054a568
        ;   Label: LAB_0054a568
    PUSH ESI                            ; 0054a56b
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 0054a56c
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 0054a571
    LEA EDX,[ESP + 0x492c]              ; 0054a574
    PUSH EDX                            ; 0054a57b
    LEA EDX,[ESP + 0x2108]              ; 0054a57c
    PUSH EDX                            ; 0054a583
    LEA EDX,[ESP + 0x3624]              ; 0054a584
    PUSH EDX                            ; 0054a58b
    PUSH 0x5efc0c                       ; 0054a58c | = "(%[^,], %[^)])%n"
    MOV ESI,0xffffffff                  ; 0054a591
    PUSH EAX                            ; 0054a596
    MOV dword ptr [ESP + 0x4938],EAX    ; 0054a597
    MOV dword ptr [ESP + 0x4940],ESI    ; 0054a59e
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 0054a5a5
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 0054a5aa
    MOV EDI,dword ptr [ESP + 0x492c]    ; 0054a5ad
    CMP EDI,0x5                         ; 0054a5b4
    JGE 0x0054a5d0                      ; 0054a5b7
        ;   XREF to: 0054a5d0 (CONDITIONAL_JUMP)  ; LAB_0054a5d0
    PUSH 0x5efc1d                       ; 0054a5b9 | = "Error parsing turnToFace command parms"
    PUSH 0x1e810b0                      ; 0054a5be | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0054a5c3
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 0054a5c8
    JMP 0x005445dc                      ; 0054a5cb
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDX,dword ptr [ESP + 0x4924]    ; 0054a5d0
        ;   Label: LAB_0054a5d0
    LEA EAX,[ESP + 0x361c]              ; 0054a5d7
    ADD EDX,EDI                         ; 0054a5de
    PUSH EAX                            ; 0054a5e0
    MOV dword ptr [ESP + 0x4928],EDX    ; 0054a5e1
    CALL core_script.cpp_trimString_FUN_00543240 ; 0054a5e8
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 0054a5ed
    LEA EAX,[ESP + 0x2104]              ; 0054a5f0
    PUSH EAX                            ; 0054a5f7
    CALL core_script.cpp_trimString_FUN_00543240 ; 0054a5f8
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 0054a5fd
    PUSH 0x7c6344                       ; 0054a600 | g_CCharacterClassInfo
    MOV ECX,dword ptr [0x007c637c]      ; 0054a605 | g_CCharacterClassInfo.name_hash
    PUSH ECX                            ; 0054a60b
    LEA EAX,[ESP + 0x3624]              ; 0054a60c
    PUSH EAX                            ; 0054a613
    CALL core_script.cpp_getActor_FUN_005433c0 ; 0054a614
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV ESI,EAX                         ; 0054a619
    ADD ESP,0xc                         ; 0054a61b
    TEST EAX,EAX                        ; 0054a61e
    JNZ 0x0054a634                      ; 0054a620
        ;   XREF to: 0054a634 (CONDITIONAL_JUMP)  ; LAB_0054a634
    CMP dword ptr [0x01e818bc],0x0      ; 0054a622 | DAT_01e818bc
    JNZ 0x00544524                      ; 0054a629
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 0054a62f
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    PUSH 0x7c2ff8                       ; 0054a634 | g_CDemonActorClassInfo
        ;   Label: LAB_0054a634
    MOV EDI,dword ptr [0x007c3030]      ; 0054a639 | g_CDemonActorClassInfo.name_hash
    PUSH EDI                            ; 0054a63f
    LEA EAX,[ESP + 0x210c]              ; 0054a640
    PUSH EAX                            ; 0054a647
    CALL core_script.cpp_getActor_FUN_005433c0 ; 0054a648
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0054a64d
    TEST EAX,EAX                        ; 0054a650
    JNZ 0x0054a666                      ; 0054a652
        ;   XREF to: 0054a666 (CONDITIONAL_JUMP)  ; LAB_0054a666
    CMP dword ptr [0x01e818bc],0x0      ; 0054a654 | DAT_01e818bc
    JNZ 0x00544524                      ; 0054a65b
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 0054a661
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    CMP dword ptr [0x01e810a8],0x0      ; 0054a666 | DAT_01e810a8
        ;   Label: LAB_0054a666
    JNZ 0x0054450b                      ; 0054a66d
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH EAX                            ; 0054a673
    MOV EDX,dword ptr [ESI + 0x154]     ; 0054a674
    PUSH ESI                            ; 0054a67a
    CALL dword ptr [EDX + 0x134]        ; 0054a67b
    ADD ESP,0x8                         ; 0054a681
    JMP 0x0054450b                      ; 0054a684
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0x4                         ; 0054a689
        ;   Label: LAB_0054a689
    PUSH ESI                            ; 0054a68c
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 0054a68d
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 0054a692
    LEA EDX,[ESP + 0x4930]              ; 0054a695
    PUSH EDX                            ; 0054a69c
    LEA EDX,[ESP + 0x4938]              ; 0054a69d
    PUSH EDX                            ; 0054a6a4
    PUSH 0x5efc49                       ; 0054a6a5 | = "(%f)%n"
    MOV EDI,0xffffffff                  ; 0054a6aa
    PUSH EAX                            ; 0054a6af
    MOV dword ptr [ESP + 0x4934],EAX    ; 0054a6b0
    MOV dword ptr [ESP + 0x4940],EDI    ; 0054a6b7
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 0054a6be
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 0054a6c3
    MOV EAX,dword ptr [ESP + 0x4930]    ; 0054a6c6
    CMP EAX,0x1                         ; 0054a6cd
    JL 0x0054a710                       ; 0054a6d0
        ;   XREF to: 0054a710 (CONDITIONAL_JUMP)  ; LAB_0054a710
    MOV EDX,dword ptr [ESP + 0x4924]    ; 0054a6d2
    ADD EDX,EAX                         ; 0054a6d9
    MOV ECX,dword ptr [0x01e810a8]      ; 0054a6db | DAT_01e810a8
    MOV dword ptr [ESP + 0x4924],EDX    ; 0054a6e1
    TEST ECX,ECX                        ; 0054a6e8
    JNZ 0x0054450b                      ; 0054a6ea
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV ESI,dword ptr [EBP + 0x18]      ; 0054a6f0
    PUSH ESI                            ; 0054a6f3
    PUSH dword ptr [ESP + 0x4938]       ; 0054a6f4
    PUSH EBX                            ; 0054a6fb
    CALL core_script.cpp_CScript_processTimer_FUN_0054ac20 ; 0054a6fc
        ;   XREF to: 0054ac20 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_processTimer_FUN_0054ac20(CScript * this_ptr, float delta_time, float * timer_value)
    ADD ESP,0xc                         ; 0054a701
    MOV dword ptr [ESP + 0x47f4],EAX    ; 0054a704
    JMP 0x0054450b                      ; 0054a70b
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH 0x5efc50                       ; 0054a710 | = "Error parsing time value on wait stat..."
        ;   Label: LAB_0054a710
    PUSH 0x1e810b0                      ; 0054a715 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0054a71a
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 0054a71f
    JMP 0x005445dc                      ; 0054a722
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    ADD ESI,0x7                         ; 0054a727
        ;   Label: LAB_0054a727
    PUSH ESI                            ; 0054a72a
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 0054a72b
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 0054a730
    MOV dword ptr [ESP + 0x4924],EAX    ; 0054a733
    LEA EAX,[ESP + 0x3f7c]              ; 0054a73a
    PUSH EAX                            ; 0054a741
    LEA EAX,[ESP + 0x4928]              ; 0054a742
    PUSH EAX                            ; 0054a749
    CALL core_script.cpp_parseConditionExpr_FUN_00543380 ; 0054a74a
        ;   XREF to: 00543380 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseConditionExpr_FUN_00543380(char * * cursor, char * out_buffer)
    ADD ESP,0x8                         ; 0054a74f
    TEST EAX,EAX                        ; 0054a752
    JNZ 0x0054a484                      ; 0054a754
        ;   XREF to: 0054a484 (CONDITIONAL_JUMP)  ; LAB_0054a484
    CMP dword ptr [0x01e810a8],0x0      ; 0054a75a | DAT_01e810a8
    JNZ 0x0054450b                      ; 0054a761
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    LEA EAX,[ESP + 0x3f7c]              ; 0054a767
    PUSH EAX                            ; 0054a76e
    MOV EAX,[0x0061b4d0]                ; 0054a76f | DAT_0061b4d0
    PUSH EAX                            ; 0054a774
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0054a775
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0054a77a
    TEST EAX,EAX                        ; 0054a77d
    JNZ 0x0054450b                      ; 0054a77f
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    MOV dword ptr [ESP + 0x47f4],EAX    ; 0054a785
    JMP 0x0054450b                      ; 0054a78c
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    ADD ESI,0x6                         ; 0054a791
        ;   Label: LAB_0054a791
    PUSH ESI                            ; 0054a794
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 0054a795
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 0054a79a
    LEA EDX,[ESP + 0x4938]              ; 0054a79d
    PUSH EDX                            ; 0054a7a4
    LEA EDX,[ESP + 0x28d8]              ; 0054a7a5
    PUSH EDX                            ; 0054a7ac
    LEA EDX,[ESP + 0x274c]              ; 0054a7ad
    PUSH EDX                            ; 0054a7b4
    PUSH 0x5efc8a                       ; 0054a7b5 | = "(%[^,], %[^,)] %n"
    MOV ECX,0xffffffff                  ; 0054a7ba
    PUSH EAX                            ; 0054a7bf
    MOV dword ptr [ESP + 0x4938],EAX    ; 0054a7c0
    MOV dword ptr [ESP + 0x494c],ECX    ; 0054a7c7
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 0054a7ce
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 0054a7d3
    MOV ESI,dword ptr [ESP + 0x4938]    ; 0054a7d6
    CMP ESI,0x5                         ; 0054a7dd
    JGE 0x0054a7f9                      ; 0054a7e0
        ;   XREF to: 0054a7f9 (CONDITIONAL_JUMP)  ; LAB_0054a7f9
    PUSH 0x5efc9c                       ; 0054a7e2 | = "Error parsing walkTo command parms"
    PUSH 0x1e810b0                      ; 0054a7e7 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0054a7ec
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 0054a7f1
    JMP 0x005445dc                      ; 0054a7f4
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    MOV EDI,dword ptr [ESP + 0x4924]    ; 0054a7f9
        ;   Label: LAB_0054a7f9
    LEA EAX,[ESP + 0x2744]              ; 0054a800
    ADD EDI,ESI                         ; 0054a807
    PUSH EAX                            ; 0054a809
    MOV dword ptr [ESP + 0x4928],EDI    ; 0054a80a
    CALL core_script.cpp_trimString_FUN_00543240 ; 0054a811
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 0054a816
    LEA EAX,[ESP + 0x28d4]              ; 0054a819
    PUSH EAX                            ; 0054a820
    CALL core_script.cpp_trimString_FUN_00543240 ; 0054a821
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 0054a826
    XOR EAX,EAX                         ; 0054a829
    MOV dword ptr [ESP + 0x493c],EAX    ; 0054a82b
    MOV EAX,dword ptr [ESP + 0x4924]    ; 0054a832
    CMP byte ptr [EAX],0x2c             ; 0054a839
    JNZ 0x0054a882                      ; 0054a83c
        ;   XREF to: 0054a882 (CONDITIONAL_JUMP)  ; LAB_0054a882
    LEA EAX,[ESP + 0x4938]              ; 0054a83e
    PUSH EAX                            ; 0054a845
    LEA EAX,[ESP + 0x4940]              ; 0054a846
    PUSH EAX                            ; 0054a84d
    PUSH 0x5efcbf                       ; 0054a84e | = ",%f %n"
    MOV ECX,dword ptr [ESP + 0x4930]    ; 0054a853
    MOV EDX,0xffffffff                  ; 0054a85a
    PUSH ECX                            ; 0054a85f
    MOV dword ptr [ESP + 0x4948],EDX    ; 0054a860
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 0054a867
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 0054a86c
    MOV ESI,dword ptr [ESP + 0x4938]    ; 0054a86f
    CMP ESI,0x1                         ; 0054a876
    JL 0x0054a8c0                       ; 0054a879
        ;   XREF to: 0054a8c0 (CONDITIONAL_JUMP)  ; LAB_0054a8c0
    ADD dword ptr [ESP + 0x4924],ESI    ; 0054a87b
    MOV dword ptr [ESP + 0x47e0],0x501502f9 ; 0054a882
        ;   Label: LAB_0054a882
    MOV EAX,dword ptr [ESP + 0x4924]    ; 0054a88d
    CMP byte ptr [EAX],0x2c             ; 0054a894
    JZ 0x0054a8d7                       ; 0054a897
        ;   XREF to: 0054a8d7 (CONDITIONAL_JUMP)  ; LAB_0054a8d7
    MOV EAX,dword ptr [ESP + 0x4924]    ; 0054a899
        ;   Label: LAB_0054a899
    CMP byte ptr [EAX],0x29             ; 0054a8a0
    JZ 0x0054a937                       ; 0054a8a3
        ;   XREF to: 0054a937 (CONDITIONAL_JUMP)  ; LAB_0054a937
    PUSH 0x5efd13                       ; 0054a8a9 | = "Missing closing parenthesis on walkTo..."
    PUSH 0x1e810b0                      ; 0054a8ae | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0054a8b3
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 0054a8b8
    JMP 0x005445dc                      ; 0054a8bb
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    PUSH 0x5efcc6                       ; 0054a8c0 | = "Error parsing walkTo command parms"
        ;   Label: LAB_0054a8c0
    PUSH 0x1e810b0                      ; 0054a8c5 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0054a8ca
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 0054a8cf
    JMP 0x005445dc                      ; 0054a8d2
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    LEA EAX,[ESP + 0x4938]              ; 0054a8d7
        ;   Label: LAB_0054a8d7
    PUSH EAX                            ; 0054a8de
    LEA EAX,[ESP + 0x47e4]              ; 0054a8df
    PUSH EAX                            ; 0054a8e6
    PUSH 0x5efce9                       ; 0054a8e7 | = ",%f %n"
    MOV ECX,dword ptr [ESP + 0x4930]    ; 0054a8ec
    MOV EDX,0xffffffff                  ; 0054a8f3
    PUSH ECX                            ; 0054a8f8
    MOV dword ptr [ESP + 0x4948],EDX    ; 0054a8f9
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 0054a900
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 0054a905
    MOV ESI,dword ptr [ESP + 0x4938]    ; 0054a908
    CMP ESI,0x1                         ; 0054a90f
    JL 0x0054a920                       ; 0054a912
        ;   XREF to: 0054a920 (CONDITIONAL_JUMP)  ; LAB_0054a920
    ADD dword ptr [ESP + 0x4924],ESI    ; 0054a914
    JMP 0x0054a899                      ; 0054a91b
        ;   XREF to: 0054a899 (UNCONDITIONAL_JUMP)  ; LAB_0054a899
    PUSH 0x5efcf0                       ; 0054a920 | = "Error parsing walkTo command parms"
        ;   Label: LAB_0054a920
    PUSH 0x1e810b0                      ; 0054a925 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0054a92a
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 0054a92f
    JMP 0x005445dc                      ; 0054a932
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    PUSH 0x7c6344                       ; 0054a937 | g_CCharacterClassInfo
        ;   Label: LAB_0054a937
    MOV EAX,[0x007c637c]                ; 0054a93c | g_CCharacterClassInfo.name_hash
    MOV EDX,dword ptr [ESP + 0x4928]    ; 0054a941
    PUSH EAX                            ; 0054a948
    LEA EAX,[ESP + 0x274c]              ; 0054a949
    INC EDX                             ; 0054a950
    PUSH EAX                            ; 0054a951
    MOV dword ptr [ESP + 0x4930],EDX    ; 0054a952
    CALL core_script.cpp_getActor_FUN_005433c0 ; 0054a959
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    MOV ESI,EAX                         ; 0054a95e
    ADD ESP,0xc                         ; 0054a960
    TEST EAX,EAX                        ; 0054a963
    JNZ 0x0054a979                      ; 0054a965
        ;   XREF to: 0054a979 (CONDITIONAL_JUMP)  ; LAB_0054a979
    CMP dword ptr [0x01e818bc],0x0      ; 0054a967 | DAT_01e818bc
    JNZ 0x00544524                      ; 0054a96e
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 0054a974
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    PUSH 0x7c2ff8                       ; 0054a979 | g_CDemonActorClassInfo
        ;   Label: LAB_0054a979
    MOV ECX,dword ptr [0x007c3030]      ; 0054a97e | g_CDemonActorClassInfo.name_hash
    PUSH ECX                            ; 0054a984
    LEA EAX,[ESP + 0x28dc]              ; 0054a985
    PUSH EAX                            ; 0054a98c
    CALL core_script.cpp_getActor_FUN_005433c0 ; 0054a98d
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005433c0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0054a992
    TEST EAX,EAX                        ; 0054a995
    JNZ 0x0054a9ab                      ; 0054a997
        ;   XREF to: 0054a9ab (CONDITIONAL_JUMP)  ; LAB_0054a9ab
    CMP dword ptr [0x01e818bc],0x0      ; 0054a999 | DAT_01e818bc
    JNZ 0x00544524                      ; 0054a9a0
        ;   XREF to: 00544524 (CONDITIONAL_JUMP)  ; LAB_00544524
    JMP 0x005445dc                      ; 0054a9a6
        ;   XREF to: 005445dc (UNCONDITIONAL_JUMP)  ; LAB_005445dc
    CMP dword ptr [0x01e810a8],0x0      ; 0054a9ab | DAT_01e810a8
        ;   Label: LAB_0054a9ab
    JNZ 0x0054450b                      ; 0054a9b2
        ;   XREF to: 0054450b (CONDITIONAL_JUMP)  ; LAB_0054450b
    PUSH dword ptr [ESP + 0x47e0]       ; 0054a9b8
    PUSH dword ptr [ESP + 0x4940]       ; 0054a9bf
    PUSH EAX                            ; 0054a9c6
    MOV EDX,dword ptr [ESI + 0x154]     ; 0054a9c7
    PUSH ESI                            ; 0054a9cd
    CALL dword ptr [EDX + 0x130]        ; 0054a9ce
    ADD ESP,0x10                        ; 0054a9d4
    JMP 0x0054450b                      ; 0054a9d7
        ;   XREF to: 0054450b (UNCONDITIONAL_JUMP)  ; LAB_0054450b
    MOV EDI,dword ptr [ESP + 0x47f0]    ; 0054a9dc
        ;   Label: LAB_0054a9dc
    PUSH EDI                            ; 0054a9e3
    PUSH EAX                            ; 0054a9e4 | DAT_005ee486
    PUSH 0x5efd5e                       ; 0054a9e5 | = "Extra characters \"%s\" on line %d"
    PUSH 0x1e810b0                      ; 0054a9ea | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0054a9ef
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EDX,0xffffffff                  ; 0054a9f4
    ADD ESP,0x10                        ; 0054a9f9
    MOV dword ptr [ESP + 0x47f4],EDX    ; 0054a9fc
    MOV EAX,dword ptr [ESP + 0x47f4]    ; 0054aa03
    MOV ESP,EBP                         ; 0054aa0a
    POP EBP                             ; 0054aa0c
    POP EDI                             ; 0054aa0d
    POP ESI                             ; 0054aa0e
    POP EBX                             ; 0054aa0f
    RET                                 ; 0054aa10
    PUSH 0x5efd7f                       ; 0054aa11 | = "Overrun past the end of the script."
        ;   Label: LAB_0054aa11
    PUSH 0x1e810b0                      ; 0054aa16 | DAT_01e810b0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0054aa1b
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV ECX,0xffffffff                  ; 0054aa20
    ADD ESP,0x8                         ; 0054aa25
    MOV dword ptr [ESP + 0x47f4],ECX    ; 0054aa28
    MOV EAX,dword ptr [ESP + 0x47f4]    ; 0054aa2f
    MOV ESP,EBP                         ; 0054aa36
    POP EBP                             ; 0054aa38
    POP EDI                             ; 0054aa39
    POP ESI                             ; 0054aa3a
    POP EBX                             ; 0054aa3b
    RET                                 ; 0054aa3c
    TEST ECX,ECX                        ; 0054aa3d
        ;   Label: LAB_0054aa3d
    JL 0x00544558                       ; 0054aa3f
        ;   XREF to: 00544558 (CONDITIONAL_JUMP)  ; LAB_00544558
    MOV EAX,dword ptr [ESP + 0x4928]    ; 0054aa45
    MOV dword ptr [EBX + 0x44],EAX      ; 0054aa4c
    MOV EAX,dword ptr [ESP + 0x47f4]    ; 0054aa4f
    MOV ESP,EBP                         ; 0054aa56
    POP EBP                             ; 0054aa58
    POP EDI                             ; 0054aa59
    POP ESI                             ; 0054aa5a
    POP EBX                             ; 0054aa5b
    RET                                 ; 0054aa5c


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_CScript_step_FUN_00529a70(CScript *this_ptr,float *time_remaining)
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
; undefined        Stack[-0x3aac]:1  local_3aac
; undefined1       Stack[-0x3aab]:1  local_3aab
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
; undefined1       Stack[-0x1ef3]:1  local_1ef3
; undefined        Stack[-0x1e2c]:1  local_1e2c
; undefined        Stack[-0x1d64]:1  local_1d64
; undefined        Stack[-0x1c9c]:1  local_1c9c
; undefined        Stack[-0x1bd4]:1  local_1bd4
; undefined        Stack[-0x1b0c]:1  local_1b0c
; undefined        Stack[-0x1a44]:1  local_1a44
; undefined        Stack[-0x197c]:1  local_197c
; undefined        Stack[-0x18b4]:1  local_18b4
; undefined        Stack[-0x17ec]:1  local_17ec
; undefined1       Stack[-0x17eb]:1  local_17eb
; undefined        Stack[-0x1724]:1  local_1724
; undefined        Stack[-0x165c]:1  local_165c
; undefined        Stack[-0x1594]:1  local_1594
; undefined        Stack[-0x14cc]:1  local_14cc
; undefined        Stack[-0x1404]:1  local_1404
; undefined        Stack[-0x133c]:1  local_133c
; undefined        Stack[-0x1274]:1  local_1274
; undefined        Stack[-0x11ac]:1  local_11ac
; undefined        Stack[-0x10e4]:1  local_10e4
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
; undefined        Stack[-0xaa4]:1  local_aa4
; undefined        Stack[-0xa40]:1  local_a40
; undefined        Stack[-0x9dc]:1  local_9dc
; undefined        Stack[-0x978]:1  local_978
; undefined1       Stack[-0x977]:1  local_977
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
; undefined        Stack[-0x4c8]:1  local_4c8
; undefined1       Stack[-0x4c7]:1  local_4c7
; undefined        Stack[-0x464]:1  local_464
; undefined        Stack[-0x400]:1  local_400
; undefined        Stack[-0x39c]:1  local_39c
; undefined        Stack[-0x338]:1  local_338
; undefined1       Stack[-0x337]:1  local_337
; undefined        Stack[-0x2d4]:1  local_2d4
; undefined        Stack[-0x270]:1  local_270
; undefined        Stack[-0x20c]:1  local_20c
; undefined        Stack[-0x1e4]:1  local_1e4
; undefined        Stack[-0x1d8]:1  local_1d8
; undefined        Stack[-0x1cc]:1  local_1cc
; undefined        Stack[-0x1c0]:1  local_1c0
; undefined        Stack[-0x1b4]:1  local_1b4
; undefined        Stack[-0x1a8]:1  local_1a8
; undefined        Stack[-0x1a4]:1  local_1a4
; undefined        Stack[-0x1a0]:1  local_1a0
; undefined        Stack[-0x19c]:1  local_19c
; undefined4       Stack[-0x198]:4  local_198
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
;   core_script.cpp_FUN_00528e00 at 00528eb1
;   core_script.cpp_FUN_00529710 at 0052975d
;   core_script.cpp_FUN_00529920 at 00529996
;   core_script.cpp_FUN_00530530 at 0053058d
;
; Referenced Globals:
;   TerminatedCString s_core_script_cpp_005ce01e
;   TerminatedCString s_CScript_step_Invalid_ins_005ce031
;   TerminatedCString s_no_error_message_provide_005ce0cb
;   undefined4 s_no_error_message_provide_005ce0cb+1
;   undefined4 s_no_error_message_provide_005ce0cb+2
;   undefined4 s_no_error_message_provide_005ce0cb+3
;   undefined1 DAT_005ce0e7
;   TerminatedCString s_Invalid_label_s_on_line_005ce0e8
;   TerminatedCString s_core_script_cpp_005ce103
;   TerminatedCString s_Internal_script_error_ch_005ce116
;   TerminatedCString s_Duplicate_label_s_on_lin_005ce14a
;   undefined1 DAT_005ce170
;   TerminatedCString s_syntaxCheckOn_005ce171
;   undefined1 DAT_005ce17f
;   TerminatedCString s_syntaxCheckOff_005ce180
;   ... and 376 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
;   core_actor.cpp_CVector3f_ctor_FUN_0040d220
;   core_actor.cpp_FUN_0040c790
;   core_actor.cpp_FUN_0040ce40
;   core_actor.cpp_FUN_0040d230
;   core_bodypart.cpp_FUN_00414550
;   core_bodypart.cpp_FUN_004157c0
;   core_bodypart.cpp_FUN_00416c10
;   core_bugs.cpp_FUN_004242d0
;   core_charactr.cpp_FUN_0042d860
;   core_charactr.cpp_FUN_0042d8a0
;   core_charactr.cpp_FUN_00430590
;   core_charactr.cpp_FUN_00432090
;   core_charactr.cpp_FUN_00433120
;   ... and 80 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529a70
        ;   Label: core_script.cpp_CScript_step_FUN_00529a70
    PUSH ESI                            ; 00529a71
    PUSH EDI                            ; 00529a72
    PUSH EBP                            ; 00529a73
    MOV EBP,ESP                         ; 00529a74
    SUB ESP,0x4948                      ; 00529a76
    AND ESP,0xfffffff8                  ; 00529a7c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00529a7f
    MOV EDX,dword ptr [EBX + 0x44]      ; 00529a82
    TEST EDX,EDX                        ; 00529a85
    JL 0x00529a8e                       ; 00529a87
        ;   XREF to: 00529a8e (CONDITIONAL_JUMP)  ; LAB_00529a8e
    CMP EDX,dword ptr [EBX + 0x2c]      ; 00529a89
    JL 0x00529ab1                       ; 00529a8c
        ;   XREF to: 00529ab1 (CONDITIONAL_JUMP)  ; LAB_00529ab1
    MOV ESI,0x5ce01e                    ; 00529a8e | = "..\\core\\script.cpp"
        ;   Label: LAB_00529a8e
    MOV EDI,0x47c                       ; 00529a93
    PUSH 0x5ce031                       ; 00529a98 | = "CScript::step - Invalid instruction p..."
    MOV dword ptr [0x01d71de0],ESI      ; 00529a9d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00529aa3 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00529aa9
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00529aae
    MOV ESI,0x5ce0cb                    ; 00529ab1 | = "(no error message provided)"
        ;   Label: LAB_00529ab1
    MOV EDI,0x1ed6810                   ; 00529ab6
    PUSH EDI                            ; 00529abb | DAT_01ed6810
    MOV AL,byte ptr [ESI]               ; 00529abc | = "(no error message provided)" | s_no_error_message_provide_005ce0cb+2
        ;   Label: LAB_00529abc
    MOV byte ptr [EDI],AL               ; 00529abe | DAT_01ed6810 | DAT_01ed6812
    CMP AL,0x0                          ; 00529ac0
    JZ 0x00529ad4                       ; 00529ac2
        ;   XREF to: 00529ad4 (CONDITIONAL_JUMP)  ; LAB_00529ad4
    MOV AL,byte ptr [ESI + 0x1]         ; 00529ac4 | s_no_error_message_provide_005ce0cb+1 | s_no_error_message_provide_005ce0cb+3
    ADD ESI,0x2                         ; 00529ac7
    MOV byte ptr [EDI + 0x1],AL         ; 00529aca | DAT_01ed6811 | DAT_01ed6813
    ADD EDI,0x2                         ; 00529acd
    CMP AL,0x0                          ; 00529ad0
    JNZ 0x00529abc                      ; 00529ad2
        ;   XREF to: 00529abc (CONDITIONAL_JUMP)  ; LAB_00529abc
    POP EDI                             ; 00529ad4
        ;   Label: LAB_00529ad4
    MOV EAX,dword ptr [EBX + 0x44]      ; 00529ad5
    MOV EDX,dword ptr [EBX + 0x30]      ; 00529ad8
    MOV ESI,dword ptr [EDX + EAX*0x8 + 0x4] ; 00529adb
    MOV EAX,dword ptr [EDX + EAX*0x8]   ; 00529adf
    MOV dword ptr [ESP + 0x47f4],EAX    ; 00529ae2
    MOV EAX,dword ptr [EBX + 0x44]      ; 00529ae9
    MOV dword ptr [ESP + 0x47e8],EAX    ; 00529aec
    MOV dword ptr [ESP + 0x47e4],0x1    ; 00529af3
    MOV EAX,dword ptr [ESP + 0x47e8]    ; 00529afe
    INC EAX                             ; 00529b05
    MOV dword ptr [EBX + 0x44],EAX      ; 00529b06
    MOV AH,byte ptr [ESI]               ; 00529b09
    CMP AH,0x7b                         ; 00529b0b
    JNZ 0x00529b76                      ; 00529b0e
        ;   XREF to: 00529b76 (CONDITIONAL_JUMP)  ; LAB_00529b76
    MOV dword ptr [ESP + 0x47f8],0x5ce0e7 ; 00529b10 | DAT_005ce0e7
        ;   Label: LAB_00529b10
    CMP dword ptr [0x01ed6808],0x2      ; 00529b1b | DAT_01ed6808
        ;   Label: LAB_00529b1b
    JZ 0x00529b34                       ; 00529b22
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    MOV EAX,dword ptr [ESP + 0x47f8]    ; 00529b24
    CMP byte ptr [EAX],0x0              ; 00529b2b | DAT_005ce0e7 | DAT_005ce170 | DAT_005cec5d
    JNZ 0x005300c3                      ; 00529b2e
        ;   XREF to: 005300c3 (CONDITIONAL_JUMP)  ; LAB_005300c3
    MOV ECX,dword ptr [ESP + 0x47e4]    ; 00529b34
        ;   Label: LAB_00529b34
    CMP ECX,0x1                         ; 00529b3b
    JNZ 0x00530124                      ; 00529b3e
        ;   XREF to: 00530124 (CONDITIONAL_JUMP)  ; LAB_00530124
    MOV dword ptr [EBX + 0x4c],0xbf800000 ; 00529b44
    MOV EDI,dword ptr [0x01ed6808]      ; 00529b4b | DAT_01ed6808
    MOV dword ptr [EBX + 0x48],0xbf800000 ; 00529b51
    TEST EDI,EDI                        ; 00529b58
    JNZ 0x00529b68                      ; 00529b5a
        ;   XREF to: 00529b68 (CONDITIONAL_JUMP)  ; LAB_00529b68
    MOV EDX,dword ptr [EBX + 0x2c]      ; 00529b5c
    CMP EDX,dword ptr [EBX + 0x44]      ; 00529b5f
    JLE 0x005300f8                      ; 00529b62
        ;   XREF to: 005300f8 (CONDITIONAL_JUMP)  ; LAB_005300f8
    MOV EAX,dword ptr [ESP + 0x47e4]    ; 00529b68
        ;   Label: LAB_00529b68
    MOV ESP,EBP                         ; 00529b6f
    POP EBP                             ; 00529b71
    POP EDI                             ; 00529b72
    POP ESI                             ; 00529b73
    POP EBX                             ; 00529b74
    RET                                 ; 00529b75
    CMP AH,0x7d                         ; 00529b76
        ;   Label: LAB_00529b76
    JZ 0x00529b10                       ; 00529b79
        ;   XREF to: 00529b10 (CONDITIONAL_JUMP)  ; LAB_00529b10
    CMP AH,0x3a                         ; 00529b7b
    JNZ 0x00529c8e                      ; 00529b7e
        ;   XREF to: 00529c8e (CONDITIONAL_JUMP)  ; LAB_00529c8e
    INC ESI                             ; 00529b84
    PUSH ESI                            ; 00529b85
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 00529b86
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    MOV ESI,dword ptr [0x01ed6808]      ; 00529b8b | DAT_01ed6808
    ADD ESP,0x4                         ; 00529b91
    MOV EDX,EAX                         ; 00529b94
    MOV dword ptr [ESP + 0x47f8],EAX    ; 00529b96
    TEST ESI,ESI                        ; 00529b9d
    JZ 0x00529c2c                       ; 00529b9f
        ;   XREF to: 00529c2c (CONDITIONAL_JUMP)  ; LAB_00529c2c
    CMP byte ptr [EAX],0x0              ; 00529ba5
    JZ 0x00529bc5                       ; 00529ba8
        ;   XREF to: 00529bc5 (CONDITIONAL_JUMP)  ; LAB_00529bc5
    MOV DL,byte ptr [EAX]               ; 00529baa
        ;   Label: LAB_00529baa
    INC DL                              ; 00529bac
    AND EDX,0xff                        ; 00529bae
    TEST byte ptr [EDX + 0x6074b8],0xe0 ; 00529bb4 | DAT_006074b8
    JZ 0x00529c05                       ; 00529bbb
        ;   XREF to: 00529c05 (CONDITIONAL_JUMP)  ; LAB_00529c05
    MOV CH,byte ptr [EAX + 0x1]         ; 00529bbd
        ;   Label: LAB_00529bbd
    INC EAX                             ; 00529bc0
    TEST CH,CH                          ; 00529bc1
    JNZ 0x00529baa                      ; 00529bc3
        ;   XREF to: 00529baa (CONDITIONAL_JUMP)  ; LAB_00529baa
    CMP byte ptr [EAX],0x0              ; 00529bc5
        ;   Label: LAB_00529bc5
    JZ 0x00529c0c                       ; 00529bc8
        ;   XREF to: 00529c0c (CONDITIONAL_JUMP)  ; LAB_00529c0c
    MOV EDI,dword ptr [ESP + 0x47f4]    ; 00529bca
    PUSH EDI                            ; 00529bd1
    MOV EAX,dword ptr [ESP + 0x47fc]    ; 00529bd2
    PUSH EAX                            ; 00529bd9
    PUSH 0x5ce0e8                       ; 00529bda | = "Invalid label \"%s\" on line"
    PUSH 0x1ed6810                      ; 00529bdf | DAT_01ed6810
        ;   Label: LAB_00529bdf
    CALL crt_unknown.c_FUN_005a28c0     ; 00529be4
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 00529be9
    MOV dword ptr [ESP + 0x47e4],0xffffffff ; 00529bec
        ;   Label: LAB_00529bec
    MOV EAX,dword ptr [ESP + 0x47e4]    ; 00529bf7
    MOV ESP,EBP                         ; 00529bfe
    POP EBP                             ; 00529c00
    POP EDI                             ; 00529c01
    POP ESI                             ; 00529c02
    POP EBX                             ; 00529c03
    RET                                 ; 00529c04
    CMP byte ptr [EAX],0x5f             ; 00529c05
        ;   Label: LAB_00529c05
    JNZ 0x00529bc5                      ; 00529c08
        ;   XREF to: 00529bc5 (CONDITIONAL_JUMP)  ; LAB_00529bc5
    JMP 0x00529bbd                      ; 00529c0a
        ;   XREF to: 00529bbd (UNCONDITIONAL_JUMP)  ; LAB_00529bbd
    MOV ECX,dword ptr [ESP + 0x47f8]    ; 00529c0c
        ;   Label: LAB_00529c0c
    PUSH ECX                            ; 00529c13
    PUSH EBX                            ; 00529c14
    CALL core_script.cpp_FUN_005303b0   ; 00529c15
        ;   XREF to: 005303b0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_FUN_005303b0(CScript * this_ptr, char * label_name)
    ADD ESP,0x8                         ; 00529c1a
    MOV ESI,EAX                         ; 00529c1d
    TEST EAX,EAX                        ; 00529c1f
    JL 0x00529c3c                       ; 00529c21
        ;   XREF to: 00529c3c (CONDITIONAL_JUMP)  ; LAB_00529c3c
    CMP ESI,dword ptr [ESP + 0x47e8]    ; 00529c23
        ;   Label: LAB_00529c23
    JNZ 0x00529c60                      ; 00529c2a
        ;   XREF to: 00529c60 (CONDITIONAL_JUMP)  ; LAB_00529c60
    MOV dword ptr [ESP + 0x47f8],0x5ce170 ; 00529c2c | DAT_005ce170
        ;   Label: LAB_00529c2c
    JMP 0x00529b1b                      ; 00529c37
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EDI,0x5ce103                    ; 00529c3c | = "..\\core\\script.cpp"
        ;   Label: LAB_00529c3c
    MOV EAX,0x4ae                       ; 00529c41
    PUSH 0x5ce116                       ; 00529c46 | = "Internal script error checking for du..."
    MOV dword ptr [0x01d71de0],EDI      ; 00529c4b | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00529c51 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00529c56
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00529c5b
    JMP 0x00529c23                      ; 00529c5e
        ;   XREF to: 00529c23 (UNCONDITIONAL_JUMP)  ; LAB_00529c23
    MOV EAX,dword ptr [EBX + 0x30]      ; 00529c60
        ;   Label: LAB_00529c60
    MOV ECX,dword ptr [EAX + ESI*0x8]   ; 00529c63
    PUSH ECX                            ; 00529c66
    MOV EBX,dword ptr [ESP + 0x47f8]    ; 00529c67
    PUSH EBX                            ; 00529c6e
    MOV ESI,dword ptr [ESP + 0x4800]    ; 00529c6f
    PUSH ESI                            ; 00529c76
    PUSH 0x5ce14a                       ; 00529c77 | = "Duplicate label %s on lines %d and %d"
    PUSH 0x1ed6810                      ; 00529c7c | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 00529c81
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x14                        ; 00529c86
    JMP 0x00529bec                      ; 00529c89
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    PUSH 0xd                            ; 00529c8e
        ;   Label: LAB_00529c8e
    PUSH 0x5ce171                       ; 00529c90 | = "syntaxCheckOn"
    PUSH ESI                            ; 00529c95
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00529c96
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00529c9b
    TEST EAX,EAX                        ; 00529c9e
    JNZ 0x00529cb9                      ; 00529ca0
        ;   XREF to: 00529cb9 (CONDITIONAL_JUMP)  ; LAB_00529cb9
    MOV AL,byte ptr [ESI + 0xd]         ; 00529ca2
    INC AL                              ; 00529ca5
    AND EAX,0xff                        ; 00529ca7
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 00529cac | DAT_006074b8
    JZ 0x0052b22e                       ; 00529cb3
        ;   XREF to: 0052b22e (CONDITIONAL_JUMP)  ; LAB_0052b22e
    PUSH 0xe                            ; 00529cb9
        ;   Label: LAB_00529cb9
    PUSH 0x5ce180                       ; 00529cbb | = "syntaxCheckOff"
    PUSH ESI                            ; 00529cc0
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00529cc1
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00529cc6
    TEST EAX,EAX                        ; 00529cc9
    JNZ 0x00529ce4                      ; 00529ccb
        ;   XREF to: 00529ce4 (CONDITIONAL_JUMP)  ; LAB_00529ce4
    MOV AL,byte ptr [ESI + 0xe]         ; 00529ccd
    INC AL                              ; 00529cd0
    AND EAX,0xff                        ; 00529cd2
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 00529cd7 | DAT_006074b8
    JZ 0x0052b251                       ; 00529cde
        ;   XREF to: 0052b251 (CONDITIONAL_JUMP)  ; LAB_0052b251
    CMP dword ptr [0x01ed6808],0x2      ; 00529ce4 | DAT_01ed6808
        ;   Label: LAB_00529ce4
    JZ 0x00529b1b                       ; 00529ceb
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH 0xe                            ; 00529cf1
    PUSH 0x5ce190                       ; 00529cf3 | = "activateGadget"
    PUSH ESI                            ; 00529cf8
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00529cf9
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00529cfe
    TEST EAX,EAX                        ; 00529d01
    JNZ 0x00529d1c                      ; 00529d03
        ;   XREF to: 00529d1c (CONDITIONAL_JUMP)  ; LAB_00529d1c
    MOV AL,byte ptr [ESI + 0xe]         ; 00529d05
    INC AL                              ; 00529d08
    AND EAX,0xff                        ; 00529d0a
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 00529d0f | DAT_006074b8
    JZ 0x0052b274                       ; 00529d16
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0xe                            ; 00529d1c
        ;   Label: LAB_00529d1c
    PUSH 0x5ce19f                       ; 00529d1e | = "activatePuzzle"
    PUSH ESI                            ; 00529d23
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00529d24
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00529d29
    TEST EAX,EAX                        ; 00529d2c
    JNZ 0x00529d47                      ; 00529d2e
        ;   XREF to: 00529d47 (CONDITIONAL_JUMP)  ; LAB_00529d47
    MOV AL,byte ptr [ESI + 0xe]         ; 00529d30
    INC AL                              ; 00529d33
    AND EAX,0xff                        ; 00529d35
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 00529d3a | DAT_006074b8
    JZ 0x0052b274                       ; 00529d41
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0x11                           ; 00529d47
        ;   Label: LAB_00529d47
    PUSH 0x5ce1ae                       ; 00529d49 | = "addFieldNotesTask"
    PUSH ESI                            ; 00529d4e
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00529d4f
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00529d54
    TEST EAX,EAX                        ; 00529d57
    JNZ 0x00529d72                      ; 00529d59
        ;   XREF to: 00529d72 (CONDITIONAL_JUMP)  ; LAB_00529d72
    MOV AL,byte ptr [ESI + 0x11]        ; 00529d5b
    INC AL                              ; 00529d5e
    AND EAX,0xff                        ; 00529d60
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 00529d65 | DAT_006074b8
    JZ 0x0052b274                       ; 00529d6c
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0x12                           ; 00529d72
        ;   Label: LAB_00529d72
    PUSH 0x5ce1c0                       ; 00529d74 | = "advanceLightFilter"
    PUSH ESI                            ; 00529d79
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00529d7a
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00529d7f
    TEST EAX,EAX                        ; 00529d82
    JNZ 0x00529d9d                      ; 00529d84
        ;   XREF to: 00529d9d (CONDITIONAL_JUMP)  ; LAB_00529d9d
    MOV AL,byte ptr [ESI + 0x12]        ; 00529d86
    INC AL                              ; 00529d89
    AND EAX,0xff                        ; 00529d8b
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 00529d90 | DAT_006074b8
    JZ 0x0052b274                       ; 00529d97
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0xe                            ; 00529d9d
        ;   Label: LAB_00529d9d
    PUSH 0x5ce1d3                       ; 00529d9f | = "beginCarryItem"
    PUSH ESI                            ; 00529da4
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00529da5
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00529daa
    TEST EAX,EAX                        ; 00529dad
    JNZ 0x00529dc8                      ; 00529daf
        ;   XREF to: 00529dc8 (CONDITIONAL_JUMP)  ; LAB_00529dc8
    MOV AL,byte ptr [ESI + 0xe]         ; 00529db1
    INC AL                              ; 00529db4
    AND EAX,0xff                        ; 00529db6
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 00529dbb | DAT_006074b8
    JZ 0x0052b274                       ; 00529dc2
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0x16                           ; 00529dc8
        ;   Label: LAB_00529dc8
    PUSH 0x5ce1e2                       ; 00529dca | = "completeFieldNotesTask"
    PUSH ESI                            ; 00529dcf
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00529dd0
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00529dd5
    TEST EAX,EAX                        ; 00529dd8
    JNZ 0x00529df3                      ; 00529dda
        ;   XREF to: 00529df3 (CONDITIONAL_JUMP)  ; LAB_00529df3
    MOV AL,byte ptr [ESI + 0x16]        ; 00529ddc
    INC AL                              ; 00529ddf
    AND EAX,0xff                        ; 00529de1
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 00529de6 | DAT_006074b8
    JZ 0x0052b274                       ; 00529ded
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0xf                            ; 00529df3
        ;   Label: LAB_00529df3
    PUSH 0x5ce1f9                       ; 00529df5 | = "createExplosion"
    PUSH ESI                            ; 00529dfa
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00529dfb
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00529e00
    TEST EAX,EAX                        ; 00529e03
    JNZ 0x00529e1e                      ; 00529e05
        ;   XREF to: 00529e1e (CONDITIONAL_JUMP)  ; LAB_00529e1e
    MOV AL,byte ptr [ESI + 0xf]         ; 00529e07
    INC AL                              ; 00529e0a
    AND EAX,0xff                        ; 00529e0c
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 00529e11 | DAT_006074b8
    JZ 0x0052b274                       ; 00529e18
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0xb                            ; 00529e1e
        ;   Label: LAB_00529e1e
    PUSH 0x5ce209                       ; 00529e20 | = "deleteActor"
    PUSH ESI                            ; 00529e25
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00529e26
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00529e2b
    TEST EAX,EAX                        ; 00529e2e
    JNZ 0x00529e49                      ; 00529e30
        ;   XREF to: 00529e49 (CONDITIONAL_JUMP)  ; LAB_00529e49
    MOV AL,byte ptr [ESI + 0xb]         ; 00529e32
    INC AL                              ; 00529e35
    AND EAX,0xff                        ; 00529e37
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 00529e3c | DAT_006074b8
    JZ 0x0052b274                       ; 00529e43
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0xd                            ; 00529e49
        ;   Label: LAB_00529e49
    PUSH 0x5ce215                       ; 00529e4b | = "displayBitmap"
    PUSH ESI                            ; 00529e50
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00529e51
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00529e56
    TEST EAX,EAX                        ; 00529e59
    JNZ 0x00529e74                      ; 00529e5b
        ;   XREF to: 00529e74 (CONDITIONAL_JUMP)  ; LAB_00529e74
    MOV AL,byte ptr [ESI + 0xd]         ; 00529e5d
    INC AL                              ; 00529e60
    AND EAX,0xff                        ; 00529e62
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 00529e67 | DAT_006074b8
    JZ 0x0052b274                       ; 00529e6e
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0x11                           ; 00529e74
        ;   Label: LAB_00529e74
    PUSH 0x5ce223                       ; 00529e76 | = "displayFieldNotes"
    PUSH ESI                            ; 00529e7b
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00529e7c
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00529e81
    TEST EAX,EAX                        ; 00529e84
    JNZ 0x00529e9f                      ; 00529e86
        ;   XREF to: 00529e9f (CONDITIONAL_JUMP)  ; LAB_00529e9f
    MOV AL,byte ptr [ESI + 0x11]        ; 00529e88
    INC AL                              ; 00529e8b
    AND EAX,0xff                        ; 00529e8d
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 00529e92 | DAT_006074b8
    JZ 0x0052b274                       ; 00529e99
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0x8                            ; 00529e9f
        ;   Label: LAB_00529e9f
    PUSH 0x5ce235                       ; 00529ea1 | = "dropItem"
    PUSH ESI                            ; 00529ea6
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00529ea7
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00529eac
    TEST EAX,EAX                        ; 00529eaf
    JNZ 0x00529eca                      ; 00529eb1
        ;   XREF to: 00529eca (CONDITIONAL_JUMP)  ; LAB_00529eca
    MOV AL,byte ptr [ESI + 0x8]         ; 00529eb3
    INC AL                              ; 00529eb6
    AND EAX,0xff                        ; 00529eb8
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 00529ebd | DAT_006074b8
    JZ 0x0052b274                       ; 00529ec4
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0xd                            ; 00529eca
        ;   Label: LAB_00529eca
    PUSH 0x5ce23e                       ; 00529ecc | = "hurtCharacter"
    PUSH ESI                            ; 00529ed1
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00529ed2
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00529ed7
    TEST EAX,EAX                        ; 00529eda
    JNZ 0x00529ef5                      ; 00529edc
        ;   XREF to: 00529ef5 (CONDITIONAL_JUMP)  ; LAB_00529ef5
    MOV AL,byte ptr [ESI + 0xd]         ; 00529ede
    INC AL                              ; 00529ee1
    AND EAX,0xff                        ; 00529ee3
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 00529ee8 | DAT_006074b8
    JZ 0x0052b274                       ; 00529eef
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0xa                            ; 00529ef5
        ;   Label: LAB_00529ef5
    PUSH 0x5ce24c                       ; 00529ef7 | = "incCounter"
    PUSH ESI                            ; 00529efc
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00529efd
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00529f02
    TEST EAX,EAX                        ; 00529f05
    JNZ 0x00529f20                      ; 00529f07
        ;   XREF to: 00529f20 (CONDITIONAL_JUMP)  ; LAB_00529f20
    MOV AL,byte ptr [ESI + 0xa]         ; 00529f09
    INC AL                              ; 00529f0c
    AND EAX,0xff                        ; 00529f0e
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 00529f13 | DAT_006074b8
    JZ 0x0052b274                       ; 00529f1a
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0xb                            ; 00529f20
        ;   Label: LAB_00529f20
    PUSH 0x5ce257                       ; 00529f22 | = "deccCounter"
    PUSH ESI                            ; 00529f27
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00529f28
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00529f2d
    TEST EAX,EAX                        ; 00529f30
    JNZ 0x00529f4b                      ; 00529f32
        ;   XREF to: 00529f4b (CONDITIONAL_JUMP)  ; LAB_00529f4b
    MOV AL,byte ptr [ESI + 0xb]         ; 00529f34
    INC AL                              ; 00529f37
    AND EAX,0xff                        ; 00529f39
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 00529f3e | DAT_006074b8
    JZ 0x0052b274                       ; 00529f45
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0x15                           ; 00529f4b
        ;   Label: LAB_00529f4b
    PUSH 0x5ce263                       ; 00529f4d | = "enableFieldNotesEntry"
    PUSH ESI                            ; 00529f52
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00529f53
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00529f58
    TEST EAX,EAX                        ; 00529f5b
    JNZ 0x00529f76                      ; 00529f5d
        ;   XREF to: 00529f76 (CONDITIONAL_JUMP)  ; LAB_00529f76
    MOV AL,byte ptr [ESI + 0x15]        ; 00529f5f
    INC AL                              ; 00529f62
    AND EAX,0xff                        ; 00529f64
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 00529f69 | DAT_006074b8
    JZ 0x0052b274                       ; 00529f70
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0x1a                           ; 00529f76
        ;   Label: LAB_00529f76
    PUSH 0x5ce279                       ; 00529f78 | = "enableFieldNotesAnnotation"
    PUSH ESI                            ; 00529f7d
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00529f7e
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00529f83
    TEST EAX,EAX                        ; 00529f86
    JNZ 0x00529fa1                      ; 00529f88
        ;   XREF to: 00529fa1 (CONDITIONAL_JUMP)  ; LAB_00529fa1
    MOV AL,byte ptr [ESI + 0x1a]        ; 00529f8a
    INC AL                              ; 00529f8d
    AND EAX,0xff                        ; 00529f8f
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 00529f94 | DAT_006074b8
    JZ 0x0052b274                       ; 00529f9b
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0x7                            ; 00529fa1
        ;   Label: LAB_00529fa1
    PUSH 0x5ce294                       ; 00529fa3 | = "fadeSfx"
    PUSH ESI                            ; 00529fa8
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00529fa9
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00529fae
    TEST EAX,EAX                        ; 00529fb1
    JNZ 0x00529fcc                      ; 00529fb3
        ;   XREF to: 00529fcc (CONDITIONAL_JUMP)  ; LAB_00529fcc
    MOV AL,byte ptr [ESI + 0x7]         ; 00529fb5
    INC AL                              ; 00529fb8
    AND EAX,0xff                        ; 00529fba
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 00529fbf | DAT_006074b8
    JZ 0x0052b274                       ; 00529fc6
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0x10                           ; 00529fcc
        ;   Label: LAB_00529fcc
    PUSH 0x5ce29c                       ; 00529fce | = "fadeAmbientSound"
    PUSH ESI                            ; 00529fd3
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00529fd4
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00529fd9
    TEST EAX,EAX                        ; 00529fdc
    JNZ 0x00529ff7                      ; 00529fde
        ;   XREF to: 00529ff7 (CONDITIONAL_JUMP)  ; LAB_00529ff7
    MOV AL,byte ptr [ESI + 0x10]        ; 00529fe0
    INC AL                              ; 00529fe3
    AND EAX,0xff                        ; 00529fe5
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 00529fea | DAT_006074b8
    JZ 0x0052b274                       ; 00529ff1
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0x6                            ; 00529ff7
        ;   Label: LAB_00529ff7
    PUSH 0x5ce2ad                       ; 00529ff9 | = "flagOn"
    PUSH ESI                            ; 00529ffe
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00529fff
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a004
    TEST EAX,EAX                        ; 0052a007
    JNZ 0x0052a022                      ; 0052a009
        ;   XREF to: 0052a022 (CONDITIONAL_JUMP)  ; LAB_0052a022
    MOV AL,byte ptr [ESI + 0x6]         ; 0052a00b
    INC AL                              ; 0052a00e
    AND EAX,0xff                        ; 0052a010
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a015 | DAT_006074b8
    JZ 0x0052b274                       ; 0052a01c
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0x7                            ; 0052a022
        ;   Label: LAB_0052a022
    PUSH 0x5ce2b4                       ; 0052a024 | = "flagOff"
    PUSH ESI                            ; 0052a029
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a02a
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a02f
    TEST EAX,EAX                        ; 0052a032
    JNZ 0x0052a04d                      ; 0052a034
        ;   XREF to: 0052a04d (CONDITIONAL_JUMP)  ; LAB_0052a04d
    MOV AL,byte ptr [ESI + 0x7]         ; 0052a036
    INC AL                              ; 0052a039
    AND EAX,0xff                        ; 0052a03b
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a040 | DAT_006074b8
    JZ 0x0052b274                       ; 0052a047
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0xa                            ; 0052a04d
        ;   Label: LAB_0052a04d
    PUSH 0x5ce2bc                       ; 0052a04f | = "gameFlagOn"
    PUSH ESI                            ; 0052a054
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a055
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a05a
    TEST EAX,EAX                        ; 0052a05d
    JNZ 0x0052a078                      ; 0052a05f
        ;   XREF to: 0052a078 (CONDITIONAL_JUMP)  ; LAB_0052a078
    MOV AL,byte ptr [ESI + 0xa]         ; 0052a061
    INC AL                              ; 0052a064
    AND EAX,0xff                        ; 0052a066
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a06b | DAT_006074b8
    JZ 0x0052b274                       ; 0052a072
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0xb                            ; 0052a078
        ;   Label: LAB_0052a078
    PUSH 0x5ce2c7                       ; 0052a07a | = "gameFlagOff"
    PUSH ESI                            ; 0052a07f
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a080
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a085
    TEST EAX,EAX                        ; 0052a088
    JNZ 0x0052a0a3                      ; 0052a08a
        ;   XREF to: 0052a0a3 (CONDITIONAL_JUMP)  ; LAB_0052a0a3
    MOV AL,byte ptr [ESI + 0xb]         ; 0052a08c
    INC AL                              ; 0052a08f
    AND EAX,0xff                        ; 0052a091
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a096 | DAT_006074b8
    JZ 0x0052b274                       ; 0052a09d
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0xd                            ; 0052a0a3
        ;   Label: LAB_0052a0a3
    PUSH 0x5ce2d3                       ; 0052a0a5 | = "killCharacter"
    PUSH ESI                            ; 0052a0aa
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a0ab
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a0b0
    TEST EAX,EAX                        ; 0052a0b3
    JNZ 0x0052a0ce                      ; 0052a0b5
        ;   XREF to: 0052a0ce (CONDITIONAL_JUMP)  ; LAB_0052a0ce
    MOV AL,byte ptr [ESI + 0xd]         ; 0052a0b7
    INC AL                              ; 0052a0ba
    AND EAX,0xff                        ; 0052a0bc
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a0c1 | DAT_006074b8
    JZ 0x0052b274                       ; 0052a0c8
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0xe                            ; 0052a0ce
        ;   Label: LAB_0052a0ce
    PUSH 0x5ce2e1                       ; 0052a0d0 | = "killAllEnemies"
    PUSH ESI                            ; 0052a0d5
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a0d6
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a0db
    TEST EAX,EAX                        ; 0052a0de
    JNZ 0x0052a0f9                      ; 0052a0e0
        ;   XREF to: 0052a0f9 (CONDITIONAL_JUMP)  ; LAB_0052a0f9
    MOV AL,byte ptr [ESI + 0xe]         ; 0052a0e2
    INC AL                              ; 0052a0e5
    AND EAX,0xff                        ; 0052a0e7
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a0ec | DAT_006074b8
    JZ 0x0052b274                       ; 0052a0f3
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0x8                            ; 0052a0f9
        ;   Label: LAB_0052a0f9
    PUSH 0x5ce2f0                       ; 0052a0fb | = "killHero"
    PUSH ESI                            ; 0052a100
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a101
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a106
    TEST EAX,EAX                        ; 0052a109
    JNZ 0x0052a124                      ; 0052a10b
        ;   XREF to: 0052a124 (CONDITIONAL_JUMP)  ; LAB_0052a124
    MOV AL,byte ptr [ESI + 0x8]         ; 0052a10d
    INC AL                              ; 0052a110
    AND EAX,0xff                        ; 0052a112
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a117 | DAT_006074b8
    JZ 0x0052b274                       ; 0052a11e
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0x7                            ; 0052a124
        ;   Label: LAB_0052a124
    PUSH 0x5ce2f9                       ; 0052a126 | = "killSfx"
    PUSH ESI                            ; 0052a12b
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a12c
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a131
    TEST EAX,EAX                        ; 0052a134
    JNZ 0x0052a14f                      ; 0052a136
        ;   XREF to: 0052a14f (CONDITIONAL_JUMP)  ; LAB_0052a14f
    MOV AL,byte ptr [ESI + 0x7]         ; 0052a138
    INC AL                              ; 0052a13b
    AND EAX,0xff                        ; 0052a13d
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a142 | DAT_006074b8
    JZ 0x0052b274                       ; 0052a149
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0x9                            ; 0052a14f
        ;   Label: LAB_0052a14f
    PUSH 0x5ce301                       ; 0052a151 | = "lightning"
    PUSH ESI                            ; 0052a156
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a157
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a15c
    TEST EAX,EAX                        ; 0052a15f
    JNZ 0x0052a17a                      ; 0052a161
        ;   XREF to: 0052a17a (CONDITIONAL_JUMP)  ; LAB_0052a17a
    MOV AL,byte ptr [ESI + 0x9]         ; 0052a163
    INC AL                              ; 0052a166
    AND EAX,0xff                        ; 0052a168
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a16d | DAT_006074b8
    JZ 0x0052b274                       ; 0052a174
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0x9                            ; 0052a17a
        ;   Label: LAB_0052a17a
    PUSH 0x5ce30b                       ; 0052a17c | = "playMusic"
    PUSH ESI                            ; 0052a181
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a182
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a187
    TEST EAX,EAX                        ; 0052a18a
    JNZ 0x0052a1a5                      ; 0052a18c
        ;   XREF to: 0052a1a5 (CONDITIONAL_JUMP)  ; LAB_0052a1a5
    MOV AL,byte ptr [ESI + 0x9]         ; 0052a18e
    INC AL                              ; 0052a191
    AND EAX,0xff                        ; 0052a193
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a198 | DAT_006074b8
    JZ 0x0052b274                       ; 0052a19f
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0x7                            ; 0052a1a5
        ;   Label: LAB_0052a1a5
    PUSH 0x5ce315                       ; 0052a1a7 | = "playSfx"
    PUSH ESI                            ; 0052a1ac
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a1ad
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a1b2
    TEST EAX,EAX                        ; 0052a1b5
    JNZ 0x0052a1d0                      ; 0052a1b7
        ;   XREF to: 0052a1d0 (CONDITIONAL_JUMP)  ; LAB_0052a1d0
    MOV AL,byte ptr [ESI + 0x7]         ; 0052a1b9
    INC AL                              ; 0052a1bc
    AND EAX,0xff                        ; 0052a1be
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a1c3 | DAT_006074b8
    JZ 0x0052b274                       ; 0052a1ca
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0x9                            ; 0052a1d0
        ;   Label: LAB_0052a1d0
    PUSH 0x5ce31d                       ; 0052a1d2 | = "resetGore"
    PUSH ESI                            ; 0052a1d7
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a1d8
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a1dd
    TEST EAX,EAX                        ; 0052a1e0
    JNZ 0x0052a1fb                      ; 0052a1e2
        ;   XREF to: 0052a1fb (CONDITIONAL_JUMP)  ; LAB_0052a1fb
    MOV AL,byte ptr [ESI + 0x9]         ; 0052a1e4
    INC AL                              ; 0052a1e7
    AND EAX,0xff                        ; 0052a1e9
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a1ee | DAT_006074b8
    JZ 0x0052b274                       ; 0052a1f5
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0xb                            ; 0052a1fb
        ;   Label: LAB_0052a1fb
    PUSH 0x5ce327                       ; 0052a1fd | = "restorePrye"
    PUSH ESI                            ; 0052a202
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a203
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a208
    TEST EAX,EAX                        ; 0052a20b
    JNZ 0x0052a226                      ; 0052a20d
        ;   XREF to: 0052a226 (CONDITIONAL_JUMP)  ; LAB_0052a226
    MOV AL,byte ptr [ESI + 0xb]         ; 0052a20f
    INC AL                              ; 0052a212
    AND EAX,0xff                        ; 0052a214
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a219 | DAT_006074b8
    JZ 0x0052b274                       ; 0052a220
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0xc                            ; 0052a226
        ;   Label: LAB_0052a226
    PUSH 0x5ce333                       ; 0052a228 | = "setActorBool"
    PUSH ESI                            ; 0052a22d
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a22e
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a233
    TEST EAX,EAX                        ; 0052a236
    JNZ 0x0052a251                      ; 0052a238
        ;   XREF to: 0052a251 (CONDITIONAL_JUMP)  ; LAB_0052a251
    MOV AL,byte ptr [ESI + 0xc]         ; 0052a23a
    INC AL                              ; 0052a23d
    AND EAX,0xff                        ; 0052a23f
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a244 | DAT_006074b8
    JZ 0x0052b274                       ; 0052a24b
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0x10                           ; 0052a251
        ;   Label: LAB_0052a251
    PUSH 0x5ce340                       ; 0052a253 | = "setCameraAmbient"
    PUSH ESI                            ; 0052a258
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a259
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a25e
    TEST EAX,EAX                        ; 0052a261
    JNZ 0x0052a27c                      ; 0052a263
        ;   XREF to: 0052a27c (CONDITIONAL_JUMP)  ; LAB_0052a27c
    MOV AL,byte ptr [ESI + 0x10]        ; 0052a265
    INC AL                              ; 0052a268
    AND EAX,0xff                        ; 0052a26a
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a26f | DAT_006074b8
    JZ 0x0052b274                       ; 0052a276
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0xa                            ; 0052a27c
        ;   Label: LAB_0052a27c
    PUSH 0x5ce351                       ; 0052a27e | = "setCounter"
    PUSH ESI                            ; 0052a283
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a284
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a289
    TEST EAX,EAX                        ; 0052a28c
    JNZ 0x0052a2a7                      ; 0052a28e
        ;   XREF to: 0052a2a7 (CONDITIONAL_JUMP)  ; LAB_0052a2a7
    MOV AL,byte ptr [ESI + 0xa]         ; 0052a290
    INC AL                              ; 0052a293
    AND EAX,0xff                        ; 0052a295
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a29a | DAT_006074b8
    JZ 0x0052b274                       ; 0052a2a1
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0xc                            ; 0052a2a7
        ;   Label: LAB_0052a2a7
    PUSH 0x5ce35c                       ; 0052a2a9 | = "setDoorState"
    PUSH ESI                            ; 0052a2ae
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a2af
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a2b4
    TEST EAX,EAX                        ; 0052a2b7
    JNZ 0x0052a2d2                      ; 0052a2b9
        ;   XREF to: 0052a2d2 (CONDITIONAL_JUMP)  ; LAB_0052a2d2
    MOV AL,byte ptr [ESI + 0xc]         ; 0052a2bb
    INC AL                              ; 0052a2be
    AND EAX,0xff                        ; 0052a2c0
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a2c5 | DAT_006074b8
    JZ 0x0052b274                       ; 0052a2cc
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0xf                            ; 0052a2d2
        ;   Label: LAB_0052a2d2
    PUSH 0x5ce369                       ; 0052a2d4 | = "setGroupAmbient"
    PUSH ESI                            ; 0052a2d9
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a2da
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a2df
    TEST EAX,EAX                        ; 0052a2e2
    JNZ 0x0052a2fd                      ; 0052a2e4
        ;   XREF to: 0052a2fd (CONDITIONAL_JUMP)  ; LAB_0052a2fd
    MOV AL,byte ptr [ESI + 0xf]         ; 0052a2e6
    INC AL                              ; 0052a2e9
    AND EAX,0xff                        ; 0052a2eb
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a2f0 | DAT_006074b8
    JZ 0x0052b274                       ; 0052a2f7
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0x13                           ; 0052a2fd
        ;   Label: LAB_0052a2fd
    PUSH 0x5ce379                       ; 0052a2ff | = "setLightFilterFrame"
    PUSH ESI                            ; 0052a304
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a305
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a30a
    TEST EAX,EAX                        ; 0052a30d
    JNZ 0x0052a328                      ; 0052a30f
        ;   XREF to: 0052a328 (CONDITIONAL_JUMP)  ; LAB_0052a328
    MOV AL,byte ptr [ESI + 0x13]        ; 0052a311
    INC AL                              ; 0052a314
    AND EAX,0xff                        ; 0052a316
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a31b | DAT_006074b8
    JZ 0x0052b274                       ; 0052a322
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0xd                            ; 0052a328
        ;   Label: LAB_0052a328
    PUSH 0x5ce38d                       ; 0052a32a | = "setLeverState"
    PUSH ESI                            ; 0052a32f
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a330
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a335
    TEST EAX,EAX                        ; 0052a338
    JNZ 0x0052a353                      ; 0052a33a
        ;   XREF to: 0052a353 (CONDITIONAL_JUMP)  ; LAB_0052a353
    MOV AL,byte ptr [ESI + 0xd]         ; 0052a33c
    INC AL                              ; 0052a33f
    AND EAX,0xff                        ; 0052a341
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a346 | DAT_006074b8
    JZ 0x0052b274                       ; 0052a34d
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0xd                            ; 0052a353
        ;   Label: LAB_0052a353
    PUSH 0x5ce39b                       ; 0052a355 | = "setModelState"
    PUSH ESI                            ; 0052a35a
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a35b
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a360
    TEST EAX,EAX                        ; 0052a363
    JNZ 0x0052a37e                      ; 0052a365
        ;   XREF to: 0052a37e (CONDITIONAL_JUMP)  ; LAB_0052a37e
    MOV AL,byte ptr [ESI + 0xd]         ; 0052a367
    INC AL                              ; 0052a36a
    AND EAX,0xff                        ; 0052a36c
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a371 | DAT_006074b8
    JZ 0x0052b274                       ; 0052a378
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0xb                            ; 0052a37e
        ;   Label: LAB_0052a37e
    PUSH 0x5ce3a9                       ; 0052a380 | = "setSunlight"
    PUSH ESI                            ; 0052a385
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a386
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a38b
    TEST EAX,EAX                        ; 0052a38e
    JNZ 0x0052a3a9                      ; 0052a390
        ;   XREF to: 0052a3a9 (CONDITIONAL_JUMP)  ; LAB_0052a3a9
    MOV AL,byte ptr [ESI + 0xb]         ; 0052a392
    INC AL                              ; 0052a395
    AND EAX,0xff                        ; 0052a397
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a39c | DAT_006074b8
    JZ 0x0052b274                       ; 0052a3a3
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0x8                            ; 0052a3a9
        ;   Label: LAB_0052a3a9
    PUSH 0x5ce3b5                       ; 0052a3ab | = "setTimer"
    PUSH ESI                            ; 0052a3b0
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a3b1
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a3b6
    TEST EAX,EAX                        ; 0052a3b9
    JNZ 0x0052a3d4                      ; 0052a3bb
        ;   XREF to: 0052a3d4 (CONDITIONAL_JUMP)  ; LAB_0052a3d4
    MOV AL,byte ptr [ESI + 0x8]         ; 0052a3bd
    INC AL                              ; 0052a3c0
    AND EAX,0xff                        ; 0052a3c2
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a3c7 | DAT_006074b8
    JZ 0x0052b274                       ; 0052a3ce
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0xb                            ; 0052a3d4
        ;   Label: LAB_0052a3d4
    PUSH 0x5ce3be                       ; 0052a3d6 | = "setEndTimer"
    PUSH ESI                            ; 0052a3db
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a3dc
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a3e1
    TEST EAX,EAX                        ; 0052a3e4
    JNZ 0x0052a3ff                      ; 0052a3e6
        ;   XREF to: 0052a3ff (CONDITIONAL_JUMP)  ; LAB_0052a3ff
    MOV AL,byte ptr [ESI + 0xb]         ; 0052a3e8
    INC AL                              ; 0052a3eb
    AND EAX,0xff                        ; 0052a3ed
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a3f2 | DAT_006074b8
    JZ 0x0052b274                       ; 0052a3f9
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0xa                            ; 0052a3ff
        ;   Label: LAB_0052a3ff
    PUSH 0x5ce3ca                       ; 0052a401 | = "setWeather"
    PUSH ESI                            ; 0052a406
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a407
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a40c
    TEST EAX,EAX                        ; 0052a40f
    JNZ 0x0052a42a                      ; 0052a411
        ;   XREF to: 0052a42a (CONDITIONAL_JUMP)  ; LAB_0052a42a
    MOV AL,byte ptr [ESI + 0xa]         ; 0052a413
    INC AL                              ; 0052a416
    AND EAX,0xff                        ; 0052a418
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a41d | DAT_006074b8
    JZ 0x0052b274                       ; 0052a424
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0xb                            ; 0052a42a
        ;   Label: LAB_0052a42a
    PUSH 0x5ce3d5                       ; 0052a42c | = "shakeScreen"
    PUSH ESI                            ; 0052a431
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a432
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a437
    TEST EAX,EAX                        ; 0052a43a
    JNZ 0x0052a455                      ; 0052a43c
        ;   XREF to: 0052a455 (CONDITIONAL_JUMP)  ; LAB_0052a455
    MOV AL,byte ptr [ESI + 0xb]         ; 0052a43e
    INC AL                              ; 0052a441
    AND EAX,0xff                        ; 0052a443
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a448 | DAT_006074b8
    JZ 0x0052b274                       ; 0052a44f
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0x11                           ; 0052a455
        ;   Label: LAB_0052a455
    PUSH 0x5ce3e1                       ; 0052a457 | = "slamModelToMotion"
    PUSH ESI                            ; 0052a45c
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a45d
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a462
    TEST EAX,EAX                        ; 0052a465
    JNZ 0x0052a480                      ; 0052a467
        ;   XREF to: 0052a480 (CONDITIONAL_JUMP)  ; LAB_0052a480
    MOV AL,byte ptr [ESI + 0x11]        ; 0052a469
    INC AL                              ; 0052a46c
    AND EAX,0xff                        ; 0052a46e
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a473 | DAT_006074b8
    JZ 0x0052b274                       ; 0052a47a
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0x15                           ; 0052a480
        ;   Label: LAB_0052a480
    PUSH 0x5ce3f3                       ; 0052a482 | = "turnToFieldNotesEntry"
    PUSH ESI                            ; 0052a487
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a488
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a48d
    TEST EAX,EAX                        ; 0052a490
    JNZ 0x0052a4ab                      ; 0052a492
        ;   XREF to: 0052a4ab (CONDITIONAL_JUMP)  ; LAB_0052a4ab
    MOV AL,byte ptr [ESI + 0x15]        ; 0052a494
    INC AL                              ; 0052a497
    AND EAX,0xff                        ; 0052a499
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a49e | DAT_006074b8
    JZ 0x0052b274                       ; 0052a4a5
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0x6                            ; 0052a4ab
        ;   Label: LAB_0052a4ab
    PUSH 0x5ce409                       ; 0052a4ad | = "warpTo"
    PUSH ESI                            ; 0052a4b2
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a4b3
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a4b8
    TEST EAX,EAX                        ; 0052a4bb
    JNZ 0x0052a4d6                      ; 0052a4bd
        ;   XREF to: 0052a4d6 (CONDITIONAL_JUMP)  ; LAB_0052a4d6
    MOV AL,byte ptr [ESI + 0x6]         ; 0052a4bf
    INC AL                              ; 0052a4c2
    AND EAX,0xff                        ; 0052a4c4
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a4c9 | DAT_006074b8
    JZ 0x0052b274                       ; 0052a4d0
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0xb                            ; 0052a4d6
        ;   Label: LAB_0052a4d6
    PUSH 0x5ce410                       ; 0052a4d8 | = "warpToMulti"
    PUSH ESI                            ; 0052a4dd
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a4de
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a4e3
    TEST EAX,EAX                        ; 0052a4e6
    JNZ 0x0052a501                      ; 0052a4e8
        ;   XREF to: 0052a501 (CONDITIONAL_JUMP)  ; LAB_0052a501
    MOV AL,byte ptr [ESI + 0xb]         ; 0052a4ea
    INC AL                              ; 0052a4ed
    AND EAX,0xff                        ; 0052a4ef
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a4f4 | DAT_006074b8
    JZ 0x0052b274                       ; 0052a4fb
        ;   XREF to: 0052b274 (CONDITIONAL_JUMP)  ; LAB_0052b274
    PUSH 0x12                           ; 0052a501
        ;   Label: LAB_0052a501
    PUSH 0x5ce41d                       ; 0052a503 | = "addItemToInventory"
    PUSH ESI                            ; 0052a508
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a509
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a50e
    TEST EAX,EAX                        ; 0052a511
    JNZ 0x0052a52c                      ; 0052a513
        ;   XREF to: 0052a52c (CONDITIONAL_JUMP)  ; LAB_0052a52c
    MOV AL,byte ptr [ESI + 0x12]        ; 0052a515
    INC AL                              ; 0052a518
    AND EAX,0xff                        ; 0052a51a
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a51f | DAT_006074b8
    JZ 0x0052b2d6                       ; 0052a526
        ;   XREF to: 0052b2d6 (CONDITIONAL_JUMP)  ; LAB_0052b2d6
    PUSH 0xe                            ; 0052a52c
        ;   Label: LAB_0052a52c
    PUSH 0x5ce472                       ; 0052a52e | = "addLightFilter"
    PUSH ESI                            ; 0052a533
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a534
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a539
    TEST EAX,EAX                        ; 0052a53c
    JNZ 0x0052a557                      ; 0052a53e
        ;   XREF to: 0052a557 (CONDITIONAL_JUMP)  ; LAB_0052a557
    MOV AL,byte ptr [ESI + 0xe]         ; 0052a540
    INC AL                              ; 0052a543
    AND EAX,0xff                        ; 0052a545
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a54a | DAT_006074b8
    JZ 0x0052b3f8                       ; 0052a551
        ;   XREF to: 0052b3f8 (CONDITIONAL_JUMP)  ; LAB_0052b3f8
    PUSH 0x10                           ; 0052a557
        ;   Label: LAB_0052a557
    PUSH 0x5ce4f8                       ; 0052a559 | = "allowEnemyAttack"
    PUSH ESI                            ; 0052a55e
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a55f
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a564
    TEST EAX,EAX                        ; 0052a567
    JNZ 0x0052a582                      ; 0052a569
        ;   XREF to: 0052a582 (CONDITIONAL_JUMP)  ; LAB_0052a582
    MOV AL,byte ptr [ESI + 0x10]        ; 0052a56b
    INC AL                              ; 0052a56e
    AND EAX,0xff                        ; 0052a570
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a575 | DAT_006074b8
    JZ 0x0052b533                       ; 0052a57c
        ;   XREF to: 0052b533 (CONDITIONAL_JUMP)  ; LAB_0052b533
    PUSH 0x11                           ; 0052a582
        ;   Label: LAB_0052a582
    PUSH 0x5ce509                       ; 0052a584 | = "allowHeroControls"
    PUSH ESI                            ; 0052a589
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a58a
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a58f
    TEST EAX,EAX                        ; 0052a592
    JNZ 0x0052a5ad                      ; 0052a594
        ;   XREF to: 0052a5ad (CONDITIONAL_JUMP)  ; LAB_0052a5ad
    MOV AL,byte ptr [ESI + 0x11]        ; 0052a596
    INC AL                              ; 0052a599
    AND EAX,0xff                        ; 0052a59b
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a5a0 | DAT_006074b8
    JZ 0x0052b59b                       ; 0052a5a7
        ;   XREF to: 0052b59b (CONDITIONAL_JUMP)  ; LAB_0052b59b
    PUSH 0xf                            ; 0052a5ad
        ;   Label: LAB_0052a5ad
    PUSH 0x5ce51b                       ; 0052a5af | = "allowHeroDamage"
    PUSH ESI                            ; 0052a5b4
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a5b5
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a5ba
    TEST EAX,EAX                        ; 0052a5bd
    JNZ 0x0052a5d8                      ; 0052a5bf
        ;   XREF to: 0052a5d8 (CONDITIONAL_JUMP)  ; LAB_0052a5d8
    MOV AL,byte ptr [ESI + 0xf]         ; 0052a5c1
    INC AL                              ; 0052a5c4
    AND EAX,0xff                        ; 0052a5c6
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a5cb | DAT_006074b8
    JZ 0x0052b611                       ; 0052a5d2
        ;   XREF to: 0052b611 (CONDITIONAL_JUMP)  ; LAB_0052b611
    PUSH 0x15                           ; 0052a5d8
        ;   Label: LAB_0052a5d8
    PUSH 0x5ce52b                       ; 0052a5da | = "attachActorToPlatform"
    PUSH ESI                            ; 0052a5df
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a5e0
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a5e5
    TEST EAX,EAX                        ; 0052a5e8
    JNZ 0x0052a603                      ; 0052a5ea
        ;   XREF to: 0052a603 (CONDITIONAL_JUMP)  ; LAB_0052a603
    MOV AL,byte ptr [ESI + 0x15]        ; 0052a5ec
    INC AL                              ; 0052a5ef
    AND EAX,0xff                        ; 0052a5f1
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a5f6 | DAT_006074b8
    JZ 0x0052b679                       ; 0052a5fd
        ;   XREF to: 0052b679 (CONDITIONAL_JUMP)  ; LAB_0052b679
    PUSH 0xb                            ; 0052a603
        ;   Label: LAB_0052a603
    PUSH 0x5ce584                       ; 0052a605 | = "beginFadeIn"
    PUSH ESI                            ; 0052a60a
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a60b
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a610
    TEST EAX,EAX                        ; 0052a613
    JNZ 0x0052a62e                      ; 0052a615
        ;   XREF to: 0052a62e (CONDITIONAL_JUMP)  ; LAB_0052a62e
    MOV AL,byte ptr [ESI + 0xb]         ; 0052a617
    INC AL                              ; 0052a61a
    AND EAX,0xff                        ; 0052a61c
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a621 | DAT_006074b8
    JZ 0x0052b792                       ; 0052a628
        ;   XREF to: 0052b792 (CONDITIONAL_JUMP)  ; LAB_0052b792
    PUSH 0xc                            ; 0052a62e
        ;   Label: LAB_0052a62e
    PUSH 0x5ce590                       ; 0052a630 | = "beginFadeOut"
    PUSH ESI                            ; 0052a635
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a636
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a63b
    TEST EAX,EAX                        ; 0052a63e
    JNZ 0x0052a659                      ; 0052a640
        ;   XREF to: 0052a659 (CONDITIONAL_JUMP)  ; LAB_0052a659
    MOV AL,byte ptr [ESI + 0xc]         ; 0052a642
    INC AL                              ; 0052a645
    AND EAX,0xff                        ; 0052a647
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a64c | DAT_006074b8
    JZ 0x0052b7c6                       ; 0052a653
        ;   XREF to: 0052b7c6 (CONDITIONAL_JUMP)  ; LAB_0052b7c6
    PUSH 0xa                            ; 0052a659
        ;   Label: LAB_0052a659
    PUSH 0x5ce59d                       ; 0052a65b | = "breakPoint"
    PUSH ESI                            ; 0052a660
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a661
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a666
    TEST EAX,EAX                        ; 0052a669
    JNZ 0x0052a684                      ; 0052a66b
        ;   XREF to: 0052a684 (CONDITIONAL_JUMP)  ; LAB_0052a684
    MOV AL,byte ptr [ESI + 0xa]         ; 0052a66d
    INC AL                              ; 0052a670
    AND EAX,0xff                        ; 0052a672
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a677 | DAT_006074b8
    JZ 0x0052b7fb                       ; 0052a67e
        ;   XREF to: 0052b7fb (CONDITIONAL_JUMP)  ; LAB_0052b7fb
    PUSH 0x10                           ; 0052a684
        ;   Label: LAB_0052a684
    PUSH 0x5ce5cd                       ; 0052a686 | = "cancelCameraHold"
    PUSH ESI                            ; 0052a68b
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a68c
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a691
    TEST EAX,EAX                        ; 0052a694
    JNZ 0x0052a6af                      ; 0052a696
        ;   XREF to: 0052a6af (CONDITIONAL_JUMP)  ; LAB_0052a6af
    MOV AL,byte ptr [ESI + 0x10]        ; 0052a698
    INC AL                              ; 0052a69b
    AND EAX,0xff                        ; 0052a69d
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a6a2 | DAT_006074b8
    JZ 0x0052b861                       ; 0052a6a9
        ;   XREF to: 0052b861 (CONDITIONAL_JUMP)  ; LAB_0052b861
    PUSH 0xc                            ; 0052a6af
        ;   Label: LAB_0052a6af
    PUSH 0x5ce5de                       ; 0052a6b1 | = "cancelWalkTo"
    PUSH ESI                            ; 0052a6b6
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a6b7
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a6bc
    TEST EAX,EAX                        ; 0052a6bf
    JNZ 0x0052a6da                      ; 0052a6c1
        ;   XREF to: 0052a6da (CONDITIONAL_JUMP)  ; LAB_0052a6da
    MOV AL,byte ptr [ESI + 0xc]         ; 0052a6c3
    INC AL                              ; 0052a6c6
    AND EAX,0xff                        ; 0052a6c8
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a6cd | DAT_006074b8
    JZ 0x0052b896                       ; 0052a6d4
        ;   XREF to: 0052b896 (CONDITIONAL_JUMP)  ; LAB_0052b896
    PUSH 0xe                            ; 0052a6da
        ;   Label: LAB_0052a6da
    PUSH 0x5ce5ef                       ; 0052a6dc | = "chainToMission"
    PUSH ESI                            ; 0052a6e1
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a6e2
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a6e7
    TEST EAX,EAX                        ; 0052a6ea
    JNZ 0x0052a705                      ; 0052a6ec
        ;   XREF to: 0052a705 (CONDITIONAL_JUMP)  ; LAB_0052a705
    MOV AL,byte ptr [ESI + 0xe]         ; 0052a6ee
    INC AL                              ; 0052a6f1
    AND EAX,0xff                        ; 0052a6f3
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a6f8 | DAT_006074b8
    JZ 0x0052b9bd                       ; 0052a6ff
        ;   XREF to: 0052b9bd (CONDITIONAL_JUMP)  ; LAB_0052b9bd
    PUSH 0x11                           ; 0052a705
        ;   Label: LAB_0052a705
    PUSH 0x5ce5fe                       ; 0052a707 | = "changeSetFilename"
    PUSH ESI                            ; 0052a70c
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a70d
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a712
    TEST EAX,EAX                        ; 0052a715
    JNZ 0x0052a730                      ; 0052a717
        ;   XREF to: 0052a730 (CONDITIONAL_JUMP)  ; LAB_0052a730
    MOV AL,byte ptr [ESI + 0x11]        ; 0052a719
    INC AL                              ; 0052a71c
    AND EAX,0xff                        ; 0052a71e
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a723 | DAT_006074b8
    JZ 0x0052ba5d                       ; 0052a72a
        ;   XREF to: 0052ba5d (CONDITIONAL_JUMP)  ; LAB_0052ba5d
    PUSH 0x5                            ; 0052a730
        ;   Label: LAB_0052a730
    PUSH 0x5ce688                       ; 0052a732 | = "dbSay"
    PUSH ESI                            ; 0052a737
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a738
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a73d
    TEST EAX,EAX                        ; 0052a740
    JNZ 0x0052a75b                      ; 0052a742
        ;   XREF to: 0052a75b (CONDITIONAL_JUMP)  ; LAB_0052a75b
    MOV AL,byte ptr [ESI + 0x5]         ; 0052a744
    INC AL                              ; 0052a747
    AND EAX,0xff                        ; 0052a749
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a74e | DAT_006074b8
    JZ 0x0052bbd8                       ; 0052a755
        ;   XREF to: 0052bbd8 (CONDITIONAL_JUMP)  ; LAB_0052bbd8
    PUSH 0xa                            ; 0052a75b
        ;   Label: LAB_0052a75b
    PUSH 0x5ce6d4                       ; 0052a75d | = "dbStartSay"
    PUSH ESI                            ; 0052a762
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a763
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a768
    TEST EAX,EAX                        ; 0052a76b
    JNZ 0x0052a786                      ; 0052a76d
        ;   XREF to: 0052a786 (CONDITIONAL_JUMP)  ; LAB_0052a786
    MOV AL,byte ptr [ESI + 0xa]         ; 0052a76f
    INC AL                              ; 0052a772
    AND EAX,0xff                        ; 0052a774
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a779 | DAT_006074b8
    JZ 0x0052bda4                       ; 0052a780
        ;   XREF to: 0052bda4 (CONDITIONAL_JUMP)  ; LAB_0052bda4
    PUSH 0xe                            ; 0052a786
        ;   Label: LAB_0052a786
    PUSH 0x5ce725                       ; 0052a788 | = "dbTimedDisplay"
    PUSH ESI                            ; 0052a78d
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a78e
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a793
    TEST EAX,EAX                        ; 0052a796
    JNZ 0x0052a7b1                      ; 0052a798
        ;   XREF to: 0052a7b1 (CONDITIONAL_JUMP)  ; LAB_0052a7b1
    MOV AL,byte ptr [ESI + 0xe]         ; 0052a79a
    INC AL                              ; 0052a79d
    AND EAX,0xff                        ; 0052a79f
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a7a4 | DAT_006074b8
    JZ 0x0052bf22                       ; 0052a7ab
        ;   XREF to: 0052bf22 (CONDITIONAL_JUMP)  ; LAB_0052bf22
    PUSH 0x5                            ; 0052a7b1
        ;   Label: LAB_0052a7b1
    PUSH 0x5ce785                       ; 0052a7b3 | = "debug"
    PUSH ESI                            ; 0052a7b8
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a7b9
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a7be
    TEST EAX,EAX                        ; 0052a7c1
    JNZ 0x0052a7dc                      ; 0052a7c3
        ;   XREF to: 0052a7dc (CONDITIONAL_JUMP)  ; LAB_0052a7dc
    MOV AL,byte ptr [ESI + 0x5]         ; 0052a7c5
    INC AL                              ; 0052a7c8
    AND EAX,0xff                        ; 0052a7ca
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a7cf | DAT_006074b8
    JZ 0x0052c095                       ; 0052a7d6
        ;   XREF to: 0052c095 (CONDITIONAL_JUMP)  ; LAB_0052c095
    PUSH 0x9                            ; 0052a7dc
        ;   Label: LAB_0052a7dc
    PUSH 0x5ce7af                       ; 0052a7de | = "dismember"
    PUSH ESI                            ; 0052a7e3
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a7e4
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a7e9
    TEST EAX,EAX                        ; 0052a7ec
    JNZ 0x0052a807                      ; 0052a7ee
        ;   XREF to: 0052a807 (CONDITIONAL_JUMP)  ; LAB_0052a807
    MOV AL,byte ptr [ESI + 0x9]         ; 0052a7f0
    INC AL                              ; 0052a7f3
    AND EAX,0xff                        ; 0052a7f5
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a7fa | DAT_006074b8
    JZ 0x0052c103                       ; 0052a801
        ;   XREF to: 0052c103 (CONDITIONAL_JUMP)  ; LAB_0052c103
    PUSH 0x7                            ; 0052a807
        ;   Label: LAB_0052a807
    PUSH 0x5ce859                       ; 0052a809 | = "display"
    PUSH ESI                            ; 0052a80e
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a80f
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a814
    TEST EAX,EAX                        ; 0052a817
    JNZ 0x0052a832                      ; 0052a819
        ;   XREF to: 0052a832 (CONDITIONAL_JUMP)  ; LAB_0052a832
    MOV AL,byte ptr [ESI + 0x7]         ; 0052a81b
    INC AL                              ; 0052a81e
    AND EAX,0xff                        ; 0052a820
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a825 | DAT_006074b8
    JZ 0x0052c44b                       ; 0052a82c
        ;   XREF to: 0052c44b (CONDITIONAL_JUMP)  ; LAB_0052c44b
    PUSH 0x4                            ; 0052a832
        ;   Label: LAB_0052a832
    PUSH 0x5ce895                       ; 0052a834 | DAT_005ce895
    PUSH ESI                            ; 0052a839
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a83a
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a83f
    TEST EAX,EAX                        ; 0052a842
    JNZ 0x0052a85d                      ; 0052a844
        ;   XREF to: 0052a85d (CONDITIONAL_JUMP)  ; LAB_0052a85d
    MOV AL,byte ptr [ESI + 0x4]         ; 0052a846
    INC AL                              ; 0052a849
    AND EAX,0xff                        ; 0052a84b
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a850 | DAT_006074b8
    JZ 0x0052c497                       ; 0052a857
        ;   XREF to: 0052c497 (CONDITIONAL_JUMP)  ; LAB_0052c497
    PUSH 0xc                            ; 0052a85d
        ;   Label: LAB_0052a85d
    PUSH 0x5ce8d2                       ; 0052a85f | = "enableCamera"
    PUSH ESI                            ; 0052a864
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a865
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a86a
    TEST EAX,EAX                        ; 0052a86d
    JNZ 0x0052a888                      ; 0052a86f
        ;   XREF to: 0052a888 (CONDITIONAL_JUMP)  ; LAB_0052a888
    MOV AL,byte ptr [ESI + 0xc]         ; 0052a871
    INC AL                              ; 0052a874
    AND EAX,0xff                        ; 0052a876
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a87b | DAT_006074b8
    JZ 0x0052c4e4                       ; 0052a882
        ;   XREF to: 0052c4e4 (CONDITIONAL_JUMP)  ; LAB_0052c4e4
    PUSH 0x11                           ; 0052a888
        ;   Label: LAB_0052a888
    PUSH 0x5ce92d                       ; 0052a88a | = "enableCameraGroup"
    PUSH ESI                            ; 0052a88f
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a890
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a895
    TEST EAX,EAX                        ; 0052a898
    JNZ 0x0052a8b3                      ; 0052a89a
        ;   XREF to: 0052a8b3 (CONDITIONAL_JUMP)  ; LAB_0052a8b3
    MOV AL,byte ptr [ESI + 0x11]        ; 0052a89c
    INC AL                              ; 0052a89f
    AND EAX,0xff                        ; 0052a8a1
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a8a6 | DAT_006074b8
    JZ 0x0052c632                       ; 0052a8ad
        ;   XREF to: 0052c632 (CONDITIONAL_JUMP)  ; LAB_0052c632
    PUSH 0xf                            ; 0052a8b3
        ;   Label: LAB_0052a8b3
    PUSH 0x5ce974                       ; 0052a8b5 | = "enableHealthBar"
    PUSH ESI                            ; 0052a8ba
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a8bb
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a8c0
    TEST EAX,EAX                        ; 0052a8c3
    JNZ 0x0052a8de                      ; 0052a8c5
        ;   XREF to: 0052a8de (CONDITIONAL_JUMP)  ; LAB_0052a8de
    MOV AL,byte ptr [ESI + 0xf]         ; 0052a8c7
    INC AL                              ; 0052a8ca
    AND EAX,0xff                        ; 0052a8cc
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a8d1 | DAT_006074b8
    JZ 0x0052c73c                       ; 0052a8d8
        ;   XREF to: 0052c73c (CONDITIONAL_JUMP)  ; LAB_0052c73c
    PUSH 0x3                            ; 0052a8de
        ;   Label: LAB_0052a8de
    PUSH 0x5ce9e8                       ; 0052a8e0 | DAT_005ce9e8
    PUSH ESI                            ; 0052a8e5
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a8e6
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a8eb
    TEST EAX,EAX                        ; 0052a8ee
    JNZ 0x0052a909                      ; 0052a8f0
        ;   XREF to: 0052a909 (CONDITIONAL_JUMP)  ; LAB_0052a909
    MOV AL,byte ptr [ESI + 0x3]         ; 0052a8f2
    INC AL                              ; 0052a8f5
    AND EAX,0xff                        ; 0052a8f7
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a8fc | DAT_006074b8
    JZ 0x0052c897                       ; 0052a903
        ;   XREF to: 0052c897 (CONDITIONAL_JUMP)  ; LAB_0052c897
    PUSH 0x6                            ; 0052a909
        ;   Label: LAB_0052a909
    PUSH 0x5ce9ec                       ; 0052a90b | = "fadeIn"
    PUSH ESI                            ; 0052a910
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a911
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a916
    TEST EAX,EAX                        ; 0052a919
    JNZ 0x0052a934                      ; 0052a91b
        ;   XREF to: 0052a934 (CONDITIONAL_JUMP)  ; LAB_0052a934
    MOV AL,byte ptr [ESI + 0x6]         ; 0052a91d
    INC AL                              ; 0052a920
    AND EAX,0xff                        ; 0052a922
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a927 | DAT_006074b8
    JZ 0x0052c8ca                       ; 0052a92e
        ;   XREF to: 0052c8ca (CONDITIONAL_JUMP)  ; LAB_0052c8ca
    PUSH 0x7                            ; 0052a934
        ;   Label: LAB_0052a934
    PUSH 0x5ce9f3                       ; 0052a936 | = "fadeOut"
    PUSH ESI                            ; 0052a93b
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a93c
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a941
    TEST EAX,EAX                        ; 0052a944
    JNZ 0x0052a95f                      ; 0052a946
        ;   XREF to: 0052a95f (CONDITIONAL_JUMP)  ; LAB_0052a95f
    MOV AL,byte ptr [ESI + 0x7]         ; 0052a948
    INC AL                              ; 0052a94b
    AND EAX,0xff                        ; 0052a94d
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a952 | DAT_006074b8
    JZ 0x0052c94f                       ; 0052a959
        ;   XREF to: 0052c94f (CONDITIONAL_JUMP)  ; LAB_0052c94f
    PUSH 0x7                            ; 0052a95f
        ;   Label: LAB_0052a95f
    PUSH 0x5ce9fb                       ; 0052a961 | = "gesture"
    PUSH ESI                            ; 0052a966
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a967
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a96c
    TEST EAX,EAX                        ; 0052a96f
    JNZ 0x0052a98a                      ; 0052a971
        ;   XREF to: 0052a98a (CONDITIONAL_JUMP)  ; LAB_0052a98a
    MOV AL,byte ptr [ESI + 0x7]         ; 0052a973
    INC AL                              ; 0052a976
    AND EAX,0xff                        ; 0052a978
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a97d | DAT_006074b8
    JZ 0x0052c9c4                       ; 0052a984
        ;   XREF to: 0052c9c4 (CONDITIONAL_JUMP)  ; LAB_0052c9c4
    PUSH 0x9                            ; 0052a98a
        ;   Label: LAB_0052a98a
    PUSH 0x5ceacd                       ; 0052a98c | = "getIniInt"
    PUSH ESI                            ; 0052a991
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a992
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a997
    TEST EAX,EAX                        ; 0052a99a
    JNZ 0x0052a9b5                      ; 0052a99c
        ;   XREF to: 0052a9b5 (CONDITIONAL_JUMP)  ; LAB_0052a9b5
    MOV AL,byte ptr [ESI + 0x9]         ; 0052a99e
    INC AL                              ; 0052a9a1
    AND EAX,0xff                        ; 0052a9a3
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a9a8 | DAT_006074b8
    JZ 0x0052cbc4                       ; 0052a9af
        ;   XREF to: 0052cbc4 (CONDITIONAL_JUMP)  ; LAB_0052cbc4
    PUSH 0xf                            ; 0052a9b5
        ;   Label: LAB_0052a9b5
    PUSH 0x5ceb24                       ; 0052a9b7 | = "getTriggerActor"
    PUSH ESI                            ; 0052a9bc
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a9bd
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a9c2
    TEST EAX,EAX                        ; 0052a9c5
    JNZ 0x0052a9e0                      ; 0052a9c7
        ;   XREF to: 0052a9e0 (CONDITIONAL_JUMP)  ; LAB_0052a9e0
    MOV AL,byte ptr [ESI + 0xf]         ; 0052a9c9
    INC AL                              ; 0052a9cc
    AND EAX,0xff                        ; 0052a9ce
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a9d3 | DAT_006074b8
    JZ 0x0052ccf7                       ; 0052a9da
        ;   XREF to: 0052ccf7 (CONDITIONAL_JUMP)  ; LAB_0052ccf7
    PUSH 0x5                            ; 0052a9e0
        ;   Label: LAB_0052a9e0
    PUSH 0x5ceb71                       ; 0052a9e2 | = "gosub"
    PUSH ESI                            ; 0052a9e7
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052a9e8
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052a9ed
    TEST EAX,EAX                        ; 0052a9f0
    JNZ 0x0052aa0b                      ; 0052a9f2
        ;   XREF to: 0052aa0b (CONDITIONAL_JUMP)  ; LAB_0052aa0b
    MOV AL,byte ptr [ESI + 0x5]         ; 0052a9f4
    INC AL                              ; 0052a9f7
    AND EAX,0xff                        ; 0052a9f9
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052a9fe | DAT_006074b8
    JZ 0x0052ce08                       ; 0052aa05
        ;   XREF to: 0052ce08 (CONDITIONAL_JUMP)  ; LAB_0052ce08
    PUSH 0x4                            ; 0052aa0b
        ;   Label: LAB_0052aa0b
    PUSH 0x5cec23                       ; 0052aa0d | DAT_005cec23
    PUSH ESI                            ; 0052aa12
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052aa13
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052aa18
    TEST EAX,EAX                        ; 0052aa1b
    JNZ 0x0052aa36                      ; 0052aa1d
        ;   XREF to: 0052aa36 (CONDITIONAL_JUMP)  ; LAB_0052aa36
    MOV AL,byte ptr [ESI + 0x4]         ; 0052aa1f
    INC AL                              ; 0052aa22
    AND EAX,0xff                        ; 0052aa24
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052aa29 | DAT_006074b8
    JZ 0x0052cf3f                       ; 0052aa30
        ;   XREF to: 0052cf3f (CONDITIONAL_JUMP)  ; LAB_0052cf3f
    PUSH 0x4                            ; 0052aa36
        ;   Label: LAB_0052aa36
    PUSH 0x5cec5e                       ; 0052aa38 | DAT_005cec5e
    PUSH ESI                            ; 0052aa3d
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052aa3e
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052aa43
    TEST EAX,EAX                        ; 0052aa46
    JNZ 0x0052aa61                      ; 0052aa48
        ;   XREF to: 0052aa61 (CONDITIONAL_JUMP)  ; LAB_0052aa61
    MOV AL,byte ptr [ESI + 0x4]         ; 0052aa4a
    INC AL                              ; 0052aa4d
    AND EAX,0xff                        ; 0052aa4f
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052aa54 | DAT_006074b8
    JZ 0x0052cfa6                       ; 0052aa5b
        ;   XREF to: 0052cfa6 (CONDITIONAL_JUMP)  ; LAB_0052cfa6
    PUSH 0xd                            ; 0052aa61
        ;   Label: LAB_0052aa61
    PUSH 0x5cec93                       ; 0052aa63 | = "holsterWeapon"
    PUSH ESI                            ; 0052aa68
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052aa69
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052aa6e
    TEST EAX,EAX                        ; 0052aa71
    JNZ 0x0052aa8c                      ; 0052aa73
        ;   XREF to: 0052aa8c (CONDITIONAL_JUMP)  ; LAB_0052aa8c
    MOV AL,byte ptr [ESI + 0xd]         ; 0052aa75
    INC AL                              ; 0052aa78
    AND EAX,0xff                        ; 0052aa7a
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052aa7f | DAT_006074b8
    JZ 0x0052d023                       ; 0052aa86
        ;   XREF to: 0052d023 (CONDITIONAL_JUMP)  ; LAB_0052d023
    PUSH 0x4                            ; 0052aa8c
        ;   Label: LAB_0052aa8c
    PUSH 0x5ced2c                       ; 0052aa8e | DAT_005ced2c
    PUSH ESI                            ; 0052aa93
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052aa94
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052aa99
    TEST EAX,EAX                        ; 0052aa9c
    JNZ 0x0052aab7                      ; 0052aa9e
        ;   XREF to: 0052aab7 (CONDITIONAL_JUMP)  ; LAB_0052aab7
    MOV AL,byte ptr [ESI + 0x4]         ; 0052aaa0
    INC AL                              ; 0052aaa3
    AND EAX,0xff                        ; 0052aaa5
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052aaaa | DAT_006074b8
    JZ 0x0052d255                       ; 0052aab1
        ;   XREF to: 0052d255 (CONDITIONAL_JUMP)  ; LAB_0052d255
    PUSH 0x2                            ; 0052aab7
        ;   Label: LAB_0052aab7
    PUSH 0x5ced31                       ; 0052aab9 | DAT_005ced31
    PUSH ESI                            ; 0052aabe
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052aabf
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052aac4
    TEST EAX,EAX                        ; 0052aac7
    JNZ 0x0052aae2                      ; 0052aac9
        ;   XREF to: 0052aae2 (CONDITIONAL_JUMP)  ; LAB_0052aae2
    MOV AL,byte ptr [ESI + 0x2]         ; 0052aacb
    INC AL                              ; 0052aace
    AND EAX,0xff                        ; 0052aad0
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052aad5 | DAT_006074b8
    JZ 0x0052d280                       ; 0052aadc
        ;   XREF to: 0052d280 (CONDITIONAL_JUMP)  ; LAB_0052d280
    PUSH 0xb                            ; 0052aae2
        ;   Label: LAB_0052aae2
    PUSH 0x5ced6f                       ; 0052aae4 | = "finishedAct"
    PUSH ESI                            ; 0052aae9
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052aaea
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052aaef
    TEST EAX,EAX                        ; 0052aaf2
    JNZ 0x0052ab0d                      ; 0052aaf4
        ;   XREF to: 0052ab0d (CONDITIONAL_JUMP)  ; LAB_0052ab0d
    MOV AL,byte ptr [ESI + 0xb]         ; 0052aaf6
    INC AL                              ; 0052aaf9
    AND EAX,0xff                        ; 0052aafb
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052ab00 | DAT_006074b8
    JZ 0x0052d33a                       ; 0052ab07
        ;   XREF to: 0052d33a (CONDITIONAL_JUMP)  ; LAB_0052d33a
    PUSH 0x9                            ; 0052ab0d
        ;   Label: LAB_0052ab0d
    PUSH 0x5ceda4                       ; 0052ab0f | = "letterbox"
    PUSH ESI                            ; 0052ab14
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052ab15
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052ab1a
    TEST EAX,EAX                        ; 0052ab1d
    JNZ 0x0052ab38                      ; 0052ab1f
        ;   XREF to: 0052ab38 (CONDITIONAL_JUMP)  ; LAB_0052ab38
    MOV AL,byte ptr [ESI + 0x9]         ; 0052ab21
    INC AL                              ; 0052ab24
    AND EAX,0xff                        ; 0052ab26
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052ab2b | DAT_006074b8
    JZ 0x0052d3d0                       ; 0052ab32
        ;   XREF to: 0052d3d0 (CONDITIONAL_JUMP)  ; LAB_0052d3d0
    PUSH 0xe                            ; 0052ab38
        ;   Label: LAB_0052ab38
    PUSH 0x5ceddb                       ; 0052ab3a | = "loadFieldNotes"
    PUSH ESI                            ; 0052ab3f
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052ab40
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052ab45
    TEST EAX,EAX                        ; 0052ab48
    JNZ 0x0052ab63                      ; 0052ab4a
        ;   XREF to: 0052ab63 (CONDITIONAL_JUMP)  ; LAB_0052ab63
    MOV AL,byte ptr [ESI + 0xe]         ; 0052ab4c
    INC AL                              ; 0052ab4f
    AND EAX,0xff                        ; 0052ab51
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052ab56 | DAT_006074b8
    JZ 0x0052d5aa                       ; 0052ab5d
        ;   XREF to: 0052d5aa (CONDITIONAL_JUMP)  ; LAB_0052d5aa
    PUSH 0xe                            ; 0052ab63
        ;   Label: LAB_0052ab63
    PUSH 0x5cedea                       ; 0052ab65 | = "lockFocusActor"
    PUSH ESI                            ; 0052ab6a
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052ab6b
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052ab70
    TEST EAX,EAX                        ; 0052ab73
    JNZ 0x0052ab8e                      ; 0052ab75
        ;   XREF to: 0052ab8e (CONDITIONAL_JUMP)  ; LAB_0052ab8e
    MOV AL,byte ptr [ESI + 0xe]         ; 0052ab77
    INC AL                              ; 0052ab7a
    AND EAX,0xff                        ; 0052ab7c
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052ab81 | DAT_006074b8
    JZ 0x0052d64d                       ; 0052ab88
        ;   XREF to: 0052d64d (CONDITIONAL_JUMP)  ; LAB_0052d64d
    PUSH 0x6                            ; 0052ab8e
        ;   Label: LAB_0052ab8e
    PUSH 0x5cedf9                       ; 0052ab90 | = "lookAt"
    PUSH ESI                            ; 0052ab95
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052ab96
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052ab9b
    TEST EAX,EAX                        ; 0052ab9e
    JNZ 0x0052abb9                      ; 0052aba0
        ;   XREF to: 0052abb9 (CONDITIONAL_JUMP)  ; LAB_0052abb9
    MOV AL,byte ptr [ESI + 0x6]         ; 0052aba2
    INC AL                              ; 0052aba5
    AND EAX,0xff                        ; 0052aba7
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052abac | DAT_006074b8
    JZ 0x0052d6ac                       ; 0052abb3
        ;   XREF to: 0052d6ac (CONDITIONAL_JUMP)  ; LAB_0052d6ac
    PUSH 0xd                            ; 0052abb9
        ;   Label: LAB_0052abb9
    PUSH 0x5cee80                       ; 0052abbb | = "monsterVision"
    PUSH ESI                            ; 0052abc0
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052abc1
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052abc6
    TEST EAX,EAX                        ; 0052abc9
    JNZ 0x0052abe4                      ; 0052abcb
        ;   XREF to: 0052abe4 (CONDITIONAL_JUMP)  ; LAB_0052abe4
    MOV AL,byte ptr [ESI + 0xd]         ; 0052abcd
    INC AL                              ; 0052abd0
    AND EAX,0xff                        ; 0052abd2
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052abd7 | DAT_006074b8
    JZ 0x0052d867                       ; 0052abde
        ;   XREF to: 0052d867 (CONDITIONAL_JUMP)  ; LAB_0052d867
    PUSH 0xc                            ; 0052abe4
        ;   Label: LAB_0052abe4
    PUSH 0x5ceec7                       ; 0052abe6 | = "movePlatform"
    PUSH ESI                            ; 0052abeb
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052abec
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052abf1
    TEST EAX,EAX                        ; 0052abf4
    JNZ 0x0052ac0f                      ; 0052abf6
        ;   XREF to: 0052ac0f (CONDITIONAL_JUMP)  ; LAB_0052ac0f
    MOV AL,byte ptr [ESI + 0xc]         ; 0052abf8
    INC AL                              ; 0052abfb
    AND EAX,0xff                        ; 0052abfd
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052ac02 | DAT_006074b8
    JZ 0x0052d967                       ; 0052ac09
        ;   XREF to: 0052d967 (CONDITIONAL_JUMP)  ; LAB_0052d967
    PUSH 0x8                            ; 0052ac0f
        ;   Label: LAB_0052ac0f
    PUSH 0x5cef50                       ; 0052ac11 | = "openDoor"
    PUSH ESI                            ; 0052ac16
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052ac17
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052ac1c
    TEST EAX,EAX                        ; 0052ac1f
    JNZ 0x0052ac3a                      ; 0052ac21
        ;   XREF to: 0052ac3a (CONDITIONAL_JUMP)  ; LAB_0052ac3a
    MOV AL,byte ptr [ESI + 0x8]         ; 0052ac23
    INC AL                              ; 0052ac26
    AND EAX,0xff                        ; 0052ac28
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052ac2d | DAT_006074b8
    JZ 0x0052daa6                       ; 0052ac34
        ;   XREF to: 0052daa6 (CONDITIONAL_JUMP)  ; LAB_0052daa6
    PUSH 0xb                            ; 0052ac3a
        ;   Label: LAB_0052ac3a
    PUSH 0x5cef8f                       ; 0052ac3c | = "pressButton"
    PUSH ESI                            ; 0052ac41
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052ac42
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052ac47
    TEST EAX,EAX                        ; 0052ac4a
    JNZ 0x0052ac65                      ; 0052ac4c
        ;   XREF to: 0052ac65 (CONDITIONAL_JUMP)  ; LAB_0052ac65
    MOV AL,byte ptr [ESI + 0xb]         ; 0052ac4e
    INC AL                              ; 0052ac51
    AND EAX,0xff                        ; 0052ac53
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052ac58 | DAT_006074b8
    JZ 0x0052dc0b                       ; 0052ac5f
        ;   XREF to: 0052dc0b (CONDITIONAL_JUMP)  ; LAB_0052dc0b
    PUSH 0x5                            ; 0052ac65
        ;   Label: LAB_0052ac65
    PUSH 0x5cefef                       ; 0052ac67 | = "raise"
    PUSH ESI                            ; 0052ac6c
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052ac6d
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052ac72
    TEST EAX,EAX                        ; 0052ac75
    JNZ 0x0052ac90                      ; 0052ac77
        ;   XREF to: 0052ac90 (CONDITIONAL_JUMP)  ; LAB_0052ac90
    MOV AL,byte ptr [ESI + 0x5]         ; 0052ac79
    INC AL                              ; 0052ac7c
    AND EAX,0xff                        ; 0052ac7e
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052ac83 | DAT_006074b8
    JZ 0x0052dd47                       ; 0052ac8a
        ;   XREF to: 0052dd47 (CONDITIONAL_JUMP)  ; LAB_0052dd47
    PUSH 0xd                            ; 0052ac90
        ;   Label: LAB_0052ac90
    PUSH 0x5cf02b                       ; 0052ac92 | = "releaseButton"
    PUSH ESI                            ; 0052ac97
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052ac98
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052ac9d
    TEST EAX,EAX                        ; 0052aca0
    JNZ 0x0052acbb                      ; 0052aca2
        ;   XREF to: 0052acbb (CONDITIONAL_JUMP)  ; LAB_0052acbb
    MOV AL,byte ptr [ESI + 0xd]         ; 0052aca4
    INC AL                              ; 0052aca7
    AND EAX,0xff                        ; 0052aca9
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052acae | DAT_006074b8
    JZ 0x0052ddf9                       ; 0052acb5
        ;   XREF to: 0052ddf9 (CONDITIONAL_JUMP)  ; LAB_0052ddf9
    PUSH 0x1b                           ; 0052acbb
        ;   Label: LAB_0052acbb
    PUSH 0x5cf08f                       ; 0052acbd | = "removeAllItemsFromInventory"
    PUSH ESI                            ; 0052acc2
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052acc3
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052acc8
    TEST EAX,EAX                        ; 0052accb
    JNZ 0x0052ace6                      ; 0052accd
        ;   XREF to: 0052ace6 (CONDITIONAL_JUMP)  ; LAB_0052ace6
    MOV AL,byte ptr [ESI + 0x1b]        ; 0052accf
    INC AL                              ; 0052acd2
    AND EAX,0xff                        ; 0052acd4
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052acd9 | DAT_006074b8
    JZ 0x0052df34                       ; 0052ace0
        ;   XREF to: 0052df34 (CONDITIONAL_JUMP)  ; LAB_0052df34
    PUSH 0x17                           ; 0052ace6
        ;   Label: LAB_0052ace6
    PUSH 0x5cf0ef                       ; 0052ace8 | = "removeItemFromInventory"
    PUSH ESI                            ; 0052aced
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052acee
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052acf3
    TEST EAX,EAX                        ; 0052acf6
    JNZ 0x0052ad11                      ; 0052acf8
        ;   XREF to: 0052ad11 (CONDITIONAL_JUMP)  ; LAB_0052ad11
    MOV AL,byte ptr [ESI + 0x17]        ; 0052acfa
    INC AL                              ; 0052acfd
    AND EAX,0xff                        ; 0052acff
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052ad04 | DAT_006074b8
    JZ 0x0052e005                       ; 0052ad0b
        ;   XREF to: 0052e005 (CONDITIONAL_JUMP)  ; LAB_0052e005
    PUSH 0xa                            ; 0052ad11
        ;   Label: LAB_0052ad11
    PUSH 0x5cf1c0                       ; 0052ad13 | = "removeKeys"
    PUSH ESI                            ; 0052ad18
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052ad19
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052ad1e
    TEST EAX,EAX                        ; 0052ad21
    JNZ 0x0052ad3c                      ; 0052ad23
        ;   XREF to: 0052ad3c (CONDITIONAL_JUMP)  ; LAB_0052ad3c
    MOV AL,byte ptr [ESI + 0xa]         ; 0052ad25
    INC AL                              ; 0052ad28
    AND EAX,0xff                        ; 0052ad2a
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052ad2f | DAT_006074b8
    JZ 0x0052e26d                       ; 0052ad36
        ;   XREF to: 0052e26d (CONDITIONAL_JUMP)  ; LAB_0052e26d
    PUSH 0x6                            ; 0052ad3c
        ;   Label: LAB_0052ad3c
    PUSH 0x5cf22a                       ; 0052ad3e | = "return"
    PUSH ESI                            ; 0052ad43
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052ad44
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052ad49
    TEST EAX,EAX                        ; 0052ad4c
    JNZ 0x0052ad67                      ; 0052ad4e
        ;   XREF to: 0052ad67 (CONDITIONAL_JUMP)  ; LAB_0052ad67
    MOV AL,byte ptr [ESI + 0x6]         ; 0052ad50
    INC AL                              ; 0052ad53
    AND EAX,0xff                        ; 0052ad55
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052ad5a | DAT_006074b8
    JZ 0x0052e32d                       ; 0052ad61
        ;   XREF to: 0052e32d (CONDITIONAL_JUMP)  ; LAB_0052e32d
    PUSH 0xb                            ; 0052ad67
        ;   Label: LAB_0052ad67
    PUSH 0x5cf262                       ; 0052ad69 | = "rollCredits"
    PUSH ESI                            ; 0052ad6e
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052ad6f
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052ad74
    TEST EAX,EAX                        ; 0052ad77
    JNZ 0x0052ad92                      ; 0052ad79
        ;   XREF to: 0052ad92 (CONDITIONAL_JUMP)  ; LAB_0052ad92
    MOV AL,byte ptr [ESI + 0xb]         ; 0052ad7b
    INC AL                              ; 0052ad7e
    AND EAX,0xff                        ; 0052ad80
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052ad85 | DAT_006074b8
    JZ 0x0052e390                       ; 0052ad8c
        ;   XREF to: 0052e390 (CONDITIONAL_JUMP)  ; LAB_0052e390
    PUSH 0x3                            ; 0052ad92
        ;   Label: LAB_0052ad92
    PUSH 0x5cf297                       ; 0052ad94 | DAT_005cf297
    PUSH ESI                            ; 0052ad99
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052ad9a
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052ad9f
    TEST EAX,EAX                        ; 0052ada2
    JNZ 0x0052adbd                      ; 0052ada4
        ;   XREF to: 0052adbd (CONDITIONAL_JUMP)  ; LAB_0052adbd
    MOV AL,byte ptr [ESI + 0x3]         ; 0052ada6
    INC AL                              ; 0052ada9
    AND EAX,0xff                        ; 0052adab
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052adb0 | DAT_006074b8
    JZ 0x0052e426                       ; 0052adb7
        ;   XREF to: 0052e426 (CONDITIONAL_JUMP)  ; LAB_0052e426
    PUSH 0xc                            ; 0052adbd
        ;   Label: LAB_0052adbd
    PUSH 0x5cf2d4                       ; 0052adbf | = "selectWeapon"
    PUSH ESI                            ; 0052adc4
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052adc5
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052adca
    TEST EAX,EAX                        ; 0052adcd
    JNZ 0x0052ade8                      ; 0052adcf
        ;   XREF to: 0052ade8 (CONDITIONAL_JUMP)  ; LAB_0052ade8
    MOV AL,byte ptr [ESI + 0xc]         ; 0052add1
    INC AL                              ; 0052add4
    AND EAX,0xff                        ; 0052add6
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052addb | DAT_006074b8
    JZ 0x0052e599                       ; 0052ade2
        ;   XREF to: 0052e599 (CONDITIONAL_JUMP)  ; LAB_0052e599
    PUSH 0x10                           ; 0052ade8
        ;   Label: LAB_0052ade8
    PUSH 0x5cf374                       ; 0052adea | = "setActorVariable"
    PUSH ESI                            ; 0052adef
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052adf0
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052adf5
    TEST EAX,EAX                        ; 0052adf8
    JNZ 0x0052ae13                      ; 0052adfa
        ;   XREF to: 0052ae13 (CONDITIONAL_JUMP)  ; LAB_0052ae13
    MOV AL,byte ptr [ESI + 0x10]        ; 0052adfc
    INC AL                              ; 0052adff
    AND EAX,0xff                        ; 0052ae01
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052ae06 | DAT_006074b8
    JZ 0x0052e733                       ; 0052ae0d
        ;   XREF to: 0052e733 (CONDITIONAL_JUMP)  ; LAB_0052e733
    PUSH 0xf                            ; 0052ae13
        ;   Label: LAB_0052ae13
    PUSH 0x5cf3c3                       ; 0052ae15 | = "setAmbientSound"
    PUSH ESI                            ; 0052ae1a
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052ae1b
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052ae20
    TEST EAX,EAX                        ; 0052ae23
    JNZ 0x0052ae3e                      ; 0052ae25
        ;   XREF to: 0052ae3e (CONDITIONAL_JUMP)  ; LAB_0052ae3e
    MOV AL,byte ptr [ESI + 0xf]         ; 0052ae27
    INC AL                              ; 0052ae2a
    AND EAX,0xff                        ; 0052ae2c
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052ae31 | DAT_006074b8
    JZ 0x0052e840                       ; 0052ae38
        ;   XREF to: 0052e840 (CONDITIONAL_JUMP)  ; LAB_0052e840
    PUSH 0xe                            ; 0052ae3e
        ;   Label: LAB_0052ae3e
    PUSH 0x5cf3d3                       ; 0052ae40 | = "setCameraGroup"
    PUSH ESI                            ; 0052ae45
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052ae46
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052ae4b
    TEST EAX,EAX                        ; 0052ae4e
    JNZ 0x0052ae69                      ; 0052ae50
        ;   XREF to: 0052ae69 (CONDITIONAL_JUMP)  ; LAB_0052ae69
    MOV AL,byte ptr [ESI + 0xe]         ; 0052ae52
    INC AL                              ; 0052ae55
    AND EAX,0xff                        ; 0052ae57
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052ae5c | DAT_006074b8
    JZ 0x0052e89d                       ; 0052ae63
        ;   XREF to: 0052e89d (CONDITIONAL_JUMP)  ; LAB_0052e89d
    PUSH 0x12                           ; 0052ae69
        ;   Label: LAB_0052ae69
    PUSH 0x5cf432                       ; 0052ae6b | = "setCharacterHealth"
    PUSH ESI                            ; 0052ae70
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052ae71
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052ae76
    TEST EAX,EAX                        ; 0052ae79
    JNZ 0x0052ae94                      ; 0052ae7b
        ;   XREF to: 0052ae94 (CONDITIONAL_JUMP)  ; LAB_0052ae94
    MOV AL,byte ptr [ESI + 0x12]        ; 0052ae7d
    INC AL                              ; 0052ae80
    AND EAX,0xff                        ; 0052ae82
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052ae87 | DAT_006074b8
    JZ 0x0052e9b7                       ; 0052ae8e
        ;   XREF to: 0052e9b7 (CONDITIONAL_JUMP)  ; LAB_0052e9b7
    PUSH 0x7                            ; 0052ae94
        ;   Label: LAB_0052ae94
    PUSH 0x5cf47a                       ; 0052ae96 | = "setEyes"
    PUSH ESI                            ; 0052ae9b
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052ae9c
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052aea1
    TEST EAX,EAX                        ; 0052aea4
    JNZ 0x0052aebf                      ; 0052aea6
        ;   XREF to: 0052aebf (CONDITIONAL_JUMP)  ; LAB_0052aebf
    MOV AL,byte ptr [ESI + 0x7]         ; 0052aea8
    INC AL                              ; 0052aeab
    AND EAX,0xff                        ; 0052aead
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052aeb2 | DAT_006074b8
    JZ 0x0052ea96                       ; 0052aeb9
        ;   XREF to: 0052ea96 (CONDITIONAL_JUMP)  ; LAB_0052ea96
    PUSH 0xc                            ; 0052aebf
        ;   Label: LAB_0052aebf
    PUSH 0x5cf4b4                       ; 0052aec1 | = "setSwitchmap"
    PUSH ESI                            ; 0052aec6
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052aec7
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052aecc
    TEST EAX,EAX                        ; 0052aecf
    JNZ 0x0052aeea                      ; 0052aed1
        ;   XREF to: 0052aeea (CONDITIONAL_JUMP)  ; LAB_0052aeea
    MOV AL,byte ptr [ESI + 0xc]         ; 0052aed3
    INC AL                              ; 0052aed6
    AND EAX,0xff                        ; 0052aed8
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052aedd | DAT_006074b8
    JZ 0x0052eba8                       ; 0052aee4
        ;   XREF to: 0052eba8 (CONDITIONAL_JUMP)  ; LAB_0052eba8
    PUSH 0x18                           ; 0052aeea
        ;   Label: LAB_0052aeea
    PUSH 0x5cf4c1                       ; 0052aeec | = "setFieldNotesImageSuffix"
    PUSH ESI                            ; 0052aef1
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052aef2
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052aef7
    TEST EAX,EAX                        ; 0052aefa
    JNZ 0x0052af15                      ; 0052aefc
        ;   XREF to: 0052af15 (CONDITIONAL_JUMP)  ; LAB_0052af15
    MOV AL,byte ptr [ESI + 0x18]        ; 0052aefe
    INC AL                              ; 0052af01
    AND EAX,0xff                        ; 0052af03
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052af08 | DAT_006074b8
    JZ 0x0052ec3c                       ; 0052af0f
        ;   XREF to: 0052ec3c (CONDITIONAL_JUMP)  ; LAB_0052ec3c
    PUSH 0xd                            ; 0052af15
        ;   Label: LAB_0052af15
    PUSH 0x5cf4da                       ; 0052af17 | = "setFocusActor"
    PUSH ESI                            ; 0052af1c
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052af1d
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052af22
    TEST EAX,EAX                        ; 0052af25
    JNZ 0x0052af40                      ; 0052af27
        ;   XREF to: 0052af40 (CONDITIONAL_JUMP)  ; LAB_0052af40
    MOV AL,byte ptr [ESI + 0xd]         ; 0052af29
    INC AL                              ; 0052af2c
    AND EAX,0xff                        ; 0052af2e
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052af33 | DAT_006074b8
    JZ 0x0052ec9d                       ; 0052af3a
        ;   XREF to: 0052ec9d (CONDITIONAL_JUMP)  ; LAB_0052ec9d
    PUSH 0xb                            ; 0052af40
        ;   Label: LAB_0052af40
    PUSH 0x5cf4e8                       ; 0052af42 | = "setHeroTask"
    PUSH ESI                            ; 0052af47
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052af48
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052af4d
    TEST EAX,EAX                        ; 0052af50
    JNZ 0x0052af6b                      ; 0052af52
        ;   XREF to: 0052af6b (CONDITIONAL_JUMP)  ; LAB_0052af6b
    MOV AL,byte ptr [ESI + 0xb]         ; 0052af54
    INC AL                              ; 0052af57
    AND EAX,0xff                        ; 0052af59
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052af5e | DAT_006074b8
    JZ 0x0052ed3e                       ; 0052af65
        ;   XREF to: 0052ed3e (CONDITIONAL_JUMP)  ; LAB_0052ed3e
    PUSH 0x9                            ; 0052af6b
        ;   Label: LAB_0052af6b
    PUSH 0x5cf55d                       ; 0052af6d | = "setIniInt"
    PUSH ESI                            ; 0052af72
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052af73
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052af78
    TEST EAX,EAX                        ; 0052af7b
    JNZ 0x0052af96                      ; 0052af7d
        ;   XREF to: 0052af96 (CONDITIONAL_JUMP)  ; LAB_0052af96
    MOV AL,byte ptr [ESI + 0x9]         ; 0052af7f
    INC AL                              ; 0052af82
    AND EAX,0xff                        ; 0052af84
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052af89 | DAT_006074b8
    JZ 0x0052eee6                       ; 0052af90
        ;   XREF to: 0052eee6 (CONDITIONAL_JUMP)  ; LAB_0052eee6
    PUSH 0x8                            ; 0052af96
        ;   Label: LAB_0052af96
    PUSH 0x5cf5b0                       ; 0052af98 | = "setMouth"
    PUSH ESI                            ; 0052af9d
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052af9e
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052afa3
    TEST EAX,EAX                        ; 0052afa6
    JNZ 0x0052afc1                      ; 0052afa8
        ;   XREF to: 0052afc1 (CONDITIONAL_JUMP)  ; LAB_0052afc1
    MOV AL,byte ptr [ESI + 0x8]         ; 0052afaa
    INC AL                              ; 0052afad
    AND EAX,0xff                        ; 0052afaf
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052afb4 | DAT_006074b8
    JZ 0x0052efc4                       ; 0052afbb
        ;   XREF to: 0052efc4 (CONDITIONAL_JUMP)  ; LAB_0052efc4
    PUSH 0x12                           ; 0052afc1
        ;   Label: LAB_0052afc1
    PUSH 0x5cf5e8                       ; 0052afc3 | = "setSayTimeOverride"
    PUSH ESI                            ; 0052afc8
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052afc9
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052afce
    TEST EAX,EAX                        ; 0052afd1
    JNZ 0x0052afec                      ; 0052afd3
        ;   XREF to: 0052afec (CONDITIONAL_JUMP)  ; LAB_0052afec
    MOV AL,byte ptr [ESI + 0x12]        ; 0052afd5
    INC AL                              ; 0052afd8
    AND EAX,0xff                        ; 0052afda
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052afdf | DAT_006074b8
    JZ 0x0052f0b0                       ; 0052afe6
        ;   XREF to: 0052f0b0 (CONDITIONAL_JUMP)  ; LAB_0052f0b0
    PUSH 0xc                            ; 0052afec
        ;   Label: LAB_0052afec
    PUSH 0x5cf664                       ; 0052afee | = "setSkipLabel"
    PUSH ESI                            ; 0052aff3
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052aff4
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052aff9
    TEST EAX,EAX                        ; 0052affc
    JNZ 0x0052b017                      ; 0052affe
        ;   XREF to: 0052b017 (CONDITIONAL_JUMP)  ; LAB_0052b017
    MOV AL,byte ptr [ESI + 0xc]         ; 0052b000
    INC AL                              ; 0052b003
    AND EAX,0xff                        ; 0052b005
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052b00a | DAT_006074b8
    JZ 0x0052f1a8                       ; 0052b011
        ;   XREF to: 0052f1a8 (CONDITIONAL_JUMP)  ; LAB_0052f1a8
    PUSH 0xa                            ; 0052b017
        ;   Label: LAB_0052b017
    PUSH 0x5cf686                       ; 0052b019 | = "setSpeaker"
    PUSH ESI                            ; 0052b01e
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052b01f
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052b024
    TEST EAX,EAX                        ; 0052b027
    JNZ 0x0052b042                      ; 0052b029
        ;   XREF to: 0052b042 (CONDITIONAL_JUMP)  ; LAB_0052b042
    MOV AL,byte ptr [ESI + 0xa]         ; 0052b02b
    INC AL                              ; 0052b02e
    AND EAX,0xff                        ; 0052b030
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052b035 | DAT_006074b8
    JZ 0x0052f24b                       ; 0052b03c
        ;   XREF to: 0052f24b (CONDITIONAL_JUMP)  ; LAB_0052f24b
    PUSH 0xd                            ; 0052b042
        ;   Label: LAB_0052b042
    PUSH 0x5cf691                       ; 0052b044 | = "setTimeFactor"
    PUSH ESI                            ; 0052b049
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052b04a
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052b04f
    TEST EAX,EAX                        ; 0052b052
    JNZ 0x0052b06d                      ; 0052b054
        ;   XREF to: 0052b06d (CONDITIONAL_JUMP)  ; LAB_0052b06d
    MOV AL,byte ptr [ESI + 0xd]         ; 0052b056
    INC AL                              ; 0052b059
    AND EAX,0xff                        ; 0052b05b
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052b060 | DAT_006074b8
    JZ 0x0052f2f0                       ; 0052b067
        ;   XREF to: 0052f2f0 (CONDITIONAL_JUMP)  ; LAB_0052f2f0
    PUSH 0x9                            ; 0052b06d
        ;   Label: LAB_0052b06d
    PUSH 0x5cf6b9                       ; 0052b06f | = "setVictim"
    PUSH ESI                            ; 0052b074
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052b075
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052b07a
    TEST EAX,EAX                        ; 0052b07d
    JNZ 0x0052b098                      ; 0052b07f
        ;   XREF to: 0052b098 (CONDITIONAL_JUMP)  ; LAB_0052b098
    MOV AL,byte ptr [ESI + 0x9]         ; 0052b081
    INC AL                              ; 0052b084
    AND EAX,0xff                        ; 0052b086
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052b08b | DAT_006074b8
    JZ 0x0052f3f4                       ; 0052b092
        ;   XREF to: 0052f3f4 (CONDITIONAL_JUMP)  ; LAB_0052f3f4
    PUSH 0xe                            ; 0052b098
        ;   Label: LAB_0052b098
    PUSH 0x5cf754                       ; 0052b09a | = "setWalkTimeout"
    PUSH ESI                            ; 0052b09f
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052b0a0
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052b0a5
    TEST EAX,EAX                        ; 0052b0a8
    JNZ 0x0052b0c3                      ; 0052b0aa
        ;   XREF to: 0052b0c3 (CONDITIONAL_JUMP)  ; LAB_0052b0c3
    MOV AL,byte ptr [ESI + 0xe]         ; 0052b0ac
    INC AL                              ; 0052b0af
    AND EAX,0xff                        ; 0052b0b1
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052b0b6 | DAT_006074b8
    JZ 0x0052f5ca                       ; 0052b0bd
        ;   XREF to: 0052f5ca (CONDITIONAL_JUMP)  ; LAB_0052f5ca
    PUSH 0xa                            ; 0052b0c3
        ;   Label: LAB_0052b0c3
    PUSH 0x5cf794                       ; 0052b0c5 | = "snapToFace"
    PUSH ESI                            ; 0052b0ca
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052b0cb
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052b0d0
    TEST EAX,EAX                        ; 0052b0d3
    JNZ 0x0052b0ee                      ; 0052b0d5
        ;   XREF to: 0052b0ee (CONDITIONAL_JUMP)  ; LAB_0052b0ee
    MOV AL,byte ptr [ESI + 0xa]         ; 0052b0d7
    INC AL                              ; 0052b0da
    AND EAX,0xff                        ; 0052b0dc
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052b0e1 | DAT_006074b8
    JZ 0x0052f6ad                       ; 0052b0e8
        ;   XREF to: 0052f6ad (CONDITIONAL_JUMP)  ; LAB_0052f6ad
    PUSH 0x8                            ; 0052b0ee
        ;   Label: LAB_0052b0ee
    PUSH 0x5cf7d7                       ; 0052b0f0 | = "startSay"
    PUSH ESI                            ; 0052b0f5
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052b0f6
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052b0fb
    TEST EAX,EAX                        ; 0052b0fe
    JNZ 0x0052b119                      ; 0052b100
        ;   XREF to: 0052b119 (CONDITIONAL_JUMP)  ; LAB_0052b119
    MOV AL,byte ptr [ESI + 0x8]         ; 0052b102
    INC AL                              ; 0052b105
    AND EAX,0xff                        ; 0052b107
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052b10c | DAT_006074b8
    JZ 0x0052f833                       ; 0052b113
        ;   XREF to: 0052f833 (CONDITIONAL_JUMP)  ; LAB_0052f833
    PUSH 0xc                            ; 0052b119
        ;   Label: LAB_0052b119
    PUSH 0x5cf819                       ; 0052b11b | = "switchCamera"
    PUSH ESI                            ; 0052b120
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052b121
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052b126
    TEST EAX,EAX                        ; 0052b129
    JNZ 0x0052b144                      ; 0052b12b
        ;   XREF to: 0052b144 (CONDITIONAL_JUMP)  ; LAB_0052b144
    MOV AL,byte ptr [ESI + 0xc]         ; 0052b12d
    INC AL                              ; 0052b130
    AND EAX,0xff                        ; 0052b132
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052b137 | DAT_006074b8
    JZ 0x0052f95b                       ; 0052b13e
        ;   XREF to: 0052f95b (CONDITIONAL_JUMP)  ; LAB_0052f95b
    PUSH 0xc                            ; 0052b144
        ;   Label: LAB_0052b144
    PUSH 0x5cf86a                       ; 0052b146 | = "timedDisplay"
    PUSH ESI                            ; 0052b14b
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052b14c
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052b151
    TEST EAX,EAX                        ; 0052b154
    JNZ 0x0052b16f                      ; 0052b156
        ;   XREF to: 0052b16f (CONDITIONAL_JUMP)  ; LAB_0052b16f
    MOV AL,byte ptr [ESI + 0xc]         ; 0052b158
    INC AL                              ; 0052b15b
    AND EAX,0xff                        ; 0052b15d
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052b162 | DAT_006074b8
    JZ 0x0052fb37                       ; 0052b169
        ;   XREF to: 0052fb37 (CONDITIONAL_JUMP)  ; LAB_0052fb37
    PUSH 0xa                            ; 0052b16f
        ;   Label: LAB_0052b16f
    PUSH 0x5cf896                       ; 0052b171 | = "turnToFace"
    PUSH ESI                            ; 0052b176
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052b177
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052b17c
    TEST EAX,EAX                        ; 0052b17f
    JNZ 0x0052b19a                      ; 0052b181
        ;   XREF to: 0052b19a (CONDITIONAL_JUMP)  ; LAB_0052b19a
    MOV AL,byte ptr [ESI + 0xa]         ; 0052b183
    INC AL                              ; 0052b186
    AND EAX,0xff                        ; 0052b188
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052b18d | DAT_006074b8
    JZ 0x0052fc4f                       ; 0052b194
        ;   XREF to: 0052fc4f (CONDITIONAL_JUMP)  ; LAB_0052fc4f
    PUSH 0x4                            ; 0052b19a
        ;   Label: LAB_0052b19a
    PUSH 0x5cf8d9                       ; 0052b19c | DAT_005cf8d9
    PUSH ESI                            ; 0052b1a1
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052b1a2
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052b1a7
    TEST EAX,EAX                        ; 0052b1aa
    JNZ 0x0052b1c5                      ; 0052b1ac
        ;   XREF to: 0052b1c5 (CONDITIONAL_JUMP)  ; LAB_0052b1c5
    MOV AL,byte ptr [ESI + 0x4]         ; 0052b1ae
    INC AL                              ; 0052b1b1
    AND EAX,0xff                        ; 0052b1b3
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052b1b8 | DAT_006074b8
    JZ 0x0052fd70                       ; 0052b1bf
        ;   XREF to: 0052fd70 (CONDITIONAL_JUMP)  ; LAB_0052fd70
    PUSH 0x7                            ; 0052b1c5
        ;   Label: LAB_0052b1c5
    PUSH 0x5cf910                       ; 0052b1c7 | = "waitFor"
    PUSH ESI                            ; 0052b1cc
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052b1cd
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052b1d2
    TEST EAX,EAX                        ; 0052b1d5
    JNZ 0x0052b1f0                      ; 0052b1d7
        ;   XREF to: 0052b1f0 (CONDITIONAL_JUMP)  ; LAB_0052b1f0
    MOV AL,byte ptr [ESI + 0x7]         ; 0052b1d9
    INC AL                              ; 0052b1dc
    AND EAX,0xff                        ; 0052b1de
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052b1e3 | DAT_006074b8
    JZ 0x0052fe0e                       ; 0052b1ea
        ;   XREF to: 0052fe0e (CONDITIONAL_JUMP)  ; LAB_0052fe0e
    PUSH 0x6                            ; 0052b1f0
        ;   Label: LAB_0052b1f0
    PUSH 0x5cf918                       ; 0052b1f2 | = "walkTo"
    PUSH ESI                            ; 0052b1f7
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052b1f8
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052b1fd
    TEST EAX,EAX                        ; 0052b200
    JNZ 0x0052b21b                      ; 0052b202
        ;   XREF to: 0052b21b (CONDITIONAL_JUMP)  ; LAB_0052b21b
    MOV AL,byte ptr [ESI + 0x6]         ; 0052b204
    INC AL                              ; 0052b207
    AND EAX,0xff                        ; 0052b209
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0052b20e | DAT_006074b8
    JZ 0x0052fe78                       ; 0052b215
        ;   XREF to: 0052fe78 (CONDITIONAL_JUMP)  ; LAB_0052fe78
    PUSH ESI                            ; 0052b21b
        ;   Label: LAB_0052b21b
    MOV ECX,dword ptr [ESP + 0x47f8]    ; 0052b21c
    PUSH ECX                            ; 0052b223
    PUSH 0x5cf9d4                       ; 0052b224 | = "Unknown command on line %d: %s"
    JMP 0x00529bdf                      ; 0052b229
        ;   XREF to: 00529bdf (UNCONDITIONAL_JUMP)  ; LAB_00529bdf
    CMP dword ptr [0x01ed6808],0x0      ; 0052b22e | DAT_01ed6808
        ;   Label: LAB_0052b22e
    JZ 0x0052b241                       ; 0052b235
        ;   XREF to: 0052b241 (CONDITIONAL_JUMP)  ; LAB_0052b241
    MOV dword ptr [0x01ed6808],0x1      ; 0052b237 | DAT_01ed6808
    MOV dword ptr [ESP + 0x47f8],0x5ce17f ; 0052b241 | DAT_005ce17f
        ;   Label: LAB_0052b241
    JMP 0x00529b1b                      ; 0052b24c
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    CMP dword ptr [0x01ed6808],0x0      ; 0052b251 | DAT_01ed6808
        ;   Label: LAB_0052b251
    JZ 0x0052b264                       ; 0052b258
        ;   XREF to: 0052b264 (CONDITIONAL_JUMP)  ; LAB_0052b264
    MOV dword ptr [0x01ed6808],0x2      ; 0052b25a | DAT_01ed6808
    MOV dword ptr [ESP + 0x47f8],0x5ce18f ; 0052b264 | DAT_005ce18f
        ;   Label: LAB_0052b264
    JMP 0x00529b1b                      ; 0052b26f
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    CMP dword ptr [0x01ed6808],0x0      ; 0052b274 | DAT_01ed6808
        ;   Label: LAB_0052b274
    JNZ 0x0052b29c                      ; 0052b27b
        ;   XREF to: 0052b29c (CONDITIONAL_JUMP)  ; LAB_0052b29c
    PUSH ESI                            ; 0052b27d
    MOV EAX,[0x005fba60]                ; 0052b27e | DAT_005fba60
    PUSH EAX                            ; 0052b283
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 0052b284
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0052b289
    MOV dword ptr [ESP + 0x47f8],0x5ce41c ; 0052b28c | DAT_005ce41c
        ;   Label: LAB_0052b28c
    JMP 0x00529b1b                      ; 0052b297
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH ESI                            ; 0052b29c
        ;   Label: LAB_0052b29c
    MOV EDX,dword ptr [0x005fba60]      ; 0052b29d | DAT_005fba60
    PUSH EDX                            ; 0052b2a3
    CALL core_event.cpp_CEventList_validateCommands_FUN_00491b40 ; 0052b2a4
        ;   XREF to: 00491b40 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCommands_FUN_00491b40(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0052b2a9
    TEST EAX,EAX                        ; 0052b2ac
    JZ 0x0052b28c                       ; 0052b2ae
        ;   XREF to: 0052b28c (CONDITIONAL_JUMP)  ; LAB_0052b28c
    MOV EDI,0x1ed6810                   ; 0052b2b0
        ;   Label: LAB_0052b2b0
    MOV ESI,EAX                         ; 0052b2b5
    PUSH EDI                            ; 0052b2b7 | DAT_01ed6810
    MOV AL,byte ptr [ESI]               ; 0052b2b8
        ;   Label: LAB_0052b2b8
    MOV byte ptr [EDI],AL               ; 0052b2ba | DAT_01ed6810 | DAT_01ed6812
    CMP AL,0x0                          ; 0052b2bc
    JZ 0x0052b2d0                       ; 0052b2be
        ;   XREF to: 0052b2d0 (CONDITIONAL_JUMP)  ; LAB_0052b2d0
    MOV AL,byte ptr [ESI + 0x1]         ; 0052b2c0
    ADD ESI,0x2                         ; 0052b2c3
    MOV byte ptr [EDI + 0x1],AL         ; 0052b2c6 | DAT_01ed6811 | DAT_01ed6813
    ADD EDI,0x2                         ; 0052b2c9
    CMP AL,0x0                          ; 0052b2cc
    JNZ 0x0052b2b8                      ; 0052b2ce
        ;   XREF to: 0052b2b8 (CONDITIONAL_JUMP)  ; LAB_0052b2b8
    POP EDI                             ; 0052b2d0
        ;   Label: LAB_0052b2d0
    JMP 0x00529bec                      ; 0052b2d1
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0x12                        ; 0052b2d6
        ;   Label: LAB_0052b2d6
    PUSH ESI                            ; 0052b2d9
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052b2da
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052b2df
    LEA EDX,[ESP + 0x47fc]              ; 0052b2e2
    PUSH EDX                            ; 0052b2e9
    LEA EDX,[ESP + 0x2fe0]              ; 0052b2ea
    PUSH EDX                            ; 0052b2f1
    LEA EDX,[ESP + 0x33cc]              ; 0052b2f2
    PUSH EDX                            ; 0052b2f9
    PUSH 0x5ce430                       ; 0052b2fa | = " ( %[^,], %[^)])%n"
    MOV ESI,0xffffffff                  ; 0052b2ff
    PUSH EAX                            ; 0052b304
    MOV dword ptr [ESP + 0x480c],EAX    ; 0052b305
    MOV dword ptr [ESP + 0x4810],ESI    ; 0052b30c
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052b313
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052b318
    MOV EDI,dword ptr [ESP + 0x47fc]    ; 0052b31b
    CMP EDI,0x3                         ; 0052b322
    JGE 0x0052b33e                      ; 0052b325
        ;   XREF to: 0052b33e (CONDITIONAL_JUMP)  ; LAB_0052b33e
    PUSH 0x5ce443                       ; 0052b327 | = "Error parsing addItemToInventory comm..."
    PUSH 0x1ed6810                      ; 0052b32c | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052b331
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052b336
    JMP 0x00529bec                      ; 0052b339
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDX,dword ptr [ESP + 0x47f8]    ; 0052b33e
        ;   Label: LAB_0052b33e
    LEA EAX,[ESP + 0x33c4]              ; 0052b345
    ADD EDX,EDI                         ; 0052b34c
    PUSH EAX                            ; 0052b34e
    MOV dword ptr [ESP + 0x47fc],EDX    ; 0052b34f
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052b356
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052b35b
    LEA EAX,[ESP + 0x2fdc]              ; 0052b35e
    PUSH EAX                            ; 0052b365
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052b366
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052b36b
    PUSH 0x1d5ba38                      ; 0052b36e
    MOV ECX,dword ptr [0x01d5ba70]      ; 0052b373 | g_CHeroClassInfo.name_hash
    PUSH ECX                            ; 0052b379
    LEA EAX,[ESP + 0x33cc]              ; 0052b37a
    PUSH EAX                            ; 0052b381
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052b382
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    MOV ESI,EAX                         ; 0052b387
    ADD ESP,0xc                         ; 0052b389
    TEST EAX,EAX                        ; 0052b38c
    JNZ 0x0052b3a2                      ; 0052b38e
        ;   XREF to: 0052b3a2 (CONDITIONAL_JUMP)  ; LAB_0052b3a2
    CMP dword ptr [0x01ed701c],0x0      ; 0052b390 | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052b397
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052b39d
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    PUSH 0x7df978                       ; 0052b3a2 | g_CDemonActorClassInfo
        ;   Label: LAB_0052b3a2
    MOV EDI,dword ptr [0x007df9b0]      ; 0052b3a7 | g_CDemonActorClassInfo.name_hash
    PUSH EDI                            ; 0052b3ad
    LEA EAX,[ESP + 0x2fe4]              ; 0052b3ae
    PUSH EAX                            ; 0052b3b5
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052b3b6
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    ADD ESP,0xc                         ; 0052b3bb
    TEST EAX,EAX                        ; 0052b3be
    JNZ 0x0052b3d4                      ; 0052b3c0
        ;   XREF to: 0052b3d4 (CONDITIONAL_JUMP)  ; LAB_0052b3d4
    CMP dword ptr [0x01ed701c],0x0      ; 0052b3c2 | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052b3c9
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052b3cf
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDX,dword ptr [0x01ed6808]      ; 0052b3d4 | DAT_01ed6808
        ;   Label: LAB_0052b3d4
    TEST EDX,EDX                        ; 0052b3da
    JNZ 0x00529b1b                      ; 0052b3dc
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH EDX                            ; 0052b3e2
    PUSH EAX                            ; 0052b3e3
    ADD ESI,0x206e8                     ; 0052b3e4
    PUSH ESI                            ; 0052b3ea
    CALL core_inv.cpp_FUN_004da880      ; 0052b3eb
        ;   XREF to: 004da880 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004da880(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 0052b3f0
    JMP 0x00529b1b                      ; 0052b3f3
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0xe                         ; 0052b3f8
        ;   Label: LAB_0052b3f8
    PUSH ESI                            ; 0052b3fb
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052b3fc
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052b401
    LEA EDX,[ESP + 0x488c]              ; 0052b404
    PUSH EDX                            ; 0052b40b
    LEA EDX,[ESP + 0x47f0]              ; 0052b40c
    PUSH EDX                            ; 0052b413
    LEA EDX,[ESP + 0x4240]              ; 0052b414
    PUSH EDX                            ; 0052b41b
    LEA EDX,[ESP + 0x4370]              ; 0052b41c
    PUSH EDX                            ; 0052b423
    PUSH 0x5ce481                       ; 0052b424 | = "( %[^,], %[^,], %f )%n"
    MOV EDI,0xffffffff                  ; 0052b429
    PUSH EAX                            ; 0052b42e
    MOV dword ptr [ESP + 0x4810],EAX    ; 0052b42f
    MOV dword ptr [ESP + 0x48a4],EDI    ; 0052b436
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052b43d
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x18                        ; 0052b442
    MOV EAX,dword ptr [ESP + 0x488c]    ; 0052b445
    CMP EAX,0x5                         ; 0052b44c
    JGE 0x0052b468                      ; 0052b44f
        ;   XREF to: 0052b468 (CONDITIONAL_JUMP)  ; LAB_0052b468
    PUSH 0x5ce498                       ; 0052b451 | = "Error parsing addLightFilter command ..."
    PUSH 0x1ed6810                      ; 0052b456 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052b45b
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052b460
    JMP 0x00529bec                      ; 0052b463
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDX,dword ptr [ESP + 0x47f8]    ; 0052b468
        ;   Label: LAB_0052b468
    ADD EDX,EAX                         ; 0052b46f
    LEA EAX,[ESP + 0x483c]              ; 0052b471
    PUSH EAX                            ; 0052b478
    LEA EAX,[ESP + 0x4920]              ; 0052b479
    PUSH EAX                            ; 0052b480
    LEA EAX,[ESP + 0x436c]              ; 0052b481
    PUSH EAX                            ; 0052b488
    MOV ECX,dword ptr [0x00603b28]      ; 0052b489 | g_CDemonSetPtr
    PUSH ECX                            ; 0052b48f | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x4808],EDX    ; 0052b490
    CALL core_set.cpp_CDemonSet_addLightFilter_FUN_0053b3b0 ; 0052b497
        ;   XREF to: 0053b3b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addLightFilter_FUN_0053b3b0(CDemonSet * this_ptr, char * light_name, C3DSLight * * out_light, CDemonLight * * out_master_light)
    ADD ESP,0x10                        ; 0052b49c
    CMP dword ptr [ESP + 0x491c],0x0    ; 0052b49f
    JNZ 0x0052b4c8                      ; 0052b4a7
        ;   XREF to: 0052b4c8 (CONDITIONAL_JUMP)  ; LAB_0052b4c8
    LEA EAX,[ESP + 0x4364]              ; 0052b4a9
    PUSH EAX                            ; 0052b4b0
    PUSH 0x5ce4c3                       ; 0052b4b1 | = "Light \"%s\" does not exist"
    PUSH 0x1ed6810                      ; 0052b4b6 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052b4bb
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 0052b4c0
    JMP 0x00529bec                      ; 0052b4c3
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EAX,[ESP + 0x4238]              ; 0052b4c8
        ;   Label: LAB_0052b4c8
    PUSH EAX                            ; 0052b4cf
    PUSH 0x5ce4dd                       ; 0052b4d0 | DAT_005ce4dd
    CALL engine_dosio.cpp_getFileSize_FUN_004657f0 ; 0052b4d5
        ;   XREF to: 004657f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004657f0(char * directory, char * filename)
    ADD ESP,0x8                         ; 0052b4da
    TEST EAX,EAX                        ; 0052b4dd
    JLE 0x0052b514                      ; 0052b4df
        ;   XREF to: 0052b514 (CONDITIONAL_JUMP)  ; LAB_0052b514
    MOV EDI,dword ptr [0x01ed6808]      ; 0052b4e1 | DAT_01ed6808
    TEST EDI,EDI                        ; 0052b4e7
    JNZ 0x00529b1b                      ; 0052b4e9
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH EDI                            ; 0052b4ef
    LEA EAX,[ESP + 0x423c]              ; 0052b4f0
    PUSH dword ptr [ESP + 0x47f0]       ; 0052b4f7
    PUSH EAX                            ; 0052b4fe
    MOV EAX,dword ptr [ESP + 0x4928]    ; 0052b4ff
    PUSH EAX                            ; 0052b506
    CALL core_setutil.cpp_C3DSLight_addFilter_FUN_00542e50 ; 0052b507
        ;   XREF to: 00542e50 (UNCONDITIONAL_CALL)  ; undefined core_setutil.cpp_C3DSLight_addFilter_FUN_00542e50()
    ADD ESP,0x10                        ; 0052b50c
    JMP 0x00529b1b                      ; 0052b50f
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EAX,[ESP + 0x4238]              ; 0052b514
        ;   Label: LAB_0052b514
    PUSH EAX                            ; 0052b51b
    PUSH 0x5ce4e1                       ; 0052b51c | = "Can't open filter \"%s\""
    PUSH 0x1ed6810                      ; 0052b521 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052b526
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 0052b52b
    JMP 0x00529bec                      ; 0052b52e
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0x10                        ; 0052b533
        ;   Label: LAB_0052b533
    PUSH ESI                            ; 0052b536
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052b537
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052b53c
    MOV dword ptr [ESP + 0x47f8],EAX    ; 0052b53f
    LEA EAX,[ESP + 0x3eb4]              ; 0052b546
    PUSH EAX                            ; 0052b54d
    LEA EAX,[ESP + 0x47fc]              ; 0052b54e
    PUSH EAX                            ; 0052b555
    CALL core_script.cpp_parseConditionExpr_FUN_00528970 ; 0052b556
        ;   XREF to: 00528970 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseConditionExpr_FUN_00528970(char * * cursor, char * out_buffer)
    ADD ESP,0x8                         ; 0052b55b
    TEST EAX,EAX                        ; 0052b55e
    JNZ 0x0052b2b0                      ; 0052b560
        ;   XREF to: 0052b2b0 (CONDITIONAL_JUMP)  ; LAB_0052b2b0
    CMP dword ptr [0x01ed6808],0x0      ; 0052b566 | DAT_01ed6808
    JNZ 0x00529b1b                      ; 0052b56d
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EAX,[ESP + 0x3eb4]              ; 0052b573
    PUSH EAX                            ; 0052b57a
    MOV ECX,dword ptr [0x005fba60]      ; 0052b57b | DAT_005fba60
    PUSH ECX                            ; 0052b581
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0052b582
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    MOV EDX,dword ptr [0x005fe9dc]      ; 0052b587 | g_CGamePtr
    ADD ESP,0x8                         ; 0052b58d
    MOV dword ptr [EDX + 0x254],EAX     ; 0052b590 | g_CGameInstance.field596_0x254
    JMP 0x00529b1b                      ; 0052b596
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0x11                        ; 0052b59b
        ;   Label: LAB_0052b59b
    PUSH ESI                            ; 0052b59e
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052b59f
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052b5a4
    MOV dword ptr [ESP + 0x47f8],EAX    ; 0052b5a7
    LEA EAX,[ESP + 0x3f18]              ; 0052b5ae
    PUSH EAX                            ; 0052b5b5
    LEA EAX,[ESP + 0x47fc]              ; 0052b5b6
    PUSH EAX                            ; 0052b5bd
    CALL core_script.cpp_parseConditionExpr_FUN_00528970 ; 0052b5be
        ;   XREF to: 00528970 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseConditionExpr_FUN_00528970(char * * cursor, char * out_buffer)
    ADD ESP,0x8                         ; 0052b5c3
    TEST EAX,EAX                        ; 0052b5c6
    JNZ 0x0052b2b0                      ; 0052b5c8
        ;   XREF to: 0052b2b0 (CONDITIONAL_JUMP)  ; LAB_0052b2b0
    CMP dword ptr [0x01ed6808],0x0      ; 0052b5ce | DAT_01ed6808
    JNZ 0x00529b1b                      ; 0052b5d5
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EAX,[ESP + 0x3f18]              ; 0052b5db
    PUSH EAX                            ; 0052b5e2
    MOV EDI,dword ptr [0x005fba60]      ; 0052b5e3 | DAT_005fba60
    PUSH EDI                            ; 0052b5e9
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0052b5ea
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0052b5ef
    XOR EDX,EDX                         ; 0052b5f2
    TEST EAX,EAX                        ; 0052b5f4
    SETZ AL                             ; 0052b5f6
    MOV DL,AL                           ; 0052b5f9
    MOV EAX,[0x005fe9dc]                ; 0052b5fb | g_CGamePtr
    MOV dword ptr [0x01ed7014],EDX      ; 0052b600 | DAT_01ed7014
    MOV dword ptr [EAX + 0x25c],EDX     ; 0052b606 | g_CGameInstance.field604_0x25c
    JMP 0x00529b1b                      ; 0052b60c
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0xf                         ; 0052b611
        ;   Label: LAB_0052b611
    PUSH ESI                            ; 0052b614
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052b615
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052b61a
    MOV dword ptr [ESP + 0x47f8],EAX    ; 0052b61d
    LEA EAX,[ESP + 0x3f7c]              ; 0052b624
    PUSH EAX                            ; 0052b62b
    LEA EAX,[ESP + 0x47fc]              ; 0052b62c
    PUSH EAX                            ; 0052b633
    CALL core_script.cpp_parseConditionExpr_FUN_00528970 ; 0052b634
        ;   XREF to: 00528970 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseConditionExpr_FUN_00528970(char * * cursor, char * out_buffer)
    ADD ESP,0x8                         ; 0052b639
    TEST EAX,EAX                        ; 0052b63c
    JNZ 0x0052b2b0                      ; 0052b63e
        ;   XREF to: 0052b2b0 (CONDITIONAL_JUMP)  ; LAB_0052b2b0
    CMP dword ptr [0x01ed6808],0x0      ; 0052b644 | DAT_01ed6808
    JNZ 0x00529b1b                      ; 0052b64b
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EAX,[ESP + 0x3f7c]              ; 0052b651
    PUSH EAX                            ; 0052b658
    MOV EDX,dword ptr [0x005fba60]      ; 0052b659 | DAT_005fba60
    PUSH EDX                            ; 0052b65f
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0052b660
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    MOV EDX,dword ptr [0x005fe9dc]      ; 0052b665 | g_CGamePtr
    ADD ESP,0x8                         ; 0052b66b
    MOV dword ptr [EDX + 0x250],EAX     ; 0052b66e | g_CGameInstance.field592_0x250
    JMP 0x00529b1b                      ; 0052b674
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0x15                        ; 0052b679
        ;   Label: LAB_0052b679
    PUSH ESI                            ; 0052b67c
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052b67d
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052b682
    LEA EDX,[ESP + 0x47f0]              ; 0052b685
    PUSH EDX                            ; 0052b68c
    LEA EDX,[ESP + 0x1618]              ; 0052b68d
    PUSH EDX                            ; 0052b694
    LEA EDX,[ESP + 0x17ac]              ; 0052b695
    PUSH EDX                            ; 0052b69c
    PUSH 0x5ce541                       ; 0052b69d | = "(%[^,], %[^)])%n"
    MOV ECX,0xffffffff                  ; 0052b6a2
    PUSH EAX                            ; 0052b6a7
    MOV dword ptr [ESP + 0x480c],EAX    ; 0052b6a8
    MOV dword ptr [ESP + 0x4804],ECX    ; 0052b6af
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052b6b6
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052b6bb
    MOV ESI,dword ptr [ESP + 0x47f0]    ; 0052b6be
    CMP ESI,0x2                         ; 0052b6c5
    JGE 0x0052b6e1                      ; 0052b6c8
        ;   XREF to: 0052b6e1 (CONDITIONAL_JUMP)  ; LAB_0052b6e1
    PUSH 0x5ce552                       ; 0052b6ca | = "Error parsing attachActorToPlatform c..."
    PUSH 0x1ed6810                      ; 0052b6cf | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052b6d4
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052b6d9
    JMP 0x00529bec                      ; 0052b6dc
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDI,dword ptr [ESP + 0x47f8]    ; 0052b6e1
        ;   Label: LAB_0052b6e1
    LEA EAX,[ESP + 0x17a4]              ; 0052b6e8
    ADD EDI,ESI                         ; 0052b6ef
    PUSH EAX                            ; 0052b6f1
    MOV dword ptr [ESP + 0x47fc],EDI    ; 0052b6f2
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052b6f9
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052b6fe
    LEA EAX,[ESP + 0x1614]              ; 0052b701
    PUSH EAX                            ; 0052b708
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052b709
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052b70e
    PUSH 0x1ed2ab4                      ; 0052b711
    MOV EAX,[0x01ed2aec]                ; 0052b716 | g_CPlatformClassInfo.name_hash
    PUSH EAX                            ; 0052b71b
    LEA EAX,[ESP + 0x161c]              ; 0052b71c
    PUSH EAX                            ; 0052b723
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052b724
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    MOV ESI,EAX                         ; 0052b729
    ADD ESP,0xc                         ; 0052b72b
    TEST EAX,EAX                        ; 0052b72e
    JNZ 0x0052b744                      ; 0052b730
        ;   XREF to: 0052b744 (CONDITIONAL_JUMP)  ; LAB_0052b744
    CMP dword ptr [0x01ed701c],0x0      ; 0052b732 | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052b739
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052b73f
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    PUSH 0x7df978                       ; 0052b744 | g_CDemonActorClassInfo
        ;   Label: LAB_0052b744
    MOV EDX,dword ptr [0x007df9b0]      ; 0052b749 | g_CDemonActorClassInfo.name_hash
    PUSH EDX                            ; 0052b74f
    LEA EAX,[ESP + 0x17ac]              ; 0052b750
    PUSH EAX                            ; 0052b757
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052b758
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    ADD ESP,0xc                         ; 0052b75d
    TEST EAX,EAX                        ; 0052b760
    JNZ 0x0052b776                      ; 0052b762
        ;   XREF to: 0052b776 (CONDITIONAL_JUMP)  ; LAB_0052b776
    CMP dword ptr [0x01ed701c],0x0      ; 0052b764 | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052b76b
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052b771
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    CMP dword ptr [0x01ed6808],0x0      ; 0052b776 | DAT_01ed6808
        ;   Label: LAB_0052b776
    JNZ 0x00529b1b                      ; 0052b77d
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH EAX                            ; 0052b783
    PUSH ESI                            ; 0052b784
    CALL core_platfrm.cpp_CPlatform_attachActor_FUN_00512aa0 ; 0052b785
        ;   XREF to: 00512aa0 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_attachActor_FUN_00512aa0(CPlatform * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0052b78a
    JMP 0x00529b1b                      ; 0052b78d
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0xb                         ; 0052b792
        ;   Label: LAB_0052b792
    PUSH ESI                            ; 0052b795
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052b796
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052b79b
    MOV dword ptr [ESP + 0x47f8],EAX    ; 0052b79e
    CMP dword ptr [0x01ed6808],0x0      ; 0052b7a5 | DAT_01ed6808
    JNZ 0x00529b1b                      ; 0052b7ac
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EDX,dword ptr [0x005fe9dc]      ; 0052b7b2 | g_CGamePtr
    PUSH EDX                            ; 0052b7b8
    CALL core_game.cpp_FUN_004bd620     ; 0052b7b9
        ;   XREF to: 004bd620 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004bd620(CGame * this_ptr)
    ADD ESP,0x4                         ; 0052b7be
    JMP 0x00529b1b                      ; 0052b7c1
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0xc                         ; 0052b7c6
        ;   Label: LAB_0052b7c6
    PUSH ESI                            ; 0052b7c9
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052b7ca
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052b7cf
    MOV ECX,dword ptr [0x01ed6808]      ; 0052b7d2 | DAT_01ed6808
    MOV dword ptr [ESP + 0x47f8],EAX    ; 0052b7d8
    TEST ECX,ECX                        ; 0052b7df
    JNZ 0x00529b1b                      ; 0052b7e1
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV ESI,dword ptr [0x005fe9dc]      ; 0052b7e7 | g_CGamePtr
    PUSH ESI                            ; 0052b7ed
    CALL core_game.cpp_CGame_beginFadeOut_FUN_004bd660 ; 0052b7ee
        ;   XREF to: 004bd660 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_beginFadeOut_FUN_004bd660(CGame * this_ptr)
    ADD ESP,0x4                         ; 0052b7f3
    JMP 0x00529b1b                      ; 0052b7f6
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0xa                         ; 0052b7fb
        ;   Label: LAB_0052b7fb
    PUSH ESI                            ; 0052b7fe
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052b7ff
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052b804
    MOV EDI,dword ptr [0x01ed6808]      ; 0052b807 | DAT_01ed6808
    MOV dword ptr [ESP + 0x47f8],EAX    ; 0052b80d
    TEST EDI,EDI                        ; 0052b814
    JNZ 0x00529b1b                      ; 0052b816
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EAX,dword ptr [ESP + 0x47f4]    ; 0052b81c
    PUSH EAX                            ; 0052b823
    PUSH 0x5ce5a8                       ; 0052b824 | = "Script breakpoint reached at line %d"
    LEA EAX,[ESP + 0x44fc]              ; 0052b829
    PUSH EAX                            ; 0052b830
    CALL crt_unknown.c_FUN_005a28c0     ; 0052b831
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 0052b836
    LEA EAX,[ESP + 0x44f4]              ; 0052b839
    PUSH 0x40a00000                     ; 0052b840
    PUSH EAX                            ; 0052b845
    MOV EDX,dword ptr [0x005fe9dc]      ; 0052b846 | g_CGamePtr
    PUSH EDX                            ; 0052b84c
    CALL core_game.cpp_CGame_displayMessage_FUN_004b46b0 ; 0052b84d
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b46b0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 0052b852
    MOV dword ptr [EBX + 0x1c],0x2      ; 0052b855
    JMP 0x00529b1b                      ; 0052b85c
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0x10                        ; 0052b861
        ;   Label: LAB_0052b861
    PUSH ESI                            ; 0052b864
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052b865
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052b86a
    MOV ECX,dword ptr [0x01ed6808]      ; 0052b86d | DAT_01ed6808
    MOV dword ptr [ESP + 0x47f8],EAX    ; 0052b873
    TEST ECX,ECX                        ; 0052b87a
    JNZ 0x00529b1b                      ; 0052b87c
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV ESI,dword ptr [0x00603b28]      ; 0052b882 | g_CDemonSetPtr
    PUSH ESI                            ; 0052b888 | g_CDemonSetInstance
    CALL core_setdir.cpp_FUN_00540bc0   ; 0052b889
        ;   XREF to: 00540bc0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_FUN_00540bc0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0052b88e
    JMP 0x00529b1b                      ; 0052b891
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0xc                         ; 0052b896
        ;   Label: LAB_0052b896
    PUSH ESI                            ; 0052b899
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052b89a
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052b89f
    PUSH 0xc8                           ; 0052b8a2
    MOV dword ptr [ESP + 0x47fc],EAX    ; 0052b8a7
    LEA EAX,[ESP + 0x2428]              ; 0052b8ae
    PUSH EAX                            ; 0052b8b5
    LEA EAX,[ESP + 0x4800]              ; 0052b8b6
    PUSH EAX                            ; 0052b8bd
    CALL core_script.cpp_parseArgument_FUN_005288c0 ; 0052b8be
        ;   XREF to: 005288c0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005288c0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0052b8c3
    TEST EAX,EAX                        ; 0052b8c6
    JZ 0x0052b8f0                       ; 0052b8c8
        ;   XREF to: 0052b8f0 (CONDITIONAL_JUMP)  ; LAB_0052b8f0
    MOV EDI,0x1ed6810                   ; 0052b8ca
    MOV ESI,EAX                         ; 0052b8cf
    PUSH EDI                            ; 0052b8d1 | DAT_01ed6810
    MOV AL,byte ptr [ESI]               ; 0052b8d2
        ;   Label: LAB_0052b8d2
    MOV byte ptr [EDI],AL               ; 0052b8d4 | DAT_01ed6810 | DAT_01ed6812
    CMP AL,0x0                          ; 0052b8d6
    JZ 0x0052b8ea                       ; 0052b8d8
        ;   XREF to: 0052b8ea (CONDITIONAL_JUMP)  ; LAB_0052b8ea
    MOV AL,byte ptr [ESI + 0x1]         ; 0052b8da
    ADD ESI,0x2                         ; 0052b8dd
    MOV byte ptr [EDI + 0x1],AL         ; 0052b8e0 | DAT_01ed6811 | DAT_01ed6813
    ADD EDI,0x2                         ; 0052b8e3
    CMP AL,0x0                          ; 0052b8e6
    JNZ 0x0052b8d2                      ; 0052b8e8
        ;   XREF to: 0052b8d2 (CONDITIONAL_JUMP)  ; LAB_0052b8d2
    POP EDI                             ; 0052b8ea
        ;   Label: LAB_0052b8ea
    JMP 0x00529bec                      ; 0052b8eb
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    PUSH 0x5ce5eb                       ; 0052b8f0 | DAT_005ce5eb
        ;   Label: LAB_0052b8f0
    LEA EAX,[ESP + 0x2428]              ; 0052b8f5
    PUSH EAX                            ; 0052b8fc
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0052b8fd
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0052b902
    TEST EAX,EAX                        ; 0052b905
    JNZ 0x0052b963                      ; 0052b907
        ;   XREF to: 0052b963 (CONDITIONAL_JUMP)  ; LAB_0052b963
    MOV ESI,dword ptr [0x01ed6808]      ; 0052b909 | DAT_01ed6808
    TEST ESI,ESI                        ; 0052b90f
    JNZ 0x00529b1b                      ; 0052b911
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    XOR EDI,EDI                         ; 0052b917
    MOV EAX,[0x00603b28]                ; 0052b919 | g_CDemonSetPtr
        ;   Label: LAB_0052b919
    CMP EDI,dword ptr [EAX + 0x14d164]  ; 0052b91e | g_CDemonSetInstance.field1364324_0x14d164
    JGE 0x00529b1b                      ; 0052b924
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV ECX,dword ptr [0x007e2cec]      ; 0052b92a | g_CCharacterClassInfo.name_hash
    PUSH ECX                            ; 0052b930
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 0052b931
    PUSH EDX                            ; 0052b938
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0052b939
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0052b93e
    TEST EAX,EAX                        ; 0052b941
    JNZ 0x0052b94b                      ; 0052b943
        ;   XREF to: 0052b94b (CONDITIONAL_JUMP)  ; LAB_0052b94b
    INC EDI                             ; 0052b945
        ;   Label: LAB_0052b945
    ADD ESI,0x4                         ; 0052b946
    JMP 0x0052b919                      ; 0052b949
        ;   XREF to: 0052b919 (UNCONDITIONAL_JUMP)  ; LAB_0052b919
    PUSH 0x0                            ; 0052b94b
        ;   Label: LAB_0052b94b
    PUSH 0x0                            ; 0052b94d
    PUSH 0x0                            ; 0052b94f
    MOV EDX,dword ptr [EAX + 0x154]     ; 0052b951
    PUSH EAX                            ; 0052b957
    CALL dword ptr [EDX + 0x130]        ; 0052b958
    ADD ESP,0x10                        ; 0052b95e
    JMP 0x0052b945                      ; 0052b961
        ;   XREF to: 0052b945 (UNCONDITIONAL_JUMP)  ; LAB_0052b945
    PUSH 0x7e2cb4                       ; 0052b963 | g_CCharacterClassInfo
        ;   Label: LAB_0052b963
    MOV EDI,dword ptr [0x007e2cec]      ; 0052b968 | g_CCharacterClassInfo.name_hash
    PUSH EDI                            ; 0052b96e
    LEA EAX,[ESP + 0x242c]              ; 0052b96f
    PUSH EAX                            ; 0052b976
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052b977
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    ADD ESP,0xc                         ; 0052b97c
    TEST EAX,EAX                        ; 0052b97f
    JNZ 0x0052b995                      ; 0052b981
        ;   XREF to: 0052b995 (CONDITIONAL_JUMP)  ; LAB_0052b995
    CMP dword ptr [0x01ed701c],0x0      ; 0052b983 | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052b98a
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052b990
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    CMP dword ptr [0x01ed6808],0x0      ; 0052b995 | DAT_01ed6808
        ;   Label: LAB_0052b995
    JNZ 0x00529b1b                      ; 0052b99c
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH 0x0                            ; 0052b9a2
    PUSH 0x0                            ; 0052b9a4
    PUSH 0x0                            ; 0052b9a6
    MOV EDX,dword ptr [EAX + 0x154]     ; 0052b9a8
    PUSH EAX                            ; 0052b9ae
    CALL dword ptr [EDX + 0x130]        ; 0052b9af
    ADD ESP,0x10                        ; 0052b9b5
    JMP 0x00529b1b                      ; 0052b9b8
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0xe                         ; 0052b9bd
        ;   Label: LAB_0052b9bd
    PUSH ESI                            ; 0052b9c0
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052b9c1
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052b9c6
    PUSH 0xc8                           ; 0052b9c9
    MOV dword ptr [ESP + 0x47fc],EAX    ; 0052b9ce
    LEA EAX,[ESP + 0x10a0]              ; 0052b9d5
    PUSH EAX                            ; 0052b9dc
    LEA EAX,[ESP + 0x4800]              ; 0052b9dd
    PUSH EAX                            ; 0052b9e4
    CALL core_script.cpp_parseArgument_FUN_005288c0 ; 0052b9e5
        ;   XREF to: 005288c0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005288c0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0052b9ea
    TEST EAX,EAX                        ; 0052b9ed
    JZ 0x0052ba17                       ; 0052b9ef
        ;   XREF to: 0052ba17 (CONDITIONAL_JUMP)  ; LAB_0052ba17
    MOV EDI,0x1ed6810                   ; 0052b9f1
        ;   Label: LAB_0052b9f1
    MOV ESI,EAX                         ; 0052b9f6
    PUSH EDI                            ; 0052b9f8 | DAT_01ed6810
    MOV AL,byte ptr [ESI]               ; 0052b9f9
        ;   Label: LAB_0052b9f9
    MOV byte ptr [EDI],AL               ; 0052b9fb | DAT_01ed6810 | DAT_01ed6812
    CMP AL,0x0                          ; 0052b9fd
    JZ 0x0052ba11                       ; 0052b9ff
        ;   XREF to: 0052ba11 (CONDITIONAL_JUMP)  ; LAB_0052ba11
    MOV AL,byte ptr [ESI + 0x1]         ; 0052ba01
    ADD ESI,0x2                         ; 0052ba04
    MOV byte ptr [EDI + 0x1],AL         ; 0052ba07 | DAT_01ed6811 | DAT_01ed6813
    ADD EDI,0x2                         ; 0052ba0a
    CMP AL,0x0                          ; 0052ba0d
    JNZ 0x0052b9f9                      ; 0052ba0f
        ;   XREF to: 0052b9f9 (CONDITIONAL_JUMP)  ; LAB_0052b9f9
    POP EDI                             ; 0052ba11
        ;   Label: LAB_0052ba11
    JMP 0x00529bec                      ; 0052ba12
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EAX,[ESP + 0x109c]              ; 0052ba17
        ;   Label: LAB_0052ba17
    PUSH EAX                            ; 0052ba1e
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052ba1f
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    MOV EDI,dword ptr [0x01ed6808]      ; 0052ba24 | DAT_01ed6808
    ADD ESP,0x4                         ; 0052ba2a
    TEST EDI,EDI                        ; 0052ba2d
    JNZ 0x00529b1b                      ; 0052ba2f
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EAX,[ESP + 0x109c]              ; 0052ba35
    PUSH EAX                            ; 0052ba3c
    MOV EAX,[0x00600530]                ; 0052ba3d | DAT_00600530
    PUSH EAX                            ; 0052ba42
    CALL core_mission.cpp_FUN_004f7460  ; 0052ba43
        ;   XREF to: 004f7460 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_FUN_004f7460(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 0052ba48
    MOV dword ptr [EBX],0x1             ; 0052ba4b
    MOV dword ptr [ESP + 0x47e4],EDI    ; 0052ba51
    JMP 0x00529b1b                      ; 0052ba58
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0x11                        ; 0052ba5d
        ;   Label: LAB_0052ba5d
    PUSH ESI                            ; 0052ba60
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052ba61
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052ba66
    LEA EDX,[ESP + 0x4808]              ; 0052ba69
    PUSH EDX                            ; 0052ba70
    LEA EDX,[ESP + 0xeb0]               ; 0052ba71
    PUSH EDX                            ; 0052ba78
    LEA EDX,[ESP + 0x480c]              ; 0052ba79
    PUSH EDX                            ; 0052ba80
    PUSH 0x5ce610                       ; 0052ba81 | = "(%d , %[^)])%n"
    MOV ECX,0xffffffff                  ; 0052ba86
    PUSH EAX                            ; 0052ba8b
    MOV dword ptr [ESP + 0x480c],EAX    ; 0052ba8c
    MOV dword ptr [ESP + 0x481c],ECX    ; 0052ba93
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052ba9a
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052ba9f
    MOV ESI,dword ptr [ESP + 0x4808]    ; 0052baa2
    CMP ESI,0x2                         ; 0052baa9
    JGE 0x0052bac5                      ; 0052baac
        ;   XREF to: 0052bac5 (CONDITIONAL_JUMP)  ; LAB_0052bac5
    PUSH 0x5ce61f                       ; 0052baae | = "Error parsing changeSetFilename comma..."
    PUSH 0x1ed6810                      ; 0052bab3 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052bab8
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052babd
    JMP 0x00529bec                      ; 0052bac0
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDI,dword ptr [ESP + 0x47f8]    ; 0052bac5
        ;   Label: LAB_0052bac5
    LEA EAX,[ESP + 0xeac]               ; 0052bacc
    ADD EDI,ESI                         ; 0052bad3
    PUSH EAX                            ; 0052bad5
    MOV dword ptr [ESP + 0x47fc],EDI    ; 0052bad6
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052badd
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052bae2
    MOV EAX,dword ptr [ESP + 0x4804]    ; 0052bae5
    TEST EAX,EAX                        ; 0052baec
    JL 0x0052bba2                       ; 0052baee
        ;   XREF to: 0052bba2 (CONDITIONAL_JUMP)  ; LAB_0052bba2
    MOV EDX,dword ptr [0x00600530]      ; 0052baf4 | DAT_00600530
    CMP EAX,dword ptr [EDX + 0x4]       ; 0052bafa | DAT_01d81084
    JGE 0x0052bba2                      ; 0052bafd
        ;   XREF to: 0052bba2 (CONDITIONAL_JUMP)  ; LAB_0052bba2
    LEA EAX,[ESP + 0xcac]               ; 0052bb03
    PUSH EAX                            ; 0052bb0a
    PUSH 0x0                            ; 0052bb0b
    PUSH 0x0                            ; 0052bb0d
    PUSH 0x0                            ; 0052bb0f
    LEA EAX,[ESP + 0xebc]               ; 0052bb11
    PUSH EAX                            ; 0052bb18
    CALL engine_dosio.cpp_FUN_00465e50  ; 0052bb19
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0052bb1e
    CMP byte ptr [ESP + 0xcac],0x0      ; 0052bb21
    JNZ 0x0052bb59                      ; 0052bb29
        ;   XREF to: 0052bb59 (CONDITIONAL_JUMP)  ; LAB_0052bb59
    MOV ESI,0x5ce65f                    ; 0052bb2b | DAT_005ce65f
    LEA EDI,[ESP + 0xeac]               ; 0052bb30
    PUSH EDI                            ; 0052bb37
    SUB ECX,ECX                         ; 0052bb38
    DEC ECX                             ; 0052bb3a
    MOV AL,0x0                          ; 0052bb3b
    SCASB.REPNE ES:EDI                  ; 0052bb3d
    DEC EDI                             ; 0052bb3f
    MOV AL,byte ptr [ESI]               ; 0052bb40 | DAT_005ce65f | DAT_005ce661
        ;   Label: LAB_0052bb40
    MOV byte ptr [EDI],AL               ; 0052bb42
    CMP AL,0x0                          ; 0052bb44
    JZ 0x0052bb58                       ; 0052bb46
        ;   XREF to: 0052bb58 (CONDITIONAL_JUMP)  ; LAB_0052bb58
    MOV AL,byte ptr [ESI + 0x1]         ; 0052bb48 | DAT_005ce660 | DAT_005ce662
    ADD ESI,0x2                         ; 0052bb4b
    MOV byte ptr [EDI + 0x1],AL         ; 0052bb4e
    ADD EDI,0x2                         ; 0052bb51
    CMP AL,0x0                          ; 0052bb54
    JNZ 0x0052bb40                      ; 0052bb56
        ;   XREF to: 0052bb40 (CONDITIONAL_JUMP)  ; LAB_0052bb40
    POP EDI                             ; 0052bb58
        ;   Label: LAB_0052bb58
    LEA EAX,[ESP + 0xeac]               ; 0052bb59
        ;   Label: LAB_0052bb59
    PUSH EAX                            ; 0052bb60
    PUSH 0x5ce664                       ; 0052bb61 | = "models"
    CALL engine_dosio.cpp_getFileSize_FUN_004657f0 ; 0052bb66
        ;   XREF to: 004657f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004657f0(char * directory, char * filename)
    ADD ESP,0x8                         ; 0052bb6b
    TEST EAX,EAX                        ; 0052bb6e
    JLE 0x0052bbb9                      ; 0052bb70
        ;   XREF to: 0052bbb9 (CONDITIONAL_JUMP)  ; LAB_0052bbb9
    CMP dword ptr [0x01ed6808],0x0      ; 0052bb72 | DAT_01ed6808
    JNZ 0x00529b1b                      ; 0052bb79
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EAX,[ESP + 0xeac]               ; 0052bb7f
    PUSH EAX                            ; 0052bb86
    MOV EDI,dword ptr [ESP + 0x4808]    ; 0052bb87
    PUSH EDI                            ; 0052bb8e
    MOV EAX,[0x00600530]                ; 0052bb8f | DAT_00600530
    PUSH EAX                            ; 0052bb94
    CALL core_mission.cpp_FUN_004f6cd0  ; 0052bb95
        ;   XREF to: 004f6cd0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004f6cd0()
    ADD ESP,0xc                         ; 0052bb9a
    JMP 0x00529b1b                      ; 0052bb9d
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH 0x5ce64d                       ; 0052bba2 | = "Invalid set index"
        ;   Label: LAB_0052bba2
    PUSH 0x1ed6810                      ; 0052bba7 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052bbac
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052bbb1
    JMP 0x00529bec                      ; 0052bbb4
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EAX,[ESP + 0xeac]               ; 0052bbb9
        ;   Label: LAB_0052bbb9
    PUSH EAX                            ; 0052bbc0
    PUSH 0x5ce66b                       ; 0052bbc1 | = "File models\\%s doesn't exist"
    PUSH 0x1ed6810                      ; 0052bbc6 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052bbcb
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 0052bbd0
    JMP 0x00529bec                      ; 0052bbd3
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0x5                         ; 0052bbd8
        ;   Label: LAB_0052bbd8
    PUSH ESI                            ; 0052bbdb
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052bbdc
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    MOV EDX,0xffffffff                  ; 0052bbe1
    ADD ESP,0x4                         ; 0052bbe6
    MOV dword ptr [ESP + 0x480c],EDX    ; 0052bbe9
    LEA EDX,[ESP + 0x480c]              ; 0052bbf0
    PUSH EDX                            ; 0052bbf7
    LEA EDX,[ESP + 0x3fe4]              ; 0052bbf8
    PUSH EDX                            ; 0052bbff
    PUSH 0x5ce68e                       ; 0052bc00 | = "(%[^)])%n"
    PUSH EAX                            ; 0052bc05
    MOV dword ptr [ESP + 0x4808],EAX    ; 0052bc06
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052bc0d
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 0052bc12
    CMP dword ptr [ESP + 0x480c],0x3    ; 0052bc15
    JL 0x0052bcf7                       ; 0052bc1d
        ;   XREF to: 0052bcf7 (CONDITIONAL_JUMP)  ; LAB_0052bcf7
    LEA EAX,[ESP + 0x3fe0]              ; 0052bc23
    PUSH EAX                            ; 0052bc2a
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052bc2b
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052bc30
    MOV EAX,dword ptr [ESP + 0x480c]    ; 0052bc33
    MOV ESI,dword ptr [ESP + 0x47f8]    ; 0052bc3a
    ADD ESI,EAX                         ; 0052bc41
    LEA EAX,[ESP + 0x3fe0]              ; 0052bc43
    PUSH EAX                            ; 0052bc4a
    PUSH EBX                            ; 0052bc4b
    MOV dword ptr [ESP + 0x4800],ESI    ; 0052bc4c
    CALL core_script.cpp_FUN_00530990   ; 0052bc53
        ;   XREF to: 00530990 (UNCONDITIONAL_CALL)  ; int core_script.cpp_FUN_00530990(CScript * this_ptr, char * path)
    ADD ESP,0x8                         ; 0052bc58
    TEST EAX,EAX                        ; 0052bc5b
    JL 0x0052bd0e                       ; 0052bc5d
        ;   XREF to: 0052bd0e (CONDITIONAL_JUMP)  ; LAB_0052bd0e
    IMUL EDX,EAX,0x226                  ; 0052bc63
    MOV EAX,dword ptr [EBX + 0x24]      ; 0052bc69
    ADD EAX,EDX                         ; 0052bc6c
    LEA EDX,[EAX + 0x78]                ; 0052bc6e
    MOV dword ptr [ESP + 0x4830],EDX    ; 0052bc71
    LEA EDX,[EAX + 0x96]                ; 0052bc78
    LEA EDI,[ESP + 0x3fe0]              ; 0052bc7e
    LEA ESI,[EAX + 0x3c]                ; 0052bc85
    MOV dword ptr [ESP + 0x4810],EDX    ; 0052bc88
    PUSH EDI                            ; 0052bc8f
    MOV AL,byte ptr [ESI]               ; 0052bc90
        ;   Label: LAB_0052bc90
    MOV byte ptr [EDI],AL               ; 0052bc92
    CMP AL,0x0                          ; 0052bc94
    JZ 0x0052bca8                       ; 0052bc96
        ;   XREF to: 0052bca8 (CONDITIONAL_JUMP)  ; LAB_0052bca8
    MOV AL,byte ptr [ESI + 0x1]         ; 0052bc98
    ADD ESI,0x2                         ; 0052bc9b
    MOV byte ptr [EDI + 0x1],AL         ; 0052bc9e
    ADD EDI,0x2                         ; 0052bca1
    CMP AL,0x0                          ; 0052bca4
    JNZ 0x0052bc90                      ; 0052bca6
        ;   XREF to: 0052bc90 (CONDITIONAL_JUMP)  ; LAB_0052bc90
    POP EDI                             ; 0052bca8
        ;   Label: LAB_0052bca8
    FLD float ptr [EBX + 0x4c]          ; 0052bca9
        ;   Label: LAB_0052bca9
    FLDZ                                ; 0052bcac
    FCOMPP                              ; 0052bcae
    FNSTSW AX                           ; 0052bcb0
    SAHF                                ; 0052bcb2
    JA 0x0052bd5f                       ; 0052bcb3
        ;   XREF to: 0052bd5f (CONDITIONAL_JUMP)  ; LAB_0052bd5f
    CMP dword ptr [0x01ed6808],0x0      ; 0052bcb9 | DAT_01ed6808
        ;   Label: LAB_0052bcb9
    JNZ 0x00529b1b                      ; 0052bcc0
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV ESI,dword ptr [EBP + 0x18]      ; 0052bcc6
    PUSH ESI                            ; 0052bcc9
    PUSH dword ptr [EBX + 0x4c]         ; 0052bcca
    PUSH EBX                            ; 0052bccd
    CALL core_script.cpp_CScript_processTimer_FUN_00530310 ; 0052bcce
        ;   XREF to: 00530310 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_processTimer_FUN_00530310(CScript * this_ptr, float delta_time, float * timer_value)
    ADD ESP,0xc                         ; 0052bcd3
    MOV dword ptr [ESP + 0x47e4],EAX    ; 0052bcd6
    TEST EAX,EAX                        ; 0052bcdd
    JLE 0x00529b1b                      ; 0052bcdf
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EDI,dword ptr [EBX + 0x4]       ; 0052bce5
    PUSH EDI                            ; 0052bce8
    PUSH EBX                            ; 0052bce9
    CALL core_script.cpp_FUN_00530390   ; 0052bcea
        ;   XREF to: 00530390 (UNCONDITIONAL_CALL)  ; void core_script.cpp_FUN_00530390(CScript * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0052bcef
    JMP 0x00529b1b                      ; 0052bcf2
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH 0x5ce698                       ; 0052bcf7 | = "Error parsing dbSay arguments"
        ;   Label: LAB_0052bcf7
    PUSH 0x1ed6810                      ; 0052bcfc | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052bd01
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052bd06
    JMP 0x00529bec                      ; 0052bd09
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EAX,[ESP + 0x36e4]              ; 0052bd0e
        ;   Label: LAB_0052bd0e
    MOV dword ptr [ESP + 0x4810],EAX    ; 0052bd15
    LEA EAX,[ESP + 0x3fe0]              ; 0052bd1c
    PUSH EAX                            ; 0052bd23
    PUSH 0x5ce6b8                       ; 0052bd24 | = "[Can't find %s in database]"
    LEA EAX,[ESP + 0x36ec]              ; 0052bd29
    MOV EDI,0x5ce6b6                    ; 0052bd30 | DAT_005ce6b6
    PUSH EAX                            ; 0052bd35
    MOV dword ptr [ESP + 0x483c],EDI    ; 0052bd36 | DAT_005ce6b6
    CALL crt_unknown.c_FUN_005a28c0     ; 0052bd3d
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 0052bd42
    LEA EAX,[ESP + 0x36e4]              ; 0052bd45
    PUSH EAX                            ; 0052bd4c
    PUSH 0x1ed7020                      ; 0052bd4d
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 0052bd52
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0052bd57
    JMP 0x0052bca9                      ; 0052bd5a
        ;   XREF to: 0052bca9 (UNCONDITIONAL_JUMP)  ; LAB_0052bca9
    MOV EAX,dword ptr [ESP + 0x4810]    ; 0052bd5f
        ;   Label: LAB_0052bd5f
    PUSH EAX                            ; 0052bd66
    LEA EAX,[ESP + 0x3fe4]              ; 0052bd67
    PUSH EAX                            ; 0052bd6e
    MOV EDX,dword ptr [ESP + 0x4838]    ; 0052bd6f
    PUSH EDX                            ; 0052bd76
    PUSH EBX                            ; 0052bd77
    CALL core_script.cpp_FUN_00530150   ; 0052bd78
        ;   XREF to: 00530150 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00530150()
    MOV dword ptr [ESP + 0x4954],EAX    ; 0052bd7d
    FLDZ                                ; 0052bd84
    MOV EAX,dword ptr [ESP + 0x4954]    ; 0052bd86
    MOV dword ptr [EBX + 0x4c],EAX      ; 0052bd8d
    ADD ESP,0x10                        ; 0052bd90
    FCOMP float ptr [EBX + 0x4c]        ; 0052bd93
    FNSTSW AX                           ; 0052bd96
    SAHF                                ; 0052bd98
    JA 0x00529bec                       ; 0052bd99
        ;   XREF to: 00529bec (CONDITIONAL_JUMP)  ; LAB_00529bec
    JMP 0x0052bcb9                      ; 0052bd9f
        ;   XREF to: 0052bcb9 (UNCONDITIONAL_JUMP)  ; LAB_0052bcb9
    ADD ESI,0xa                         ; 0052bda4
        ;   Label: LAB_0052bda4
    PUSH ESI                            ; 0052bda7
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052bda8
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    MOV EDX,0xffffffff                  ; 0052bdad
    ADD ESP,0x4                         ; 0052bdb2
    MOV dword ptr [ESP + 0x4814],EDX    ; 0052bdb5
    LEA EDX,[ESP + 0x4814]              ; 0052bdbc
    PUSH EDX                            ; 0052bdc3
    LEA EDX,[ESP + 0x4624]              ; 0052bdc4
    PUSH EDX                            ; 0052bdcb
    PUSH 0x5ce6df                       ; 0052bdcc | = "(%[^)])%n"
    PUSH EAX                            ; 0052bdd1
    MOV dword ptr [ESP + 0x4808],EAX    ; 0052bdd2
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052bdd9
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 0052bdde
    CMP dword ptr [ESP + 0x4814],0x3    ; 0052bde1
    JL 0x0052beba                       ; 0052bde9
        ;   XREF to: 0052beba (CONDITIONAL_JUMP)  ; LAB_0052beba
    LEA EAX,[ESP + 0x4620]              ; 0052bdef
    PUSH EAX                            ; 0052bdf6
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052bdf7
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052bdfc
    MOV EAX,dword ptr [ESP + 0x4814]    ; 0052bdff
    MOV ESI,dword ptr [ESP + 0x47f8]    ; 0052be06
    ADD ESI,EAX                         ; 0052be0d
    LEA EAX,[ESP + 0x4620]              ; 0052be0f
    PUSH EAX                            ; 0052be16
    PUSH EBX                            ; 0052be17
    MOV dword ptr [ESP + 0x4800],ESI    ; 0052be18
    CALL core_script.cpp_FUN_00530990   ; 0052be1f
        ;   XREF to: 00530990 (UNCONDITIONAL_CALL)  ; int core_script.cpp_FUN_00530990(CScript * this_ptr, char * path)
    ADD ESP,0x8                         ; 0052be24
    TEST EAX,EAX                        ; 0052be27
    JL 0x0052bed1                       ; 0052be29
        ;   XREF to: 0052bed1 (CONDITIONAL_JUMP)  ; LAB_0052bed1
    IMUL EAX,EAX,0x226                  ; 0052be2f
    MOV EDX,dword ptr [EBX + 0x24]      ; 0052be35
    ADD EAX,EDX                         ; 0052be38
    LEA EDX,[EAX + 0x78]                ; 0052be3a
    MOV dword ptr [ESP + 0x4818],EDX    ; 0052be3d
    LEA EDX,[EAX + 0x96]                ; 0052be44
    LEA EDI,[ESP + 0x4620]              ; 0052be4a
    LEA ESI,[EAX + 0x3c]                ; 0052be51
    MOV dword ptr [ESP + 0x4838],EDX    ; 0052be54
    PUSH EDI                            ; 0052be5b
    MOV AL,byte ptr [ESI]               ; 0052be5c
        ;   Label: LAB_0052be5c
    MOV byte ptr [EDI],AL               ; 0052be5e
    CMP AL,0x0                          ; 0052be60
    JZ 0x0052be74                       ; 0052be62
        ;   XREF to: 0052be74 (CONDITIONAL_JUMP)  ; LAB_0052be74
    MOV AL,byte ptr [ESI + 0x1]         ; 0052be64
    ADD ESI,0x2                         ; 0052be67
    MOV byte ptr [EDI + 0x1],AL         ; 0052be6a
    ADD EDI,0x2                         ; 0052be6d
    CMP AL,0x0                          ; 0052be70
    JNZ 0x0052be5c                      ; 0052be72
        ;   XREF to: 0052be5c (CONDITIONAL_JUMP)  ; LAB_0052be5c
    POP EDI                             ; 0052be74
        ;   Label: LAB_0052be74
    MOV EAX,dword ptr [ESP + 0x4838]    ; 0052be75
        ;   Label: LAB_0052be75
    PUSH EAX                            ; 0052be7c
    LEA EAX,[ESP + 0x4624]              ; 0052be7d
    PUSH EAX                            ; 0052be84
    MOV EDX,dword ptr [ESP + 0x4820]    ; 0052be85
    PUSH EDX                            ; 0052be8c | DAT_005ce707
    PUSH EBX                            ; 0052be8d
    CALL core_script.cpp_FUN_00530150   ; 0052be8e
        ;   XREF to: 00530150 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00530150()
    MOV dword ptr [ESP + 0x4954],EAX    ; 0052be93
    FLDZ                                ; 0052be9a
    MOV EAX,dword ptr [ESP + 0x4954]    ; 0052be9c
    MOV dword ptr [EBX + 0x4c],EAX      ; 0052bea3
    ADD ESP,0x10                        ; 0052bea6
    FCOMP float ptr [EBX + 0x4c]        ; 0052bea9
    FNSTSW AX                           ; 0052beac
    SAHF                                ; 0052beae
    JA 0x00529bec                       ; 0052beaf
        ;   XREF to: 00529bec (CONDITIONAL_JUMP)  ; LAB_00529bec
    JMP 0x00529b1b                      ; 0052beb5
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH 0x5ce6e9                       ; 0052beba | = "Error parsing dbSay arguments"
        ;   Label: LAB_0052beba
    PUSH 0x1ed6810                      ; 0052bebf | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052bec4
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052bec9
    JMP 0x00529bec                      ; 0052becc
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EAX,[ESP + 0x1de4]              ; 0052bed1
        ;   Label: LAB_0052bed1
    MOV dword ptr [ESP + 0x4838],EAX    ; 0052bed8
    LEA EAX,[ESP + 0x4620]              ; 0052bedf
    PUSH EAX                            ; 0052bee6
    PUSH 0x5ce709                       ; 0052bee7 | = "[Can't find %s in database]"
    LEA EAX,[ESP + 0x1dec]              ; 0052beec
    MOV EDI,0x5ce707                    ; 0052bef3 | DAT_005ce707
    PUSH EAX                            ; 0052bef8
    MOV dword ptr [ESP + 0x4824],EDI    ; 0052bef9 | DAT_005ce707
    CALL crt_unknown.c_FUN_005a28c0     ; 0052bf00
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 0052bf05
    LEA EAX,[ESP + 0x1de4]              ; 0052bf08
    PUSH EAX                            ; 0052bf0f
    PUSH 0x1ed7020                      ; 0052bf10
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 0052bf15
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0052bf1a
    JMP 0x0052be75                      ; 0052bf1d
        ;   XREF to: 0052be75 (UNCONDITIONAL_JUMP)  ; LAB_0052be75
    ADD ESI,0xe                         ; 0052bf22
        ;   Label: LAB_0052bf22
    PUSH ESI                            ; 0052bf25
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052bf26
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052bf2b
    LEA EDX,[ESP + 0x481c]              ; 0052bf2e
    PUSH EDX                            ; 0052bf35
    LEA EDX,[ESP + 0x4824]              ; 0052bf36
    PUSH EDX                            ; 0052bf3d
    LEA EDX,[ESP + 0x4498]              ; 0052bf3e
    PUSH EDX                            ; 0052bf45
    PUSH 0x5ce734                       ; 0052bf46 | = "(%[^,], %f)%n"
    MOV ECX,0xffffffff                  ; 0052bf4b
    PUSH EAX                            ; 0052bf50
    MOV dword ptr [ESP + 0x480c],EAX    ; 0052bf51
    MOV dword ptr [ESP + 0x4830],ECX    ; 0052bf58
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052bf5f
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052bf64
    CMP dword ptr [ESP + 0x481c],0x3    ; 0052bf67
    JL 0x0052c04e                       ; 0052bf6f
        ;   XREF to: 0052c04e (CONDITIONAL_JUMP)  ; LAB_0052c04e
    LEA EAX,[ESP + 0x4490]              ; 0052bf75
    PUSH EAX                            ; 0052bf7c
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052bf7d
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052bf82
    MOV EAX,dword ptr [ESP + 0x481c]    ; 0052bf85
    MOV EDI,dword ptr [ESP + 0x47f8]    ; 0052bf8c
    ADD EDI,EAX                         ; 0052bf93
    LEA EAX,[ESP + 0x4490]              ; 0052bf95
    PUSH EAX                            ; 0052bf9c
    PUSH EBX                            ; 0052bf9d
    MOV dword ptr [ESP + 0x4800],EDI    ; 0052bf9e
    CALL core_script.cpp_FUN_00530990   ; 0052bfa5
        ;   XREF to: 00530990 (UNCONDITIONAL_CALL)  ; int core_script.cpp_FUN_00530990(CScript * this_ptr, char * path)
    ADD ESP,0x8                         ; 0052bfaa
    TEST EAX,EAX                        ; 0052bfad
    JL 0x0052c065                       ; 0052bfaf
        ;   XREF to: 0052c065 (CONDITIONAL_JUMP)  ; LAB_0052c065
    IMUL EDX,EAX,0x226                  ; 0052bfb5
    MOV EAX,dword ptr [EBX + 0x24]      ; 0052bfbb
    ADD EAX,EDX                         ; 0052bfbe
    LEA EDX,[EAX + 0x96]                ; 0052bfc0
    LEA EDI,[ESP + 0x4490]              ; 0052bfc6
    LEA ESI,[EAX + 0x3c]                ; 0052bfcd
    MOV dword ptr [ESP + 0x48dc],EDX    ; 0052bfd0
    PUSH EDI                            ; 0052bfd7
    MOV AL,byte ptr [ESI]               ; 0052bfd8
        ;   Label: LAB_0052bfd8
    MOV byte ptr [EDI],AL               ; 0052bfda
    CMP AL,0x0                          ; 0052bfdc
    JZ 0x0052bff0                       ; 0052bfde
        ;   XREF to: 0052bff0 (CONDITIONAL_JUMP)  ; LAB_0052bff0
    MOV AL,byte ptr [ESI + 0x1]         ; 0052bfe0
    ADD ESI,0x2                         ; 0052bfe3
    MOV byte ptr [EDI + 0x1],AL         ; 0052bfe6
    ADD EDI,0x2                         ; 0052bfe9
    CMP AL,0x0                          ; 0052bfec
    JNZ 0x0052bfd8                      ; 0052bfee
        ;   XREF to: 0052bfd8 (CONDITIONAL_JUMP)  ; LAB_0052bfd8
    POP EDI                             ; 0052bff0
        ;   Label: LAB_0052bff0
    CMP dword ptr [0x01ed6808],0x0      ; 0052bff1 | DAT_01ed6808
        ;   Label: LAB_0052bff1
    JNZ 0x00529b1b                      ; 0052bff8
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV ESI,dword ptr [ESP + 0x48dc]    ; 0052bffe
    LEA EDI,[EBX + 0x50]                ; 0052c005
    MOV EDX,dword ptr [EBP + 0x18]      ; 0052c008
    PUSH EDI                            ; 0052c00b
    MOV AL,byte ptr [ESI]               ; 0052c00c
        ;   Label: LAB_0052c00c
    MOV byte ptr [EDI],AL               ; 0052c00e
    CMP AL,0x0                          ; 0052c010
    JZ 0x0052c024                       ; 0052c012
        ;   XREF to: 0052c024 (CONDITIONAL_JUMP)  ; LAB_0052c024
    MOV AL,byte ptr [ESI + 0x1]         ; 0052c014
    ADD ESI,0x2                         ; 0052c017
    MOV byte ptr [EDI + 0x1],AL         ; 0052c01a
    ADD EDI,0x2                         ; 0052c01d
    CMP AL,0x0                          ; 0052c020
    JNZ 0x0052c00c                      ; 0052c022
        ;   XREF to: 0052c00c (CONDITIONAL_JUMP)  ; LAB_0052c00c
    POP EDI                             ; 0052c024
        ;   Label: LAB_0052c024
    PUSH EDX                            ; 0052c025
    PUSH dword ptr [ESP + 0x4824]       ; 0052c026
    PUSH EBX                            ; 0052c02d
    CALL core_script.cpp_CScript_processTimer_FUN_00530310 ; 0052c02e
        ;   XREF to: 00530310 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_processTimer_FUN_00530310(CScript * this_ptr, float delta_time, float * timer_value)
    ADD ESP,0xc                         ; 0052c033
    MOV dword ptr [ESP + 0x47e4],EAX    ; 0052c036
    TEST EAX,EAX                        ; 0052c03d
    JLE 0x00529b1b                      ; 0052c03f
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV byte ptr [EBX + 0x50],0x0       ; 0052c045
    JMP 0x00529b1b                      ; 0052c049
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH 0x5ce742                       ; 0052c04e | = "Error parsing dbTimedDisplay arguments"
        ;   Label: LAB_0052c04e
    PUSH 0x1ed6810                      ; 0052c053 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052c058
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052c05d
    JMP 0x00529bec                      ; 0052c060
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EAX,[ESP + 0x2a64]              ; 0052c065
        ;   Label: LAB_0052c065
    MOV dword ptr [ESP + 0x48dc],EAX    ; 0052c06c
    LEA EAX,[ESP + 0x4490]              ; 0052c073
    PUSH EAX                            ; 0052c07a
    PUSH 0x5ce769                       ; 0052c07b | = "[Can't find %s in database]"
    LEA EAX,[ESP + 0x2a6c]              ; 0052c080
    PUSH EAX                            ; 0052c087
    CALL crt_unknown.c_FUN_005a28c0     ; 0052c088
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 0052c08d
    JMP 0x0052bff1                      ; 0052c090
        ;   XREF to: 0052bff1 (UNCONDITIONAL_JUMP)  ; LAB_0052bff1
    ADD ESI,0x5                         ; 0052c095
        ;   Label: LAB_0052c095
    PUSH ESI                            ; 0052c098
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052c099
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052c09e
    PUSH 0x12c                          ; 0052c0a1
    MOV dword ptr [ESP + 0x47fc],EAX    ; 0052c0a6
    LEA EAX,[ESP + 0x828]               ; 0052c0ad
    PUSH EAX                            ; 0052c0b4
    LEA EAX,[ESP + 0x4800]              ; 0052c0b5
    PUSH EAX                            ; 0052c0bc
    CALL core_script.cpp_parseArgument_FUN_005288c0 ; 0052c0bd
        ;   XREF to: 005288c0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005288c0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0052c0c2
    TEST EAX,EAX                        ; 0052c0c5
    JNZ 0x0052b9f1                      ; 0052c0c7
        ;   XREF to: 0052b9f1 (CONDITIONAL_JUMP)  ; LAB_0052b9f1
    CMP dword ptr [0x01ed6808],0x0      ; 0052c0cd | DAT_01ed6808
    JNZ 0x00529b1b                      ; 0052c0d4
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EAX,[ESP + 0x824]               ; 0052c0da
    PUSH EAX                            ; 0052c0e1
    MOV ESI,dword ptr [ESP + 0x47f8]    ; 0052c0e2
    PUSH ESI                            ; 0052c0e9
    PUSH 0x5ce78b                       ; 0052c0ea | = "Script debug message at line %d:\n%s"
    MOV EDI,dword ptr [0x005fb140]      ; 0052c0ef | g_CEditorToolsPtr
    PUSH EDI                            ; 0052c0f5
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0047ce80 ; 0052c0f6
        ;   XREF to: 0047ce80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0047ce80(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 0052c0fb
    JMP 0x00529b1b                      ; 0052c0fe
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0x9                         ; 0052c103
        ;   Label: LAB_0052c103
    PUSH ESI                            ; 0052c106
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052c107
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    MOV EDX,0xffffffff                  ; 0052c10c
    ADD ESP,0x4                         ; 0052c111
    MOV dword ptr [ESP + 0x48e4],EDX    ; 0052c114
    LEA EDX,[ESP + 0x48e4]              ; 0052c11b
    PUSH EDX                            ; 0052c122
    LEA EDX,[ESP + 0x37b0]              ; 0052c123
    PUSH EDX                            ; 0052c12a
    LEA EDX,[ESP + 0x2364]              ; 0052c12b
    PUSH EDX                            ; 0052c132
    PUSH 0x5ce7b9                       ; 0052c133 | = "(%[^,], %[^,)]%n"
    PUSH EAX                            ; 0052c138
    MOV dword ptr [ESP + 0x480c],EAX    ; 0052c139
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052c140
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052c145
    MOV ECX,dword ptr [ESP + 0x48e4]    ; 0052c148
    CMP ECX,0x5                         ; 0052c14f
    JGE 0x0052c16b                      ; 0052c152
        ;   XREF to: 0052c16b (CONDITIONAL_JUMP)  ; LAB_0052c16b
    PUSH 0x5ce7ca                       ; 0052c154 | = "Error parsing dismember command parms"
    PUSH 0x1ed6810                      ; 0052c159 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052c15e
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052c163
    JMP 0x00529bec                      ; 0052c166
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV ESI,dword ptr [ESP + 0x47f8]    ; 0052c16b
        ;   Label: LAB_0052c16b
    LEA EAX,[ESP + 0x235c]              ; 0052c172
    ADD ESI,ECX                         ; 0052c179
    PUSH EAX                            ; 0052c17b
    MOV dword ptr [ESP + 0x47fc],ESI    ; 0052c17c
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052c183
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052c188
    LEA EAX,[ESP + 0x37ac]              ; 0052c18b
    PUSH EAX                            ; 0052c192
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052c193
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052c198
    PUSH 0x7e2cb4                       ; 0052c19b | g_CCharacterClassInfo
    MOV EDI,dword ptr [0x007e2cec]      ; 0052c1a0 | g_CCharacterClassInfo.name_hash
    PUSH EDI                            ; 0052c1a6
    LEA EAX,[ESP + 0x2364]              ; 0052c1a7
    PUSH EAX                            ; 0052c1ae
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052c1af
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    ADD ESP,0xc                         ; 0052c1b4
    MOV dword ptr [ESP + 0x4824],EAX    ; 0052c1b7
    TEST EAX,EAX                        ; 0052c1be
    JNZ 0x0052c1d4                      ; 0052c1c0
        ;   XREF to: 0052c1d4 (CONDITIONAL_JUMP)  ; LAB_0052c1d4
    CMP dword ptr [0x01ed701c],0x0      ; 0052c1c2 | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052c1c9
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052c1cf
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EDX,[ESP + 0xfac]               ; 0052c1d4
        ;   Label: LAB_0052c1d4
    PUSH EDX                            ; 0052c1db
    LEA EDX,[ESP + 0x37b0]              ; 0052c1dc
    PUSH EDX                            ; 0052c1e3
    PUSH EAX                            ; 0052c1e4
    CALL core_script.cpp_FUN_00528c20   ; 0052c1e5
        ;   XREF to: 00528c20 (UNCONDITIONAL_CALL)  ; int core_script.cpp_FUN_00528c20(CCharacter * character, char * part_names, int * part_mask)
    ADD ESP,0xc                         ; 0052c1ea
    TEST EAX,EAX                        ; 0052c1ed
    JZ 0x00529bec                       ; 0052c1ef
        ;   XREF to: 00529bec (CONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EAX,[ESP + 0x47b0]              ; 0052c1f5
    PUSH EAX                            ; 0052c1fc
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d220 ; 0052c1fd
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d220(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 0052c202
    MOV EDX,dword ptr [ESP + 0x47f8]    ; 0052c205
    MOV CH,byte ptr [EDX]               ; 0052c20c
    XOR EAX,EAX                         ; 0052c20e
    CMP CH,0x2c                         ; 0052c210
    JZ 0x0052c2b3                       ; 0052c213
        ;   XREF to: 0052c2b3 (CONDITIONAL_JUMP)  ; LAB_0052c2b3
    MOV EDX,dword ptr [ESP + 0x47f8]    ; 0052c219
        ;   Label: LAB_0052c219
    CMP byte ptr [EDX],0x29             ; 0052c220
    JNZ 0x0052c433                      ; 0052c223
        ;   XREF to: 0052c433 (CONDITIONAL_JUMP)  ; LAB_0052c433
    LEA EDI,[EDX + 0x1]                 ; 0052c229
    MOV EDX,dword ptr [0x01ed6808]      ; 0052c22c | DAT_01ed6808
    MOV dword ptr [ESP + 0x47f8],EDI    ; 0052c232
    TEST EDX,EDX                        ; 0052c239
    JNZ 0x00529b1b                      ; 0052c23b
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EDX,dword ptr [ESP + 0x4824]    ; 0052c241
    MOV ECX,dword ptr [EDX + 0x27a0]    ; 0052c248
    PUSH ECX                            ; 0052c24e
    PUSH 0x0                            ; 0052c24f
    PUSH 0x0                            ; 0052c251
    PUSH EDX                            ; 0052c253
    PUSH EAX                            ; 0052c254
    LEA EAX,[EDX + 0x30]                ; 0052c255
    PUSH EAX                            ; 0052c258
    LEA EAX,[EDX + 0x20]                ; 0052c259
    PUSH EAX                            ; 0052c25c
    XOR ESI,ESI                         ; 0052c25d
    CALL core_bodypart.cpp_FUN_00414550 ; 0052c25f
        ;   XREF to: 00414550 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_FUN_00414550(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 0052c264
    XOR EDI,EDI                         ; 0052c267
    MOV dword ptr [ESP + 0x4828],EAX    ; 0052c269
    CMP dword ptr [ESP + EDI*0x1 + 0xfac],0x0 ; 0052c270
        ;   Label: LAB_0052c270
    JZ 0x0052c295                       ; 0052c278
        ;   XREF to: 0052c295 (CONDITIONAL_JUMP)  ; LAB_0052c295
    PUSH 0x1                            ; 0052c27a
    PUSH ESI                            ; 0052c27c
    MOV EAX,dword ptr [ESP + 0x4830]    ; 0052c27d
    PUSH EAX                            ; 0052c284
    MOV EDX,dword ptr [ESP + 0x4830]    ; 0052c285
    PUSH EDX                            ; 0052c28c
    CALL core_charactr.cpp_FUN_00430590 ; 0052c28d
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00430590(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 0052c292
    INC ESI                             ; 0052c295
        ;   Label: LAB_0052c295
    ADD EDI,0x4                         ; 0052c296
    CMP ESI,0x3c                        ; 0052c299
    JL 0x0052c270                       ; 0052c29c
        ;   XREF to: 0052c270 (CONDITIONAL_JUMP)  ; LAB_0052c270
    MOV ECX,dword ptr [ESP + 0x4828]    ; 0052c29e
    PUSH ECX                            ; 0052c2a5
    CALL core_bodypart.cpp_FUN_004157c0 ; 0052c2a6
        ;   XREF to: 004157c0 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_FUN_004157c0(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 0052c2ab
    JMP 0x00529b1b                      ; 0052c2ae
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV dword ptr [ESP + 0x48e4],0xffffffff ; 0052c2b3
        ;   Label: LAB_0052c2b3
    LEA EAX,[ESP + 0x48e4]              ; 0052c2be
    PUSH EAX                            ; 0052c2c5
    LEA EAX,[ESP + 0x24]                ; 0052c2c6
    PUSH EAX                            ; 0052c2ca
    LEA EAX,[ESP + 0x47c0]              ; 0052c2cb
    PUSH EAX                            ; 0052c2d2
    LEA EAX,[ESP + 0x47c0]              ; 0052c2d3
    PUSH EAX                            ; 0052c2da
    LEA EAX,[ESP + 0x47c0]              ; 0052c2db
    PUSH EAX                            ; 0052c2e2
    PUSH 0x5ce7f0                       ; 0052c2e3 | = ",%f ,%f ,%f ,%f %n"
    PUSH EDX                            ; 0052c2e8
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052c2e9
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x1c                        ; 0052c2ee
    MOV ECX,dword ptr [ESP + 0x48e4]    ; 0052c2f1
    CMP ECX,0x5                         ; 0052c2f8
    JL 0x0052c41c                       ; 0052c2fb
        ;   XREF to: 0052c41c (CONDITIONAL_JUMP)  ; LAB_0052c41c
    MOV ESI,dword ptr [ESP + 0x47f8]    ; 0052c301
    FLD float ptr [ESP + 0x20]          ; 0052c308
    ADD ESI,ECX                         ; 0052c30c
    FLDZ                                ; 0052c30e
    MOV dword ptr [ESP + 0x47f8],ESI    ; 0052c310
    FCOMPP                              ; 0052c317
    FNSTSW AX                           ; 0052c319
    SAHF                                ; 0052c31b
    JNC 0x0052c410                      ; 0052c31c
        ;   XREF to: 0052c410 (CONDITIONAL_JUMP)  ; LAB_0052c410
    FLD float ptr [ESP + 0x20]          ; 0052c322
    FMUL float ptr [0x005cfa38]         ; 0052c326 | DAT_005cfa38
    FMUL float ptr [0x005cfa3c]         ; 0052c32c | DAT_005cfa3c
    FSTP float ptr [ESP + 0x20]         ; 0052c332
    PUSH dword ptr [ESP + 0x20]         ; 0052c336
    FLD float ptr [ESP + 0x24]          ; 0052c33a
    SUB ESP,0x4                         ; 0052c33e
    FCHS                                ; 0052c341
    FSTP float ptr [ESP]                ; 0052c343
    CALL core_actor.cpp_FUN_0040ce40    ; 0052c346
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x494c],EAX    ; 0052c34b
    FLD float ptr [ESP + 0x494c]        ; 0052c352
    ADD ESP,0x8                         ; 0052c359
    SUB ESP,0x4                         ; 0052c35c
    FSTP float ptr [ESP]                ; 0052c35f
    PUSH 0x0                            ; 0052c362
    PUSH dword ptr [ESP + 0x28]         ; 0052c364
    FLD float ptr [ESP + 0x2c]          ; 0052c368
    SUB ESP,0x4                         ; 0052c36c
    FCHS                                ; 0052c36f
    FSTP float ptr [ESP]                ; 0052c371
    CALL core_actor.cpp_FUN_0040ce40    ; 0052c374
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x4954],EAX    ; 0052c379
    FLD float ptr [ESP + 0x4954]        ; 0052c380
    ADD ESP,0x8                         ; 0052c387
    SUB ESP,0x4                         ; 0052c38a
    LEA ESI,[ESP + 0x47d4]              ; 0052c38d
    FSTP float ptr [ESP]                ; 0052c394
    CALL unkafter_stranger.cpp_FUN_00527200 ; 0052c397
        ;   XREF to: 00527200 (UNCONDITIONAL_CALL)  ; undefined unkafter_stranger.cpp_FUN_00527200()
    ADD ESP,0xc                         ; 0052c39c
    LEA EAX,[ESP + 0x4798]              ; 0052c39f
    LEA EDI,[ESP + 0x4798]              ; 0052c3a6
    PUSH EAX                            ; 0052c3ad
    LEA EAX,[ESP + 0x4750]              ; 0052c3ae
    LEA ESI,[ESP + 0x47cc]              ; 0052c3b5
    PUSH EAX                            ; 0052c3bc
    MOVSD ES:EDI,ESI                    ; 0052c3bd
    MOVSD ES:EDI,ESI                    ; 0052c3be
    MOVSD ES:EDI,ESI                    ; 0052c3bf
    CALL core_dirmat.cpp_FUN_0045b550   ; 0052c3c0
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0052c3c5
    LEA EAX,[ESP + 0x47b0]              ; 0052c3c8
    PUSH EAX                            ; 0052c3cf
    LEA EAX,[ESP + 0x4750]              ; 0052c3d0
    PUSH EAX                            ; 0052c3d7
    LEA ESI,[ESP + 0x4788]              ; 0052c3d8
    CALL core_dirmat.cpp_FUN_0045b800   ; 0052c3df
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    ADD ESP,0x8                         ; 0052c3e4
    LEA EAX,[ESP + 0x47d4]              ; 0052c3e7
    LEA EDI,[ESP + 0x47d4]              ; 0052c3ee
    PUSH EAX                            ; 0052c3f5
    LEA EAX,[ESP + 0x47b4]              ; 0052c3f6
    LEA ESI,[ESP + 0x4784]              ; 0052c3fd
    PUSH EAX                            ; 0052c404
    MOVSD ES:EDI,ESI                    ; 0052c405
    MOVSD ES:EDI,ESI                    ; 0052c406
    MOVSD ES:EDI,ESI                    ; 0052c407
    CALL core_actor.cpp_FUN_0040d230    ; 0052c408
        ;   XREF to: 0040d230 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d230()
    ADD ESP,0x8                         ; 0052c40d
    LEA EAX,[ESP + 0x47b0]              ; 0052c410
        ;   Label: LAB_0052c410
    JMP 0x0052c219                      ; 0052c417
        ;   XREF to: 0052c219 (UNCONDITIONAL_JUMP)  ; LAB_0052c219
    PUSH 0x5ce803                       ; 0052c41c | = "Error parsing dismember command parms"
        ;   Label: LAB_0052c41c
    PUSH 0x1ed6810                      ; 0052c421 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052c426
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052c42b
    JMP 0x00529bec                      ; 0052c42e
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    PUSH EDX                            ; 0052c433
        ;   Label: LAB_0052c433
    PUSH 0x5ce829                       ; 0052c434 | = "Error parsing dismember command parms..."
    PUSH 0x1ed6810                      ; 0052c439 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052c43e
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 0052c443
    JMP 0x00529bec                      ; 0052c446
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0x7                         ; 0052c44b
        ;   Label: LAB_0052c44b
    PUSH ESI                            ; 0052c44e
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052c44f
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052c454
    PUSH 0x400                          ; 0052c457
    MOV dword ptr [ESP + 0x47fc],EAX    ; 0052c45c
    LEA EAX,[EBX + 0x50]                ; 0052c463
    PUSH EAX                            ; 0052c466
    LEA EAX,[ESP + 0x4800]              ; 0052c467
    PUSH EAX                            ; 0052c46e
    CALL core_script.cpp_parseArgument_FUN_005288c0 ; 0052c46f
        ;   XREF to: 005288c0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005288c0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0052c474
    TEST EAX,EAX                        ; 0052c477
    JZ 0x00529b1b                       ; 0052c479
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH EAX                            ; 0052c47f
    PUSH 0x5ce861                       ; 0052c480 | = "Error parsing message text on display..."
    PUSH 0x1ed6810                      ; 0052c485 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052c48a
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 0052c48f
    JMP 0x00529bec                      ; 0052c492
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0x4                         ; 0052c497
        ;   Label: LAB_0052c497
    PUSH ESI                            ; 0052c49a
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052c49b
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052c4a0
    MOV dword ptr [ESP + 0x47f8],EAX    ; 0052c4a3
    PUSH 0x1                            ; 0052c4aa
    MOV EDX,dword ptr [EBX + 0x44]      ; 0052c4ac
    PUSH EDX                            ; 0052c4af
    PUSH EBX                            ; 0052c4b0
    CALL core_script.cpp_FUN_00530410   ; 0052c4b1
        ;   XREF to: 00530410 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00530410()
    ADD ESP,0xc                         ; 0052c4b6
    TEST EAX,EAX                        ; 0052c4b9
    JL 0x0052c4c5                       ; 0052c4bb
        ;   XREF to: 0052c4c5 (CONDITIONAL_JUMP)  ; LAB_0052c4c5
    MOV dword ptr [EBX + 0x44],EAX      ; 0052c4bd
    JMP 0x00529b1b                      ; 0052c4c0
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV ECX,dword ptr [ESP + 0x47f4]    ; 0052c4c5
        ;   Label: LAB_0052c4c5
    PUSH ECX                            ; 0052c4cc
    PUSH 0x5ce89a                       ; 0052c4cd | = "Can't skip next command after else st..."
    PUSH 0x1ed6810                      ; 0052c4d2 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052c4d7
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 0052c4dc
    JMP 0x00529bec                      ; 0052c4df
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0xc                         ; 0052c4e4
        ;   Label: LAB_0052c4e4
    PUSH ESI                            ; 0052c4e7
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052c4e8
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052c4ed
    LEA EDX,[ESP + 0x487c]              ; 0052c4f0
    PUSH EDX                            ; 0052c4f7
    LEA EDX,[ESP + 0x12f8]              ; 0052c4f8
    PUSH EDX                            ; 0052c4ff
    LEA EDX,[ESP + 0x2e54]              ; 0052c500
    PUSH EDX                            ; 0052c507
    PUSH 0x5ce8df                       ; 0052c508 | = "(%[^,], %[^)])%n"
    MOV ESI,0xffffffff                  ; 0052c50d
    PUSH EAX                            ; 0052c512
    MOV dword ptr [ESP + 0x480c],EAX    ; 0052c513
    MOV dword ptr [ESP + 0x4890],ESI    ; 0052c51a
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052c521
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052c526
    MOV EDI,dword ptr [ESP + 0x487c]    ; 0052c529
    CMP EDI,0x3                         ; 0052c530
    JGE 0x0052c54c                      ; 0052c533
        ;   XREF to: 0052c54c (CONDITIONAL_JUMP)  ; LAB_0052c54c
    PUSH 0x5ce8f0                       ; 0052c535 | = "Error parsing enableCamera parms"
    PUSH 0x1ed6810                      ; 0052c53a | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052c53f
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052c544
    JMP 0x00529bec                      ; 0052c547
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDX,dword ptr [ESP + 0x47f8]    ; 0052c54c
        ;   Label: LAB_0052c54c
    LEA EAX,[ESP + 0x2e4c]              ; 0052c553
    ADD EDX,EDI                         ; 0052c55a
    PUSH EAX                            ; 0052c55c
    MOV dword ptr [ESP + 0x47fc],EDX    ; 0052c55d
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052c564
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052c569
    LEA EAX,[ESP + 0x12f4]              ; 0052c56c
    PUSH EAX                            ; 0052c573
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052c574
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052c579
    LEA EAX,[ESP + 0x2e4c]              ; 0052c57c
    PUSH EAX                            ; 0052c583
    MOV ECX,dword ptr [0x00603b28]      ; 0052c584 | g_CDemonSetPtr
    PUSH ECX                            ; 0052c58a | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_findCameraByName_FUN_00535360 ; 0052c58b
        ;   XREF to: 00535360 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_findCameraByName_FUN_00535360(CDemonSet * this_ptr, char * name)
    MOV ESI,EAX                         ; 0052c590
    ADD ESP,0x8                         ; 0052c592
    TEST EAX,EAX                        ; 0052c595
    JL 0x0052c5e7                       ; 0052c597
        ;   XREF to: 0052c5e7 (CONDITIONAL_JUMP)  ; LAB_0052c5e7
    CMP dword ptr [0x01ed6808],0x0      ; 0052c599 | DAT_01ed6808
    JZ 0x0052c606                       ; 0052c5a0
        ;   XREF to: 0052c606 (CONDITIONAL_JUMP)  ; LAB_0052c606
    LEA EAX,[ESP + 0x12f4]              ; 0052c5a2
    PUSH EAX                            ; 0052c5a9
    MOV ECX,dword ptr [0x005fba60]      ; 0052c5aa | DAT_005fba60
    PUSH ECX                            ; 0052c5b0
    CALL core_event.cpp_CEventList_validateCondition_FUN_00491b00 ; 0052c5b1
        ;   XREF to: 00491b00 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCondition_FUN_00491b00(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 0052c5b6
    TEST EAX,EAX                        ; 0052c5b9
    JZ 0x00529b1b                       ; 0052c5bb
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EDI,0x1ed6810                   ; 0052c5c1
    MOV ESI,EAX                         ; 0052c5c6
    PUSH EDI                            ; 0052c5c8 | DAT_01ed6810
    MOV AL,byte ptr [ESI]               ; 0052c5c9
        ;   Label: LAB_0052c5c9
    MOV byte ptr [EDI],AL               ; 0052c5cb | DAT_01ed6810 | DAT_01ed6812
    CMP AL,0x0                          ; 0052c5cd
    JZ 0x0052c5e1                       ; 0052c5cf
        ;   XREF to: 0052c5e1 (CONDITIONAL_JUMP)  ; LAB_0052c5e1
    MOV AL,byte ptr [ESI + 0x1]         ; 0052c5d1
    ADD ESI,0x2                         ; 0052c5d4
    MOV byte ptr [EDI + 0x1],AL         ; 0052c5d7 | DAT_01ed6811 | DAT_01ed6813
    ADD EDI,0x2                         ; 0052c5da
    CMP AL,0x0                          ; 0052c5dd
    JNZ 0x0052c5c9                      ; 0052c5df
        ;   XREF to: 0052c5c9 (CONDITIONAL_JUMP)  ; LAB_0052c5c9
    POP EDI                             ; 0052c5e1
        ;   Label: LAB_0052c5e1
    JMP 0x00529bec                      ; 0052c5e2
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EAX,[ESP + 0x2e4c]              ; 0052c5e7
        ;   Label: LAB_0052c5e7
    PUSH EAX                            ; 0052c5ee
    PUSH 0x5ce911                       ; 0052c5ef | = "Camera \"%s\" does not exist."
    PUSH 0x1ed6810                      ; 0052c5f4 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052c5f9
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 0052c5fe
    JMP 0x00529bec                      ; 0052c601
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EAX,[ESP + 0x12f4]              ; 0052c606
        ;   Label: LAB_0052c606
    PUSH EAX                            ; 0052c60d
    MOV EAX,[0x005fba60]                ; 0052c60e | DAT_005fba60
    PUSH EAX                            ; 0052c613
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0052c614
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0052c619
    PUSH EAX                            ; 0052c61c
    PUSH ESI                            ; 0052c61d
    MOV EDX,dword ptr [0x00603b28]      ; 0052c61e | g_CDemonSetPtr
    PUSH EDX                            ; 0052c624 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraEnabled_FUN_0053b340 ; 0052c625
        ;   XREF to: 0053b340 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraEnabled_FUN_0053b340(CDemonSet * this_ptr, int camera_index, int enabled)
    ADD ESP,0xc                         ; 0052c62a
    JMP 0x00529b1b                      ; 0052c62d
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0x11                        ; 0052c632
        ;   Label: LAB_0052c632
    PUSH ESI                            ; 0052c635
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052c636
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052c63b
    LEA EDX,[ESP + 0x4904]              ; 0052c63e
    PUSH EDX                            ; 0052c645
    LEA EDX,[ESP + 0x2f18]              ; 0052c646
    PUSH EDX                            ; 0052c64d
    LEA EDX,[ESP + 0x4834]              ; 0052c64e
    PUSH EDX                            ; 0052c655
    PUSH 0x5ce93f                       ; 0052c656 | = "(%d , %[^)])%n"
    MOV ESI,0xffffffff                  ; 0052c65b
    PUSH EAX                            ; 0052c660
    MOV dword ptr [ESP + 0x480c],EAX    ; 0052c661
    MOV dword ptr [ESP + 0x4918],ESI    ; 0052c668
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052c66f
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052c674
    MOV EDI,dword ptr [ESP + 0x4904]    ; 0052c677
    CMP EDI,0x3                         ; 0052c67e
    JGE 0x0052c69a                      ; 0052c681
        ;   XREF to: 0052c69a (CONDITIONAL_JUMP)  ; LAB_0052c69a
    PUSH 0x5ce94e                       ; 0052c683 | = "Error parsing enableCameraGroup parms"
    PUSH 0x1ed6810                      ; 0052c688 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052c68d
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052c692
    JMP 0x00529bec                      ; 0052c695
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDX,dword ptr [ESP + 0x47f8]    ; 0052c69a
        ;   Label: LAB_0052c69a
    LEA EAX,[ESP + 0x2f14]              ; 0052c6a1
    ADD EDX,EDI                         ; 0052c6a8
    PUSH EAX                            ; 0052c6aa
    MOV dword ptr [ESP + 0x47fc],EDX    ; 0052c6ab
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052c6b2
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    MOV ECX,dword ptr [0x01ed6808]      ; 0052c6b7 | DAT_01ed6808
    ADD ESP,0x4                         ; 0052c6bd
    TEST ECX,ECX                        ; 0052c6c0
    JZ 0x0052c709                       ; 0052c6c2
        ;   XREF to: 0052c709 (CONDITIONAL_JUMP)  ; LAB_0052c709
    LEA EAX,[ESP + 0x2f14]              ; 0052c6c4
    PUSH EAX                            ; 0052c6cb
    MOV EDX,dword ptr [0x005fba60]      ; 0052c6cc | DAT_005fba60
    PUSH EDX                            ; 0052c6d2
    CALL core_event.cpp_CEventList_validateCondition_FUN_00491b00 ; 0052c6d3
        ;   XREF to: 00491b00 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCondition_FUN_00491b00(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 0052c6d8
    TEST EAX,EAX                        ; 0052c6db
    JZ 0x00529b1b                       ; 0052c6dd
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EDI,0x1ed6810                   ; 0052c6e3
        ;   Label: LAB_0052c6e3
    MOV ESI,EAX                         ; 0052c6e8
    PUSH EDI                            ; 0052c6ea | DAT_01ed6810
    MOV AL,byte ptr [ESI]               ; 0052c6eb
        ;   Label: LAB_0052c6eb
    MOV byte ptr [EDI],AL               ; 0052c6ed | DAT_01ed6810 | DAT_01ed6812
    CMP AL,0x0                          ; 0052c6ef
    JZ 0x0052c703                       ; 0052c6f1
        ;   XREF to: 0052c703 (CONDITIONAL_JUMP)  ; LAB_0052c703
    MOV AL,byte ptr [ESI + 0x1]         ; 0052c6f3
    ADD ESI,0x2                         ; 0052c6f6
    MOV byte ptr [EDI + 0x1],AL         ; 0052c6f9 | DAT_01ed6811 | DAT_01ed6813
    ADD EDI,0x2                         ; 0052c6fc
    CMP AL,0x0                          ; 0052c6ff
    JNZ 0x0052c6eb                      ; 0052c701
        ;   XREF to: 0052c6eb (CONDITIONAL_JUMP)  ; LAB_0052c6eb
    POP EDI                             ; 0052c703
        ;   Label: LAB_0052c703
    JMP 0x00529bec                      ; 0052c704
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EAX,[ESP + 0x2f14]              ; 0052c709
        ;   Label: LAB_0052c709
    PUSH EAX                            ; 0052c710
    MOV ESI,dword ptr [0x005fba60]      ; 0052c711 | DAT_005fba60
    PUSH ESI                            ; 0052c717
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0052c718
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0052c71d
    PUSH EAX                            ; 0052c720
    MOV EDI,dword ptr [ESP + 0x4830]    ; 0052c721
    PUSH EDI                            ; 0052c728
    MOV EAX,[0x00603b28]                ; 0052c729 | g_CDemonSetPtr
    PUSH EAX                            ; 0052c72e | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraEnabledByGroup_FUN_0053b360 ; 0052c72f
        ;   XREF to: 0053b360 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraEnabledByGroup_FUN_0053b360(CDemonSet * this_ptr, int group_id, int enabled)
    ADD ESP,0xc                         ; 0052c734
    JMP 0x00529b1b                      ; 0052c737
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0xf                         ; 0052c73c
        ;   Label: LAB_0052c73c
    PUSH ESI                            ; 0052c73f
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052c740
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052c745
    LEA EDX,[ESP + 0x4834]              ; 0052c748
    PUSH EDX                            ; 0052c74f
    LEA EDX,[ESP + 0x3620]              ; 0052c750
    PUSH EDX                            ; 0052c757
    LEA EDX,[ESP + 0x3ad4]              ; 0052c758
    PUSH EDX                            ; 0052c75f
    PUSH 0x5ce984                       ; 0052c760 | = "(%[^,], %[^)])%n"
    MOV ECX,0xffffffff                  ; 0052c765
    PUSH EAX                            ; 0052c76a
    MOV dword ptr [ESP + 0x480c],EAX    ; 0052c76b
    MOV dword ptr [ESP + 0x4848],ECX    ; 0052c772
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052c779
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052c77e
    MOV ESI,dword ptr [ESP + 0x4834]    ; 0052c781
    CMP ESI,0x3                         ; 0052c788
    JGE 0x0052c7a4                      ; 0052c78b
        ;   XREF to: 0052c7a4 (CONDITIONAL_JUMP)  ; LAB_0052c7a4
    PUSH 0x5ce995                       ; 0052c78d | = "Error parsing enableHealthBar parms"
    PUSH 0x1ed6810                      ; 0052c792 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052c797
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052c79c
    JMP 0x00529bec                      ; 0052c79f
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDI,dword ptr [ESP + 0x47f8]    ; 0052c7a4
        ;   Label: LAB_0052c7a4
    LEA EAX,[ESP + 0x3acc]              ; 0052c7ab
    ADD EDI,ESI                         ; 0052c7b2
    PUSH EAX                            ; 0052c7b4
    MOV dword ptr [ESP + 0x47fc],EDI    ; 0052c7b5
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052c7bc
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052c7c1
    LEA EAX,[ESP + 0x361c]              ; 0052c7c4
    PUSH EAX                            ; 0052c7cb
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052c7cc
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052c7d1
    PUSH 0x7e2cb4                       ; 0052c7d4 | g_CCharacterClassInfo
    MOV EAX,[0x007e2cec]                ; 0052c7d9 | g_CCharacterClassInfo.name_hash
    PUSH EAX                            ; 0052c7de
    LEA EAX,[ESP + 0x3ad4]              ; 0052c7df
    PUSH EAX                            ; 0052c7e6
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052c7e7
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    ADD ESP,0xc                         ; 0052c7ec
    MOV ESI,EAX                         ; 0052c7ef
    TEST EAX,EAX                        ; 0052c7f1
    JNZ 0x0052c807                      ; 0052c7f3
        ;   XREF to: 0052c807 (CONDITIONAL_JUMP)  ; LAB_0052c807
    CMP dword ptr [0x01ed701c],0x0      ; 0052c7f5 | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052c7fc
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052c802
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    PUSH 0x5ce9b9                       ; 0052c807 | = "false"
        ;   Label: LAB_0052c807
    LEA EAX,[ESP + 0x3620]              ; 0052c80c
    PUSH EAX                            ; 0052c813
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0052c814
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0052c819
    TEST EAX,EAX                        ; 0052c81c
    JNZ 0x0052c838                      ; 0052c81e
        ;   XREF to: 0052c838 (CONDITIONAL_JUMP)  ; LAB_0052c838
    CMP dword ptr [0x01ed6808],0x0      ; 0052c820 | DAT_01ed6808
        ;   Label: LAB_0052c820
    JNZ 0x00529b1b                      ; 0052c827
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV dword ptr [ESI + 0x2540],EAX    ; 0052c82d
    JMP 0x00529b1b                      ; 0052c833
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH 0x5ce9bf                       ; 0052c838 | DAT_005ce9bf
        ;   Label: LAB_0052c838
    LEA EAX,[ESP + 0x3620]              ; 0052c83d
    PUSH EAX                            ; 0052c844
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0052c845
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0052c84a
    TEST EAX,EAX                        ; 0052c84d
    JNZ 0x0052c858                      ; 0052c84f
        ;   XREF to: 0052c858 (CONDITIONAL_JUMP)  ; LAB_0052c858
    MOV EAX,0x1                         ; 0052c851
    JMP 0x0052c820                      ; 0052c856
        ;   XREF to: 0052c820 (UNCONDITIONAL_JUMP)  ; LAB_0052c820
    PUSH 0x5ce9c4                       ; 0052c858 | = "always"
        ;   Label: LAB_0052c858
    LEA EAX,[ESP + 0x3620]              ; 0052c85d
    PUSH EAX                            ; 0052c864
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0052c865
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0052c86a
    TEST EAX,EAX                        ; 0052c86d
    JNZ 0x0052c878                      ; 0052c86f
        ;   XREF to: 0052c878 (CONDITIONAL_JUMP)  ; LAB_0052c878
    MOV EAX,0x2                         ; 0052c871
    JMP 0x0052c820                      ; 0052c876
        ;   XREF to: 0052c820 (UNCONDITIONAL_JUMP)  ; LAB_0052c820
    LEA EAX,[ESP + 0x361c]              ; 0052c878
        ;   Label: LAB_0052c878
    PUSH EAX                            ; 0052c87f
    PUSH 0x5ce9cb                       ; 0052c880 | = "Invalid health bar mode '%s'"
    PUSH 0x1ed6810                      ; 0052c885 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052c88a
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 0052c88f
    JMP 0x00529bec                      ; 0052c892
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0x3                         ; 0052c897
        ;   Label: LAB_0052c897
    PUSH ESI                            ; 0052c89a
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052c89b
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052c8a0
    MOV ESI,dword ptr [0x01ed6808]      ; 0052c8a3 | DAT_01ed6808
    MOV dword ptr [ESP + 0x47f8],EAX    ; 0052c8a9
    TEST ESI,ESI                        ; 0052c8b0
    JNZ 0x00529b1b                      ; 0052c8b2
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV dword ptr [ESP + 0x47e4],ESI    ; 0052c8b8
    MOV dword ptr [EBX],0x1             ; 0052c8bf
    JMP 0x00529b1b                      ; 0052c8c5
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0x6                         ; 0052c8ca
        ;   Label: LAB_0052c8ca
    PUSH ESI                            ; 0052c8cd
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052c8ce
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052c8d3
    MOV dword ptr [ESP + 0x47f8],EAX    ; 0052c8d6
    MOV EAX,[0x01ed6808]                ; 0052c8dd | DAT_01ed6808
    TEST EAX,EAX                        ; 0052c8e2
    JNZ 0x00529b1b                      ; 0052c8e4
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    FLD float ptr [EBX + 0x48]          ; 0052c8ea
    FLDZ                                ; 0052c8ed
    MOV dword ptr [ESP + 0x47e4],EAX    ; 0052c8ef
    FCOMPP                              ; 0052c8f6
    FNSTSW AX                           ; 0052c8f8
    SAHF                                ; 0052c8fa
    JBE 0x0052c918                      ; 0052c8fb
        ;   XREF to: 0052c918 (CONDITIONAL_JUMP)  ; LAB_0052c918
    MOV EDI,dword ptr [0x005fe9dc]      ; 0052c8fd | g_CGamePtr
    PUSH EDI                            ; 0052c903
    CALL core_game.cpp_FUN_004bd620     ; 0052c904
        ;   XREF to: 004bd620 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004bd620(CGame * this_ptr)
    ADD ESP,0x4                         ; 0052c909
    MOV dword ptr [EBX + 0x48],0x3f800000 ; 0052c90c
    JMP 0x00529b1b                      ; 0052c913
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV ECX,dword ptr [0x005fe9dc]      ; 0052c918 | g_CGamePtr
        ;   Label: LAB_0052c918
    PUSH ECX                            ; 0052c91e
    CALL core_game.cpp_CGame_fadeIn_FUN_004bd8d0 ; 0052c91f
        ;   XREF to: 004bd8d0 (UNCONDITIONAL_CALL)  ; uint core_game.cpp_CGame_fadeIn_FUN_004bd8d0(CGame * this_ptr)
    ADD ESP,0x4                         ; 0052c924
    TEST EAX,EAX                        ; 0052c927
    JZ 0x00529b1b                       ; 0052c929
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV ESI,0x1                         ; 0052c92f
    MOV EAX,[0x005fe9dc]                ; 0052c934 | g_CGamePtr
    MOV dword ptr [ESP + 0x47e4],ESI    ; 0052c939
    MOV dword ptr [EAX + 0x250],0x1     ; 0052c940 | g_CGameInstance.field592_0x250
    JMP 0x00529b1b                      ; 0052c94a
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0x7                         ; 0052c94f
        ;   Label: LAB_0052c94f
    PUSH ESI                            ; 0052c952
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052c953
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052c958
    MOV dword ptr [ESP + 0x47f8],EAX    ; 0052c95b
    MOV EAX,[0x01ed6808]                ; 0052c962 | DAT_01ed6808
    TEST EAX,EAX                        ; 0052c967
    JNZ 0x00529b1b                      ; 0052c969
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EDX,dword ptr [0x005fe9dc]      ; 0052c96f | g_CGamePtr
    MOV dword ptr [EDX + 0x250],EAX     ; 0052c975 | g_CGameInstance.field592_0x250
    MOV dword ptr [ESP + 0x47e4],EAX    ; 0052c97b
    FLD float ptr [EBX + 0x48]          ; 0052c982
    FLDZ                                ; 0052c985
    FCOMPP                              ; 0052c987
    FNSTSW AX                           ; 0052c989
    SAHF                                ; 0052c98b
    JBE 0x0052c9a3                      ; 0052c98c
        ;   XREF to: 0052c9a3 (CONDITIONAL_JUMP)  ; LAB_0052c9a3
    PUSH EDX                            ; 0052c98e
    CALL core_game.cpp_CGame_beginFadeOut_FUN_004bd660 ; 0052c98f
        ;   XREF to: 004bd660 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_beginFadeOut_FUN_004bd660(CGame * this_ptr)
    ADD ESP,0x4                         ; 0052c994
    MOV dword ptr [EBX + 0x48],0x3f800000 ; 0052c997
    JMP 0x00529b1b                      ; 0052c99e
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH EDX                            ; 0052c9a3
        ;   Label: LAB_0052c9a3
    CALL core_game.cpp_CGame_fadeIn_FUN_004bd8d0 ; 0052c9a4
        ;   XREF to: 004bd8d0 (UNCONDITIONAL_CALL)  ; uint core_game.cpp_CGame_fadeIn_FUN_004bd8d0(CGame * this_ptr)
    ADD ESP,0x4                         ; 0052c9a9
    TEST EAX,EAX                        ; 0052c9ac
    JZ 0x00529b1b                       ; 0052c9ae
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV dword ptr [ESP + 0x47e4],0x1    ; 0052c9b4
    JMP 0x00529b1b                      ; 0052c9bf
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0x7                         ; 0052c9c4
        ;   Label: LAB_0052c9c4
    PUSH ESI                            ; 0052c9c7
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052c9c8
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052c9cd
    LEA EDX,[ESP + 0x4840]              ; 0052c9d0
    PUSH EDX                            ; 0052c9d7
    LEA EDX,[ESP + 0x3878]              ; 0052c9d8
    PUSH EDX                            ; 0052c9df
    LEA EDX,[ESP + 0x29a4]              ; 0052c9e0
    PUSH EDX                            ; 0052c9e7
    PUSH 0x5cea03                       ; 0052c9e8 | = "(%[^,], %[^,)]%n"
    MOV EDI,0xffffffff                  ; 0052c9ed
    PUSH EAX                            ; 0052c9f2
    MOV dword ptr [ESP + 0x480c],EAX    ; 0052c9f3
    MOV dword ptr [ESP + 0x4854],EDI    ; 0052c9fa
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052ca01
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052ca06
    MOV EAX,dword ptr [ESP + 0x4840]    ; 0052ca09
    CMP EAX,0x5                         ; 0052ca10
    JGE 0x0052ca2c                      ; 0052ca13
        ;   XREF to: 0052ca2c (CONDITIONAL_JUMP)  ; LAB_0052ca2c
    PUSH 0x5cea14                       ; 0052ca15 | = "Error parsing gesture command parms"
    PUSH 0x1ed6810                      ; 0052ca1a | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052ca1f
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052ca24
    JMP 0x00529bec                      ; 0052ca27
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDX,dword ptr [ESP + 0x47f8]    ; 0052ca2c
        ;   Label: LAB_0052ca2c
    ADD EDX,EAX                         ; 0052ca33
    LEA EAX,[ESP + 0x299c]              ; 0052ca35
    PUSH EAX                            ; 0052ca3c
    MOV dword ptr [ESP + 0x47fc],EDX    ; 0052ca3d
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052ca44
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052ca49
    LEA EAX,[ESP + 0x3874]              ; 0052ca4c
    PUSH EAX                            ; 0052ca53
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052ca54
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052ca59
    XOR ECX,ECX                         ; 0052ca5c
    MOV EAX,dword ptr [ESP + 0x47f8]    ; 0052ca5e
    MOV dword ptr [ESP + 0x4844],ECX    ; 0052ca65
    CMP byte ptr [EAX],0x2c             ; 0052ca6c
    JNZ 0x0052cab0                      ; 0052ca6f
        ;   XREF to: 0052cab0 (CONDITIONAL_JUMP)  ; LAB_0052cab0
    LEA EAX,[ESP + 0x4840]              ; 0052ca71
    PUSH EAX                            ; 0052ca78
    LEA EAX,[ESP + 0x4848]              ; 0052ca79
    PUSH EAX                            ; 0052ca80
    PUSH 0x5cea38                       ; 0052ca81 | = ", %d %n"
    MOV dword ptr [ESP + 0x484c],EDI    ; 0052ca86
    MOV EDI,dword ptr [ESP + 0x4804]    ; 0052ca8d
    PUSH EDI                            ; 0052ca94
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052ca95
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 0052ca9a
    MOV EAX,dword ptr [ESP + 0x4840]    ; 0052ca9d
    CMP EAX,0x1                         ; 0052caa4
    JL 0x0052cad3                       ; 0052caa7
        ;   XREF to: 0052cad3 (CONDITIONAL_JUMP)  ; LAB_0052cad3
    ADD dword ptr [ESP + 0x47f8],EAX    ; 0052caa9
    MOV EAX,dword ptr [ESP + 0x47f8]    ; 0052cab0
        ;   Label: LAB_0052cab0
    CMP byte ptr [EAX],0x29             ; 0052cab7
    JZ 0x0052caea                       ; 0052caba
        ;   XREF to: 0052caea (CONDITIONAL_JUMP)  ; LAB_0052caea
    PUSH 0x5cea61                       ; 0052cabc | = "Error parsing gesture command parms -..."
    PUSH 0x1ed6810                      ; 0052cac1 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052cac6
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052cacb
    JMP 0x00529bec                      ; 0052cace
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    PUSH 0x5cea40                       ; 0052cad3 | = "Error parsing gesture loop parms"
        ;   Label: LAB_0052cad3
    PUSH 0x1ed6810                      ; 0052cad8 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052cadd
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052cae2
    JMP 0x00529bec                      ; 0052cae5
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    PUSH 0x7e2cb4                       ; 0052caea | g_CCharacterClassInfo
        ;   Label: LAB_0052caea
    MOV ECX,dword ptr [0x007e2cec]      ; 0052caef | g_CCharacterClassInfo.name_hash
    MOV ESI,dword ptr [ESP + 0x47fc]    ; 0052caf5
    PUSH ECX                            ; 0052cafc
    LEA EAX,[ESP + 0x29a4]              ; 0052cafd
    INC ESI                             ; 0052cb04
    PUSH EAX                            ; 0052cb05
    MOV dword ptr [ESP + 0x4804],ESI    ; 0052cb06
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052cb0d
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    MOV ESI,EAX                         ; 0052cb12
    ADD ESP,0xc                         ; 0052cb14
    MOV EDI,EAX                         ; 0052cb17
    TEST EAX,EAX                        ; 0052cb19
    JNZ 0x0052cb2f                      ; 0052cb1b
        ;   XREF to: 0052cb2f (CONDITIONAL_JUMP)  ; LAB_0052cb2f
    CMP dword ptr [0x01ed701c],0x0      ; 0052cb1d | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052cb24
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052cb2a
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    CMP dword ptr [0x01ed6808],0x0      ; 0052cb2f | DAT_01ed6808
        ;   Label: LAB_0052cb2f
    JZ 0x0052cba2                       ; 0052cb36
        ;   XREF to: 0052cba2 (CONDITIONAL_JUMP)  ; LAB_0052cba2
    PUSH 0x0                            ; 0052cb38
    LEA EAX,[ESP + 0x3878]              ; 0052cb3a
    PUSH EAX                            ; 0052cb41
    ADD ESI,0x158                       ; 0052cb42
    PUSH ESI                            ; 0052cb48
    CALL core_motion.cpp_FUN_004fc310   ; 0052cb49
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0052cb4e
    PUSH EAX                            ; 0052cb51
    CALL core_motion.cpp_FUN_004fb9c0   ; 0052cb52
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_004fb9c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0052cb57
    XOR EDX,EDX                         ; 0052cb5a
    TEST EAX,EAX                        ; 0052cb5c
    SETGE AL                            ; 0052cb5e
    MOV DL,AL                           ; 0052cb61
    TEST EDX,EDX                        ; 0052cb63
        ;   Label: LAB_0052cb63
    JNZ 0x00529b1b                      ; 0052cb65
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EAX,[EDI + 0x158]               ; 0052cb6b
    PUSH EAX                            ; 0052cb71
    CALL core_bugs.cpp_FUN_004242d0     ; 0052cb72
        ;   XREF to: 004242d0 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_004242d0()
    ADD ESP,0x4                         ; 0052cb77
    PUSH EAX                            ; 0052cb7a
    LEA EAX,[ESP + 0x29a0]              ; 0052cb7b
    PUSH EAX                            ; 0052cb82
    LEA EAX,[ESP + 0x387c]              ; 0052cb83
    PUSH EAX                            ; 0052cb8a
    PUSH 0x5cea99                       ; 0052cb8b | = "Gesture name %s is not valid for acto..."
    PUSH 0x1ed6810                      ; 0052cb90 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052cb95
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x14                        ; 0052cb9a
    JMP 0x00529bec                      ; 0052cb9d
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EAX,[ESP + 0x3874]              ; 0052cba2
        ;   Label: LAB_0052cba2
    PUSH EAX                            ; 0052cba9
    PUSH ESI                            ; 0052cbaa
    CALL core_charactr.cpp_FUN_00432090 ; 0052cbab
        ;   XREF to: 00432090 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00432090(CCharacter * this_ptr, char * motion_name)
    ADD ESP,0x8                         ; 0052cbb0
    MOV EDX,EAX                         ; 0052cbb3
    MOV EAX,dword ptr [ESP + 0x4844]    ; 0052cbb5
    MOV dword ptr [ESI + 0x275c],EAX    ; 0052cbbc
    JMP 0x0052cb63                      ; 0052cbc2
        ;   XREF to: 0052cb63 (UNCONDITIONAL_JUMP)  ; LAB_0052cb63
    ADD ESI,0x9                         ; 0052cbc4
        ;   Label: LAB_0052cbc4
    PUSH ESI                            ; 0052cbc7
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052cbc8
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052cbcd
    LEA EDX,[ESP + 0x4848]              ; 0052cbd0
    PUSH EDX                            ; 0052cbd7
    LEA EDX,[ESP + 0x2040]              ; 0052cbd8
    PUSH EDX                            ; 0052cbdf
    LEA EDX,[ESP + 0x3494]              ; 0052cbe0
    PUSH EDX                            ; 0052cbe7
    PUSH 0x5cead7                       ; 0052cbe8 | = "(%[^,], %[^,)] )%n"
    MOV ECX,0xffffffff                  ; 0052cbed
    PUSH EAX                            ; 0052cbf2
    MOV dword ptr [ESP + 0x480c],EAX    ; 0052cbf3
    MOV dword ptr [ESP + 0x485c],ECX    ; 0052cbfa
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052cc01
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052cc06
    MOV ESI,dword ptr [ESP + 0x4848]    ; 0052cc09
    CMP ESI,0x5                         ; 0052cc10
    JGE 0x0052cc2c                      ; 0052cc13
        ;   XREF to: 0052cc2c (CONDITIONAL_JUMP)  ; LAB_0052cc2c
    PUSH 0x5ceaea                       ; 0052cc15 | = "Error parsing getIniInt command parms"
    PUSH 0x1ed6810                      ; 0052cc1a | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052cc1f
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052cc24
    JMP 0x00529bec                      ; 0052cc27
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDI,dword ptr [ESP + 0x47f8]    ; 0052cc2c
        ;   Label: LAB_0052cc2c
    LEA EAX,[ESP + 0x348c]              ; 0052cc33
    ADD EDI,ESI                         ; 0052cc3a
    PUSH EAX                            ; 0052cc3c
    MOV dword ptr [ESP + 0x47fc],EDI    ; 0052cc3d
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052cc44
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052cc49
    LEA EAX,[ESP + 0x203c]              ; 0052cc4c
    PUSH EAX                            ; 0052cc53
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052cc54
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    MOV EAX,[0x01ed6808]                ; 0052cc59 | DAT_01ed6808
    ADD ESP,0x4                         ; 0052cc5e
    TEST EAX,EAX                        ; 0052cc61
    JNZ 0x00529b1b                      ; 0052cc63
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH 0x5ceb10                       ; 0052cc69 | DAT_005ceb10
    PUSH 0x5ceb15                       ; 0052cc6e | = "system\\bw3.ini"
    LEA EAX,[ESP + 0x240]               ; 0052cc73
    PUSH EAX                            ; 0052cc7a
    CALL engine_ini.cpp_FUN_004d8a20    ; 0052cc7b
        ;   XREF to: 004d8a20 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_FUN_004d8a20(CIniFile * this_ptr, char * filename, char * section)
    ADD ESP,0xc                         ; 0052cc80
    LEA EAX,[ESP + 0x203c]              ; 0052cc83
    PUSH EAX                            ; 0052cc8a
    MOV EDX,dword ptr [0x005fba60]      ; 0052cc8b | DAT_005fba60
    PUSH EDX                            ; 0052cc91
    CALL core_event.cpp_CEventList_getCounterValue_FUN_00494d00 ; 0052cc92
        ;   XREF to: 00494d00 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_getCounterValue_FUN_00494d00(CEventList * this_ptr, char * str)
    ADD ESP,0x8                         ; 0052cc97
    MOV dword ptr [ESP + 0x484c],EAX    ; 0052cc9a
    LEA EAX,[ESP + 0x484c]              ; 0052cca1
    PUSH EAX                            ; 0052cca8
    LEA EAX,[ESP + 0x3490]              ; 0052cca9
    PUSH EAX                            ; 0052ccb0
    LEA EAX,[ESP + 0x240]               ; 0052ccb1
    PUSH EAX                            ; 0052ccb8
    CALL engine_ini.cpp_FUN_004d8c30    ; 0052ccb9
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 0052ccbe
    MOV ECX,dword ptr [ESP + 0x484c]    ; 0052ccc1
    PUSH ECX                            ; 0052ccc8
    LEA EAX,[ESP + 0x2040]              ; 0052ccc9
    PUSH EAX                            ; 0052ccd0
    MOV ESI,dword ptr [0x005fba60]      ; 0052ccd1 | DAT_005fba60
    PUSH ESI                            ; 0052ccd7
    CALL core_event.cpp_CEventList_setCounter_FUN_00494bf0 ; 0052ccd8
        ;   XREF to: 00494bf0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_setCounter_FUN_00494bf0(CEventList * this_ptr, char * name, int value)
    ADD ESP,0xc                         ; 0052ccdd
    PUSH 0x0                            ; 0052cce0
    LEA EAX,[ESP + 0x23c]               ; 0052cce2
    PUSH EAX                            ; 0052cce9
    CALL engine_ini.cpp_CIniFile_dtor_FUN_004d8a50 ; 0052ccea
        ;   XREF to: 004d8a50 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_CIniFile_dtor_FUN_004d8a50(CIniFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0052ccef
    JMP 0x00529b1b                      ; 0052ccf2
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0xf                         ; 0052ccf7
        ;   Label: LAB_0052ccf7
    PUSH ESI                            ; 0052ccfa
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052ccfb
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052cd00
    LEA EDX,[ESP + 0x4850]              ; 0052cd03
    PUSH EDX                            ; 0052cd0a
    LEA EDX,[ESP + 0x2cc0]              ; 0052cd0b
    PUSH EDX                            ; 0052cd12
    LEA EDX,[ESP + 0x1234]              ; 0052cd13
    PUSH EDX                            ; 0052cd1a
    PUSH 0x5ceb34                       ; 0052cd1b | = "(%[^,], %[^)])%n"
    MOV EDI,0xffffffff                  ; 0052cd20
    PUSH EAX                            ; 0052cd25
    MOV dword ptr [ESP + 0x480c],EAX    ; 0052cd26
    MOV dword ptr [ESP + 0x4864],EDI    ; 0052cd2d
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052cd34
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052cd39
    MOV EAX,dword ptr [ESP + 0x4850]    ; 0052cd3c
    CMP EAX,0x5                         ; 0052cd43
    JGE 0x0052cd5f                      ; 0052cd46
        ;   XREF to: 0052cd5f (CONDITIONAL_JUMP)  ; LAB_0052cd5f
    PUSH 0x5ceb45                       ; 0052cd48 | = "Error parsing getTriggerActor command..."
    PUSH 0x1ed6810                      ; 0052cd4d | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052cd52
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052cd57
    JMP 0x00529bec                      ; 0052cd5a
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDX,dword ptr [ESP + 0x47f8]    ; 0052cd5f
        ;   Label: LAB_0052cd5f
    ADD EDX,EAX                         ; 0052cd66
    LEA EAX,[ESP + 0x122c]              ; 0052cd68
    PUSH EAX                            ; 0052cd6f
    MOV dword ptr [ESP + 0x47fc],EDX    ; 0052cd70
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052cd77
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052cd7c
    LEA EAX,[ESP + 0x2cbc]              ; 0052cd7f
    PUSH EAX                            ; 0052cd86
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052cd87
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052cd8c
    LEA EAX,[ESP + 0x122c]              ; 0052cd8f
    PUSH EAX                            ; 0052cd96
    CALL core_script.cpp_validateActorVariableName_FUN_005286f0 ; 0052cd97
        ;   XREF to: 005286f0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_validateActorVariableName_FUN_005286f0(char * variable_name)
    ADD ESP,0x4                         ; 0052cd9c
    TEST EAX,EAX                        ; 0052cd9f
    JZ 0x00529bec                       ; 0052cda1
        ;   XREF to: 00529bec (CONDITIONAL_JUMP)  ; LAB_00529bec
    PUSH 0x2cfd85c                      ; 0052cda7
    MOV ECX,dword ptr [0x02cfd894]      ; 0052cdac | g_CTriggerClassInfo.name_hash
    PUSH ECX                            ; 0052cdb2
    LEA EAX,[ESP + 0x2cc4]              ; 0052cdb3
    PUSH EAX                            ; 0052cdba
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052cdbb
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    ADD ESP,0xc                         ; 0052cdc0
    TEST EAX,EAX                        ; 0052cdc3
    JNZ 0x0052cdd9                      ; 0052cdc5
        ;   XREF to: 0052cdd9 (CONDITIONAL_JUMP)  ; LAB_0052cdd9
    CMP dword ptr [0x01ed701c],0x0      ; 0052cdc7 | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052cdce
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052cdd4
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    CMP dword ptr [0x01ed6808],0x0      ; 0052cdd9 | DAT_01ed6808
        ;   Label: LAB_0052cdd9
    JNZ 0x00529b1b                      ; 0052cde0
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EDI,dword ptr [EAX + 0x300]     ; 0052cde6
    PUSH EDI                            ; 0052cdec
    LEA EAX,[ESP + 0x1230]              ; 0052cded
    PUSH EAX                            ; 0052cdf4
    MOV EAX,[0x005fba60]                ; 0052cdf5 | DAT_005fba60
    PUSH EAX                            ; 0052cdfa
    CALL core_event.cpp_CEventList_setActorVariable_FUN_00494e70 ; 0052cdfb
        ;   XREF to: 00494e70 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_setActorVariable_FUN_00494e70(CEventList * this_ptr, char * var_name, CDemonActor * actor)
    ADD ESP,0xc                         ; 0052ce00
    JMP 0x00529b1b                      ; 0052ce03
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EAX,[ESI + 0x5]                 ; 0052ce08
        ;   Label: LAB_0052ce08
    PUSH EAX                            ; 0052ce0b
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052ce0c
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052ce11
    PUSH EAX                            ; 0052ce14
    PUSH EBX                            ; 0052ce15
    MOV dword ptr [ESP + 0x4800],EAX    ; 0052ce16
    CALL core_script.cpp_FUN_005303b0   ; 0052ce1d
        ;   XREF to: 005303b0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_FUN_005303b0(CScript * this_ptr, char * label_name)
    ADD ESP,0x8                         ; 0052ce22
    TEST EAX,EAX                        ; 0052ce25
    JL 0x0052ce42                       ; 0052ce27
        ;   XREF to: 0052ce42 (CONDITIONAL_JUMP)  ; LAB_0052ce42
    CMP dword ptr [0x01ed6808],0x0      ; 0052ce29 | DAT_01ed6808
    JZ 0x0052ce5c                       ; 0052ce30
        ;   XREF to: 0052ce5c (CONDITIONAL_JUMP)  ; LAB_0052ce5c
    MOV dword ptr [ESP + 0x47f8],0x5cec22 ; 0052ce32 | DAT_005cec22
    JMP 0x00529b1b                      ; 0052ce3d
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EDI,dword ptr [ESP + 0x47f4]    ; 0052ce42
        ;   Label: LAB_0052ce42
    PUSH EDI                            ; 0052ce49
    MOV EAX,dword ptr [ESP + 0x47fc]    ; 0052ce4a
    PUSH EAX                            ; 0052ce51
    PUSH 0x5ceb77                       ; 0052ce52 | = "Undefined label %s used in gosub stat..."
    JMP 0x00529bdf                      ; 0052ce57
        ;   XREF to: 00529bdf (UNCONDITIONAL_JUMP)  ; LAB_00529bdf
    MOV EDI,dword ptr [EBX + 0x458]     ; 0052ce5c
        ;   Label: LAB_0052ce5c
    CMP EDI,0x8                         ; 0052ce62
    JGE 0x0052ce93                      ; 0052ce65
        ;   XREF to: 0052ce93 (CONDITIONAL_JUMP)  ; LAB_0052ce93
    MOV EDX,EDI                         ; 0052ce67
    MOV ECX,dword ptr [EBX + 0x44]      ; 0052ce69
    MOV dword ptr [EBX + EDX*0x4 + 0x45c],ECX ; 0052ce6c
    MOV EDX,dword ptr [EBX + 0x458]     ; 0052ce73
    MOV dword ptr [EBX + 0x44],EAX      ; 0052ce79
    INC EDX                             ; 0052ce7c
    MOV dword ptr [EBX + 0x458],EDX     ; 0052ce7d
    MOV dword ptr [ESP + 0x47f8],0x5cec22 ; 0052ce83 | DAT_005cec22
    JMP 0x00529b1b                      ; 0052ce8e
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH 0x5cebad                       ; 0052ce93 | DAT_005cebad
        ;   Label: LAB_0052ce93
    PUSH 0x5cebb0                       ; 0052ce98 | = "stack.txt"
    CALL crt_stdio.c_fopen_FUN_005a43ec ; 0052ce9d
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005a43ec()
    ADD ESP,0x8                         ; 0052cea2
    PUSH ESI                            ; 0052cea5
    MOV ECX,dword ptr [ESP + 0x47f8]    ; 0052cea6
    PUSH ECX                            ; 0052cead
    PUSH 0x5cebba                       ; 0052ceae | = "line%6d: %s\n"
    PUSH EAX                            ; 0052ceb3
    MOV dword ptr [ESP + 0x4864],EAX    ; 0052ceb4
    CALL crt_unknown.c_FUN_005a3140     ; 0052cebb
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV ESI,dword ptr [EBX + 0x458]     ; 0052cec0
    DEC ESI                             ; 0052cec6
    ADD ESP,0x10                        ; 0052cec7
    TEST ESI,ESI                        ; 0052ceca
    JL 0x0052cf10                       ; 0052cecc
        ;   XREF to: 0052cf10 (CONDITIONAL_JUMP)  ; LAB_0052cf10
    LEA EDI,[ESI*0x4 + 0x0]             ; 0052cece
    ADD EDI,EBX                         ; 0052ced5
    MOV EAX,dword ptr [EDI + 0x45c]     ; 0052ced7
        ;   Label: LAB_0052ced7
    MOV EDX,dword ptr [EBX + 0x30]      ; 0052cedd
    MOV ECX,dword ptr [EDX + EAX*0x8 + 0x4] ; 0052cee0
    PUSH ECX                            ; 0052cee4
    MOV ECX,dword ptr [EDX + EAX*0x8]   ; 0052cee5
    PUSH ECX                            ; 0052cee8
    PUSH 0x5cebc7                       ; 0052cee9 | = "line%6d: %s\n"
    MOV EAX,dword ptr [ESP + 0x4860]    ; 0052ceee
    PUSH EAX                            ; 0052cef5
    SUB EDI,0x4                         ; 0052cef6
    DEC ESI                             ; 0052cef9
    CALL crt_unknown.c_FUN_005a3140     ; 0052cefa
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x10                        ; 0052ceff
    TEST ESI,ESI                        ; 0052cf02
    JGE 0x0052ced7                      ; 0052cf04
        ;   XREF to: 0052ced7 (CONDITIONAL_JUMP)  ; LAB_0052ced7
    LEA EAX,[EAX]                       ; 0052cf06
    LEA EDX,[EDX]                       ; 0052cf0c
    MOV EDX,dword ptr [ESP + 0x4854]    ; 0052cf10
        ;   Label: LAB_0052cf10
    PUSH EDX                            ; 0052cf17
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 0052cf18
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 0052cf1d
    MOV ECX,dword ptr [ESP + 0x47f4]    ; 0052cf20
    PUSH ECX                            ; 0052cf27
    PUSH 0x5cebd4                       ; 0052cf28 | = "Call stack overflow detected on scrip..."
    PUSH 0x1ed6810                      ; 0052cf2d | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052cf32
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 0052cf37
    JMP 0x00529bec                      ; 0052cf3a
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0x4                         ; 0052cf3f
        ;   Label: LAB_0052cf3f
    PUSH ESI                            ; 0052cf42
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052cf43
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052cf48
    PUSH EAX                            ; 0052cf4b
    PUSH EBX                            ; 0052cf4c
    MOV dword ptr [ESP + 0x4800],EAX    ; 0052cf4d
    CALL core_script.cpp_FUN_005303b0   ; 0052cf54
        ;   XREF to: 005303b0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_FUN_005303b0(CScript * this_ptr, char * label_name)
    ADD ESP,0x8                         ; 0052cf59
    TEST EAX,EAX                        ; 0052cf5c
    JL 0x0052cf79                       ; 0052cf5e
        ;   XREF to: 0052cf79 (CONDITIONAL_JUMP)  ; LAB_0052cf79
    CMP dword ptr [0x01ed6808],0x0      ; 0052cf60 | DAT_01ed6808
    JZ 0x0052cf93                       ; 0052cf67
        ;   XREF to: 0052cf93 (CONDITIONAL_JUMP)  ; LAB_0052cf93
    MOV dword ptr [ESP + 0x47f8],0x5cec5d ; 0052cf69 | DAT_005cec5d
    JMP 0x00529b1b                      ; 0052cf74
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EBX,dword ptr [ESP + 0x47f4]    ; 0052cf79
        ;   Label: LAB_0052cf79
    PUSH EBX                            ; 0052cf80
    MOV ESI,dword ptr [ESP + 0x47fc]    ; 0052cf81
    PUSH ESI                            ; 0052cf88
    PUSH 0x5cec28                       ; 0052cf89 | = "Undefined label %s used in goto state..."
    JMP 0x00529bdf                      ; 0052cf8e
        ;   XREF to: 00529bdf (UNCONDITIONAL_JUMP)  ; LAB_00529bdf
    MOV dword ptr [EBX + 0x44],EAX      ; 0052cf93
        ;   Label: LAB_0052cf93
    MOV dword ptr [ESP + 0x47f8],0x5cec5d ; 0052cf96 | DAT_005cec5d
    JMP 0x00529b1b                      ; 0052cfa1
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0x4                         ; 0052cfa6
        ;   Label: LAB_0052cfa6
    PUSH ESI                            ; 0052cfa9
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052cfaa
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052cfaf
    PUSH 0x12c                          ; 0052cfb2
    MOV dword ptr [ESP + 0x47fc],EAX    ; 0052cfb7
    LEA EAX,[ESP + 0xa80]               ; 0052cfbe
    PUSH EAX                            ; 0052cfc5
    LEA EAX,[ESP + 0x4800]              ; 0052cfc6
    PUSH EAX                            ; 0052cfcd
    CALL core_script.cpp_parseArgument_FUN_005288c0 ; 0052cfce
        ;   XREF to: 005288c0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005288c0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0052cfd3
    TEST EAX,EAX                        ; 0052cfd6
    JNZ 0x0052c6e3                      ; 0052cfd8
        ;   XREF to: 0052c6e3 (CONDITIONAL_JUMP)  ; LAB_0052c6e3
    CMP dword ptr [0x01ed6808],0x0      ; 0052cfde | DAT_01ed6808
    JNZ 0x00529b1b                      ; 0052cfe5
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EAX,[ESP + 0xa7c]               ; 0052cfeb
    PUSH EAX                            ; 0052cff2
    MOV EAX,dword ptr [ESP + 0x47f8]    ; 0052cff3
    PUSH EAX                            ; 0052cffa
    PUSH 0x5cec63                       ; 0052cffb | = "Script GTFO at line %d:\n%s\nTerminat..."
    MOV EDX,dword ptr [0x005fb140]      ; 0052d000 | g_CEditorToolsPtr
    PUSH EDX                            ; 0052d006
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 0052d007
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 0052d00c
    XOR ECX,ECX                         ; 0052d00f
    MOV dword ptr [EBX],0x1             ; 0052d011
    MOV dword ptr [ESP + 0x47e4],ECX    ; 0052d017
    JMP 0x00529b1b                      ; 0052d01e
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0xd                         ; 0052d023
        ;   Label: LAB_0052d023
    PUSH ESI                            ; 0052d026
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052d027
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052d02c
    LEA EDX,[ESP + 0x4858]              ; 0052d02f
    PUSH EDX                            ; 0052d036
    LEA EDX,[ESP + 0x2b30]              ; 0052d037
    PUSH EDX                            ; 0052d03e
    PUSH 0x5ceca1                       ; 0052d03f | = "(%[^,)]%n"
    MOV ESI,0xffffffff                  ; 0052d044
    PUSH EAX                            ; 0052d049
    MOV dword ptr [ESP + 0x4808],EAX    ; 0052d04a
    MOV dword ptr [ESP + 0x4868],ESI    ; 0052d051
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052d058
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 0052d05d
    MOV EDI,dword ptr [ESP + 0x4858]    ; 0052d060
    CMP EDI,0x2                         ; 0052d067
    JGE 0x0052d083                      ; 0052d06a
        ;   XREF to: 0052d083 (CONDITIONAL_JUMP)  ; LAB_0052d083
    PUSH 0x5cecab                       ; 0052d06c | = "Error parsing holsterWeapon command p..."
    PUSH 0x1ed6810                      ; 0052d071 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052d076
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052d07b
    JMP 0x00529bec                      ; 0052d07e
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDX,dword ptr [ESP + 0x47f8]    ; 0052d083
        ;   Label: LAB_0052d083
    LEA EAX,[ESP + 0x2b2c]              ; 0052d08a
    ADD EDX,EDI                         ; 0052d091
    PUSH EAX                            ; 0052d093
    MOV dword ptr [ESP + 0x47fc],EDX    ; 0052d094
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052d09b
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052d0a0
    PUSH 0x1d5ba38                      ; 0052d0a3
    MOV ECX,dword ptr [0x01d5ba70]      ; 0052d0a8 | g_CHeroClassInfo.name_hash
    PUSH ECX                            ; 0052d0ae
    LEA EAX,[ESP + 0x2b34]              ; 0052d0af
    PUSH EAX                            ; 0052d0b6
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052d0b7
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    ADD ESP,0xc                         ; 0052d0bc
    MOV dword ptr [ESP + 0x485c],EAX    ; 0052d0bf
    TEST EAX,EAX                        ; 0052d0c6
    JNZ 0x0052d0dc                      ; 0052d0c8
        ;   XREF to: 0052d0dc (CONDITIONAL_JUMP)  ; LAB_0052d0dc
    CMP dword ptr [0x01ed701c],0x0      ; 0052d0ca | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052d0d1
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052d0d7
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EAX,dword ptr [ESP + 0x47f8]    ; 0052d0dc
        ;   Label: LAB_0052d0dc
    MOV ESI,0x1                         ; 0052d0e3
    MOV DL,byte ptr [EAX]               ; 0052d0e8
    MOV dword ptr [ESP + 0x4860],ESI    ; 0052d0ea
    CMP DL,0x2c                         ; 0052d0f1
    JZ 0x0052d152                       ; 0052d0f4
        ;   XREF to: 0052d152 (CONDITIONAL_JUMP)  ; LAB_0052d152
    MOV EAX,dword ptr [ESP + 0x47f8]    ; 0052d0f6
        ;   Label: LAB_0052d0f6
    CMP byte ptr [EAX],0x29             ; 0052d0fd
    JNZ 0x0052d23e                      ; 0052d100
        ;   XREF to: 0052d23e (CONDITIONAL_JUMP)  ; LAB_0052d23e
    INC EAX                             ; 0052d106
    MOV EDX,dword ptr [0x01ed6808]      ; 0052d107 | DAT_01ed6808
    MOV dword ptr [ESP + 0x47f8],EAX    ; 0052d10d
    TEST EDX,EDX                        ; 0052d114
    JNZ 0x00529b1b                      ; 0052d116
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EAX,dword ptr [ESP + 0x485c]    ; 0052d11c
    MOV ECX,dword ptr [ESP + 0x4860]    ; 0052d123
    MOV EAX,dword ptr [EAX + 0x154]     ; 0052d12a
    TEST ECX,ECX                        ; 0052d130
    SETZ DL                             ; 0052d132
    AND EDX,0xff                        ; 0052d135
    PUSH EDX                            ; 0052d13b
    MOV ESI,dword ptr [ESP + 0x4860]    ; 0052d13c
    PUSH ESI                            ; 0052d143
    CALL dword ptr [EAX + 0x144]        ; 0052d144
    ADD ESP,0x8                         ; 0052d14a
    JMP 0x00529b1b                      ; 0052d14d
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EDI,[EAX + ESI*0x1]             ; 0052d152
        ;   Label: LAB_0052d152
    MOV dword ptr [ESP + 0x47f8],EDI    ; 0052d155
    SUB ECX,ECX                         ; 0052d15c
    DEC ECX                             ; 0052d15e
    XOR EAX,EAX                         ; 0052d15f
    SCASB.REPNE ES:EDI                  ; 0052d161
    NOT ECX                             ; 0052d163
    DEC ECX                             ; 0052d165
    SUB ECX,ESI                         ; 0052d166
    MOV dword ptr [ESP + 0x4858],ECX    ; 0052d168
    CMP ECX,ESI                         ; 0052d16f
    JL 0x0052d204                       ; 0052d171
        ;   XREF to: 0052d204 (CONDITIONAL_JUMP)  ; LAB_0052d204
    MOV ESI,dword ptr [ESP + 0x47f8]    ; 0052d177
    LEA EDI,[ESP + 0x30a4]              ; 0052d17e
    PUSH EDI                            ; 0052d185
    MOV EAX,ECX                         ; 0052d186
    SHR ECX,0x2                         ; 0052d188
    MOVSD.REP ES:EDI,ESI                ; 0052d18b
    MOV CL,AL                           ; 0052d18d
    AND CL,0x3                          ; 0052d18f
    MOVSB.REP ES:EDI,ESI                ; 0052d192
    POP EDI                             ; 0052d194
    MOV EAX,dword ptr [ESP + 0x4858]    ; 0052d195
    XOR DH,DH                           ; 0052d19c
    MOV byte ptr [ESP + EAX*0x1 + 0x30a4],DH ; 0052d19e
    MOV EDX,dword ptr [ESP + 0x47f8]    ; 0052d1a5
    ADD EDX,EAX                         ; 0052d1ac
    MOV ECX,dword ptr [0x01ed6808]      ; 0052d1ae | DAT_01ed6808
    MOV dword ptr [ESP + 0x47f8],EDX    ; 0052d1b4
    TEST ECX,ECX                        ; 0052d1bb
    JZ 0x0052d21b                       ; 0052d1bd
        ;   XREF to: 0052d21b (CONDITIONAL_JUMP)  ; LAB_0052d21b
    LEA EAX,[ESP + 0x30a4]              ; 0052d1bf
    PUSH EAX                            ; 0052d1c6
    MOV EDI,dword ptr [0x005fba60]      ; 0052d1c7 | DAT_005fba60
    PUSH EDI                            ; 0052d1cd
    CALL core_event.cpp_CEventList_validateCondition_FUN_00491b00 ; 0052d1ce
        ;   XREF to: 00491b00 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCondition_FUN_00491b00(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 0052d1d3
    TEST EAX,EAX                        ; 0052d1d6
    JZ 0x0052d0f6                       ; 0052d1d8
        ;   XREF to: 0052d0f6 (CONDITIONAL_JUMP)  ; LAB_0052d0f6
    MOV EDI,0x1ed6810                   ; 0052d1de
        ;   Label: LAB_0052d1de
    MOV ESI,EAX                         ; 0052d1e3
    PUSH EDI                            ; 0052d1e5 | DAT_01ed6810
    MOV AL,byte ptr [ESI]               ; 0052d1e6
        ;   Label: LAB_0052d1e6
    MOV byte ptr [EDI],AL               ; 0052d1e8 | DAT_01ed6810 | DAT_01ed6812
    CMP AL,0x0                          ; 0052d1ea
    JZ 0x0052d1fe                       ; 0052d1ec
        ;   XREF to: 0052d1fe (CONDITIONAL_JUMP)  ; LAB_0052d1fe
    MOV AL,byte ptr [ESI + 0x1]         ; 0052d1ee
    ADD ESI,0x2                         ; 0052d1f1
    MOV byte ptr [EDI + 0x1],AL         ; 0052d1f4 | DAT_01ed6811 | DAT_01ed6813
    ADD EDI,0x2                         ; 0052d1f7
    CMP AL,0x0                          ; 0052d1fa
    JNZ 0x0052d1e6                      ; 0052d1fc
        ;   XREF to: 0052d1e6 (CONDITIONAL_JUMP)  ; LAB_0052d1e6
    POP EDI                             ; 0052d1fe
        ;   Label: LAB_0052d1fe
    JMP 0x00529bec                      ; 0052d1ff
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    PUSH 0x5cecd5                       ; 0052d204 | = "Error parsing holsterWeapon command p..."
        ;   Label: LAB_0052d204
    PUSH 0x1ed6810                      ; 0052d209 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052d20e
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052d213
    JMP 0x00529bec                      ; 0052d216
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EAX,[ESP + 0x30a4]              ; 0052d21b
        ;   Label: LAB_0052d21b
    PUSH EAX                            ; 0052d222
    MOV ESI,dword ptr [0x005fba60]      ; 0052d223 | DAT_005fba60
    PUSH ESI                            ; 0052d229
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0052d22a
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0052d22f
    MOV dword ptr [ESP + 0x4860],EAX    ; 0052d232
    JMP 0x0052d0f6                      ; 0052d239
        ;   XREF to: 0052d0f6 (UNCONDITIONAL_JUMP)  ; LAB_0052d0f6
    PUSH 0x5cecff                       ; 0052d23e | = "Missing closing ')' in holsterWeapon ..."
        ;   Label: LAB_0052d23e
    PUSH 0x1ed6810                      ; 0052d243 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052d248
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052d24d
    JMP 0x00529bec                      ; 0052d250
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0x4                         ; 0052d255
        ;   Label: LAB_0052d255
    PUSH ESI                            ; 0052d258
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052d259
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052d25e
    MOV dword ptr [ESP + 0x47f8],EAX    ; 0052d261
    MOV EAX,dword ptr [EBX + 0x44]      ; 0052d268
    MOV dword ptr [ESP + 0x47e8],EAX    ; 0052d26b
    XOR EAX,EAX                         ; 0052d272
    MOV dword ptr [ESP + 0x47e4],EAX    ; 0052d274
    JMP 0x00529b1b                      ; 0052d27b
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0x2                         ; 0052d280
        ;   Label: LAB_0052d280
    PUSH ESI                            ; 0052d283
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052d284
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052d289
    MOV dword ptr [ESP + 0x47f8],EAX    ; 0052d28c
    LEA EAX,[ESP + 0x3e50]              ; 0052d293
    PUSH EAX                            ; 0052d29a
    LEA EAX,[ESP + 0x47fc]              ; 0052d29b
    PUSH EAX                            ; 0052d2a2
    CALL core_script.cpp_parseConditionExpr_FUN_00528970 ; 0052d2a3
        ;   XREF to: 00528970 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseConditionExpr_FUN_00528970(char * * cursor, char * out_buffer)
    ADD ESP,0x8                         ; 0052d2a8
    TEST EAX,EAX                        ; 0052d2ab
    JNZ 0x0052d1de                      ; 0052d2ad
        ;   XREF to: 0052d1de (CONDITIONAL_JUMP)  ; LAB_0052d1de
    CMP dword ptr [0x01ed6808],0x0      ; 0052d2b3 | DAT_01ed6808
    JNZ 0x00529b1b                      ; 0052d2ba
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EAX,[ESP + 0x3e50]              ; 0052d2c0
    PUSH EAX                            ; 0052d2c7
    MOV ECX,dword ptr [0x005fba60]      ; 0052d2c8 | DAT_005fba60
    PUSH ECX                            ; 0052d2ce
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0052d2cf
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0052d2d4
    TEST EAX,EAX                        ; 0052d2d7
    JNZ 0x00529b1b                      ; 0052d2d9
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH EAX                            ; 0052d2df
    MOV ESI,dword ptr [EBX + 0x44]      ; 0052d2e0
    PUSH ESI                            ; 0052d2e3
    PUSH EBX                            ; 0052d2e4
    CALL core_script.cpp_FUN_00530410   ; 0052d2e5
        ;   XREF to: 00530410 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00530410()
    MOV ESI,EAX                         ; 0052d2ea
    ADD ESP,0xc                         ; 0052d2ec
    MOV EDI,EAX                         ; 0052d2ef
    TEST EAX,EAX                        ; 0052d2f1
    JL 0x0052d31b                       ; 0052d2f3
        ;   XREF to: 0052d31b (CONDITIONAL_JUMP)  ; LAB_0052d31b
    PUSH 0x4                            ; 0052d2f5
    MOV EDX,dword ptr [EBX + 0x30]      ; 0052d2f7
    PUSH 0x5ced6a                       ; 0052d2fa | DAT_005ced6a
    MOV EAX,dword ptr [EDX + ESI*0x8 + 0x4] ; 0052d2ff
    PUSH EAX                            ; 0052d303
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0052d304
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0052d309
    TEST EAX,EAX                        ; 0052d30c
    JNZ 0x0052d313                      ; 0052d30e
        ;   XREF to: 0052d313 (CONDITIONAL_JUMP)  ; LAB_0052d313
    LEA EDI,[ESI + 0x1]                 ; 0052d310
    MOV dword ptr [EBX + 0x44],EDI      ; 0052d313
        ;   Label: LAB_0052d313
    JMP 0x00529b1b                      ; 0052d316
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EDX,dword ptr [ESP + 0x47f4]    ; 0052d31b
        ;   Label: LAB_0052d31b
    PUSH EDX                            ; 0052d322
    PUSH 0x5ced34                       ; 0052d323 | = "Can't skip next command after if stat..."
    PUSH 0x1ed6810                      ; 0052d328 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052d32d
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 0052d332
    JMP 0x00529bec                      ; 0052d335
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0xb                         ; 0052d33a
        ;   Label: LAB_0052d33a
    PUSH ESI                            ; 0052d33d
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052d33e
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052d343
    LEA EDX,[ESP + 0x4864]              ; 0052d346
    PUSH EDX                            ; 0052d34d
    PUSH 0x5ced7b                       ; 0052d34e | = " ( )%n"
    MOV ECX,0xffffffff                  ; 0052d353
    PUSH EAX                            ; 0052d358
    MOV dword ptr [ESP + 0x4804],EAX    ; 0052d359
    MOV dword ptr [ESP + 0x4870],ECX    ; 0052d360
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052d367
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0xc                         ; 0052d36c
    MOV ESI,dword ptr [ESP + 0x4864]    ; 0052d36f
    CMP ESI,0x2                         ; 0052d376
    JL 0x0052d3b9                       ; 0052d379
        ;   XREF to: 0052d3b9 (CONDITIONAL_JUMP)  ; LAB_0052d3b9
    MOV EDI,dword ptr [ESP + 0x47f8]    ; 0052d37b
    ADD EDI,ESI                         ; 0052d382
    MOV EAX,[0x01ed6808]                ; 0052d384 | DAT_01ed6808
    MOV dword ptr [ESP + 0x47f8],EDI    ; 0052d389
    TEST EAX,EAX                        ; 0052d390
    JNZ 0x00529b1b                      ; 0052d392
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV dword ptr [ESP + 0x47e4],EAX    ; 0052d398
    MOV EAX,[0x005fe9dc]                ; 0052d39f | g_CGamePtr
    MOV dword ptr [EBX],0x1             ; 0052d3a4
    MOV dword ptr [EAX + 0x284],0x1     ; 0052d3aa | g_CGameInstance.field644_0x284
    JMP 0x00529b1b                      ; 0052d3b4
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH 0x5ced82                       ; 0052d3b9 | = "Error parsing finishedAct command"
        ;   Label: LAB_0052d3b9
    PUSH 0x1ed6810                      ; 0052d3be | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052d3c3
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052d3c8
    JMP 0x00529bec                      ; 0052d3cb
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0x9                         ; 0052d3d0
        ;   Label: LAB_0052d3d0
    PUSH ESI                            ; 0052d3d3
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052d3d4
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052d3d9
    PUSH 0x64                           ; 0052d3dc
    MOV dword ptr [ESP + 0x47fc],EAX    ; 0052d3de
    LEA EAX,[ESP + 0x4430]              ; 0052d3e5
    PUSH EAX                            ; 0052d3ec
    LEA EAX,[ESP + 0x4800]              ; 0052d3ed
    PUSH EAX                            ; 0052d3f4
    CALL core_script.cpp_parseArgument_FUN_005288c0 ; 0052d3f5
        ;   XREF to: 005288c0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005288c0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0052d3fa
    TEST EAX,EAX                        ; 0052d3fd
    JNZ 0x0052d1de                      ; 0052d3ff
        ;   XREF to: 0052d1de (CONDITIONAL_JUMP)  ; LAB_0052d1de
    PUSH 0x5cedae                       ; 0052d405 | = "false"
    LEA EAX,[ESP + 0x4430]              ; 0052d40a
    PUSH EAX                            ; 0052d411
    MOV ESI,0xffffffff                  ; 0052d412
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0052d417
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0052d41c
    TEST EAX,EAX                        ; 0052d41f
    JNZ 0x0052d425                      ; 0052d421
        ;   XREF to: 0052d425 (CONDITIONAL_JUMP)  ; LAB_0052d425
    XOR ESI,ESI                         ; 0052d423
    PUSH 0x5cedb4                       ; 0052d425 | DAT_005cedb4
        ;   Label: LAB_0052d425
    LEA EAX,[ESP + 0x4430]              ; 0052d42a
    PUSH EAX                            ; 0052d431
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0052d432
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0052d437
    TEST EAX,EAX                        ; 0052d43a
    JNZ 0x0052d443                      ; 0052d43c
        ;   XREF to: 0052d443 (CONDITIONAL_JUMP)  ; LAB_0052d443
    MOV ESI,0x1                         ; 0052d43e
    PUSH 0x5cedb9                       ; 0052d443 | = "bottom"
        ;   Label: LAB_0052d443
    LEA EAX,[ESP + 0x4430]              ; 0052d448
    PUSH EAX                            ; 0052d44f
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0052d450
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0052d455
    TEST EAX,EAX                        ; 0052d458
    JNZ 0x0052d583                      ; 0052d45a
        ;   XREF to: 0052d583 (CONDITIONAL_JUMP)  ; LAB_0052d583
    MOV ESI,0x2                         ; 0052d460
    MOV ECX,dword ptr [0x01ed6808]      ; 0052d465 | DAT_01ed6808
        ;   Label: LAB_0052d465
    TEST ECX,ECX                        ; 0052d46b
    JNZ 0x00529b1b                      ; 0052d46d
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EAX,[0x005fe9dc]                ; 0052d473 | g_CGamePtr
    MOV dword ptr [EAX + 0x24c],ESI     ; 0052d478 | g_CGameInstance.field588_0x24c
    TEST ESI,ESI                        ; 0052d47e
    SETZ DL                             ; 0052d480
    AND EDX,0xff                        ; 0052d483
    MOV EDI,dword ptr [EAX + 0x24c]     ; 0052d489 | g_CGameInstance.field588_0x24c
    MOV dword ptr [EAX + 0x250],EDX     ; 0052d48f | g_CGameInstance.field592_0x250
    TEST EDI,EDI                        ; 0052d495
    SETZ DL                             ; 0052d497
    AND EDX,0xff                        ; 0052d49a
    MOV dword ptr [EAX + 0x254],EDX     ; 0052d4a0 | g_CGameInstance.field596_0x254
    MOV EDX,dword ptr [EAX + 0x24c]     ; 0052d4a6 | g_CGameInstance.field588_0x24c
    MOV dword ptr [EAX + 0x25c],EDX     ; 0052d4ac | g_CGameInstance.field604_0x25c
    TEST EDX,EDX                        ; 0052d4b2
    JZ 0x0052d4be                       ; 0052d4b4
        ;   XREF to: 0052d4be (CONDITIONAL_JUMP)  ; LAB_0052d4be
    MOV EAX,[0x005fe4b0]                ; 0052d4b6 | g_CFieldNotesPtr
    MOV dword ptr [EAX + 0x40],ECX      ; 0052d4bb | g_CFieldNotesInstance.field64_0x40
    MOV EAX,[0x005fe9dc]                ; 0052d4be | g_CGamePtr
        ;   Label: LAB_0052d4be
    MOV dword ptr [EBX + 0x454],0xffffffff ; 0052d4c3
    MOV ECX,0x1                         ; 0052d4cd
    MOV ESI,dword ptr [EAX + 0x264]     ; 0052d4d2 | g_CGameInstance.field612_0x264
    MOV dword ptr [0x01ed7014],ECX      ; 0052d4d8 | DAT_01ed7014
    TEST ESI,ESI                        ; 0052d4de
    JZ 0x00529b1b                       ; 0052d4e0
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    CMP dword ptr [EAX + 0x24c],0x0     ; 0052d4e6 | g_CGameInstance.field588_0x24c
    JZ 0x00529b1b                       ; 0052d4ed
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EAX,[0x01d5ba14]                ; 0052d4f3 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0052d4f8
    PUSH EAX                            ; 0052d4ff
    MOV EDX,dword ptr [EAX + 0x154]     ; 0052d500
    CALL dword ptr [EDX + 0x150]        ; 0052d506
    ADD ESP,0x4                         ; 0052d50c
    MOV EAX,[0x005fe9dc]                ; 0052d50f | g_CGamePtr
    PUSH 0x0                            ; 0052d514
    MOV EDX,dword ptr [EAX + 0xb8c]     ; 0052d516 | g_CGameInstance.field2956_0xb8c
    PUSH EAX                            ; 0052d51c
    CALL dword ptr [EDX]                ; 0052d51d
    ADD ESP,0x8                         ; 0052d51f
    MOV EAX,[0x00603b28]                ; 0052d522 | g_CDemonSetPtr
    PUSH EAX                            ; 0052d527 | g_CDemonSetInstance
    CALL unkafter_mimic.cpp_FUN_00495e60 ; 0052d528
        ;   XREF to: 00495e60 (UNCONDITIONAL_CALL)  ; undefined unkafter_mimic.cpp_FUN_00495e60()
    ADD ESP,0x4                         ; 0052d52d
    MOV ESI,EAX                         ; 0052d530
    MOV EAX,[0x006039e0]                ; 0052d532 | g_CScriptPtr
    PUSH 0x1                            ; 0052d537
    MOV EDX,dword ptr [EAX + 0xc]       ; 0052d539 | g_CScriptInstance.field12_0xc
    PUSH EDX                            ; 0052d53c
    MOV ECX,dword ptr [0x00603b28]      ; 0052d53d | g_CDemonSetPtr
    PUSH ECX                            ; 0052d543 | g_CDemonSetInstance
    CALL core_setdir.cpp_FUN_0053f940   ; 0052d544
        ;   XREF to: 0053f940 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_FUN_0053f940()
    ADD ESP,0xc                         ; 0052d549
    MOV EDI,dword ptr [0x00603b28]      ; 0052d54c | g_CDemonSetPtr
    MOV EAX,[0x006039e0]                ; 0052d552 | g_CScriptPtr
    PUSH EDI                            ; 0052d557 | g_CDemonSetInstance
    MOV dword ptr [EAX + 0x10],0x0      ; 0052d558 | g_CScriptInstance.field16_0x10
    CALL unkafter_mimic.cpp_FUN_00495e60 ; 0052d55f
        ;   XREF to: 00495e60 (UNCONDITIONAL_CALL)  ; undefined unkafter_mimic.cpp_FUN_00495e60()
    ADD ESP,0x4                         ; 0052d564
    CMP ESI,EAX                         ; 0052d567
    JNZ 0x00529b1b                      ; 0052d569
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH EAX                            ; 0052d56f
    MOV EAX,[0x00603b28]                ; 0052d570 | g_CDemonSetPtr
    PUSH EAX                            ; 0052d575 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_00534890 ; 0052d576
        ;   XREF to: 00534890 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_00534890(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 0052d57b
    JMP 0x00529b1b                      ; 0052d57e
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    TEST ESI,ESI                        ; 0052d583
        ;   Label: LAB_0052d583
    JGE 0x0052d465                      ; 0052d585
        ;   XREF to: 0052d465 (CONDITIONAL_JUMP)  ; LAB_0052d465
    LEA EAX,[ESP + 0x442c]              ; 0052d58b
    PUSH EAX                            ; 0052d592
    PUSH 0x5cedc0                       ; 0052d593 | = "Invalid letterBox mode: %s"
    PUSH 0x1ed6810                      ; 0052d598 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052d59d
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 0052d5a2
    JMP 0x00529bec                      ; 0052d5a5
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0xe                         ; 0052d5aa
        ;   Label: LAB_0052d5aa
    PUSH ESI                            ; 0052d5ad
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052d5ae
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052d5b3
    PUSH 0x104                          ; 0052d5b6
    MOV dword ptr [ESP + 0x47fc],EAX    ; 0052d5bb
    LEA EAX,[ESP + 0xbac]               ; 0052d5c2
    PUSH EAX                            ; 0052d5c9
    LEA EAX,[ESP + 0x4800]              ; 0052d5ca
    PUSH EAX                            ; 0052d5d1
    CALL core_script.cpp_parseArgument_FUN_005288c0 ; 0052d5d2
        ;   XREF to: 005288c0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005288c0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0052d5d7
    TEST EAX,EAX                        ; 0052d5da
    JNZ 0x0052d1de                      ; 0052d5dc
        ;   XREF to: 0052d1de (CONDITIONAL_JUMP)  ; LAB_0052d1de
    CMP dword ptr [0x01ed6808],0x0      ; 0052d5e2 | DAT_01ed6808
    JZ 0x0052d630                       ; 0052d5e9
        ;   XREF to: 0052d630 (CONDITIONAL_JUMP)  ; LAB_0052d630
    MOV EAX,[0x00600530]                ; 0052d5eb | DAT_00600530
    CMP dword ptr [EAX + 0x1008],0x0    ; 0052d5f0 | DAT_01d82088
    JNZ 0x0052d607                      ; 0052d5f7
        ;   XREF to: 0052d607 (CONDITIONAL_JUMP)  ; LAB_0052d607
    MOV EAX,[0x005fe4b0]                ; 0052d5f9 | g_CFieldNotesPtr
    CMP byte ptr [EAX],0x0              ; 0052d5fe | g_CFieldNotesInstance
    JNZ 0x00529b1b                      ; 0052d601
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH 0x1ed6810                      ; 0052d607 | DAT_01ed6810
        ;   Label: LAB_0052d607
    LEA EAX,[ESP + 0xbac]               ; 0052d60c
    PUSH EAX                            ; 0052d613
    MOV EDI,dword ptr [0x005fe4b0]      ; 0052d614 | g_CFieldNotesPtr
    PUSH EDI                            ; 0052d61a | g_CFieldNotesInstance
    CALL core_fldnotes.cpp_FUN_004aa810 ; 0052d61b
        ;   XREF to: 004aa810 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004aa810()
    ADD ESP,0xc                         ; 0052d620
    TEST EAX,EAX                        ; 0052d623
    JNZ 0x00529b1b                      ; 0052d625
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    JMP 0x00529bec                      ; 0052d62b
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    PUSH EAX                            ; 0052d630
        ;   Label: LAB_0052d630
    LEA EAX,[ESP + 0xbac]               ; 0052d631
    PUSH EAX                            ; 0052d638
    MOV ECX,dword ptr [0x005fe4b0]      ; 0052d639 | g_CFieldNotesPtr
    PUSH ECX                            ; 0052d63f | g_CFieldNotesInstance
    CALL core_fldnotes.cpp_FUN_004aa810 ; 0052d640
        ;   XREF to: 004aa810 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004aa810()
    ADD ESP,0xc                         ; 0052d645
    JMP 0x00529b1b                      ; 0052d648
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0xe                         ; 0052d64d
        ;   Label: LAB_0052d64d
    PUSH ESI                            ; 0052d650
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052d651
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052d656
    MOV dword ptr [ESP + 0x47f8],EAX    ; 0052d659
    LEA EAX,[ESP + 0x40a8]              ; 0052d660
    PUSH EAX                            ; 0052d667
    LEA EAX,[ESP + 0x47fc]              ; 0052d668
    PUSH EAX                            ; 0052d66f
    CALL core_script.cpp_parseConditionExpr_FUN_00528970 ; 0052d670
        ;   XREF to: 00528970 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseConditionExpr_FUN_00528970(char * * cursor, char * out_buffer)
    ADD ESP,0x8                         ; 0052d675
    TEST EAX,EAX                        ; 0052d678
    JNZ 0x0052d1de                      ; 0052d67a
        ;   XREF to: 0052d1de (CONDITIONAL_JUMP)  ; LAB_0052d1de
    CMP dword ptr [0x01ed6808],0x0      ; 0052d680 | DAT_01ed6808
    JNZ 0x00529b1b                      ; 0052d687
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EAX,[ESP + 0x40a8]              ; 0052d68d
    PUSH EAX                            ; 0052d694
    MOV EDX,dword ptr [0x005fba60]      ; 0052d695 | DAT_005fba60
    PUSH EDX                            ; 0052d69b
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0052d69c
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0052d6a1
    MOV dword ptr [EBX + 0x14],EAX      ; 0052d6a4
    JMP 0x00529b1b                      ; 0052d6a7
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0x6                         ; 0052d6ac
        ;   Label: LAB_0052d6ac
    PUSH ESI                            ; 0052d6af
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052d6b0
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052d6b5
    LEA EDX,[ESP + 0x4868]              ; 0052d6b8
    PUSH EDX                            ; 0052d6bf
    LEA EDX,[ESP + 0x1168]              ; 0052d6c0
    PUSH EDX                            ; 0052d6c7
    PUSH 0x5cee00                       ; 0052d6c8 | = "(%[^,)]%n"
    MOV ECX,0xffffffff                  ; 0052d6cd
    PUSH EAX                            ; 0052d6d2
    MOV dword ptr [ESP + 0x4808],EAX    ; 0052d6d3
    MOV dword ptr [ESP + 0x4878],ECX    ; 0052d6da
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052d6e1
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 0052d6e6
    MOV ESI,dword ptr [ESP + 0x4868]    ; 0052d6e9
    CMP ESI,0x2                         ; 0052d6f0
    JGE 0x0052d70c                      ; 0052d6f3
        ;   XREF to: 0052d70c (CONDITIONAL_JUMP)  ; LAB_0052d70c
    PUSH 0x5cee0a                       ; 0052d6f5 | = "Error parsing lookAt command parms"
    PUSH 0x1ed6810                      ; 0052d6fa | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052d6ff
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052d704
    JMP 0x00529bec                      ; 0052d707
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDI,dword ptr [ESP + 0x47f8]    ; 0052d70c
        ;   Label: LAB_0052d70c
    LEA EAX,[ESP + 0x1164]              ; 0052d713
    ADD EDI,ESI                         ; 0052d71a
    PUSH EAX                            ; 0052d71c
    MOV dword ptr [ESP + 0x47fc],EDI    ; 0052d71d
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052d724
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052d729
    PUSH 0x7e2cb4                       ; 0052d72c | g_CCharacterClassInfo
    MOV EAX,[0x007e2cec]                ; 0052d731 | g_CCharacterClassInfo.name_hash
    PUSH EAX                            ; 0052d736
    LEA EAX,[ESP + 0x116c]              ; 0052d737
    PUSH EAX                            ; 0052d73e
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052d73f
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    ADD ESP,0xc                         ; 0052d744
    MOV ESI,EAX                         ; 0052d747
    TEST EAX,EAX                        ; 0052d749
    JNZ 0x0052d75f                      ; 0052d74b
        ;   XREF to: 0052d75f (CONDITIONAL_JUMP)  ; LAB_0052d75f
    CMP dword ptr [0x01ed701c],0x0      ; 0052d74d | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052d754
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052d75a
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDX,dword ptr [ESP + 0x47f8]    ; 0052d75f
        ;   Label: LAB_0052d75f
    MOV CH,byte ptr [EDX]               ; 0052d766
    XOR EAX,EAX                         ; 0052d768
    CMP CH,0x2c                         ; 0052d76a
    JZ 0x0052d7a6                       ; 0052d76d
        ;   XREF to: 0052d7a6 (CONDITIONAL_JUMP)  ; LAB_0052d7a6
    MOV EDX,dword ptr [ESP + 0x47f8]    ; 0052d76f
        ;   Label: LAB_0052d76f
    CMP byte ptr [EDX],0x29             ; 0052d776
    JNZ 0x0052d850                      ; 0052d779
        ;   XREF to: 0052d850 (CONDITIONAL_JUMP)  ; LAB_0052d850
    LEA EDI,[EDX + 0x1]                 ; 0052d77f
    MOV EDX,dword ptr [0x01ed6808]      ; 0052d782 | DAT_01ed6808
    MOV dword ptr [ESP + 0x47f8],EDI    ; 0052d788
    TEST EDX,EDX                        ; 0052d78f
    JNZ 0x00529b1b                      ; 0052d791
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH EAX                            ; 0052d797
    PUSH ESI                            ; 0052d798
    CALL core_charactr.cpp_FUN_00433120 ; 0052d799
        ;   XREF to: 00433120 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00433120(CCharacter * this_ptr, CDemonActor * target)
    ADD ESP,0x8                         ; 0052d79e
    JMP 0x00529b1b                      ; 0052d7a1
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EAX,[ESP + 0x4868]              ; 0052d7a6
        ;   Label: LAB_0052d7a6
    PUSH EAX                            ; 0052d7ad
    LEA EAX,[ESP + 0x25b8]              ; 0052d7ae
    PUSH EAX                            ; 0052d7b5
    PUSH 0x5cee2d                       ; 0052d7b6 | = ", %[^)]%n"
    MOV ECX,dword ptr [ESP + 0x4804]    ; 0052d7bb
    MOV EDX,0xffffffff                  ; 0052d7c2
    PUSH ECX                            ; 0052d7c7
    MOV dword ptr [ESP + 0x4878],EDX    ; 0052d7c8
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052d7cf
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 0052d7d4
    MOV EDI,dword ptr [ESP + 0x4868]    ; 0052d7d7
    CMP EDI,0x3                         ; 0052d7de
    JGE 0x0052d7fa                      ; 0052d7e1
        ;   XREF to: 0052d7fa (CONDITIONAL_JUMP)  ; LAB_0052d7fa
    PUSH 0x5cee37                       ; 0052d7e3 | = "Error parsing lookAt command parms"
    PUSH 0x1ed6810                      ; 0052d7e8 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052d7ed
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052d7f2
    JMP 0x00529bec                      ; 0052d7f5
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDX,dword ptr [ESP + 0x47f8]    ; 0052d7fa
        ;   Label: LAB_0052d7fa
    LEA EAX,[ESP + 0x25b4]              ; 0052d801
    ADD EDX,EDI                         ; 0052d808
    PUSH EAX                            ; 0052d80a
    MOV dword ptr [ESP + 0x47fc],EDX    ; 0052d80b
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052d812
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052d817
    PUSH 0x7df978                       ; 0052d81a | g_CDemonActorClassInfo
    MOV ECX,dword ptr [0x007df9b0]      ; 0052d81f | g_CDemonActorClassInfo.name_hash
    PUSH ECX                            ; 0052d825
    LEA EAX,[ESP + 0x25bc]              ; 0052d826
    PUSH EAX                            ; 0052d82d
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052d82e
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    ADD ESP,0xc                         ; 0052d833
    TEST EAX,EAX                        ; 0052d836
    JNZ 0x0052d76f                      ; 0052d838
        ;   XREF to: 0052d76f (CONDITIONAL_JUMP)  ; LAB_0052d76f
    CMP dword ptr [0x01ed701c],0x0      ; 0052d83e | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052d845
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052d84b
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    PUSH 0x5cee5a                       ; 0052d850 | = "Missing closing ')' in lookAt command"
        ;   Label: LAB_0052d850
    PUSH 0x1ed6810                      ; 0052d855 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052d85a
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052d85f
    JMP 0x00529bec                      ; 0052d862
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0xd                         ; 0052d867
        ;   Label: LAB_0052d867
    PUSH ESI                            ; 0052d86a
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052d86b
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052d870
    LEA EDX,[ESP + 0x4870]              ; 0052d873
    PUSH EDX                            ; 0052d87a
    LEA EDX,[ESP + 0x4870]              ; 0052d87b
    PUSH EDX                            ; 0052d882
    LEA EDX,[ESP + 0x1acc]              ; 0052d883
    PUSH EDX                            ; 0052d88a
    PUSH 0x5cee8e                       ; 0052d88b | = "(%[^,], %d )%n"
    MOV EDI,0xffffffff                  ; 0052d890
    MOV dword ptr [ESP + 0x4808],EAX    ; 0052d895
    PUSH EAX                            ; 0052d89c
    MOV dword ptr [ESP + 0x4880],EDI    ; 0052d89d
    MOV dword ptr [ESP + 0x4884],EDI    ; 0052d8a4
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052d8ab
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052d8b0
    MOV ECX,dword ptr [ESP + 0x4870]    ; 0052d8b3
    CMP ECX,0x3                         ; 0052d8ba
    JGE 0x0052d8d6                      ; 0052d8bd
        ;   XREF to: 0052d8d6 (CONDITIONAL_JUMP)  ; LAB_0052d8d6
    PUSH 0x5cee9d                       ; 0052d8bf | = "Error parsing monsterVision command p..."
    PUSH 0x1ed6810                      ; 0052d8c4 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052d8c9
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052d8ce
    JMP 0x00529bec                      ; 0052d8d1
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV ESI,dword ptr [ESP + 0x47f8]    ; 0052d8d6
        ;   Label: LAB_0052d8d6
    LEA EAX,[ESP + 0x1ac4]              ; 0052d8dd
    ADD ESI,ECX                         ; 0052d8e4
    PUSH EAX                            ; 0052d8e6
    MOV dword ptr [ESP + 0x47fc],ESI    ; 0052d8e7
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052d8ee
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052d8f3
    PUSH 0x7e2cb4                       ; 0052d8f6 | g_CCharacterClassInfo
    MOV EDI,dword ptr [0x007e2cec]      ; 0052d8fb | g_CCharacterClassInfo.name_hash
    PUSH EDI                            ; 0052d901
    LEA EAX,[ESP + 0x1acc]              ; 0052d902
    PUSH EAX                            ; 0052d909
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052d90a
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    ADD ESP,0xc                         ; 0052d90f
    TEST EAX,EAX                        ; 0052d912
    JNZ 0x0052d928                      ; 0052d914
        ;   XREF to: 0052d928 (CONDITIONAL_JUMP)  ; LAB_0052d928
    CMP dword ptr [0x01ed701c],0x0      ; 0052d916 | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052d91d
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052d923
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    CMP dword ptr [0x01ed6808],0x0      ; 0052d928 | DAT_01ed6808
        ;   Label: LAB_0052d928
    JNZ 0x00529b1b                      ; 0052d92f
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV dword ptr [EBX + 0x18],EAX      ; 0052d935
    MOV EAX,[0x005fe9dc]                ; 0052d938 | g_CGamePtr
    CMP dword ptr [EAX + 0x268],0x0     ; 0052d93d | g_CGameInstance.field616_0x268
    SETZ DL                             ; 0052d944
    AND EDX,0xff                        ; 0052d947
    PUSH EDX                            ; 0052d94d
    MOV dword ptr [ESP + 0x4870],EDX    ; 0052d94e
    PUSH EAX                            ; 0052d955
    MOV ECX,dword ptr [EAX + 0xb8c]     ; 0052d956 | g_CGameInstance.field2956_0xb8c
    CALL dword ptr [ECX + 0x4]          ; 0052d95c
    ADD ESP,0x8                         ; 0052d95f
    JMP 0x00529b1b                      ; 0052d962
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0xc                         ; 0052d967
        ;   Label: LAB_0052d967
    PUSH ESI                            ; 0052d96a
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052d96b
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052d970
    LEA EDX,[ESP + 0x4874]              ; 0052d973
    PUSH EDX                            ; 0052d97a
    LEA EDX,[ESP + 0x28]                ; 0052d97b
    PUSH EDX                            ; 0052d97f
    LEA EDX,[ESP + 0x34]                ; 0052d980
    PUSH EDX                            ; 0052d984
    LEA EDX,[ESP + 0x2688]              ; 0052d985
    PUSH EDX                            ; 0052d98c
    PUSH 0x5ceed4                       ; 0052d98d | = "(%[^,], %f , %f )%n"
    MOV EDI,0xffffffff                  ; 0052d992
    PUSH EAX                            ; 0052d997
    MOV dword ptr [ESP + 0x4810],EAX    ; 0052d998
    MOV dword ptr [ESP + 0x488c],EDI    ; 0052d99f
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052d9a6
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x18                        ; 0052d9ab
    MOV EAX,dword ptr [ESP + 0x4874]    ; 0052d9ae
    CMP EAX,0x5                         ; 0052d9b5
    JGE 0x0052d9d1                      ; 0052d9b8
        ;   XREF to: 0052d9d1 (CONDITIONAL_JUMP)  ; LAB_0052d9d1
    PUSH 0x5ceee8                       ; 0052d9ba | = "Error parsing movePlatform command parms"
    PUSH 0x1ed6810                      ; 0052d9bf | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052d9c4
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052d9c9
    JMP 0x00529bec                      ; 0052d9cc
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDX,dword ptr [ESP + 0x47f8]    ; 0052d9d1
        ;   Label: LAB_0052d9d1
    ADD EDX,EAX                         ; 0052d9d8
    LEA EAX,[ESP + 0x267c]              ; 0052d9da
    PUSH EAX                            ; 0052d9e1
    MOV dword ptr [ESP + 0x47fc],EDX    ; 0052d9e2
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052d9e9
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052d9ee
    PUSH 0x1ed2ab4                      ; 0052d9f1
    MOV ECX,dword ptr [0x01ed2aec]      ; 0052d9f6 | g_CPlatformClassInfo.name_hash
    PUSH ECX                            ; 0052d9fc
    LEA EAX,[ESP + 0x2684]              ; 0052d9fd
    PUSH EAX                            ; 0052da04
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052da05
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    MOV EDX,EAX                         ; 0052da0a
    ADD ESP,0xc                         ; 0052da0c
    TEST EAX,EAX                        ; 0052da0f
    JNZ 0x0052da25                      ; 0052da11
        ;   XREF to: 0052da25 (CONDITIONAL_JUMP)  ; LAB_0052da25
    CMP dword ptr [0x01ed701c],0x0      ; 0052da13 | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052da1a
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052da20
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    FLD float ptr [ESP + 0x2c]          ; 0052da25
        ;   Label: LAB_0052da25
    FLDZ                                ; 0052da29
    FXCH                                ; 0052da2b
    FSTP double ptr [ESP + 0x8]         ; 0052da2d
    FCOMP double ptr [ESP + 0x8]        ; 0052da31
    FNSTSW AX                           ; 0052da35
    SAHF                                ; 0052da37
    JA 0x0052da7b                       ; 0052da38
        ;   XREF to: 0052da7b (CONDITIONAL_JUMP)  ; LAB_0052da7b
    FLD1                                ; 0052da3a
    FCOMP double ptr [ESP + 0x8]        ; 0052da3c
    FNSTSW AX                           ; 0052da40
    SAHF                                ; 0052da42
    JC 0x0052da7b                       ; 0052da43
        ;   XREF to: 0052da7b (CONDITIONAL_JUMP)  ; LAB_0052da7b
    FLD float ptr [ESP + 0x24]          ; 0052da45
    FLDZ                                ; 0052da49
    FXCH                                ; 0052da4b
    FSTP double ptr [ESP]               ; 0052da4d
    FCOMP double ptr [ESP]              ; 0052da50
    FNSTSW AX                           ; 0052da53
    SAHF                                ; 0052da55
    JNC 0x0052da92                      ; 0052da56
        ;   XREF to: 0052da92 (CONDITIONAL_JUMP)  ; LAB_0052da92
    CMP dword ptr [0x01ed6808],0x0      ; 0052da58 | DAT_01ed6808
    JNZ 0x00529b1b                      ; 0052da5f
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH dword ptr [ESP + 0x24]         ; 0052da65
    PUSH dword ptr [ESP + 0x30]         ; 0052da69
    PUSH EDX                            ; 0052da6d
    CALL core_platfrm.cpp_FUN_00512020  ; 0052da6e
        ;   XREF to: 00512020 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_FUN_00512020(CPlatform * this_ptr, float goal_param, float movement_rate)
    ADD ESP,0xc                         ; 0052da73
    JMP 0x00529b1b                      ; 0052da76
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH 0x5cef11                       ; 0052da7b | = "Paramater must be in range 0.0 .. 1.0"
        ;   Label: LAB_0052da7b
    PUSH 0x1ed6810                      ; 0052da80 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052da85
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052da8a
    JMP 0x00529bec                      ; 0052da8d
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDI,dword ptr [ESP + 0x4]       ; 0052da92
        ;   Label: LAB_0052da92
    PUSH EDI                            ; 0052da96
    MOV EAX,dword ptr [ESP + 0x4]       ; 0052da97
    PUSH EAX                            ; 0052da9b
    PUSH 0x5cef37                       ; 0052da9c | = "Invalid movement rate %f"
    JMP 0x00529bdf                      ; 0052daa1
        ;   XREF to: 00529bdf (UNCONDITIONAL_JUMP)  ; LAB_00529bdf
    ADD ESI,0x8                         ; 0052daa6
        ;   Label: LAB_0052daa6
    PUSH ESI                            ; 0052daa9
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052daaa
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052daaf
    LEA EDX,[ESP + 0x4878]              ; 0052dab2
    PUSH EDX                            ; 0052dab9
    LEA EDX,[ESP + 0x3a08]              ; 0052daba
    PUSH EDX                            ; 0052dac1
    LEA EDX,[ESP + 0x355c]              ; 0052dac2
    PUSH EDX                            ; 0052dac9
    PUSH 0x5cef59                       ; 0052daca | = "(%[^,], %[^)])%n"
    MOV ECX,0xffffffff                  ; 0052dacf
    PUSH EAX                            ; 0052dad4
    MOV dword ptr [ESP + 0x480c],EAX    ; 0052dad5
    MOV dword ptr [ESP + 0x488c],ECX    ; 0052dadc
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052dae3
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052dae8
    MOV ESI,dword ptr [ESP + 0x4878]    ; 0052daeb
    CMP ESI,0x5                         ; 0052daf2
    JGE 0x0052db0e                      ; 0052daf5
        ;   XREF to: 0052db0e (CONDITIONAL_JUMP)  ; LAB_0052db0e
    PUSH 0x5cef6a                       ; 0052daf7 | = "Error parsing openDoor command parms"
    PUSH 0x1ed6810                      ; 0052dafc | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052db01
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052db06
    JMP 0x00529bec                      ; 0052db09
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDI,dword ptr [ESP + 0x47f8]    ; 0052db0e
        ;   Label: LAB_0052db0e
    LEA EAX,[ESP + 0x3a04]              ; 0052db15
    ADD EDI,ESI                         ; 0052db1c
    PUSH EAX                            ; 0052db1e
    MOV dword ptr [ESP + 0x47fc],EDI    ; 0052db1f
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052db26
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052db2b
    LEA EAX,[ESP + 0x3554]              ; 0052db2e
    PUSH EAX                            ; 0052db35
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052db36
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052db3b
    PUSH 0x1b85140                      ; 0052db3e
    MOV EAX,[0x01b85178]                ; 0052db43 | g_CDoorClassInfo.name_hash
    PUSH EAX                            ; 0052db48
    LEA EAX,[ESP + 0x3a0c]              ; 0052db49
    PUSH EAX                            ; 0052db50
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052db51
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    MOV ESI,EAX                         ; 0052db56
    ADD ESP,0xc                         ; 0052db58
    TEST EAX,EAX                        ; 0052db5b
    JNZ 0x0052db71                      ; 0052db5d
        ;   XREF to: 0052db71 (CONDITIONAL_JUMP)  ; LAB_0052db71
    CMP dword ptr [0x01ed701c],0x0      ; 0052db5f | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052db66
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052db6c
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    PUSH 0x7e2cb4                       ; 0052db71 | g_CCharacterClassInfo
        ;   Label: LAB_0052db71
    MOV EDX,dword ptr [0x007e2cec]      ; 0052db76 | g_CCharacterClassInfo.name_hash
    PUSH EDX                            ; 0052db7c
    LEA EAX,[ESP + 0x355c]              ; 0052db7d
    PUSH EAX                            ; 0052db84
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052db85
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    MOV EDX,EAX                         ; 0052db8a
    ADD ESP,0xc                         ; 0052db8c
    TEST EAX,EAX                        ; 0052db8f
    JNZ 0x0052dba5                      ; 0052db91
        ;   XREF to: 0052dba5 (CONDITIONAL_JUMP)  ; LAB_0052dba5
    CMP dword ptr [0x01ed701c],0x0      ; 0052db93 | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052db9a
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052dba0
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV ECX,dword ptr [0x01ed6808]      ; 0052dba5 | DAT_01ed6808
        ;   Label: LAB_0052dba5
    TEST ECX,ECX                        ; 0052dbab
    JNZ 0x00529b1b                      ; 0052dbad
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    FLD float ptr [EBX + 0x48]          ; 0052dbb3
    FLDZ                                ; 0052dbb6
    MOV dword ptr [ESP + 0x47e4],ECX    ; 0052dbb8
    FCOMPP                              ; 0052dbbf
    FNSTSW AX                           ; 0052dbc1
    SAHF                                ; 0052dbc3
    JBE 0x0052dbe3                      ; 0052dbc4
        ;   XREF to: 0052dbe3 (CONDITIONAL_JUMP)  ; LAB_0052dbe3
    PUSH ESI                            ; 0052dbc6
    MOV EAX,dword ptr [EDX + 0x154]     ; 0052dbc7
    PUSH EDX                            ; 0052dbcd
    CALL dword ptr [EAX + 0x11c]        ; 0052dbce
    ADD ESP,0x8                         ; 0052dbd4
    MOV dword ptr [EBX + 0x48],0x3f800000 ; 0052dbd7
    JMP 0x00529b1b                      ; 0052dbde
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH EDX                            ; 0052dbe3
        ;   Label: LAB_0052dbe3
    MOV EAX,dword ptr [EDX + 0x154]     ; 0052dbe4
    CALL dword ptr [EAX + 0x124]        ; 0052dbea
    ADD ESP,0x4                         ; 0052dbf0
    TEST EAX,EAX                        ; 0052dbf3
    JZ 0x00529b1b                       ; 0052dbf5
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV dword ptr [ESP + 0x47e4],0x1    ; 0052dbfb
    JMP 0x00529b1b                      ; 0052dc06
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0xb                         ; 0052dc0b
        ;   Label: LAB_0052dc0b
    PUSH ESI                            ; 0052dc0e
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052dc0f
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052dc14
    LEA EDX,[ESP + 0x4880]              ; 0052dc17
    PUSH EDX                            ; 0052dc1e
    LEA EDX,[ESP + 0x3df0]              ; 0052dc1f
    PUSH EDX                            ; 0052dc26
    LEA EDX,[ESP + 0x4178]              ; 0052dc27
    PUSH EDX                            ; 0052dc2e
    PUSH 0x5cef9b                       ; 0052dc2f | = "( %[^,], %[^)])%n"
    MOV ESI,0xffffffff                  ; 0052dc34
    PUSH EAX                            ; 0052dc39
    MOV dword ptr [ESP + 0x480c],EAX    ; 0052dc3a
    MOV dword ptr [ESP + 0x4894],ESI    ; 0052dc41
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052dc48
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052dc4d
    MOV EDI,dword ptr [ESP + 0x4880]    ; 0052dc50
    CMP EDI,0x5                         ; 0052dc57
    JGE 0x0052dc73                      ; 0052dc5a
        ;   XREF to: 0052dc73 (CONDITIONAL_JUMP)  ; LAB_0052dc73
    PUSH 0x5cefad                       ; 0052dc5c | = "Error parsing pressButton() command p..."
    PUSH 0x1ed6810                      ; 0052dc61 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052dc66
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052dc6b
    JMP 0x00529bec                      ; 0052dc6e
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDX,dword ptr [ESP + 0x47f8]    ; 0052dc73
        ;   Label: LAB_0052dc73
    LEA EAX,[ESP + 0x4170]              ; 0052dc7a
    ADD EDX,EDI                         ; 0052dc81
    PUSH EAX                            ; 0052dc83
    MOV dword ptr [ESP + 0x47fc],EDX    ; 0052dc84
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052dc8b
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052dc90
    LEA EAX,[ESP + 0x3dec]              ; 0052dc93
    PUSH EAX                            ; 0052dc9a
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052dc9b
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052dca0
    PUSH 0x1d5ba38                      ; 0052dca3
    MOV ECX,dword ptr [0x01d5ba70]      ; 0052dca8 | g_CHeroClassInfo.name_hash
    PUSH ECX                            ; 0052dcae
    LEA EAX,[ESP + 0x4178]              ; 0052dcaf
    PUSH EAX                            ; 0052dcb6
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052dcb7
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    ADD ESP,0xc                         ; 0052dcbc
    TEST EAX,EAX                        ; 0052dcbf
    JNZ 0x0052dcd5                      ; 0052dcc1
        ;   XREF to: 0052dcd5 (CONDITIONAL_JUMP)  ; LAB_0052dcd5
    CMP dword ptr [0x01ed701c],0x0      ; 0052dcc3 | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052dcca
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052dcd0
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EDX,[ESP + 0x3dec]              ; 0052dcd5
        ;   Label: LAB_0052dcd5
    PUSH EDX                            ; 0052dcdc
    ADD EAX,0xcdd4                      ; 0052dcdd
    PUSH EAX                            ; 0052dce2
    CALL core_script.cpp_FUN_00528b30   ; 0052dce3
        ;   XREF to: 00528b30 (UNCONDITIONAL_CALL)  ; int * core_script.cpp_FUN_00528b30(SPlayerActionState * action_state, char * action_name)
    ADD ESP,0x8                         ; 0052dce8
    MOV ESI,EAX                         ; 0052dceb
    TEST EAX,EAX                        ; 0052dced
    JZ 0x0052dd28                       ; 0052dcef
        ;   XREF to: 0052dd28 (CONDITIONAL_JUMP)  ; LAB_0052dd28
    MOV EDI,dword ptr [0x01ed6808]      ; 0052dcf1 | DAT_01ed6808
    TEST EDI,EDI                        ; 0052dcf7
    JNZ 0x00529b1b                      ; 0052dcf9
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    CMP dword ptr [0x01ed7014],0x0      ; 0052dcff | DAT_01ed7014
    JZ 0x0052dd1d                       ; 0052dd06
        ;   XREF to: 0052dd1d (CONDITIONAL_JUMP)  ; LAB_0052dd1d
    MOV EDX,dword ptr [0x005fe9dc]      ; 0052dd08 | g_CGamePtr
    PUSH EDX                            ; 0052dd0e
    CALL core_game.cpp_FUN_004ba490     ; 0052dd0f
        ;   XREF to: 004ba490 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004ba490()
    ADD ESP,0x4                         ; 0052dd14
    MOV dword ptr [0x01ed7014],EDI      ; 0052dd17 | DAT_01ed7014
    MOV dword ptr [ESI],0x1             ; 0052dd1d
        ;   Label: LAB_0052dd1d
    JMP 0x00529b1b                      ; 0052dd23
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EAX,[ESP + 0x3dec]              ; 0052dd28
        ;   Label: LAB_0052dd28
    PUSH EAX                            ; 0052dd2f
    PUSH 0x5cefd7                       ; 0052dd30 | = "Invalid button name: %s"
    PUSH 0x1ed6810                      ; 0052dd35 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052dd3a
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 0052dd3f
    JMP 0x00529bec                      ; 0052dd42
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0x5                         ; 0052dd47
        ;   Label: LAB_0052dd47
    PUSH ESI                            ; 0052dd4a
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052dd4b
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052dd50
    PUSH 0x64                           ; 0052dd53
    MOV dword ptr [ESP + 0x47fc],EAX    ; 0052dd55
    LEA EAX,[ESP + 0x3c60]              ; 0052dd5c
    PUSH EAX                            ; 0052dd63
    LEA EAX,[ESP + 0x4800]              ; 0052dd64
    PUSH EAX                            ; 0052dd6b
    CALL core_script.cpp_parseArgument_FUN_005288c0 ; 0052dd6c
        ;   XREF to: 005288c0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005288c0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0052dd71
    TEST EAX,EAX                        ; 0052dd74
    JNZ 0x0052ddc6                      ; 0052dd76
        ;   XREF to: 0052ddc6 (CONDITIONAL_JUMP)  ; LAB_0052ddc6
    CMP dword ptr [0x01ed6808],0x0      ; 0052dd78 | DAT_01ed6808
    JZ 0x0052ddde                       ; 0052dd7f
        ;   XREF to: 0052ddde (CONDITIONAL_JUMP)  ; LAB_0052ddde
    LEA EAX,[ESP + 0x3c5c]              ; 0052dd81
    PUSH EAX                            ; 0052dd88
    MOV EDX,dword ptr [0x005fba60]      ; 0052dd89 | DAT_005fba60
    PUSH EDX                            ; 0052dd8f
    CALL core_event.cpp_CEventList_validateCommands_FUN_00491b40 ; 0052dd90
        ;   XREF to: 00491b40 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCommands_FUN_00491b40(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0052dd95
    TEST EAX,EAX                        ; 0052dd98
    JZ 0x00529b1b                       ; 0052dd9a
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EDI,0x1ed6810                   ; 0052dda0
    MOV ESI,EAX                         ; 0052dda5
    PUSH EDI                            ; 0052dda7 | DAT_01ed6810
    MOV AL,byte ptr [ESI]               ; 0052dda8
        ;   Label: LAB_0052dda8
    MOV byte ptr [EDI],AL               ; 0052ddaa | DAT_01ed6810 | DAT_01ed6812
    CMP AL,0x0                          ; 0052ddac
    JZ 0x0052ddc0                       ; 0052ddae
        ;   XREF to: 0052ddc0 (CONDITIONAL_JUMP)  ; LAB_0052ddc0
    MOV AL,byte ptr [ESI + 0x1]         ; 0052ddb0
    ADD ESI,0x2                         ; 0052ddb3
    MOV byte ptr [EDI + 0x1],AL         ; 0052ddb6 | DAT_01ed6811 | DAT_01ed6813
    ADD EDI,0x2                         ; 0052ddb9
    CMP AL,0x0                          ; 0052ddbc
    JNZ 0x0052dda8                      ; 0052ddbe
        ;   XREF to: 0052dda8 (CONDITIONAL_JUMP)  ; LAB_0052dda8
    POP EDI                             ; 0052ddc0
        ;   Label: LAB_0052ddc0
    JMP 0x00529bec                      ; 0052ddc1
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    PUSH EAX                            ; 0052ddc6
        ;   Label: LAB_0052ddc6
    PUSH 0x5ceff5                       ; 0052ddc7 | = "Error parsing event expression on rai..."
    PUSH 0x1ed6810                      ; 0052ddcc | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052ddd1
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 0052ddd6
    JMP 0x00529bec                      ; 0052ddd9
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EAX,[ESP + 0x3c5c]              ; 0052ddde
        ;   Label: LAB_0052ddde
    PUSH EAX                            ; 0052dde5
    MOV EAX,[0x005fba60]                ; 0052dde6 | DAT_005fba60
    PUSH EAX                            ; 0052ddeb
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 0052ddec
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0052ddf1
    JMP 0x00529b1b                      ; 0052ddf4
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0xd                         ; 0052ddf9
        ;   Label: LAB_0052ddf9
    PUSH ESI                            ; 0052ddfc
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052ddfd
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052de02
    LEA EDX,[ESP + 0x4884]              ; 0052de05
    PUSH EDX                            ; 0052de0c
    LEA EDX,[ESP + 0x3d28]              ; 0052de0d
    PUSH EDX                            ; 0052de14
    LEA EDX,[ESP + 0x3cc8]              ; 0052de15
    PUSH EDX                            ; 0052de1c
    PUSH 0x5cf039                       ; 0052de1d | = "( %[^,], %[^)])%n"
    MOV ECX,0xffffffff                  ; 0052de22
    PUSH EAX                            ; 0052de27
    MOV dword ptr [ESP + 0x480c],EAX    ; 0052de28
    MOV dword ptr [ESP + 0x4898],ECX    ; 0052de2f
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052de36
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052de3b
    MOV ESI,dword ptr [ESP + 0x4884]    ; 0052de3e
    CMP ESI,0x5                         ; 0052de45
    JGE 0x0052de61                      ; 0052de48
        ;   XREF to: 0052de61 (CONDITIONAL_JUMP)  ; LAB_0052de61
    PUSH 0x5cf04b                       ; 0052de4a | = "Error parsing releaseButton() command..."
    PUSH 0x1ed6810                      ; 0052de4f | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052de54
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052de59
    JMP 0x00529bec                      ; 0052de5c
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDI,dword ptr [ESP + 0x47f8]    ; 0052de61
        ;   Label: LAB_0052de61
    LEA EAX,[ESP + 0x3cc0]              ; 0052de68
    ADD EDI,ESI                         ; 0052de6f
    PUSH EAX                            ; 0052de71
    MOV dword ptr [ESP + 0x47fc],EDI    ; 0052de72
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052de79
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052de7e
    LEA EAX,[ESP + 0x3d24]              ; 0052de81
    PUSH EAX                            ; 0052de88
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052de89
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052de8e
    PUSH 0x1d5ba38                      ; 0052de91
    MOV EAX,[0x01d5ba70]                ; 0052de96 | g_CHeroClassInfo.name_hash
    PUSH EAX                            ; 0052de9b
    LEA EAX,[ESP + 0x3cc8]              ; 0052de9c
    PUSH EAX                            ; 0052dea3
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052dea4
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    ADD ESP,0xc                         ; 0052dea9
    TEST EAX,EAX                        ; 0052deac
    JNZ 0x0052dec2                      ; 0052deae
        ;   XREF to: 0052dec2 (CONDITIONAL_JUMP)  ; LAB_0052dec2
    CMP dword ptr [0x01ed701c],0x0      ; 0052deb0 | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052deb7
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052debd
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EDX,[ESP + 0x3d24]              ; 0052dec2
        ;   Label: LAB_0052dec2
    PUSH EDX                            ; 0052dec9
    ADD EAX,0xcdd4                      ; 0052deca
    PUSH EAX                            ; 0052decf
    CALL core_script.cpp_FUN_00528b30   ; 0052ded0
        ;   XREF to: 00528b30 (UNCONDITIONAL_CALL)  ; int * core_script.cpp_FUN_00528b30(SPlayerActionState * action_state, char * action_name)
    ADD ESP,0x8                         ; 0052ded5
    MOV ESI,EAX                         ; 0052ded8
    TEST EAX,EAX                        ; 0052deda
    JZ 0x0052df15                       ; 0052dedc
        ;   XREF to: 0052df15 (CONDITIONAL_JUMP)  ; LAB_0052df15
    CMP dword ptr [0x01ed6808],0x0      ; 0052dede | DAT_01ed6808
    JNZ 0x00529b1b                      ; 0052dee5
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    CMP dword ptr [0x01ed7014],0x0      ; 0052deeb | DAT_01ed7014
    JZ 0x0052df0a                       ; 0052def2
        ;   XREF to: 0052df0a (CONDITIONAL_JUMP)  ; LAB_0052df0a
    MOV EDI,dword ptr [0x005fe9dc]      ; 0052def4 | g_CGamePtr
    PUSH EDI                            ; 0052defa
    CALL core_game.cpp_FUN_004ba490     ; 0052defb
        ;   XREF to: 004ba490 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004ba490()
    XOR EAX,EAX                         ; 0052df00
    ADD ESP,0x4                         ; 0052df02
    MOV [0x01ed7014],EAX                ; 0052df05 | DAT_01ed7014
    MOV dword ptr [ESI],0x0             ; 0052df0a
        ;   Label: LAB_0052df0a
    JMP 0x00529b1b                      ; 0052df10
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EAX,[ESP + 0x3d24]              ; 0052df15
        ;   Label: LAB_0052df15
    PUSH EAX                            ; 0052df1c
    PUSH 0x5cf077                       ; 0052df1d | = "Invalid button name: %s"
    PUSH 0x1ed6810                      ; 0052df22 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052df27
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 0052df2c
    JMP 0x00529bec                      ; 0052df2f
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0x1b                        ; 0052df34
        ;   Label: LAB_0052df34
    PUSH ESI                            ; 0052df37
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052df38
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052df3d
    LEA EDX,[ESP + 0x4888]              ; 0052df40
    PUSH EDX                            ; 0052df47
    LEA EDX,[ESP + 0x1870]              ; 0052df48
    PUSH EDX                            ; 0052df4f
    PUSH 0x5cf0ab                       ; 0052df50 | = " ( %[^)])%n"
    MOV ECX,0xffffffff                  ; 0052df55
    PUSH EAX                            ; 0052df5a
    MOV dword ptr [ESP + 0x4808],EAX    ; 0052df5b
    MOV dword ptr [ESP + 0x4898],ECX    ; 0052df62
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052df69
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 0052df6e
    MOV ESI,dword ptr [ESP + 0x4888]    ; 0052df71
    CMP ESI,0x3                         ; 0052df78
    JGE 0x0052df94                      ; 0052df7b
        ;   XREF to: 0052df94 (CONDITIONAL_JUMP)  ; LAB_0052df94
    PUSH 0x5cf0b7                       ; 0052df7d | = "Error parsing removeAllItemsFromInven..."
    PUSH 0x1ed6810                      ; 0052df82 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052df87
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052df8c
    JMP 0x00529bec                      ; 0052df8f
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDI,dword ptr [ESP + 0x47f8]    ; 0052df94
        ;   Label: LAB_0052df94
    LEA EAX,[ESP + 0x186c]              ; 0052df9b
    ADD EDI,ESI                         ; 0052dfa2
    PUSH EAX                            ; 0052dfa4
    MOV dword ptr [ESP + 0x47fc],EDI    ; 0052dfa5
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052dfac
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052dfb1
    PUSH 0x1d5ba38                      ; 0052dfb4
    MOV EAX,[0x01d5ba70]                ; 0052dfb9 | g_CHeroClassInfo.name_hash
    PUSH EAX                            ; 0052dfbe
    LEA EAX,[ESP + 0x1874]              ; 0052dfbf
    PUSH EAX                            ; 0052dfc6
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052dfc7
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    ADD ESP,0xc                         ; 0052dfcc
    TEST EAX,EAX                        ; 0052dfcf
    JNZ 0x0052dfe5                      ; 0052dfd1
        ;   XREF to: 0052dfe5 (CONDITIONAL_JUMP)  ; LAB_0052dfe5
    CMP dword ptr [0x01ed701c],0x0      ; 0052dfd3 | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052dfda
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052dfe0
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    CMP dword ptr [0x01ed6808],0x0      ; 0052dfe5 | DAT_01ed6808
        ;   Label: LAB_0052dfe5
    JNZ 0x00529b1b                      ; 0052dfec
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD EAX,0x206e8                     ; 0052dff2
    PUSH EAX                            ; 0052dff7
    CALL core_inv.cpp_FUN_004da4e0      ; 0052dff8
        ;   XREF to: 004da4e0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004da4e0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 0052dffd
    JMP 0x00529b1b                      ; 0052e000
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0x17                        ; 0052e005
        ;   Label: LAB_0052e005
    PUSH ESI                            ; 0052e008
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052e009
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052e00e
    LEA EDX,[ESP + 0x4890]              ; 0052e011
    PUSH EDX                            ; 0052e018
    LEA EDX,[ESP + 0x1f78]              ; 0052e019
    PUSH EDX                            ; 0052e020
    LEA EDX,[ESP + 0x1eb4]              ; 0052e021
    PUSH EDX                            ; 0052e028
    PUSH 0x5cf107                       ; 0052e029 | = " ( %[^,], %[^,)]%n"
    MOV ESI,0xffffffff                  ; 0052e02e
    PUSH EAX                            ; 0052e033
    MOV dword ptr [ESP + 0x480c],EAX    ; 0052e034
    MOV dword ptr [ESP + 0x48a4],ESI    ; 0052e03b
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052e042
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052e047
    MOV EDI,dword ptr [ESP + 0x4890]    ; 0052e04a
    CMP EDI,0x3                         ; 0052e051
    JGE 0x0052e06d                      ; 0052e054
        ;   XREF to: 0052e06d (CONDITIONAL_JUMP)  ; LAB_0052e06d
    PUSH 0x5cf11a                       ; 0052e056 | = "Error parsing removeItemFromInventory..."
    PUSH 0x1ed6810                      ; 0052e05b | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052e060
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052e065
    JMP 0x00529bec                      ; 0052e068
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDX,dword ptr [ESP + 0x47f8]    ; 0052e06d
        ;   Label: LAB_0052e06d
    LEA EAX,[ESP + 0x1eac]              ; 0052e074
    ADD EDX,EDI                         ; 0052e07b
    PUSH EAX                            ; 0052e07d
    MOV dword ptr [ESP + 0x47fc],EDX    ; 0052e07e
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052e085
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052e08a
    LEA EAX,[ESP + 0x1f74]              ; 0052e08d
    PUSH EAX                            ; 0052e094
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052e095
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052e09a
    PUSH 0x1d5ba38                      ; 0052e09d
    MOV ECX,dword ptr [0x01d5ba70]      ; 0052e0a2 | g_CHeroClassInfo.name_hash
    PUSH ECX                            ; 0052e0a8
    LEA EAX,[ESP + 0x1eb4]              ; 0052e0a9
    PUSH EAX                            ; 0052e0b0
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052e0b1
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    ADD ESP,0xc                         ; 0052e0b6
    MOV dword ptr [ESP + 0x4894],EAX    ; 0052e0b9
    TEST EAX,EAX                        ; 0052e0c0
    JNZ 0x0052e0d6                      ; 0052e0c2
        ;   XREF to: 0052e0d6 (CONDITIONAL_JUMP)  ; LAB_0052e0d6
    CMP dword ptr [0x01ed701c],0x0      ; 0052e0c4 | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052e0cb
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052e0d1
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EAX,dword ptr [ESP + 0x47f8]    ; 0052e0d6
        ;   Label: LAB_0052e0d6
    MOV CH,byte ptr [EAX]               ; 0052e0dd
    MOV EDI,0x1                         ; 0052e0df
    CMP CH,0x2c                         ; 0052e0e4
    JZ 0x0052e18c                       ; 0052e0e7
        ;   XREF to: 0052e18c (CONDITIONAL_JUMP)  ; LAB_0052e18c
    MOV EAX,dword ptr [ESP + 0x47f8]    ; 0052e0ed
        ;   Label: LAB_0052e0ed
    CMP byte ptr [EAX],0x29             ; 0052e0f4
    JNZ 0x0052e256                      ; 0052e0f7
        ;   XREF to: 0052e256 (CONDITIONAL_JUMP)  ; LAB_0052e256
    LEA EDX,[EAX + 0x1]                 ; 0052e0fd
    MOV ECX,dword ptr [0x01ed6808]      ; 0052e100 | DAT_01ed6808
    MOV dword ptr [ESP + 0x47f8],EDX    ; 0052e106
    TEST ECX,ECX                        ; 0052e10d
    JNZ 0x00529b1b                      ; 0052e10f
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EAX,[ESP + 0x1f74]              ; 0052e115
    PUSH EAX                            ; 0052e11c
    MOV EAX,[0x01d5ba14]                ; 0052e11d | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0052e122
    ADD EAX,0x206e8                     ; 0052e129
    PUSH EAX                            ; 0052e12e
    CALL core_inv.cpp_FUN_004db990      ; 0052e12f
        ;   XREF to: 004db990 (UNCONDITIONAL_CALL)  ; CDemonActor * core_inv.cpp_FUN_004db990(CInventory * this_ptr, char * item_name)
    MOV ESI,EAX                         ; 0052e134
    ADD ESP,0x8                         ; 0052e136
    TEST EAX,EAX                        ; 0052e139
    JZ 0x00529b1b                       ; 0052e13b
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH EDI                            ; 0052e141
    PUSH EAX                            ; 0052e142
    MOV EAX,dword ptr [ESP + 0x489c]    ; 0052e143
    ADD EAX,0x206e8                     ; 0052e14a
    PUSH EAX                            ; 0052e14f
    CALL core_inv.cpp_FUN_004dbaa0      ; 0052e150
        ;   XREF to: 004dbaa0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004dbaa0(CInventory * this_ptr, CDemonActor * item_to_remove, int should_delete_actor)
    ADD ESP,0xc                         ; 0052e155
    TEST EDI,EDI                        ; 0052e158
    JNZ 0x00529b1b                      ; 0052e15a
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EAX,dword ptr [ESP + 0x4894]    ; 0052e160
    ADD EAX,0x20                        ; 0052e167
    PUSH EAX                            ; 0052e16a
    LEA EAX,[ESI + 0x20]                ; 0052e16b
    PUSH EAX                            ; 0052e16e
    CALL core_mimic.cpp_copyQuaternion_FUN_00495e40 ; 0052e16f
        ;   XREF to: 00495e40 (UNCONDITIONAL_CALL)  ; undefined core_mimic.cpp_copyQuaternion_FUN_00495e40()
    ADD ESP,0x8                         ; 0052e174
    PUSH ESI                            ; 0052e177
    MOV ESI,dword ptr [0x00600530]      ; 0052e178 | DAT_00600530
    PUSH ESI                            ; 0052e17e
    CALL core_mission.cpp_FUN_004f6930  ; 0052e17f
        ;   XREF to: 004f6930 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_FUN_004f6930(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0052e184
    JMP 0x00529b1b                      ; 0052e187
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EAX,[ESP + 0x4890]              ; 0052e18c
        ;   Label: LAB_0052e18c
    PUSH EAX                            ; 0052e193
    LEA EAX,[ESP + 0x3300]              ; 0052e194
    PUSH EAX                            ; 0052e19b
    PUSH 0x5cf14e                       ; 0052e19c | = ", %[^)]%n"
    MOV EAX,dword ptr [ESP + 0x4804]    ; 0052e1a1
    PUSH EAX                            ; 0052e1a8
    MOV dword ptr [ESP + 0x48a0],ESI    ; 0052e1a9
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052e1b0
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 0052e1b5
    MOV EDX,dword ptr [ESP + 0x4890]    ; 0052e1b8
    CMP EDX,EDI                         ; 0052e1bf
    JL 0x0052e221                       ; 0052e1c1
        ;   XREF to: 0052e221 (CONDITIONAL_JUMP)  ; LAB_0052e221
    MOV ECX,dword ptr [ESP + 0x47f8]    ; 0052e1c3
    ADD ECX,EDX                         ; 0052e1ca
    MOV ESI,dword ptr [0x01ed6808]      ; 0052e1cc | DAT_01ed6808
    MOV dword ptr [ESP + 0x47f8],ECX    ; 0052e1d2
    TEST ESI,ESI                        ; 0052e1d9
    JZ 0x0052e238                       ; 0052e1db
        ;   XREF to: 0052e238 (CONDITIONAL_JUMP)  ; LAB_0052e238
    LEA EAX,[ESP + 0x32fc]              ; 0052e1dd
    PUSH EAX                            ; 0052e1e4
    MOV EAX,[0x005fba60]                ; 0052e1e5 | DAT_005fba60
    PUSH EAX                            ; 0052e1ea
    CALL core_event.cpp_CEventList_validateCondition_FUN_00491b00 ; 0052e1eb
        ;   XREF to: 00491b00 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCondition_FUN_00491b00(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 0052e1f0
    TEST EAX,EAX                        ; 0052e1f3
    JZ 0x0052e0ed                       ; 0052e1f5
        ;   XREF to: 0052e0ed (CONDITIONAL_JUMP)  ; LAB_0052e0ed
    MOV EDI,0x1ed6810                   ; 0052e1fb
    MOV ESI,EAX                         ; 0052e200
    PUSH EDI                            ; 0052e202 | DAT_01ed6810
    MOV AL,byte ptr [ESI]               ; 0052e203
        ;   Label: LAB_0052e203
    MOV byte ptr [EDI],AL               ; 0052e205 | DAT_01ed6810 | DAT_01ed6812
    CMP AL,0x0                          ; 0052e207
    JZ 0x0052e21b                       ; 0052e209
        ;   XREF to: 0052e21b (CONDITIONAL_JUMP)  ; LAB_0052e21b
    MOV AL,byte ptr [ESI + 0x1]         ; 0052e20b
    ADD ESI,0x2                         ; 0052e20e
    MOV byte ptr [EDI + 0x1],AL         ; 0052e211 | DAT_01ed6811 | DAT_01ed6813
    ADD EDI,0x2                         ; 0052e214
    CMP AL,0x0                          ; 0052e217
    JNZ 0x0052e203                      ; 0052e219
        ;   XREF to: 0052e203 (CONDITIONAL_JUMP)  ; LAB_0052e203
    POP EDI                             ; 0052e21b
        ;   Label: LAB_0052e21b
    JMP 0x00529bec                      ; 0052e21c
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    PUSH 0x5cf158                       ; 0052e221 | = "Error parsing removeItemFromInventory..."
        ;   Label: LAB_0052e221
    PUSH 0x1ed6810                      ; 0052e226 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052e22b
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052e230
    JMP 0x00529bec                      ; 0052e233
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EAX,[ESP + 0x32fc]              ; 0052e238
        ;   Label: LAB_0052e238
    PUSH EAX                            ; 0052e23f
    MOV EDI,dword ptr [0x005fba60]      ; 0052e240 | DAT_005fba60
    PUSH EDI                            ; 0052e246
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0052e247
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0052e24c
    MOV EDI,EAX                         ; 0052e24f
    JMP 0x0052e0ed                      ; 0052e251
        ;   XREF to: 0052e0ed (UNCONDITIONAL_JUMP)  ; LAB_0052e0ed
    PUSH 0x5cf18c                       ; 0052e256 | = "Error parsing removeItemFromInventory..."
        ;   Label: LAB_0052e256
    PUSH 0x1ed6810                      ; 0052e25b | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052e260
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052e265
    JMP 0x00529bec                      ; 0052e268
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0xa                         ; 0052e26d
        ;   Label: LAB_0052e26d
    PUSH ESI                            ; 0052e270
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052e271
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    MOV EDX,0xffffffff                  ; 0052e276
    ADD ESP,0x4                         ; 0052e27b
    MOV dword ptr [ESP + 0x489c],EDX    ; 0052e27e
    LEA EDX,[ESP + 0x489c]              ; 0052e285
    PUSH EDX                            ; 0052e28c
    LEA EDX,[ESP + 0x489c]              ; 0052e28d
    PUSH EDX                            ; 0052e294
    PUSH 0x5cf1cb                       ; 0052e295 | = " (%d )%n"
    PUSH EAX                            ; 0052e29a
    MOV dword ptr [ESP + 0x4808],EAX    ; 0052e29b
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052e2a2
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 0052e2a7
    MOV ECX,dword ptr [ESP + 0x489c]    ; 0052e2aa
    CMP ECX,0x3                         ; 0052e2b1
    JL 0x0052e2ff                       ; 0052e2b4
        ;   XREF to: 0052e2ff (CONDITIONAL_JUMP)  ; LAB_0052e2ff
    MOV ESI,dword ptr [ESP + 0x47f8]    ; 0052e2b6
    ADD ESI,ECX                         ; 0052e2bd
    MOV EAX,[0x00603450]                ; 0052e2bf | g_CNetGamePtr
    MOV dword ptr [ESP + 0x47f8],ESI    ; 0052e2c4
    CMP dword ptr [EAX],0x0             ; 0052e2cb | g_CNetGameInstance
    JNZ 0x0052e316                      ; 0052e2ce
        ;   XREF to: 0052e316 (CONDITIONAL_JUMP)  ; LAB_0052e316
    CMP dword ptr [0x01ed6808],0x0      ; 0052e2d0 | DAT_01ed6808
    JNZ 0x00529b1b                      ; 0052e2d7
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EDX,dword ptr [ESP + 0x4898]    ; 0052e2dd
    MOV EAX,[0x01d5ba14]                ; 0052e2e4 | DAT_01d5ba14
    PUSH EDX                            ; 0052e2e9
    MOV ECX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0052e2ea
    PUSH ECX                            ; 0052e2f1
    CALL core_hero.cpp_FUN_004d41e0     ; 0052e2f2
        ;   XREF to: 004d41e0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_FUN_004d41e0(CHero * this_ptr, uint key_mask)
    ADD ESP,0x8                         ; 0052e2f7
    JMP 0x00529b1b                      ; 0052e2fa
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH 0x5cf1d4                       ; 0052e2ff | = "Error parsing removeKeys() command parms"
        ;   Label: LAB_0052e2ff
    PUSH 0x1ed6810                      ; 0052e304 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052e309
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052e30e
    JMP 0x00529bec                      ; 0052e311
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    PUSH 0x5cf1fd                       ; 0052e316 | = "Can't use removeKeys command in multi..."
        ;   Label: LAB_0052e316
    PUSH 0x1ed6810                      ; 0052e31b | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052e320
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052e325
    JMP 0x00529bec                      ; 0052e328
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0x6                         ; 0052e32d
        ;   Label: LAB_0052e32d
    PUSH ESI                            ; 0052e330
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052e331
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052e336
    MOV ESI,dword ptr [0x01ed6808]      ; 0052e339 | DAT_01ed6808
    MOV dword ptr [ESP + 0x47f8],EAX    ; 0052e33f
    TEST ESI,ESI                        ; 0052e346
    JNZ 0x00529b1b                      ; 0052e348
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EDI,dword ptr [EBX + 0x458]     ; 0052e34e
    CMP EDI,0x1                         ; 0052e354
    JL 0x0052e371                       ; 0052e357
        ;   XREF to: 0052e371 (CONDITIONAL_JUMP)  ; LAB_0052e371
    LEA EAX,[EDI + -0x1]                ; 0052e359
    MOV dword ptr [EBX + 0x458],EAX     ; 0052e35c
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x45c] ; 0052e362
    MOV dword ptr [EBX + 0x44],EAX      ; 0052e369
    JMP 0x00529b1b                      ; 0052e36c
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EDX,dword ptr [ESP + 0x47f4]    ; 0052e371
        ;   Label: LAB_0052e371
    PUSH EDX                            ; 0052e378
    PUSH 0x5cf231                       ; 0052e379 | = "Return without gosub detected on scri..."
    PUSH 0x1ed6810                      ; 0052e37e | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052e383
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 0052e388
    JMP 0x00529bec                      ; 0052e38b
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0xb                         ; 0052e390
        ;   Label: LAB_0052e390
    PUSH ESI                            ; 0052e393
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052e394
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052e399
    LEA EDX,[ESP + 0x48a0]              ; 0052e39c
    PUSH EDX                            ; 0052e3a3
    PUSH 0x5cf26e                       ; 0052e3a4 | = " ( )%n"
    MOV ECX,0xffffffff                  ; 0052e3a9
    PUSH EAX                            ; 0052e3ae
    MOV dword ptr [ESP + 0x4804],EAX    ; 0052e3af
    MOV dword ptr [ESP + 0x48ac],ECX    ; 0052e3b6
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052e3bd
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0xc                         ; 0052e3c2
    MOV ESI,dword ptr [ESP + 0x48a0]    ; 0052e3c5
    CMP ESI,0x2                         ; 0052e3cc
    JL 0x0052e40f                       ; 0052e3cf
        ;   XREF to: 0052e40f (CONDITIONAL_JUMP)  ; LAB_0052e40f
    MOV EDI,dword ptr [ESP + 0x47f8]    ; 0052e3d1
    ADD EDI,ESI                         ; 0052e3d8
    MOV EAX,[0x01ed6808]                ; 0052e3da | DAT_01ed6808
    MOV dword ptr [ESP + 0x47f8],EDI    ; 0052e3df
    TEST EAX,EAX                        ; 0052e3e6
    JNZ 0x00529b1b                      ; 0052e3e8
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV dword ptr [ESP + 0x47e4],EAX    ; 0052e3ee
    MOV EAX,[0x005fe9dc]                ; 0052e3f5 | g_CGamePtr
    MOV dword ptr [EBX],0x1             ; 0052e3fa
    MOV dword ptr [EAX + 0x284],0x2     ; 0052e400 | g_CGameInstance.field644_0x284
    JMP 0x00529b1b                      ; 0052e40a
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH 0x5cf275                       ; 0052e40f | = "Error parsing rollCredits command"
        ;   Label: LAB_0052e40f
    PUSH 0x1ed6810                      ; 0052e414 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052e419
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052e41e
    JMP 0x00529bec                      ; 0052e421
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0x3                         ; 0052e426
        ;   Label: LAB_0052e426
    PUSH ESI                            ; 0052e429
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052e42a
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052e42f
    PUSH 0x1f4                          ; 0052e432
    MOV dword ptr [ESP + 0x47fc],EAX    ; 0052e437
    LEA EAX,[ESP + 0x440]               ; 0052e43e
    PUSH EAX                            ; 0052e445
    LEA EAX,[ESP + 0x4800]              ; 0052e446
    PUSH EAX                            ; 0052e44d
    CALL core_script.cpp_parseArgument_FUN_005288c0 ; 0052e44e
        ;   XREF to: 005288c0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005288c0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0052e453
    TEST EAX,EAX                        ; 0052e456
    JZ 0x0052e480                       ; 0052e458
        ;   XREF to: 0052e480 (CONDITIONAL_JUMP)  ; LAB_0052e480
    MOV EDI,0x1ed6810                   ; 0052e45a
        ;   Label: LAB_0052e45a
    MOV ESI,EAX                         ; 0052e45f
    PUSH EDI                            ; 0052e461 | DAT_01ed6810
    MOV AL,byte ptr [ESI]               ; 0052e462
        ;   Label: LAB_0052e462
    MOV byte ptr [EDI],AL               ; 0052e464 | DAT_01ed6810 | DAT_01ed6812
    CMP AL,0x0                          ; 0052e466
    JZ 0x0052e47a                       ; 0052e468
        ;   XREF to: 0052e47a (CONDITIONAL_JUMP)  ; LAB_0052e47a
    MOV AL,byte ptr [ESI + 0x1]         ; 0052e46a
    ADD ESI,0x2                         ; 0052e46d
    MOV byte ptr [EDI + 0x1],AL         ; 0052e470 | DAT_01ed6811 | DAT_01ed6813
    ADD EDI,0x2                         ; 0052e473
    CMP AL,0x0                          ; 0052e476
    JNZ 0x0052e462                      ; 0052e478
        ;   XREF to: 0052e462 (CONDITIONAL_JUMP)  ; LAB_0052e462
    POP EDI                             ; 0052e47a
        ;   Label: LAB_0052e47a
    JMP 0x00529bec                      ; 0052e47b
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EAX,[ESP + 0x48a4]              ; 0052e480
        ;   Label: LAB_0052e480
    PUSH EAX                            ; 0052e487
    LEA EAX,[ESP + 0x2bf8]              ; 0052e488
    PUSH EAX                            ; 0052e48f
    LEA EAX,[ESP + 0x1b94]              ; 0052e490
    PUSH EAX                            ; 0052e497
    PUSH 0x5cf29b                       ; 0052e498 | = "%[^,], %[^,], %n"
    LEA EAX,[ESP + 0x44c]               ; 0052e49d
    MOV ECX,0xffffffff                  ; 0052e4a4
    PUSH EAX                            ; 0052e4a9
    MOV dword ptr [ESP + 0x48b8],ECX    ; 0052e4aa
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052e4b1
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052e4b6
    CMP dword ptr [ESP + 0x48a4],0x5    ; 0052e4b9
    JGE 0x0052e4da                      ; 0052e4c1
        ;   XREF to: 0052e4da (CONDITIONAL_JUMP)  ; LAB_0052e4da
    PUSH 0x5cf2ac                       ; 0052e4c3 | = "Error parsing speaker and wav arguments"
    PUSH 0x1ed6810                      ; 0052e4c8 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052e4cd
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052e4d2
    JMP 0x00529bec                      ; 0052e4d5
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EAX,[ESP + 0x1b8c]              ; 0052e4da
        ;   Label: LAB_0052e4da
    PUSH EAX                            ; 0052e4e1
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052e4e2
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052e4e7
    LEA EAX,[ESP + 0x2bf4]              ; 0052e4ea
    PUSH EAX                            ; 0052e4f1
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052e4f2
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    FLD float ptr [EBX + 0x4c]          ; 0052e4f7
    FLDZ                                ; 0052e4fa
    ADD ESP,0x4                         ; 0052e4fc
    FCOMPP                              ; 0052e4ff
    FNSTSW AX                           ; 0052e501
    SAHF                                ; 0052e503
    JA 0x0052e544                       ; 0052e504
        ;   XREF to: 0052e544 (CONDITIONAL_JUMP)  ; LAB_0052e544
    CMP dword ptr [0x01ed6808],0x0      ; 0052e506 | DAT_01ed6808
        ;   Label: LAB_0052e506
    JNZ 0x00529b1b                      ; 0052e50d
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EDX,dword ptr [EBP + 0x18]      ; 0052e513
    PUSH EDX                            ; 0052e516
    PUSH dword ptr [EBX + 0x4c]         ; 0052e517
    PUSH EBX                            ; 0052e51a
    CALL core_script.cpp_CScript_processTimer_FUN_00530310 ; 0052e51b
        ;   XREF to: 00530310 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_processTimer_FUN_00530310(CScript * this_ptr, float delta_time, float * timer_value)
    ADD ESP,0xc                         ; 0052e520
    MOV dword ptr [ESP + 0x47e4],EAX    ; 0052e523
    TEST EAX,EAX                        ; 0052e52a
    JLE 0x00529b1b                      ; 0052e52c
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV ECX,dword ptr [EBX + 0x4]       ; 0052e532
    PUSH ECX                            ; 0052e535
    PUSH EBX                            ; 0052e536
    CALL core_script.cpp_FUN_00530390   ; 0052e537
        ;   XREF to: 00530390 (UNCONDITIONAL_CALL)  ; void core_script.cpp_FUN_00530390(CScript * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0052e53c
    JMP 0x00529b1b                      ; 0052e53f
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EAX,[ESP + 0x43c]               ; 0052e544
        ;   Label: LAB_0052e544
    ADD EAX,dword ptr [ESP + 0x48a4]    ; 0052e54b
    PUSH EAX                            ; 0052e552
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052e553
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052e558
    PUSH EAX                            ; 0052e55b
    LEA EAX,[ESP + 0x2bf8]              ; 0052e55c
    PUSH EAX                            ; 0052e563
    LEA EAX,[ESP + 0x1b94]              ; 0052e564
    PUSH EAX                            ; 0052e56b
    PUSH EBX                            ; 0052e56c
    CALL core_script.cpp_FUN_00530150   ; 0052e56d
        ;   XREF to: 00530150 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00530150()
    MOV dword ptr [ESP + 0x4954],EAX    ; 0052e572
    FLDZ                                ; 0052e579
    MOV EAX,dword ptr [ESP + 0x4954]    ; 0052e57b
    MOV dword ptr [EBX + 0x4c],EAX      ; 0052e582
    ADD ESP,0x10                        ; 0052e585
    FCOMP float ptr [EBX + 0x4c]        ; 0052e588
    FNSTSW AX                           ; 0052e58b
    SAHF                                ; 0052e58d
    JA 0x00529bec                       ; 0052e58e
        ;   XREF to: 00529bec (CONDITIONAL_JUMP)  ; LAB_00529bec
    JMP 0x0052e506                      ; 0052e594
        ;   XREF to: 0052e506 (UNCONDITIONAL_JUMP)  ; LAB_0052e506
    ADD ESI,0xc                         ; 0052e599
        ;   Label: LAB_0052e599
    PUSH ESI                            ; 0052e59c
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052e59d
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052e5a2
    LEA EDX,[ESP + 0x48a8]              ; 0052e5a5
    PUSH EDX                            ; 0052e5ac
    LEA EDX,[ESP + 0x41d8]              ; 0052e5ad
    PUSH EDX                            ; 0052e5b4
    LEA EDX,[ESP + 0x45c4]              ; 0052e5b5
    PUSH EDX                            ; 0052e5bc
    PUSH 0x5cf2e1                       ; 0052e5bd | = " (%[^,], %[^)])%n"
    MOV ESI,0xffffffff                  ; 0052e5c2
    PUSH EAX                            ; 0052e5c7
    MOV dword ptr [ESP + 0x480c],EAX    ; 0052e5c8
    MOV dword ptr [ESP + 0x48bc],ESI    ; 0052e5cf
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052e5d6
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052e5db
    CMP dword ptr [ESP + 0x48a8],0x5    ; 0052e5de
    JGE 0x0052e5ff                      ; 0052e5e6
        ;   XREF to: 0052e5ff (CONDITIONAL_JUMP)  ; LAB_0052e5ff
    PUSH 0x5cf2f3                       ; 0052e5e8 | = "Error parsing selectWeapon parameters."
    PUSH 0x1ed6810                      ; 0052e5ed | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052e5f2
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052e5f7
    JMP 0x00529bec                      ; 0052e5fa
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EAX,[ESP + 0x45bc]              ; 0052e5ff
        ;   Label: LAB_0052e5ff
    PUSH EAX                            ; 0052e606
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052e607
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052e60c
    LEA EAX,[ESP + 0x41d4]              ; 0052e60f
    PUSH EAX                            ; 0052e616
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052e617
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052e61c
    MOV ECX,dword ptr [0x01d5ba70]      ; 0052e61f | g_CHeroClassInfo.name_hash
    PUSH 0x1d5ba38                      ; 0052e625
    MOV EAX,dword ptr [ESP + 0x48ac]    ; 0052e62a
    MOV EDX,dword ptr [ESP + 0x47fc]    ; 0052e631
    PUSH ECX                            ; 0052e638
    ADD EDX,EAX                         ; 0052e639
    LEA EAX,[ESP + 0x45c4]              ; 0052e63b
    PUSH EAX                            ; 0052e642
    MOV dword ptr [ESP + 0x4804],EDX    ; 0052e643
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052e64a
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    ADD ESP,0xc                         ; 0052e64f
    TEST EAX,EAX                        ; 0052e652
    JNZ 0x0052e668                      ; 0052e654
        ;   XREF to: 0052e668 (CONDITIONAL_JUMP)  ; LAB_0052e668
    CMP dword ptr [0x01ed701c],0x0      ; 0052e656 | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052e65d
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052e663
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV ESI,dword ptr [0x01ed6808]      ; 0052e668 | DAT_01ed6808
        ;   Label: LAB_0052e668
    TEST ESI,ESI                        ; 0052e66e
    JNZ 0x00529b1b                      ; 0052e670
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EDI,[EAX + 0x206e8]             ; 0052e676
    PUSH EDI                            ; 0052e67c
    MOV dword ptr [ESP + 0x48b0],ESI    ; 0052e67d
    CALL core_game.cpp_FUN_004c4d50     ; 0052e684
        ;   XREF to: 004c4d50 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004c4d50()
    ADD ESP,0x4                         ; 0052e689
    MOV dword ptr [ESP + 0x48b0],EAX    ; 0052e68c
    TEST EAX,EAX                        ; 0052e693
    JZ 0x0052e6fc                       ; 0052e695
        ;   XREF to: 0052e6fc (CONDITIONAL_JUMP)  ; LAB_0052e6fc
    MOV ESI,EAX                         ; 0052e697
    TEST ESI,ESI                        ; 0052e699
        ;   Label: LAB_0052e699
    JNZ 0x0052e6bf                      ; 0052e69b
        ;   XREF to: 0052e6bf (CONDITIONAL_JUMP)  ; LAB_0052e6bf
    MOV EAX,0x5cf31a                    ; 0052e69d | = "..\\core\\script.cpp"
    MOV EDX,0xbcf                       ; 0052e6a2
    PUSH 0x5cf32d                       ; 0052e6a7 | = "script selectWeapon() command - hell ..."
    MOV [0x01d71de0],EAX                ; 0052e6ac | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0052e6b1 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0052e6b7
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0052e6bc
    LEA EAX,[ESP + 0x41d4]              ; 0052e6bf
        ;   Label: LAB_0052e6bf
    PUSH EAX                            ; 0052e6c6
    PUSH ESI                            ; 0052e6c7
    CALL core_actor.cpp_FUN_0040c790    ; 0052e6c8
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0052e6cd
    TEST EAX,EAX                        ; 0052e6d0
    JNZ 0x00529b1b                      ; 0052e6d2
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH 0x1                            ; 0052e6d8
    PUSH 0x5                            ; 0052e6da
    PUSH EAX                            ; 0052e6dc
    PUSH EDI                            ; 0052e6dd
    CALL core_inv.cpp_FUN_004dbb40      ; 0052e6de
        ;   XREF to: 004dbb40 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004dbb40(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 0052e6e3
    PUSH EDI                            ; 0052e6e6
    CALL core_game.cpp_FUN_004c4d50     ; 0052e6e7
        ;   XREF to: 004c4d50 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004c4d50()
    ADD ESP,0x4                         ; 0052e6ec
    MOV ECX,dword ptr [ESP + 0x48b0]    ; 0052e6ef
    MOV ESI,EAX                         ; 0052e6f6
    CMP EAX,ECX                         ; 0052e6f8
    JNZ 0x0052e699                      ; 0052e6fa
        ;   XREF to: 0052e699 (CONDITIONAL_JUMP)  ; LAB_0052e699
    CMP dword ptr [ESP + 0x48ac],0x0    ; 0052e6fc
        ;   Label: LAB_0052e6fc
    JNZ 0x00529b1b                      ; 0052e704
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EAX,[ESP + 0x41d4]              ; 0052e70a
    PUSH EAX                            ; 0052e711
    LEA EAX,[ESP + 0x45c0]              ; 0052e712
    PUSH EAX                            ; 0052e719
    PUSH 0x5cf359                       ; 0052e71a | = "%s can't selectWeapon(%s)\n"
    MOV EDI,dword ptr [0x005f1690]      ; 0052e71f | g_CConsolePtr
    PUSH EDI                            ; 0052e725 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 0052e726
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x10                        ; 0052e72b
    JMP 0x00529b1b                      ; 0052e72e
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0x10                        ; 0052e733
        ;   Label: LAB_0052e733
    PUSH ESI                            ; 0052e736
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052e737
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    MOV EDX,0xffffffff                  ; 0052e73c
    ADD ESP,0x4                         ; 0052e741
    MOV dword ptr [ESP + 0x48b4],EDX    ; 0052e744
    LEA EDX,[ESP + 0x48b4]              ; 0052e74b
    PUSH EDX                            ; 0052e752
    LEA EDX,[ESP + 0x2298]              ; 0052e753
    PUSH EDX                            ; 0052e75a
    LEA EDX,[ESP + 0x1d24]              ; 0052e75b
    PUSH EDX                            ; 0052e762
    PUSH 0x5cf385                       ; 0052e763 | = "(%[^,], %[^)])%n"
    PUSH EAX                            ; 0052e768
    MOV dword ptr [ESP + 0x480c],EAX    ; 0052e769
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052e770
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052e775
    MOV ECX,dword ptr [ESP + 0x48b4]    ; 0052e778
    CMP ECX,0x5                         ; 0052e77f
    JGE 0x0052e79b                      ; 0052e782
        ;   XREF to: 0052e79b (CONDITIONAL_JUMP)  ; LAB_0052e79b
    PUSH 0x5cf396                       ; 0052e784 | = "Error parsing setActorVariable comman..."
    PUSH 0x1ed6810                      ; 0052e789 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052e78e
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052e793
    JMP 0x00529bec                      ; 0052e796
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV ESI,dword ptr [ESP + 0x47f8]    ; 0052e79b
        ;   Label: LAB_0052e79b
    LEA EAX,[ESP + 0x1d1c]              ; 0052e7a2
    ADD ESI,ECX                         ; 0052e7a9
    PUSH EAX                            ; 0052e7ab
    MOV dword ptr [ESP + 0x47fc],ESI    ; 0052e7ac
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052e7b3
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052e7b8
    LEA EAX,[ESP + 0x2294]              ; 0052e7bb
    PUSH EAX                            ; 0052e7c2
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052e7c3
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052e7c8
    LEA EAX,[ESP + 0x1d1c]              ; 0052e7cb
    PUSH EAX                            ; 0052e7d2
    CALL core_script.cpp_validateActorVariableName_FUN_005286f0 ; 0052e7d3
        ;   XREF to: 005286f0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_validateActorVariableName_FUN_005286f0(char * variable_name)
    ADD ESP,0x4                         ; 0052e7d8
    TEST EAX,EAX                        ; 0052e7db
    JZ 0x00529bec                       ; 0052e7dd
        ;   XREF to: 00529bec (CONDITIONAL_JUMP)  ; LAB_00529bec
    PUSH 0x7df978                       ; 0052e7e3 | g_CDemonActorClassInfo
    MOV EDI,dword ptr [0x007df9b0]      ; 0052e7e8 | g_CDemonActorClassInfo.name_hash
    PUSH EDI                            ; 0052e7ee
    LEA EAX,[ESP + 0x229c]              ; 0052e7ef
    PUSH EAX                            ; 0052e7f6
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052e7f7
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    MOV EDX,dword ptr [0x01ed6808]      ; 0052e7fc | DAT_01ed6808
    ADD ESP,0xc                         ; 0052e802
    TEST EDX,EDX                        ; 0052e805
    JZ 0x0052e823                       ; 0052e807
        ;   XREF to: 0052e823 (CONDITIONAL_JUMP)  ; LAB_0052e823
    TEST EAX,EAX                        ; 0052e809
    JNZ 0x00529b1b                      ; 0052e80b
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    CMP dword ptr [0x01ed701c],0x0      ; 0052e811 | DAT_01ed701c
    JNZ 0x00529b1b                      ; 0052e818
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    JMP 0x00529bec                      ; 0052e81e
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    PUSH EAX                            ; 0052e823
        ;   Label: LAB_0052e823
    LEA EAX,[ESP + 0x1d20]              ; 0052e824
    PUSH EAX                            ; 0052e82b
    MOV ECX,dword ptr [0x005fba60]      ; 0052e82c | DAT_005fba60
    PUSH ECX                            ; 0052e832
    CALL core_event.cpp_CEventList_setActorVariable_FUN_00494e70 ; 0052e833
        ;   XREF to: 00494e70 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_setActorVariable_FUN_00494e70(CEventList * this_ptr, char * var_name, CDemonActor * actor)
    ADD ESP,0xc                         ; 0052e838
    JMP 0x00529b1b                      ; 0052e83b
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0xf                         ; 0052e840
        ;   Label: LAB_0052e840
    PUSH ESI                            ; 0052e843
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052e844
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052e849
    PUSH 0x64                           ; 0052e84c
    MOV dword ptr [ESP + 0x47fc],EAX    ; 0052e84e
    LEA EAX,[ESP + 0x43cc]              ; 0052e855
    PUSH EAX                            ; 0052e85c
    LEA EAX,[ESP + 0x4800]              ; 0052e85d
    PUSH EAX                            ; 0052e864
    CALL core_script.cpp_parseArgument_FUN_005288c0 ; 0052e865
        ;   XREF to: 005288c0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005288c0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0052e86a
    TEST EAX,EAX                        ; 0052e86d
    JNZ 0x0052e45a                      ; 0052e86f
        ;   XREF to: 0052e45a (CONDITIONAL_JUMP)  ; LAB_0052e45a
    CMP dword ptr [0x01ed6808],0x0      ; 0052e875 | DAT_01ed6808
    JNZ 0x00529b1b                      ; 0052e87c
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EAX,[ESP + 0x43c8]              ; 0052e882
    PUSH EAX                            ; 0052e889
    MOV EAX,[0x006045f8]                ; 0052e88a | DAT_006045f8
    PUSH EAX                            ; 0052e88f
    CALL core_sound.cpp_CSound_playAmbientSound_FUN_00560940 ; 0052e890
        ;   XREF to: 00560940 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_playAmbientSound_FUN_00560940(CSound * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 0052e895
    JMP 0x00529b1b                      ; 0052e898
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0xe                         ; 0052e89d
        ;   Label: LAB_0052e89d
    PUSH ESI                            ; 0052e8a0
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052e8a1
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    MOV EDX,0xffffffff                  ; 0052e8a6
    ADD ESP,0x4                         ; 0052e8ab
    MOV dword ptr [ESP + 0x48bc],EDX    ; 0052e8ae
    LEA EDX,[ESP + 0x48bc]              ; 0052e8b5
    PUSH EDX                            ; 0052e8bc
    LEA EDX,[ESP + 0x48bc]              ; 0052e8bd
    PUSH EDX                            ; 0052e8c4
    LEA EDX,[ESP + 0x2d8c]              ; 0052e8c5
    PUSH EDX                            ; 0052e8cc
    PUSH 0x5cf3e2                       ; 0052e8cd | = "(%[^,], %d)%n"
    PUSH EAX                            ; 0052e8d2
    MOV dword ptr [ESP + 0x480c],EAX    ; 0052e8d3
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052e8da
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052e8df
    MOV ECX,dword ptr [ESP + 0x48bc]    ; 0052e8e2
    CMP ECX,0x3                         ; 0052e8e9
    JL 0x0052e947                       ; 0052e8ec
        ;   XREF to: 0052e947 (CONDITIONAL_JUMP)  ; LAB_0052e947
    LEA EAX,[ESP + 0x2d84]              ; 0052e8ee
    MOV ESI,dword ptr [ESP + 0x47f8]    ; 0052e8f5
    PUSH EAX                            ; 0052e8fc
    ADD ESI,ECX                         ; 0052e8fd
    XOR EDI,EDI                         ; 0052e8ff
    MOV dword ptr [ESP + 0x47fc],ESI    ; 0052e901
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052e908
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052e90d
    XOR ESI,ESI                         ; 0052e910
    MOV dword ptr [ESP + 0x48c0],EDI    ; 0052e912
    MOV EAX,[0x00603b28]                ; 0052e919 | g_CDemonSetPtr
        ;   Label: LAB_0052e919
    CMP EDI,dword ptr [EAX]             ; 0052e91e | g_CDemonSetInstance
    JGE 0x0052e98a                      ; 0052e920
        ;   XREF to: 0052e98a (CONDITIONAL_JUMP)  ; LAB_0052e98a
    ADD EAX,0x4                         ; 0052e922
    PUSH 0x0                            ; 0052e925
    ADD EAX,ESI                         ; 0052e927
    PUSH EAX                            ; 0052e929
    LEA EAX,[ESP + 0x2d8c]              ; 0052e92a
    PUSH EAX                            ; 0052e931
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_00486a40 ; 0052e932
        ;   XREF to: 00486a40 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_00486a40(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 0052e937
    TEST EAX,EAX                        ; 0052e93a
    JNZ 0x0052e95e                      ; 0052e93c
        ;   XREF to: 0052e95e (CONDITIONAL_JUMP)  ; LAB_0052e95e
    INC EDI                             ; 0052e93e
        ;   Label: LAB_0052e93e
    ADD ESI,0x1a4                       ; 0052e93f
    JMP 0x0052e919                      ; 0052e945
        ;   XREF to: 0052e919 (UNCONDITIONAL_JUMP)  ; LAB_0052e919
    PUSH 0x5cf3f0                       ; 0052e947 | = "Error parsing setCameragroup parms"
        ;   Label: LAB_0052e947
    PUSH 0x1ed6810                      ; 0052e94c | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052e951
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052e956
    JMP 0x00529bec                      ; 0052e959
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EAX,0x1                         ; 0052e95e
        ;   Label: LAB_0052e95e
    MOV EDX,dword ptr [0x01ed6808]      ; 0052e963 | DAT_01ed6808
    MOV dword ptr [ESP + 0x48c0],EAX    ; 0052e969
    TEST EDX,EDX                        ; 0052e970
    JNZ 0x0052e93e                      ; 0052e972
        ;   XREF to: 0052e93e (CONDITIONAL_JUMP)  ; LAB_0052e93e
    MOV EDX,dword ptr [0x00603b28]      ; 0052e974 | g_CDemonSetPtr
    MOV EAX,dword ptr [ESP + 0x48b8]    ; 0052e97a
    MOV dword ptr [EDX + ESI*0x1 + 0x150],EAX ; 0052e981 | g_CDemonSetInstance.field336_0x150
    JMP 0x0052e93e                      ; 0052e988
        ;   XREF to: 0052e93e (UNCONDITIONAL_JUMP)  ; LAB_0052e93e
    CMP dword ptr [ESP + 0x48c0],0x0    ; 0052e98a
        ;   Label: LAB_0052e98a
    JNZ 0x00529b1b                      ; 0052e992
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EAX,[ESP + 0x2d84]              ; 0052e998
    PUSH EAX                            ; 0052e99f
    PUSH 0x5cf413                       ; 0052e9a0 | = "No cameras found matching \"%s\""
    PUSH 0x1ed6810                      ; 0052e9a5 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052e9aa
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 0052e9af
    JMP 0x00529bec                      ; 0052e9b2
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0x12                        ; 0052e9b7
        ;   Label: LAB_0052e9b7
    PUSH ESI                            ; 0052e9ba
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052e9bb
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    MOV EDX,0xffffffff                  ; 0052e9c0
    ADD ESP,0x4                         ; 0052e9c5
    MOV dword ptr [ESP + 0x48c8],EDX    ; 0052e9c8
    LEA EDX,[ESP + 0x48c8]              ; 0052e9cf
    PUSH EDX                            ; 0052e9d6
    LEA EDX,[ESP + 0x48c8]              ; 0052e9d7
    PUSH EDX                            ; 0052e9de
    LEA EDX,[ESP + 0x323c]              ; 0052e9df
    PUSH EDX                            ; 0052e9e6
    PUSH 0x5cf445                       ; 0052e9e7 | = "(%[^,], %f)%n"
    PUSH EAX                            ; 0052e9ec
    MOV dword ptr [ESP + 0x480c],EAX    ; 0052e9ed
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052e9f4
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052e9f9
    MOV ECX,dword ptr [ESP + 0x48c8]    ; 0052e9fc
    CMP ECX,0x3                         ; 0052ea03
    JGE 0x0052ea1f                      ; 0052ea06
        ;   XREF to: 0052ea1f (CONDITIONAL_JUMP)  ; LAB_0052ea1f
    PUSH 0x5cf453                       ; 0052ea08 | = "Error parsing setCharacterHealth parms"
    PUSH 0x1ed6810                      ; 0052ea0d | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052ea12
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052ea17
    JMP 0x00529bec                      ; 0052ea1a
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV ESI,dword ptr [ESP + 0x47f8]    ; 0052ea1f
        ;   Label: LAB_0052ea1f
    LEA EAX,[ESP + 0x3234]              ; 0052ea26
    ADD ESI,ECX                         ; 0052ea2d
    PUSH EAX                            ; 0052ea2f
    MOV dword ptr [ESP + 0x47fc],ESI    ; 0052ea30
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052ea37
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052ea3c
    PUSH 0x7e2cb4                       ; 0052ea3f | g_CCharacterClassInfo
    MOV EDI,dword ptr [0x007e2cec]      ; 0052ea44 | g_CCharacterClassInfo.name_hash
    PUSH EDI                            ; 0052ea4a
    LEA EAX,[ESP + 0x323c]              ; 0052ea4b
    PUSH EAX                            ; 0052ea52
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052ea53
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    ADD ESP,0xc                         ; 0052ea58
    TEST EAX,EAX                        ; 0052ea5b
    JNZ 0x0052ea71                      ; 0052ea5d
        ;   XREF to: 0052ea71 (CONDITIONAL_JUMP)  ; LAB_0052ea71
    CMP dword ptr [0x01ed701c],0x0      ; 0052ea5f | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052ea66
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052ea6c
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    CMP dword ptr [0x01ed6808],0x0      ; 0052ea71 | DAT_01ed6808
        ;   Label: LAB_0052ea71
    JNZ 0x00529b1b                      ; 0052ea78
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    FLD float ptr [EAX + 0x253c]        ; 0052ea7e
    FMUL float ptr [ESP + 0x48c4]       ; 0052ea84
    FSTP float ptr [EAX + 0x2538]       ; 0052ea8b
    JMP 0x00529b1b                      ; 0052ea91
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0x7                         ; 0052ea96
        ;   Label: LAB_0052ea96
    PUSH ESI                            ; 0052ea99
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052ea9a
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052ea9f
    LEA EDX,[ESP + 0x48d8]              ; 0052eaa2
    PUSH EDX                            ; 0052eaa9
    LEA EDX,[ESP + 0x48d8]              ; 0052eaaa
    PUSH EDX                            ; 0052eab1
    LEA EDX,[ESP + 0x48d8]              ; 0052eab2
    PUSH EDX                            ; 0052eab9
    LEA EDX,[ESP + 0x48d8]              ; 0052eaba
    PUSH EDX                            ; 0052eac1
    LEA EDX,[ESP + 0x1944]              ; 0052eac2
    PUSH EDX                            ; 0052eac9
    PUSH 0x5cf482                       ; 0052eaca | = "(%[^,], %d, %d, %f)%n"
    MOV ESI,0xffffffff                  ; 0052eacf
    PUSH EAX                            ; 0052ead4
    MOV dword ptr [ESP + 0x4814],EAX    ; 0052ead5
    MOV dword ptr [ESP + 0x48f4],ESI    ; 0052eadc
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052eae3
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x1c                        ; 0052eae8
    MOV EDI,dword ptr [ESP + 0x48d8]    ; 0052eaeb
    CMP EDI,0x5                         ; 0052eaf2
    JGE 0x0052eb0e                      ; 0052eaf5
        ;   XREF to: 0052eb0e (CONDITIONAL_JUMP)  ; LAB_0052eb0e
    PUSH 0x5cf498                       ; 0052eaf7 | = "Error parsing setEyes parms"
    PUSH 0x1ed6810                      ; 0052eafc | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052eb01
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052eb06
    JMP 0x00529bec                      ; 0052eb09
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDX,dword ptr [ESP + 0x47f8]    ; 0052eb0e
        ;   Label: LAB_0052eb0e
    LEA EAX,[ESP + 0x1934]              ; 0052eb15
    ADD EDX,EDI                         ; 0052eb1c
    PUSH EAX                            ; 0052eb1e
    MOV dword ptr [ESP + 0x47fc],EDX    ; 0052eb1f
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052eb26
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052eb2b
    PUSH 0x7e2cb4                       ; 0052eb2e | g_CCharacterClassInfo
    MOV ECX,dword ptr [0x007e2cec]      ; 0052eb33 | g_CCharacterClassInfo.name_hash
    PUSH ECX                            ; 0052eb39
    LEA EAX,[ESP + 0x193c]              ; 0052eb3a
    PUSH EAX                            ; 0052eb41
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052eb42
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    MOV ESI,EAX                         ; 0052eb47
    ADD ESP,0xc                         ; 0052eb49
    TEST EAX,EAX                        ; 0052eb4c
    JNZ 0x0052eb62                      ; 0052eb4e
        ;   XREF to: 0052eb62 (CONDITIONAL_JUMP)  ; LAB_0052eb62
    CMP dword ptr [0x01ed701c],0x0      ; 0052eb50 | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052eb57
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052eb5d
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDI,dword ptr [0x01ed6808]      ; 0052eb62 | DAT_01ed6808
        ;   Label: LAB_0052eb62
    TEST EDI,EDI                        ; 0052eb68
    JNZ 0x00529b1b                      ; 0052eb6a
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EAX,dword ptr [ESP + 0x48cc]    ; 0052eb70
    PUSH dword ptr [ESP + 0x48d4]       ; 0052eb77
    PUSH EAX                            ; 0052eb7e
    PUSH EDI                            ; 0052eb7f
    PUSH ESI                            ; 0052eb80
    CALL core_charactr.cpp_FUN_0042d860 ; 0052eb81
        ;   XREF to: 0042d860 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d860()
    ADD ESP,0x10                        ; 0052eb86
    MOV EDX,dword ptr [ESP + 0x48d0]    ; 0052eb89
    PUSH dword ptr [ESP + 0x48d4]       ; 0052eb90
    PUSH EDX                            ; 0052eb97
    PUSH 0x1                            ; 0052eb98
    PUSH ESI                            ; 0052eb9a
    CALL core_charactr.cpp_FUN_0042d860 ; 0052eb9b
        ;   XREF to: 0042d860 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d860()
    ADD ESP,0x10                        ; 0052eba0
    JMP 0x00529b1b                      ; 0052eba3
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0xc                         ; 0052eba8
        ;   Label: LAB_0052eba8
    PUSH ESI                            ; 0052ebab
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052ebac
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052ebb1
    PUSH 0xc8                           ; 0052ebb4
    MOV dword ptr [ESP + 0x47fc],EAX    ; 0052ebb9
    LEA EAX,[ESP + 0x21d0]              ; 0052ebc0
    PUSH EAX                            ; 0052ebc7
    LEA EAX,[ESP + 0x4800]              ; 0052ebc8
    PUSH EAX                            ; 0052ebcf
    CALL core_script.cpp_parseArgument_FUN_005288c0 ; 0052ebd0
        ;   XREF to: 005288c0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005288c0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0052ebd5
    TEST EAX,EAX                        ; 0052ebd8
    JZ 0x0052ec02                       ; 0052ebda
        ;   XREF to: 0052ec02 (CONDITIONAL_JUMP)  ; LAB_0052ec02
    MOV EDI,0x1ed6810                   ; 0052ebdc
        ;   Label: LAB_0052ebdc
    MOV ESI,EAX                         ; 0052ebe1
    PUSH EDI                            ; 0052ebe3 | DAT_01ed6810
    MOV AL,byte ptr [ESI]               ; 0052ebe4
        ;   Label: LAB_0052ebe4
    MOV byte ptr [EDI],AL               ; 0052ebe6 | DAT_01ed6810 | DAT_01ed6812
    CMP AL,0x0                          ; 0052ebe8
    JZ 0x0052ebfc                       ; 0052ebea
        ;   XREF to: 0052ebfc (CONDITIONAL_JUMP)  ; LAB_0052ebfc
    MOV AL,byte ptr [ESI + 0x1]         ; 0052ebec
    ADD ESI,0x2                         ; 0052ebef
    MOV byte ptr [EDI + 0x1],AL         ; 0052ebf2 | DAT_01ed6811 | DAT_01ed6813
    ADD EDI,0x2                         ; 0052ebf5
    CMP AL,0x0                          ; 0052ebf8
    JNZ 0x0052ebe4                      ; 0052ebfa
        ;   XREF to: 0052ebe4 (CONDITIONAL_JUMP)  ; LAB_0052ebe4
    POP EDI                             ; 0052ebfc
        ;   Label: LAB_0052ebfc
    JMP 0x00529bec                      ; 0052ebfd
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EAX,[ESP + 0x21cc]              ; 0052ec02
        ;   Label: LAB_0052ec02
    PUSH EAX                            ; 0052ec09
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052ec0a
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    MOV ESI,dword ptr [0x01ed6808]      ; 0052ec0f | DAT_01ed6808
    ADD ESP,0x4                         ; 0052ec15
    TEST ESI,ESI                        ; 0052ec18
    JNZ 0x00529b1b                      ; 0052ec1a
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EAX,[ESP + 0x21cc]              ; 0052ec20
    PUSH EAX                            ; 0052ec27
    MOV EDI,dword ptr [0x00600530]      ; 0052ec28 | DAT_00600530
    PUSH EDI                            ; 0052ec2e
    CALL unkafter_mission.cpp_FUN_004f7c00 ; 0052ec2f
        ;   XREF to: 004f7c00 (UNCONDITIONAL_CALL)  ; undefined unkafter_mission.cpp_FUN_004f7c00()
    ADD ESP,0x8                         ; 0052ec34
    JMP 0x00529b1b                      ; 0052ec37
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0x18                        ; 0052ec3c
        ;   Label: LAB_0052ec3c
    PUSH ESI                            ; 0052ec3f
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052ec40
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052ec45
    PUSH 0x100                          ; 0052ec48
    MOV dword ptr [ESP + 0x47fc],EAX    ; 0052ec4d
    LEA EAX,[ESP + 0xdb0]               ; 0052ec54
    PUSH EAX                            ; 0052ec5b
    LEA EAX,[ESP + 0x4800]              ; 0052ec5c
    PUSH EAX                            ; 0052ec63
    CALL core_script.cpp_parseArgument_FUN_005288c0 ; 0052ec64
        ;   XREF to: 005288c0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005288c0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0052ec69
    TEST EAX,EAX                        ; 0052ec6c
    JNZ 0x0052ebdc                      ; 0052ec6e
        ;   XREF to: 0052ebdc (CONDITIONAL_JUMP)  ; LAB_0052ebdc
    CMP dword ptr [0x01ed6808],0x0      ; 0052ec74 | DAT_01ed6808
    JNZ 0x00529b1b                      ; 0052ec7b
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EAX,[ESP + 0xdac]               ; 0052ec81
    PUSH EAX                            ; 0052ec88
    MOV EDX,dword ptr [0x005fe4b0]      ; 0052ec89 | g_CFieldNotesPtr
    PUSH EDX                            ; 0052ec8f
    CALL core_fldnotes.cpp_FUN_004abdc0 ; 0052ec90
        ;   XREF to: 004abdc0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004abdc0()
    ADD ESP,0x8                         ; 0052ec95
    JMP 0x00529b1b                      ; 0052ec98
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0xd                         ; 0052ec9d
        ;   Label: LAB_0052ec9d
    PUSH ESI                            ; 0052eca0
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052eca1
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052eca6
    PUSH 0x64                           ; 0052eca9
    MOV dword ptr [ESP + 0x47fc],EAX    ; 0052ecab
    LEA EAX,[ESP + 0x4110]              ; 0052ecb2
    PUSH EAX                            ; 0052ecb9
    LEA EAX,[ESP + 0x4800]              ; 0052ecba
    PUSH EAX                            ; 0052ecc1
    CALL core_script.cpp_parseArgument_FUN_005288c0 ; 0052ecc2
        ;   XREF to: 005288c0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005288c0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0052ecc7
    TEST EAX,EAX                        ; 0052ecca
    JZ 0x0052ecf4                       ; 0052eccc
        ;   XREF to: 0052ecf4 (CONDITIONAL_JUMP)  ; LAB_0052ecf4
    MOV EDI,0x1ed6810                   ; 0052ecce
    MOV ESI,EAX                         ; 0052ecd3
    PUSH EDI                            ; 0052ecd5 | DAT_01ed6810
    MOV AL,byte ptr [ESI]               ; 0052ecd6
        ;   Label: LAB_0052ecd6
    MOV byte ptr [EDI],AL               ; 0052ecd8 | DAT_01ed6810 | DAT_01ed6812
    CMP AL,0x0                          ; 0052ecda
    JZ 0x0052ecee                       ; 0052ecdc
        ;   XREF to: 0052ecee (CONDITIONAL_JUMP)  ; LAB_0052ecee
    MOV AL,byte ptr [ESI + 0x1]         ; 0052ecde
    ADD ESI,0x2                         ; 0052ece1
    MOV byte ptr [EDI + 0x1],AL         ; 0052ece4 | DAT_01ed6811 | DAT_01ed6813
    ADD EDI,0x2                         ; 0052ece7
    CMP AL,0x0                          ; 0052ecea
    JNZ 0x0052ecd6                      ; 0052ecec
        ;   XREF to: 0052ecd6 (CONDITIONAL_JUMP)  ; LAB_0052ecd6
    POP EDI                             ; 0052ecee
        ;   Label: LAB_0052ecee
    JMP 0x00529bec                      ; 0052ecef
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    PUSH 0x7df978                       ; 0052ecf4 | g_CDemonActorClassInfo
        ;   Label: LAB_0052ecf4
    MOV ECX,dword ptr [0x007df9b0]      ; 0052ecf9 | g_CDemonActorClassInfo.name_hash
    PUSH ECX                            ; 0052ecff
    LEA EAX,[ESP + 0x4114]              ; 0052ed00
    PUSH EAX                            ; 0052ed07
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052ed08
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    ADD ESP,0xc                         ; 0052ed0d
    TEST EAX,EAX                        ; 0052ed10
    JNZ 0x0052ed26                      ; 0052ed12
        ;   XREF to: 0052ed26 (CONDITIONAL_JUMP)  ; LAB_0052ed26
    CMP dword ptr [0x01ed701c],0x0      ; 0052ed14 | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052ed1b
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052ed21
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    CMP EAX,dword ptr [EBX + 0xc]       ; 0052ed26
        ;   Label: LAB_0052ed26
    JZ 0x00529b1b                       ; 0052ed29
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV dword ptr [EBX + 0x10],0x1      ; 0052ed2f
    MOV dword ptr [EBX + 0xc],EAX       ; 0052ed36
    JMP 0x00529b1b                      ; 0052ed39
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0xb                         ; 0052ed3e
        ;   Label: LAB_0052ed3e
    PUSH ESI                            ; 0052ed41
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052ed42
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    MOV EDX,0xffffffff                  ; 0052ed47
    ADD ESP,0x4                         ; 0052ed4c
    MOV dword ptr [ESP + 0x48e0],EDX    ; 0052ed4f
    LEA EDX,[ESP + 0x48e0]              ; 0052ed56
    PUSH EDX                            ; 0052ed5d
    LEA EDX,[ESP + 0x455c]              ; 0052ed5e
    PUSH EDX                            ; 0052ed65
    LEA EDX,[ESP + 0x4308]              ; 0052ed66
    PUSH EDX                            ; 0052ed6d
    PUSH 0x5cf4f4                       ; 0052ed6e | = " (%[^,], %[^)])%n"
    PUSH EAX                            ; 0052ed73
    MOV dword ptr [ESP + 0x480c],EAX    ; 0052ed74
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052ed7b
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052ed80
    CMP dword ptr [ESP + 0x48e0],0x5    ; 0052ed83
    JGE 0x0052eda4                      ; 0052ed8b
        ;   XREF to: 0052eda4 (CONDITIONAL_JUMP)  ; LAB_0052eda4
    PUSH 0x5cf506                       ; 0052ed8d | = "Error parsing setHeroTask parameters."
    PUSH 0x1ed6810                      ; 0052ed92 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052ed97
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052ed9c
    JMP 0x00529bec                      ; 0052ed9f
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EAX,[ESP + 0x4300]              ; 0052eda4
        ;   Label: LAB_0052eda4
    PUSH EAX                            ; 0052edab
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052edac
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052edb1
    LEA EAX,[ESP + 0x4558]              ; 0052edb4
    PUSH EAX                            ; 0052edbb
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052edbc
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052edc1
    MOV EDI,dword ptr [0x01d5ba70]      ; 0052edc4 | g_CHeroClassInfo.name_hash
    PUSH 0x1d5ba38                      ; 0052edca
    MOV EAX,dword ptr [ESP + 0x48e4]    ; 0052edcf
    MOV ESI,dword ptr [ESP + 0x47fc]    ; 0052edd6
    PUSH EDI                            ; 0052eddd
    ADD ESI,EAX                         ; 0052edde
    LEA EAX,[ESP + 0x4308]              ; 0052ede0
    PUSH EAX                            ; 0052ede7
    MOV dword ptr [ESP + 0x4804],ESI    ; 0052ede8
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052edef
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    ADD ESP,0xc                         ; 0052edf4
    MOV ESI,EAX                         ; 0052edf7
    TEST EAX,EAX                        ; 0052edf9
    JNZ 0x0052ee0f                      ; 0052edfb
        ;   XREF to: 0052ee0f (CONDITIONAL_JUMP)  ; LAB_0052ee0f
    CMP dword ptr [0x01ed701c],0x0      ; 0052edfd | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052ee04
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052ee0a
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    PUSH 0x5cf52c                       ; 0052ee0f | = "stand"
        ;   Label: LAB_0052ee0f
    LEA EAX,[ESP + 0x455c]              ; 0052ee14
    PUSH EAX                            ; 0052ee1b
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0052ee1c
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0052ee21
    TEST EAX,EAX                        ; 0052ee24
    JNZ 0x0052ee44                      ; 0052ee26
        ;   XREF to: 0052ee44 (CONDITIONAL_JUMP)  ; LAB_0052ee44
    CMP dword ptr [0x01ed6808],0x0      ; 0052ee28 | DAT_01ed6808
        ;   Label: LAB_0052ee28
    JNZ 0x00529b1b                      ; 0052ee2f
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH EAX                            ; 0052ee35
    PUSH ESI                            ; 0052ee36
    CALL core_hero.cpp_FUN_004d4200     ; 0052ee37
        ;   XREF to: 004d4200 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_FUN_004d4200(CHero * this_ptr, int ai_task)
    ADD ESP,0x8                         ; 0052ee3c
    JMP 0x00529b1b                      ; 0052ee3f
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH 0x5cf532                       ; 0052ee44 | = "follow"
        ;   Label: LAB_0052ee44
    LEA EAX,[ESP + 0x455c]              ; 0052ee49
    PUSH EAX                            ; 0052ee50
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0052ee51
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0052ee56
    TEST EAX,EAX                        ; 0052ee59
    JNZ 0x0052ee64                      ; 0052ee5b
        ;   XREF to: 0052ee64 (CONDITIONAL_JUMP)  ; LAB_0052ee64
    MOV EAX,0x1                         ; 0052ee5d
    JMP 0x0052ee28                      ; 0052ee62
        ;   XREF to: 0052ee28 (UNCONDITIONAL_JUMP)  ; LAB_0052ee28
    PUSH 0x5cf539                       ; 0052ee64 | DAT_005cf539
        ;   Label: LAB_0052ee64
    LEA EAX,[ESP + 0x455c]              ; 0052ee69
    PUSH EAX                            ; 0052ee70
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0052ee71
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0052ee76
    TEST EAX,EAX                        ; 0052ee79
    JNZ 0x0052ee84                      ; 0052ee7b
        ;   XREF to: 0052ee84 (CONDITIONAL_JUMP)  ; LAB_0052ee84
    MOV EAX,0x2                         ; 0052ee7d
    JMP 0x0052ee28                      ; 0052ee82
        ;   XREF to: 0052ee28 (UNCONDITIONAL_JUMP)  ; LAB_0052ee28
    PUSH 0x5cf53e                       ; 0052ee84 | = "guard"
        ;   Label: LAB_0052ee84
    LEA EAX,[ESP + 0x455c]              ; 0052ee89
    PUSH EAX                            ; 0052ee90
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0052ee91
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0052ee96
    TEST EAX,EAX                        ; 0052ee99
    JNZ 0x0052eea4                      ; 0052ee9b
        ;   XREF to: 0052eea4 (CONDITIONAL_JUMP)  ; LAB_0052eea4
    MOV EAX,0x3                         ; 0052ee9d
    JMP 0x0052ee28                      ; 0052eea2
        ;   XREF to: 0052ee28 (UNCONDITIONAL_JUMP)  ; LAB_0052ee28
    PUSH 0x5cf544                       ; 0052eea4 | = "suspend"
        ;   Label: LAB_0052eea4
    LEA EAX,[ESP + 0x455c]              ; 0052eea9
    PUSH EAX                            ; 0052eeb0
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0052eeb1
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0052eeb6
    TEST EAX,EAX                        ; 0052eeb9
    JNZ 0x0052eec7                      ; 0052eebb
        ;   XREF to: 0052eec7 (CONDITIONAL_JUMP)  ; LAB_0052eec7
    MOV EAX,0x4                         ; 0052eebd
    JMP 0x0052ee28                      ; 0052eec2
        ;   XREF to: 0052ee28 (UNCONDITIONAL_JUMP)  ; LAB_0052ee28
    LEA EAX,[ESP + 0x4558]              ; 0052eec7
        ;   Label: LAB_0052eec7
    PUSH EAX                            ; 0052eece
    PUSH 0x5cf54c                       ; 0052eecf | = "Invalid Task: %s"
    PUSH 0x1ed6810                      ; 0052eed4 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052eed9
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 0052eede
    JMP 0x00529bec                      ; 0052eee1
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0x9                         ; 0052eee6
        ;   Label: LAB_0052eee6
    PUSH ESI                            ; 0052eee9
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052eeea
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052eeef
    LEA EDX,[ESP + 0x48ec]              ; 0052eef2
    PUSH EDX                            ; 0052eef9
    LEA EDX,[ESP + 0x48ec]              ; 0052eefa
    PUSH EDX                            ; 0052ef01
    LEA EDX,[ESP + 0x1554]              ; 0052ef02
    PUSH EDX                            ; 0052ef09
    PUSH 0x5cf567                       ; 0052ef0a | = "(%[^,], %d )%n"
    MOV ESI,0xffffffff                  ; 0052ef0f
    PUSH EAX                            ; 0052ef14
    MOV dword ptr [ESP + 0x480c],EAX    ; 0052ef15
    MOV dword ptr [ESP + 0x4900],ESI    ; 0052ef1c
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052ef23
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052ef28
    MOV EDI,dword ptr [ESP + 0x48ec]    ; 0052ef2b
    CMP EDI,0x5                         ; 0052ef32
    JGE 0x0052ef4e                      ; 0052ef35
        ;   XREF to: 0052ef4e (CONDITIONAL_JUMP)  ; LAB_0052ef4e
    PUSH 0x5cf576                       ; 0052ef37 | = "Error parsing setIniInt command parms"
    PUSH 0x1ed6810                      ; 0052ef3c | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052ef41
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052ef46
    JMP 0x00529bec                      ; 0052ef49
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDX,dword ptr [ESP + 0x47f8]    ; 0052ef4e
        ;   Label: LAB_0052ef4e
    LEA EAX,[ESP + 0x154c]              ; 0052ef55
    ADD EDX,EDI                         ; 0052ef5c
    PUSH EAX                            ; 0052ef5e
    MOV dword ptr [ESP + 0x47fc],EDX    ; 0052ef5f
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052ef66
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    MOV ECX,dword ptr [0x01ed6808]      ; 0052ef6b | DAT_01ed6808
    ADD ESP,0x4                         ; 0052ef71
    TEST ECX,ECX                        ; 0052ef74
    JNZ 0x00529b1b                      ; 0052ef76
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH 0x5cf59c                       ; 0052ef7c | DAT_005cf59c
    PUSH 0x5cf5a1                       ; 0052ef81 | = "system\\bw3.ini"
    LEA EAX,[ESP + 0x3c]                ; 0052ef86
    PUSH EAX                            ; 0052ef8a
    CALL engine_ini.cpp_FUN_004d8a20    ; 0052ef8b
        ;   XREF to: 004d8a20 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_FUN_004d8a20(CIniFile * this_ptr, char * filename, char * section)
    ADD ESP,0xc                         ; 0052ef90
    MOV ESI,dword ptr [ESP + 0x48e8]    ; 0052ef93
    PUSH ESI                            ; 0052ef9a
    LEA EAX,[ESP + 0x1550]              ; 0052ef9b
    PUSH EAX                            ; 0052efa2
    LEA EAX,[ESP + 0x3c]                ; 0052efa3
    PUSH EAX                            ; 0052efa7
    CALL engine_ini.cpp_FUN_004d8c90    ; 0052efa8
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c90()
    ADD ESP,0xc                         ; 0052efad
    PUSH 0x0                            ; 0052efb0
    LEA EAX,[ESP + 0x38]                ; 0052efb2
    PUSH EAX                            ; 0052efb6
    CALL engine_ini.cpp_CIniFile_dtor_FUN_004d8a50 ; 0052efb7
        ;   XREF to: 004d8a50 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_CIniFile_dtor_FUN_004d8a50(CIniFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0052efbc
    JMP 0x00529b1b                      ; 0052efbf
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0x8                         ; 0052efc4
        ;   Label: LAB_0052efc4
    PUSH ESI                            ; 0052efc7
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052efc8
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052efcd
    LEA EDX,[ESP + 0x48f8]              ; 0052efd0
    PUSH EDX                            ; 0052efd7
    LEA EDX,[ESP + 0x48f8]              ; 0052efd8
    PUSH EDX                            ; 0052efdf
    LEA EDX,[ESP + 0x48f8]              ; 0052efe0
    PUSH EDX                            ; 0052efe7
    LEA EDX,[ESP + 0x16e8]              ; 0052efe8
    PUSH EDX                            ; 0052efef
    PUSH 0x5cf5b9                       ; 0052eff0 | = "(%[^,], %d, %f)%n"
    MOV EDI,0xffffffff                  ; 0052eff5
    PUSH EAX                            ; 0052effa
    MOV dword ptr [ESP + 0x4810],EAX    ; 0052effb
    MOV dword ptr [ESP + 0x4910],EDI    ; 0052f002
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052f009
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x18                        ; 0052f00e
    MOV EAX,dword ptr [ESP + 0x48f8]    ; 0052f011
    CMP EAX,0x4                         ; 0052f018
    JGE 0x0052f034                      ; 0052f01b
        ;   XREF to: 0052f034 (CONDITIONAL_JUMP)  ; LAB_0052f034
    PUSH 0x5cf5cb                       ; 0052f01d | = "Error parsing setMouth parms"
    PUSH 0x1ed6810                      ; 0052f022 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052f027
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052f02c
    JMP 0x00529bec                      ; 0052f02f
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDX,dword ptr [ESP + 0x47f8]    ; 0052f034
        ;   Label: LAB_0052f034
    ADD EDX,EAX                         ; 0052f03b
    LEA EAX,[ESP + 0x16dc]              ; 0052f03d
    PUSH EAX                            ; 0052f044
    MOV dword ptr [ESP + 0x47fc],EDX    ; 0052f045
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052f04c
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052f051
    PUSH 0x7e2cb4                       ; 0052f054 | g_CCharacterClassInfo
    MOV ECX,dword ptr [0x007e2cec]      ; 0052f059 | g_CCharacterClassInfo.name_hash
    PUSH ECX                            ; 0052f05f
    LEA EAX,[ESP + 0x16e4]              ; 0052f060
    PUSH EAX                            ; 0052f067
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052f068
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    ADD ESP,0xc                         ; 0052f06d
    TEST EAX,EAX                        ; 0052f070
    JNZ 0x0052f086                      ; 0052f072
        ;   XREF to: 0052f086 (CONDITIONAL_JUMP)  ; LAB_0052f086
    CMP dword ptr [0x01ed701c],0x0      ; 0052f074 | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052f07b
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052f081
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    CMP dword ptr [0x01ed6808],0x0      ; 0052f086 | DAT_01ed6808
        ;   Label: LAB_0052f086
    JNZ 0x00529b1b                      ; 0052f08d
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EDI,dword ptr [ESP + 0x48f0]    ; 0052f093
    PUSH dword ptr [ESP + 0x48f4]       ; 0052f09a
    PUSH EDI                            ; 0052f0a1
    PUSH EAX                            ; 0052f0a2
    CALL core_charactr.cpp_FUN_0042d8a0 ; 0052f0a3
        ;   XREF to: 0042d8a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d8a0()
    ADD ESP,0xc                         ; 0052f0a8
    JMP 0x00529b1b                      ; 0052f0ab
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0x12                        ; 0052f0b0
        ;   Label: LAB_0052f0b0
    PUSH ESI                            ; 0052f0b3
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052f0b4
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    MOV EDX,0xffffffff                  ; 0052f0b9
    ADD ESP,0x4                         ; 0052f0be
    MOV dword ptr [ESP + 0x48fc],EDX    ; 0052f0c1
    LEA EDX,[ESP + 0x48fc]              ; 0052f0c8
    PUSH EDX                            ; 0052f0cf
    PUSH EDX                            ; 0052f0d0
    PUSH 0x5cf5fb                       ; 0052f0d1 | = " (%n %n"
    PUSH EAX                            ; 0052f0d6
    MOV dword ptr [ESP + 0x4808],EAX    ; 0052f0d7
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052f0de
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 0052f0e3
    MOV ECX,dword ptr [ESP + 0x48fc]    ; 0052f0e6
    CMP ECX,0x1                         ; 0052f0ed
    JL 0x0052f13c                       ; 0052f0f0
        ;   XREF to: 0052f13c (CONDITIONAL_JUMP)  ; LAB_0052f13c
    MOV ESI,dword ptr [ESP + 0x47f8]    ; 0052f0f2
    MOV EDI,0xbf800000                  ; 0052f0f9
    ADD ESI,ECX                         ; 0052f0fe
    MOV dword ptr [ESP + 0x4900],EDI    ; 0052f100
    MOV dword ptr [ESP + 0x47f8],ESI    ; 0052f107
    CMP byte ptr [ESI],0x29             ; 0052f10e
    JNZ 0x0052f153                      ; 0052f111
        ;   XREF to: 0052f153 (CONDITIONAL_JUMP)  ; LAB_0052f153
    LEA EDI,[ESI + 0x1]                 ; 0052f113
    MOV dword ptr [ESP + 0x47f8],EDI    ; 0052f116
    CMP dword ptr [0x01ed6808],0x0      ; 0052f11d | DAT_01ed6808
        ;   Label: LAB_0052f11d
    JNZ 0x00529b1b                      ; 0052f124
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EAX,dword ptr [ESP + 0x4900]    ; 0052f12a
    MOV dword ptr [EBX + 0x450],EAX     ; 0052f131
    JMP 0x00529b1b                      ; 0052f137
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH 0x5cf603                       ; 0052f13c | = "Error parsing setSayTimeOverride para..."
        ;   Label: LAB_0052f13c
    PUSH 0x1ed6810                      ; 0052f141 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052f146
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052f14b
    JMP 0x00529bec                      ; 0052f14e
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV dword ptr [ESP + 0x48fc],0xffffffff ; 0052f153
        ;   Label: LAB_0052f153
    LEA EAX,[ESP + 0x48fc]              ; 0052f15e
    PUSH EAX                            ; 0052f165
    LEA EAX,[ESP + 0x4904]              ; 0052f166
    PUSH EAX                            ; 0052f16d
    PUSH 0x5cf630                       ; 0052f16e | = "%f )%n"
    PUSH ESI                            ; 0052f173
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052f174
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 0052f179
    MOV ECX,dword ptr [ESP + 0x48fc]    ; 0052f17c
    CMP ECX,0x1                         ; 0052f183
    JL 0x0052f191                       ; 0052f186
        ;   XREF to: 0052f191 (CONDITIONAL_JUMP)  ; LAB_0052f191
    ADD dword ptr [ESP + 0x47f8],ECX    ; 0052f188
    JMP 0x0052f11d                      ; 0052f18f
        ;   XREF to: 0052f11d (UNCONDITIONAL_JUMP)  ; LAB_0052f11d
    PUSH 0x5cf637                       ; 0052f191 | = "Error parsing setSayTimeOverride para..."
        ;   Label: LAB_0052f191
    PUSH 0x1ed6810                      ; 0052f196 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052f19b
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052f1a0
    JMP 0x00529bec                      ; 0052f1a3
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0xc                         ; 0052f1a8
        ;   Label: LAB_0052f1a8
    PUSH ESI                            ; 0052f1ab
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052f1ac
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052f1b1
    PUSH 0x64                           ; 0052f1b4
    MOV dword ptr [ESP + 0x47fc],EAX    ; 0052f1b6
    LEA EAX,[ESP + 0x3d8c]              ; 0052f1bd
    PUSH EAX                            ; 0052f1c4
    LEA EAX,[ESP + 0x4800]              ; 0052f1c5
    PUSH EAX                            ; 0052f1cc
    CALL core_script.cpp_parseArgument_FUN_005288c0 ; 0052f1cd
        ;   XREF to: 005288c0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005288c0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0052f1d2
    TEST EAX,EAX                        ; 0052f1d5
    JZ 0x0052f1ff                       ; 0052f1d7
        ;   XREF to: 0052f1ff (CONDITIONAL_JUMP)  ; LAB_0052f1ff
    MOV EDI,0x1ed6810                   ; 0052f1d9
        ;   Label: LAB_0052f1d9
    MOV ESI,EAX                         ; 0052f1de
    PUSH EDI                            ; 0052f1e0 | DAT_01ed6810
    MOV AL,byte ptr [ESI]               ; 0052f1e1
        ;   Label: LAB_0052f1e1
    MOV byte ptr [EDI],AL               ; 0052f1e3 | DAT_01ed6810 | DAT_01ed6812
    CMP AL,0x0                          ; 0052f1e5
    JZ 0x0052f1f9                       ; 0052f1e7
        ;   XREF to: 0052f1f9 (CONDITIONAL_JUMP)  ; LAB_0052f1f9
    MOV AL,byte ptr [ESI + 0x1]         ; 0052f1e9
    ADD ESI,0x2                         ; 0052f1ec
    MOV byte ptr [EDI + 0x1],AL         ; 0052f1ef | DAT_01ed6811 | DAT_01ed6813
    ADD EDI,0x2                         ; 0052f1f2
    CMP AL,0x0                          ; 0052f1f5
    JNZ 0x0052f1e1                      ; 0052f1f7
        ;   XREF to: 0052f1e1 (CONDITIONAL_JUMP)  ; LAB_0052f1e1
    POP EDI                             ; 0052f1f9
        ;   Label: LAB_0052f1f9
    JMP 0x00529bec                      ; 0052f1fa
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EAX,[ESP + 0x3d88]              ; 0052f1ff
        ;   Label: LAB_0052f1ff
    PUSH EAX                            ; 0052f206
    PUSH EBX                            ; 0052f207
    CALL core_script.cpp_FUN_005303b0   ; 0052f208
        ;   XREF to: 005303b0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_FUN_005303b0(CScript * this_ptr, char * label_name)
    ADD ESP,0x8                         ; 0052f20d
    TEST EAX,EAX                        ; 0052f210
    JL 0x0052f22c                       ; 0052f212
        ;   XREF to: 0052f22c (CONDITIONAL_JUMP)  ; LAB_0052f22c
    CMP dword ptr [0x01ed6808],0x0      ; 0052f214 | DAT_01ed6808
    JNZ 0x00529b1b                      ; 0052f21b
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV dword ptr [EBX + 0x454],EAX     ; 0052f221
    JMP 0x00529b1b                      ; 0052f227
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EAX,[ESP + 0x3d88]              ; 0052f22c
        ;   Label: LAB_0052f22c
    PUSH EAX                            ; 0052f233
    PUSH 0x5cf671                       ; 0052f234 | = "Undefined label '%s'"
    PUSH 0x1ed6810                      ; 0052f239 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052f23e
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 0052f243
    JMP 0x00529bec                      ; 0052f246
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0xa                         ; 0052f24b
        ;   Label: LAB_0052f24b
    PUSH ESI                            ; 0052f24e
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052f24f
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052f254
    PUSH 0x64                           ; 0052f257
    MOV dword ptr [ESP + 0x47fc],EAX    ; 0052f259
    LEA EAX,[ESP + 0x4688]              ; 0052f260
    PUSH EAX                            ; 0052f267
    LEA EAX,[ESP + 0x4800]              ; 0052f268
    PUSH EAX                            ; 0052f26f
    CALL core_script.cpp_parseArgument_FUN_005288c0 ; 0052f270
        ;   XREF to: 005288c0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005288c0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0052f275
    TEST EAX,EAX                        ; 0052f278
    JNZ 0x0052f1d9                      ; 0052f27a
        ;   XREF to: 0052f1d9 (CONDITIONAL_JUMP)  ; LAB_0052f1d9
    CMP byte ptr [ESP + 0x4684],0x0     ; 0052f280
    JNZ 0x0052f2bb                      ; 0052f288
        ;   XREF to: 0052f2bb (CONDITIONAL_JUMP)  ; LAB_0052f2bb
    MOV dword ptr [EBX + 0x4],EAX       ; 0052f28a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0052f28d
        ;   Label: LAB_0052f28d
    MOV dword ptr [EBX + 0x8],EAX       ; 0052f290
    CMP dword ptr [EBX + 0x14],0x0      ; 0052f293
    JNZ 0x00529b1b                      ; 0052f297
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EDX,dword ptr [EBX + 0x4]       ; 0052f29d
    CMP EDX,dword ptr [EBX + 0xc]       ; 0052f2a0
    JZ 0x00529b1b                       ; 0052f2a3
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EAX,dword ptr [EBX + 0x4]       ; 0052f2a9
    MOV dword ptr [EBX + 0x10],0x1      ; 0052f2ac
    MOV dword ptr [EBX + 0xc],EAX       ; 0052f2b3
    JMP 0x00529b1b                      ; 0052f2b6
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH 0x7e2cb4                       ; 0052f2bb | g_CCharacterClassInfo
        ;   Label: LAB_0052f2bb
    MOV ECX,dword ptr [0x007e2cec]      ; 0052f2c0 | g_CCharacterClassInfo.name_hash
    PUSH ECX                            ; 0052f2c6
    LEA EAX,[ESP + 0x468c]              ; 0052f2c7
    PUSH EAX                            ; 0052f2ce
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052f2cf
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    ADD ESP,0xc                         ; 0052f2d4
    MOV dword ptr [EBX + 0x4],EAX       ; 0052f2d7
    TEST EAX,EAX                        ; 0052f2da
    JNZ 0x0052f28d                      ; 0052f2dc
        ;   XREF to: 0052f28d (CONDITIONAL_JUMP)  ; LAB_0052f28d
    CMP dword ptr [0x01ed701c],0x0      ; 0052f2de | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052f2e5
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052f2eb
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0xd                         ; 0052f2f0
        ;   Label: LAB_0052f2f0
    PUSH ESI                            ; 0052f2f3
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052f2f4
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052f2f9
    PUSH 0x64                           ; 0052f2fc
    MOV dword ptr [ESP + 0x47fc],EAX    ; 0052f2fe
    LEA EAX,[ESP + 0x42a0]              ; 0052f305
    PUSH EAX                            ; 0052f30c
    LEA EAX,[ESP + 0x4800]              ; 0052f30d
    PUSH EAX                            ; 0052f314
    CALL core_script.cpp_parseArgument_FUN_005288c0 ; 0052f315
        ;   XREF to: 005288c0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005288c0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0052f31a
    TEST EAX,EAX                        ; 0052f31d
    JZ 0x0052f347                       ; 0052f31f
        ;   XREF to: 0052f347 (CONDITIONAL_JUMP)  ; LAB_0052f347
    MOV EDI,0x1ed6810                   ; 0052f321
    MOV ESI,EAX                         ; 0052f326
    PUSH EDI                            ; 0052f328 | DAT_01ed6810
    MOV AL,byte ptr [ESI]               ; 0052f329
        ;   Label: LAB_0052f329
    MOV byte ptr [EDI],AL               ; 0052f32b | DAT_01ed6810 | DAT_01ed6812
    CMP AL,0x0                          ; 0052f32d
    JZ 0x0052f341                       ; 0052f32f
        ;   XREF to: 0052f341 (CONDITIONAL_JUMP)  ; LAB_0052f341
    MOV AL,byte ptr [ESI + 0x1]         ; 0052f331
    ADD ESI,0x2                         ; 0052f334
    MOV byte ptr [EDI + 0x1],AL         ; 0052f337 | DAT_01ed6811 | DAT_01ed6813
    ADD EDI,0x2                         ; 0052f33a
    CMP AL,0x0                          ; 0052f33d
    JNZ 0x0052f329                      ; 0052f33f
        ;   XREF to: 0052f329 (CONDITIONAL_JUMP)  ; LAB_0052f329
    POP EDI                             ; 0052f341
        ;   Label: LAB_0052f341
    JMP 0x00529bec                      ; 0052f342
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EAX,[ESP + 0x28]                ; 0052f347
        ;   Label: LAB_0052f347
    PUSH EAX                            ; 0052f34b
    PUSH 0x5cf69f                       ; 0052f34c | DAT_005cf69f
    LEA EAX,[ESP + 0x42a4]              ; 0052f351
    MOV ECX,0xbf800000                  ; 0052f358
    PUSH EAX                            ; 0052f35d
    MOV dword ptr [ESP + 0x34],ECX      ; 0052f35e
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052f362
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0xc                         ; 0052f367
    FLDZ                                ; 0052f36a
    FLD float ptr [ESP + 0x28]          ; 0052f36c
    FSTP double ptr [ESP + 0x18]        ; 0052f370
    FCOMP double ptr [ESP + 0x18]       ; 0052f374
    FNSTSW AX                           ; 0052f378
    SAHF                                ; 0052f37a
    JNC 0x0052f3c4                      ; 0052f37b
        ;   XREF to: 0052f3c4 (CONDITIONAL_JUMP)  ; LAB_0052f3c4
    FLD double ptr [ESP + 0x18]         ; 0052f37d
    FCOMP double ptr [0x005cfa40]       ; 0052f381 | DAT_005cfa40
    FNSTSW AX                           ; 0052f387
    SAHF                                ; 0052f389
    JA 0x0052f3c4                       ; 0052f38a
        ;   XREF to: 0052f3c4 (CONDITIONAL_JUMP)  ; LAB_0052f3c4
    MOV ESI,dword ptr [0x01ed6808]      ; 0052f38c | DAT_01ed6808
    TEST ESI,ESI                        ; 0052f392
    JNZ 0x00529b1b                      ; 0052f394
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    CMP dword ptr [ESP + 0x28],0x3f800000 ; 0052f39a
    JNZ 0x0052f3e3                      ; 0052f3a2
        ;   XREF to: 0052f3e3 (CONDITIONAL_JUMP)  ; LAB_0052f3e3
    MOV EAX,[0x005fe9dc]                ; 0052f3a4 | g_CGamePtr
    MOV dword ptr [EAX + 0x288],ESI     ; 0052f3a9 | g_CGameInstance.field648_0x288
    MOV EDX,dword ptr [0x005fe9dc]      ; 0052f3af | g_CGamePtr
        ;   Label: LAB_0052f3af
    MOV EAX,dword ptr [ESP + 0x28]      ; 0052f3b5
    MOV dword ptr [EDX + 0x210],EAX     ; 0052f3b9 | g_CGameInstance.field528_0x210
    JMP 0x00529b1b                      ; 0052f3bf
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EAX,[ESP + 0x429c]              ; 0052f3c4
        ;   Label: LAB_0052f3c4
    PUSH EAX                            ; 0052f3cb
    PUSH 0x5cf6a2                       ; 0052f3cc | = "Invalid time factor %s"
    PUSH 0x1ed6810                      ; 0052f3d1 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052f3d6
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 0052f3db
    JMP 0x00529bec                      ; 0052f3de
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EAX,[0x005fe9dc]                ; 0052f3e3 | g_CGamePtr
        ;   Label: LAB_0052f3e3
    MOV dword ptr [EAX + 0x288],0x2     ; 0052f3e8 | g_CGameInstance.field648_0x288
    JMP 0x0052f3af                      ; 0052f3f2
        ;   XREF to: 0052f3af (UNCONDITIONAL_JUMP)  ; LAB_0052f3af
    ADD ESI,0x9                         ; 0052f3f4
        ;   Label: LAB_0052f3f4
    PUSH ESI                            ; 0052f3f7
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052f3f8
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    MOV EDX,0xffffffff                  ; 0052f3fd
    ADD ESP,0x4                         ; 0052f402
    MOV dword ptr [ESP + 0x4908],EDX    ; 0052f405
    LEA EDX,[ESP + 0x4908]              ; 0052f40c
    PUSH EDX                            ; 0052f413
    LEA EDX,[ESP + 0x2748]              ; 0052f414
    PUSH EDX                            ; 0052f41b
    PUSH 0x5cf6c3                       ; 0052f41c | = "(%[^,)]%n"
    PUSH EAX                            ; 0052f421
    MOV dword ptr [ESP + 0x4808],EAX    ; 0052f422
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052f429
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 0052f42e
    MOV ECX,dword ptr [ESP + 0x4908]    ; 0052f431
    CMP ECX,0x2                         ; 0052f438
    JGE 0x0052f454                      ; 0052f43b
        ;   XREF to: 0052f454 (CONDITIONAL_JUMP)  ; LAB_0052f454
    PUSH 0x5cf6cd                       ; 0052f43d | = "Error parsing setVictim command parms"
    PUSH 0x1ed6810                      ; 0052f442 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052f447
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052f44c
    JMP 0x00529bec                      ; 0052f44f
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV ESI,dword ptr [ESP + 0x47f8]    ; 0052f454
        ;   Label: LAB_0052f454
    LEA EAX,[ESP + 0x2744]              ; 0052f45b
    ADD ESI,ECX                         ; 0052f462
    PUSH EAX                            ; 0052f464
    MOV dword ptr [ESP + 0x47fc],ESI    ; 0052f465
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052f46c
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052f471
    PUSH 0x1c5bc10                      ; 0052f474
    MOV EDI,dword ptr [0x01c5bc48]      ; 0052f479 | g_CEnemyClassInfo.name_hash
    PUSH EDI                            ; 0052f47f
    LEA EAX,[ESP + 0x274c]              ; 0052f480
    PUSH EAX                            ; 0052f487
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052f488
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    ADD ESP,0xc                         ; 0052f48d
    MOV ESI,EAX                         ; 0052f490
    TEST EAX,EAX                        ; 0052f492
    JNZ 0x0052f4a8                      ; 0052f494
        ;   XREF to: 0052f4a8 (CONDITIONAL_JUMP)  ; LAB_0052f4a8
    CMP dword ptr [0x01ed701c],0x0      ; 0052f496 | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052f49d
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052f4a3
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDX,dword ptr [ESP + 0x47f8]    ; 0052f4a8
        ;   Label: LAB_0052f4a8
    MOV CL,byte ptr [EDX]               ; 0052f4af
    XOR EAX,EAX                         ; 0052f4b1
    CMP CL,0x2c                         ; 0052f4b3
    JZ 0x0052f4ef                       ; 0052f4b6
        ;   XREF to: 0052f4ef (CONDITIONAL_JUMP)  ; LAB_0052f4ef
    MOV EDX,dword ptr [ESP + 0x47f8]    ; 0052f4b8
        ;   Label: LAB_0052f4b8
    CMP byte ptr [EDX],0x29             ; 0052f4bf
    JNZ 0x0052f5b3                      ; 0052f4c2
        ;   XREF to: 0052f5b3 (CONDITIONAL_JUMP)  ; LAB_0052f5b3
    LEA ECX,[EDX + 0x1]                 ; 0052f4c8
    MOV EDI,dword ptr [0x01ed6808]      ; 0052f4cb | DAT_01ed6808
    MOV dword ptr [ESP + 0x47f8],ECX    ; 0052f4d1
    TEST EDI,EDI                        ; 0052f4d8
    JNZ 0x00529b1b                      ; 0052f4da
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH EAX                            ; 0052f4e0
    PUSH ESI                            ; 0052f4e1
    CALL core_enemy.cpp_FUN_00489b60    ; 0052f4e2
        ;   XREF to: 00489b60 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_FUN_00489b60(CEnemy * this_ptr, CDemonActor * victim)
    ADD ESP,0x8                         ; 0052f4e7
    JMP 0x00529b1b                      ; 0052f4ea
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV dword ptr [ESP + 0x4908],0xffffffff ; 0052f4ef
        ;   Label: LAB_0052f4ef
    LEA EAX,[ESP + 0x4908]              ; 0052f4fa
    PUSH EAX                            ; 0052f501
    LEA EAX,[ESP + 0x28d8]              ; 0052f502
    PUSH EAX                            ; 0052f509
    PUSH 0x5cf6f3                       ; 0052f50a | = ", %[^)]%n"
    PUSH EDX                            ; 0052f50f
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052f510
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 0052f515
    MOV ECX,dword ptr [ESP + 0x4908]    ; 0052f518
    CMP ECX,0x3                         ; 0052f51f
    JGE 0x0052f53b                      ; 0052f522
        ;   XREF to: 0052f53b (CONDITIONAL_JUMP)  ; LAB_0052f53b
    PUSH 0x5cf6fd                       ; 0052f524 | = "Error parsing setVictim command parms"
    PUSH 0x1ed6810                      ; 0052f529 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052f52e
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052f533
    JMP 0x00529bec                      ; 0052f536
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDI,dword ptr [ESP + 0x47f8]    ; 0052f53b
        ;   Label: LAB_0052f53b
    LEA EAX,[ESP + 0x28d4]              ; 0052f542
    ADD EDI,ECX                         ; 0052f549
    PUSH EAX                            ; 0052f54b
    MOV dword ptr [ESP + 0x47fc],EDI    ; 0052f54c
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052f553
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052f558
    PUSH 0x5cf723                       ; 0052f55b | = "disable"
    LEA EAX,[ESP + 0x28d8]              ; 0052f560
    PUSH EAX                            ; 0052f567
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0052f568
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0052f56d
    TEST EAX,EAX                        ; 0052f570
    JNZ 0x0052f57e                      ; 0052f572
        ;   XREF to: 0052f57e (CONDITIONAL_JUMP)  ; LAB_0052f57e
    MOV EAX,[0x005e39c0]                ; 0052f574 | DAT_005e39c0
    JMP 0x0052f4b8                      ; 0052f579
        ;   XREF to: 0052f4b8 (UNCONDITIONAL_JUMP)  ; LAB_0052f4b8
    PUSH 0x7e2cb4                       ; 0052f57e | g_CCharacterClassInfo
        ;   Label: LAB_0052f57e
    MOV EAX,[0x007e2cec]                ; 0052f583 | g_CCharacterClassInfo.name_hash
    PUSH EAX                            ; 0052f588
    LEA EAX,[ESP + 0x28dc]              ; 0052f589
    PUSH EAX                            ; 0052f590
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052f591
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    ADD ESP,0xc                         ; 0052f596
    TEST EAX,EAX                        ; 0052f599
    JNZ 0x0052f4b8                      ; 0052f59b
        ;   XREF to: 0052f4b8 (CONDITIONAL_JUMP)  ; LAB_0052f4b8
    CMP dword ptr [0x01ed701c],0x0      ; 0052f5a1 | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052f5a8
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052f5ae
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    PUSH 0x5cf72b                       ; 0052f5b3 | = "Missing closing ')' in setVictim command"
        ;   Label: LAB_0052f5b3
    PUSH 0x1ed6810                      ; 0052f5b8 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052f5bd
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052f5c2
    JMP 0x00529bec                      ; 0052f5c5
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0xe                         ; 0052f5ca
        ;   Label: LAB_0052f5ca
    PUSH ESI                            ; 0052f5cd
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052f5ce
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    MOV EDX,0xffffffff                  ; 0052f5d3
    ADD ESP,0x4                         ; 0052f5d8
    MOV dword ptr [ESP + 0x4910],EDX    ; 0052f5db
    LEA EDX,[ESP + 0x4910]              ; 0052f5e2
    PUSH EDX                            ; 0052f5e9
    LEA EDX,[ESP + 0x4910]              ; 0052f5ea
    PUSH EDX                            ; 0052f5f1
    LEA EDX,[ESP + 0x3944]              ; 0052f5f2
    PUSH EDX                            ; 0052f5f9
    PUSH 0x5cf763                       ; 0052f5fa | = "(%[^,], %f)%n"
    PUSH EAX                            ; 0052f5ff
    MOV dword ptr [ESP + 0x480c],EAX    ; 0052f600
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052f607
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052f60c
    MOV ECX,dword ptr [ESP + 0x4910]    ; 0052f60f
    CMP ECX,0x3                         ; 0052f616
    JGE 0x0052f632                      ; 0052f619
        ;   XREF to: 0052f632 (CONDITIONAL_JUMP)  ; LAB_0052f632
    PUSH 0x5cf771                       ; 0052f61b | = "Error parsing setWalkTimeout parms"
    PUSH 0x1ed6810                      ; 0052f620 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052f625
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052f62a
    JMP 0x00529bec                      ; 0052f62d
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV ESI,dword ptr [ESP + 0x47f8]    ; 0052f632
        ;   Label: LAB_0052f632
    LEA EAX,[ESP + 0x393c]              ; 0052f639
    ADD ESI,ECX                         ; 0052f640
    PUSH EAX                            ; 0052f642
    MOV dword ptr [ESP + 0x47fc],ESI    ; 0052f643
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052f64a
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052f64f
    PUSH 0x7e2cb4                       ; 0052f652 | g_CCharacterClassInfo
    MOV EDI,dword ptr [0x007e2cec]      ; 0052f657 | g_CCharacterClassInfo.name_hash
    PUSH EDI                            ; 0052f65d
    LEA EAX,[ESP + 0x3944]              ; 0052f65e
    PUSH EAX                            ; 0052f665
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052f666
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    ADD ESP,0xc                         ; 0052f66b
    TEST EAX,EAX                        ; 0052f66e
    JNZ 0x0052f684                      ; 0052f670
        ;   XREF to: 0052f684 (CONDITIONAL_JUMP)  ; LAB_0052f684
    CMP dword ptr [0x01ed701c],0x0      ; 0052f672 | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052f679
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052f67f
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    CMP dword ptr [0x01ed6808],0x0      ; 0052f684 | DAT_01ed6808
        ;   Label: LAB_0052f684
    JNZ 0x00529b1b                      ; 0052f68b
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH dword ptr [ESP + 0x490c]       ; 0052f691
    MOV EDX,dword ptr [EAX + 0x154]     ; 0052f698
    PUSH EAX                            ; 0052f69e
    CALL dword ptr [EDX + 0x138]        ; 0052f69f
    ADD ESP,0x8                         ; 0052f6a5
    JMP 0x00529b1b                      ; 0052f6a8
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0xa                         ; 0052f6ad
        ;   Label: LAB_0052f6ad
    PUSH ESI                            ; 0052f6b0
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052f6b1
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052f6b6
    LEA EDX,[ESP + 0x4914]              ; 0052f6b9
    PUSH EDX                            ; 0052f6c0
    LEA EDX,[ESP + 0x2108]              ; 0052f6c1
    PUSH EDX                            ; 0052f6c8
    LEA EDX,[ESP + 0x24f4]              ; 0052f6c9
    PUSH EDX                            ; 0052f6d0
    PUSH 0x5cf79f                       ; 0052f6d1 | = "(%[^,], %[^)])%n"
    MOV ESI,0xffffffff                  ; 0052f6d6
    PUSH EAX                            ; 0052f6db
    MOV dword ptr [ESP + 0x480c],EAX    ; 0052f6dc
    MOV dword ptr [ESP + 0x4928],ESI    ; 0052f6e3
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052f6ea
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052f6ef
    MOV EDI,dword ptr [ESP + 0x4914]    ; 0052f6f2
    CMP EDI,0x5                         ; 0052f6f9
    JGE 0x0052f715                      ; 0052f6fc
        ;   XREF to: 0052f715 (CONDITIONAL_JUMP)  ; LAB_0052f715
    PUSH 0x5cf7b0                       ; 0052f6fe | = "Error snaping turnToFace command parms"
    PUSH 0x1ed6810                      ; 0052f703 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052f708
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052f70d
    JMP 0x00529bec                      ; 0052f710
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDX,dword ptr [ESP + 0x47f8]    ; 0052f715
        ;   Label: LAB_0052f715
    LEA EAX,[ESP + 0x24ec]              ; 0052f71c
    ADD EDX,EDI                         ; 0052f723
    PUSH EAX                            ; 0052f725
    MOV dword ptr [ESP + 0x47fc],EDX    ; 0052f726
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052f72d
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052f732
    LEA EAX,[ESP + 0x2104]              ; 0052f735
    PUSH EAX                            ; 0052f73c
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052f73d
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052f742
    PUSH 0x7df978                       ; 0052f745 | g_CDemonActorClassInfo
    MOV ECX,dword ptr [0x007df9b0]      ; 0052f74a | g_CDemonActorClassInfo.name_hash
    PUSH ECX                            ; 0052f750
    LEA EAX,[ESP + 0x24f4]              ; 0052f751
    PUSH EAX                            ; 0052f758
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052f759
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    MOV dword ptr [ESP + 0x4924],EAX    ; 0052f75e
    ADD ESP,0xc                         ; 0052f765
    TEST EAX,EAX                        ; 0052f768
    JNZ 0x0052f77e                      ; 0052f76a
        ;   XREF to: 0052f77e (CONDITIONAL_JUMP)  ; LAB_0052f77e
    CMP dword ptr [0x01ed701c],0x0      ; 0052f76c | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052f773
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052f779
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    PUSH 0x7df978                       ; 0052f77e | g_CDemonActorClassInfo
        ;   Label: LAB_0052f77e
    MOV EDI,dword ptr [0x007df9b0]      ; 0052f783 | g_CDemonActorClassInfo.name_hash
    PUSH EDI                            ; 0052f789
    LEA EAX,[ESP + 0x210c]              ; 0052f78a
    PUSH EAX                            ; 0052f791
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052f792
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    ADD ESP,0xc                         ; 0052f797
    TEST EAX,EAX                        ; 0052f79a
    JNZ 0x0052f7b0                      ; 0052f79c
        ;   XREF to: 0052f7b0 (CONDITIONAL_JUMP)  ; LAB_0052f7b0
    CMP dword ptr [0x01ed701c],0x0      ; 0052f79e | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052f7a5
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052f7ab
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    CMP dword ptr [0x01ed6808],0x0      ; 0052f7b0 | DAT_01ed6808
        ;   Label: LAB_0052f7b0
    JNZ 0x00529b1b                      ; 0052f7b7
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EDX,dword ptr [ESP + 0x4918]    ; 0052f7bd
    ADD EDX,0x20                        ; 0052f7c4
    PUSH EDX                            ; 0052f7c7
    ADD EAX,0x20                        ; 0052f7c8
    PUSH EAX                            ; 0052f7cb
    LEA ESI,[ESP + 0x477c]              ; 0052f7cc
    LEA EDI,[ESP + 0x4794]              ; 0052f7d3
    CALL core_bodypart.cpp_FUN_00416c10 ; 0052f7da
        ;   XREF to: 00416c10 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_00416c10()
    LEA ESI,[ESP + 0x477c]              ; 0052f7df
    ADD ESP,0x8                         ; 0052f7e6
    LEA EAX,[ESP + 0x478c]              ; 0052f7e9
    MOVSD ES:EDI,ESI                    ; 0052f7f0
    MOVSD ES:EDI,ESI                    ; 0052f7f1
    MOVSD ES:EDI,ESI                    ; 0052f7f2
    PUSH EAX                            ; 0052f7f3
    LEA ESI,[ESP + 0x47a8]              ; 0052f7f4
    LEA EDI,[ESP + 0x47c0]              ; 0052f7fb
    CALL core_vecdir.cpp_FUN_00576250   ; 0052f802
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_00576250()
    LEA ESI,[ESP + 0x47a8]              ; 0052f807
    ADD ESP,0x4                         ; 0052f80e
    MOVSD ES:EDI,ESI                    ; 0052f811
    MOVSD ES:EDI,ESI                    ; 0052f812
    MOVSD ES:EDI,ESI                    ; 0052f813
    MOV EDX,dword ptr [ESP + 0x4918]    ; 0052f814
    MOV EAX,dword ptr [ESP + 0x47c0]    ; 0052f81b
    PUSH EDX                            ; 0052f822
    MOV dword ptr [EDX + 0x34],EAX      ; 0052f823
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 0052f826
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0052f82b
    JMP 0x00529b1b                      ; 0052f82e
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0x8                         ; 0052f833
        ;   Label: LAB_0052f833
    PUSH ESI                            ; 0052f836
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052f837
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052f83c
    PUSH 0x1f4                          ; 0052f83f
    MOV dword ptr [ESP + 0x47fc],EAX    ; 0052f844
    LEA EAX,[ESP + 0x634]               ; 0052f84b
    PUSH EAX                            ; 0052f852
    LEA EAX,[ESP + 0x4800]              ; 0052f853
    PUSH EAX                            ; 0052f85a
    CALL core_script.cpp_parseArgument_FUN_005288c0 ; 0052f85b
        ;   XREF to: 005288c0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005288c0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0052f860
    TEST EAX,EAX                        ; 0052f863
    JZ 0x0052f88d                       ; 0052f865
        ;   XREF to: 0052f88d (CONDITIONAL_JUMP)  ; LAB_0052f88d
    MOV EDI,0x1ed6810                   ; 0052f867
    MOV ESI,EAX                         ; 0052f86c
    PUSH EDI                            ; 0052f86e | DAT_01ed6810
    MOV AL,byte ptr [ESI]               ; 0052f86f
        ;   Label: LAB_0052f86f
    MOV byte ptr [EDI],AL               ; 0052f871 | DAT_01ed6810 | DAT_01ed6812
    CMP AL,0x0                          ; 0052f873
    JZ 0x0052f887                       ; 0052f875
        ;   XREF to: 0052f887 (CONDITIONAL_JUMP)  ; LAB_0052f887
    MOV AL,byte ptr [ESI + 0x1]         ; 0052f877
    ADD ESI,0x2                         ; 0052f87a
    MOV byte ptr [EDI + 0x1],AL         ; 0052f87d | DAT_01ed6811 | DAT_01ed6813
    ADD EDI,0x2                         ; 0052f880
    CMP AL,0x0                          ; 0052f883
    JNZ 0x0052f86f                      ; 0052f885
        ;   XREF to: 0052f86f (CONDITIONAL_JUMP)  ; LAB_0052f86f
    POP EDI                             ; 0052f887
        ;   Label: LAB_0052f887
    JMP 0x00529bec                      ; 0052f888
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV dword ptr [ESP + 0x4920],0xffffffff ; 0052f88d
        ;   Label: LAB_0052f88d
    LEA EAX,[ESP + 0x4920]              ; 0052f898
    PUSH EAX                            ; 0052f89f
    LEA EAX,[ESP + 0x3b98]              ; 0052f8a0
    PUSH EAX                            ; 0052f8a7
    LEA EAX,[ESP + 0x2814]              ; 0052f8a8
    PUSH EAX                            ; 0052f8af
    PUSH 0x5cf7e0                       ; 0052f8b0 | = "%[^,], %[^,], %n"
    LEA EAX,[ESP + 0x640]               ; 0052f8b5
    PUSH EAX                            ; 0052f8bc
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052f8bd
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052f8c2
    CMP dword ptr [ESP + 0x4920],0x5    ; 0052f8c5
    JGE 0x0052f8e6                      ; 0052f8cd
        ;   XREF to: 0052f8e6 (CONDITIONAL_JUMP)  ; LAB_0052f8e6
    PUSH 0x5cf7f1                       ; 0052f8cf | = "Error parsing speaker and wav arguments"
    PUSH 0x1ed6810                      ; 0052f8d4 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052f8d9
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052f8de
    JMP 0x00529bec                      ; 0052f8e1
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EAX,[ESP + 0x280c]              ; 0052f8e6
        ;   Label: LAB_0052f8e6
    PUSH EAX                            ; 0052f8ed
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052f8ee
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052f8f3
    LEA EAX,[ESP + 0x3b94]              ; 0052f8f6
    PUSH EAX                            ; 0052f8fd
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052f8fe
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052f903
    LEA EAX,[ESP + 0x630]               ; 0052f906
    ADD EAX,dword ptr [ESP + 0x4920]    ; 0052f90d
    PUSH EAX                            ; 0052f914
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052f915
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052f91a
    PUSH EAX                            ; 0052f91d
    LEA EAX,[ESP + 0x3b98]              ; 0052f91e
    PUSH EAX                            ; 0052f925
    LEA EAX,[ESP + 0x2814]              ; 0052f926
    PUSH EAX                            ; 0052f92d
    PUSH EBX                            ; 0052f92e
    CALL core_script.cpp_FUN_00530150   ; 0052f92f
        ;   XREF to: 00530150 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00530150()
    MOV dword ptr [ESP + 0x4954],EAX    ; 0052f934
    FLDZ                                ; 0052f93b
    MOV EAX,dword ptr [ESP + 0x4954]    ; 0052f93d
    MOV dword ptr [EBX + 0x4c],EAX      ; 0052f944
    ADD ESP,0x10                        ; 0052f947
    FCOMP float ptr [EBX + 0x4c]        ; 0052f94a
    FNSTSW AX                           ; 0052f94d
    SAHF                                ; 0052f94f
    JA 0x00529bec                       ; 0052f950
        ;   XREF to: 00529bec (CONDITIONAL_JUMP)  ; LAB_00529bec
    JMP 0x00529b1b                      ; 0052f956
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0xc                         ; 0052f95b
        ;   Label: LAB_0052f95b
    PUSH ESI                            ; 0052f95e
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052f95f
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052f964
    PUSH 0xc8                           ; 0052f967
    MOV dword ptr [ESP + 0x47fc],EAX    ; 0052f96c
    LEA EAX,[ESP + 0x3170]              ; 0052f973
    PUSH EAX                            ; 0052f97a
    LEA EAX,[ESP + 0x4800]              ; 0052f97b
    PUSH EAX                            ; 0052f982
    CALL core_script.cpp_parseArgument_FUN_005288c0 ; 0052f983
        ;   XREF to: 005288c0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005288c0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0052f988
    TEST EAX,EAX                        ; 0052f98b
    JZ 0x0052f9b5                       ; 0052f98d
        ;   XREF to: 0052f9b5 (CONDITIONAL_JUMP)  ; LAB_0052f9b5
    MOV EDI,0x1ed6810                   ; 0052f98f
    MOV ESI,EAX                         ; 0052f994
    PUSH EDI                            ; 0052f996 | DAT_01ed6810
    MOV AL,byte ptr [ESI]               ; 0052f997
        ;   Label: LAB_0052f997
    MOV byte ptr [EDI],AL               ; 0052f999 | DAT_01ed6810 | DAT_01ed6812
    CMP AL,0x0                          ; 0052f99b
    JZ 0x0052f9af                       ; 0052f99d
        ;   XREF to: 0052f9af (CONDITIONAL_JUMP)  ; LAB_0052f9af
    MOV AL,byte ptr [ESI + 0x1]         ; 0052f99f
    ADD ESI,0x2                         ; 0052f9a2
    MOV byte ptr [EDI + 0x1],AL         ; 0052f9a5 | DAT_01ed6811 | DAT_01ed6813
    ADD EDI,0x2                         ; 0052f9a8
    CMP AL,0x0                          ; 0052f9ab
    JNZ 0x0052f997                      ; 0052f9ad
        ;   XREF to: 0052f997 (CONDITIONAL_JUMP)  ; LAB_0052f997
    POP EDI                             ; 0052f9af
        ;   Label: LAB_0052f9af
    JMP 0x00529bec                      ; 0052f9b0
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV DL,0x2c                         ; 0052f9b5
        ;   Label: LAB_0052f9b5
    LEA ESI,[ESP + 0x316c]              ; 0052f9b7
    MOV AL,byte ptr [ESI]               ; 0052f9be
        ;   Label: LAB_0052f9be
    CMP AL,DL                           ; 0052f9c0
    JZ 0x0052f9d6                       ; 0052f9c2
        ;   XREF to: 0052f9d6 (CONDITIONAL_JUMP)  ; LAB_0052f9d6
    CMP AL,0x0                          ; 0052f9c4
    JZ 0x0052f9d4                       ; 0052f9c6
        ;   XREF to: 0052f9d4 (CONDITIONAL_JUMP)  ; LAB_0052f9d4
    INC ESI                             ; 0052f9c8
    MOV AL,byte ptr [ESI]               ; 0052f9c9
    CMP AL,DL                           ; 0052f9cb
    JZ 0x0052f9d6                       ; 0052f9cd
        ;   XREF to: 0052f9d6 (CONDITIONAL_JUMP)  ; LAB_0052f9d6
    INC ESI                             ; 0052f9cf
    CMP AL,0x0                          ; 0052f9d0
    JNZ 0x0052f9be                      ; 0052f9d2
        ;   XREF to: 0052f9be (CONDITIONAL_JUMP)  ; LAB_0052f9be
    SUB ESI,ESI                         ; 0052f9d4
        ;   Label: LAB_0052f9d4
    TEST ESI,ESI                        ; 0052f9d6
        ;   Label: LAB_0052f9d6
    SETNZ AL                            ; 0052f9d8
    MOV ESI,0xffffffff                  ; 0052f9db
    LEA EDI,[ESP + 0x316c]              ; 0052f9e0
    AND EAX,0xff                        ; 0052f9e7
    MOV dword ptr [ESP + 0x47e0],ESI    ; 0052f9ec
    MOV ESI,0x5cf826                    ; 0052f9f3 | DAT_005cf826
    MOV dword ptr [ESP + 0x4940],EAX    ; 0052f9f8
    PUSH EDI                            ; 0052f9ff
    SUB ECX,ECX                         ; 0052fa00
    DEC ECX                             ; 0052fa02
    MOV AL,0x0                          ; 0052fa03
    SCASB.REPNE ES:EDI                  ; 0052fa05
    DEC EDI                             ; 0052fa07
    MOV AL,byte ptr [ESI]               ; 0052fa08 | DAT_005cf826 | DAT_005cf828
        ;   Label: LAB_0052fa08
    MOV byte ptr [EDI],AL               ; 0052fa0a
    CMP AL,0x0                          ; 0052fa0c
    JZ 0x0052fa20                       ; 0052fa0e
        ;   XREF to: 0052fa20 (CONDITIONAL_JUMP)  ; LAB_0052fa20
    MOV AL,byte ptr [ESI + 0x1]         ; 0052fa10 | DAT_005cf827 | = "[^,],%n"
    ADD ESI,0x2                         ; 0052fa13
    MOV byte ptr [EDI + 0x1],AL         ; 0052fa16
    ADD EDI,0x2                         ; 0052fa19
    CMP AL,0x0                          ; 0052fa1c
    JNZ 0x0052fa08                      ; 0052fa1e
        ;   XREF to: 0052fa08 (CONDITIONAL_JUMP)  ; LAB_0052fa08
    POP EDI                             ; 0052fa20
        ;   Label: LAB_0052fa20
    LEA EAX,[ESP + 0x47e0]              ; 0052fa21
    PUSH EAX                            ; 0052fa28
    LEA EAX,[ESP + 0x4048]              ; 0052fa29
    PUSH EAX                            ; 0052fa30
    PUSH 0x5cf828                       ; 0052fa31 | DAT_005cf828
    LEA EAX,[ESP + 0x3178]              ; 0052fa36
    PUSH EAX                            ; 0052fa3d
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052fa3e
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 0052fa43
    CMP dword ptr [ESP + 0x47e0],0x1    ; 0052fa46
    JGE 0x0052fa79                      ; 0052fa4e
        ;   XREF to: 0052fa79 (CONDITIONAL_JUMP)  ; LAB_0052fa79
    MOV ESI,0x5cf831                    ; 0052fa50 | = "Error parsing out camera name"
    MOV EDI,0x1ed6810                   ; 0052fa55
    PUSH EDI                            ; 0052fa5a | DAT_01ed6810
    MOV AL,byte ptr [ESI]               ; 0052fa5b | = "Error parsing out camera name" | s_Error_parsing_out_camera_005cf831+2
        ;   Label: LAB_0052fa5b
    MOV byte ptr [EDI],AL               ; 0052fa5d | DAT_01ed6810 | DAT_01ed6812
    CMP AL,0x0                          ; 0052fa5f
    JZ 0x0052fa73                       ; 0052fa61
        ;   XREF to: 0052fa73 (CONDITIONAL_JUMP)  ; LAB_0052fa73
    MOV AL,byte ptr [ESI + 0x1]         ; 0052fa63 | s_Error_parsing_out_camera_005cf831+1 | s_Error_parsing_out_camera_005cf831+3
    ADD ESI,0x2                         ; 0052fa66
    MOV byte ptr [EDI + 0x1],AL         ; 0052fa69 | DAT_01ed6811 | DAT_01ed6813
    ADD EDI,0x2                         ; 0052fa6c
    CMP AL,0x0                          ; 0052fa6f
    JNZ 0x0052fa5b                      ; 0052fa71
        ;   XREF to: 0052fa5b (CONDITIONAL_JUMP)  ; LAB_0052fa5b
    POP EDI                             ; 0052fa73
        ;   Label: LAB_0052fa73
    JMP 0x00529bec                      ; 0052fa74
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EAX,[ESP + 0x4044]              ; 0052fa79
        ;   Label: LAB_0052fa79
    PUSH EAX                            ; 0052fa80
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052fa81
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052fa86
    LEA EAX,[ESP + 0x4044]              ; 0052fa89
    PUSH EAX                            ; 0052fa90
    MOV EAX,[0x00603b28]                ; 0052fa91 | g_CDemonSetPtr
    PUSH EAX                            ; 0052fa96
    CALL core_set.cpp_CDemonSet_findCameraByName_FUN_00535360 ; 0052fa97
        ;   XREF to: 00535360 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_findCameraByName_FUN_00535360(CDemonSet * this_ptr, char * name)
    MOV EDX,0x501502f9                  ; 0052fa9c
    ADD ESP,0x8                         ; 0052faa1
    MOV ESI,EAX                         ; 0052faa4
    MOV ECX,dword ptr [ESP + 0x4940]    ; 0052faa6
    MOV dword ptr [ESP + 0x30],EDX      ; 0052faad
    TEST ECX,ECX                        ; 0052fab1
    JZ 0x0052fafa                       ; 0052fab3
        ;   XREF to: 0052fafa (CONDITIONAL_JUMP)  ; LAB_0052fafa
    LEA EAX,[ESP + 0x30]                ; 0052fab5
    PUSH EAX                            ; 0052fab9
    MOV EDI,dword ptr [ESP + 0x47e4]    ; 0052faba
    LEA EAX,[ESP + 0x3170]              ; 0052fac1
    PUSH 0x5cf84f                       ; 0052fac8 | DAT_005cf84f
    ADD EAX,EDI                         ; 0052facd
    PUSH EAX                            ; 0052facf
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052fad0
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0xc                         ; 0052fad5
    FLDZ                                ; 0052fad8
    FLD float ptr [ESP + 0x30]          ; 0052fada
    FSTP double ptr [ESP + 0x10]        ; 0052fade
    FCOMP double ptr [ESP + 0x10]       ; 0052fae2
    FNSTSW AX                           ; 0052fae6
    SAHF                                ; 0052fae8
    JA 0x0052fb20                       ; 0052fae9
        ;   XREF to: 0052fb20 (CONDITIONAL_JUMP)  ; LAB_0052fb20
    FLD double ptr [ESP + 0x10]         ; 0052faeb
    FCOMP double ptr [0x005cfa48]       ; 0052faef | DAT_005cfa48
    FNSTSW AX                           ; 0052faf5
    SAHF                                ; 0052faf7
    JA 0x0052fb20                       ; 0052faf8
        ;   XREF to: 0052fb20 (CONDITIONAL_JUMP)  ; LAB_0052fb20
    CMP dword ptr [0x01ed6808],0x0      ; 0052fafa | DAT_01ed6808
        ;   Label: LAB_0052fafa
    JNZ 0x00529b1b                      ; 0052fb01
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH dword ptr [ESP + 0x30]         ; 0052fb07
    PUSH ESI                            ; 0052fb0b
    MOV EDX,dword ptr [0x00603b28]      ; 0052fb0c | g_CDemonSetPtr
    PUSH EDX                            ; 0052fb12
    CALL core_setdir.cpp_FUN_00540ba0   ; 0052fb13
        ;   XREF to: 00540ba0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_FUN_00540ba0(CDemonSet * this_ptr, int camera_index, float hold_time)
    ADD ESP,0xc                         ; 0052fb18
    JMP 0x00529b1b                      ; 0052fb1b
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH 0x5cf852                       ; 0052fb20 | = "Invalid hold time value"
        ;   Label: LAB_0052fb20
    PUSH 0x1ed6810                      ; 0052fb25 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052fb2a
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052fb2f
    JMP 0x00529bec                      ; 0052fb32
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0xc                         ; 0052fb37
        ;   Label: LAB_0052fb37
    PUSH ESI                            ; 0052fb3a
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052fb3b
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052fb40
    PUSH 0x12c                          ; 0052fb43
    MOV dword ptr [ESP + 0x47fc],EAX    ; 0052fb48
    LEA EAX,[ESP + 0x954]               ; 0052fb4f
    PUSH EAX                            ; 0052fb56
    LEA EAX,[ESP + 0x4800]              ; 0052fb57
    PUSH EAX                            ; 0052fb5e
    CALL core_script.cpp_parseArgument_FUN_005288c0 ; 0052fb5f
        ;   XREF to: 005288c0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005288c0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 0052fb64
    TEST EAX,EAX                        ; 0052fb67
    JZ 0x0052fb91                       ; 0052fb69
        ;   XREF to: 0052fb91 (CONDITIONAL_JUMP)  ; LAB_0052fb91
    MOV EDI,0x1ed6810                   ; 0052fb6b
        ;   Label: LAB_0052fb6b
    MOV ESI,EAX                         ; 0052fb70
    PUSH EDI                            ; 0052fb72 | DAT_01ed6810
    MOV AL,byte ptr [ESI]               ; 0052fb73
        ;   Label: LAB_0052fb73
    MOV byte ptr [EDI],AL               ; 0052fb75 | DAT_01ed6810 | DAT_01ed6812
    CMP AL,0x0                          ; 0052fb77
    JZ 0x0052fb8b                       ; 0052fb79
        ;   XREF to: 0052fb8b (CONDITIONAL_JUMP)  ; LAB_0052fb8b
    MOV AL,byte ptr [ESI + 0x1]         ; 0052fb7b
    ADD ESI,0x2                         ; 0052fb7e
    MOV byte ptr [EDI + 0x1],AL         ; 0052fb81 | DAT_01ed6811 | DAT_01ed6813
    ADD EDI,0x2                         ; 0052fb84
    CMP AL,0x0                          ; 0052fb87
    JNZ 0x0052fb73                      ; 0052fb89
        ;   XREF to: 0052fb73 (CONDITIONAL_JUMP)  ; LAB_0052fb73
    POP EDI                             ; 0052fb8b
        ;   Label: LAB_0052fb8b
    JMP 0x00529bec                      ; 0052fb8c
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EAX,[ESP + 0x4924]              ; 0052fb91
        ;   Label: LAB_0052fb91
    PUSH EAX                            ; 0052fb98
    LEA EAX,[ESP + 0x492c]              ; 0052fb99
    PUSH EAX                            ; 0052fba0
    PUSH 0x5cf877                       ; 0052fba1 | = "%f,%n"
    LEA EAX,[ESP + 0x95c]               ; 0052fba6
    MOV ECX,0xffffffff                  ; 0052fbad
    PUSH EAX                            ; 0052fbb2
    MOV dword ptr [ESP + 0x4934],ECX    ; 0052fbb3
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052fbba
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 0052fbbf
    MOV ESI,dword ptr [ESP + 0x4924]    ; 0052fbc2
    CMP ESI,0x2                         ; 0052fbc9
    JL 0x0052fc38                       ; 0052fbcc
        ;   XREF to: 0052fc38 (CONDITIONAL_JUMP)  ; LAB_0052fc38
    CMP dword ptr [0x01ed6808],0x0      ; 0052fbce | DAT_01ed6808
    JNZ 0x00529b1b                      ; 0052fbd5
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EAX,[ESP + 0x950]               ; 0052fbdb
    ADD EAX,ESI                         ; 0052fbe2
    PUSH EAX                            ; 0052fbe4
    LEA EDI,[EBX + 0x50]                ; 0052fbe5
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052fbe8
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052fbed
    MOV ESI,EAX                         ; 0052fbf0
    MOV ECX,dword ptr [EBP + 0x18]      ; 0052fbf2
    PUSH EDI                            ; 0052fbf5
    MOV AL,byte ptr [ESI]               ; 0052fbf6
        ;   Label: LAB_0052fbf6
    MOV byte ptr [EDI],AL               ; 0052fbf8
    CMP AL,0x0                          ; 0052fbfa
    JZ 0x0052fc0e                       ; 0052fbfc
        ;   XREF to: 0052fc0e (CONDITIONAL_JUMP)  ; LAB_0052fc0e
    MOV AL,byte ptr [ESI + 0x1]         ; 0052fbfe
    ADD ESI,0x2                         ; 0052fc01
    MOV byte ptr [EDI + 0x1],AL         ; 0052fc04
    ADD EDI,0x2                         ; 0052fc07
    CMP AL,0x0                          ; 0052fc0a
    JNZ 0x0052fbf6                      ; 0052fc0c
        ;   XREF to: 0052fbf6 (CONDITIONAL_JUMP)  ; LAB_0052fbf6
    POP EDI                             ; 0052fc0e
        ;   Label: LAB_0052fc0e
    PUSH ECX                            ; 0052fc0f
    PUSH dword ptr [ESP + 0x492c]       ; 0052fc10
    PUSH EBX                            ; 0052fc17
    CALL core_script.cpp_CScript_processTimer_FUN_00530310 ; 0052fc18
        ;   XREF to: 00530310 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_processTimer_FUN_00530310(CScript * this_ptr, float delta_time, float * timer_value)
    ADD ESP,0xc                         ; 0052fc1d
    MOV dword ptr [ESP + 0x47e4],EAX    ; 0052fc20
    TEST EAX,EAX                        ; 0052fc27
    JLE 0x00529b1b                      ; 0052fc29
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV byte ptr [EBX + 0x50],0x0       ; 0052fc2f
    JMP 0x00529b1b                      ; 0052fc33
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH 0x5cf87d                       ; 0052fc38 | = "Error parsing time value"
        ;   Label: LAB_0052fc38
    PUSH 0x1ed6810                      ; 0052fc3d | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052fc42
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052fc47
    JMP 0x00529bec                      ; 0052fc4a
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0xa                         ; 0052fc4f
        ;   Label: LAB_0052fc4f
    PUSH ESI                            ; 0052fc52
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052fc53
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052fc58
    LEA EDX,[ESP + 0x492c]              ; 0052fc5b
    PUSH EDX                            ; 0052fc62
    LEA EDX,[ESP + 0x1c58]              ; 0052fc63
    PUSH EDX                            ; 0052fc6a
    LEA EDX,[ESP + 0x1a04]              ; 0052fc6b
    PUSH EDX                            ; 0052fc72
    PUSH 0x5cf8a1                       ; 0052fc73 | = "(%[^,], %[^)])%n"
    MOV ESI,0xffffffff                  ; 0052fc78
    PUSH EAX                            ; 0052fc7d
    MOV dword ptr [ESP + 0x480c],EAX    ; 0052fc7e
    MOV dword ptr [ESP + 0x4940],ESI    ; 0052fc85
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052fc8c
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052fc91
    MOV EDI,dword ptr [ESP + 0x492c]    ; 0052fc94
    CMP EDI,0x5                         ; 0052fc9b
    JGE 0x0052fcb7                      ; 0052fc9e
        ;   XREF to: 0052fcb7 (CONDITIONAL_JUMP)  ; LAB_0052fcb7
    PUSH 0x5cf8b2                       ; 0052fca0 | = "Error parsing turnToFace command parms"
    PUSH 0x1ed6810                      ; 0052fca5 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052fcaa
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052fcaf
    JMP 0x00529bec                      ; 0052fcb2
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDX,dword ptr [ESP + 0x47f8]    ; 0052fcb7
        ;   Label: LAB_0052fcb7
    LEA EAX,[ESP + 0x19fc]              ; 0052fcbe
    ADD EDX,EDI                         ; 0052fcc5
    PUSH EAX                            ; 0052fcc7
    MOV dword ptr [ESP + 0x47fc],EDX    ; 0052fcc8
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052fccf
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052fcd4
    LEA EAX,[ESP + 0x1c54]              ; 0052fcd7
    PUSH EAX                            ; 0052fcde
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052fcdf
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052fce4
    PUSH 0x7e2cb4                       ; 0052fce7 | g_CCharacterClassInfo
    MOV ECX,dword ptr [0x007e2cec]      ; 0052fcec | g_CCharacterClassInfo.name_hash
    PUSH ECX                            ; 0052fcf2
    LEA EAX,[ESP + 0x1a04]              ; 0052fcf3
    PUSH EAX                            ; 0052fcfa
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052fcfb
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    MOV ESI,EAX                         ; 0052fd00
    ADD ESP,0xc                         ; 0052fd02
    TEST EAX,EAX                        ; 0052fd05
    JNZ 0x0052fd1b                      ; 0052fd07
        ;   XREF to: 0052fd1b (CONDITIONAL_JUMP)  ; LAB_0052fd1b
    CMP dword ptr [0x01ed701c],0x0      ; 0052fd09 | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052fd10
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052fd16
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    PUSH 0x7df978                       ; 0052fd1b | g_CDemonActorClassInfo
        ;   Label: LAB_0052fd1b
    MOV EDI,dword ptr [0x007df9b0]      ; 0052fd20 | g_CDemonActorClassInfo.name_hash
    PUSH EDI                            ; 0052fd26
    LEA EAX,[ESP + 0x1c5c]              ; 0052fd27
    PUSH EAX                            ; 0052fd2e
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0052fd2f
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    ADD ESP,0xc                         ; 0052fd34
    TEST EAX,EAX                        ; 0052fd37
    JNZ 0x0052fd4d                      ; 0052fd39
        ;   XREF to: 0052fd4d (CONDITIONAL_JUMP)  ; LAB_0052fd4d
    CMP dword ptr [0x01ed701c],0x0      ; 0052fd3b | DAT_01ed701c
    JNZ 0x00529b34                      ; 0052fd42
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0052fd48
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    CMP dword ptr [0x01ed6808],0x0      ; 0052fd4d | DAT_01ed6808
        ;   Label: LAB_0052fd4d
    JNZ 0x00529b1b                      ; 0052fd54
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH EAX                            ; 0052fd5a
    MOV EDX,dword ptr [ESI + 0x154]     ; 0052fd5b
    PUSH ESI                            ; 0052fd61
    CALL dword ptr [EDX + 0x134]        ; 0052fd62
    ADD ESP,0x8                         ; 0052fd68
    JMP 0x00529b1b                      ; 0052fd6b
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0x4                         ; 0052fd70
        ;   Label: LAB_0052fd70
    PUSH ESI                            ; 0052fd73
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052fd74
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052fd79
    LEA EDX,[ESP + 0x4930]              ; 0052fd7c
    PUSH EDX                            ; 0052fd83
    LEA EDX,[ESP + 0x4938]              ; 0052fd84
    PUSH EDX                            ; 0052fd8b
    PUSH 0x5cf8de                       ; 0052fd8c | = "(%f)%n"
    MOV EDI,0xffffffff                  ; 0052fd91
    PUSH EAX                            ; 0052fd96
    MOV dword ptr [ESP + 0x4808],EAX    ; 0052fd97
    MOV dword ptr [ESP + 0x4940],EDI    ; 0052fd9e
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052fda5
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 0052fdaa
    MOV EAX,dword ptr [ESP + 0x4930]    ; 0052fdad
    CMP EAX,0x1                         ; 0052fdb4
    JL 0x0052fdf7                       ; 0052fdb7
        ;   XREF to: 0052fdf7 (CONDITIONAL_JUMP)  ; LAB_0052fdf7
    MOV EDX,dword ptr [ESP + 0x47f8]    ; 0052fdb9
    ADD EDX,EAX                         ; 0052fdc0
    MOV ECX,dword ptr [0x01ed6808]      ; 0052fdc2 | DAT_01ed6808
    MOV dword ptr [ESP + 0x47f8],EDX    ; 0052fdc8
    TEST ECX,ECX                        ; 0052fdcf
    JNZ 0x00529b1b                      ; 0052fdd1
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV ESI,dword ptr [EBP + 0x18]      ; 0052fdd7
    PUSH ESI                            ; 0052fdda
    PUSH dword ptr [ESP + 0x4938]       ; 0052fddb
    PUSH EBX                            ; 0052fde2
    CALL core_script.cpp_CScript_processTimer_FUN_00530310 ; 0052fde3
        ;   XREF to: 00530310 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_processTimer_FUN_00530310(CScript * this_ptr, float delta_time, float * timer_value)
    ADD ESP,0xc                         ; 0052fde8
    MOV dword ptr [ESP + 0x47e4],EAX    ; 0052fdeb
    JMP 0x00529b1b                      ; 0052fdf2
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH 0x5cf8e5                       ; 0052fdf7 | = "Error parsing time value on wait stat..."
        ;   Label: LAB_0052fdf7
    PUSH 0x1ed6810                      ; 0052fdfc | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052fe01
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052fe06
    JMP 0x00529bec                      ; 0052fe09
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    ADD ESI,0x7                         ; 0052fe0e
        ;   Label: LAB_0052fe0e
    PUSH ESI                            ; 0052fe11
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052fe12
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052fe17
    MOV dword ptr [ESP + 0x47f8],EAX    ; 0052fe1a
    LEA EAX,[ESP + 0x46e8]              ; 0052fe21
    PUSH EAX                            ; 0052fe28
    LEA EAX,[ESP + 0x47fc]              ; 0052fe29
    PUSH EAX                            ; 0052fe30
    CALL core_script.cpp_parseConditionExpr_FUN_00528970 ; 0052fe31
        ;   XREF to: 00528970 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseConditionExpr_FUN_00528970(char * * cursor, char * out_buffer)
    ADD ESP,0x8                         ; 0052fe36
    TEST EAX,EAX                        ; 0052fe39
    JNZ 0x0052fb6b                      ; 0052fe3b
        ;   XREF to: 0052fb6b (CONDITIONAL_JUMP)  ; LAB_0052fb6b
    CMP dword ptr [0x01ed6808],0x0      ; 0052fe41 | DAT_01ed6808
    JNZ 0x00529b1b                      ; 0052fe48
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    LEA EAX,[ESP + 0x46e8]              ; 0052fe4e
    PUSH EAX                            ; 0052fe55
    MOV EAX,[0x005fba60]                ; 0052fe56 | DAT_005fba60
    PUSH EAX                            ; 0052fe5b
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0052fe5c
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0052fe61
    TEST EAX,EAX                        ; 0052fe64
    JNZ 0x00529b1b                      ; 0052fe66
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV dword ptr [ESP + 0x47e4],EAX    ; 0052fe6c
    JMP 0x00529b1b                      ; 0052fe73
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    ADD ESI,0x6                         ; 0052fe78
        ;   Label: LAB_0052fe78
    PUSH ESI                            ; 0052fe7b
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 0052fe7c
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 0052fe81
    LEA EDX,[ESP + 0x4800]              ; 0052fe84
    PUSH EDX                            ; 0052fe8b
    LEA EDX,[ESP + 0x13c0]              ; 0052fe8c
    PUSH EDX                            ; 0052fe93
    LEA EDX,[ESP + 0x148c]              ; 0052fe94
    PUSH EDX                            ; 0052fe9b
    PUSH 0x5cf91f                       ; 0052fe9c | = "(%[^,], %[^,)] %n"
    MOV ECX,0xffffffff                  ; 0052fea1
    PUSH EAX                            ; 0052fea6
    MOV dword ptr [ESP + 0x480c],EAX    ; 0052fea7
    MOV dword ptr [ESP + 0x4814],ECX    ; 0052feae
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052feb5
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0052feba
    MOV ESI,dword ptr [ESP + 0x4800]    ; 0052febd
    CMP ESI,0x5                         ; 0052fec4
    JGE 0x0052fee0                      ; 0052fec7
        ;   XREF to: 0052fee0 (CONDITIONAL_JUMP)  ; LAB_0052fee0
    PUSH 0x5cf931                       ; 0052fec9 | = "Error parsing walkTo command parms"
    PUSH 0x1ed6810                      ; 0052fece | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052fed3
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052fed8
    JMP 0x00529bec                      ; 0052fedb
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    MOV EDI,dword ptr [ESP + 0x47f8]    ; 0052fee0
        ;   Label: LAB_0052fee0
    LEA EAX,[ESP + 0x1484]              ; 0052fee7
    ADD EDI,ESI                         ; 0052feee
    PUSH EAX                            ; 0052fef0
    MOV dword ptr [ESP + 0x47fc],EDI    ; 0052fef1
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052fef8
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052fefd
    LEA EAX,[ESP + 0x13bc]              ; 0052ff00
    PUSH EAX                            ; 0052ff07
    CALL core_script.cpp_trimString_FUN_00528830 ; 0052ff08
        ;   XREF to: 00528830 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00528830(char * str)
    ADD ESP,0x4                         ; 0052ff0d
    XOR EAX,EAX                         ; 0052ff10
    MOV dword ptr [ESP + 0x4938],EAX    ; 0052ff12
    MOV EAX,dword ptr [ESP + 0x47f8]    ; 0052ff19
    CMP byte ptr [EAX],0x2c             ; 0052ff20
    JNZ 0x0052ff69                      ; 0052ff23
        ;   XREF to: 0052ff69 (CONDITIONAL_JUMP)  ; LAB_0052ff69
    LEA EAX,[ESP + 0x4800]              ; 0052ff25
    PUSH EAX                            ; 0052ff2c
    LEA EAX,[ESP + 0x493c]              ; 0052ff2d
    PUSH EAX                            ; 0052ff34
    PUSH 0x5cf954                       ; 0052ff35 | = ",%f %n"
    MOV ECX,dword ptr [ESP + 0x4804]    ; 0052ff3a
    MOV EDX,0xffffffff                  ; 0052ff41
    PUSH ECX                            ; 0052ff46
    MOV dword ptr [ESP + 0x4810],EDX    ; 0052ff47
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052ff4e
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 0052ff53
    MOV ESI,dword ptr [ESP + 0x4800]    ; 0052ff56
    CMP ESI,0x1                         ; 0052ff5d
    JL 0x0052ffa7                       ; 0052ff60
        ;   XREF to: 0052ffa7 (CONDITIONAL_JUMP)  ; LAB_0052ffa7
    ADD dword ptr [ESP + 0x47f8],ESI    ; 0052ff62
    MOV dword ptr [ESP + 0x493c],0x501502f9 ; 0052ff69
        ;   Label: LAB_0052ff69
    MOV EAX,dword ptr [ESP + 0x47f8]    ; 0052ff74
    CMP byte ptr [EAX],0x2c             ; 0052ff7b
    JZ 0x0052ffbe                       ; 0052ff7e
        ;   XREF to: 0052ffbe (CONDITIONAL_JUMP)  ; LAB_0052ffbe
    MOV EAX,dword ptr [ESP + 0x47f8]    ; 0052ff80
        ;   Label: LAB_0052ff80
    CMP byte ptr [EAX],0x29             ; 0052ff87
    JZ 0x0053001e                       ; 0052ff8a
        ;   XREF to: 0053001e (CONDITIONAL_JUMP)  ; LAB_0053001e
    PUSH 0x5cf9a8                       ; 0052ff90 | = "Missing closing parenthesis on walkTo..."
    PUSH 0x1ed6810                      ; 0052ff95 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052ff9a
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052ff9f
    JMP 0x00529bec                      ; 0052ffa2
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    PUSH 0x5cf95b                       ; 0052ffa7 | = "Error parsing walkTo command parms"
        ;   Label: LAB_0052ffa7
    PUSH 0x1ed6810                      ; 0052ffac | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 0052ffb1
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0052ffb6
    JMP 0x00529bec                      ; 0052ffb9
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    LEA EAX,[ESP + 0x4800]              ; 0052ffbe
        ;   Label: LAB_0052ffbe
    PUSH EAX                            ; 0052ffc5
    LEA EAX,[ESP + 0x4940]              ; 0052ffc6
    PUSH EAX                            ; 0052ffcd
    PUSH 0x5cf97e                       ; 0052ffce | = ",%f %n"
    MOV ECX,dword ptr [ESP + 0x4804]    ; 0052ffd3
    MOV EDX,0xffffffff                  ; 0052ffda
    PUSH ECX                            ; 0052ffdf
    MOV dword ptr [ESP + 0x4810],EDX    ; 0052ffe0
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0052ffe7
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 0052ffec
    MOV ESI,dword ptr [ESP + 0x4800]    ; 0052ffef
    CMP ESI,0x1                         ; 0052fff6
    JL 0x00530007                       ; 0052fff9
        ;   XREF to: 00530007 (CONDITIONAL_JUMP)  ; LAB_00530007
    ADD dword ptr [ESP + 0x47f8],ESI    ; 0052fffb
    JMP 0x0052ff80                      ; 00530002
        ;   XREF to: 0052ff80 (UNCONDITIONAL_JUMP)  ; LAB_0052ff80
    PUSH 0x5cf985                       ; 00530007 | = "Error parsing walkTo command parms"
        ;   Label: LAB_00530007
    PUSH 0x1ed6810                      ; 0053000c | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 00530011
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 00530016
    JMP 0x00529bec                      ; 00530019
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    PUSH 0x7e2cb4                       ; 0053001e | g_CCharacterClassInfo
        ;   Label: LAB_0053001e
    MOV EAX,[0x007e2cec]                ; 00530023 | g_CCharacterClassInfo.name_hash
    MOV EDX,dword ptr [ESP + 0x47fc]    ; 00530028
    PUSH EAX                            ; 0053002f
    LEA EAX,[ESP + 0x148c]              ; 00530030
    INC EDX                             ; 00530037
    PUSH EAX                            ; 00530038
    MOV dword ptr [ESP + 0x4804],EDX    ; 00530039
    CALL core_script.cpp_getActor_FUN_005289b0 ; 00530040
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    MOV ESI,EAX                         ; 00530045
    ADD ESP,0xc                         ; 00530047
    TEST EAX,EAX                        ; 0053004a
    JNZ 0x00530060                      ; 0053004c
        ;   XREF to: 00530060 (CONDITIONAL_JUMP)  ; LAB_00530060
    CMP dword ptr [0x01ed701c],0x0      ; 0053004e | DAT_01ed701c
    JNZ 0x00529b34                      ; 00530055
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0053005b
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    PUSH 0x7df978                       ; 00530060 | g_CDemonActorClassInfo
        ;   Label: LAB_00530060
    MOV ECX,dword ptr [0x007df9b0]      ; 00530065 | g_CDemonActorClassInfo.name_hash
    PUSH ECX                            ; 0053006b
    LEA EAX,[ESP + 0x13c4]              ; 0053006c
    PUSH EAX                            ; 00530073
    CALL core_script.cpp_getActor_FUN_005289b0 ; 00530074
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005289b0()
    ADD ESP,0xc                         ; 00530079
    TEST EAX,EAX                        ; 0053007c
    JNZ 0x00530092                      ; 0053007e
        ;   XREF to: 00530092 (CONDITIONAL_JUMP)  ; LAB_00530092
    CMP dword ptr [0x01ed701c],0x0      ; 00530080 | DAT_01ed701c
    JNZ 0x00529b34                      ; 00530087
        ;   XREF to: 00529b34 (CONDITIONAL_JUMP)  ; LAB_00529b34
    JMP 0x00529bec                      ; 0053008d
        ;   XREF to: 00529bec (UNCONDITIONAL_JUMP)  ; LAB_00529bec
    CMP dword ptr [0x01ed6808],0x0      ; 00530092 | DAT_01ed6808
        ;   Label: LAB_00530092
    JNZ 0x00529b1b                      ; 00530099
        ;   XREF to: 00529b1b (CONDITIONAL_JUMP)  ; LAB_00529b1b
    PUSH dword ptr [ESP + 0x493c]       ; 0053009f
    PUSH dword ptr [ESP + 0x493c]       ; 005300a6
    PUSH EAX                            ; 005300ad
    MOV EDX,dword ptr [ESI + 0x154]     ; 005300ae
    PUSH ESI                            ; 005300b4
    CALL dword ptr [EDX + 0x130]        ; 005300b5
    ADD ESP,0x10                        ; 005300bb
    JMP 0x00529b1b                      ; 005300be
        ;   XREF to: 00529b1b (UNCONDITIONAL_JUMP)  ; LAB_00529b1b
    MOV EDI,dword ptr [ESP + 0x47f4]    ; 005300c3
        ;   Label: LAB_005300c3
    PUSH EDI                            ; 005300ca
    PUSH EAX                            ; 005300cb | DAT_005ce0e7
    PUSH 0x5cf9f3                       ; 005300cc | = "Extra characters \"%s\" on line %d"
    PUSH 0x1ed6810                      ; 005300d1 | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 005300d6
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    MOV EDX,0xffffffff                  ; 005300db
    ADD ESP,0x10                        ; 005300e0
    MOV dword ptr [ESP + 0x47e4],EDX    ; 005300e3
    MOV EAX,dword ptr [ESP + 0x47e4]    ; 005300ea
    MOV ESP,EBP                         ; 005300f1
    POP EBP                             ; 005300f3
    POP EDI                             ; 005300f4
    POP ESI                             ; 005300f5
    POP EBX                             ; 005300f6
    RET                                 ; 005300f7
    PUSH 0x5cfa14                       ; 005300f8 | = "Overrun past the end of the script."
        ;   Label: LAB_005300f8
    PUSH 0x1ed6810                      ; 005300fd | DAT_01ed6810
    CALL crt_unknown.c_FUN_005a28c0     ; 00530102
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    MOV ECX,0xffffffff                  ; 00530107
    ADD ESP,0x8                         ; 0053010c
    MOV dword ptr [ESP + 0x47e4],ECX    ; 0053010f
    MOV EAX,dword ptr [ESP + 0x47e4]    ; 00530116
    MOV ESP,EBP                         ; 0053011d
    POP EBP                             ; 0053011f
    POP EDI                             ; 00530120
    POP ESI                             ; 00530121
    POP EBX                             ; 00530122
    RET                                 ; 00530123
    TEST ECX,ECX                        ; 00530124
        ;   Label: LAB_00530124
    JL 0x00529b68                       ; 00530126
        ;   XREF to: 00529b68 (CONDITIONAL_JUMP)  ; LAB_00529b68
    MOV EAX,dword ptr [ESP + 0x47e8]    ; 0053012c
    MOV dword ptr [EBX + 0x44],EAX      ; 00530133
    MOV EAX,dword ptr [ESP + 0x47e4]    ; 00530136
    MOV ESP,EBP                         ; 0053013d
    POP EBP                             ; 0053013f
    POP EDI                             ; 00530140
    POP ESI                             ; 00530141
    POP EBX                             ; 00530142
    RET                                 ; 00530143


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setedit_cpp_FUN_0057d340(void)
;
; Local Variables:
; undefined4       Stack[-0x124]:4  local_124
; undefined1       Stack[-0x120]:1  local_120
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
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[2]:
;   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 at 0057f413
;   core_setedit.cpp_UserInputCreate_FUN_0057d660 at 0057df1a
;
; Referenced Globals:
;   TerminatedCString s_sn_00647dca
;   TerminatedCString s_ss_00647dce
;   TerminatedCString s_se_00647dd2
;   TerminatedCString s_sw_00647dd6
;   TerminatedCString s_su_00647dda
;   TerminatedCString s_sd_00647dde
;   double DOUBLE_00647de5 = 18
;
; Called Functions:
;   core_setedit.cpp_WriteActBackdrop_FUN_0057ce80
;   crt_stdio.c__sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d340
        ;   Label: core_setedit.cpp_FUN_0057d340
    PUSH ESI                            ; 0057d341
    PUSH EDI                            ; 0057d342
    PUSH EBP                            ; 0057d343
    MOV EBP,ESP                         ; 0057d344
    SUB ESP,0x110                       ; 0057d346
    SUB EBP,0x7a                        ; 0057d34c
    MOV EBX,dword ptr [EBP + 0x92]      ; 0057d34f
    LEA EAX,[EBX + 0x100]               ; 0057d355
    MOV EDX,dword ptr [EBX + 0x140]     ; 0057d35b
    LEA EDI,[EBX + 0x108]               ; 0057d361
    MOV dword ptr [EBP + 0x76],EAX      ; 0057d367
    LEA ESI,[EBX + 0x104]               ; 0057d36a
    TEST EDX,EDX                        ; 0057d370
    JZ 0x0057d5e5                       ; 0057d372
        ;   XREF to: 0057d5e5 (CONDITIONAL_JUMP)  ; LAB_0057d5e5
    PUSH EBX                            ; 0057d378
    PUSH 0x647dca                       ; 0057d379 | = "%sn"
    LEA EAX,[EBP + 0xffffff6a]          ; 0057d37e
    PUSH EAX                            ; 0057d384
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0057d385
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057d38a
    PUSH 0x3f800000                     ; 0057d38d
    PUSH 0x1fe                          ; 0057d392
    PUSH 0x1fe                          ; 0057d397
    PUSH 0x1fc                          ; 0057d39c
    PUSH 0x1fc                          ; 0057d3a1
    LEA EAX,[EBP + 0xffffff6a]          ; 0057d3a6
    XOR ECX,ECX                         ; 0057d3ac
    PUSH EAX                            ; 0057d3ae
    LEA EAX,[EBP + -0x1a]               ; 0057d3af
    MOV dword ptr [EBP + -0x1a],ECX     ; 0057d3b2
    PUSH EAX                            ; 0057d3b5
    MOV EAX,dword ptr [EBP + 0x76]      ; 0057d3b6
    MOV dword ptr [EBP + -0x12],ECX     ; 0057d3b9
    MOV dword ptr [EBP + -0x16],ECX     ; 0057d3bc
    MOV EAX,dword ptr [EAX]             ; 0057d3bf
    MOV dword ptr [EBP + -0xe],EAX      ; 0057d3c1
    MOV EAX,dword ptr [ESI]             ; 0057d3c4
    MOV dword ptr [EBP + -0xa],EAX      ; 0057d3c6
    MOV EAX,dword ptr [EDI]             ; 0057d3c9
    MOV dword ptr [EBP + -0x6],EAX      ; 0057d3cb
    LEA EAX,[EBP + -0xe]                ; 0057d3ce
    PUSH EAX                            ; 0057d3d1
    CALL core_setedit.cpp_WriteActBackdrop_FUN_0057ce80 ; 0057d3d2
        ;   XREF to: 0057ce80 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_WriteActBackdrop_FUN_0057ce80()
    ADD ESP,0x20                        ; 0057d3d7
    PUSH EBX                            ; 0057d3da
    PUSH 0x647dce                       ; 0057d3db | = "%ss"
    LEA EAX,[EBP + 0xffffff6a]          ; 0057d3e0
    PUSH EAX                            ; 0057d3e6
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0057d3e7
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057d3ec
    PUSH 0x3f800000                     ; 0057d3ef
    PUSH 0x1fe                          ; 0057d3f4
    PUSH 0x1fe                          ; 0057d3f9
    PUSH 0x1fc                          ; 0057d3fe
    LEA EAX,[EBP + 0xffffff6a]          ; 0057d403
    PUSH 0x1fc                          ; 0057d409
    MOV EDX,0x40490fdb                  ; 0057d40e
    XOR ECX,ECX                         ; 0057d413
    PUSH EAX                            ; 0057d415
    LEA EAX,[EBP + -0x2]                ; 0057d416
    MOV dword ptr [EBP + -0x2],ECX      ; 0057d419
    PUSH EAX                            ; 0057d41c
    MOV EAX,dword ptr [EBP + 0x76]      ; 0057d41d
    MOV dword ptr [EBP + 0x6],ECX       ; 0057d420
    MOV dword ptr [EBP + 0x2],EDX       ; 0057d423
    MOV EAX,dword ptr [EAX]             ; 0057d426
    MOV dword ptr [EBP + 0x16],EAX      ; 0057d428
    MOV EAX,dword ptr [ESI]             ; 0057d42b
    MOV dword ptr [EBP + 0x1a],EAX      ; 0057d42d
    MOV EAX,dword ptr [EDI]             ; 0057d430
    MOV dword ptr [EBP + 0x1e],EAX      ; 0057d432
    LEA EAX,[EBP + 0x16]                ; 0057d435
    PUSH EAX                            ; 0057d438
    CALL core_setedit.cpp_WriteActBackdrop_FUN_0057ce80 ; 0057d439
        ;   XREF to: 0057ce80 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_WriteActBackdrop_FUN_0057ce80()
    ADD ESP,0x20                        ; 0057d43e
    PUSH EBX                            ; 0057d441
    PUSH 0x647dd2                       ; 0057d442 | = "%se"
    LEA EAX,[EBP + 0xffffff6a]          ; 0057d447
    PUSH EAX                            ; 0057d44d
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0057d44e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057d453
    PUSH 0x3f800000                     ; 0057d456
    PUSH 0x1fe                          ; 0057d45b
    PUSH 0x1fe                          ; 0057d460
    LEA EAX,[EBP + 0xffffff6a]          ; 0057d465
    PUSH 0x1fc                          ; 0057d46b
    MOV EDX,0x3fc90fdb                  ; 0057d470
    XOR ECX,ECX                         ; 0057d475
    PUSH 0x1fc                          ; 0057d477
    MOV dword ptr [EBP + 0x52],ECX      ; 0057d47c
    MOV dword ptr [EBP + 0x5a],ECX      ; 0057d47f
    PUSH EAX                            ; 0057d482
    LEA EAX,[EBP + 0x52]                ; 0057d483
    MOV dword ptr [EBP + 0x56],EDX      ; 0057d486
    PUSH EAX                            ; 0057d489
    MOV EAX,dword ptr [EBP + 0x76]      ; 0057d48a
    MOV EAX,dword ptr [EAX]             ; 0057d48d
    MOV dword ptr [EBP + 0x22],EAX      ; 0057d48f
    MOV EAX,dword ptr [ESI]             ; 0057d492
    MOV dword ptr [EBP + 0x26],EAX      ; 0057d494
    MOV EAX,dword ptr [EDI]             ; 0057d497
    MOV dword ptr [EBP + 0x2a],EAX      ; 0057d499
    LEA EAX,[EBP + 0x22]                ; 0057d49c
    PUSH EAX                            ; 0057d49f
    CALL core_setedit.cpp_WriteActBackdrop_FUN_0057ce80 ; 0057d4a0
        ;   XREF to: 0057ce80 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_WriteActBackdrop_FUN_0057ce80()
    ADD ESP,0x20                        ; 0057d4a5
    PUSH EBX                            ; 0057d4a8
    PUSH 0x647dd6                       ; 0057d4a9 | = "%sw"
    LEA EAX,[EBP + 0xffffff6a]          ; 0057d4ae
    PUSH EAX                            ; 0057d4b4
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0057d4b5
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057d4ba
    PUSH 0x3f800000                     ; 0057d4bd
    PUSH 0x1fe                          ; 0057d4c2
    PUSH 0x1fe                          ; 0057d4c7
    PUSH 0x1fc                          ; 0057d4cc
    LEA EAX,[EBP + 0xffffff6a]          ; 0057d4d1
    PUSH 0x1fc                          ; 0057d4d7
    MOV EDX,0xbfc90fdb                  ; 0057d4dc
    XOR ECX,ECX                         ; 0057d4e1
    PUSH EAX                            ; 0057d4e3
    LEA EAX,[EBP + 0xa]                 ; 0057d4e4
    MOV dword ptr [EBP + 0xa],ECX       ; 0057d4e7
    PUSH EAX                            ; 0057d4ea
    MOV EAX,dword ptr [EBP + 0x76]      ; 0057d4eb
    MOV dword ptr [EBP + 0x12],ECX      ; 0057d4ee
    MOV dword ptr [EBP + 0xe],EDX       ; 0057d4f1
    MOV EAX,dword ptr [EAX]             ; 0057d4f4
    MOV dword ptr [EBP + -0x26],EAX     ; 0057d4f6
    MOV EAX,dword ptr [ESI]             ; 0057d4f9
    MOV dword ptr [EBP + -0x22],EAX     ; 0057d4fb
    MOV EAX,dword ptr [EDI]             ; 0057d4fe
    MOV dword ptr [EBP + -0x1e],EAX     ; 0057d500
    LEA EAX,[EBP + -0x26]               ; 0057d503
    PUSH EAX                            ; 0057d506
    CALL core_setedit.cpp_WriteActBackdrop_FUN_0057ce80 ; 0057d507
        ;   XREF to: 0057ce80 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_WriteActBackdrop_FUN_0057ce80()
    ADD ESP,0x20                        ; 0057d50c
    PUSH EBX                            ; 0057d50f
    PUSH 0x647dda                       ; 0057d510 | = "%su"
    LEA EAX,[EBP + 0xffffff6a]          ; 0057d515
    PUSH EAX                            ; 0057d51b
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0057d51c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057d521
    PUSH 0x3f800000                     ; 0057d524
    PUSH 0x1fe                          ; 0057d529
    PUSH 0x1fe                          ; 0057d52e
    PUSH 0x1fc                          ; 0057d533
    PUSH 0x1fc                          ; 0057d538
    LEA EAX,[EBP + 0xffffff6a]          ; 0057d53d
    PUSH EAX                            ; 0057d543
    XOR EAX,EAX                         ; 0057d544
    MOV dword ptr [EBP + 0x42],EAX      ; 0057d546
    MOV dword ptr [EBP + 0x3e],EAX      ; 0057d549
    LEA EAX,[EBP + 0x3a]                ; 0057d54c
    MOV ECX,0xbfc90fdb                  ; 0057d54f
    PUSH EAX                            ; 0057d554
    MOV EAX,dword ptr [EBP + 0x76]      ; 0057d555
    MOV dword ptr [EBP + 0x3a],ECX      ; 0057d558
    MOV EAX,dword ptr [EAX]             ; 0057d55b
    MOV dword ptr [EBP + 0x2e],EAX      ; 0057d55d
    MOV EAX,dword ptr [ESI]             ; 0057d560
    MOV dword ptr [EBP + 0x32],EAX      ; 0057d562
    MOV EAX,dword ptr [EDI]             ; 0057d565
    MOV dword ptr [EBP + 0x36],EAX      ; 0057d567
    LEA EAX,[EBP + 0x2e]                ; 0057d56a
    PUSH EAX                            ; 0057d56d
    CALL core_setedit.cpp_WriteActBackdrop_FUN_0057ce80 ; 0057d56e
        ;   XREF to: 0057ce80 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_WriteActBackdrop_FUN_0057ce80()
    ADD ESP,0x20                        ; 0057d573
    PUSH EBX                            ; 0057d576
    PUSH 0x647dde                       ; 0057d577 | = "%sd"
    LEA EAX,[EBP + 0xffffff6a]          ; 0057d57c
    PUSH EAX                            ; 0057d582
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0057d583
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057d588
    PUSH 0x3f800000                     ; 0057d58b
    PUSH 0x1fe                          ; 0057d590
    PUSH 0x1fe                          ; 0057d595
    PUSH 0x1fc                          ; 0057d59a
    XOR EBX,EBX                         ; 0057d59f
    PUSH 0x1fc                          ; 0057d5a1
    LEA EAX,[EBP + 0xffffff6a]          ; 0057d5a6
    MOV ECX,0x3fc90fdb                  ; 0057d5ac
    PUSH EAX                            ; 0057d5b1
    LEA EAX,[EBP + 0x6a]                ; 0057d5b2
    MOV dword ptr [EBP + 0x72],EBX      ; 0057d5b5
    PUSH EAX                            ; 0057d5b8
    MOV EAX,dword ptr [EBP + 0x76]      ; 0057d5b9
    MOV dword ptr [EBP + 0x6e],EBX      ; 0057d5bc
    MOV dword ptr [EBP + 0x6a],ECX      ; 0057d5bf
    MOV EAX,dword ptr [EAX]             ; 0057d5c2
    MOV dword ptr [EBP + 0x46],EAX      ; 0057d5c4
    MOV EAX,dword ptr [ESI]             ; 0057d5c7
    MOV dword ptr [EBP + 0x4a],EAX      ; 0057d5c9
    MOV EAX,dword ptr [EDI]             ; 0057d5cc
    MOV dword ptr [EBP + 0x4e],EAX      ; 0057d5ce
    LEA EAX,[EBP + 0x46]                ; 0057d5d1
    PUSH EAX                            ; 0057d5d4
    CALL core_setedit.cpp_WriteActBackdrop_FUN_0057ce80 ; 0057d5d5
        ;   XREF to: 0057ce80 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_WriteActBackdrop_FUN_0057ce80()
    ADD ESP,0x20                        ; 0057d5da
    LEA ESP,[EBP + 0x7a]                ; 0057d5dd
    POP EBP                             ; 0057d5e0
    POP EDI                             ; 0057d5e1
    POP ESI                             ; 0057d5e2
    POP EBX                             ; 0057d5e3
    RET                                 ; 0057d5e4
    FLD float ptr [EBX + 0x144]         ; 0057d5e5
        ;   Label: LAB_0057d5e5
    FDIVR double ptr [0x00647de5]       ; 0057d5eb | DOUBLE_00647de5
    SUB ESP,0x4                         ; 0057d5f1
    FSTP float ptr [ESP]                ; 0057d5f4
    PUSH 0x1df                          ; 0057d5f7
    PUSH 0x27f                          ; 0057d5fc
    PUSH 0x1e0                          ; 0057d601
    PUSH 0x280                          ; 0057d606
    MOV EAX,dword ptr [EBX + 0x10c]     ; 0057d60b
    PUSH EBX                            ; 0057d611
    ADD EBX,0x10c                       ; 0057d612
    MOV dword ptr [EBP + -0x32],EAX     ; 0057d618
    LEA EAX,[EBX + 0x4]                 ; 0057d61b
    MOV EAX,dword ptr [EAX]             ; 0057d61e
    MOV dword ptr [EBP + -0x2e],EAX     ; 0057d620
    LEA EAX,[EBX + 0x8]                 ; 0057d623
    MOV EAX,dword ptr [EAX]             ; 0057d626
    MOV dword ptr [EBP + -0x2a],EAX     ; 0057d628
    LEA EAX,[EBP + -0x32]               ; 0057d62b
    PUSH EAX                            ; 0057d62e
    MOV EAX,dword ptr [EBP + 0x76]      ; 0057d62f
    MOV EAX,dword ptr [EAX]             ; 0057d632
    MOV dword ptr [EBP + 0x5e],EAX      ; 0057d634
    MOV EAX,dword ptr [ESI]             ; 0057d637
    MOV dword ptr [EBP + 0x62],EAX      ; 0057d639
    MOV EAX,dword ptr [EDI]             ; 0057d63c
    MOV dword ptr [EBP + 0x66],EAX      ; 0057d63e
    LEA EAX,[EBP + 0x5e]                ; 0057d641
    PUSH EAX                            ; 0057d644
    CALL core_setedit.cpp_WriteActBackdrop_FUN_0057ce80 ; 0057d645
        ;   XREF to: 0057ce80 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_WriteActBackdrop_FUN_0057ce80()
    ADD ESP,0x20                        ; 0057d64a
    LEA ESP,[EBP + 0x7a]                ; 0057d64d
    POP EBP                             ; 0057d650
    POP EDI                             ; 0057d651
    POP ESI                             ; 0057d652
    POP EBX                             ; 0057d653
    RET                                 ; 0057d654


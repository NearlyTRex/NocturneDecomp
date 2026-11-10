; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_updateArmRecoilBlend_FUN_0056d3d0(CStranger *this_ptr,float delta_time,int is_weapon_active)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; int              Stack[0xc]:4   is_weapon_active
; Local Variables:
; undefined8       Stack[-0x178]:8  local_178
; undefined8       Stack[-0x170]:8  local_170
; undefined8       Stack[-0x168]:8  local_168
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined        Stack[-0x124]:1  local_124
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined        Stack[-0x100]:1  local_100
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0xd0]:1  local_d0
; undefined        Stack[-0xc4]:1  local_c4
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined        Stack[-0xa0]:1  local_a0
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
; undefined        Stack[-0x58]:1  local_58
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
;
; XREF[1]:
;   core_stranger.cpp_CStranger_processFrame_FUN_00563060 at 00563c0a
;
; Referenced Globals:
;   undefined4 DAT_005ebd45
;   undefined4 DAT_005ebd4d
;   undefined4 DAT_005ebd55
;   undefined4 DAT_005ebd5d
;   undefined4 DAT_005fc1cc
;   undefined4 DAT_005fc1d0
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.character_count
;   undefined4 DAT_0264be34
;   undefined4 DAT_0264be38
;
; Called Functions:
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;   core_setcolid.cpp_FUN_00535ee0
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0
;   core_skeleton.cpp_FUN_005469a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d3d0
        ;   Label: core_stranger.cpp_CStranger_updateArmRecoilBlend_FUN_0056d3d0
    PUSH ESI                            ; 0056d3d1
    PUSH EDI                            ; 0056d3d2
    PUSH EBP                            ; 0056d3d3
    MOV EBP,ESP                         ; 0056d3d4
    SUB ESP,0x164                       ; 0056d3d6
    AND ESP,0xfffffff8                  ; 0056d3dc
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0056d3df
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056d3e2
    MOV EDX,dword ptr [EBX + 0x25698]   ; 0056d3e5
    TEST EDX,EDX                        ; 0056d3eb
    JNZ 0x0056d497                      ; 0056d3ed
        ;   XREF to: 0056d497 (CONDITIONAL_JUMP)  ; LAB_0056d497
    XOR EAX,EAX                         ; 0056d3f3
        ;   Label: LAB_0056d3f3
    XOR EBX,EBX                         ; 0056d3f5
        ;   Label: LAB_0056d3f5
    MOV dword ptr [ESP + 0x24],EBX      ; 0056d3f7
    TEST EAX,EAX                        ; 0056d3fb
    JZ 0x0056d96f                       ; 0056d3fd
        ;   XREF to: 0056d96f (CONDITIONAL_JUMP)  ; LAB_0056d96f
    MOV dword ptr [ESP + 0x158],EBX     ; 0056d403
    MOV dword ptr [ESP + 0x15c],EBX     ; 0056d40a
    MOV EAX,[0x0061b5a8]                ; 0056d411 | g_CDemonSetPtr
        ;   Label: LAB_0056d411
    MOV EBX,dword ptr [ESP + 0x158]     ; 0056d416
    CMP EBX,dword ptr [EAX + 0x14f0a8]  ; 0056d41d | g_CDemonSetInstance.character_count
    JGE 0x0056d565                      ; 0056d423
        ;   XREF to: 0056d565 (CONDITIONAL_JUMP)  ; LAB_0056d565
    ADD EAX,dword ptr [ESP + 0x15c]     ; 0056d429
    MOV EBX,dword ptr [EAX + 0x14f0ac]  ; 0056d430
    LEA EAX,[EBX + 0x20]                ; 0056d436
    PUSH EAX                            ; 0056d439
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056d43a
    PUSH EAX                            ; 0056d43d
    LEA ESI,[ESP + 0x80]                ; 0056d43e
    LEA EDI,[ESP + 0x104]               ; 0056d445
    CALL core_actor.cpp_FUN_00408de0    ; 0056d44c
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x80]                ; 0056d451
    ADD ESP,0x8                         ; 0056d458
    MOVSD ES:EDI,ESI                    ; 0056d45b
    MOVSD ES:EDI,ESI                    ; 0056d45c
    MOVSD ES:EDI,ESI                    ; 0056d45d
    FLD float ptr [ESP + 0xfc]          ; 0056d45e
    FABS                                ; 0056d465
    FCOMP double ptr [0x005ebd4d]       ; 0056d467 | DAT_005ebd4d
    FNSTSW AX                           ; 0056d46d
    SAHF                                ; 0056d46f
    JBE 0x0056d4a9                      ; 0056d470
        ;   XREF to: 0056d4a9 (CONDITIONAL_JUMP)  ; LAB_0056d4a9
    MOV EDI,dword ptr [ESP + 0x158]     ; 0056d472
        ;   Label: LAB_0056d472
    MOV ESI,dword ptr [ESP + 0x15c]     ; 0056d479
    INC EDI                             ; 0056d480
    ADD ESI,0x4                         ; 0056d481
    MOV dword ptr [ESP + 0x158],EDI     ; 0056d484
    MOV dword ptr [ESP + 0x15c],ESI     ; 0056d48b
    JMP 0x0056d411                      ; 0056d492
        ;   XREF to: 0056d411 (UNCONDITIONAL_JUMP)  ; LAB_0056d411
    CMP dword ptr [EDX + 0x43c],0x0     ; 0056d497
        ;   Label: LAB_0056d497
    JZ 0x0056d3f5                       ; 0056d49e
        ;   XREF to: 0056d3f5 (CONDITIONAL_JUMP)  ; LAB_0056d3f5
    JMP 0x0056d3f3                      ; 0056d4a4
        ;   XREF to: 0056d3f3 (UNCONDITIONAL_JUMP)  ; LAB_0056d3f3
    FLD float ptr [ESP + 0x100]         ; 0056d4a9
        ;   Label: LAB_0056d4a9
    FABS                                ; 0056d4b0
    FCOMP double ptr [0x005ebd55]       ; 0056d4b2 | DAT_005ebd55
    FNSTSW AX                           ; 0056d4b8
    SAHF                                ; 0056d4ba
    JA 0x0056d472                       ; 0056d4bb
        ;   XREF to: 0056d472 (CONDITIONAL_JUMP)  ; LAB_0056d472
    FLDZ                                ; 0056d4bd
    FCOMP float ptr [ESP + 0x104]       ; 0056d4bf
    FNSTSW AX                           ; 0056d4c6
    SAHF                                ; 0056d4c8
    JA 0x0056d472                       ; 0056d4c9
        ;   XREF to: 0056d472 (CONDITIONAL_JUMP)  ; LAB_0056d472
    CMP dword ptr [ESP + 0x104],0x40c00000 ; 0056d4cb
    JG 0x0056d472                       ; 0056d4d6
        ;   XREF to: 0056d472 (CONDITIONAL_JUMP)  ; LAB_0056d472
    CMP EBX,dword ptr [EBP + 0x14]      ; 0056d4d8
    JZ 0x0056d472                       ; 0056d4db
        ;   XREF to: 0056d472 (CONDITIONAL_JUMP)  ; LAB_0056d472
    PUSH EBX                            ; 0056d4dd
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0056d4de
    CALL dword ptr [EAX + 0x114]        ; 0056d4e4
    ADD ESP,0x4                         ; 0056d4ea
    TEST EAX,EAX                        ; 0056d4ed
    JNZ 0x0056d472                      ; 0056d4ef
        ;   XREF to: 0056d472 (CONDITIONAL_JUMP)  ; LAB_0056d472
    LEA EAX,[ESP + 0x2c]                ; 0056d4f1
    PUSH EAX                            ; 0056d4f5
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0 ; 0056d4f6
        ;   XREF to: 00537fa0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 0056d4fb
    LEA ESI,[ESP + 0x2c]                ; 0056d4fe
    PUSH ESI                            ; 0056d502
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0056d503
    PUSH EBX                            ; 0056d509
    CALL dword ptr [EAX + 0x44]         ; 0056d50a
    ADD ESP,0x8                         ; 0056d50d
    CMP EAX,0x2                         ; 0056d510
    JNZ 0x0056d472                      ; 0056d513
        ;   XREF to: 0056d472 (CONDITIONAL_JUMP)  ; LAB_0056d472
    FLD float ptr [ESP + 0x104]         ; 0056d519
    FSUB float ptr [ESP + 0x48]         ; 0056d520
    FADD double ptr [0x005ebd5d]        ; 0056d524 | DAT_005ebd5d
    FMUL double ptr [0x005ebd45]        ; 0056d52a | DAT_005ebd45
    FLD1                                ; 0056d530
    FSUBRP                              ; 0056d532
    FST float ptr [ESP + 0x28]          ; 0056d534
    FCOMP float ptr [ESP + 0x24]        ; 0056d538
    FNSTSW AX                           ; 0056d53c
    SAHF                                ; 0056d53e
    JC 0x0056d472                       ; 0056d53f
        ;   XREF to: 0056d472 (CONDITIONAL_JUMP)  ; LAB_0056d472
    FLD float ptr [ESP + 0x28]          ; 0056d545
    FLDZ                                ; 0056d549
    FCOMPP                              ; 0056d54b
    FNSTSW AX                           ; 0056d54d
    SAHF                                ; 0056d54f
    JBE 0x0056d558                      ; 0056d550
        ;   XREF to: 0056d558 (CONDITIONAL_JUMP)  ; LAB_0056d558
    XOR EBX,EBX                         ; 0056d552
    MOV dword ptr [ESP + 0x28],EBX      ; 0056d554
    MOV EAX,dword ptr [ESP + 0x28]      ; 0056d558
        ;   Label: LAB_0056d558
    MOV dword ptr [ESP + 0x24],EAX      ; 0056d55c
    JMP 0x0056d472                      ; 0056d560
        ;   XREF to: 0056d472 (UNCONDITIONAL_JUMP)  ; LAB_0056d472
    PUSH EAX                            ; 0056d565 | g_CDemonSetInstance
        ;   Label: LAB_0056d565
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 0056d566
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0056d56b
    MOV ECX,dword ptr [EBP + 0x14]      ; 0056d56e
    PUSH ECX                            ; 0056d571
    MOV EBX,dword ptr [0x0061b5a8]      ; 0056d572 | g_CDemonSetPtr
    PUSH EBX                            ; 0056d578 | g_CDemonSetInstance
    MOV ESI,0x40600000                  ; 0056d579
    MOV EDI,0x3fc00000                  ; 0056d57e
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0056d583
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0056d588
    XOR EAX,EAX                         ; 0056d58b
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056d58d
    MOV dword ptr [ESP + 0x6c],EAX      ; 0056d590
    MOV dword ptr [ESP + 0x70],EAX      ; 0056d594
    LEA EAX,[ESP + 0x6c]                ; 0056d598
    MOV dword ptr [ESP + 0x154],ESI     ; 0056d59c
    PUSH EAX                            ; 0056d5a3
    MOV dword ptr [ESP + 0x154],EDI     ; 0056d5a4
    MOV dword ptr [ESP + 0x78],ESI      ; 0056d5ab
    PUSH EBX                            ; 0056d5af
    LEA ESI,[ESP + 0x128]               ; 0056d5b0
    LEA EDI,[ESP + 0x140]               ; 0056d5b7
    CALL core_actor.cpp_FUN_00408cf0    ; 0056d5be
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0x128]               ; 0056d5c3
    LEA EBX,[ESP + 0x140]               ; 0056d5ca
    ADD ESP,0x8                         ; 0056d5d1
    LEA EAX,[ESP + 0xc0]                ; 0056d5d4
    MOVSD ES:EDI,ESI                    ; 0056d5db
    MOVSD ES:EDI,ESI                    ; 0056d5dc
    MOVSD ES:EDI,ESI                    ; 0056d5dd
    CMP EAX,EBX                         ; 0056d5de
    JZ 0x0056d60c                       ; 0056d5e0
        ;   XREF to: 0056d60c (CONDITIONAL_JUMP)  ; LAB_0056d60c
    MOV EAX,dword ptr [ESP + 0x138]     ; 0056d5e2
    MOV dword ptr [ESP + 0xc0],EAX      ; 0056d5e9
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0056d5f0
    MOV dword ptr [ESP + 0xc4],EAX      ; 0056d5f7
    MOV EAX,dword ptr [ESP + 0x140]     ; 0056d5fe
    MOV dword ptr [ESP + 0xc8],EAX      ; 0056d605
    MOV ESI,dword ptr [0x0264be34]      ; 0056d60c | DAT_0264be34
        ;   Label: LAB_0056d60c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056d612
    PUSH ESI                            ; 0056d615
    ADD EAX,0x2b4                       ; 0056d616
    PUSH EAX                            ; 0056d61b
    LEA ESI,[ESP + 0xbc]                ; 0056d61c
    LEA EDI,[ESP + 0xe0]                ; 0056d623
    CALL core_skeleton.cpp_FUN_005469a0 ; 0056d62a
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    LEA ESI,[ESP + 0xbc]                ; 0056d62f
    ADD ESP,0x8                         ; 0056d636
    LEA EAX,[ESP + 0xd8]                ; 0056d639
    MOVSD ES:EDI,ESI                    ; 0056d640
    MOVSD ES:EDI,ESI                    ; 0056d641
    MOVSD ES:EDI,ESI                    ; 0056d642
    PUSH EAX                            ; 0056d643
    MOV EDI,dword ptr [EBP + 0x14]      ; 0056d644
    PUSH EDI                            ; 0056d647
    LEA ESI,[ESP + 0x68]                ; 0056d648
    LEA EBX,[ESP + 0x110]               ; 0056d64c
    CALL core_actor.cpp_FUN_00408d70    ; 0056d653
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA EDI,[ESP + 0x98]                ; 0056d658
    LEA ESI,[ESP + 0x68]                ; 0056d65f
    ADD ESP,0x8                         ; 0056d663
    LEA EAX,[ESP + 0x90]                ; 0056d666
    MOVSD ES:EDI,ESI                    ; 0056d66d
    MOVSD ES:EDI,ESI                    ; 0056d66e
    MOVSD ES:EDI,ESI                    ; 0056d66f
    CMP EBX,EAX                         ; 0056d670
    JZ 0x0056d69e                       ; 0056d672
        ;   XREF to: 0056d69e (CONDITIONAL_JUMP)  ; LAB_0056d69e
    MOV EAX,dword ptr [ESP + 0x90]      ; 0056d674
    MOV dword ptr [ESP + 0x108],EAX     ; 0056d67b
    MOV EAX,dword ptr [ESP + 0x94]      ; 0056d682
    MOV dword ptr [ESP + 0x10c],EAX     ; 0056d689
    MOV EAX,dword ptr [ESP + 0x98]      ; 0056d690
    MOV dword ptr [ESP + 0x110],EAX     ; 0056d697
    FLD float ptr [ESP + 0x108]         ; 0056d69e
        ;   Label: LAB_0056d69e
    FLD float ptr [ESP + 0x10c]         ; 0056d6a5
    FLD float ptr [ESP + 0x110]         ; 0056d6ac
    LEA EDI,[ESP + 0xcc]                ; 0056d6b3
    LEA ESI,[ESP + 0xe4]                ; 0056d6ba
    LEA EAX,[ESP + 0xcc]                ; 0056d6c1
    LEA EBX,[ESP + 0x114]               ; 0056d6c8
    FXCH ST2                            ; 0056d6cf
    FADD float ptr [ESP + 0xc0]         ; 0056d6d1
    FXCH                                ; 0056d6d8
    FADD float ptr [ESP + 0xc4]         ; 0056d6da
    FXCH ST2                            ; 0056d6e1
    FADD float ptr [ESP + 0xc8]         ; 0056d6e3
    FXCH ST2                            ; 0056d6ea
    FSTP float ptr [ESP + 0xe8]         ; 0056d6ec
    FXCH                                ; 0056d6f3
    FSTP float ptr [ESP + 0xec]         ; 0056d6f5
    FSTP float ptr [ESP + 0xe4]         ; 0056d6fc
    MOVSD ES:EDI,ESI                    ; 0056d703
    MOVSD ES:EDI,ESI                    ; 0056d704
    MOVSD ES:EDI,ESI                    ; 0056d705
    CMP EBX,EAX                         ; 0056d706
    JZ 0x0056d734                       ; 0056d708
        ;   XREF to: 0056d734 (CONDITIONAL_JUMP)  ; LAB_0056d734
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0056d70a
    MOV dword ptr [ESP + 0x114],EAX     ; 0056d711
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0056d718
    MOV dword ptr [ESP + 0x118],EAX     ; 0056d71f
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0056d726
    MOV dword ptr [ESP + 0x11c],EAX     ; 0056d72d
    LEA EAX,[ESP + 0x114]               ; 0056d734
        ;   Label: LAB_0056d734
    PUSH EAX                            ; 0056d73b
    LEA EAX,[ESP + 0x10c]               ; 0056d73c
    PUSH EAX                            ; 0056d743
    MOV EAX,[0x0061b5a8]                ; 0056d744 | g_CDemonSetPtr
    PUSH EAX                            ; 0056d749 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00535ee0 ; 0056d74a
        ;   XREF to: 00535ee0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00535ee0()
    MOV dword ptr [ESP + 0x16c],EAX     ; 0056d74f
    FLD float ptr [ESP + 0x16c]         ; 0056d756
    ADD ESP,0xc                         ; 0056d75d
    FLDZ                                ; 0056d760
    FXCH                                ; 0056d762
    FST float ptr [ESP + 0x20]          ; 0056d764
    FSTP double ptr [ESP + 0x8]         ; 0056d768
    FCOMP double ptr [ESP + 0x8]        ; 0056d76c
    FNSTSW AX                           ; 0056d770
    SAHF                                ; 0056d772
    JA 0x0056d7b7                       ; 0056d773
        ;   XREF to: 0056d7b7 (CONDITIONAL_JUMP)  ; LAB_0056d7b7
    FLD1                                ; 0056d775
    FCOMP double ptr [ESP + 0x8]        ; 0056d777
    FNSTSW AX                           ; 0056d77b
    SAHF                                ; 0056d77d
    JBE 0x0056d7b7                      ; 0056d77e
        ;   XREF to: 0056d7b7 (CONDITIONAL_JUMP)  ; LAB_0056d7b7
    FLD float ptr [ESP + 0x154]         ; 0056d780
    FLD float ptr [ESP + 0x20]          ; 0056d787
    FMUL ST1                            ; 0056d78b
    FLD float ptr [ESP + 0x150]         ; 0056d78d
    FXCH                                ; 0056d794
    FSUB ST0,ST1                        ; 0056d796
    FXCH ST2                            ; 0056d798
    FSUBRP                              ; 0056d79a
    FDIVP                               ; 0056d79c
    FLD1                                ; 0056d79e
    FSUBRP                              ; 0056d7a0
    FST float ptr [ESP + 0x20]          ; 0056d7a2
    FCOMP float ptr [ESP + 0x24]        ; 0056d7a6
    FNSTSW AX                           ; 0056d7aa
    SAHF                                ; 0056d7ac
    JBE 0x0056d7b7                      ; 0056d7ad
        ;   XREF to: 0056d7b7 (CONDITIONAL_JUMP)  ; LAB_0056d7b7
    MOV EAX,dword ptr [ESP + 0x20]      ; 0056d7af
    MOV dword ptr [ESP + 0x24],EAX      ; 0056d7b3
    MOV EDX,dword ptr [0x0264be38]      ; 0056d7b7 | DAT_0264be38
        ;   Label: LAB_0056d7b7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056d7bd
    PUSH EDX                            ; 0056d7c0
    ADD EAX,0x2b4                       ; 0056d7c1
    LEA ESI,[ESP + 0xac]                ; 0056d7c6
    PUSH EAX                            ; 0056d7cd
    LEA EDI,[ESP + 0xa4]                ; 0056d7ce
    LEA EBX,[ESP + 0x134]               ; 0056d7d5
    CALL core_skeleton.cpp_FUN_005469a0 ; 0056d7dc
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    LEA ESI,[ESP + 0xb0]                ; 0056d7e1
    ADD ESP,0x8                         ; 0056d7e8
    LEA EAX,[ESP + 0x9c]                ; 0056d7eb
    MOV ECX,dword ptr [EBP + 0x14]      ; 0056d7f2
    PUSH EAX                            ; 0056d7f5
    MOVSD ES:EDI,ESI                    ; 0056d7f6
    MOVSD ES:EDI,ESI                    ; 0056d7f7
    MOVSD ES:EDI,ESI                    ; 0056d7f8
    PUSH ECX                            ; 0056d7f9
    LEA ESI,[ESP + 0x5c]                ; 0056d7fa
    LEA EDI,[ESP + 0x134]               ; 0056d7fe
    CALL core_actor.cpp_FUN_00408d70    ; 0056d805
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x5c]                ; 0056d80a
    ADD ESP,0x8                         ; 0056d80e
    LEA EAX,[ESP + 0x108]               ; 0056d811
    MOVSD ES:EDI,ESI                    ; 0056d818
    MOVSD ES:EDI,ESI                    ; 0056d819
    MOVSD ES:EDI,ESI                    ; 0056d81a
    CMP EAX,EBX                         ; 0056d81b
    JZ 0x0056d849                       ; 0056d81d
        ;   XREF to: 0056d849 (CONDITIONAL_JUMP)  ; LAB_0056d849
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0056d81f
    MOV dword ptr [ESP + 0x108],EAX     ; 0056d826
    MOV EAX,dword ptr [ESP + 0x130]     ; 0056d82d
    MOV dword ptr [ESP + 0x10c],EAX     ; 0056d834
    MOV EAX,dword ptr [ESP + 0x134]     ; 0056d83b
    MOV dword ptr [ESP + 0x110],EAX     ; 0056d842
    FLD float ptr [ESP + 0x108]         ; 0056d849
        ;   Label: LAB_0056d849
    FLD float ptr [ESP + 0x10c]         ; 0056d850
    FLD float ptr [ESP + 0x110]         ; 0056d857
    LEA EDI,[ESP + 0xf0]                ; 0056d85e
    LEA ESI,[ESP + 0x84]                ; 0056d865
    LEA EBX,[ESP + 0xf0]                ; 0056d86c
    LEA EAX,[ESP + 0x114]               ; 0056d873
    FXCH ST2                            ; 0056d87a
    FADD float ptr [ESP + 0xc0]         ; 0056d87c
    FXCH                                ; 0056d883
    FADD float ptr [ESP + 0xc4]         ; 0056d885
    FXCH ST2                            ; 0056d88c
    FADD float ptr [ESP + 0xc8]         ; 0056d88e
    FXCH ST2                            ; 0056d895
    FSTP float ptr [ESP + 0x88]         ; 0056d897
    FXCH                                ; 0056d89e
    FSTP float ptr [ESP + 0x8c]         ; 0056d8a0
    FSTP float ptr [ESP + 0x84]         ; 0056d8a7
    MOVSD ES:EDI,ESI                    ; 0056d8ae
    MOVSD ES:EDI,ESI                    ; 0056d8af
    MOVSD ES:EDI,ESI                    ; 0056d8b0
    CMP EAX,EBX                         ; 0056d8b1
    JZ 0x0056d8df                       ; 0056d8b3
        ;   XREF to: 0056d8df (CONDITIONAL_JUMP)  ; LAB_0056d8df
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0056d8b5
    MOV dword ptr [ESP + 0x114],EAX     ; 0056d8bc
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0056d8c3
    MOV dword ptr [ESP + 0x118],EAX     ; 0056d8ca
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0056d8d1
    MOV dword ptr [ESP + 0x11c],EAX     ; 0056d8d8
    LEA EAX,[ESP + 0x114]               ; 0056d8df
        ;   Label: LAB_0056d8df
    PUSH EAX                            ; 0056d8e6
    LEA EAX,[ESP + 0x10c]               ; 0056d8e7
    PUSH EAX                            ; 0056d8ee
    MOV EBX,dword ptr [0x0061b5a8]      ; 0056d8ef | g_CDemonSetPtr
    PUSH EBX                            ; 0056d8f5 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00535ee0 ; 0056d8f6
        ;   XREF to: 00535ee0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00535ee0()
    MOV dword ptr [ESP + 0x16c],EAX     ; 0056d8fb
    FLD float ptr [ESP + 0x16c]         ; 0056d902
    ADD ESP,0xc                         ; 0056d909
    FLDZ                                ; 0056d90c
    FXCH                                ; 0056d90e
    FST float ptr [ESP + 0x18]          ; 0056d910
    FSTP double ptr [ESP]               ; 0056d914
    FCOMP double ptr [ESP]              ; 0056d917
    FNSTSW AX                           ; 0056d91a
    SAHF                                ; 0056d91c
    JA 0x0056d960                       ; 0056d91d
        ;   XREF to: 0056d960 (CONDITIONAL_JUMP)  ; LAB_0056d960
    FLD1                                ; 0056d91f
    FCOMP double ptr [ESP]              ; 0056d921
    FNSTSW AX                           ; 0056d924
    SAHF                                ; 0056d926
    JBE 0x0056d960                      ; 0056d927
        ;   XREF to: 0056d960 (CONDITIONAL_JUMP)  ; LAB_0056d960
    FLD float ptr [ESP + 0x154]         ; 0056d929
    FLD float ptr [ESP + 0x18]          ; 0056d930
    FMUL ST1                            ; 0056d934
    FLD float ptr [ESP + 0x150]         ; 0056d936
    FXCH                                ; 0056d93d
    FSUB ST0,ST1                        ; 0056d93f
    FXCH ST2                            ; 0056d941
    FSUBRP                              ; 0056d943
    FDIVP                               ; 0056d945
    FLD1                                ; 0056d947
    FSUBRP                              ; 0056d949
    FST float ptr [ESP + 0x18]          ; 0056d94b
    FCOMP float ptr [ESP + 0x24]        ; 0056d94f
    FNSTSW AX                           ; 0056d953
    SAHF                                ; 0056d955
    JBE 0x0056d960                      ; 0056d956
        ;   XREF to: 0056d960 (CONDITIONAL_JUMP)  ; LAB_0056d960
    MOV EAX,dword ptr [ESP + 0x18]      ; 0056d958
    MOV dword ptr [ESP + 0x24],EAX      ; 0056d95c
    MOV ESI,dword ptr [0x0061b5a8]      ; 0056d960 | g_CDemonSetPtr
        ;   Label: LAB_0056d960
    PUSH ESI                            ; 0056d966 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 0056d967
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0056d96c
    FLD float ptr [ESP + 0x24]          ; 0056d96f
        ;   Label: LAB_0056d96f
    FLD1                                ; 0056d973
    FCOMPP                              ; 0056d975
    FNSTSW AX                           ; 0056d977
    SAHF                                ; 0056d979
    JNC 0x0056d984                      ; 0056d97a
        ;   XREF to: 0056d984 (CONDITIONAL_JUMP)  ; LAB_0056d984
    MOV dword ptr [ESP + 0x24],0x3f800000 ; 0056d97c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056d984
        ;   Label: LAB_0056d984
    FLD float ptr [ESP + 0x24]          ; 0056d987
    FSUB float ptr [EAX + 0x256f8]      ; 0056d98b
    FLDZ                                ; 0056d991
    FXCH                                ; 0056d993
    FST float ptr [ESP + 0x1c]          ; 0056d995
    FSTP double ptr [ESP + 0x10]        ; 0056d999
    FCOMP double ptr [ESP + 0x10]       ; 0056d99d
    FNSTSW AX                           ; 0056d9a1
    SAHF                                ; 0056d9a3
    JBE 0x0056da03                      ; 0056d9a4
        ;   XREF to: 0056da03 (CONDITIONAL_JUMP)  ; LAB_0056da03
    FLD1                                ; 0056d9a6
    FDIV float ptr [0x005fc1d0]         ; 0056d9a8 | DAT_005fc1d0
    FLD float ptr [EBP + 0x18]          ; 0056d9ae
    FCHS                                ; 0056d9b1
    FXCH                                ; 0056d9b3
    FSTP float ptr [ESP + 0x144]        ; 0056d9b5
    FMUL float ptr [ESP + 0x144]        ; 0056d9bc
    FLD float ptr [ESP + 0x1c]          ; 0056d9c3
    FXCH                                ; 0056d9c7
    FSTP float ptr [ESP + 0x14c]        ; 0056d9c9
    FCOMP float ptr [ESP + 0x14c]       ; 0056d9d0
    FNSTSW AX                           ; 0056d9d7
    SAHF                                ; 0056d9d9
    JC 0x0056d9f6                       ; 0056d9da
        ;   XREF to: 0056d9f6 (CONDITIONAL_JUMP)  ; LAB_0056d9f6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056d9dc
        ;   Label: LAB_0056d9dc
    FLD float ptr [EAX + 0x256f8]       ; 0056d9df
    FADD float ptr [ESP + 0x1c]         ; 0056d9e5
    FSTP float ptr [EAX + 0x256f8]      ; 0056d9e9
    MOV ESP,EBP                         ; 0056d9ef
    POP EBP                             ; 0056d9f1
    POP EDI                             ; 0056d9f2
    POP ESI                             ; 0056d9f3
    POP EBX                             ; 0056d9f4
    RET                                 ; 0056d9f5
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0056d9f6
        ;   Label: LAB_0056d9f6
    MOV dword ptr [ESP + 0x1c],EAX      ; 0056d9fd
    JMP 0x0056d9dc                      ; 0056da01
        ;   XREF to: 0056d9dc (UNCONDITIONAL_JUMP)  ; LAB_0056d9dc
    JNC 0x0056d9dc                      ; 0056da03
        ;   XREF to: 0056d9dc (CONDITIONAL_JUMP)  ; LAB_0056d9dc
        ;   Label: LAB_0056da03
    FLD float ptr [EBP + 0x18]          ; 0056da05
    FDIV float ptr [0x005fc1cc]         ; 0056da08 | DAT_005fc1cc
    FLD float ptr [ESP + 0x1c]          ; 0056da0e
    FXCH                                ; 0056da12
    FSTP float ptr [ESP + 0x148]        ; 0056da14
    FCOMP float ptr [ESP + 0x148]       ; 0056da1b
    FNSTSW AX                           ; 0056da22
    SAHF                                ; 0056da24
    JBE 0x0056d9dc                      ; 0056da25
        ;   XREF to: 0056d9dc (CONDITIONAL_JUMP)  ; LAB_0056d9dc
    MOV EAX,dword ptr [ESP + 0x148]     ; 0056da27
    MOV dword ptr [ESP + 0x1c],EAX      ; 0056da2e
    JMP 0x0056d9dc                      ; 0056da32
        ;   XREF to: 0056d9dc (UNCONDITIONAL_JUMP)  ; LAB_0056d9dc


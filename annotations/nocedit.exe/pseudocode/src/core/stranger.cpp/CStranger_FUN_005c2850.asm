; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_stranger.cpp_CStranger_FUN_005c2850()
;
; Local Variables:
; undefined8       Stack[-0x108]:8  local_108
; undefined8       Stack[-0x100]:8  local_100
; undefined8       Stack[-0xf8]:8  local_f8
; undefined8       Stack[-0xe8]:8  local_e8
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined1       Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined1       Stack[-0xa4]:1  local_a4
; undefined1       Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_005c5b90 at 005c5c37
;
; Referenced Globals:
;   TerminatedCString s_actionPending_d_stranger_00653b64
;   TerminatedCString s_Delta_to_dest_3_2f_3_2f__00653b8c
;   double DOUBLE_00653bb4 = 0.990000000000000
;   double DOUBLE_00653bbc = 3
;   double DOUBLE_00653bc4 = 2
;   double DOUBLE_00653bcc = 4
;   CConsole* g_CConsolePtr = 0083b1a4
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CConsole g_ConsolePtr
;   undefined4 g_CCrateClassInfo.name_hash
;   undefined4 g_CActorDestinationClassInfo.name_hash
;   CEditorTools g_CEditorToolsPtr
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_list_ptr
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_charactr.cpp_CCharacter_FUN_0042e840
;   core_dest.cpp_FUN_0046fd50
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0
;   core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470
;   core_stranger.cpp_FUN_005bb010
;   engine_console.cpp_CConsole_printf_FUN_00441890
;   shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2850
        ;   Label: core_stranger.cpp_CStranger_FUN_005c2850
    PUSH ESI                            ; 005c2851
    PUSH EDI                            ; 005c2852
    PUSH EBP                            ; 005c2853
    MOV EBP,ESP                         ; 005c2854
    SUB ESP,0xdc                        ; 005c2856
    AND ESP,0xfffffff8                  ; 005c285c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005c285f
    MOV EDX,dword ptr [EBX + 0x1fba0]   ; 005c2862
    TEST EDX,EDX                        ; 005c2868
    JNZ 0x005c2fab                      ; 005c286a
        ;   XREF to: 005c2fab (CONDITIONAL_JUMP)  ; LAB_005c2fab
    CMP dword ptr [EBX + 0x24f8],0x0    ; 005c2870
    JZ 0x005c2fab                       ; 005c2877
        ;   XREF to: 005c2fab (CONDITIONAL_JUMP)  ; LAB_005c2fab
    CMP dword ptr [EBX + 0x2a8c],0xe    ; 005c287d
    JZ 0x005c28ad                       ; 005c2884
        ;   XREF to: 005c28ad (CONDITIONAL_JUMP)  ; LAB_005c28ad
    PUSH EDX                            ; 005c2886
    PUSH EBX                            ; 005c2887
    CALL core_charactr.cpp_CCharacter_FUN_0042e840 ; 005c2888
        ;   XREF to: 0042e840 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_FUN_0042e840()
    MOV dword ptr [ESP + 0xe0],EAX      ; 005c288d
    FLD float ptr [ESP + 0xe0]          ; 005c2894
    ADD ESP,0x8                         ; 005c289b
    FCOMP double ptr [0x00653bb4]       ; 005c289e | DOUBLE_00653bb4
    FNSTSW AX                           ; 005c28a4
    SAHF                                ; 005c28a6
    JC 0x005c2fab                       ; 005c28a7
        ;   XREF to: 005c2fab (CONDITIONAL_JUMP)  ; LAB_005c2fab
    PUSH 0x0                            ; 005c28ad
        ;   Label: LAB_005c28ad
    LEA EAX,[EBX + 0x158]               ; 005c28af
    PUSH EAX                            ; 005c28b5
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005c28b6
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0xe0],EAX      ; 005c28bb
    FLD float ptr [ESP + 0xe0]          ; 005c28c2
    FLD1                                ; 005c28c9
    ADD ESP,0x8                         ; 005c28cb
    FCOMPP                              ; 005c28ce
    FNSTSW AX                           ; 005c28d0
    SAHF                                ; 005c28d2
    JA 0x005c2fab                       ; 005c28d3
        ;   XREF to: 005c2fab (CONDITIONAL_JUMP)  ; LAB_005c2fab
    MOV EAX,dword ptr [EBX + 0x24f8]    ; 005c28d9
    TEST EAX,EAX                        ; 005c28df
    JNZ 0x005c2961                      ; 005c28e1
        ;   XREF to: 005c2961 (CONDITIONAL_JUMP)  ; LAB_005c2961
    XOR EDX,EDX                         ; 005c28e7
        ;   Label: LAB_005c28e7
    MOV dword ptr [ESP + 0xc8],EDX      ; 005c28e9
    MOV dword ptr [ESP + 0xcc],EDX      ; 005c28f0
    MOV EAX,[0x006810c8]                ; 005c28f7 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_005c28f7
    MOV ESI,dword ptr [ESP + 0xc8]      ; 005c28fc
    CMP ESI,dword ptr [EAX + 0x14d154]  ; 005c2903 | g_CDemonSetInstance.actor_list_ptr
    JGE 0x005c2d0c                      ; 005c2909
        ;   XREF to: 005c2d0c (CONDITIONAL_JUMP)  ; LAB_005c2d0c
    MOV ESI,dword ptr [ESP + 0xcc]      ; 005c290f
    MOV ECX,dword ptr [0x020a4874]      ; 005c2916 | g_CActorDestinationClassInfo.name_hash
    ADD EAX,ESI                         ; 005c291c
    PUSH ECX                            ; 005c291e
    MOV EDI,dword ptr [EAX + 0x14d158]  ; 005c291f | g_CDemonSetInstance.actor_list_data[0] | DAT_032613d4
    PUSH EDI                            ; 005c2925
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005c2926
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005c292b
    MOV ESI,EAX                         ; 005c292e
    MOV dword ptr [ESP + 0xb8],EAX      ; 005c2930
    TEST EAX,EAX                        ; 005c2937
    JNZ 0x005c2bb4                      ; 005c2939
        ;   XREF to: 005c2bb4 (CONDITIONAL_JUMP)  ; LAB_005c2bb4
    MOV ESI,dword ptr [ESP + 0xc8]      ; 005c293f
        ;   Label: LAB_005c293f
    MOV ECX,dword ptr [ESP + 0xcc]      ; 005c2946
    INC ESI                             ; 005c294d
    ADD ECX,0x4                         ; 005c294e
    MOV dword ptr [ESP + 0xc8],ESI      ; 005c2951
    MOV dword ptr [ESP + 0xcc],ECX      ; 005c2958
    JMP 0x005c28f7                      ; 005c295f
        ;   XREF to: 005c28f7 (UNCONDITIONAL_JUMP)  ; LAB_005c28f7
    PUSH EBX                            ; 005c2961
        ;   Label: LAB_005c2961
    MOV ESI,dword ptr [EAX + 0x154]     ; 005c2962
    PUSH EAX                            ; 005c2968
    CALL dword ptr [ESI + 0x7c]         ; 005c2969
    ADD ESP,0x8                         ; 005c296c
    CMP EAX,0x4                         ; 005c296f
    SETZ AL                             ; 005c2972
    AND EAX,0xff                        ; 005c2975
    JZ 0x005c28e7                       ; 005c297a
        ;   XREF to: 005c28e7 (CONDITIONAL_JUMP)  ; LAB_005c28e7
    XOR EDI,EDI                         ; 005c2980
    MOV dword ptr [ESP + 0xc4],EDI      ; 005c2982
    MOV dword ptr [ESP + 0xd0],EDI      ; 005c2989
        ;   Label: LAB_005c2989
    MOV EAX,[0x006810c8]                ; 005c2990 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV ESI,dword ptr [ESP + 0xc4]      ; 005c2995
    CMP ESI,dword ptr [EAX + 0x14d154]  ; 005c299c | g_CDemonSetInstance.actor_list_ptr
    JGE 0x005c2d0c                      ; 005c29a2
        ;   XREF to: 005c2d0c (CONDITIONAL_JUMP)  ; LAB_005c2d0c
    MOV ECX,dword ptr [ESP + 0xd0]      ; 005c29a8
    MOV EDX,dword ptr [0x020a4874]      ; 005c29af | g_CActorDestinationClassInfo.name_hash
    ADD EAX,ECX                         ; 005c29b5
    PUSH EDX                            ; 005c29b7
    MOV ESI,dword ptr [EAX + 0x14d158]  ; 005c29b8 | g_CDemonSetInstance.actor_list_data[0] | DAT_032613d4
    PUSH ESI                            ; 005c29be
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005c29bf
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005c29c4
    MOV ESI,EAX                         ; 005c29c7
    MOV dword ptr [ESP + 0xbc],EAX      ; 005c29c9
    TEST EAX,EAX                        ; 005c29d0
    JNZ 0x005c29ef                      ; 005c29d2
        ;   XREF to: 005c29ef (CONDITIONAL_JUMP)  ; LAB_005c29ef
    MOV EAX,dword ptr [ESP + 0xc4]      ; 005c29d4
        ;   Label: LAB_005c29d4
    MOV EDI,dword ptr [ESP + 0xd0]      ; 005c29db
    INC EAX                             ; 005c29e2
    ADD EDI,0x4                         ; 005c29e3
    MOV dword ptr [ESP + 0xc4],EAX      ; 005c29e6
    JMP 0x005c2989                      ; 005c29ed
        ;   XREF to: 005c2989 (UNCONDITIONAL_JUMP)  ; LAB_005c2989
    MOV EDI,dword ptr [EBX + 0x24f8]    ; 005c29ef
        ;   Label: LAB_005c29ef
    PUSH EDI                            ; 005c29f5
    PUSH EAX                            ; 005c29f6
    CALL core_dest.cpp_FUN_0046fd50     ; 005c29f7
        ;   XREF to: 0046fd50 (UNCONDITIONAL_CALL)  ; undefined core_dest.cpp_FUN_0046fd50()
    ADD ESP,0x8                         ; 005c29fc
    TEST EAX,EAX                        ; 005c29ff
    JZ 0x005c29d4                       ; 005c2a01
        ;   XREF to: 005c29d4 (CONDITIONAL_JUMP)  ; LAB_005c29d4
    MOV EAX,dword ptr [EBX + 0x24f8]    ; 005c2a03
    ADD EAX,0x20                        ; 005c2a09
    PUSH EAX                            ; 005c2a0c
    LEA EAX,[ESP + 0x44]                ; 005c2a0d
    PUSH EAX                            ; 005c2a11
    PUSH EBX                            ; 005c2a12
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005c2a13
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 005c2a18
    ADD ESI,0x20                        ; 005c2a1b
    PUSH ESI                            ; 005c2a1e
    MOV EDI,EAX                         ; 005c2a1f
    LEA EAX,[ESP + 0xb0]                ; 005c2a21
    PUSH EAX                            ; 005c2a28
    PUSH EBX                            ; 005c2a29
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005c2a2a
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    FLD float ptr [EAX]                 ; 005c2a2f
    FSUB float ptr [EDI]                ; 005c2a31
    ADD ESP,0xc                         ; 005c2a33
    FSTP float ptr [ESP + 0x58]         ; 005c2a36
    FLD float ptr [EAX + 0x4]           ; 005c2a3a
    FSUB float ptr [EDI + 0x4]          ; 005c2a3d
    FSTP float ptr [ESP + 0x5c]         ; 005c2a40
    FLD float ptr [EAX + 0x8]           ; 005c2a44
    FSUB float ptr [EDI + 0x8]          ; 005c2a47
    FLDZ                                ; 005c2a4a
    FXCH                                ; 005c2a4c
    FSTP float ptr [ESP + 0x60]         ; 005c2a4e
    FCOMP float ptr [ESP + 0x60]        ; 005c2a52
    FNSTSW AX                           ; 005c2a56
    SAHF                                ; 005c2a58
    JNC 0x005c29d4                      ; 005c2a59
        ;   XREF to: 005c29d4 (CONDITIONAL_JUMP)  ; LAB_005c29d4
    FLD float ptr [ESP + 0x60]          ; 005c2a5f
    FCOMP double ptr [0x00653bbc]       ; 005c2a63 | DOUBLE_00653bbc
    FNSTSW AX                           ; 005c2a69
    SAHF                                ; 005c2a6b
    JNC 0x005c29d4                      ; 005c2a6c
        ;   XREF to: 005c29d4 (CONDITIONAL_JUMP)  ; LAB_005c29d4
    FLD float ptr [ESP + 0x58]          ; 005c2a72
    FABS                                ; 005c2a76
    FCOMP double ptr [0x00653bc4]       ; 005c2a78 | DOUBLE_00653bc4
    FNSTSW AX                           ; 005c2a7e
    SAHF                                ; 005c2a80
    JNC 0x005c29d4                      ; 005c2a81
        ;   XREF to: 005c29d4 (CONDITIONAL_JUMP)  ; LAB_005c29d4
    FLD float ptr [ESP + 0x5c]          ; 005c2a87
    FLDZ                                ; 005c2a8b
    FXCH                                ; 005c2a8d
    FSTP double ptr [ESP]               ; 005c2a8f
    FCOMP double ptr [ESP]              ; 005c2a92
    FNSTSW AX                           ; 005c2a95
    SAHF                                ; 005c2a97
    JNC 0x005c29d4                      ; 005c2a98
        ;   XREF to: 005c29d4 (CONDITIONAL_JUMP)  ; LAB_005c29d4
    FLD double ptr [ESP]                ; 005c2a9e
    FCOMP double ptr [0x00653bcc]       ; 005c2aa1 | DOUBLE_00653bcc
    FNSTSW AX                           ; 005c2aa7
    SAHF                                ; 005c2aa9
    JNC 0x005c29d4                      ; 005c2aaa
        ;   XREF to: 005c29d4 (CONDITIONAL_JUMP)  ; LAB_005c29d4
    PUSH 0x1                            ; 005c2ab0
    PUSH 0x1a                           ; 005c2ab2
    LEA EAX,[EBX + 0x158]               ; 005c2ab4
    PUSH EAX                            ; 005c2aba
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005c2abb
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005c2ac0
    PUSH ESI                            ; 005c2ac3
    LEA EAX,[ESP + 0x8c]                ; 005c2ac4
    PUSH EAX                            ; 005c2acb
    PUSH EBX                            ; 005c2acc
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005c2acd
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    LEA ESI,[EBX + 0x1fc98]             ; 005c2ad2
    ADD ESP,0xc                         ; 005c2ad8
    CMP ESI,EAX                         ; 005c2adb
    JZ 0x005c2aef                       ; 005c2add
        ;   XREF to: 005c2aef (CONDITIONAL_JUMP)  ; LAB_005c2aef
    MOV EDX,dword ptr [EAX]             ; 005c2adf
    MOV dword ptr [ESI],EDX             ; 005c2ae1
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c2ae3
    MOV dword ptr [ESI + 0x4],EDX       ; 005c2ae6
    MOV EDX,dword ptr [EAX + 0x8]       ; 005c2ae9
    MOV dword ptr [ESI + 0x8],EDX       ; 005c2aec
    FLD float ptr [EBX + 0x1fcb4]       ; 005c2aef
        ;   Label: LAB_005c2aef
    MOV EAX,dword ptr [EBX + 0x24f8]    ; 005c2af5
    FSUB float ptr [EBX + 0x1fca8]      ; 005c2afb
    PUSH EAX                            ; 005c2b01
    FSTP float ptr [ESP + 0xd8]         ; 005c2b02
    CALL core_stranger.cpp_FUN_005bb010 ; 005c2b09
        ;   XREF to: 005bb010 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_FUN_005bb010()
    MOV dword ptr [ESP + 0xdc],EAX      ; 005c2b0e
    FLD float ptr [ESP + 0xdc]          ; 005c2b15
    ADD ESP,0x4                         ; 005c2b1c
    FSUBR float ptr [ESP + 0xd4]        ; 005c2b1f
    FADD float ptr [EBX + 0x1fc9c]      ; 005c2b26
    MOV EDX,dword ptr [EBX + 0x1fc38]   ; 005c2b2c
    FSTP float ptr [EBX + 0x1fc9c]      ; 005c2b32
    TEST EDX,EDX                        ; 005c2b38
    JZ 0x005c2b56                       ; 005c2b3a
        ;   XREF to: 005c2b56 (CONDITIONAL_JUMP)  ; LAB_005c2b56
    PUSH 0xe78                          ; 005c2b3c
    PUSH EDX                            ; 005c2b41
    PUSH 0x653b64                       ; 005c2b42 | = "actionPending = %d\nstranger.cpp line %d"
    MOV ESI,dword ptr [0x00678a60]      ; 005c2b47 | g_CEditorToolsPtr
    PUSH ESI                            ; 005c2b4d | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0 ; 005c2b4e
        ;   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 005c2b53
    MOV EAX,dword ptr [ESP + 0xbc]      ; 005c2b56
        ;   Label: LAB_005c2b56
    LEA ESI,[EBX + 0x1fbb8]             ; 005c2b5d
    ADD EAX,0x20                        ; 005c2b63
    MOV dword ptr [EBX + 0x1fc38],0x2   ; 005c2b66
    CMP ESI,EAX                         ; 005c2b70
    JZ 0x005c2b84                       ; 005c2b72
        ;   XREF to: 005c2b84 (CONDITIONAL_JUMP)  ; LAB_005c2b84
    MOV EDX,dword ptr [EAX]             ; 005c2b74
    MOV dword ptr [ESI],EDX             ; 005c2b76
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c2b78
    MOV dword ptr [ESI + 0x4],EDX       ; 005c2b7b
    MOV EDX,dword ptr [EAX + 0x8]       ; 005c2b7e
    MOV dword ptr [ESI + 0x8],EDX       ; 005c2b81
    MOV EAX,dword ptr [ESP + 0xbc]      ; 005c2b84
        ;   Label: LAB_005c2b84
    ADD EBX,0x1fbc4                     ; 005c2b8b
    ADD EAX,0x30                        ; 005c2b91
    CMP EBX,EAX                         ; 005c2b94
    JZ 0x005c2ba8                       ; 005c2b96
        ;   XREF to: 005c2ba8 (CONDITIONAL_JUMP)  ; LAB_005c2ba8
    MOV EDX,dword ptr [EAX]             ; 005c2b98
    MOV dword ptr [EBX],EDX             ; 005c2b9a
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c2b9c
    MOV dword ptr [EBX + 0x4],EDX       ; 005c2b9f
    MOV EDX,dword ptr [EAX + 0x8]       ; 005c2ba2
    MOV dword ptr [EBX + 0x8],EDX       ; 005c2ba5
    MOV EAX,0x1                         ; 005c2ba8
        ;   Label: LAB_005c2ba8
    MOV ESP,EBP                         ; 005c2bad
    POP EBP                             ; 005c2baf
    POP EDI                             ; 005c2bb0
    POP ESI                             ; 005c2bb1
    POP EBX                             ; 005c2bb2
    RET                                 ; 005c2bb3
    MOV EAX,dword ptr [EBX + 0x24f8]    ; 005c2bb4
        ;   Label: LAB_005c2bb4
    PUSH EAX                            ; 005c2bba
    PUSH ESI                            ; 005c2bbb
    CALL core_dest.cpp_FUN_0046fd50     ; 005c2bbc
        ;   XREF to: 0046fd50 (UNCONDITIONAL_CALL)  ; undefined core_dest.cpp_FUN_0046fd50()
    ADD ESP,0x8                         ; 005c2bc1
    TEST EAX,EAX                        ; 005c2bc4
    JZ 0x005c293f                       ; 005c2bc6
        ;   XREF to: 005c293f (CONDITIONAL_JUMP)  ; LAB_005c293f
    MOV EAX,dword ptr [EBX + 0x24f8]    ; 005c2bcc
    ADD EAX,0x20                        ; 005c2bd2
    PUSH EAX                            ; 005c2bd5
    LEA EAX,[ESP + 0x2c]                ; 005c2bd6
    PUSH EAX                            ; 005c2bda
    PUSH EBX                            ; 005c2bdb
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005c2bdc
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 005c2be1
    ADD ESI,0x20                        ; 005c2be4
    PUSH ESI                            ; 005c2be7
    MOV EDI,EAX                         ; 005c2be8
    LEA EAX,[ESP + 0x68]                ; 005c2bea
    PUSH EAX                            ; 005c2bee
    PUSH EBX                            ; 005c2bef
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005c2bf0
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    FLD float ptr [EAX]                 ; 005c2bf5
    FSUB float ptr [EDI]                ; 005c2bf7
    ADD ESP,0xc                         ; 005c2bf9
    FSTP float ptr [ESP + 0x10]         ; 005c2bfc
    FLD float ptr [EAX + 0x4]           ; 005c2c00
    FSUB float ptr [EDI + 0x4]          ; 005c2c03
    FSTP float ptr [ESP + 0x14]         ; 005c2c06
    FLD float ptr [EAX + 0x8]           ; 005c2c0a
    FSUB float ptr [EDI + 0x8]          ; 005c2c0d
    FST float ptr [ESP + 0x18]          ; 005c2c10
    SUB ESP,0x8                         ; 005c2c14
    FSTP double ptr [ESP]               ; 005c2c17
    FLD float ptr [ESP + 0x1c]          ; 005c2c1a
    SUB ESP,0x8                         ; 005c2c1e
    FSTP double ptr [ESP]               ; 005c2c21
    FLD float ptr [ESP + 0x20]          ; 005c2c24
    SUB ESP,0x8                         ; 005c2c28
    FSTP double ptr [ESP]               ; 005c2c2b
    PUSH 0x653b8c                       ; 005c2c2e | = "Delta to dest : %3.2f,%3.2f,%3.2f\n"
    MOV EDX,dword ptr [0x0066e8e0]      ; 005c2c33 | g_ConsolePtr | g_CConsolePtr
    PUSH EDX                            ; 005c2c39 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005c2c3a
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x20                        ; 005c2c3f
    FLDZ                                ; 005c2c42
    FCOMP float ptr [ESP + 0x18]        ; 005c2c44
    FNSTSW AX                           ; 005c2c48
    SAHF                                ; 005c2c4a
    JNC 0x005c293f                      ; 005c2c4b
        ;   XREF to: 005c293f (CONDITIONAL_JUMP)  ; LAB_005c293f
    FLD float ptr [ESP + 0x18]          ; 005c2c51
    FCOMP double ptr [0x00653bbc]       ; 005c2c55 | DOUBLE_00653bbc
    FNSTSW AX                           ; 005c2c5b
    SAHF                                ; 005c2c5d
    JNC 0x005c293f                      ; 005c2c5e
        ;   XREF to: 005c293f (CONDITIONAL_JUMP)  ; LAB_005c293f
    FLD float ptr [ESP + 0x10]          ; 005c2c64
    FABS                                ; 005c2c68
    FCOMP double ptr [0x00653bc4]       ; 005c2c6a | DOUBLE_00653bc4
    FNSTSW AX                           ; 005c2c70
    SAHF                                ; 005c2c72
    JNC 0x005c293f                      ; 005c2c73
        ;   XREF to: 005c293f (CONDITIONAL_JUMP)  ; LAB_005c293f
    FLD float ptr [ESP + 0x14]          ; 005c2c79
    FLDZ                                ; 005c2c7d
    FXCH                                ; 005c2c7f
    FSTP double ptr [ESP + 0x8]         ; 005c2c81
    FCOMP double ptr [ESP + 0x8]        ; 005c2c85
    FNSTSW AX                           ; 005c2c89
    SAHF                                ; 005c2c8b
    JNC 0x005c293f                      ; 005c2c8c
        ;   XREF to: 005c293f (CONDITIONAL_JUMP)  ; LAB_005c293f
    FLD double ptr [ESP + 0x8]          ; 005c2c92
    FCOMP double ptr [0x00653bcc]       ; 005c2c96 | DOUBLE_00653bcc
    FNSTSW AX                           ; 005c2c9c
    SAHF                                ; 005c2c9e
    JNC 0x005c293f                      ; 005c2c9f
        ;   XREF to: 005c293f (CONDITIONAL_JUMP)  ; LAB_005c293f
    LEA EAX,[EBX + 0x1fbb8]             ; 005c2ca5
    MOV dword ptr [EBX + 0x1fc38],0x2   ; 005c2cab
    CMP EAX,ESI                         ; 005c2cb5
    JZ 0x005c2cc9                       ; 005c2cb7
        ;   XREF to: 005c2cc9 (CONDITIONAL_JUMP)  ; LAB_005c2cc9
    MOV EDX,dword ptr [ESI]             ; 005c2cb9
    MOV dword ptr [EAX],EDX             ; 005c2cbb
    MOV EDX,dword ptr [ESI + 0x4]       ; 005c2cbd
    MOV dword ptr [EAX + 0x4],EDX       ; 005c2cc0
    MOV EDX,dword ptr [ESI + 0x8]       ; 005c2cc3
    MOV dword ptr [EAX + 0x8],EDX       ; 005c2cc6
    MOV ESI,dword ptr [ESP + 0xb8]      ; 005c2cc9
        ;   Label: LAB_005c2cc9
    LEA EAX,[EBX + 0x1fbc4]             ; 005c2cd0
    ADD ESI,0x30                        ; 005c2cd6
    CMP EAX,ESI                         ; 005c2cd9
    JZ 0x005c2ced                       ; 005c2cdb
        ;   XREF to: 005c2ced (CONDITIONAL_JUMP)  ; LAB_005c2ced
    MOV EDX,dword ptr [ESI]             ; 005c2cdd
    MOV dword ptr [EAX],EDX             ; 005c2cdf
    MOV EDX,dword ptr [ESI + 0x4]       ; 005c2ce1
    MOV dword ptr [EAX + 0x4],EDX       ; 005c2ce4
    MOV EDX,dword ptr [ESI + 0x8]       ; 005c2ce7
    MOV dword ptr [EAX + 0x8],EDX       ; 005c2cea
    PUSH 0x1                            ; 005c2ced
        ;   Label: LAB_005c2ced
    PUSH 0x16                           ; 005c2cef
    ADD EBX,0x158                       ; 005c2cf1
    PUSH EBX                            ; 005c2cf7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005c2cf8
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 005c2cfd
    ADD ESP,0xc                         ; 005c2d02
    MOV ESP,EBP                         ; 005c2d05
    POP EBP                             ; 005c2d07
    POP EDI                             ; 005c2d08
    POP ESI                             ; 005c2d09
    POP EBX                             ; 005c2d0a
    RET                                 ; 005c2d0b
    PUSH EBX                            ; 005c2d0c
        ;   Label: LAB_005c2d0c
    MOV EDI,dword ptr [0x006810c8]      ; 005c2d0d | g_CDemonSetPtr
    PUSH EDI                            ; 005c2d13 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 005c2d14
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005c2d19
    MOV EAX,dword ptr [EBX + 0x24f8]    ; 005c2d1c
    PUSH EAX                            ; 005c2d22
    MOV EDX,dword ptr [0x006810c8]      ; 005c2d23 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 005c2d29 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 005c2d2a
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    MOV ESI,dword ptr [EBX + 0x24f8]    ; 005c2d2f
    ADD ESP,0x8                         ; 005c2d35
    MOV EAX,dword ptr [ESI + 0x20]      ; 005c2d38
    ADD ESI,0x20                        ; 005c2d3b
    MOV dword ptr [ESP + 0x7c],EAX      ; 005c2d3e
    LEA EAX,[ESI + 0x4]                 ; 005c2d42
    MOV EAX,dword ptr [EAX]             ; 005c2d45
    MOV dword ptr [ESP + 0x80],EAX      ; 005c2d47
    LEA EAX,[ESI + 0x8]                 ; 005c2d4e
    MOV EAX,dword ptr [EAX]             ; 005c2d51
    MOV dword ptr [ESP + 0x84],EAX      ; 005c2d53
    LEA EAX,[ESP + 0x34]                ; 005c2d5a
    PUSH EAX                            ; 005c2d5e
    LEA EAX,[ESP + 0x50]                ; 005c2d5f
    XOR ECX,ECX                         ; 005c2d63
    PUSH EAX                            ; 005c2d65
    MOV EDI,0x3f800000                  ; 005c2d66
    MOV dword ptr [ESP + 0x3c],ECX      ; 005c2d6b
    PUSH EBX                            ; 005c2d6f
    MOV dword ptr [ESP + 0x44],ECX      ; 005c2d70
    MOV dword ptr [ESP + 0x48],EDI      ; 005c2d74
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 005c2d78
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 005c2d7d
    FLD float ptr [ESP + 0x7c]          ; 005c2d80
    FADD float ptr [EAX]                ; 005c2d84
    FLD float ptr [ESP + 0x80]          ; 005c2d86
    FXCH                                ; 005c2d8d
    FSTP float ptr [ESP + 0x7c]         ; 005c2d8f
    FADD float ptr [EAX + 0x4]          ; 005c2d93
    FLD float ptr [ESP + 0x84]          ; 005c2d96
    FXCH                                ; 005c2d9d
    FSTP float ptr [ESP + 0x80]         ; 005c2d9f
    FADD float ptr [EAX + 0x8]          ; 005c2da6
    FSTP float ptr [ESP + 0x84]         ; 005c2da9
    MOV EAX,dword ptr [EBX + 0x24]      ; 005c2db0
    MOV dword ptr [ESP + 0x80],EAX      ; 005c2db3
    XOR EAX,EAX                         ; 005c2dba
    MOV dword ptr [ESP + 0x94],EAX      ; 005c2dbc
    MOV dword ptr [ESP + 0x98],EAX      ; 005c2dc3
    LEA EAX,[ESP + 0x94]                ; 005c2dca
    PUSH EAX                            ; 005c2dd1
    LEA EAX,[ESP + 0x74]                ; 005c2dd2
    PUSH EAX                            ; 005c2dd6
    MOV ECX,0x3fc00000                  ; 005c2dd7
    PUSH EBX                            ; 005c2ddc
    MOV dword ptr [ESP + 0xa8],ECX      ; 005c2ddd
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 005c2de4
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 005c2de9
    PUSH 0x40400000                     ; 005c2dec
    PUSH 0x3dcccccd                     ; 005c2df1
    PUSH 0x3f800000                     ; 005c2df6
    PUSH dword ptr [ESP + 0x84]         ; 005c2dfb
    PUSH dword ptr [ESP + 0x80]         ; 005c2e02
    PUSH dword ptr [ESP + 0x98]         ; 005c2e09
    MOV ESI,dword ptr [0x006810c8]      ; 005c2e10 | g_CDemonSetPtr
    PUSH dword ptr [ESP + 0x94]         ; 005c2e16
    PUSH ESI                            ; 005c2e1d | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470 ; 005c2e1e
        ;   XREF to: 00573470 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470(CDemonSet * this_ptr, float start_x, float start_z, float dir_x, ...)
    MOV dword ptr [ESP + 0xf8],EAX      ; 005c2e23
    FLD float ptr [ESP + 0xf8]          ; 005c2e2a
    FLD1                                ; 005c2e31
    ADD ESP,0x20                        ; 005c2e33
    FCOMPP                              ; 005c2e36
    FNSTSW AX                           ; 005c2e38
    SAHF                                ; 005c2e3a
    JA 0x005c2f1c                       ; 005c2e3b
        ;   XREF to: 005c2f1c (CONDITIONAL_JUMP)  ; LAB_005c2f1c
    FLD float ptr [ESP + 0x7c]          ; 005c2e41
    FLD float ptr [ESP + 0x80]          ; 005c2e45
    FLD float ptr [ESP + 0x84]          ; 005c2e4c
    PUSH 0x3f000000                     ; 005c2e53
    LEA EAX,[ESP + 0x20]                ; 005c2e58
    MOV EDI,dword ptr [0x006810c8]      ; 005c2e5c | g_CDemonSetPtr
    FXCH ST2                            ; 005c2e62
    FADD float ptr [ESP + 0x74]         ; 005c2e64
    FXCH                                ; 005c2e68
    FADD float ptr [ESP + 0x78]         ; 005c2e6a
    FXCH ST2                            ; 005c2e6e
    FADD float ptr [ESP + 0x7c]         ; 005c2e70
    PUSH EAX                            ; 005c2e74
    FXCH                                ; 005c2e75
    FSTP float ptr [ESP + 0x24]         ; 005c2e77
    FXCH                                ; 005c2e7b
    FSTP float ptr [ESP + 0x28]         ; 005c2e7d
    PUSH EDI                            ; 005c2e81 | g_CDemonSetInstance
    FSTP float ptr [ESP + 0x30]         ; 005c2e82
    CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 ; 005c2e86
        ;   XREF to: 005716b0 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0(CDemonSet * this_ptr, CVector3f * position, float radius)
    MOV dword ptr [ESP + 0xe4],EAX      ; 005c2e8b
    FLD float ptr [ESP + 0xe4]          ; 005c2e92
    ADD ESP,0xc                         ; 005c2e99
    MOV EAX,[0x006810c8]                ; 005c2e9c | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 005c2ea1 | g_CDemonSetInstance
    FSTP float ptr [ESP + 0xc4]         ; 005c2ea2
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 005c2ea9
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005c2eae
    FLD float ptr [ESP + 0xc0]          ; 005c2eb1
    FSUB float ptr [EBX + 0x24]         ; 005c2eb8
    FABS                                ; 005c2ebb
    FLD1                                ; 005c2ebd
    FCOMPP                              ; 005c2ebf
    FNSTSW AX                           ; 005c2ec1
    SAHF                                ; 005c2ec3
    JC 0x005c2fab                       ; 005c2ec4
        ;   XREF to: 005c2fab (CONDITIONAL_JUMP)  ; LAB_005c2fab
    XOR ESI,ESI                         ; 005c2eca
    XOR EDI,EDI                         ; 005c2ecc
    MOV EAX,[0x006810c8]                ; 005c2ece | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_005c2ece
    CMP ESI,dword ptr [EAX + 0x14d154]  ; 005c2ed3 | g_CDemonSetInstance.actor_list_ptr
    JL 0x005c2f36                       ; 005c2ed9
        ;   XREF to: 005c2f36 (CONDITIONAL_JUMP)  ; LAB_005c2f36
    MOV EAX,dword ptr [EBX + 0x24f8]    ; 005c2edb
    MOV dword ptr [EBX + 0x1fc38],0x6   ; 005c2ee1
    TEST EAX,EAX                        ; 005c2eeb
    JNZ 0x005c2fb4                      ; 005c2eed
        ;   XREF to: 005c2fb4 (CONDITIONAL_JUMP)  ; LAB_005c2fb4
    PUSH 0x1                            ; 005c2ef3
        ;   Label: LAB_005c2ef3
    PUSH 0x14                           ; 005c2ef5
    LEA EAX,[EBX + 0x158]               ; 005c2ef7
        ;   Label: LAB_005c2ef7
    PUSH EAX                            ; 005c2efd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005c2efe
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005c2f03
    MOV EAX,0x1                         ; 005c2f06
    MOV dword ptr [EBX + 0x1fc40],0x40800000 ; 005c2f0b
    MOV ESP,EBP                         ; 005c2f15
    POP EBP                             ; 005c2f17
    POP EDI                             ; 005c2f18
    POP ESI                             ; 005c2f19
    POP EBX                             ; 005c2f1a
    RET                                 ; 005c2f1b
    MOV EDX,dword ptr [0x006810c8]      ; 005c2f1c | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_005c2f1c
    PUSH EDX                            ; 005c2f22 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 005c2f23
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005c2f28
    JMP 0x005c2fab                      ; 005c2f2b
        ;   XREF to: 005c2fab (UNCONDITIONAL_JUMP)  ; LAB_005c2fab
    INC ESI                             ; 005c2f30
        ;   Label: LAB_005c2f30
    ADD EDI,0x4                         ; 005c2f31
    JMP 0x005c2ece                      ; 005c2f34
        ;   XREF to: 005c2ece (UNCONDITIONAL_JUMP)  ; LAB_005c2ece
    MOV EDX,dword ptr [0x0088797c]      ; 005c2f36 | g_CCrateClassInfo.name_hash
        ;   Label: LAB_005c2f36
    PUSH EDX                            ; 005c2f3c
    MOV ECX,dword ptr [EDI + EAX*0x1 + 0x14d158] ; 005c2f3d | g_CDemonSetInstance.actor_list_data[0]
    PUSH ECX                            ; 005c2f44
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005c2f45
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005c2f4a
    TEST EAX,EAX                        ; 005c2f4d
    JZ 0x005c2f30                       ; 005c2f4f
        ;   XREF to: 005c2f30 (CONDITIONAL_JUMP)  ; LAB_005c2f30
    FLD float ptr [EAX + 0x20]          ; 005c2f51
    FSUB float ptr [ESP + 0x7c]         ; 005c2f54
    FSTP float ptr [ESP + 0xa0]         ; 005c2f58
    FLD float ptr [EAX + 0x24]          ; 005c2f5f
    FSUB float ptr [ESP + 0x80]         ; 005c2f62
    FST float ptr [ESP + 0xa4]          ; 005c2f69
    FMUL float ptr [ESP + 0xa4]         ; 005c2f70
    FLD float ptr [ESP + 0xa0]          ; 005c2f77
    FMUL ST0                            ; 005c2f7e
    FLD float ptr [EAX + 0x28]          ; 005c2f80
    FSUB float ptr [ESP + 0x84]         ; 005c2f83
    FXCH                                ; 005c2f8a
    FADDP ST2,ST0                       ; 005c2f8c
    FST float ptr [ESP + 0xa8]          ; 005c2f8e
    FMUL float ptr [ESP + 0xa8]         ; 005c2f95
    FADDP                               ; 005c2f9c
    FSQRT                               ; 005c2f9e
    FCOMP double ptr [0x00653bc4]       ; 005c2fa0 | DOUBLE_00653bc4
    FNSTSW AX                           ; 005c2fa6
    SAHF                                ; 005c2fa8
    JNC 0x005c2f30                      ; 005c2fa9
        ;   XREF to: 005c2f30 (CONDITIONAL_JUMP)  ; LAB_005c2f30
    XOR EAX,EAX                         ; 005c2fab
        ;   Label: LAB_005c2fab
    MOV ESP,EBP                         ; 005c2fad
    POP EBP                             ; 005c2faf
    POP EDI                             ; 005c2fb0
    POP ESI                             ; 005c2fb1
    POP EBX                             ; 005c2fb2
    RET                                 ; 005c2fb3
    PUSH EBX                            ; 005c2fb4
        ;   Label: LAB_005c2fb4
    MOV ESI,dword ptr [EAX + 0x154]     ; 005c2fb5
    PUSH EAX                            ; 005c2fbb
    CALL dword ptr [ESI + 0x7c]         ; 005c2fbc
    ADD ESP,0x8                         ; 005c2fbf
    CMP EAX,0x4                         ; 005c2fc2
    SETZ AL                             ; 005c2fc5
    AND EAX,0xff                        ; 005c2fc8
    JZ 0x005c2ef3                       ; 005c2fcd
        ;   XREF to: 005c2ef3 (CONDITIONAL_JUMP)  ; LAB_005c2ef3
    PUSH 0x1                            ; 005c2fd3
    PUSH 0x19                           ; 005c2fd5
    JMP 0x005c2ef7                      ; 005c2fd7
        ;   XREF to: 005c2ef7 (UNCONDITIONAL_JUMP)  ; LAB_005c2ef7


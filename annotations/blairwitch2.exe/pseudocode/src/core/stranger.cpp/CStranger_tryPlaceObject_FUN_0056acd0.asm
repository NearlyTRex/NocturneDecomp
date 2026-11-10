; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stranger_cpp_CStranger_tryPlaceObject_FUN_0056acd0(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x190]:8  local_190
; undefined8       Stack[-0x188]:8  local_188
; undefined8       Stack[-0x180]:8  local_180
; undefined        Stack[-0x148]:1  local_148
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined        Stack[-0x130]:1  local_130
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
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
; undefined        Stack[-0xac]:1  local_ac
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_stranger.cpp_CStranger_handleActionButton_FUN_0056e4d0 at 0056e579
;
; Referenced Globals:
;   undefined4 s_actionPending_d_stranger_005ebb34+1
;   TerminatedCString s_Delta_to_dest_3_2f_3_2f_005ebb5d
;   undefined4 DAT_005ebb85
;   undefined4 DAT_005ebb8d
;   undefined4 DAT_005ebb95
;   undefined4 DAT_005ebb9d
;   CConsole* g_CConsolePtr = 007c158c
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CConsole g_CConsoleInstance
;   undefined4 g_CCrateClassInfo.name_hash
;   undefined4 g_CActorDestinationClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408de0
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
;   core_dest.cpp_CActorDestination_acceptsActor_FUN_004473f0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005038a0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;   core_setcolid.cpp_FUN_00534ea0
;   core_setcolid.cpp_FUN_00537030
;   core_stranger.cpp_getCarriedObjectVerticalOffset_FUN_005626f0
;   engine_console.cpp_FUN_00436710
;   shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056acd0
        ;   Label: core_stranger.cpp_CStranger_tryPlaceObject_FUN_0056acd0
    PUSH ESI                            ; 0056acd1
    PUSH EDI                            ; 0056acd2
    PUSH EBP                            ; 0056acd3
    MOV EBP,ESP                         ; 0056acd4
    SUB ESP,0x188                       ; 0056acd6
    AND ESP,0xfffffff8                  ; 0056acdc
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056acdf
    MOV EDX,dword ptr [EBX + 0x25608]   ; 0056ace2
    TEST EDX,EDX                        ; 0056ace8
    JNZ 0x0056b5c1                      ; 0056acea
        ;   XREF to: 0056b5c1 (CONDITIONAL_JUMP)  ; LAB_0056b5c1
    CMP dword ptr [EBX + 0x2698],0x0    ; 0056acf0
    JZ 0x0056b5c1                       ; 0056acf7
        ;   XREF to: 0056b5c1 (CONDITIONAL_JUMP)  ; LAB_0056b5c1
    CMP dword ptr [EBX + 0x2d04],0xe    ; 0056acfd
    JZ 0x0056ad2d                       ; 0056ad04
        ;   XREF to: 0056ad2d (CONDITIONAL_JUMP)  ; LAB_0056ad2d
    PUSH EDX                            ; 0056ad06
    PUSH EBX                            ; 0056ad07
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0 ; 0056ad08
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0x18c],EAX     ; 0056ad0d
    FLD float ptr [ESP + 0x18c]         ; 0056ad14
    ADD ESP,0x8                         ; 0056ad1b
    FCOMP double ptr [0x005ebb85]       ; 0056ad1e | DAT_005ebb85
    FNSTSW AX                           ; 0056ad24
    SAHF                                ; 0056ad26
    JC 0x0056b5c1                       ; 0056ad27
        ;   XREF to: 0056b5c1 (CONDITIONAL_JUMP)  ; LAB_0056b5c1
    PUSH 0x0                            ; 0056ad2d
        ;   Label: LAB_0056ad2d
    LEA EAX,[EBX + 0x2b4]               ; 0056ad2f
    PUSH EAX                            ; 0056ad35
    CALL core_motion.cpp_FUN_005038a0   ; 0056ad36
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x18c],EAX     ; 0056ad3b
    FLD float ptr [ESP + 0x18c]         ; 0056ad42
    FLD1                                ; 0056ad49
    ADD ESP,0x8                         ; 0056ad4b
    FCOMPP                              ; 0056ad4e
    FNSTSW AX                           ; 0056ad50
    SAHF                                ; 0056ad52
    JA 0x0056b5c1                       ; 0056ad53
        ;   XREF to: 0056b5c1 (CONDITIONAL_JUMP)  ; LAB_0056b5c1
    MOV EAX,dword ptr [EBX + 0x2698]    ; 0056ad59
    TEST EAX,EAX                        ; 0056ad5f
    JNZ 0x0056ade6                      ; 0056ad61
        ;   XREF to: 0056ade6 (CONDITIONAL_JUMP)  ; LAB_0056ade6
    XOR EDX,EDX                         ; 0056ad67
        ;   Label: LAB_0056ad67
    MOV dword ptr [ESP + 0x17c],EDX     ; 0056ad69
    MOV dword ptr [ESP + 0x180],EDX     ; 0056ad70
    MOV EAX,[0x0061b5a8]                ; 0056ad77 | g_CDemonSetPtr
        ;   Label: LAB_0056ad77
    MOV ESI,dword ptr [ESP + 0x17c]     ; 0056ad7c
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 0056ad83 | g_CDemonSetInstance.actor_count
    JGE 0x0056b2a9                      ; 0056ad89
        ;   XREF to: 0056b2a9 (CONDITIONAL_JUMP)  ; LAB_0056b2a9
    MOV ESI,dword ptr [ESP + 0x180]     ; 0056ad8f
    MOV ECX,dword ptr [0x01510e14]      ; 0056ad96 | g_CActorDestinationClassInfo.name_hash
    ADD EAX,ESI                         ; 0056ad9c
    PUSH ECX                            ; 0056ad9e
    MOV EDI,dword ptr [EAX + 0x14d168]  ; 0056ad9f | g_CDemonSetInstance.actors[0]
    PUSH EDI                            ; 0056ada5
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0056ada6
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV dword ptr [ESP + 0x17c],EAX     ; 0056adab
    ADD ESP,0x8                         ; 0056adb2
    MOV dword ptr [ESP + 0x154],EAX     ; 0056adb5
    TEST EAX,EAX                        ; 0056adbc
    JNZ 0x0056b0c1                      ; 0056adbe
        ;   XREF to: 0056b0c1 (CONDITIONAL_JUMP)  ; LAB_0056b0c1
    MOV ESI,dword ptr [ESP + 0x17c]     ; 0056adc4
        ;   Label: LAB_0056adc4
    MOV ECX,dword ptr [ESP + 0x180]     ; 0056adcb
    INC ESI                             ; 0056add2
    ADD ECX,0x4                         ; 0056add3
    MOV dword ptr [ESP + 0x17c],ESI     ; 0056add6
    MOV dword ptr [ESP + 0x180],ECX     ; 0056addd
    JMP 0x0056ad77                      ; 0056ade4
        ;   XREF to: 0056ad77 (UNCONDITIONAL_JUMP)  ; LAB_0056ad77
    PUSH EBX                            ; 0056ade6
        ;   Label: LAB_0056ade6
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 0056ade7
    PUSH EAX                            ; 0056aded
    CALL dword ptr [ESI + 0x8c]         ; 0056adee
    ADD ESP,0x8                         ; 0056adf4
    CMP EAX,0x4                         ; 0056adf7
    SETZ AL                             ; 0056adfa
    AND EAX,0xff                        ; 0056adfd
    JZ 0x0056ad67                       ; 0056ae02
        ;   XREF to: 0056ad67 (CONDITIONAL_JUMP)  ; LAB_0056ad67
    XOR EDI,EDI                         ; 0056ae08
    MOV dword ptr [ESP + 0x168],EDI     ; 0056ae0a
    MOV dword ptr [ESP + 0x164],EDI     ; 0056ae11
    MOV EAX,[0x0061b5a8]                ; 0056ae18 | g_CDemonSetPtr
        ;   Label: LAB_0056ae18
    MOV ESI,dword ptr [ESP + 0x168]     ; 0056ae1d
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 0056ae24 | g_CDemonSetInstance.actor_count
    JGE 0x0056b2a9                      ; 0056ae2a
        ;   XREF to: 0056b2a9 (CONDITIONAL_JUMP)  ; LAB_0056b2a9
    MOV ECX,dword ptr [ESP + 0x164]     ; 0056ae30
    MOV EDX,dword ptr [0x01510e14]      ; 0056ae37 | g_CActorDestinationClassInfo.name_hash
    ADD EAX,ECX                         ; 0056ae3d
    PUSH EDX                            ; 0056ae3f
    MOV ESI,dword ptr [EAX + 0x14d168]  ; 0056ae40 | g_CDemonSetInstance.actors[0]
    PUSH ESI                            ; 0056ae46
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0056ae47
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV dword ptr [ESP + 0x178],EAX     ; 0056ae4c
    ADD ESP,0x8                         ; 0056ae53
    MOV dword ptr [ESP + 0x158],EAX     ; 0056ae56
    TEST EAX,EAX                        ; 0056ae5d
    JNZ 0x0056ae83                      ; 0056ae5f
        ;   XREF to: 0056ae83 (CONDITIONAL_JUMP)  ; LAB_0056ae83
    MOV EDI,dword ptr [ESP + 0x168]     ; 0056ae61
        ;   Label: LAB_0056ae61
    MOV ESI,dword ptr [ESP + 0x164]     ; 0056ae68
    INC EDI                             ; 0056ae6f
    ADD ESI,0x4                         ; 0056ae70
    MOV dword ptr [ESP + 0x168],EDI     ; 0056ae73
    MOV dword ptr [ESP + 0x164],ESI     ; 0056ae7a
    JMP 0x0056ae18                      ; 0056ae81
        ;   XREF to: 0056ae18 (UNCONDITIONAL_JUMP)  ; LAB_0056ae18
    MOV EAX,dword ptr [EBX + 0x2698]    ; 0056ae83
        ;   Label: LAB_0056ae83
    PUSH EAX                            ; 0056ae89
    MOV EDX,dword ptr [ESP + 0x174]     ; 0056ae8a
    PUSH EDX                            ; 0056ae91
    CALL core_dest.cpp_CActorDestination_acceptsActor_FUN_004473f0 ; 0056ae92
        ;   XREF to: 004473f0 (UNCONDITIONAL_CALL)  ; int core_dest.cpp_CActorDestination_acceptsActor_FUN_004473f0(CActorDestination * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0056ae97
    TEST EAX,EAX                        ; 0056ae9a
    JZ 0x0056ae61                       ; 0056ae9c
        ;   XREF to: 0056ae61 (CONDITIONAL_JUMP)  ; LAB_0056ae61
    MOV EAX,dword ptr [EBX + 0x2698]    ; 0056ae9e
    ADD EAX,0x20                        ; 0056aea4
    PUSH EAX                            ; 0056aea7
    PUSH EBX                            ; 0056aea8
    LEA ESI,[ESP + 0xa0]                ; 0056aea9
    CALL core_actor.cpp_FUN_00408de0    ; 0056aeb0
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    ADD ESP,0x8                         ; 0056aeb5
    LEA EDI,[ESP + 0x110]               ; 0056aeb8
    MOV EAX,dword ptr [ESP + 0x170]     ; 0056aebf
    LEA ESI,[ESP + 0x98]                ; 0056aec6
    ADD EAX,0x20                        ; 0056aecd
    MOVSD ES:EDI,ESI                    ; 0056aed0
    MOVSD ES:EDI,ESI                    ; 0056aed1
    MOVSD ES:EDI,ESI                    ; 0056aed2
    PUSH EAX                            ; 0056aed3
    LEA ESI,[ESP + 0x108]               ; 0056aed4
    PUSH EBX                            ; 0056aedb
    LEA EDI,[ESP + 0x88]                ; 0056aedc
    MOV dword ptr [ESP + 0x164],EAX     ; 0056aee3
    CALL core_actor.cpp_FUN_00408de0    ; 0056aeea
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x10c]               ; 0056aeef
    ADD ESP,0x8                         ; 0056aef6
    MOVSD ES:EDI,ESI                    ; 0056aef9
    MOVSD ES:EDI,ESI                    ; 0056aefa
    MOVSD ES:EDI,ESI                    ; 0056aefb
    FLD float ptr [ESP + 0x80]          ; 0056aefc
    FLD float ptr [ESP + 0x84]          ; 0056af03
    FLD float ptr [ESP + 0x88]          ; 0056af0a
    LEA EDI,[ESP + 0x2c]                ; 0056af11
    LEA ESI,[ESP + 0x20]                ; 0056af15
    FXCH ST2                            ; 0056af19
    FSUB float ptr [ESP + 0x110]        ; 0056af1b
    FXCH                                ; 0056af22
    FSUB float ptr [ESP + 0x114]        ; 0056af24
    FXCH ST2                            ; 0056af2b
    FSUB float ptr [ESP + 0x118]        ; 0056af2d
    FXCH                                ; 0056af34
    FSTP float ptr [ESP + 0x20]         ; 0056af36
    FXCH                                ; 0056af3a
    FSTP float ptr [ESP + 0x24]         ; 0056af3c
    FSTP float ptr [ESP + 0x28]         ; 0056af40
    MOVSD ES:EDI,ESI                    ; 0056af44
    MOVSD ES:EDI,ESI                    ; 0056af45
    MOVSD ES:EDI,ESI                    ; 0056af46
    FLDZ                                ; 0056af47
    FCOMP float ptr [ESP + 0x34]        ; 0056af49
    FNSTSW AX                           ; 0056af4d
    SAHF                                ; 0056af4f
    JNC 0x0056ae61                      ; 0056af50
        ;   XREF to: 0056ae61 (CONDITIONAL_JUMP)  ; LAB_0056ae61
    FLD float ptr [ESP + 0x34]          ; 0056af56
    FCOMP double ptr [0x005ebb8d]       ; 0056af5a | DAT_005ebb8d
    FNSTSW AX                           ; 0056af60
    SAHF                                ; 0056af62
    JNC 0x0056ae61                      ; 0056af63
        ;   XREF to: 0056ae61 (CONDITIONAL_JUMP)  ; LAB_0056ae61
    FLD float ptr [ESP + 0x2c]          ; 0056af69
    FABS                                ; 0056af6d
    FCOMP double ptr [0x005ebb95]       ; 0056af6f | DAT_005ebb95
    FNSTSW AX                           ; 0056af75
    SAHF                                ; 0056af77
    JNC 0x0056ae61                      ; 0056af78
        ;   XREF to: 0056ae61 (CONDITIONAL_JUMP)  ; LAB_0056ae61
    FLD float ptr [ESP + 0x30]          ; 0056af7e
    FLDZ                                ; 0056af82
    FXCH                                ; 0056af84
    FSTP double ptr [ESP]               ; 0056af86
    FCOMP double ptr [ESP]              ; 0056af89
    FNSTSW AX                           ; 0056af8c
    SAHF                                ; 0056af8e
    JNC 0x0056ae61                      ; 0056af8f
        ;   XREF to: 0056ae61 (CONDITIONAL_JUMP)  ; LAB_0056ae61
    FLD double ptr [ESP]                ; 0056af95
    FCOMP double ptr [0x005ebb9d]       ; 0056af98 | DAT_005ebb9d
    FNSTSW AX                           ; 0056af9e
    SAHF                                ; 0056afa0
    JNC 0x0056ae61                      ; 0056afa1
        ;   XREF to: 0056ae61 (CONDITIONAL_JUMP)  ; LAB_0056ae61
    PUSH 0x1                            ; 0056afa7
    PUSH 0x1a                           ; 0056afa9
    LEA EAX,[EBX + 0x2b4]               ; 0056afab
    PUSH EAX                            ; 0056afb1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056afb2
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056afb7
    MOV ESI,dword ptr [ESP + 0x15c]     ; 0056afba
    PUSH ESI                            ; 0056afc1
    PUSH EBX                            ; 0056afc2
    LEA ESI,[ESP + 0x4c]                ; 0056afc3
    LEA EDI,[ESP + 0x40]                ; 0056afc7
    CALL core_actor.cpp_FUN_00408de0    ; 0056afcb
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x4c]                ; 0056afd0
    ADD ESP,0x8                         ; 0056afd4
    MOVSD ES:EDI,ESI                    ; 0056afd7
    MOVSD ES:EDI,ESI                    ; 0056afd8
    MOVSD ES:EDI,ESI                    ; 0056afd9
    LEA EAX,[ESP + 0x38]                ; 0056afda
    LEA ESI,[EBX + 0x25704]             ; 0056afde
    CMP ESI,EAX                         ; 0056afe4
    JZ 0x0056affc                       ; 0056afe6
        ;   XREF to: 0056affc (CONDITIONAL_JUMP)  ; LAB_0056affc
    MOV EAX,dword ptr [ESP + 0x38]      ; 0056afe8
    MOV dword ptr [ESI],EAX             ; 0056afec
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0056afee
    MOV dword ptr [ESI + 0x4],EAX       ; 0056aff2
    MOV EAX,dword ptr [ESP + 0x40]      ; 0056aff5
    MOV dword ptr [ESI + 0x8],EAX       ; 0056aff9
    FLD float ptr [EBX + 0x25720]       ; 0056affc
        ;   Label: LAB_0056affc
    MOV EDI,dword ptr [EBX + 0x2698]    ; 0056b002
    FSUB float ptr [EBX + 0x25714]      ; 0056b008
    PUSH EDI                            ; 0056b00e
    FSTP float ptr [ESP + 0x150]        ; 0056b00f
    CALL core_stranger.cpp_getCarriedObjectVerticalOffset_FUN_005626f0 ; 0056b016
        ;   XREF to: 005626f0 (UNCONDITIONAL_CALL)  ; float core_stranger.cpp_getCarriedObjectVerticalOffset_FUN_005626f0(CDemonActor * object)
    MOV dword ptr [ESP + 0x188],EAX     ; 0056b01b
    FLD float ptr [ESP + 0x188]         ; 0056b022
    ADD ESP,0x4                         ; 0056b029
    FSUBR float ptr [ESP + 0x14c]       ; 0056b02c
    FADD float ptr [EBX + 0x25708]      ; 0056b033
    MOV EAX,dword ptr [EBX + 0x256a4]   ; 0056b039
    FSTP float ptr [EBX + 0x25708]      ; 0056b03f
    TEST EAX,EAX                        ; 0056b045
    JZ 0x0056b063                       ; 0056b047
        ;   XREF to: 0056b063 (CONDITIONAL_JUMP)  ; LAB_0056b063
    PUSH 0xe6b                          ; 0056b049
    PUSH EAX                            ; 0056b04e
    PUSH 0x5ebb35                       ; 0056b04f | s_actionPending_d_stranger_005ebb34+1
    MOV ECX,dword ptr [0x006138e0]      ; 0056b054 | g_CEditorToolsPtr
    PUSH ECX                            ; 0056b05a
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0 ; 0056b05b
        ;   XREF to: 0047bdf0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 0056b060
    MOV ESI,dword ptr [ESP + 0x158]     ; 0056b063
        ;   Label: LAB_0056b063
    LEA EAX,[EBX + 0x25620]             ; 0056b06a
    ADD ESI,0x20                        ; 0056b070
    MOV dword ptr [EBX + 0x256a4],0x2   ; 0056b073
    CMP EAX,ESI                         ; 0056b07d
    JZ 0x0056b091                       ; 0056b07f
        ;   XREF to: 0056b091 (CONDITIONAL_JUMP)  ; LAB_0056b091
    MOV EDX,dword ptr [ESI]             ; 0056b081
    MOV dword ptr [EAX],EDX             ; 0056b083
    MOV EDX,dword ptr [ESI + 0x4]       ; 0056b085
    MOV dword ptr [EAX + 0x4],EDX       ; 0056b088
    MOV EDX,dword ptr [ESI + 0x8]       ; 0056b08b
    MOV dword ptr [EAX + 0x8],EDX       ; 0056b08e
    MOV EAX,dword ptr [ESP + 0x158]     ; 0056b091
        ;   Label: LAB_0056b091
    ADD EBX,0x2562c                     ; 0056b098
    ADD EAX,0x30                        ; 0056b09e
    CMP EBX,EAX                         ; 0056b0a1
    JZ 0x0056b0b5                       ; 0056b0a3
        ;   XREF to: 0056b0b5 (CONDITIONAL_JUMP)  ; LAB_0056b0b5
    MOV EDX,dword ptr [EAX]             ; 0056b0a5
    MOV dword ptr [EBX],EDX             ; 0056b0a7
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056b0a9
    MOV dword ptr [EBX + 0x4],EDX       ; 0056b0ac
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056b0af
    MOV dword ptr [EBX + 0x8],EDX       ; 0056b0b2
    MOV EAX,0x1                         ; 0056b0b5
        ;   Label: LAB_0056b0b5
    MOV ESP,EBP                         ; 0056b0ba
    POP EBP                             ; 0056b0bc
    POP EDI                             ; 0056b0bd
    POP ESI                             ; 0056b0be
    POP EBX                             ; 0056b0bf
    RET                                 ; 0056b0c0
    MOV EDX,dword ptr [EBX + 0x2698]    ; 0056b0c1
        ;   Label: LAB_0056b0c1
    PUSH EDX                            ; 0056b0c7
    PUSH EAX                            ; 0056b0c8
    CALL core_dest.cpp_CActorDestination_acceptsActor_FUN_004473f0 ; 0056b0c9
        ;   XREF to: 004473f0 (UNCONDITIONAL_CALL)  ; int core_dest.cpp_CActorDestination_acceptsActor_FUN_004473f0(CActorDestination * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0056b0ce
    TEST EAX,EAX                        ; 0056b0d1
    JZ 0x0056adc4                       ; 0056b0d3
        ;   XREF to: 0056adc4 (CONDITIONAL_JUMP)  ; LAB_0056adc4
    MOV EAX,dword ptr [EBX + 0x2698]    ; 0056b0d9
    ADD EAX,0x20                        ; 0056b0df
    PUSH EAX                            ; 0056b0e2
    PUSH EBX                            ; 0056b0e3
    LEA ESI,[ESP + 0x70]                ; 0056b0e4
    CALL core_actor.cpp_FUN_00408de0    ; 0056b0e8
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    ADD ESP,0x8                         ; 0056b0ed
    LEA EDI,[ESP + 0xd4]                ; 0056b0f0
    MOV EAX,dword ptr [ESP + 0x174]     ; 0056b0f7
    LEA ESI,[ESP + 0x68]                ; 0056b0fe
    ADD EAX,0x20                        ; 0056b102
    MOVSD ES:EDI,ESI                    ; 0056b105
    MOVSD ES:EDI,ESI                    ; 0056b106
    MOVSD ES:EDI,ESI                    ; 0056b107
    PUSH EAX                            ; 0056b108
    LEA ESI,[ESP + 0x144]               ; 0056b109
    PUSH EBX                            ; 0056b110
    LEA EDI,[ESP + 0xc4]                ; 0056b111
    MOV dword ptr [ESP + 0x168],EAX     ; 0056b118
    CALL core_actor.cpp_FUN_00408de0    ; 0056b11f
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x148]               ; 0056b124
    ADD ESP,0x8                         ; 0056b12b
    MOVSD ES:EDI,ESI                    ; 0056b12e
    MOVSD ES:EDI,ESI                    ; 0056b12f
    MOVSD ES:EDI,ESI                    ; 0056b130
    FLD float ptr [ESP + 0xbc]          ; 0056b131
    FLD float ptr [ESP + 0xc0]          ; 0056b138
    FLD float ptr [ESP + 0xc4]          ; 0056b13f
    LEA EDI,[ESP + 0x8c]                ; 0056b146
    LEA ESI,[ESP + 0x128]               ; 0056b14d
    FXCH ST2                            ; 0056b154
    FSUB float ptr [ESP + 0xd4]         ; 0056b156
    FXCH                                ; 0056b15d
    FSUB float ptr [ESP + 0xd8]         ; 0056b15f
    FXCH ST2                            ; 0056b166
    FSUB float ptr [ESP + 0xdc]         ; 0056b168
    FXCH                                ; 0056b16f
    FSTP float ptr [ESP + 0x128]        ; 0056b171
    FXCH                                ; 0056b178
    FSTP float ptr [ESP + 0x12c]        ; 0056b17a
    FSTP float ptr [ESP + 0x130]        ; 0056b181
    MOVSD ES:EDI,ESI                    ; 0056b188
    MOVSD ES:EDI,ESI                    ; 0056b189
    MOVSD ES:EDI,ESI                    ; 0056b18a
    FLD float ptr [ESP + 0x90]          ; 0056b18b
    FLD float ptr [ESP + 0x94]          ; 0056b192
    FSTP double ptr [ESP + 0x8]         ; 0056b199
    MOV EDI,dword ptr [ESP + 0xc]       ; 0056b19d
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056b1a1
    PUSH EDI                            ; 0056b1a5
    FSTP double ptr [ESP + 0x1c]        ; 0056b1a6
    PUSH EAX                            ; 0056b1aa
    MOV EDX,dword ptr [ESP + 0x24]      ; 0056b1ab
    MOV ECX,dword ptr [ESP + 0x20]      ; 0056b1af
    PUSH EDX                            ; 0056b1b3
    FLD float ptr [ESP + 0x98]          ; 0056b1b4
    PUSH ECX                            ; 0056b1bb
    FSTP double ptr [ESP + 0x20]        ; 0056b1bc
    MOV ESI,dword ptr [ESP + 0x24]      ; 0056b1c0
    PUSH ESI                            ; 0056b1c4
    MOV EDI,dword ptr [ESP + 0x24]      ; 0056b1c5
    PUSH EDI                            ; 0056b1c9
    PUSH 0x5ebb5d                       ; 0056b1ca | = "Delta to dest : %3.2f,%3.2f,%3.2f\n"
    MOV EAX,[0x00609ed0]                ; 0056b1cf | g_CConsolePtr
    PUSH EAX                            ; 0056b1d4 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0056b1d5
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x20                        ; 0056b1da
    FLDZ                                ; 0056b1dd
    FCOMP float ptr [ESP + 0x94]        ; 0056b1df
    FNSTSW AX                           ; 0056b1e6
    SAHF                                ; 0056b1e8
    JNC 0x0056adc4                      ; 0056b1e9
        ;   XREF to: 0056adc4 (CONDITIONAL_JUMP)  ; LAB_0056adc4
    FLD double ptr [ESP + 0x8]          ; 0056b1ef
    FCOMP double ptr [0x005ebb8d]       ; 0056b1f3 | DAT_005ebb8d
    FNSTSW AX                           ; 0056b1f9
    SAHF                                ; 0056b1fb
    JNC 0x0056adc4                      ; 0056b1fc
        ;   XREF to: 0056adc4 (CONDITIONAL_JUMP)  ; LAB_0056adc4
    FLD double ptr [ESP + 0x10]         ; 0056b202
    FABS                                ; 0056b206
    FCOMP double ptr [0x005ebb95]       ; 0056b208 | DAT_005ebb95
    FNSTSW AX                           ; 0056b20e
    SAHF                                ; 0056b210
    JNC 0x0056adc4                      ; 0056b211
        ;   XREF to: 0056adc4 (CONDITIONAL_JUMP)  ; LAB_0056adc4
    FLDZ                                ; 0056b217
    FCOMP double ptr [ESP + 0x18]       ; 0056b219
    FNSTSW AX                           ; 0056b21d
    SAHF                                ; 0056b21f
    JNC 0x0056adc4                      ; 0056b220
        ;   XREF to: 0056adc4 (CONDITIONAL_JUMP)  ; LAB_0056adc4
    FLD double ptr [ESP + 0x18]         ; 0056b226
    FCOMP double ptr [0x005ebb9d]       ; 0056b22a | DAT_005ebb9d
    FNSTSW AX                           ; 0056b230
    SAHF                                ; 0056b232
    JNC 0x0056adc4                      ; 0056b233
        ;   XREF to: 0056adc4 (CONDITIONAL_JUMP)  ; LAB_0056adc4
    MOV EDX,dword ptr [ESP + 0x160]     ; 0056b239
    LEA EAX,[EBX + 0x25620]             ; 0056b240
    MOV dword ptr [EBX + 0x256a4],0x2   ; 0056b246
    CMP EAX,EDX                         ; 0056b250
    JZ 0x0056b266                       ; 0056b252
        ;   XREF to: 0056b266 (CONDITIONAL_JUMP)  ; LAB_0056b266
    MOV ESI,EDX                         ; 0056b254
    MOV EDX,dword ptr [ESI]             ; 0056b256
    MOV dword ptr [EAX],EDX             ; 0056b258
    MOV EDX,dword ptr [ESI + 0x4]       ; 0056b25a
    MOV dword ptr [EAX + 0x4],EDX       ; 0056b25d
    MOV EDX,dword ptr [ESI + 0x8]       ; 0056b260
    MOV dword ptr [EAX + 0x8],EDX       ; 0056b263
    MOV ESI,dword ptr [ESP + 0x154]     ; 0056b266
        ;   Label: LAB_0056b266
    LEA EAX,[EBX + 0x2562c]             ; 0056b26d
    ADD ESI,0x30                        ; 0056b273
    CMP EAX,ESI                         ; 0056b276
    JZ 0x0056b28a                       ; 0056b278
        ;   XREF to: 0056b28a (CONDITIONAL_JUMP)  ; LAB_0056b28a
    MOV EDX,dword ptr [ESI]             ; 0056b27a
    MOV dword ptr [EAX],EDX             ; 0056b27c
    MOV EDX,dword ptr [ESI + 0x4]       ; 0056b27e
    MOV dword ptr [EAX + 0x4],EDX       ; 0056b281
    MOV EDX,dword ptr [ESI + 0x8]       ; 0056b284
    MOV dword ptr [EAX + 0x8],EDX       ; 0056b287
    PUSH 0x1                            ; 0056b28a
        ;   Label: LAB_0056b28a
    PUSH 0x16                           ; 0056b28c
    ADD EBX,0x2b4                       ; 0056b28e
    PUSH EBX                            ; 0056b294
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056b295
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 0056b29a
    ADD ESP,0xc                         ; 0056b29f
    MOV ESP,EBP                         ; 0056b2a2
    POP EBP                             ; 0056b2a4
    POP EDI                             ; 0056b2a5
    POP ESI                             ; 0056b2a6
    POP EBX                             ; 0056b2a7
    RET                                 ; 0056b2a8
    PUSH EBX                            ; 0056b2a9
        ;   Label: LAB_0056b2a9
    MOV EDI,dword ptr [0x0061b5a8]      ; 0056b2aa | g_CDemonSetPtr
    PUSH EDI                            ; 0056b2b0 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0056b2b1
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0056b2b6
    MOV EAX,dword ptr [EBX + 0x2698]    ; 0056b2b9
    PUSH EAX                            ; 0056b2bf
    MOV EDX,dword ptr [0x0061b5a8]      ; 0056b2c0 | g_CDemonSetPtr
    PUSH EDX                            ; 0056b2c6 | g_CDemonSetInstance
    LEA EDI,[ESP + 0x64]                ; 0056b2c7
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0056b2cb
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    MOV ESI,dword ptr [EBX + 0x2698]    ; 0056b2d0
    LEA EAX,[ESP + 0xac]                ; 0056b2d6
    ADD ESP,0x8                         ; 0056b2dd
    LEA ESI,[ESI + 0x20]                ; 0056b2e0
    XOR ECX,ECX                         ; 0056b2e3
    PUSH EAX                            ; 0056b2e5
    MOVSD ES:EDI,ESI                    ; 0056b2e6
    MOVSD ES:EDI,ESI                    ; 0056b2e7
    MOVSD ES:EDI,ESI                    ; 0056b2e8
    PUSH EBX                            ; 0056b2e9
    MOV EDI,0x3f800000                  ; 0056b2ea
    LEA ESI,[ESP + 0x58]                ; 0056b2ef
    MOV dword ptr [ESP + 0xac],ECX      ; 0056b2f3
    MOV dword ptr [ESP + 0xb0],ECX      ; 0056b2fa
    MOV dword ptr [ESP + 0xb4],EDI      ; 0056b301
    CALL core_actor.cpp_FUN_00408cf0    ; 0056b308
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA EDI,[ESP + 0x100]               ; 0056b30d
    LEA ESI,[ESP + 0x58]                ; 0056b314
    ADD ESP,0x8                         ; 0056b318
    MOV ECX,0x3fc00000                  ; 0056b31b
    FLD float ptr [ESP + 0x5c]          ; 0056b320
    FLD float ptr [ESP + 0x60]          ; 0056b324
    MOVSD ES:EDI,ESI                    ; 0056b328
    MOVSD ES:EDI,ESI                    ; 0056b329
    MOVSD ES:EDI,ESI                    ; 0056b32a
    FLD float ptr [ESP + 0x64]          ; 0056b32b
    LEA ESI,[ESP + 0x11c]               ; 0056b32f
    FXCH                                ; 0056b336
    FADD float ptr [ESP + 0xfc]         ; 0056b338
    MOV EAX,dword ptr [EBX + 0x24]      ; 0056b33f
    FSTP float ptr [ESP + 0x60]         ; 0056b342
    MOV dword ptr [ESP + 0x60],EAX      ; 0056b346
    XOR EAX,EAX                         ; 0056b34a
    FXCH                                ; 0056b34c
    FADD float ptr [ESP + 0xf8]         ; 0056b34e
    MOV dword ptr [ESP + 0xe0],EAX      ; 0056b355
    MOV dword ptr [ESP + 0xe4],EAX      ; 0056b35c
    LEA EAX,[ESP + 0xe0]                ; 0056b363
    FXCH                                ; 0056b36a
    FADD float ptr [ESP + 0x100]        ; 0056b36c
    PUSH EAX                            ; 0056b373
    FXCH                                ; 0056b374
    FSTP float ptr [ESP + 0x60]         ; 0056b376
    PUSH EBX                            ; 0056b37a
    FSTP float ptr [ESP + 0x6c]         ; 0056b37b
    MOV dword ptr [ESP + 0xf0],ECX      ; 0056b37f
    CALL core_actor.cpp_FUN_00408cf0    ; 0056b386
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    ADD ESP,0x8                         ; 0056b38b
    LEA EDI,[ESP + 0x134]               ; 0056b38e
    PUSH 0x40400000                     ; 0056b395
    LEA ESI,[ESP + 0x120]               ; 0056b39a
    PUSH 0x3dcccccd                     ; 0056b3a1
    MOVSD ES:EDI,ESI                    ; 0056b3a6
    MOVSD ES:EDI,ESI                    ; 0056b3a7
    MOVSD ES:EDI,ESI                    ; 0056b3a8
    PUSH 0x3f800000                     ; 0056b3a9
    PUSH dword ptr [ESP + 0x148]        ; 0056b3ae
    PUSH dword ptr [ESP + 0x144]        ; 0056b3b5
    PUSH dword ptr [ESP + 0x78]         ; 0056b3bc
    MOV ESI,dword ptr [0x0061b5a8]      ; 0056b3c0 | g_CDemonSetPtr
    PUSH dword ptr [ESP + 0x74]         ; 0056b3c6
    PUSH ESI                            ; 0056b3ca | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00537030 ; 0056b3cb
        ;   XREF to: 00537030 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00537030()
    MOV dword ptr [ESP + 0x1a4],EAX     ; 0056b3d0
    FLD float ptr [ESP + 0x1a4]         ; 0056b3d7
    FLD1                                ; 0056b3de
    ADD ESP,0x20                        ; 0056b3e0
    FCOMPP                              ; 0056b3e3
    FNSTSW AX                           ; 0056b3e5
    SAHF                                ; 0056b3e7
    JA 0x0056b4fc                       ; 0056b3e8
        ;   XREF to: 0056b4fc (CONDITIONAL_JUMP)  ; LAB_0056b4fc
    FLD float ptr [ESP + 0x5c]          ; 0056b3ee
    FLD float ptr [ESP + 0x60]          ; 0056b3f2
    FLD float ptr [ESP + 0x64]          ; 0056b3f6
    PUSH 0x3f000000                     ; 0056b3fa
    LEA EDI,[ESP + 0xf0]                ; 0056b3ff
    LEA ESI,[ESP + 0xb4]                ; 0056b406
    LEA EAX,[ESP + 0xf0]                ; 0056b40d
    FXCH ST2                            ; 0056b414
    FADD float ptr [ESP + 0x138]        ; 0056b416
    FXCH                                ; 0056b41d
    FADD float ptr [ESP + 0x13c]        ; 0056b41f
    FXCH ST2                            ; 0056b426
    FADD float ptr [ESP + 0x140]        ; 0056b428
    FXCH                                ; 0056b42f
    FSTP float ptr [ESP + 0xb4]         ; 0056b431
    FXCH                                ; 0056b438
    FSTP float ptr [ESP + 0xb8]         ; 0056b43a
    FSTP float ptr [ESP + 0xbc]         ; 0056b441
    MOVSD ES:EDI,ESI                    ; 0056b448
    MOVSD ES:EDI,ESI                    ; 0056b449
    MOVSD ES:EDI,ESI                    ; 0056b44a
    PUSH EAX                            ; 0056b44b
    MOV EDI,dword ptr [0x0061b5a8]      ; 0056b44c | g_CDemonSetPtr
    PUSH EDI                            ; 0056b452 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00534ea0 ; 0056b453
        ;   XREF to: 00534ea0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00534ea0()
    MOV dword ptr [ESP + 0x190],EAX     ; 0056b458
    FLD float ptr [ESP + 0x190]         ; 0056b45f
    ADD ESP,0xc                         ; 0056b466
    MOV EAX,[0x0061b5a8]                ; 0056b469 | g_CDemonSetPtr
    PUSH EAX                            ; 0056b46e | g_CDemonSetInstance
    FSTP float ptr [ESP + 0x154]        ; 0056b46f
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 0056b476
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0056b47b
    FLD float ptr [ESP + 0x150]         ; 0056b47e
    FSUB float ptr [EBX + 0x24]         ; 0056b485
    FABS                                ; 0056b488
    FLD1                                ; 0056b48a
    FCOMPP                              ; 0056b48c
    FNSTSW AX                           ; 0056b48e
    SAHF                                ; 0056b490
    JC 0x0056b5c1                       ; 0056b491
        ;   XREF to: 0056b5c1 (CONDITIONAL_JUMP)  ; LAB_0056b5c1
    XOR EDX,EDX                         ; 0056b497
    MOV dword ptr [ESP + 0x16c],EDX     ; 0056b499
    MOV dword ptr [ESP + 0x178],EDX     ; 0056b4a0
    MOV EAX,[0x0061b5a8]                ; 0056b4a7 | g_CDemonSetPtr
        ;   Label: LAB_0056b4a7
    MOV ESI,dword ptr [ESP + 0x16c]     ; 0056b4ac
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 0056b4b3 | g_CDemonSetInstance.actor_count
    JL 0x0056b535                       ; 0056b4b9
        ;   XREF to: 0056b535 (CONDITIONAL_JUMP)  ; LAB_0056b535
    MOV EAX,dword ptr [EBX + 0x2698]    ; 0056b4bb
    MOV dword ptr [EBX + 0x256a4],0x6   ; 0056b4c1
    TEST EAX,EAX                        ; 0056b4cb
    JNZ 0x0056b5ca                      ; 0056b4cd
        ;   XREF to: 0056b5ca (CONDITIONAL_JUMP)  ; LAB_0056b5ca
    PUSH 0x1                            ; 0056b4d3
        ;   Label: LAB_0056b4d3
    PUSH 0x14                           ; 0056b4d5
    LEA EAX,[EBX + 0x2b4]               ; 0056b4d7
        ;   Label: LAB_0056b4d7
    PUSH EAX                            ; 0056b4dd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056b4de
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056b4e3
    MOV EAX,0x1                         ; 0056b4e6
    MOV dword ptr [EBX + 0x256ac],0x40800000 ; 0056b4eb
    MOV ESP,EBP                         ; 0056b4f5
    POP EBP                             ; 0056b4f7
    POP EDI                             ; 0056b4f8
    POP ESI                             ; 0056b4f9
    POP EBX                             ; 0056b4fa
    RET                                 ; 0056b4fb
    MOV EBX,dword ptr [0x0061b5a8]      ; 0056b4fc | g_CDemonSetPtr
        ;   Label: LAB_0056b4fc
    PUSH EBX                            ; 0056b502 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 0056b503
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0056b508
    JMP 0x0056b5c1                      ; 0056b50b
        ;   XREF to: 0056b5c1 (UNCONDITIONAL_JUMP)  ; LAB_0056b5c1
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0056b510
        ;   Label: LAB_0056b510
    MOV EDI,dword ptr [ESP + 0x178]     ; 0056b517
    INC EAX                             ; 0056b51e
    ADD EDI,0x4                         ; 0056b51f
    MOV dword ptr [ESP + 0x16c],EAX     ; 0056b522
    MOV dword ptr [ESP + 0x178],EDI     ; 0056b529
    JMP 0x0056b4a7                      ; 0056b530
        ;   XREF to: 0056b4a7 (UNCONDITIONAL_JUMP)  ; LAB_0056b4a7
    MOV ECX,dword ptr [ESP + 0x178]     ; 0056b535
        ;   Label: LAB_0056b535
    MOV EDX,dword ptr [0x007c2670]      ; 0056b53c | g_CCrateClassInfo.name_hash
    ADD EAX,ECX                         ; 0056b542
    PUSH EDX                            ; 0056b544
    MOV ESI,dword ptr [EAX + 0x14d168]  ; 0056b545 | g_CDemonSetInstance.actors[0]
    PUSH ESI                            ; 0056b54b
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0056b54c
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0056b551
    TEST EAX,EAX                        ; 0056b554
    JZ 0x0056b510                       ; 0056b556
        ;   XREF to: 0056b510 (CONDITIONAL_JUMP)  ; LAB_0056b510
    FLD float ptr [EAX + 0x20]          ; 0056b558
    FLD float ptr [EAX + 0x24]          ; 0056b55b
    FLD float ptr [EAX + 0x28]          ; 0056b55e
    LEA EDI,[ESP + 0x74]                ; 0056b561
    LEA ESI,[ESP + 0xc8]                ; 0056b565
    FXCH ST2                            ; 0056b56c
    FSUB float ptr [ESP + 0x5c]         ; 0056b56e
    FXCH                                ; 0056b572
    FSUB float ptr [ESP + 0x60]         ; 0056b574
    FXCH ST2                            ; 0056b578
    FSUB float ptr [ESP + 0x64]         ; 0056b57a
    FXCH                                ; 0056b57e
    FSTP float ptr [ESP + 0xc8]         ; 0056b580
    FXCH                                ; 0056b587
    FSTP float ptr [ESP + 0xcc]         ; 0056b589
    FSTP float ptr [ESP + 0xd0]         ; 0056b590
    MOVSD ES:EDI,ESI                    ; 0056b597
    MOVSD ES:EDI,ESI                    ; 0056b598
    MOVSD ES:EDI,ESI                    ; 0056b599
    FLD float ptr [ESP + 0x78]          ; 0056b59a
    FMUL ST0                            ; 0056b59e
    FLD float ptr [ESP + 0x74]          ; 0056b5a0
    FMUL ST0                            ; 0056b5a4
    FADDP                               ; 0056b5a6
    FLD float ptr [ESP + 0x7c]          ; 0056b5a8
    FMUL ST0                            ; 0056b5ac
    FADDP                               ; 0056b5ae
    FSQRT                               ; 0056b5b0
    FCOMP double ptr [0x005ebb95]       ; 0056b5b2 | DAT_005ebb95
    FNSTSW AX                           ; 0056b5b8
    SAHF                                ; 0056b5ba
    JNC 0x0056b510                      ; 0056b5bb
        ;   XREF to: 0056b510 (CONDITIONAL_JUMP)  ; LAB_0056b510
    XOR EAX,EAX                         ; 0056b5c1
        ;   Label: LAB_0056b5c1
    MOV ESP,EBP                         ; 0056b5c3
    POP EBP                             ; 0056b5c5
    POP EDI                             ; 0056b5c6
    POP ESI                             ; 0056b5c7
    POP EBX                             ; 0056b5c8
    RET                                 ; 0056b5c9
    PUSH EBX                            ; 0056b5ca
        ;   Label: LAB_0056b5ca
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 0056b5cb
    PUSH EAX                            ; 0056b5d1
    CALL dword ptr [ESI + 0x8c]         ; 0056b5d2
    ADD ESP,0x8                         ; 0056b5d8
    CMP EAX,0x4                         ; 0056b5db
    SETZ AL                             ; 0056b5de
    AND EAX,0xff                        ; 0056b5e1
    JZ 0x0056b4d3                       ; 0056b5e6
        ;   XREF to: 0056b4d3 (CONDITIONAL_JUMP)  ; LAB_0056b4d3
    PUSH 0x1                            ; 0056b5ec
    PUSH 0x19                           ; 0056b5ee
    JMP 0x0056b4d7                      ; 0056b5f0
        ;   XREF to: 0056b4d7 (UNCONDITIONAL_JUMP)  ; LAB_0056b4d7


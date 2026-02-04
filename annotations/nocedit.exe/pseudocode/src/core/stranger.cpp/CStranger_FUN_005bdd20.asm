; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_stranger_cpp_CStranger_FUN_005bdd20(void)
;
; Local Variables:
; undefined1       Stack[-0xb0]:1  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined1       Stack[-0x74]:1  local_74
; undefined1       Stack[-0x5c]:1  local_5c
; undefined1       Stack[-0x50]:1  local_50
; undefined1       Stack[-0x44]:1  local_44
; undefined1       Stack[-0x38]:1  local_38
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_005bb960 at 005bbb4b
;
; Referenced Globals:
;   TerminatedCString s_actionPending_d_stranger_00653690
;   TerminatedCString s_actionPending_d_stranger_006536b8
;   TerminatedCString s_Object_to_pick_up_is_now_006536e0
;   TerminatedCString s_actionPending_d_stranger_00653713
;   TerminatedCString s_actionPending_d_stranger_0065373b
;   TerminatedCString s_hit_gh_4_7_wav_0065376d
;   TerminatedCString s_fall_1_wav_0065377d
;   TerminatedCString s_actionPending_d_stranger_00653788
;   TerminatedCString s_doorToOpen_NULL_stranger_006537b0
;   double DOUBLE_006537e4 = 0.400000000000000
;   float FLOAT_00663750 = 10
;   float FLOAT_00663758 = 8
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;   undefined4 g_CEnemyClassInfo.name_hash
;   ... and 3 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_charactr.cpp_CCharacter_FUN_0042ec40
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_hero.cpp_CHero_FUN_004f2ed0
;   core_hero.cpp_CHero_FUN_004f30f0
;   core_hero.cpp_CHero_FUN_004f3890
;   core_hero.cpp_CHero_FUN_004f38d0
;   core_motion.cpp_CMotionController_advance_FUN_0052d610
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
;   core_stranger.cpp_CStranger_FUN_005c1f00
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bdd20
        ;   Label: core_stranger.cpp_CStranger_FUN_005bdd20
    PUSH ESI                            ; 005bdd21
    PUSH EDI                            ; 005bdd22
    PUSH EBP                            ; 005bdd23
    MOV EBP,ESP                         ; 005bdd24
    SUB ESP,0xa8                        ; 005bdd26
    AND ESP,0xfffffff8                  ; 005bdd2c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005bdd2f
    LEA ESI,[EBX + 0x158]               ; 005bdd32
    LEA EAX,[EBX + 0x1fbc4]             ; 005bdd38
    MOV dword ptr [ESP + 0x9c],EAX      ; 005bdd3e
    LEA EAX,[EBX + 0x1fbb8]             ; 005bdd45
    MOV dword ptr [ESP + 0x98],EAX      ; 005bdd4b
    LEA EAX,[EBP + 0x18]                ; 005bdd52
        ;   Label: LAB_005bdd52
    PUSH EAX                            ; 005bdd55
    PUSH ESI                            ; 005bdd56
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 005bdd57
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 005bdd5c
    MOV EDI,EAX                         ; 005bdd5f
    CMP EAX,0x12                        ; 005bdd61
    JNC 0x005be328                      ; 005bdd64
        ;   XREF to: 005be328 (CONDITIONAL_JUMP)  ; LAB_005be328
    CMP EAX,0x6                         ; 005bdd6a
    JNC 0x005be3ca                      ; 005bdd6d
        ;   XREF to: 005be3ca (CONDITIONAL_JUMP)  ; LAB_005be3ca
    CMP EAX,0x2                         ; 005bdd73
    JNC 0x005be40b                      ; 005bdd76
        ;   XREF to: 005be40b (CONDITIONAL_JUMP)  ; LAB_005be40b
    CMP EAX,0x1                         ; 005bdd7c
    JNZ 0x005be41a                      ; 005bdd7f
        ;   XREF to: 005be41a (CONDITIONAL_JUMP)  ; LAB_005be41a
    CMP EDI,0x7                         ; 005bdd85
        ;   Label: LAB_005bdd85
    JNZ 0x005be001                      ; 005bdd88
        ;   XREF to: 005be001 (CONDITIONAL_JUMP)  ; LAB_005be001
    MOV EAX,[0x03f6baec]                ; 005bdd8e | INT_03f6baec
    PUSH EAX                            ; 005bdd93
        ;   Label: LAB_005bdd93
    LEA EAX,[ESP + 0x60]                ; 005bdd94
    PUSH EAX                            ; 005bdd98
    PUSH ESI                            ; 005bdd99
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 005bdd9a
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV ECX,dword ptr [EBX + 0x1fbac]   ; 005bdd9f
    ADD ESP,0xc                         ; 005bdda5
    TEST ECX,ECX                        ; 005bdda8
    JZ 0x005be00b                       ; 005bddaa
        ;   XREF to: 005be00b (CONDITIONAL_JUMP)  ; LAB_005be00b
    PUSH 0x3f800000                     ; 005bddb0
    MOV EAX,dword ptr [EBX + 0x154]     ; 005bddb5
    MOV EDI,dword ptr [ECX + 0x154]     ; 005bddbb
    PUSH ECX                            ; 005bddc1
    MOV dword ptr [ESP + 0xac],EAX      ; 005bddc2
    CALL dword ptr [EDI + 0x3c]         ; 005bddc9
    ADD ESP,0x4                         ; 005bddcc
    PUSH EAX                            ; 005bddcf
    LEA EAX,[ESP + 0x64]                ; 005bddd0
    PUSH EAX                            ; 005bddd4
    LEA EAX,[ESP + 0x5c]                ; 005bddd5
    PUSH EAX                            ; 005bddd9
    PUSH EBX                            ; 005bddda
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005bdddb
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005bdde0
    PUSH EAX                            ; 005bdde3
    MOV EAX,dword ptr [ESP + 0xb0]      ; 005bdde4
    PUSH EBX                            ; 005bddeb
    CALL dword ptr [EAX + 0x20]         ; 005bddec
    ADD ESP,0x10                        ; 005bddef
        ;   Label: LAB_005bddef
    FLD float ptr [EBP + 0x18]          ; 005bddf2
        ;   Label: LAB_005bddf2
    FLDZ                                ; 005bddf5
    FCOMPP                              ; 005bddf7
    FNSTSW AX                           ; 005bddf9
    SAHF                                ; 005bddfb
    JC 0x005bdd52                       ; 005bddfc
        ;   XREF to: 005bdd52 (CONDITIONAL_JUMP)  ; LAB_005bdd52
    MOV ESP,EBP                         ; 005bde02
    POP EBP                             ; 005bde04
    POP EDI                             ; 005bde05
    POP ESI                             ; 005bde06
    POP EBX                             ; 005bde07
    RET                                 ; 005bde08
    PUSH EBX                            ; 005bde09
        ;   Label: LAB_005bde09
    MOV EDI,dword ptr [EBX + 0x24f8]    ; 005bde0a
    CALL core_stranger.cpp_CStranger_FUN_005c1f80 ; 005bde10
        ;   XREF to: 005c1f80 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_FUN_005c1f80(CStranger * this_ptr)
    MOV EAX,dword ptr [EBX + 0x1fc38]   ; 005bde15
    ADD ESP,0x4                         ; 005bde1b
    CMP EAX,0x2                         ; 005bde1e
    JNZ 0x005bde92                      ; 005bde21
        ;   XREF to: 005bde92 (CONDITIONAL_JUMP)  ; LAB_005bde92
    TEST EDI,EDI                        ; 005bde23
    JZ 0x005bde44                       ; 005bde25
        ;   XREF to: 005bde44 (CONDITIONAL_JUMP)  ; LAB_005bde44
    MOV EDX,dword ptr [ESP + 0x9c]      ; 005bde27
    PUSH EDX                            ; 005bde2e
    MOV ECX,dword ptr [ESP + 0x9c]      ; 005bde2f
    PUSH ECX                            ; 005bde36
    MOV EAX,dword ptr [EDI + 0x154]     ; 005bde37
    PUSH EDI                            ; 005bde3d
    CALL dword ptr [EAX + 0x60]         ; 005bde3e
    ADD ESP,0xc                         ; 005bde41
    MOV dword ptr [EBX + 0x1fc38],0x0   ; 005bde44
        ;   Label: LAB_005bde44
    MOV EAX,dword ptr [EBX + 0x2a8c]    ; 005bde4e
        ;   Label: LAB_005bde4e
    MOV dword ptr [EBX + 0x1fbb4],0x0   ; 005bde54
    CMP EAX,0xe                         ; 005bde5e
    JNZ 0x005bde77                      ; 005bde61
        ;   XREF to: 005bde77 (CONDITIONAL_JUMP)  ; LAB_005bde77
    MOV dword ptr [EBX + 0x2a90],0x0    ; 005bde63
    MOV dword ptr [EBX + 0x2a8c],0x0    ; 005bde6d
    CMP EDI,dword ptr [EBX + 0x1fc2c]   ; 005bde77
        ;   Label: LAB_005bde77
    JNZ 0x005bddf2                      ; 005bde7d
        ;   XREF to: 005bddf2 (CONDITIONAL_JUMP)  ; LAB_005bddf2
    MOV dword ptr [EBX + 0x1fc2c],0x0   ; 005bde83
    JMP 0x005bddf2                      ; 005bde8d
        ;   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)  ; LAB_005bddf2
    CMP EAX,0x6                         ; 005bde92
        ;   Label: LAB_005bde92
    JZ 0x005bde44                       ; 005bde95
        ;   XREF to: 005bde44 (CONDITIONAL_JUMP)  ; LAB_005bde44
    PUSH 0x767                          ; 005bde97
    PUSH EAX                            ; 005bde9c
    MOV EAX,0x653690                    ; 005bde9d | = "actionPending = %d\nstranger.cpp line %d"
    PUSH EAX                            ; 005bdea2 | = "actionPending = %d\nstranger.cpp line %d"
    MOV EAX,[0x00678a60]                ; 005bdea3 | g_CEditorToolsPtr
    PUSH EAX                            ; 005bdea8 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0 ; 005bdea9
        ;   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 005bdeae
    JMP 0x005bde4e                      ; 005bdeb1
        ;   XREF to: 005bde4e (UNCONDITIONAL_JUMP)  ; LAB_005bde4e
    MOV ECX,dword ptr [EBX + 0x1fc38]   ; 005bdeb3
        ;   Label: LAB_005bdeb3
    CMP ECX,0x4                         ; 005bdeb9
    JNZ 0x005bdef1                      ; 005bdebc
        ;   XREF to: 005bdef1 (CONDITIONAL_JUMP)  ; LAB_005bdef1
    MOV dword ptr [EBX + 0x1fc38],0x0   ; 005bdebe
    MOV EDX,dword ptr [EBX + 0x1fba0]   ; 005bdec8
        ;   Label: LAB_005bdec8
    TEST EDX,EDX                        ; 005bdece
    JZ 0x005bdf0d                       ; 005bded0
        ;   XREF to: 005bdf0d (CONDITIONAL_JUMP)  ; LAB_005bdf0d
    PUSH EBX                            ; 005bded2
    MOV EDI,dword ptr [EDX + 0x154]     ; 005bded3
    PUSH EDX                            ; 005bded9
    CALL dword ptr [EDI + 0x7c]         ; 005bdeda
    ADD ESP,0x8                         ; 005bdedd
    MOV EDI,EAX                         ; 005bdee0
    TEST EAX,EAX                        ; 005bdee2
    JNZ 0x005bdf2b                      ; 005bdee4
        ;   XREF to: 005bdf2b (CONDITIONAL_JUMP)  ; LAB_005bdf2b
    MOV dword ptr [EBX + 0x1fba0],EAX   ; 005bdee6
    JMP 0x005bddf2                      ; 005bdeec
        ;   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)  ; LAB_005bddf2
    PUSH 0x785                          ; 005bdef1
        ;   Label: LAB_005bdef1
    PUSH ECX                            ; 005bdef6
    MOV EAX,0x6536b8                    ; 005bdef7 | = "actionPending = %d\nstranger.cpp line %d"
    PUSH EAX                            ; 005bdefc | = "actionPending = %d\nstranger.cpp line %d"
    MOV EAX,[0x00678a60]                ; 005bdefd | g_CEditorToolsPtr
    PUSH EAX                            ; 005bdf02 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0 ; 005bdf03
        ;   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 005bdf08
    JMP 0x005bdec8                      ; 005bdf0b
        ;   XREF to: 005bdec8 (UNCONDITIONAL_JUMP)  ; LAB_005bdec8
    PUSH 0x78b                          ; 005bdf0d
        ;   Label: LAB_005bdf0d
    PUSH 0x6536e0                       ; 005bdf12 | = "Object to pick up is now NULL\nstrang..."
    MOV EDX,dword ptr [0x00678a60]      ; 005bdf17 | g_CEditorToolsPtr
    PUSH EDX                            ; 005bdf1d | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0 ; 005bdf1e
        ;   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 005bdf23
    JMP 0x005bddf2                      ; 005bdf26
        ;   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)  ; LAB_005bddf2
    MOV EAX,dword ptr [EBX + 0x1fba0]   ; 005bdf2b
        ;   Label: LAB_005bdf2b
    TEST EAX,EAX                        ; 005bdf31
    JNZ 0x005bdf77                      ; 005bdf33
        ;   XREF to: 005bdf77 (CONDITIONAL_JUMP)  ; LAB_005bdf77
    CMP EDI,0x2                         ; 005bdf35
        ;   Label: LAB_005bdf35
    JNZ 0x005bdf67                      ; 005bdf38
        ;   XREF to: 005bdf67 (CONDITIONAL_JUMP)  ; LAB_005bdf67
    MOV ECX,dword ptr [EBX + 0x1fc38]   ; 005bdf3a
    TEST ECX,ECX                        ; 005bdf40
    JZ 0x005bdf5d                       ; 005bdf42
        ;   XREF to: 005bdf5d (CONDITIONAL_JUMP)  ; LAB_005bdf5d
    PUSH 0x7a9                          ; 005bdf44
    PUSH ECX                            ; 005bdf49
    PUSH 0x653713                       ; 005bdf4a | = "actionPending = %d\nstranger.cpp line %d"
    MOV EAX,[0x00678a60]                ; 005bdf4f | g_CEditorToolsPtr
    PUSH EAX                            ; 005bdf54 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0 ; 005bdf55
        ;   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 005bdf5a
    MOV dword ptr [EBX + 0x1fc38],0x1   ; 005bdf5d
        ;   Label: LAB_005bdf5d
    PUSH 0x1                            ; 005bdf67
        ;   Label: LAB_005bdf67
    PUSH EBX                            ; 005bdf69
    CALL core_hero.cpp_CHero_FUN_004f3890 ; 005bdf6a
        ;   XREF to: 004f3890 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_FUN_004f3890(CHero * this_ptr)
    ADD ESP,0x8                         ; 005bdf6f
    JMP 0x005bddf2                      ; 005bdf72
        ;   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)  ; LAB_005bddf2
    PUSH EBX                            ; 005bdf77
        ;   Label: LAB_005bdf77
    MOV EDX,dword ptr [EAX + 0x154]     ; 005bdf78
    PUSH EAX                            ; 005bdf7e
    CALL dword ptr [EDX + 0x7c]         ; 005bdf7f
    ADD ESP,0x8                         ; 005bdf82
    CMP EAX,0x4                         ; 005bdf85
    SETZ AL                             ; 005bdf88
    AND EAX,0xff                        ; 005bdf8b
    JZ 0x005bdf35                       ; 005bdf90
        ;   XREF to: 005bdf35 (CONDITIONAL_JUMP)  ; LAB_005bdf35
    MOV dword ptr [EBX + 0x2a90],0x0    ; 005bdf92
    MOV dword ptr [EBX + 0x2a8c],0xe    ; 005bdf9c
    JMP 0x005bdf35                      ; 005bdfa6
        ;   XREF to: 005bdf35 (UNCONDITIONAL_JUMP)  ; LAB_005bdf35
    MOV ECX,dword ptr [EBX + 0x24f8]    ; 005bdfa8
        ;   Label: LAB_005bdfa8
    CMP ECX,dword ptr [EBX + 0x1fc2c]   ; 005bdfae
    JNZ 0x005bdfc0                      ; 005bdfb4
        ;   XREF to: 005bdfc0 (CONDITIONAL_JUMP)  ; LAB_005bdfc0
    MOV dword ptr [EBX + 0x1fc2c],0x0   ; 005bdfb6
    PUSH 0x1                            ; 005bdfc0
        ;   Label: LAB_005bdfc0
    PUSH EBX                            ; 005bdfc2
    CALL core_hero.cpp_CHero_FUN_004f38d0 ; 005bdfc3
        ;   XREF to: 004f38d0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_FUN_004f38d0(CHero * this_ptr)
    MOV EDI,dword ptr [EBX + 0x1fc38]   ; 005bdfc8
    ADD ESP,0x8                         ; 005bdfce
    CMP EDI,0x1                         ; 005bdfd1
    JNZ 0x005bdfe5                      ; 005bdfd4
        ;   XREF to: 005bdfe5 (CONDITIONAL_JUMP)  ; LAB_005bdfe5
    MOV dword ptr [EBX + 0x1fc38],0x0   ; 005bdfd6
    JMP 0x005bddf2                      ; 005bdfe0
        ;   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)  ; LAB_005bddf2
    PUSH 0x7c9                          ; 005bdfe5
        ;   Label: LAB_005bdfe5
    PUSH EDI                            ; 005bdfea
    PUSH 0x65373b                       ; 005bdfeb | = "actionPending = %d\nstranger.cpp line %d"
    MOV EDX,dword ptr [0x00678a60]      ; 005bdff0 | g_CEditorToolsPtr
    PUSH EDX                            ; 005bdff6 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0 ; 005bdff7
        ;   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0(CEditorTools * this_ptr, char * format)
    JMP 0x005bddef                      ; 005bdffc
        ;   XREF to: 005bddef (UNCONDITIONAL_JUMP)  ; LAB_005bddef
    MOV EAX,[0x03f6bae8]                ; 005be001 | INT_03f6bae8
        ;   Label: LAB_005be001
    JMP 0x005bdd93                      ; 005be006
        ;   XREF to: 005bdd93 (UNCONDITIONAL_JUMP)  ; LAB_005bdd93
    CMP dword ptr [EBX + 0x1fc28],0x0   ; 005be00b
        ;   Label: LAB_005be00b
    JNZ 0x005be089                      ; 005be012
        ;   XREF to: 005be089 (CONDITIONAL_JUMP)  ; LAB_005be089
    CMP dword ptr [EBX + 0x2410],0x0    ; 005be014
    JZ 0x005bddf2                       ; 005be01b
        ;   XREF to: 005bddf2 (CONDITIONAL_JUMP)  ; LAB_005bddf2
    PUSH 0x3                            ; 005be021
    PUSH ESI                            ; 005be023
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005be024
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0xac],EAX      ; 005be029
    FLD float ptr [ESP + 0xac]          ; 005be030
    ADD ESP,0x8                         ; 005be037
    FCOMP double ptr [0x006537e4]       ; 005be03a | DOUBLE_006537e4
    FNSTSW AX                           ; 005be040
    SAHF                                ; 005be042
    JA 0x005be0c8                       ; 005be043
        ;   XREF to: 005be0c8 (CONDITIONAL_JUMP)  ; LAB_005be0c8
    PUSH 0x1                            ; 005be049
    PUSH ESI                            ; 005be04b
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005be04c
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0xac],EAX      ; 005be051
    FLD float ptr [ESP + 0xac]          ; 005be058
    ADD ESP,0x8                         ; 005be05f
    FCOMP double ptr [0x006537e4]       ; 005be062 | DOUBLE_006537e4
    FNSTSW AX                           ; 005be068
    SAHF                                ; 005be06a
    JBE 0x005be0e4                      ; 005be06b
        ;   XREF to: 005be0e4 (CONDITIONAL_JUMP)  ; LAB_005be0e4
    LEA EAX,[ESP + 0x5c]                ; 005be06d
    PUSH 0x3f800000                     ; 005be071
    PUSH EAX                            ; 005be076
    MOV EDX,dword ptr [EBX + 0x154]     ; 005be077
    PUSH EBX                            ; 005be07d
    CALL dword ptr [EDX + 0x1c]         ; 005be07e
    ADD ESP,0xc                         ; 005be081
    JMP 0x005bddf2                      ; 005be084
        ;   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)  ; LAB_005bddf2
    MOV EAX,dword ptr [EBX + 0x1fc28]   ; 005be089
        ;   Label: LAB_005be089
    PUSH 0x3f800000                     ; 005be08f
    PUSH EAX                            ; 005be094
    MOV EDX,dword ptr [EAX + 0x154]     ; 005be095
    MOV EDI,dword ptr [EBX + 0x154]     ; 005be09b
    CALL dword ptr [EDX + 0x3c]         ; 005be0a1
    ADD ESP,0x4                         ; 005be0a4
    PUSH EAX                            ; 005be0a7
    LEA EAX,[ESP + 0x64]                ; 005be0a8
    PUSH EAX                            ; 005be0ac
    LEA EAX,[ESP + 0x98]                ; 005be0ad
    PUSH EAX                            ; 005be0b4
    PUSH EBX                            ; 005be0b5
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005be0b6
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005be0bb
    PUSH EAX                            ; 005be0be
    PUSH EBX                            ; 005be0bf
    CALL dword ptr [EDI + 0x20]         ; 005be0c0
    JMP 0x005bddef                      ; 005be0c3
        ;   XREF to: 005bddef (UNCONDITIONAL_JUMP)  ; LAB_005bddef
    LEA EAX,[ESP + 0x5c]                ; 005be0c8
        ;   Label: LAB_005be0c8
    PUSH 0x3fd9999a                     ; 005be0cc
    PUSH EAX                            ; 005be0d1
    MOV EDI,dword ptr [EBX + 0x154]     ; 005be0d2
    PUSH EBX                            ; 005be0d8
    CALL dword ptr [EDI + 0x1c]         ; 005be0d9
    ADD ESP,0xc                         ; 005be0dc
    JMP 0x005bddf2                      ; 005be0df
        ;   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)  ; LAB_005bddf2
    PUSH 0x2                            ; 005be0e4
        ;   Label: LAB_005be0e4
    PUSH ESI                            ; 005be0e6
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005be0e7
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0xac],EAX      ; 005be0ec
    FLD float ptr [ESP + 0xac]          ; 005be0f3
    ADD ESP,0x8                         ; 005be0fa
    FCOMP double ptr [0x006537e4]       ; 005be0fd | DOUBLE_006537e4
    FNSTSW AX                           ; 005be103
    SAHF                                ; 005be105
    JBE 0x005bddf2                      ; 005be106
        ;   XREF to: 005bddf2 (CONDITIONAL_JUMP)  ; LAB_005bddf2
    LEA EAX,[ESP + 0x5c]                ; 005be10c
    PUSH 0x3f800000                     ; 005be110
    PUSH EAX                            ; 005be115
    MOV EDX,dword ptr [EBX + 0x154]     ; 005be116
    PUSH EBX                            ; 005be11c
    CALL dword ptr [EDX + 0x1c]         ; 005be11d
    ADD ESP,0xc                         ; 005be120
    JMP 0x005bddf2                      ; 005be123
        ;   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)  ; LAB_005bddf2
    MOV EDI,dword ptr [0x02cf2bf0]      ; 005be128 | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_005be128
    PUSH EDI                            ; 005be12e
    MOV EAX,dword ptr [EBX + 0x2598]    ; 005be12f
    PUSH EAX                            ; 005be135
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005be136
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005be13b
    MOV EDI,EAX                         ; 005be13e
    MOV dword ptr [ESP + 0xa0],EAX      ; 005be140
    TEST EAX,EAX                        ; 005be147
    JZ 0x005be262                       ; 005be149
        ;   XREF to: 005be262 (CONDITIONAL_JUMP)  ; LAB_005be262
    MOV EDX,dword ptr [0x03f6bafc]      ; 005be14f | INT_03f6bafc
    PUSH EDX                            ; 005be155
    LEA EAX,[ESP + 0x78]                ; 005be156
    PUSH EAX                            ; 005be15a
    PUSH ESI                            ; 005be15b
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 005be15c
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 005be161
    PUSH EAX                            ; 005be164
    LEA EAX,[ESP + 0x84]                ; 005be165
    PUSH EAX                            ; 005be16c
    PUSH EBX                            ; 005be16d
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005be16e
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005be173
    LEA EAX,[ESP + 0x8]                 ; 005be176
    PUSH EAX                            ; 005be17a
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 005be17b
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 005be180
    PUSH 0x41700000                     ; 005be183
    PUSH 0x41200000                     ; 005be188
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005be18d
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBX + 0x2598],0x0    ; 005be262
        ;   Label: LAB_005be262
    JMP 0x005bddf2                      ; 005be26c
        ;   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)  ; LAB_005bddf2
    MOV ECX,dword ptr [EBX + 0x2598]    ; 005be271
        ;   Label: LAB_005be271
    TEST ECX,ECX                        ; 005be277
    JZ 0x005bddf2                       ; 005be279
        ;   XREF to: 005bddf2 (CONDITIONAL_JUMP)  ; LAB_005bddf2
    LEA EAX,[ECX + 0x20]                ; 005be27f
    PUSH EAX                            ; 005be282
    LEA EAX,[ESP + 0x48]                ; 005be283
    PUSH EAX                            ; 005be287
    PUSH EBX                            ; 005be288
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005be289
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    FLDZ                                ; 005be28e
    ADD ESP,0xc                         ; 005be290
    FCOMP float ptr [EAX + 0x8]         ; 005be293
    FNSTSW AX                           ; 005be296
    SAHF                                ; 005be298
    JNC 0x005bddf2                      ; 005be299
        ;   XREF to: 005bddf2 (CONDITIONAL_JUMP)  ; LAB_005bddf2
    PUSH 0x65376d                       ; 005be29f | = "hit-gh[4,7].wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005be2a4
    PUSH EBX                            ; 005be2aa
    CALL dword ptr [EAX + 0x24]         ; 005be2ab
    ADD ESP,0x8                         ; 005be2ae
    JMP 0x005bddf2                      ; 005be2b1
        ;   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)  ; LAB_005bddf2
    PUSH 0x65377d                       ; 005be2b6 | = "fall-1.wav"
        ;   Label: LAB_005be2b6
    MOV EAX,dword ptr [EBX + 0x154]     ; 005be2bb
    PUSH EBX                            ; 005be2c1
    CALL dword ptr [EAX + 0x24]         ; 005be2c2
    ADD ESP,0x8                         ; 005be2c5
    JMP 0x005bddf2                      ; 005be2c8
        ;   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)  ; LAB_005bddf2
    PUSH EBX                            ; 005be2cd
        ;   Label: LAB_005be2cd
    CALL core_stranger.cpp_CStranger_FUN_005c1f00 ; 005be2ce
        ;   XREF to: 005c1f00 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_FUN_005c1f00(CStranger * this_ptr)
    ADD ESP,0x4                         ; 005be2d3
    JMP 0x005bddf2                      ; 005be2d6
        ;   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)  ; LAB_005bddf2
    PUSH 0x81c                          ; 005be2db
        ;   Label: LAB_005be2db
    PUSH EDX                            ; 005be2e0
    PUSH 0x653788                       ; 005be2e1 | = "actionPending = %d\nstranger.cpp line %d"
    MOV EDI,dword ptr [0x00678a60]      ; 005be2e6 | g_CEditorToolsPtr
    PUSH EDI                            ; 005be2ec | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0 ; 005be2ed
        ;   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 005be2f2
    JMP 0x005be386                      ; 005be2f5
        ;   XREF to: 005be386 (UNCONDITIONAL_JUMP)  ; LAB_005be386
    PUSH EBX                            ; 005be2fa
        ;   Label: LAB_005be2fa
    CALL core_hero.cpp_CHero_FUN_004f30f0 ; 005be2fb
        ;   XREF to: 004f30f0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_FUN_004f30f0(CHero * this_ptr)
    ADD ESP,0x4                         ; 005be300
    JMP 0x005bddf2                      ; 005be303
        ;   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)  ; LAB_005bddf2
    MOV EAX,[0x00663750]                ; 005be308 | FLOAT_00663750
        ;   Label: LAB_005be308
    MOV dword ptr [EBX + 0x242c],EAX    ; 005be30d
    JMP 0x005bddf2                      ; 005be313
        ;   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)  ; LAB_005bddf2
    MOV EAX,[0x00663758]                ; 005be318 | FLOAT_00663758
        ;   Label: LAB_005be318
    MOV dword ptr [EBX + 0x242c],EAX    ; 005be31d
    JMP 0x005bddf2                      ; 005be323
        ;   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)  ; LAB_005bddf2
    JBE 0x005bddf2                      ; 005be328
        ;   XREF to: 005bddf2 (CONDITIONAL_JUMP)  ; LAB_005bddf2
        ;   Label: LAB_005be328
    CMP EAX,0x17                        ; 005be32e
    JNC 0x005be342                      ; 005be331
        ;   XREF to: 005be342 (CONDITIONAL_JUMP)  ; LAB_005be342
    CMP EAX,0x15                        ; 005be333
    JNC 0x005be367                      ; 005be336
        ;   XREF to: 005be367 (CONDITIONAL_JUMP)  ; LAB_005be367
    CMP EAX,0x13                        ; 005be338
    JZ 0x005be2cd                       ; 005be33b
        ;   XREF to: 005be2cd (CONDITIONAL_JUMP)  ; LAB_005be2cd
    JMP 0x005be41a                      ; 005be33d
        ;   XREF to: 005be41a (UNCONDITIONAL_JUMP)  ; LAB_005be41a
    JBE 0x005be2fa                      ; 005be342
        ;   XREF to: 005be2fa (CONDITIONAL_JUMP)  ; LAB_005be2fa
        ;   Label: LAB_005be342
    CMP EAX,0x29a                       ; 005be344
    JNC 0x005be359                      ; 005be349
        ;   XREF to: 005be359 (CONDITIONAL_JUMP)  ; LAB_005be359
    CMP EAX,0x18                        ; 005be34b
    JZ 0x005bddf2                       ; 005be34e
        ;   XREF to: 005bddf2 (CONDITIONAL_JUMP)  ; LAB_005bddf2
    JMP 0x005be41a                      ; 005be354
        ;   XREF to: 005be41a (UNCONDITIONAL_JUMP)  ; LAB_005be41a
    JBE 0x005be308                      ; 005be359
        ;   XREF to: 005be308 (CONDITIONAL_JUMP)  ; LAB_005be308
        ;   Label: LAB_005be359
    CMP EAX,0x29b                       ; 005be35b
    JZ 0x005be318                       ; 005be360
        ;   XREF to: 005be318 (CONDITIONAL_JUMP)  ; LAB_005be318
    JMP 0x005be41a                      ; 005be362
        ;   XREF to: 005be41a (UNCONDITIONAL_JUMP)  ; LAB_005be41a
    JBE 0x005bdfa8                      ; 005be367
        ;   XREF to: 005bdfa8 (CONDITIONAL_JUMP)  ; LAB_005bdfa8
        ;   Label: LAB_005be367
    MOV EDX,dword ptr [EBX + 0x1fc38]   ; 005be36d
    CMP EDX,0x5                         ; 005be373
    JNZ 0x005be2db                      ; 005be376
        ;   XREF to: 005be2db (CONDITIONAL_JUMP)  ; LAB_005be2db
    MOV dword ptr [EBX + 0x1fc38],0x0   ; 005be37c
    CMP dword ptr [EBX + 0x1fb9c],0x0   ; 005be386
        ;   Label: LAB_005be386
    JNZ 0x005be3a8                      ; 005be38d
        ;   XREF to: 005be3a8 (CONDITIONAL_JUMP)  ; LAB_005be3a8
    PUSH 0x822                          ; 005be38f
    PUSH 0x6537b0                       ; 005be394 | = "doorToOpen == NULL\nstranger.cpp line %d"
    MOV EDX,dword ptr [0x00678a60]      ; 005be399 | g_CEditorToolsPtr
    PUSH EDX                            ; 005be39f | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0 ; 005be3a0
        ;   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 005be3a5
    PUSH EBX                            ; 005be3a8
        ;   Label: LAB_005be3a8
    CALL core_hero.cpp_CHero_FUN_004f2ed0 ; 005be3a9
        ;   XREF to: 004f2ed0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_FUN_004f2ed0(CHero * this_ptr)
    ADD ESP,0x4                         ; 005be3ae
    TEST EAX,EAX                        ; 005be3b1
    JNZ 0x005bddf2                      ; 005be3b3
        ;   XREF to: 005bddf2 (CONDITIONAL_JUMP)  ; LAB_005bddf2
    PUSH 0x1                            ; 005be3b9
    PUSH EAX                            ; 005be3bb
    PUSH ESI                            ; 005be3bc
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005be3bd
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005be3c2
    JMP 0x005bddf2                      ; 005be3c5
        ;   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)  ; LAB_005bddf2
    JBE 0x005be128                      ; 005be3ca
        ;   XREF to: 005be128 (CONDITIONAL_JUMP)  ; LAB_005be128
        ;   Label: LAB_005be3ca
    CMP EAX,0xf                         ; 005be3d0
    JNC 0x005be3ed                      ; 005be3d3
        ;   XREF to: 005be3ed (CONDITIONAL_JUMP)  ; LAB_005be3ed
    CMP EAX,0x7                         ; 005be3d5
    JZ 0x005bdd85                       ; 005be3d8
        ;   XREF to: 005bdd85 (CONDITIONAL_JUMP)  ; LAB_005bdd85
    PUSH EDI                            ; 005be3de
    PUSH EBX                            ; 005be3df
    CALL core_charactr.cpp_CCharacter_FUN_0042ec40 ; 005be3e0
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042ec40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 005be3e5
    JMP 0x005bddf2                      ; 005be3e8
        ;   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)  ; LAB_005bddf2
    JBE 0x005be271                      ; 005be3ed
        ;   XREF to: 005be271 (CONDITIONAL_JUMP)  ; LAB_005be271
        ;   Label: LAB_005be3ed
    CMP EAX,0x11                        ; 005be3f3
    JZ 0x005be2b6                       ; 005be3f6
        ;   XREF to: 005be2b6 (CONDITIONAL_JUMP)  ; LAB_005be2b6
    PUSH EDI                            ; 005be3fc
    PUSH EBX                            ; 005be3fd
    CALL core_charactr.cpp_CCharacter_FUN_0042ec40 ; 005be3fe
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042ec40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 005be403
    JMP 0x005bddf2                      ; 005be406
        ;   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)  ; LAB_005bddf2
    JBE 0x005bdeb3                      ; 005be40b
        ;   XREF to: 005bdeb3 (CONDITIONAL_JUMP)  ; LAB_005bdeb3
        ;   Label: LAB_005be40b
    CMP EAX,0x3                         ; 005be411
    JZ 0x005bde09                       ; 005be414
        ;   XREF to: 005bde09 (CONDITIONAL_JUMP)  ; LAB_005bde09
    PUSH EDI                            ; 005be41a
        ;   Label: LAB_005be41a
    PUSH EBX                            ; 005be41b
    CALL core_charactr.cpp_CCharacter_FUN_0042ec40 ; 005be41c
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042ec40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 005be421
    JMP 0x005bddf2                      ; 005be424
        ;   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)  ; LAB_005bddf2


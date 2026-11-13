; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_0046bde0(CHero *param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x170]:1  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined        Stack[-0x134]:1  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined        Stack[-0xec]:1  local_ec
; undefined        Stack[-0xe0]:1  local_e0
; undefined        Stack[-0xc8]:1  local_c8
; undefined        Stack[-0xb0]:1  local_b0
; undefined4       Stack[-0xa8]:4  local_a8
; undefined        Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined        Stack[-0x80]:1  local_80
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
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
;   core_doc.cpp_FUN_00469550 at 004697d4
;
; Referenced Globals:
;   undefined4 s_actionPending_d_doc_cpp_005d9e07+1
;   TerminatedCString s_actionPending_d_doc_cpp_005d9e2b
;   TerminatedCString s_Object_to_pick_up_is_now_005d9e4e
;   TerminatedCString s_actionPending_d_doc_cpp_005d9e7c
;   TerminatedCString s_actionPending_d_doc_cpp_005d9e9f
;   TerminatedCString s_kick1_wav_005d9ec2
;   TerminatedCString s_hit_gh_4_7_wav_005d9ecc
;   TerminatedCString s_fall_1_wav_005d9edc
;   TerminatedCString s_actionPending_d_doc_cpp_005d9ee7
;   TerminatedCString s_doorToOpen_NULL_doc_cpp_005d9f0a
;   undefined4 DAT_005d9f34
;   undefined4 DAT_005d9f3c
;   undefined4 DAT_005d9f44
;   undefined4 DAT_005fecc0
;   undefined4 DAT_005fecc4
;   ... and 9 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_doc.cpp_FUN_00470750
;   core_doc.cpp_FUN_004707d0
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060
;   core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0
;   core_hero.cpp_CHero_toggleLeverNow_FUN_004eb7f0
;   core_hero.cpp_CHero_tryOpenDoor_FUN_004eb5e0
;   core_hero.cpp_FUN_004ec280
;   core_motion.cpp_CMotionController_advance_FUN_00524270
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046bde0
        ;   Label: core_doc.cpp_FUN_0046bde0
    PUSH ESI                            ; 0046bde1
    PUSH EDI                            ; 0046bde2
    PUSH EBP                            ; 0046bde3
    MOV EBP,ESP                         ; 0046bde4
    SUB ESP,0x164                       ; 0046bde6
    AND ESP,0xfffffff8                  ; 0046bdec
    MOV EBX,dword ptr [EBP + 0x14]      ; 0046bdef
    LEA EAX,[EBX + 0x158]               ; 0046bdf2
    MOV dword ptr [ESP + 0x150],EAX     ; 0046bdf8
    LEA EAX,[EBX + 0x1ff9c]             ; 0046bdff
    MOV dword ptr [ESP + 0x144],EAX     ; 0046be05
    LEA EAX,[EBX + 0x1ff90]             ; 0046be0c
    MOV dword ptr [ESP + 0x140],EAX     ; 0046be12
    LEA EAX,[EBP + 0x18]                ; 0046be19
        ;   Label: LAB_0046be19
    PUSH EAX                            ; 0046be1c
    MOV EDX,dword ptr [ESP + 0x154]     ; 0046be1d
    PUSH EDX                            ; 0046be24
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 0046be25
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0046be2a
    MOV ESI,EAX                         ; 0046be2d
    CMP EAX,0x12                        ; 0046be2f
    JNC 0x0046c86c                      ; 0046be32
        ;   XREF to: 0046c86c (CONDITIONAL_JUMP)  ; LAB_0046c86c
    CMP EAX,0x6                         ; 0046be38
    JNC 0x0046c915                      ; 0046be3b
        ;   XREF to: 0046c915 (CONDITIONAL_JUMP)  ; LAB_0046c915
    CMP EAX,0x2                         ; 0046be41
    JNC 0x0046c956                      ; 0046be44
        ;   XREF to: 0046c956 (CONDITIONAL_JUMP)  ; LAB_0046c956
    CMP EAX,0x1                         ; 0046be4a
    JNZ 0x0046c965                      ; 0046be4d
        ;   XREF to: 0046c965 (CONDITIONAL_JUMP)  ; LAB_0046c965
    CMP ESI,0x7                         ; 0046be53
        ;   Label: LAB_0046be53
    JNZ 0x0046c10f                      ; 0046be56
        ;   XREF to: 0046c10f (CONDITIONAL_JUMP)  ; LAB_0046c10f
    MOV EAX,[0x01b68834]                ; 0046be5c | DAT_01b68834
    PUSH EAX                            ; 0046be61
        ;   Label: LAB_0046be61
    MOV ESI,dword ptr [ESP + 0x154]     ; 0046be62
    PUSH ESI                            ; 0046be69
    LEA ESI,[ESP + 0x94]                ; 0046be6a
    LEA EDI,[ESP + 0xb8]                ; 0046be71
    CALL core_skeleton.cpp_FUN_00569040 ; 0046be78
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    LEA ESI,[ESP + 0x94]                ; 0046be7d
    ADD ESP,0x8                         ; 0046be84
    MOVSD ES:EDI,ESI                    ; 0046be87
    MOVSD ES:EDI,ESI                    ; 0046be88
    MOVSD ES:EDI,ESI                    ; 0046be89
    MOV EDI,dword ptr [EBX + 0x1ff84]   ; 0046be8a
    TEST EDI,EDI                        ; 0046be90
    JZ 0x0046c119                       ; 0046be92
        ;   XREF to: 0046c119 (CONDITIONAL_JUMP)  ; LAB_0046c119
    PUSH 0x3f800000                     ; 0046be98
    MOV EAX,dword ptr [EBX + 0x154]     ; 0046be9d
    MOV EDX,dword ptr [EDI + 0x154]     ; 0046bea3
    PUSH EDI                            ; 0046bea9
    MOV dword ptr [ESP + 0x168],EAX     ; 0046beaa
    CALL dword ptr [EDX + 0x44]         ; 0046beb1
    ADD ESP,0x4                         ; 0046beb4
    PUSH EAX                            ; 0046beb7
    LEA EAX,[ESP + 0xb8]                ; 0046beb8
    PUSH EAX                            ; 0046bebf
    PUSH EBX                            ; 0046bec0
    LEA ESI,[ESP + 0x144]               ; 0046bec1
    CALL core_actor.cpp_FUN_00408b40    ; 0046bec8
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0046becd
    LEA EAX,[ESP + 0xc4]                ; 0046bed0
    LEA EDI,[ESP + 0xc4]                ; 0046bed7
    PUSH EAX                            ; 0046bede
    LEA ESI,[ESP + 0x140]               ; 0046bedf
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0046bee6
        ;   Label: LAB_0046bee6
    PUSH EBX                            ; 0046beed
    MOVSD ES:EDI,ESI                    ; 0046beee
    MOVSD ES:EDI,ESI                    ; 0046beef
    MOVSD ES:EDI,ESI                    ; 0046bef0
    CALL dword ptr [EAX + 0x28]         ; 0046bef1
    ADD ESP,0x10                        ; 0046bef4
        ;   Label: LAB_0046bef4
    FLD float ptr [EBP + 0x18]          ; 0046bef7
        ;   Label: LAB_0046bef7
    FLDZ                                ; 0046befa
    FCOMPP                              ; 0046befc
    FNSTSW AX                           ; 0046befe
    SAHF                                ; 0046bf00
    JC 0x0046be19                       ; 0046bf01
        ;   XREF to: 0046be19 (CONDITIONAL_JUMP)  ; LAB_0046be19
    MOV ESP,EBP                         ; 0046bf07
    POP EBP                             ; 0046bf09
    POP EDI                             ; 0046bf0a
    POP ESI                             ; 0046bf0b
    POP EBX                             ; 0046bf0c
    RET                                 ; 0046bf0d
    PUSH EBX                            ; 0046bf0e
        ;   Label: LAB_0046bf0e
    MOV ESI,dword ptr [EBX + 0x2628]    ; 0046bf0f
    CALL core_doc.cpp_FUN_004707d0      ; 0046bf15
        ;   XREF to: 004707d0 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_004707d0()
    MOV EDI,dword ptr [EBX + 0x1ff5c]   ; 0046bf1a
    ADD ESP,0x4                         ; 0046bf20
    CMP EDI,0x2                         ; 0046bf23
    JNZ 0x0046bf97                      ; 0046bf26
        ;   XREF to: 0046bf97 (CONDITIONAL_JUMP)  ; LAB_0046bf97
    TEST ESI,ESI                        ; 0046bf28
    JZ 0x0046bf49                       ; 0046bf2a
        ;   XREF to: 0046bf49 (CONDITIONAL_JUMP)  ; LAB_0046bf49
    MOV EDI,dword ptr [ESP + 0x144]     ; 0046bf2c
    PUSH EDI                            ; 0046bf33
    MOV EDX,dword ptr [ESP + 0x144]     ; 0046bf34
    PUSH EDX                            ; 0046bf3b
    MOV EAX,dword ptr [ESI + 0x154]     ; 0046bf3c
    PUSH ESI                            ; 0046bf42
    CALL dword ptr [EAX + 0x68]         ; 0046bf43
    ADD ESP,0xc                         ; 0046bf46
    MOV dword ptr [EBX + 0x1ff5c],0x0   ; 0046bf49
        ;   Label: LAB_0046bf49
    MOV ECX,dword ptr [EBX + 0x2c98]    ; 0046bf53
        ;   Label: LAB_0046bf53
    MOV dword ptr [EBX + 0x1ff8c],0x0   ; 0046bf59
    CMP ECX,0xe                         ; 0046bf63
    JNZ 0x0046bf7c                      ; 0046bf66
        ;   XREF to: 0046bf7c (CONDITIONAL_JUMP)  ; LAB_0046bf7c
    MOV dword ptr [EBX + 0x2c9c],0x0    ; 0046bf68
    MOV dword ptr [EBX + 0x2c98],0x0    ; 0046bf72
    CMP ESI,dword ptr [EBX + 0x20004]   ; 0046bf7c
        ;   Label: LAB_0046bf7c
    JNZ 0x0046bef7                      ; 0046bf82
        ;   XREF to: 0046bef7 (CONDITIONAL_JUMP)  ; LAB_0046bef7
    MOV dword ptr [EBX + 0x20004],0x0   ; 0046bf88
    JMP 0x0046bef7                      ; 0046bf92
        ;   XREF to: 0046bef7 (UNCONDITIONAL_JUMP)  ; LAB_0046bef7
    CMP EDI,0x6                         ; 0046bf97
        ;   Label: LAB_0046bf97
    JZ 0x0046bf49                       ; 0046bf9a
        ;   XREF to: 0046bf49 (CONDITIONAL_JUMP)  ; LAB_0046bf49
    PUSH 0x88e                          ; 0046bf9c
    PUSH EDI                            ; 0046bfa1
    MOV EAX,0x5d9e08                    ; 0046bfa2 | s_actionPending_d_doc_cpp_005d9e07+1
    PUSH EAX                            ; 0046bfa7 | s_actionPending_d_doc_cpp_005d9e07+1
    MOV ECX,dword ptr [0x0061abc0]      ; 0046bfa8 | g_CEditorToolsPtr
    PUSH ECX                            ; 0046bfae
    CALL shape_edittool.cpp_FUN_00494340 ; 0046bfaf
        ;   XREF to: 00494340 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00494340()
    ADD ESP,0x10                        ; 0046bfb4
    JMP 0x0046bf53                      ; 0046bfb7
        ;   XREF to: 0046bf53 (UNCONDITIONAL_JUMP)  ; LAB_0046bf53
    MOV EAX,dword ptr [EBX + 0x1ff5c]   ; 0046bfb9
        ;   Label: LAB_0046bfb9
    CMP EAX,0x4                         ; 0046bfbf
    JNZ 0x0046bffa                      ; 0046bfc2
        ;   XREF to: 0046bffa (CONDITIONAL_JUMP)  ; LAB_0046bffa
    MOV dword ptr [EBX + 0x1ff5c],0x0   ; 0046bfc4
    MOV ESI,dword ptr [EBX + 0x1ff78]   ; 0046bfce
        ;   Label: LAB_0046bfce
    TEST ESI,ESI                        ; 0046bfd4
    JZ 0x0046c017                       ; 0046bfd6
        ;   XREF to: 0046c017 (CONDITIONAL_JUMP)  ; LAB_0046c017
    PUSH EBX                            ; 0046bfd8
    MOV EDX,dword ptr [ESI + 0x154]     ; 0046bfd9
    PUSH ESI                            ; 0046bfdf
    CALL dword ptr [EDX + 0x84]         ; 0046bfe0
    ADD ESP,0x8                         ; 0046bfe6
    MOV ESI,EAX                         ; 0046bfe9
    TEST EAX,EAX                        ; 0046bfeb
    JNZ 0x0046c035                      ; 0046bfed
        ;   XREF to: 0046c035 (CONDITIONAL_JUMP)  ; LAB_0046c035
    MOV dword ptr [EBX + 0x1ff78],EAX   ; 0046bfef
    JMP 0x0046bef7                      ; 0046bff5
        ;   XREF to: 0046bef7 (UNCONDITIONAL_JUMP)  ; LAB_0046bef7
    PUSH 0x8ac                          ; 0046bffa
        ;   Label: LAB_0046bffa
    PUSH EAX                            ; 0046bfff
    MOV EAX,0x5d9e2b                    ; 0046c000 | = "actionPending = %d\ndoc.cpp line %d"
    PUSH EAX                            ; 0046c005 | = "actionPending = %d\ndoc.cpp line %d"
    MOV ECX,dword ptr [0x0061abc0]      ; 0046c006 | g_CEditorToolsPtr
    PUSH ECX                            ; 0046c00c
    CALL shape_edittool.cpp_FUN_00494340 ; 0046c00d
        ;   XREF to: 00494340 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00494340()
    ADD ESP,0x10                        ; 0046c012
    JMP 0x0046bfce                      ; 0046c015
        ;   XREF to: 0046bfce (UNCONDITIONAL_JUMP)  ; LAB_0046bfce
    PUSH 0x8b2                          ; 0046c017
        ;   Label: LAB_0046c017
    PUSH 0x5d9e4e                       ; 0046c01c | = "Object to pick up is now NULL\ndoc.cp..."
    MOV ECX,dword ptr [0x0061abc0]      ; 0046c021 | g_CEditorToolsPtr
    PUSH ECX                            ; 0046c027
    CALL shape_edittool.cpp_FUN_00494340 ; 0046c028
        ;   XREF to: 00494340 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00494340()
    ADD ESP,0xc                         ; 0046c02d
    JMP 0x0046bef7                      ; 0046c030
        ;   XREF to: 0046bef7 (UNCONDITIONAL_JUMP)  ; LAB_0046bef7
    MOV EAX,dword ptr [EBX + 0x1ff78]   ; 0046c035
        ;   Label: LAB_0046c035
    TEST EAX,EAX                        ; 0046c03b
    JNZ 0x0046c082                      ; 0046c03d
        ;   XREF to: 0046c082 (CONDITIONAL_JUMP)  ; LAB_0046c082
    CMP ESI,0x2                         ; 0046c03f
        ;   Label: LAB_0046c03f
    JNZ 0x0046c072                      ; 0046c042
        ;   XREF to: 0046c072 (CONDITIONAL_JUMP)  ; LAB_0046c072
    MOV EDI,dword ptr [EBX + 0x1ff5c]   ; 0046c044
    TEST EDI,EDI                        ; 0046c04a
    JZ 0x0046c068                       ; 0046c04c
        ;   XREF to: 0046c068 (CONDITIONAL_JUMP)  ; LAB_0046c068
    PUSH 0x8d0                          ; 0046c04e
    PUSH EDI                            ; 0046c053
    PUSH 0x5d9e7c                       ; 0046c054 | = "actionPending = %d\ndoc.cpp line %d"
    MOV EDX,dword ptr [0x0061abc0]      ; 0046c059 | g_CEditorToolsPtr
    PUSH EDX                            ; 0046c05f
    CALL shape_edittool.cpp_FUN_00494340 ; 0046c060
        ;   XREF to: 00494340 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00494340()
    ADD ESP,0x10                        ; 0046c065
    MOV dword ptr [EBX + 0x1ff5c],0x1   ; 0046c068
        ;   Label: LAB_0046c068
    PUSH 0x1                            ; 0046c072
        ;   Label: LAB_0046c072
    PUSH EBX                            ; 0046c074
    CALL core_hero.cpp_FUN_004ec280     ; 0046c075
        ;   XREF to: 004ec280 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_FUN_004ec280(CHero * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 0046c07a
    JMP 0x0046bef7                      ; 0046c07d
        ;   XREF to: 0046bef7 (UNCONDITIONAL_JUMP)  ; LAB_0046bef7
    PUSH EBX                            ; 0046c082
        ;   Label: LAB_0046c082
    MOV EDX,dword ptr [EAX + 0x154]     ; 0046c083
    PUSH EAX                            ; 0046c089
    CALL dword ptr [EDX + 0x84]         ; 0046c08a
    ADD ESP,0x8                         ; 0046c090
    CMP EAX,0x4                         ; 0046c093
    SETZ AL                             ; 0046c096
    AND EAX,0xff                        ; 0046c099
    JZ 0x0046c03f                       ; 0046c09e
        ;   XREF to: 0046c03f (CONDITIONAL_JUMP)  ; LAB_0046c03f
    MOV dword ptr [EBX + 0x2c9c],0x0    ; 0046c0a0
    MOV dword ptr [EBX + 0x2c98],0xe    ; 0046c0aa
    JMP 0x0046c03f                      ; 0046c0b4
        ;   XREF to: 0046c03f (UNCONDITIONAL_JUMP)  ; LAB_0046c03f
    MOV ESI,dword ptr [EBX + 0x2628]    ; 0046c0b6
        ;   Label: LAB_0046c0b6
    CMP ESI,dword ptr [EBX + 0x20004]   ; 0046c0bc
    JNZ 0x0046c0ce                      ; 0046c0c2
        ;   XREF to: 0046c0ce (CONDITIONAL_JUMP)  ; LAB_0046c0ce
    MOV dword ptr [EBX + 0x20004],0x0   ; 0046c0c4
    PUSH 0x1                            ; 0046c0ce
        ;   Label: LAB_0046c0ce
    PUSH EBX                            ; 0046c0d0
    CALL core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0 ; 0046c0d1
        ;   XREF to: 004ec2c0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0(CHero * this_ptr, int hand_index)
    MOV EDI,dword ptr [EBX + 0x1ff5c]   ; 0046c0d6
    ADD ESP,0x8                         ; 0046c0dc
    CMP EDI,0x1                         ; 0046c0df
    JNZ 0x0046c0f3                      ; 0046c0e2
        ;   XREF to: 0046c0f3 (CONDITIONAL_JUMP)  ; LAB_0046c0f3
    MOV dword ptr [EBX + 0x1ff5c],0x0   ; 0046c0e4
    JMP 0x0046bef7                      ; 0046c0ee
        ;   XREF to: 0046bef7 (UNCONDITIONAL_JUMP)  ; LAB_0046bef7
    PUSH 0x8f0                          ; 0046c0f3
        ;   Label: LAB_0046c0f3
    PUSH EDI                            ; 0046c0f8
    PUSH 0x5d9e9f                       ; 0046c0f9 | = "actionPending = %d\ndoc.cpp line %d"
    MOV EDX,dword ptr [0x0061abc0]      ; 0046c0fe | g_CEditorToolsPtr
    PUSH EDX                            ; 0046c104
    CALL shape_edittool.cpp_FUN_00494340 ; 0046c105
        ;   XREF to: 00494340 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00494340()
    JMP 0x0046bef4                      ; 0046c10a
        ;   XREF to: 0046bef4 (UNCONDITIONAL_JUMP)  ; LAB_0046bef4
    MOV EAX,[0x01b68830]                ; 0046c10f | DAT_01b68830
        ;   Label: LAB_0046c10f
    JMP 0x0046be61                      ; 0046c114
        ;   XREF to: 0046be61 (UNCONDITIONAL_JUMP)  ; LAB_0046be61
    CMP dword ptr [EBX + 0x20000],0x0   ; 0046c119
        ;   Label: LAB_0046c119
    JNZ 0x0046c3b0                      ; 0046c120
        ;   XREF to: 0046c3b0 (CONDITIONAL_JUMP)  ; LAB_0046c3b0
    CMP dword ptr [EBX + 0x2500],0x0    ; 0046c126
    JZ 0x0046bef7                       ; 0046c12d
        ;   XREF to: 0046bef7 (CONDITIONAL_JUMP)  ; LAB_0046bef7
    PUSH 0x4                            ; 0046c133
    MOV ECX,dword ptr [ESP + 0x154]     ; 0046c135
    PUSH ECX                            ; 0046c13c
    CALL core_motion.cpp_FUN_00524a40   ; 0046c13d
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x168],EAX     ; 0046c142
    FLD float ptr [ESP + 0x168]         ; 0046c149
    ADD ESP,0x8                         ; 0046c150
    FCOMP double ptr [0x005d9f3c]       ; 0046c153 | DAT_005d9f3c
    FNSTSW AX                           ; 0046c159
    SAHF                                ; 0046c15b
    JA 0x0046c409                       ; 0046c15c
        ;   XREF to: 0046c409 (CONDITIONAL_JUMP)  ; LAB_0046c409
    PUSH 0x1                            ; 0046c162
    MOV ESI,dword ptr [ESP + 0x154]     ; 0046c164
    PUSH ESI                            ; 0046c16b
    CALL core_motion.cpp_FUN_00524a40   ; 0046c16c
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x168],EAX     ; 0046c171
    FLD float ptr [ESP + 0x168]         ; 0046c178
    ADD ESP,0x8                         ; 0046c17f
    FCOMP double ptr [0x005d9f3c]       ; 0046c182 | DAT_005d9f3c
    FNSTSW AX                           ; 0046c188
    SAHF                                ; 0046c18a
    JA 0x0046c428                       ; 0046c18b
        ;   XREF to: 0046c428 (CONDITIONAL_JUMP)  ; LAB_0046c428
    PUSH 0x2                            ; 0046c191
    PUSH ESI                            ; 0046c193
    CALL core_motion.cpp_FUN_00524a40   ; 0046c194
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x168],EAX     ; 0046c199
    FLD float ptr [ESP + 0x168]         ; 0046c1a0
    ADD ESP,0x8                         ; 0046c1a7
    FCOMP double ptr [0x005d9f3c]       ; 0046c1aa | DAT_005d9f3c
    FNSTSW AX                           ; 0046c1b0
    SAHF                                ; 0046c1b2
    JA 0x0046c428                       ; 0046c1b3
        ;   XREF to: 0046c428 (CONDITIONAL_JUMP)  ; LAB_0046c428
    PUSH 0x3                            ; 0046c1b9
    PUSH ESI                            ; 0046c1bb
    CALL core_motion.cpp_FUN_00524a40   ; 0046c1bc
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x168],EAX     ; 0046c1c1
    FLD float ptr [ESP + 0x168]         ; 0046c1c8
    ADD ESP,0x8                         ; 0046c1cf
    FCOMP double ptr [0x005d9f3c]       ; 0046c1d2 | DAT_005d9f3c
    FNSTSW AX                           ; 0046c1d8
    SAHF                                ; 0046c1da
    JA 0x0046c447                       ; 0046c1db
        ;   XREF to: 0046c447 (CONDITIONAL_JUMP)  ; LAB_0046c447
    PUSH 0x5                            ; 0046c1e1
    PUSH ESI                            ; 0046c1e3
    CALL core_motion.cpp_FUN_00524a40   ; 0046c1e4
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x168],EAX     ; 0046c1e9
    FLD float ptr [ESP + 0x168]         ; 0046c1f0
    ADD ESP,0x8                         ; 0046c1f7
    FCOMP double ptr [0x005d9f3c]       ; 0046c1fa | DAT_005d9f3c
    FNSTSW AX                           ; 0046c200
    SAHF                                ; 0046c202
    JA 0x0046c466                       ; 0046c203
        ;   XREF to: 0046c466 (CONDITIONAL_JUMP)  ; LAB_0046c466
    PUSH 0x6                            ; 0046c209
    PUSH ESI                            ; 0046c20b
    CALL core_motion.cpp_FUN_00524a40   ; 0046c20c
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x168],EAX     ; 0046c211
    FLD float ptr [ESP + 0x168]         ; 0046c218
    ADD ESP,0x8                         ; 0046c21f
    FCOMP double ptr [0x005d9f3c]       ; 0046c222 | DAT_005d9f3c
    FNSTSW AX                           ; 0046c228
    SAHF                                ; 0046c22a
    JA 0x0046c391                       ; 0046c22b
        ;   XREF to: 0046c391 (CONDITIONAL_JUMP)  ; LAB_0046c391
    PUSH 0x7                            ; 0046c231
    PUSH ESI                            ; 0046c233
    CALL core_motion.cpp_FUN_00524a40   ; 0046c234
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x168],EAX     ; 0046c239
    FLD float ptr [ESP + 0x168]         ; 0046c240
    ADD ESP,0x8                         ; 0046c247
    FCOMP double ptr [0x005d9f3c]       ; 0046c24a | DAT_005d9f3c
    FNSTSW AX                           ; 0046c250
    SAHF                                ; 0046c252
    JA 0x0046c466                       ; 0046c253
        ;   XREF to: 0046c466 (CONDITIONAL_JUMP)  ; LAB_0046c466
    PUSH 0x8                            ; 0046c259
    PUSH ESI                            ; 0046c25b
    CALL core_motion.cpp_FUN_00524a40   ; 0046c25c
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x168],EAX     ; 0046c261
    FLD float ptr [ESP + 0x168]         ; 0046c268
    ADD ESP,0x8                         ; 0046c26f
    FCOMP double ptr [0x005d9f3c]       ; 0046c272 | DAT_005d9f3c
    FNSTSW AX                           ; 0046c278
    SAHF                                ; 0046c27a
    JA 0x0046c391                       ; 0046c27b
        ;   XREF to: 0046c391 (CONDITIONAL_JUMP)  ; LAB_0046c391
    PUSH 0x9                            ; 0046c281
    PUSH ESI                            ; 0046c283
    CALL core_motion.cpp_FUN_00524a40   ; 0046c284
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x168],EAX     ; 0046c289
    FLD float ptr [ESP + 0x168]         ; 0046c290
    ADD ESP,0x8                         ; 0046c297
    FCOMP double ptr [0x005d9f3c]       ; 0046c29a | DAT_005d9f3c
    FNSTSW AX                           ; 0046c2a0
    SAHF                                ; 0046c2a2
    JA 0x0046c391                       ; 0046c2a3
        ;   XREF to: 0046c391 (CONDITIONAL_JUMP)  ; LAB_0046c391
    PUSH 0xa                            ; 0046c2a9
    PUSH ESI                            ; 0046c2ab
    CALL core_motion.cpp_FUN_00524a40   ; 0046c2ac
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x168],EAX     ; 0046c2b1
    FLD float ptr [ESP + 0x168]         ; 0046c2b8
    ADD ESP,0x8                         ; 0046c2bf
    FCOMP double ptr [0x005d9f3c]       ; 0046c2c2 | DAT_005d9f3c
    FNSTSW AX                           ; 0046c2c8
    SAHF                                ; 0046c2ca
    JA 0x0046c391                       ; 0046c2cb
        ;   XREF to: 0046c391 (CONDITIONAL_JUMP)  ; LAB_0046c391
    PUSH 0xb                            ; 0046c2d1
    PUSH ESI                            ; 0046c2d3
    CALL core_motion.cpp_FUN_00524a40   ; 0046c2d4
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x168],EAX     ; 0046c2d9
    FLD float ptr [ESP + 0x168]         ; 0046c2e0
    ADD ESP,0x8                         ; 0046c2e7
    FCOMP double ptr [0x005d9f3c]       ; 0046c2ea | DAT_005d9f3c
    FNSTSW AX                           ; 0046c2f0
    SAHF                                ; 0046c2f2
    JA 0x0046c391                       ; 0046c2f3
        ;   XREF to: 0046c391 (CONDITIONAL_JUMP)  ; LAB_0046c391
    PUSH 0xc                            ; 0046c2f9
    PUSH ESI                            ; 0046c2fb
    CALL core_motion.cpp_FUN_00524a40   ; 0046c2fc
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x168],EAX     ; 0046c301
    FLD float ptr [ESP + 0x168]         ; 0046c308
    ADD ESP,0x8                         ; 0046c30f
    FCOMP double ptr [0x005d9f3c]       ; 0046c312 | DAT_005d9f3c
    FNSTSW AX                           ; 0046c318
    SAHF                                ; 0046c31a
    JA 0x0046c391                       ; 0046c31b
        ;   XREF to: 0046c391 (CONDITIONAL_JUMP)  ; LAB_0046c391
    PUSH 0xd                            ; 0046c31d
    PUSH ESI                            ; 0046c31f
    CALL core_motion.cpp_FUN_00524a40   ; 0046c320
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x168],EAX     ; 0046c325
    FLD float ptr [ESP + 0x168]         ; 0046c32c
    ADD ESP,0x8                         ; 0046c333
    FCOMP double ptr [0x005d9f3c]       ; 0046c336 | DAT_005d9f3c
    FNSTSW AX                           ; 0046c33c
    SAHF                                ; 0046c33e
    JA 0x0046c466                       ; 0046c33f
        ;   XREF to: 0046c466 (CONDITIONAL_JUMP)  ; LAB_0046c466
    PUSH 0xe                            ; 0046c345
    PUSH ESI                            ; 0046c347
    CALL core_motion.cpp_FUN_00524a40   ; 0046c348
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x168],EAX     ; 0046c34d
    FLD float ptr [ESP + 0x168]         ; 0046c354
    ADD ESP,0x8                         ; 0046c35b
    FCOMP double ptr [0x005d9f3c]       ; 0046c35e | DAT_005d9f3c
    FNSTSW AX                           ; 0046c364
    SAHF                                ; 0046c366
    JA 0x0046c391                       ; 0046c367
        ;   XREF to: 0046c391 (CONDITIONAL_JUMP)  ; LAB_0046c391
    PUSH 0xf                            ; 0046c369
    PUSH ESI                            ; 0046c36b
    CALL core_motion.cpp_FUN_00524a40   ; 0046c36c
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x168],EAX     ; 0046c371
    FLD float ptr [ESP + 0x168]         ; 0046c378
    ADD ESP,0x8                         ; 0046c37f
    FCOMP double ptr [0x005d9f3c]       ; 0046c382 | DAT_005d9f3c
    FNSTSW AX                           ; 0046c388
    SAHF                                ; 0046c38a
    JBE 0x0046c485                      ; 0046c38b
        ;   XREF to: 0046c485 (CONDITIONAL_JUMP)  ; LAB_0046c485
    LEA EAX,[ESP + 0xb0]                ; 0046c391
        ;   Label: LAB_0046c391
    PUSH 0x3f800000                     ; 0046c398
    PUSH EAX                            ; 0046c39d
    MOV EDX,dword ptr [EBX + 0x154]     ; 0046c39e
    PUSH EBX                            ; 0046c3a4
    CALL dword ptr [EDX + 0x24]         ; 0046c3a5
    ADD ESP,0xc                         ; 0046c3a8
    JMP 0x0046bef7                      ; 0046c3ab
        ;   XREF to: 0046bef7 (UNCONDITIONAL_JUMP)  ; LAB_0046bef7
    MOV EAX,dword ptr [EBX + 0x154]     ; 0046c3b0
        ;   Label: LAB_0046c3b0
    MOV dword ptr [ESP + 0x160],EAX     ; 0046c3b6
    MOV EAX,dword ptr [EBX + 0x20000]   ; 0046c3bd
    PUSH 0x3f800000                     ; 0046c3c3
    PUSH EAX                            ; 0046c3c8
    MOV EDX,dword ptr [EAX + 0x154]     ; 0046c3c9
    CALL dword ptr [EDX + 0x44]         ; 0046c3cf
    ADD ESP,0x4                         ; 0046c3d2
    PUSH EAX                            ; 0046c3d5
    LEA EAX,[ESP + 0xb8]                ; 0046c3d6
    PUSH EAX                            ; 0046c3dd
    PUSH EBX                            ; 0046c3de
    LEA ESI,[ESP + 0xb4]                ; 0046c3df
    CALL core_actor.cpp_FUN_00408b40    ; 0046c3e6
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0046c3eb
    LEA EAX,[ESP + 0xf4]                ; 0046c3ee
    LEA EDI,[ESP + 0xf4]                ; 0046c3f5
    PUSH EAX                            ; 0046c3fc
    LEA ESI,[ESP + 0xb0]                ; 0046c3fd
    JMP 0x0046bee6                      ; 0046c404
        ;   XREF to: 0046bee6 (UNCONDITIONAL_JUMP)  ; LAB_0046bee6
    LEA EDX,[ESP + 0xb0]                ; 0046c409
        ;   Label: LAB_0046c409
    PUSH 0x3fd9999a                     ; 0046c410
    PUSH EDX                            ; 0046c415
    MOV ESI,dword ptr [EBX + 0x154]     ; 0046c416
    PUSH EBX                            ; 0046c41c
    CALL dword ptr [ESI + 0x24]         ; 0046c41d
    ADD ESP,0xc                         ; 0046c420
    JMP 0x0046bef7                      ; 0046c423
        ;   XREF to: 0046bef7 (UNCONDITIONAL_JUMP)  ; LAB_0046bef7
    LEA EDX,[ESP + 0xb0]                ; 0046c428
        ;   Label: LAB_0046c428
    PUSH 0x3f800000                     ; 0046c42f
    PUSH EDX                            ; 0046c434
    MOV ESI,dword ptr [EBX + 0x154]     ; 0046c435
    PUSH EBX                            ; 0046c43b
    CALL dword ptr [ESI + 0x24]         ; 0046c43c
    ADD ESP,0xc                         ; 0046c43f
    JMP 0x0046bef7                      ; 0046c442
        ;   XREF to: 0046bef7 (UNCONDITIONAL_JUMP)  ; LAB_0046bef7
    LEA EAX,[ESP + 0xb0]                ; 0046c447
        ;   Label: LAB_0046c447
    PUSH 0x3fd9999a                     ; 0046c44e
    PUSH EAX                            ; 0046c453
    MOV EDX,dword ptr [EBX + 0x154]     ; 0046c454
    PUSH EBX                            ; 0046c45a
    CALL dword ptr [EDX + 0x24]         ; 0046c45b
    ADD ESP,0xc                         ; 0046c45e
    JMP 0x0046bef7                      ; 0046c461
        ;   XREF to: 0046bef7 (UNCONDITIONAL_JUMP)  ; LAB_0046bef7
    LEA EDX,[ESP + 0xb0]                ; 0046c466
        ;   Label: LAB_0046c466
    PUSH 0x3f800000                     ; 0046c46d
    PUSH EDX                            ; 0046c472
    MOV EAX,dword ptr [EBX + 0x154]     ; 0046c473
    PUSH EBX                            ; 0046c479
    CALL dword ptr [EAX + 0x24]         ; 0046c47a
    ADD ESP,0xc                         ; 0046c47d
    JMP 0x0046bef7                      ; 0046c480
        ;   XREF to: 0046bef7 (UNCONDITIONAL_JUMP)  ; LAB_0046bef7
    PUSH 0x10                           ; 0046c485
        ;   Label: LAB_0046c485
    PUSH ESI                            ; 0046c487
    CALL core_motion.cpp_FUN_00524a40   ; 0046c488
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x168],EAX     ; 0046c48d
    FLD float ptr [ESP + 0x168]         ; 0046c494
    ADD ESP,0x8                         ; 0046c49b
    FCOMP double ptr [0x005d9f3c]       ; 0046c49e | DAT_005d9f3c
    FNSTSW AX                           ; 0046c4a4
    SAHF                                ; 0046c4a6
    JBE 0x0046bef7                      ; 0046c4a7
        ;   XREF to: 0046bef7 (CONDITIONAL_JUMP)  ; LAB_0046bef7
    LEA EAX,[ESP + 0xb0]                ; 0046c4ad
    PUSH 0x3f800000                     ; 0046c4b4
    PUSH EAX                            ; 0046c4b9
    MOV EDX,dword ptr [EBX + 0x154]     ; 0046c4ba
    PUSH EBX                            ; 0046c4c0
    CALL dword ptr [EDX + 0x24]         ; 0046c4c1
    ADD ESP,0xc                         ; 0046c4c4
    JMP 0x0046bef7                      ; 0046c4c7
        ;   XREF to: 0046bef7 (UNCONDITIONAL_JUMP)  ; LAB_0046bef7
    MOV ESI,dword ptr [0x01c3f6a0]      ; 0046c4cc | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_0046c4cc
    PUSH ESI                            ; 0046c4d2
    MOV EDI,dword ptr [EBX + 0x26fc]    ; 0046c4d3
    PUSH EDI                            ; 0046c4d9
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0046c4da
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x154],EAX     ; 0046c4df
    ADD ESP,0x8                         ; 0046c4e6
    MOV dword ptr [ESP + 0x148],EAX     ; 0046c4e9
    TEST EAX,EAX                        ; 0046c4f0
    JNZ 0x0046c5d3                      ; 0046c4f2
        ;   XREF to: 0046c5d3 (CONDITIONAL_JUMP)  ; LAB_0046c5d3
    XOR ECX,ECX                         ; 0046c4f8
        ;   Label: LAB_0046c4f8
    MOV dword ptr [ESP + 0x158],ECX     ; 0046c4fa
    MOV dword ptr [ESP + 0x154],ECX     ; 0046c501
        ;   Label: LAB_0046c501
    MOV EAX,[0x00622c18]                ; 0046c508 | g_CDemonSetPtr
    MOV EDX,dword ptr [ESP + 0x158]     ; 0046c50d
    CMP EDX,dword ptr [EAX + 0x150fec]  ; 0046c514 | g_CDemonSetInstance.enemy_count
    JGE 0x0046c78f                      ; 0046c51a
        ;   XREF to: 0046c78f (CONDITIONAL_JUMP)  ; LAB_0046c78f
    MOV EDX,dword ptr [0x01d06ab4]      ; 0046c520 | DAT_01d06ab4
    MOV ESI,dword ptr [ESP + 0x154]     ; 0046c526
    MOV EDX,dword ptr [EDX*0x4 + 0x1d06aa4] ; 0046c52d
    LEA EDI,[ESP + 0x128]               ; 0046c534
    ADD EAX,ESI                         ; 0046c53b
    FLD float ptr [EDX + 0x20]          ; 0046c53d
    FLD float ptr [EDX + 0x24]          ; 0046c540
    MOV EAX,dword ptr [EAX + 0x150ff0]  ; 0046c543
    FLD float ptr [EDX + 0x28]          ; 0046c549
    LEA ESI,[ESP + 0x80]                ; 0046c54c
    FXCH ST2                            ; 0046c553
    FSUB float ptr [EAX + 0x20]         ; 0046c555
    FXCH                                ; 0046c558
    FSUB float ptr [EAX + 0x24]         ; 0046c55a
    FXCH ST2                            ; 0046c55d
    FSUB float ptr [EAX + 0x28]         ; 0046c55f
    FXCH                                ; 0046c562
    FSTP float ptr [ESP + 0x80]         ; 0046c564
    FXCH                                ; 0046c56b
    FSTP float ptr [ESP + 0x84]         ; 0046c56d
    FSTP float ptr [ESP + 0x88]         ; 0046c574
    MOVSD ES:EDI,ESI                    ; 0046c57b
    MOVSD ES:EDI,ESI                    ; 0046c57c
    MOVSD ES:EDI,ESI                    ; 0046c57d
    FLD float ptr [ESP + 0x12c]         ; 0046c57e
    FMUL ST0                            ; 0046c585
    FLD float ptr [ESP + 0x128]         ; 0046c587
    FMUL ST0                            ; 0046c58e
    FADDP                               ; 0046c590
    FLD float ptr [ESP + 0x130]         ; 0046c592
    FMUL ST0                            ; 0046c599
    FADDP                               ; 0046c59b
    MOV dword ptr [ESP + 0x15c],EAX     ; 0046c59d
    FSQRT                               ; 0046c5a4
    FCOMP double ptr [0x005d9f44]       ; 0046c5a6 | DAT_005d9f44
    FNSTSW AX                           ; 0046c5ac
    SAHF                                ; 0046c5ae
    JBE 0x0046c748                      ; 0046c5af
        ;   XREF to: 0046c748 (CONDITIONAL_JUMP)  ; LAB_0046c748
    MOV ESI,dword ptr [ESP + 0x158]     ; 0046c5b5
        ;   Label: LAB_0046c5b5
    MOV ECX,dword ptr [ESP + 0x154]     ; 0046c5bc
    INC ESI                             ; 0046c5c3
    ADD ECX,0x4                         ; 0046c5c4
    MOV dword ptr [ESP + 0x158],ESI     ; 0046c5c7
    JMP 0x0046c501                      ; 0046c5ce
        ;   XREF to: 0046c501 (UNCONDITIONAL_JUMP)  ; LAB_0046c501
    MOV EDX,dword ptr [0x01b68844]      ; 0046c5d3 | DAT_01b68844
        ;   Label: LAB_0046c5d3
    PUSH EDX                            ; 0046c5d9
    MOV ECX,dword ptr [ESP + 0x154]     ; 0046c5da
    PUSH ECX                            ; 0046c5e1
    LEA ESI,[ESP + 0x124]               ; 0046c5e2
    LEA EDI,[ESP + 0x118]               ; 0046c5e9
    CALL core_skeleton.cpp_FUN_00569040 ; 0046c5f0
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 0046c5f5
    LEA EAX,[ESP + 0x110]               ; 0046c5f8
    LEA ESI,[ESP + 0x11c]               ; 0046c5ff
    PUSH EAX                            ; 0046c606
    MOVSD ES:EDI,ESI                    ; 0046c607
    MOVSD ES:EDI,ESI                    ; 0046c608
    MOVSD ES:EDI,ESI                    ; 0046c609
    PUSH EBX                            ; 0046c60a
    LEA ESI,[ESP + 0x10c]               ; 0046c60b
    LEA EDI,[ESP + 0xdc]                ; 0046c612
    CALL core_actor.cpp_FUN_00408b40    ; 0046c619
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0046c61e
    LEA EAX,[ESP + 0x8]                 ; 0046c621
    LEA ESI,[ESP + 0x104]               ; 0046c625
    PUSH EAX                            ; 0046c62c
    MOVSD ES:EDI,ESI                    ; 0046c62d
    MOVSD ES:EDI,ESI                    ; 0046c62e
    MOVSD ES:EDI,ESI                    ; 0046c62f
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 0046c630
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0046c635
    PUSH 0x41700000                     ; 0046c638
    PUSH 0x41200000                     ; 0046c63d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0046c642
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x168],EAX     ; 0046c647
    FLD float ptr [ESP + 0x168]         ; 0046c64e
    ADD ESP,0x8                         ; 0046c655
    LEA EAX,[ESP + 0xd4]                ; 0046c658
    PUSH EAX                            ; 0046c65f
    MOV ESI,dword ptr [ESP + 0x150]     ; 0046c660
    LEA EDI,[ESP + 0xe4]                ; 0046c667
    PUSH ESI                            ; 0046c66e
    LEA ESI,[ESP + 0xa0]                ; 0046c66f
    FSTP float ptr [ESP + 0x14]         ; 0046c676
    CALL core_actor.cpp_FUN_00408bb0    ; 0046c67a
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0xa0]                ; 0046c67f
    ADD ESP,0x8                         ; 0046c686
    MOVSD ES:EDI,ESI                    ; 0046c689
    MOVSD ES:EDI,ESI                    ; 0046c68a
    MOVSD ES:EDI,ESI                    ; 0046c68b
    LEA EDX,[ESP + 0xe0]                ; 0046c68c
    LEA ESI,[ESP + 0x24]                ; 0046c693
    CMP ESI,EDX                         ; 0046c697
    JZ 0x0046c6af                       ; 0046c699
        ;   XREF to: 0046c6af (CONDITIONAL_JUMP)  ; LAB_0046c6af
    MOV EAX,dword ptr [EDX]             ; 0046c69b
    MOV dword ptr [ESP + 0x24],EAX      ; 0046c69d
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046c6a1
    MOV dword ptr [ESP + 0x28],EAX      ; 0046c6a4
    MOV EAX,dword ptr [EDX + 0x8]       ; 0046c6a8
    MOV dword ptr [ESP + 0x2c],EAX      ; 0046c6ab
    MOV EDI,0x4                         ; 0046c6af
        ;   Label: LAB_0046c6af
    MOV EDX,dword ptr [ESP + 0x148]     ; 0046c6b4
    LEA EAX,[ESP + 0x8]                 ; 0046c6bb
    MOV dword ptr [ESP + 0x3c],EBX      ; 0046c6bf
    MOV dword ptr [ESP + 0x40],EBX      ; 0046c6c3
    MOV dword ptr [ESP + 0x30],EDI      ; 0046c6c7
    PUSH EAX                            ; 0046c6cb
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0046c6cc
    MOV EDX,dword ptr [EDX + 0x154]     ; 0046c6d3
    PUSH EAX                            ; 0046c6d9
    CALL dword ptr [EDX + 0x108]        ; 0046c6da
    ADD ESP,0x8                         ; 0046c6e0
    FLDZ                                ; 0046c6e3
    FLD float ptr [ESP + 0xc]           ; 0046c6e5
    FSTP double ptr [ESP]               ; 0046c6e9
    FCOMP double ptr [ESP]              ; 0046c6ec
    FNSTSW AX                           ; 0046c6ef
    SAHF                                ; 0046c6f1
    JNC 0x0046c4f8                      ; 0046c6f2
        ;   XREF to: 0046c4f8 (CONDITIONAL_JUMP)  ; LAB_0046c4f8
    FLD double ptr [ESP]                ; 0046c6f8
    FMUL double ptr [0x005d9f34]        ; 0046c6fb | DAT_005d9f34
    CALL crt_math.c_round_FUN_005c03a0  ; 0046c701
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x160]       ; 0046c706
    MOV EAX,dword ptr [ESP + 0x160]     ; 0046c70d
    PUSH 0x0                            ; 0046c714
    INC EAX                             ; 0046c716
    PUSH EAX                            ; 0046c717
    PUSH 0x0                            ; 0046c718
    LEA EAX,[ESP + 0xe0]                ; 0046c71a
    PUSH EAX                            ; 0046c721
    MOV EDX,dword ptr [0x0061dca4]      ; 0046c722 | g_CGorePtr
    PUSH EDX                            ; 0046c728
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060 ; 0046c729
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 0046c72e
    PUSH 0x5d9ec2                       ; 0046c731 | = "kick1.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0046c736
    PUSH EBX                            ; 0046c73c
    CALL dword ptr [EAX + 0x2c]         ; 0046c73d
    ADD ESP,0x8                         ; 0046c740
    JMP 0x0046c4f8                      ; 0046c743
        ;   XREF to: 0046c4f8 (UNCONDITIONAL_JUMP)  ; LAB_0046c4f8
    LEA EAX,[ESP + 0x44]                ; 0046c748
        ;   Label: LAB_0046c748
    PUSH EAX                            ; 0046c74c
    MOV EDI,0x40a00000                  ; 0046c74d
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 0046c752
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    MOV EAX,0x4                         ; 0046c757
    ADD ESP,0x4                         ; 0046c75c
    LEA EDX,[ESP + 0x44]                ; 0046c75f
    MOV dword ptr [ESP + 0x6c],EAX      ; 0046c763
    PUSH EDX                            ; 0046c767
    MOV EAX,dword ptr [ESP + 0x160]     ; 0046c768
    MOV EDX,dword ptr [ESP + 0x160]     ; 0046c76f
    MOV dword ptr [ESP + 0x4c],EDI      ; 0046c776
    PUSH EDX                            ; 0046c77a
    MOV EAX,dword ptr [EAX + 0x154]     ; 0046c77b
    CALL dword ptr [EAX + 0x108]        ; 0046c781
    ADD ESP,0x8                         ; 0046c787
    JMP 0x0046c5b5                      ; 0046c78a
        ;   XREF to: 0046c5b5 (UNCONDITIONAL_JUMP)  ; LAB_0046c5b5
    MOV dword ptr [EBX + 0x26fc],0x0    ; 0046c78f
        ;   Label: LAB_0046c78f
    JMP 0x0046bef7                      ; 0046c799
        ;   XREF to: 0046bef7 (UNCONDITIONAL_JUMP)  ; LAB_0046bef7
    MOV ECX,dword ptr [EBX + 0x26fc]    ; 0046c79e
        ;   Label: LAB_0046c79e
    TEST ECX,ECX                        ; 0046c7a4
    JZ 0x0046bef7                       ; 0046c7a6
        ;   XREF to: 0046bef7 (CONDITIONAL_JUMP)  ; LAB_0046bef7
    LEA EAX,[ECX + 0x20]                ; 0046c7ac
    PUSH EAX                            ; 0046c7af
    PUSH EBX                            ; 0046c7b0
    LEA ESI,[ESP + 0x100]               ; 0046c7b1
    LEA EDI,[ESP + 0xd0]                ; 0046c7b8
    CALL core_actor.cpp_FUN_00408bb0    ; 0046c7bf
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x100]               ; 0046c7c4
    ADD ESP,0x8                         ; 0046c7cb
    MOVSD ES:EDI,ESI                    ; 0046c7ce
    MOVSD ES:EDI,ESI                    ; 0046c7cf
    MOVSD ES:EDI,ESI                    ; 0046c7d0
    FLDZ                                ; 0046c7d1
    FCOMP float ptr [ESP + 0xd0]        ; 0046c7d3
    FNSTSW AX                           ; 0046c7da
    SAHF                                ; 0046c7dc
    JNC 0x0046bef7                      ; 0046c7dd
        ;   XREF to: 0046bef7 (CONDITIONAL_JUMP)  ; LAB_0046bef7
    PUSH 0x5d9ecc                       ; 0046c7e3 | = "hit-gh[4,7].wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0046c7e8
    PUSH EBX                            ; 0046c7ee
    CALL dword ptr [EAX + 0x2c]         ; 0046c7ef
    ADD ESP,0x8                         ; 0046c7f2
    JMP 0x0046bef7                      ; 0046c7f5
        ;   XREF to: 0046bef7 (UNCONDITIONAL_JUMP)  ; LAB_0046bef7
    PUSH 0x5d9edc                       ; 0046c7fa | = "fall-1.wav"
        ;   Label: LAB_0046c7fa
    MOV EAX,dword ptr [EBX + 0x154]     ; 0046c7ff
    PUSH EBX                            ; 0046c805
    CALL dword ptr [EAX + 0x2c]         ; 0046c806
    ADD ESP,0x8                         ; 0046c809
    JMP 0x0046bef7                      ; 0046c80c
        ;   XREF to: 0046bef7 (UNCONDITIONAL_JUMP)  ; LAB_0046bef7
    PUSH EBX                            ; 0046c811
        ;   Label: LAB_0046c811
    CALL core_doc.cpp_FUN_00470750      ; 0046c812
        ;   XREF to: 00470750 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_00470750()
    ADD ESP,0x4                         ; 0046c817
    JMP 0x0046bef7                      ; 0046c81a
        ;   XREF to: 0046bef7 (UNCONDITIONAL_JUMP)  ; LAB_0046bef7
    PUSH 0x96b                          ; 0046c81f
        ;   Label: LAB_0046c81f
    PUSH ECX                            ; 0046c824
    PUSH 0x5d9ee7                       ; 0046c825 | = "actionPending = %d\ndoc.cpp line %d"
    MOV EDI,dword ptr [0x0061abc0]      ; 0046c82a | g_CEditorToolsPtr
    PUSH EDI                            ; 0046c830
    CALL shape_edittool.cpp_FUN_00494340 ; 0046c831
        ;   XREF to: 00494340 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00494340()
    ADD ESP,0x10                        ; 0046c836
    JMP 0x0046c8ca                      ; 0046c839
        ;   XREF to: 0046c8ca (UNCONDITIONAL_JUMP)  ; LAB_0046c8ca
    PUSH EBX                            ; 0046c83e
        ;   Label: LAB_0046c83e
    CALL core_hero.cpp_CHero_toggleLeverNow_FUN_004eb7f0 ; 0046c83f
        ;   XREF to: 004eb7f0 (UNCONDITIONAL_CALL)  ; undefined4 core_hero.cpp_CHero_toggleLeverNow_FUN_004eb7f0(CHero * this_ptr)
    ADD ESP,0x4                         ; 0046c844
    JMP 0x0046bef7                      ; 0046c847
        ;   XREF to: 0046bef7 (UNCONDITIONAL_JUMP)  ; LAB_0046bef7
    MOV EAX,[0x005fecc0]                ; 0046c84c | DAT_005fecc0
        ;   Label: LAB_0046c84c
    MOV dword ptr [EBX + 0x251c],EAX    ; 0046c851
    JMP 0x0046bef7                      ; 0046c857
        ;   XREF to: 0046bef7 (UNCONDITIONAL_JUMP)  ; LAB_0046bef7
    MOV EAX,[0x005fecc4]                ; 0046c85c | DAT_005fecc4
        ;   Label: LAB_0046c85c
    MOV dword ptr [EBX + 0x251c],EAX    ; 0046c861
    JMP 0x0046bef7                      ; 0046c867
        ;   XREF to: 0046bef7 (UNCONDITIONAL_JUMP)  ; LAB_0046bef7
    JBE 0x0046bef7                      ; 0046c86c
        ;   XREF to: 0046bef7 (CONDITIONAL_JUMP)  ; LAB_0046bef7
        ;   Label: LAB_0046c86c
    CMP EAX,0x17                        ; 0046c872
    JNC 0x0046c886                      ; 0046c875
        ;   XREF to: 0046c886 (CONDITIONAL_JUMP)  ; LAB_0046c886
    CMP EAX,0x15                        ; 0046c877
    JNC 0x0046c8ab                      ; 0046c87a
        ;   XREF to: 0046c8ab (CONDITIONAL_JUMP)  ; LAB_0046c8ab
    CMP EAX,0x13                        ; 0046c87c
    JZ 0x0046c811                       ; 0046c87f
        ;   XREF to: 0046c811 (CONDITIONAL_JUMP)  ; LAB_0046c811
    JMP 0x0046c965                      ; 0046c881
        ;   XREF to: 0046c965 (UNCONDITIONAL_JUMP)  ; LAB_0046c965
    JBE 0x0046c83e                      ; 0046c886
        ;   XREF to: 0046c83e (CONDITIONAL_JUMP)  ; LAB_0046c83e
        ;   Label: LAB_0046c886
    CMP EAX,0x29a                       ; 0046c888
    JNC 0x0046c89d                      ; 0046c88d
        ;   XREF to: 0046c89d (CONDITIONAL_JUMP)  ; LAB_0046c89d
    CMP EAX,0x18                        ; 0046c88f
    JZ 0x0046bef7                       ; 0046c892
        ;   XREF to: 0046bef7 (CONDITIONAL_JUMP)  ; LAB_0046bef7
    JMP 0x0046c965                      ; 0046c898
        ;   XREF to: 0046c965 (UNCONDITIONAL_JUMP)  ; LAB_0046c965
    JBE 0x0046c84c                      ; 0046c89d
        ;   XREF to: 0046c84c (CONDITIONAL_JUMP)  ; LAB_0046c84c
        ;   Label: LAB_0046c89d
    CMP EAX,0x29b                       ; 0046c89f
    JZ 0x0046c85c                       ; 0046c8a4
        ;   XREF to: 0046c85c (CONDITIONAL_JUMP)  ; LAB_0046c85c
    JMP 0x0046c965                      ; 0046c8a6
        ;   XREF to: 0046c965 (UNCONDITIONAL_JUMP)  ; LAB_0046c965
    JBE 0x0046c0b6                      ; 0046c8ab
        ;   XREF to: 0046c0b6 (CONDITIONAL_JUMP)  ; LAB_0046c0b6
        ;   Label: LAB_0046c8ab
    MOV ECX,dword ptr [EBX + 0x1ff5c]   ; 0046c8b1
    CMP ECX,0x5                         ; 0046c8b7
    JNZ 0x0046c81f                      ; 0046c8ba
        ;   XREF to: 0046c81f (CONDITIONAL_JUMP)  ; LAB_0046c81f
    MOV dword ptr [EBX + 0x1ff5c],0x0   ; 0046c8c0
    CMP dword ptr [EBX + 0x1ff74],0x0   ; 0046c8ca
        ;   Label: LAB_0046c8ca
    JNZ 0x0046c8ec                      ; 0046c8d1
        ;   XREF to: 0046c8ec (CONDITIONAL_JUMP)  ; LAB_0046c8ec
    PUSH 0x971                          ; 0046c8d3
    PUSH 0x5d9f0a                       ; 0046c8d8 | = "doorToOpen == NULL\ndoc.cpp line %d"
    MOV EDX,dword ptr [0x0061abc0]      ; 0046c8dd | g_CEditorToolsPtr
    PUSH EDX                            ; 0046c8e3
    CALL shape_edittool.cpp_FUN_00494340 ; 0046c8e4
        ;   XREF to: 00494340 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00494340()
    ADD ESP,0xc                         ; 0046c8e9
    PUSH EBX                            ; 0046c8ec
        ;   Label: LAB_0046c8ec
    CALL core_hero.cpp_CHero_tryOpenDoor_FUN_004eb5e0 ; 0046c8ed
        ;   XREF to: 004eb5e0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryOpenDoor_FUN_004eb5e0(CHero * this_ptr)
    ADD ESP,0x4                         ; 0046c8f2
    TEST EAX,EAX                        ; 0046c8f5
    JNZ 0x0046bef7                      ; 0046c8f7
        ;   XREF to: 0046bef7 (CONDITIONAL_JUMP)  ; LAB_0046bef7
    PUSH 0x1                            ; 0046c8fd
    PUSH EAX                            ; 0046c8ff
    MOV ECX,dword ptr [ESP + 0x158]     ; 0046c900
    PUSH ECX                            ; 0046c907
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0046c908
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0046c90d
    JMP 0x0046bef7                      ; 0046c910
        ;   XREF to: 0046bef7 (UNCONDITIONAL_JUMP)  ; LAB_0046bef7
    JBE 0x0046c4cc                      ; 0046c915
        ;   XREF to: 0046c4cc (CONDITIONAL_JUMP)  ; LAB_0046c4cc
        ;   Label: LAB_0046c915
    CMP EAX,0xf                         ; 0046c91b
    JNC 0x0046c938                      ; 0046c91e
        ;   XREF to: 0046c938 (CONDITIONAL_JUMP)  ; LAB_0046c938
    CMP EAX,0x7                         ; 0046c920
    JZ 0x0046be53                       ; 0046c923
        ;   XREF to: 0046be53 (CONDITIONAL_JUMP)  ; LAB_0046be53
    PUSH ESI                            ; 0046c929
    PUSH EBX                            ; 0046c92a
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 0046c92b
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0046c930
    JMP 0x0046bef7                      ; 0046c933
        ;   XREF to: 0046bef7 (UNCONDITIONAL_JUMP)  ; LAB_0046bef7
    JBE 0x0046c79e                      ; 0046c938
        ;   XREF to: 0046c79e (CONDITIONAL_JUMP)  ; LAB_0046c79e
        ;   Label: LAB_0046c938
    CMP EAX,0x11                        ; 0046c93e
    JZ 0x0046c7fa                       ; 0046c941
        ;   XREF to: 0046c7fa (CONDITIONAL_JUMP)  ; LAB_0046c7fa
    PUSH ESI                            ; 0046c947
    PUSH EBX                            ; 0046c948
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 0046c949
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0046c94e
    JMP 0x0046bef7                      ; 0046c951
        ;   XREF to: 0046bef7 (UNCONDITIONAL_JUMP)  ; LAB_0046bef7
    JBE 0x0046bfb9                      ; 0046c956
        ;   XREF to: 0046bfb9 (CONDITIONAL_JUMP)  ; LAB_0046bfb9
        ;   Label: LAB_0046c956
    CMP EAX,0x3                         ; 0046c95c
    JZ 0x0046bf0e                       ; 0046c95f
        ;   XREF to: 0046bf0e (CONDITIONAL_JUMP)  ; LAB_0046bf0e
    PUSH ESI                            ; 0046c965
        ;   Label: LAB_0046c965
    PUSH EBX                            ; 0046c966
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 0046c967
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0046c96c
    JMP 0x0046bef7                      ; 0046c96f
        ;   XREF to: 0046bef7 (UNCONDITIONAL_JUMP)  ; LAB_0046bef7


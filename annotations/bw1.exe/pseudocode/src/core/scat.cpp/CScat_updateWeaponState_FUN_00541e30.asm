; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_CScat_updateWeaponState_FUN_00541e30(CScat *this_ptr,float delta_time)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_scat.cpp_CScat_process_FUN_00540df0 at 005410c7
;
; Referenced Globals:
;   void* switchdataD_00541e08 = 00541ed6
;
; Called Functions:
;   core_charactr.cpp_CCharacter_advanceLayerAction_FUN_004340b0
;   core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_00434610
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_getMotionList_FUN_00524a00
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541e30
        ;   Label: core_scat.cpp_CScat_updateWeaponState_FUN_00541e30
    PUSH ESI                            ; 00541e31
    PUSH EDI                            ; 00541e32
    PUSH EBP                            ; 00541e33
    MOV EBP,ESP                         ; 00541e34
    SUB ESP,0x10                        ; 00541e36
    AND ESP,0xfffffff8                  ; 00541e39
    MOV EBX,dword ptr [EBP + 0x14]      ; 00541e3c
    LEA ESI,[EBX + 0x158]               ; 00541e3f
    PUSH ESI                            ; 00541e45
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00541e46
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00541e4b
    ADD ESP,0x4                         ; 00541e4e
    CMP EAX,0xc                         ; 00541e51
    JNZ 0x00541e5d                      ; 00541e54
        ;   XREF to: 00541e5d (CONDITIONAL_JUMP)  ; LAB_00541e5d
    MOV ESP,EBP                         ; 00541e56
        ;   Label: LAB_00541e56
    POP EBP                             ; 00541e58
    POP EDI                             ; 00541e59
    POP ESI                             ; 00541e5a
    POP EBX                             ; 00541e5b
    RET                                 ; 00541e5c
    PUSH ESI                            ; 00541e5d
        ;   Label: LAB_00541e5d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00541e5e
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00541e63
    ADD ESP,0x4                         ; 00541e66
    CMP EAX,0xd                         ; 00541e69
    JZ 0x00541e56                       ; 00541e6c
        ;   XREF to: 00541e56 (CONDITIONAL_JUMP)  ; LAB_00541e56
    LEA EAX,[EBX + 0x1fae8]             ; 00541e6e
    MOV EDX,dword ptr [EBX + 0x1ffac]   ; 00541e74
    MOV ESI,dword ptr [EAX + 0x338]     ; 00541e7a
    TEST EDX,EDX                        ; 00541e80
    JZ 0x00541fc4                       ; 00541e82
        ;   XREF to: 00541fc4 (CONDITIONAL_JUMP)  ; LAB_00541fc4
    MOV ECX,dword ptr [EBX + 0x1ffc0]   ; 00541e88
        ;   Label: LAB_00541e88
    TEST ECX,ECX                        ; 00541e8e
    JNZ 0x00541fcb                      ; 00541e90
        ;   XREF to: 00541fcb (CONDITIONAL_JUMP)  ; LAB_00541fcb
    XOR ECX,ECX                         ; 00541e96
        ;   Label: LAB_00541e96
    LEA EAX,[EBX + 0x158]               ; 00541e98
    MOV dword ptr [ESP + 0xc],ECX       ; 00541e9e
    MOV dword ptr [ESP + 0x4],EAX       ; 00541ea2
    FLD float ptr [EBP + 0x18]          ; 00541ea6
        ;   Label: LAB_00541ea6
    FLDZ                                ; 00541ea9
    FCOMPP                              ; 00541eab
    FNSTSW AX                           ; 00541ead
    SAHF                                ; 00541eaf
    JNC 0x00541e56                      ; 00541eb0
        ;   XREF to: 00541e56 (CONDITIONAL_JUMP)  ; LAB_00541e56
    MOV EDI,dword ptr [EBX + 0x1ffc0]   ; 00541eb2
    CMP ESI,EDI                         ; 00541eb8
    JNZ 0x0054201a                      ; 00541eba
        ;   XREF to: 0054201a (CONDITIONAL_JUMP)  ; LAB_0054201a
    TEST EDI,EDI                        ; 00541ec0
    JZ 0x00541edb                       ; 00541ec2
        ;   XREF to: 00541edb (CONDITIONAL_JUMP)  ; LAB_00541edb
    MOV EAX,dword ptr [EDI + 0x2e0]     ; 00541ec4
    CMP EAX,0x8                         ; 00541eca
    JA 0x00541ed6                       ; 00541ecd
        ;   XREF to: 00541ed6 (CONDITIONAL_JUMP)  ; caseD_7
    JMP dword ptr [EAX*0x4 + 0x541e08]  ; 00541ecf | caseD_7 | caseD_8 | switchdataD_00541e08
        ;   Label: switchD
    MOV EDI,0x2                         ; 00541ed6
        ;   Label: caseD_0
    PUSH EDI                            ; 00541edb
        ;   Label: LAB_00541edb
    LEA EAX,[EBP + 0x18]                ; 00541edc
    PUSH EAX                            ; 00541edf
    PUSH EBX                            ; 00541ee0
    CALL core_charactr.cpp_CCharacter_advanceLayerAction_FUN_004340b0 ; 00541ee1
        ;   XREF to: 004340b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_advanceLayerAction_FUN_004340b0(CCharacter * this_ptr, float * remaining_time, int target_bone_index)
    MOV dword ptr [ESP + 0xc],EAX       ; 00541ee6
    ADD ESP,0xc                         ; 00541eea
    MOV dword ptr [ESP + 0x8],EAX       ; 00541eed
    MOV EAX,dword ptr [ESP + 0x4]       ; 00541ef1
    PUSH EAX                            ; 00541ef5
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00524a00 ; 00541ef6
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00524a00(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00541efb
    CMP dword ptr [ESP],0x0             ; 00541efe
    JL 0x00541fab                       ; 00541f02
        ;   XREF to: 00541fab (CONDITIONAL_JUMP)  ; LAB_00541fab
    MOV ECX,dword ptr [EBX + 0x1ffc0]   ; 00541f08
    CMP ESI,ECX                         ; 00541f0e
    JZ 0x00541fa1                       ; 00541f10
        ;   XREF to: 00541fa1 (CONDITIONAL_JUMP)  ; LAB_00541fa1
    TEST ECX,ECX                        ; 00541f16
    JZ 0x00541f4a                       ; 00541f18
        ;   XREF to: 00541f4a (CONDITIONAL_JUMP)  ; LAB_00541f4a
    MOV EAX,ECX                         ; 00541f1a
    JNZ 0x00542055                      ; 00541f1c
        ;   XREF to: 00542055 (CONDITIONAL_JUMP)  ; LAB_00542055
    CMP EAX,dword ptr [ESP + 0x8]       ; 00541f22
        ;   Label: LAB_00541f22
    JNZ 0x00541f4a                      ; 00541f26
        ;   XREF to: 00541f4a (CONDITIONAL_JUMP)  ; LAB_00541f4a
    PUSH 0x1                            ; 00541f28
    MOV EAX,dword ptr [EBX + 0x1ffc0]   ; 00541f2a
    PUSH EAX                            ; 00541f30
    MOV EDX,dword ptr [EAX + 0x154]     ; 00541f31
    CALL dword ptr [EDX + 0xdc]         ; 00541f37
    ADD ESP,0x8                         ; 00541f3d
    MOV dword ptr [EBX + 0x1ffc0],0x0   ; 00541f40
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 00541f4a
        ;   Label: LAB_00541f4a
    JZ 0x00541fa1                       ; 00541f51
        ;   XREF to: 00541fa1 (CONDITIONAL_JUMP)  ; LAB_00541fa1
    TEST ESI,ESI                        ; 00541f53
    JNZ 0x0054206f                      ; 00541f55
        ;   XREF to: 0054206f (CONDITIONAL_JUMP)  ; LAB_0054206f
    XOR EAX,EAX                         ; 00541f5b
        ;   Label: LAB_00541f5b
    CMP EAX,dword ptr [ESP + 0x8]       ; 00541f5d
        ;   Label: LAB_00541f5d
    JNZ 0x00541fa1                      ; 00541f61
        ;   XREF to: 00541fa1 (CONDITIONAL_JUMP)  ; LAB_00541fa1
    MOV dword ptr [EBX + 0x1ffc0],ESI   ; 00541f63
    TEST ESI,ESI                        ; 00541f69
    JZ 0x00541fa1                       ; 00541f6b
        ;   XREF to: 00541fa1 (CONDITIONAL_JUMP)  ; LAB_00541fa1
    PUSH 0x2                            ; 00541f6d
    MOV EDX,dword ptr [ESI + 0x154]     ; 00541f6f
    PUSH ESI                            ; 00541f75
    CALL dword ptr [EDX + 0xdc]         ; 00541f76
    MOV EAX,dword ptr [EBX + 0x1ffc0]   ; 00541f7c
    MOV EDX,dword ptr [EAX + 0x2e0]     ; 00541f82
    ADD ESP,0x8                         ; 00541f88
    CMP EDX,0x8                         ; 00541f8b
    JNZ 0x00541fa1                      ; 00541f8e
        ;   XREF to: 00541fa1 (CONDITIONAL_JUMP)  ; LAB_00541fa1
    PUSH 0x1                            ; 00541f90
    PUSH 0x6                            ; 00541f92
    MOV ECX,dword ptr [ESP + 0xc]       ; 00541f94
    PUSH ECX                            ; 00541f98
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00541f99
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00541f9e
    PUSH EDI                            ; 00541fa1
        ;   Label: LAB_00541fa1
    PUSH EBX                            ; 00541fa2
    CALL core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_00434610 ; 00541fa3
        ;   XREF to: 00434610 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_00434610(CCharacter * this_ptr, int layer_action_index)
    ADD ESP,0x8                         ; 00541fa8
    MOV EDI,dword ptr [ESP + 0xc]       ; 00541fab
        ;   Label: LAB_00541fab
    INC EDI                             ; 00541faf
    MOV dword ptr [ESP + 0xc],EDI       ; 00541fb0
    CMP EDI,0x2                         ; 00541fb4
    JL 0x00541ea6                       ; 00541fb7
        ;   XREF to: 00541ea6 (CONDITIONAL_JUMP)  ; LAB_00541ea6
    MOV ESP,EBP                         ; 00541fbd
    POP EBP                             ; 00541fbf
    POP EDI                             ; 00541fc0
    POP ESI                             ; 00541fc1
    POP EBX                             ; 00541fc2
    RET                                 ; 00541fc3
    XOR ESI,ESI                         ; 00541fc4
        ;   Label: LAB_00541fc4
    JMP 0x00541e88                      ; 00541fc6
        ;   XREF to: 00541e88 (UNCONDITIONAL_JUMP)  ; LAB_00541e88
    CMP ESI,ECX                         ; 00541fcb
        ;   Label: LAB_00541fcb
    JZ 0x00541e96                       ; 00541fcd
        ;   XREF to: 00541e96 (CONDITIONAL_JUMP)  ; LAB_00541e96
    CMP dword ptr [ECX + 0x2e0],0x8     ; 00541fd3
    JNZ 0x00541e96                      ; 00541fda
        ;   XREF to: 00541e96 (CONDITIONAL_JUMP)  ; LAB_00541e96
    LEA EDI,[EBX + 0x158]               ; 00541fe0
    PUSH EDI                            ; 00541fe6
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00541fe7
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00541fec
    ADD ESP,0x4                         ; 00541fef
    TEST EAX,EAX                        ; 00541ff2
    JNZ 0x00542001                      ; 00541ff4
        ;   XREF to: 00542001 (CONDITIONAL_JUMP)  ; LAB_00542001
    MOV dword ptr [EBX + 0x1ffc0],EAX   ; 00541ff6
    JMP 0x00541e96                      ; 00541ffc
        ;   XREF to: 00541e96 (UNCONDITIONAL_JUMP)  ; LAB_00541e96
    PUSH 0x1                            ; 00542001
        ;   Label: LAB_00542001
    PUSH 0x0                            ; 00542003
    PUSH EDI                            ; 00542005
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00542006
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0054200b
    JMP 0x00541e96                      ; 0054200e
        ;   XREF to: 00541e96 (UNCONDITIONAL_JUMP)  ; LAB_00541e96
    XOR EDI,EDI                         ; 00542013
        ;   Label: caseD_8
    JMP 0x00541edb                      ; 00542015
        ;   XREF to: 00541edb (UNCONDITIONAL_JUMP)  ; LAB_00541edb
    TEST EDI,EDI                        ; 0054201a
        ;   Label: LAB_0054201a
    JNZ 0x0054203d                      ; 0054201c
        ;   XREF to: 0054203d (CONDITIONAL_JUMP)  ; LAB_0054203d
    TEST ESI,ESI                        ; 0054201e
    JZ 0x00541edb                       ; 00542020
        ;   XREF to: 00541edb (CONDITIONAL_JUMP)  ; LAB_00541edb
    CMP dword ptr [ESI + 0x2e0],0x8     ; 00542026
    JZ 0x00541edb                       ; 0054202d
        ;   XREF to: 00541edb (CONDITIONAL_JUMP)  ; LAB_00541edb
    MOV EDI,0x1                         ; 00542033
        ;   Label: LAB_00542033
    JMP 0x00541edb                      ; 00542038
        ;   XREF to: 00541edb (UNCONDITIONAL_JUMP)  ; LAB_00541edb
    MOV EAX,EDI                         ; 0054203d
        ;   Label: LAB_0054203d
    JZ 0x00541edb                       ; 0054203f
        ;   XREF to: 00541edb (CONDITIONAL_JUMP)  ; LAB_00541edb
    CMP dword ptr [EDI + 0x2e0],0x8     ; 00542045
    JNZ 0x00542033                      ; 0054204c
        ;   XREF to: 00542033 (CONDITIONAL_JUMP)  ; LAB_00542033
    XOR EDI,EDI                         ; 0054204e
    JMP 0x00541edb                      ; 00542050
        ;   XREF to: 00541edb (UNCONDITIONAL_JUMP)  ; LAB_00541edb
    CMP dword ptr [ECX + 0x2e0],0x8     ; 00542055
        ;   Label: LAB_00542055
    JNZ 0x00542065                      ; 0054205c
        ;   XREF to: 00542065 (CONDITIONAL_JUMP)  ; LAB_00542065
    XOR EAX,ECX                         ; 0054205e
    JMP 0x00541f22                      ; 00542060
        ;   XREF to: 00541f22 (UNCONDITIONAL_JUMP)  ; LAB_00541f22
    MOV EAX,0x1                         ; 00542065
        ;   Label: LAB_00542065
    JMP 0x00541f22                      ; 0054206a
        ;   XREF to: 00541f22 (UNCONDITIONAL_JUMP)  ; LAB_00541f22
    CMP dword ptr [ESI + 0x2e0],0x8     ; 0054206f
        ;   Label: LAB_0054206f
    JZ 0x00541f5b                       ; 00542076
        ;   XREF to: 00541f5b (CONDITIONAL_JUMP)  ; LAB_00541f5b
    MOV EAX,0x1                         ; 0054207c
    JMP 0x00541f5d                      ; 00542081
        ;   XREF to: 00541f5d (UNCONDITIONAL_JUMP)  ; LAB_00541f5d


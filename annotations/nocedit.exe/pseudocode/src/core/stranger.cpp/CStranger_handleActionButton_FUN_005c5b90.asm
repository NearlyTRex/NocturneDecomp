; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_handleActionButton_FUN_005c5b90(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_stranger.cpp_CStranger_processFrame_FUN_005bb960 at 005bc346
;
; Referenced Globals:
;   void* switchdataD_005c5b6c = 005c5c17
;   TerminatedCString s_eDoorMoveNone_returned_b_00653ddc
;   TerminatedCString s_eDoorMoveNone_returned_b_00653e19
;   TerminatedCString s_CBodyPart_00653e56
;   TerminatedCString s_CBodyPart_00653e61
;   double DOUBLE_00653e6c = 0.999900000000000
;   double DOUBLE_00653e74 = 0.990000000000000
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
;   core_hero.cpp_CHero_tryApproachNearbyActor_FUN_004f33b0
;   core_hero.cpp_CHero_tryInteract_FUN_004f2af0
;   core_hero.cpp_CHero_tryOpenDoor_FUN_004f2ed0
;   core_hero.cpp_CHero_tryOpenNearbyDoor_FUN_004f2d70
;   core_hero.cpp_CHero_tryPullLever_FUN_004f2f50
;   core_hero.cpp_CHero_tryPushNearbyBox_FUN_004f3120
;   core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004f2c40
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_stranger.cpp_CStranger_tryClimbLadder_FUN_005c1fe0
;   core_stranger.cpp_CStranger_tryDescendLadder_FUN_005c2400
;   core_stranger.cpp_CStranger_tryPickupObject_FUN_005c1680
;   core_stranger.cpp_CStranger_tryPlaceObject_FUN_005c2850
;   core_stranger.cpp_CStranger_tryThrowDynamite_FUN_005c5e80
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5b90
        ;   Label: core_stranger.cpp_CStranger_handleActionButton_FUN_005c5b90
    PUSH ESI                            ; 005c5b91
    PUSH EDI                            ; 005c5b92
    SUB ESP,0x8                         ; 005c5b93
    MOV EBX,dword ptr [ESP + 0x18]      ; 005c5b96
    CMP dword ptr [EBX + 0xbe38],0x0    ; 005c5b9a
    JZ 0x005c5bac                       ; 005c5ba1
        ;   XREF to: 005c5bac (CONDITIONAL_JUMP)  ; LAB_005c5bac
    CMP dword ptr [EBX + 0x1fc38],0x0   ; 005c5ba3
    JZ 0x005c5bb3                       ; 005c5baa
        ;   XREF to: 005c5bb3 (CONDITIONAL_JUMP)  ; LAB_005c5bb3
    ADD ESP,0x8                         ; 005c5bac
        ;   Label: LAB_005c5bac
    POP EDI                             ; 005c5baf
    POP ESI                             ; 005c5bb0
    POP EBX                             ; 005c5bb1
    RET                                 ; 005c5bb2
    PUSH EBX                            ; 005c5bb3
        ;   Label: LAB_005c5bb3
    CALL core_stranger.cpp_CStranger_tryThrowDynamite_FUN_005c5e80 ; 005c5bb4
        ;   XREF to: 005c5e80 (UNCONDITIONAL_CALL)  ; int core_stranger.cpp_CStranger_tryThrowDynamite_FUN_005c5e80(CStranger * this_ptr)
    ADD ESP,0x4                         ; 005c5bb9
    TEST EAX,EAX                        ; 005c5bbc
    JNZ 0x005c5bac                      ; 005c5bbe
        ;   XREF to: 005c5bac (CONDITIONAL_JUMP)  ; LAB_005c5bac
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 005c5bc0
    JNZ 0x005c5bac                      ; 005c5bc7
        ;   XREF to: 005c5bac (CONDITIONAL_JUMP)  ; LAB_005c5bac
    PUSH EAX                            ; 005c5bc9
    LEA ESI,[EBX + 0x158]               ; 005c5bca
    PUSH ESI                            ; 005c5bd0
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005c5bd1
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x8],EAX       ; 005c5bd6
    ADD ESP,0x8                         ; 005c5bda
    PUSH 0x1                            ; 005c5bdd
    PUSH ESI                            ; 005c5bdf
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005c5be0
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0xc],EAX       ; 005c5be5
    FLD float ptr [ESP + 0xc]           ; 005c5be9
    ADD ESP,0x8                         ; 005c5bed
    FADD float ptr [ESP]                ; 005c5bf0
    FCOMP double ptr [0x00653e6c]       ; 005c5bf3 | DOUBLE_00653e6c
    FNSTSW AX                           ; 005c5bf9
    SAHF                                ; 005c5bfb
    JBE 0x005c5c36                      ; 005c5bfc
        ;   XREF to: 005c5c36 (CONDITIONAL_JUMP)  ; LAB_005c5c36
    PUSH EBX                            ; 005c5bfe
    CALL core_hero.cpp_CHero_tryOpenNearbyDoor_FUN_004f2d70 ; 005c5bff
        ;   XREF to: 004f2d70 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryOpenNearbyDoor_FUN_004f2d70(CHero * this_ptr)
    ADD ESP,0x4                         ; 005c5c04
    CMP EAX,0x5                         ; 005c5c07
    JA 0x005c5d16                       ; 005c5c0a
        ;   XREF to: 005c5d16 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5c5b6c]  ; 005c5c10 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EDX,dword ptr [EBX + 0x1fb9c]   ; 005c5c17
        ;   Label: caseD_0
    TEST EDX,EDX                        ; 005c5c1d
    JZ 0x005c5c36                       ; 005c5c1f
        ;   XREF to: 005c5c36 (CONDITIONAL_JUMP)  ; LAB_005c5c36
    PUSH EDX                            ; 005c5c21
    PUSH 0x653e19                       ; 005c5c22 | = "eDoorMoveNone returned by checkDoorOp..."
    MOV ESI,dword ptr [0x00678a60]      ; 005c5c27 | g_CEditorToolsPtr
    PUSH ESI                            ; 005c5c2d | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 005c5c2e
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 005c5c33
    PUSH EBX                            ; 005c5c36
        ;   Label: LAB_005c5c36
    CALL core_stranger.cpp_CStranger_tryPlaceObject_FUN_005c2850 ; 005c5c37
        ;   XREF to: 005c2850 (UNCONDITIONAL_CALL)  ; int core_stranger.cpp_CStranger_tryPlaceObject_FUN_005c2850(CStranger * this_ptr)
    ADD ESP,0x4                         ; 005c5c3c
    TEST EAX,EAX                        ; 005c5c3f
    JZ 0x005c5d30                       ; 005c5c41
        ;   XREF to: 005c5d30 (CONDITIONAL_JUMP)  ; LAB_005c5d30
    MOV dword ptr [EBX + 0xbe38],0x0    ; 005c5c47
    ADD ESP,0x8                         ; 005c5c51
    POP EDI                             ; 005c5c54
    POP ESI                             ; 005c5c55
    POP EBX                             ; 005c5c56
    RET                                 ; 005c5c57
    MOV EDI,dword ptr [EBX + 0x1fb9c]   ; 005c5c58
        ;   Label: caseD_1
    TEST EDI,EDI                        ; 005c5c5e
    JNZ 0x005c5c73                      ; 005c5c60
        ;   XREF to: 005c5c73 (CONDITIONAL_JUMP)  ; LAB_005c5c73
    MOV dword ptr [EBX + 0xbe38],0x0    ; 005c5c62
    ADD ESP,0x8                         ; 005c5c6c
    POP EDI                             ; 005c5c6f
    POP ESI                             ; 005c5c70
    POP EBX                             ; 005c5c71
    RET                                 ; 005c5c72
    PUSH EDI                            ; 005c5c73
        ;   Label: LAB_005c5c73
    PUSH 0x653ddc                       ; 005c5c74 | = "eDoorMoveNone returned by checkDoorOp..."
    MOV EAX,[0x00678a60]                ; 005c5c79 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 005c5c7e | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 005c5c7f
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 005c5c84
    MOV dword ptr [EBX + 0xbe38],0x0    ; 005c5c87
    ADD ESP,0x8                         ; 005c5c91
    POP EDI                             ; 005c5c94
    POP ESI                             ; 005c5c95
    POP EBX                             ; 005c5c96
    RET                                 ; 005c5c97
    PUSH 0x1                            ; 005c5c98
        ;   Label: caseD_3
    PUSH 0x1c                           ; 005c5c9a
    LEA EAX,[EBX + 0x158]               ; 005c5c9c
    PUSH EAX                            ; 005c5ca2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005c5ca3
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV dword ptr [EBX + 0x1fc38],0x5   ; 005c5ca8
    ADD ESP,0xc                         ; 005c5cb2
    MOV dword ptr [EBX + 0xbe38],0x0    ; 005c5cb5
    ADD ESP,0x8                         ; 005c5cbf
    POP EDI                             ; 005c5cc2
    POP ESI                             ; 005c5cc3
    POP EBX                             ; 005c5cc4
    RET                                 ; 005c5cc5
    PUSH 0x1                            ; 005c5cc6
        ;   Label: caseD_4
    PUSH 0x1d                           ; 005c5cc8
    PUSH ESI                            ; 005c5cca
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005c5ccb
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV dword ptr [EBX + 0x1fc38],0x5   ; 005c5cd0
    ADD ESP,0xc                         ; 005c5cda
    MOV dword ptr [EBX + 0xbe38],0x0    ; 005c5cdd
    ADD ESP,0x8                         ; 005c5ce7
    POP EDI                             ; 005c5cea
    POP ESI                             ; 005c5ceb
    POP EBX                             ; 005c5cec
    RET                                 ; 005c5ced
    PUSH 0x1                            ; 005c5cee
        ;   Label: caseD_5
    PUSH 0x1e                           ; 005c5cf0
    PUSH ESI                            ; 005c5cf2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005c5cf3
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV dword ptr [EBX + 0x1fc38],0x5   ; 005c5cf8
    ADD ESP,0xc                         ; 005c5d02
    MOV dword ptr [EBX + 0xbe38],0x0    ; 005c5d05
    ADD ESP,0x8                         ; 005c5d0f
    POP EDI                             ; 005c5d12
    POP ESI                             ; 005c5d13
    POP EBX                             ; 005c5d14
    RET                                 ; 005c5d15
    PUSH EBX                            ; 005c5d16
        ;   Label: default
    CALL core_hero.cpp_CHero_tryOpenDoor_FUN_004f2ed0 ; 005c5d17
        ;   XREF to: 004f2ed0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryOpenDoor_FUN_004f2ed0(CHero * this_ptr)
    ADD ESP,0x4                         ; 005c5d1c
    MOV dword ptr [EBX + 0xbe38],0x0    ; 005c5d1f
    ADD ESP,0x8                         ; 005c5d29
    POP EDI                             ; 005c5d2c
    POP ESI                             ; 005c5d2d
    POP EBX                             ; 005c5d2e
    RET                                 ; 005c5d2f
    PUSH 0x653e56                       ; 005c5d30 | = "!CBodyPart"
        ;   Label: LAB_005c5d30
    PUSH EBX                            ; 005c5d35
    CALL core_stranger.cpp_CStranger_tryPickupObject_FUN_005c1680 ; 005c5d36
        ;   XREF to: 005c1680 (UNCONDITIONAL_CALL)  ; int core_stranger.cpp_CStranger_tryPickupObject_FUN_005c1680(CStranger * this_ptr, char * class_name)
    ADD ESP,0x8                         ; 005c5d3b
    TEST EAX,EAX                        ; 005c5d3e
    JZ 0x005c5d53                       ; 005c5d40
        ;   XREF to: 005c5d53 (CONDITIONAL_JUMP)  ; LAB_005c5d53
    MOV dword ptr [EBX + 0xbe38],0x0    ; 005c5d42
    ADD ESP,0x8                         ; 005c5d4c
    POP EDI                             ; 005c5d4f
    POP ESI                             ; 005c5d50
    POP EBX                             ; 005c5d51
    RET                                 ; 005c5d52
    PUSH EBX                            ; 005c5d53
        ;   Label: LAB_005c5d53
    CALL core_hero.cpp_CHero_tryInteract_FUN_004f2af0 ; 005c5d54
        ;   XREF to: 004f2af0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryInteract_FUN_004f2af0(CHero * this_ptr)
    ADD ESP,0x4                         ; 005c5d59
    TEST EAX,EAX                        ; 005c5d5c
    JNZ 0x005c5bac                      ; 005c5d5e
        ;   XREF to: 005c5bac (CONDITIONAL_JUMP)  ; LAB_005c5bac
    PUSH EBX                            ; 005c5d64
    CALL core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004f2c40 ; 005c5d65
        ;   XREF to: 004f2c40 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004f2c40(CHero * this_ptr)
    ADD ESP,0x4                         ; 005c5d6a
    TEST EAX,EAX                        ; 005c5d6d
    JZ 0x005c5d82                       ; 005c5d6f
        ;   XREF to: 005c5d82 (CONDITIONAL_JUMP)  ; LAB_005c5d82
    MOV dword ptr [EBX + 0xbe38],0x0    ; 005c5d71
    ADD ESP,0x8                         ; 005c5d7b
    POP EDI                             ; 005c5d7e
    POP ESI                             ; 005c5d7f
    POP EBX                             ; 005c5d80
    RET                                 ; 005c5d81
    PUSH EBX                            ; 005c5d82
        ;   Label: LAB_005c5d82
    CALL core_hero.cpp_CHero_tryPushNearbyBox_FUN_004f3120 ; 005c5d83
        ;   XREF to: 004f3120 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryPushNearbyBox_FUN_004f3120(CHero * this_ptr)
    ADD ESP,0x4                         ; 005c5d88
    LEA ESI,[EBX + 0x158]               ; 005c5d8b
    TEST EAX,EAX                        ; 005c5d91
    JNZ 0x005c5db0                      ; 005c5d93
        ;   XREF to: 005c5db0 (CONDITIONAL_JUMP)  ; LAB_005c5db0
    MOV EDI,dword ptr [EBX + 0x24f8]    ; 005c5d95
    TEST EDI,EDI                        ; 005c5d9b
    JZ 0x005c5dc4                       ; 005c5d9d
        ;   XREF to: 005c5dc4 (CONDITIONAL_JUMP)  ; LAB_005c5dc4
    MOV dword ptr [EBX + 0xbe38],0x0    ; 005c5d9f
        ;   Label: LAB_005c5d9f
    ADD ESP,0x8                         ; 005c5da9
    POP EDI                             ; 005c5dac
    POP ESI                             ; 005c5dad
    POP EBX                             ; 005c5dae
    RET                                 ; 005c5daf
    PUSH 0x1                            ; 005c5db0
        ;   Label: LAB_005c5db0
    PUSH 0x6                            ; 005c5db2
    PUSH ESI                            ; 005c5db4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005c5db5
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005c5dba
    ADD ESP,0x8                         ; 005c5dbd
    POP EDI                             ; 005c5dc0
    POP ESI                             ; 005c5dc1
    POP EBX                             ; 005c5dc2
    RET                                 ; 005c5dc3
    PUSH EAX                            ; 005c5dc4
        ;   Label: LAB_005c5dc4
    PUSH EBX                            ; 005c5dc5
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840 ; 005c5dc6
        ;   XREF to: 0042e840 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0xc],EAX       ; 005c5dcb
    FLD float ptr [ESP + 0xc]           ; 005c5dcf
    ADD ESP,0x8                         ; 005c5dd3
    FCOMP double ptr [0x00653e74]       ; 005c5dd6 | DOUBLE_00653e74
    FNSTSW AX                           ; 005c5ddc
    SAHF                                ; 005c5dde
    JBE 0x005c5d9f                      ; 005c5ddf
        ;   XREF to: 005c5d9f (CONDITIONAL_JUMP)  ; LAB_005c5d9f
    PUSH EBX                            ; 005c5de1
    CALL core_hero.cpp_CHero_tryPullLever_FUN_004f2f50 ; 005c5de2
        ;   XREF to: 004f2f50 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryPullLever_FUN_004f2f50(CHero * this_ptr)
    ADD ESP,0x4                         ; 005c5de7
    TEST EAX,EAX                        ; 005c5dea
    JNZ 0x005c5e08                      ; 005c5dec
        ;   XREF to: 005c5e08 (CONDITIONAL_JUMP)  ; LAB_005c5e08
    PUSH EBX                            ; 005c5dee
    CALL core_stranger.cpp_CStranger_tryClimbLadder_FUN_005c1fe0 ; 005c5def
        ;   XREF to: 005c1fe0 (UNCONDITIONAL_CALL)  ; int core_stranger.cpp_CStranger_tryClimbLadder_FUN_005c1fe0(CStranger * this_ptr)
    ADD ESP,0x4                         ; 005c5df4
    TEST EAX,EAX                        ; 005c5df7
    JZ 0x005c5e22                       ; 005c5df9
        ;   XREF to: 005c5e22 (CONDITIONAL_JUMP)  ; LAB_005c5e22
    MOV dword ptr [EBX + 0xbe38],EDI    ; 005c5dfb
    ADD ESP,0x8                         ; 005c5e01
    POP EDI                             ; 005c5e04
    POP ESI                             ; 005c5e05
    POP EBX                             ; 005c5e06
    RET                                 ; 005c5e07
    PUSH 0x1                            ; 005c5e08
        ;   Label: LAB_005c5e08
    PUSH 0x1f                           ; 005c5e0a
    PUSH ESI                            ; 005c5e0c
    MOV dword ptr [EBX + 0xbe38],EDI    ; 005c5e0d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005c5e13
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005c5e18
    ADD ESP,0x8                         ; 005c5e1b
    POP EDI                             ; 005c5e1e
    POP ESI                             ; 005c5e1f
    POP EBX                             ; 005c5e20
    RET                                 ; 005c5e21
    PUSH EBX                            ; 005c5e22
        ;   Label: LAB_005c5e22
    CALL core_stranger.cpp_CStranger_tryDescendLadder_FUN_005c2400 ; 005c5e23
        ;   XREF to: 005c2400 (UNCONDITIONAL_CALL)  ; int core_stranger.cpp_CStranger_tryDescendLadder_FUN_005c2400(CStranger * this_ptr)
    ADD ESP,0x4                         ; 005c5e28
    TEST EAX,EAX                        ; 005c5e2b
    JZ 0x005c5e3c                       ; 005c5e2d
        ;   XREF to: 005c5e3c (CONDITIONAL_JUMP)  ; LAB_005c5e3c
    MOV dword ptr [EBX + 0xbe38],EDI    ; 005c5e2f
    ADD ESP,0x8                         ; 005c5e35
    POP EDI                             ; 005c5e38
    POP ESI                             ; 005c5e39
    POP EBX                             ; 005c5e3a
    RET                                 ; 005c5e3b
    PUSH EBX                            ; 005c5e3c
        ;   Label: LAB_005c5e3c
    CALL core_hero.cpp_CHero_tryApproachNearbyActor_FUN_004f33b0 ; 005c5e3d
        ;   XREF to: 004f33b0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryApproachNearbyActor_FUN_004f33b0(CHero * this_ptr)
    ADD ESP,0x4                         ; 005c5e42
    TEST EAX,EAX                        ; 005c5e45
    JZ 0x005c5e56                       ; 005c5e47
        ;   XREF to: 005c5e56 (CONDITIONAL_JUMP)  ; LAB_005c5e56
    MOV dword ptr [EBX + 0xbe38],EDI    ; 005c5e49
    ADD ESP,0x8                         ; 005c5e4f
    POP EDI                             ; 005c5e52
    POP ESI                             ; 005c5e53
    POP EBX                             ; 005c5e54
    RET                                 ; 005c5e55
    PUSH 0x653e61                       ; 005c5e56 | = "CBodyPart"
        ;   Label: LAB_005c5e56
    PUSH EBX                            ; 005c5e5b
    CALL core_stranger.cpp_CStranger_tryPickupObject_FUN_005c1680 ; 005c5e5c
        ;   XREF to: 005c1680 (UNCONDITIONAL_CALL)  ; int core_stranger.cpp_CStranger_tryPickupObject_FUN_005c1680(CStranger * this_ptr, char * class_name)
    ADD ESP,0x8                         ; 005c5e61
    TEST EAX,EAX                        ; 005c5e64
    JZ 0x005c5d9f                       ; 005c5e66
        ;   XREF to: 005c5d9f (CONDITIONAL_JUMP)  ; LAB_005c5d9f
    MOV dword ptr [EBX + 0xbe38],EDI    ; 005c5e6c
    ADD ESP,0x8                         ; 005c5e72
    POP EDI                             ; 005c5e75
    POP ESI                             ; 005c5e76
    POP EBX                             ; 005c5e77
    RET                                 ; 005c5e78


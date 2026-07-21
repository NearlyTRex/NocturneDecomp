; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_hero_cpp_CHero_getGrabbed_FUN_004b4c70(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; XREF[1]:
;   core_stranger.cpp_CStranger_getGrabbed_FUN_00540770 at 005407ab
;
; Referenced Globals:
;   string s_GETGRABBED_0058579d
;   string s_GETGRABBED_FRONT_005857a8
;   string s_GETGRABBED_FRONT_005857b9
;   string s_GETGRABBED_BACK_005857ca
;   string s_GETGRABBED_005857da
;
; Called Functions:
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_motion.cpp_CMotionController_getMotionList_FUN_004e1890
;   core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004e1740
;   core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4c70
        ;   Label: core_hero.cpp_CHero_getGrabbed_FUN_004b4c70
    PUSH ESI                            ; 004b4c71
    SUB ESP,0xc                         ; 004b4c72
    MOV ESI,dword ptr [ESP + 0x18]      ; 004b4c75
    MOV EDX,dword ptr [ESP + 0x20]      ; 004b4c79
    TEST EDX,EDX                        ; 004b4c7d
    JZ 0x004b4ca0                       ; 004b4c7f
        ;   XREF to: 004b4ca0 (CONDITIONAL_JUMP)  ; LAB_004b4ca0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004b4c81
        ;   Label: LAB_004b4c81
    MOV dword ptr [ESI + 0x2590],EAX    ; 004b4c85
    MOV EAX,dword ptr [ESP + 0x20]      ; 004b4c8b
    MOV dword ptr [ESI + 0x2594],EAX    ; 004b4c8f
    MOV EAX,0x1                         ; 004b4c95
    ADD ESP,0xc                         ; 004b4c9a
    POP ESI                             ; 004b4c9d
    POP EBX                             ; 004b4c9e
    RET                                 ; 004b4c9f
    PUSH EDX                            ; 004b4ca0
        ;   Label: LAB_004b4ca0
    PUSH 0x58579d                       ; 004b4ca1 | = "GETGRABBED"
    LEA EBX,[ESI + 0x150]               ; 004b4ca6
    PUSH EBX                            ; 004b4cac
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 004b4cad
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getMotionList_FUN_004e1890()
    ADD ESP,0x4                         ; 004b4cb2
    PUSH EAX                            ; 004b4cb5
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0 ; 004b4cb6
        ;   XREF to: 004e10a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0()
    ADD ESP,0xc                         ; 004b4cbb
    TEST EAX,EAX                        ; 004b4cbe
    JGE 0x004b4cca                      ; 004b4cc0
        ;   XREF to: 004b4cca (CONDITIONAL_JUMP)  ; LAB_004b4cca
    XOR EAX,EAX                         ; 004b4cc2
    ADD ESP,0xc                         ; 004b4cc4
    POP ESI                             ; 004b4cc7
    POP EBX                             ; 004b4cc8
    RET                                 ; 004b4cc9
    PUSH 0x0                            ; 004b4cca
        ;   Label: LAB_004b4cca
    PUSH 0x5857a8                       ; 004b4ccc | = "GETGRABBED_FRONT"
    PUSH EBX                            ; 004b4cd1
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 004b4cd2
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getMotionList_FUN_004e1890()
    ADD ESP,0x4                         ; 004b4cd7
    PUSH EAX                            ; 004b4cda
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0 ; 004b4cdb
        ;   XREF to: 004e10a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0()
    ADD ESP,0xc                         ; 004b4ce0
    TEST EAX,EAX                        ; 004b4ce3
    JL 0x004b4d31                       ; 004b4ce5
        ;   XREF to: 004b4d31 (CONDITIONAL_JUMP)  ; LAB_004b4d31
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004b4ce7
    ADD EAX,0x20                        ; 004b4ceb
    PUSH EAX                            ; 004b4cee
    LEA EAX,[ESP + 0x4]                 ; 004b4cef
    PUSH EAX                            ; 004b4cf3
    PUSH ESI                            ; 004b4cf4
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 004b4cf5
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    FLDZ                                ; 004b4cfa
    ADD ESP,0xc                         ; 004b4cfc
    FCOMP float ptr [EAX + 0x8]         ; 004b4cff
    FNSTSW AX                           ; 004b4d02
    SAHF                                ; 004b4d04
    JNC 0x004b4d1c                      ; 004b4d05
        ;   XREF to: 004b4d1c (CONDITIONAL_JUMP)  ; LAB_004b4d1c
    PUSH 0x1                            ; 004b4d07
    PUSH 0x5857b9                       ; 004b4d09 | = "GETGRABBED_FRONT"
    PUSH EBX                            ; 004b4d0e
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004e1740 ; 004b4d0f
        ;   XREF to: 004e1740 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004e1740()
    ADD ESP,0xc                         ; 004b4d14
    JMP 0x004b4c81                      ; 004b4d17
        ;   XREF to: 004b4c81 (UNCONDITIONAL_JUMP)  ; LAB_004b4c81
    PUSH 0x1                            ; 004b4d1c
        ;   Label: LAB_004b4d1c
    PUSH 0x5857ca                       ; 004b4d1e | = "GETGRABBED_BACK"
    PUSH EBX                            ; 004b4d23
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004e1740 ; 004b4d24
        ;   XREF to: 004e1740 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004e1740()
    ADD ESP,0xc                         ; 004b4d29
    JMP 0x004b4c81                      ; 004b4d2c
        ;   XREF to: 004b4c81 (UNCONDITIONAL_JUMP)  ; LAB_004b4c81
    PUSH 0x1                            ; 004b4d31
        ;   Label: LAB_004b4d31
    PUSH 0x5857da                       ; 004b4d33 | = "GETGRABBED"
    PUSH EBX                            ; 004b4d38
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004e1740 ; 004b4d39
        ;   XREF to: 004e1740 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004e1740()
    ADD ESP,0xc                         ; 004b4d3e
    JMP 0x004b4c81                      ; 004b4d41
        ;   XREF to: 004b4c81 (UNCONDITIONAL_JUMP)  ; LAB_004b4c81


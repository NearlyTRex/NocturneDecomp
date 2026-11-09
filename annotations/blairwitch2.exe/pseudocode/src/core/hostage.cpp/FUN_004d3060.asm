; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_hostage_cpp_FUN_004d3060(int param_1,undefined4 param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_006141f0
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_004894f0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d3060
        ;   Label: core_hostage.cpp_FUN_004d3060
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d3061
    MOV EAX,dword ptr [ESP + 0x10]      ; 004d3065
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d3069
    MOV dword ptr [EBX + 0x2770],EAX    ; 004d306d
    MOV dword ptr [EBX + 0x276c],EDX    ; 004d3073
    TEST EAX,EAX                        ; 004d3079
    JZ 0x004d3098                       ; 004d307b
        ;   XREF to: 004d3098 (CONDITIONAL_JUMP)  ; LAB_004d3098
    MOV EAX,dword ptr [ESP + 0xc]       ; 004d307d
        ;   Label: LAB_004d307d
    MOV dword ptr [EBX + 0x2472c],0x40400000 ; 004d3081
    MOV dword ptr [EBX + 0x24728],EAX   ; 004d308b
    MOV EAX,0x1                         ; 004d3091
    POP EBX                             ; 004d3096
    RET                                 ; 004d3097
    PUSH 0x1                            ; 004d3098
        ;   Label: LAB_004d3098
    PUSH 0x4                            ; 004d309a
    LEA EAX,[EBX + 0x2b4]               ; 004d309c
    PUSH EAX                            ; 004d30a2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d30a3
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d30a8
    LEA EAX,[EBX + 0x244fc]             ; 004d30ab
    PUSH EAX                            ; 004d30b1
    MOV EDX,dword ptr [0x006141f0]      ; 004d30b2 | DAT_006141f0
    PUSH EDX                            ; 004d30b8
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 004d30b9
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004d30be
    JMP 0x004d307d                      ; 004d30c1
        ;   XREF to: 004d307d (UNCONDITIONAL_JUMP)  ; LAB_004d307d


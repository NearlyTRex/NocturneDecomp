; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hostage_cpp_CHostage_getGrabbed_FUN_004ef290(CHostage *this_ptr,CDemonActor *grabber,int grab_type)
;
; Parameters:
; CHostage *       Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   grabber
; int              Stack[0xc]:4   grab_type
;
; Referenced Globals:
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_004a1b70
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ef290
        ;   Label: core_hostage.cpp_CHostage_getGrabbed_FUN_004ef290
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ef291
    MOV EAX,dword ptr [ESP + 0x10]      ; 004ef295
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ef299
    MOV dword ptr [EBX + 0x2700],EAX    ; 004ef29d
    MOV dword ptr [EBX + 0x26fc],EDX    ; 004ef2a3
    TEST EAX,EAX                        ; 004ef2a9
    JZ 0x004ef2c8                       ; 004ef2ab
        ;   XREF to: 004ef2c8 (CONDITIONAL_JUMP)  ; LAB_004ef2c8
    MOV EAX,dword ptr [ESP + 0xc]       ; 004ef2ad
        ;   Label: LAB_004ef2ad
    MOV dword ptr [EBX + 0x1fe9c],0x40400000 ; 004ef2b1
    MOV dword ptr [EBX + 0x1fe98],EAX   ; 004ef2bb
    MOV EAX,0x1                         ; 004ef2c1
    POP EBX                             ; 004ef2c6
    RET                                 ; 004ef2c7
    PUSH 0x1                            ; 004ef2c8
        ;   Label: LAB_004ef2c8
    PUSH 0x4                            ; 004ef2ca
    LEA EAX,[EBX + 0x158]               ; 004ef2cc
    PUSH EAX                            ; 004ef2d2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004ef2d3
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ef2d8
    LEA EAX,[EBX + 0x1fc6c]             ; 004ef2db
    PUSH EAX                            ; 004ef2e1
    MOV EDX,dword ptr [0x0061b4d0]      ; 004ef2e2 | DAT_0061b4d0
    PUSH EDX                            ; 004ef2e8
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 004ef2e9
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004ef2ee
    JMP 0x004ef2ad                      ; 004ef2f1
        ;   XREF to: 004ef2ad (UNCONDITIONAL_JUMP)  ; LAB_004ef2ad


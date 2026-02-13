; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_hostage_cpp_CHostage_getGrabbed_FUN_004f63e0 (CHostage *this_ptr,CDemonActor *grabber,int grab_type)
;
; Parameters:
; CHostage *       Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   grabber
; int              Stack[0xc]:4   grab_type
;
; Referenced Globals:
;   CEventList* g_CEventListPtr = 02d05310
;   CEventList g_CEventListInstance
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_004aabe0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f63e0
        ;   Label: core_hostage.cpp_CHostage_getGrabbed_FUN_004f63e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f63e1
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f63e5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f63e9
    MOV dword ptr [EBX + 0x259c],EAX    ; 004f63ed
    MOV dword ptr [EBX + 0x2598],EDX    ; 004f63f3
    TEST EAX,EAX                        ; 004f63f9
    JZ 0x004f6418                       ; 004f63fb
        ;   XREF to: 004f6418 (CONDITIONAL_JUMP)  ; LAB_004f6418
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f63fd
        ;   Label: LAB_004f63fd
    MOV dword ptr [EBX + 0x1faec],0x40400000 ; 004f6401
    MOV dword ptr [EBX + 0x1fae8],EAX   ; 004f640b
    MOV EAX,0x1                         ; 004f6411
    POP EBX                             ; 004f6416
    RET                                 ; 004f6417
    PUSH 0x1                            ; 004f6418
        ;   Label: LAB_004f6418
    PUSH 0x4                            ; 004f641a
    LEA EAX,[EBX + 0x158]               ; 004f641c
    PUSH EAX                            ; 004f6422
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f6423
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f6428
    LEA EAX,[EBX + 0x1f8bc]             ; 004f642b
    PUSH EAX                            ; 004f6431
    MOV EDX,dword ptr [0x006793d0]      ; 004f6432 | g_CEventListInstance | g_CEventListPtr
    PUSH EDX                            ; 004f6438 | g_CEventListInstance
    CALL core_event.cpp_CEventList_executeCommands_FUN_004aabe0 ; 004f6439
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004aabe0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004f643e
    JMP 0x004f63fd                      ; 004f6441
        ;   XREF to: 004f63fd (UNCONDITIONAL_JUMP)  ; LAB_004f63fd


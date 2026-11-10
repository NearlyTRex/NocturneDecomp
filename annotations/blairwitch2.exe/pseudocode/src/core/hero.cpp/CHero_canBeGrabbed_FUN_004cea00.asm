; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_canBeGrabbed_FUN_004cea00(CHero *this_ptr,CDemonActor *grabber,int grab_type)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   grabber
; int              Stack[0xc]:4   grab_type
;
; Referenced Globals:
;   TerminatedCString s_GETGRABBED_005d9b7e
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_00503860
;   core_motion.cpp_CMotionList_findStateIndex_FUN_00502fa0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 004cea00
        ;   Label: core_hero.cpp_CHero_canBeGrabbed_FUN_004cea00
    TEST EDX,EDX                        ; 004cea04
    JZ 0x004cea16                       ; 004cea06
        ;   XREF to: 004cea16 (CONDITIONAL_JUMP)  ; LAB_004cea16
    LEA EAX,[EAX]                       ; 004cea08
    MOV EDX,EDX                         ; 004cea0e
    PUSH EDX                            ; 004cea16
        ;   Label: LAB_004cea16
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cea17
    PUSH 0x5d9b7e                       ; 004cea1b | = "GETGRABBED"
    ADD EAX,0x2b4                       ; 004cea20
    PUSH EAX                            ; 004cea25
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00503860 ; 004cea26
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00503860(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004cea2b
    PUSH EAX                            ; 004cea2e
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_00502fa0 ; 004cea2f
        ;   XREF to: 00502fa0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_00502fa0(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004cea34
    TEST EAX,EAX                        ; 004cea37
    JGE 0x004cea10                      ; 004cea39
        ;   XREF to: 004cea10 (CONDITIONAL_JUMP)  ; caseD_2
    LEA EAX,[EAX]                       ; 004cea3b
    MOV ECX,ECX                         ; 004cea3e


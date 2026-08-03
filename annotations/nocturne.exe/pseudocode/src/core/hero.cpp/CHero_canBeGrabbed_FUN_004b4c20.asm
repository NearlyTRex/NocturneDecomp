; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_canBeGrabbed_FUN_004b4c20(CHero *this_ptr,CDemonActor *grabber,int grab_type)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   grabber
; int              Stack[0xc]:4   grab_type
;
; Referenced Globals:
;   TerminatedCString s_GETGRABBED_00585792
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_004e1890
;   core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 004b4c20
        ;   Label: core_hero.cpp_CHero_canBeGrabbed_FUN_004b4c20
    TEST EDX,EDX                        ; 004b4c24
    JZ 0x004b4c36                       ; 004b4c26
        ;   XREF to: 004b4c36 (CONDITIONAL_JUMP)  ; LAB_004b4c36
    LEA EAX,[EAX]                       ; 004b4c28
    MOV EDX,EDX                         ; 004b4c2e
    PUSH EDX                            ; 004b4c36
        ;   Label: LAB_004b4c36
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b4c37
    PUSH 0x585792                       ; 004b4c3b | = "GETGRABBED"
    ADD EAX,0x150                       ; 004b4c40
    PUSH EAX                            ; 004b4c45
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 004b4c46
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004e1890(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004b4c4b
    PUSH EAX                            ; 004b4c4e
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0 ; 004b4c4f
        ;   XREF to: 004e10a0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004b4c54
    TEST EAX,EAX                        ; 004b4c57
    JGE 0x004b4c30                      ; 004b4c59
        ;   XREF to: 004b4c30 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 004b4c5b
    MOV ECX,ECX                         ; 004b4c5e


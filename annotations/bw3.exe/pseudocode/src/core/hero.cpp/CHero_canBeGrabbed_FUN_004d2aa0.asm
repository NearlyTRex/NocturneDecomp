; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_canBeGrabbed_FUN_004d2aa0(CHero *this_ptr,CDemonActor *grabber,int grab_type)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   grabber
; int              Stack[0xc]:4   grab_type
;
; Referenced Globals:
;   TerminatedCString s_GETGRABBED_005c4c1d
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_004fc310
;   core_motion.cpp_CMotionList_findStateIndex_FUN_004fba50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 004d2aa0
        ;   Label: core_hero.cpp_CHero_canBeGrabbed_FUN_004d2aa0
    TEST EDX,EDX                        ; 004d2aa4
    JZ 0x004d2ab6                       ; 004d2aa6
        ;   XREF to: 004d2ab6 (CONDITIONAL_JUMP)  ; LAB_004d2ab6
    LEA EAX,[EAX]                       ; 004d2aa8
    MOV EDX,EDX                         ; 004d2aae
    PUSH EDX                            ; 004d2ab6
        ;   Label: LAB_004d2ab6
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d2ab7
    PUSH 0x5c4c1d                       ; 004d2abb | = "GETGRABBED"
    ADD EAX,0x158                       ; 004d2ac0
    PUSH EAX                            ; 004d2ac5
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004fc310 ; 004d2ac6
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004d2acb
    PUSH EAX                            ; 004d2ace
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_004fba50 ; 004d2acf
        ;   XREF to: 004fba50 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_004fba50(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004d2ad4
    TEST EAX,EAX                        ; 004d2ad7
    JGE 0x004d2ab0                      ; 004d2ad9
        ;   XREF to: 004d2ab0 (CONDITIONAL_JUMP)  ; caseD_3
    LEA EAX,[EAX]                       ; 004d2adb
    MOV ECX,ECX                         ; 004d2ade


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_hero.cpp_CHero_FUN_004f2890(CHero * this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_GETGRABBED_0062eb75
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 004f2890
        ;   Label: core_hero.cpp_CHero_FUN_004f2890
    TEST EDX,EDX                        ; 004f2894
    JZ 0x004f28a6                       ; 004f2896 | LAB_004f28a6
        ;   XREF to: 004f28a6 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 004f2898
    MOV EDX,EDX                         ; 004f289e
    PUSH EDX                            ; 004f28a6
        ;   Label: LAB_004f28a6
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f28a7
    PUSH 0x62eb75                       ; 004f28ab | = "GETGRABBED" | s_GETGRABBED_0062eb75 = GETGRABBED
    ADD EAX,0x158                       ; 004f28b0
    PUSH EAX                            ; 004f28b5
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 004f28b6 | CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004f28bb
    PUSH EAX                            ; 004f28be
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0 ; 004f28bf | int core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0(CMotionList * this_ptr)
        ;   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f28c4
    TEST EAX,EAX                        ; 004f28c7
    JGE 0x004f28a0                      ; 004f28c9
        ;   XREF to: 004f28a0 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 004f28cb
    RET                                 ; 004f28cd


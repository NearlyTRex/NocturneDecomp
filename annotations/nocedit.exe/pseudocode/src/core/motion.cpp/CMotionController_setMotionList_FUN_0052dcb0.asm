; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_motion_cpp_CMotionController_setMotionList_FUN_0052dcb0(CMotionController *this_ptr,CMotionList *motion_list)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; CMotionList *    Stack[0x8]:4   motion_list
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480 at 005a04a8
;
; Called Functions:
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052dcb0
        ;   Label: core_motion.cpp_CMotionController_setMotionList_FUN_0052dcb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0052dcb1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0052dcb5
    MOV dword ptr [EBX],EAX             ; 0052dcb9
    CMP byte ptr [EBX + 0x30],0x0       ; 0052dcbb
    JNZ 0x0052dcc3                      ; 0052dcbf
        ;   XREF to: 0052dcc3 (CONDITIONAL_JUMP)  ; LAB_0052dcc3
    POP EBX                             ; 0052dcc1
    RET                                 ; 0052dcc2
    PUSH 0x1                            ; 0052dcc3
        ;   Label: LAB_0052dcc3
    LEA EAX,[EBX + 0x30]                ; 0052dcc5
    PUSH EAX                            ; 0052dcc8
    MOV EDX,dword ptr [EBX]             ; 0052dcc9
    PUSH EDX                            ; 0052dccb
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 0052dccc
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr)
    MOV byte ptr [EBX + 0x30],0x0       ; 0052dcd1
    ADD ESP,0xc                         ; 0052dcd5
    MOV dword ptr [EBX + 0x4],EAX       ; 0052dcd8
    POP EBX                             ; 0052dcdb
    RET                                 ; 0052dcdc


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMotionList * __cdecl core_script_cpp_CCmdParse_getMotionListByParamIndex_FUN_00562860 (CCmdParse *this_ptr,int param_index)
;
; Parameters:
; CCmdParse *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_index
;
; XREF[1]:
;   core_script.cpp_editParameterValue_FUN_00562920 at 00563952
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   core_script.cpp_CCmdParse_getCharacterByParamIndex_FUN_005627f0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00562860
        ;   Label: core_script.cpp_CCmdParse_getMotionListByParamIndex_FUN_00562860
    PUSH EDX                            ; 00562864
    MOV ECX,dword ptr [ESP + 0x8]       ; 00562865
    PUSH ECX                            ; 00562869
    CALL core_script.cpp_CCmdParse_getCharacterByParamIndex_FUN_005627f0 ; 0056286a
        ;   XREF to: 005627f0 (UNCONDITIONAL_CALL)  ; CCharacter * core_script.cpp_CCmdParse_getCharacterByParamIndex_FUN_005627f0(CCmdParse * this_ptr, int param_index)
    ADD ESP,0x8                         ; 0056286f
    TEST EAX,EAX                        ; 00562872
    JNZ 0x00562877                      ; 00562874
        ;   XREF to: 00562877 (CONDITIONAL_JUMP)  ; LAB_00562877
    RET                                 ; 00562876
    ADD EAX,0x158                       ; 00562877
        ;   Label: LAB_00562877
    PUSH EAX                            ; 0056287c
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 0056287d
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00562882
    RET                                 ; 00562885


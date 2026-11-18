; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMotionList * __cdecl core_morph_cpp_CMotionList_dtor_FUN_005238f0(CMotionList *this_ptr)
;
; Parameters:
; CMotionList *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_skeleton.cpp_CSkeleton_dtor_FUN_00562e30 at 00562e50
;
; Called Functions:
;   core_morph.cpp_CMotionList_free_FUN_00523910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005238f0
        ;   Label: core_morph.cpp_CMotionList_dtor_FUN_005238f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005238f1
    PUSH EBX                            ; 005238f5
    CALL core_morph.cpp_CMotionList_free_FUN_00523910 ; 005238f6
        ;   XREF to: 00523910 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMotionList_free_FUN_00523910(CMotionList * this_ptr)
    ADD ESP,0x4                         ; 005238fb
    MOV EAX,EBX                         ; 005238fe
    POP EBX                             ; 00523900
    RET                                 ; 00523901


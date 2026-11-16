; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMotionList * __cdecl core_morph_cpp_CMotionList_dtor_FUN_004fb1f0(CMotionList *this_ptr)
;
; Parameters:
; CMotionList *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_skeleton.cpp_CSkeleton_dtor_FUN_00547a50 at 00547a70
;
; Called Functions:
;   core_morph.cpp_CMotionList_free_FUN_004fb210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fb1f0
        ;   Label: core_morph.cpp_CMotionList_dtor_FUN_004fb1f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fb1f1
    PUSH EBX                            ; 004fb1f5
    CALL core_morph.cpp_CMotionList_free_FUN_004fb210 ; 004fb1f6
        ;   XREF to: 004fb210 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMotionList_free_FUN_004fb210(CMotionList * this_ptr)
    ADD ESP,0x4                         ; 004fb1fb
    MOV EAX,EBX                         ; 004fb1fe
    POP EBX                             ; 004fb200
    RET                                 ; 004fb201


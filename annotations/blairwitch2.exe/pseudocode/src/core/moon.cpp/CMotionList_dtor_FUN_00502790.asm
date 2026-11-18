; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMotionList * __cdecl core_moon_cpp_CMotionList_dtor_FUN_00502790(CMotionList *this_ptr)
;
; Parameters:
; CMotionList *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_skeleton.cpp_CSkeleton_dtor_FUN_00540840 at 00540860
;
; Called Functions:
;   core_moon.cpp_CMotionList_free_FUN_005027b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502790
        ;   Label: core_moon.cpp_CMotionList_dtor_FUN_00502790
    MOV EBX,dword ptr [ESP + 0x8]       ; 00502791
    PUSH EBX                            ; 00502795
    CALL core_moon.cpp_CMotionList_free_FUN_005027b0 ; 00502796
        ;   XREF to: 005027b0 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMotionList_free_FUN_005027b0(CMotionList * this_ptr)
    ADD ESP,0x4                         ; 0050279b
    MOV EAX,EBX                         ; 0050279e
    POP EBX                             ; 005027a0
    RET                                 ; 005027a1


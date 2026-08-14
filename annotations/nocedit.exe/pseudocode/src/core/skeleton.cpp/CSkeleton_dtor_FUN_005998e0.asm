; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_dtor_FUN_005998e0(CSkeleton *this_ptr,uint flags)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_curtain.cpp_CVector3f_arrdtor_FUN_0044baf0
;   core_skeleton.cpp_CSkeleton_free_FUN_00599a50
;
; *****************************************************************************

section .text

    NOP                                 ; 005998e0
        ;   Label: core_skeleton.cpp_CSkeleton_dtor_FUN_005998e0
    NOP                                 ; 005998e1
    NOP                                 ; 005998e2
    NOP                                 ; 005998e3
    NOP                                 ; 005998e4
    NOP                                 ; 005998e5
    NOP                                 ; 005998e6
    NOP                                 ; 005998e7
    NOP                                 ; 005998e8
    NOP                                 ; 005998e9
    PUSH EBX                            ; 005998ea
    MOV EBX,dword ptr [ESP + 0x8]       ; 005998eb
    PUSH EBX                            ; 005998ef
    CALL core_skeleton.cpp_CSkeleton_free_FUN_00599a50 ; 005998f0
        ;   XREF to: 00599a50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CSkeleton_free_FUN_00599a50(CSkeleton * this_ptr)
    ADD ESP,0x4                         ; 005998f5
    PUSH 0x0                            ; 005998f8
    ADD EBX,0x2937c                     ; 005998fa
    PUSH EBX                            ; 00599900
    CALL core_curtain.cpp_CVector3f_arrdtor_FUN_0044baf0 ; 00599901
        ;   XREF to: 0044baf0 (UNCONDITIONAL_CALL)  ; CVector3f * core_curtain.cpp_CVector3f_arrdtor_FUN_0044baf0(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00599906
    SUB EAX,0x2937c                     ; 00599909
    POP EBX                             ; 0059990e
    RET                                 ; 0059990f


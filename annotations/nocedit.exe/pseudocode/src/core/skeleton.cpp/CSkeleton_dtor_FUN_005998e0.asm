; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_dtor_FUN_005998e0(CSkeleton *this_ptr)
;
; Parameters:
; CSkeleton *      Stack[0x8]:4   this_ptr
;
; Called Functions:
;   core_curtain.cpp_freeVectors_FUN_0044baf0
;   core_skeleton.cpp_CSkeleton_free_FUN_00599a50
;   crt_stack.c___STK_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x10                           ; 005998e0
        ;   Label: core_skeleton.cpp_CSkeleton_dtor_FUN_005998e0
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 005998e5
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c___STK_FUN_005ff9f3(uint stack_size)
    PUSH EBX                            ; 005998ea
    MOV EBX,dword ptr [ESP + 0x8]       ; 005998eb
    PUSH EBX                            ; 005998ef
    CALL core_skeleton.cpp_CSkeleton_free_FUN_00599a50 ; 005998f0
        ;   XREF to: 00599a50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CSkeleton_free_FUN_00599a50(CSkeleton * this_ptr)
    ADD ESP,0x4                         ; 005998f5
    PUSH 0x0                            ; 005998f8
    ADD EBX,0x2937c                     ; 005998fa
    PUSH EBX                            ; 00599900
    CALL core_curtain.cpp_freeVectors_FUN_0044baf0 ; 00599901
        ;   XREF to: 0044baf0 (UNCONDITIONAL_CALL)  ; void core_curtain.cpp_freeVectors_FUN_0044baf0(CVector3f * * array)
    ADD ESP,0x8                         ; 00599906
    SUB EAX,0x2937c                     ; 00599909
    POP EBX                             ; 0059990e
    RET                                 ; 0059990f


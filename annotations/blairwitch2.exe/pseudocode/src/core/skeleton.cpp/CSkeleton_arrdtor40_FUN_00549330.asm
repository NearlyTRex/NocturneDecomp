; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSkeleton * core_skeleton_cpp_CSkeleton_arrdtor40_FUN_00549330(CSkeleton *this_ptr,uint flags)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5fba10                       ; 00549330
        ;   Label: core_skeleton.cpp_CSkeleton_arrdtor40_FUN_00549330
    PUSH 0x28                           ; 00549335
    MOV EDX,dword ptr [ESP + 0xc]       ; 00549337
    PUSH EDX                            ; 0054933b
    CALL crt_memory.c___arrfini_FUN_005b854f ; 0054933c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005b854f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00549341
    RET                                 ; 00549344


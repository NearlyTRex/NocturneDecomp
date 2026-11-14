; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_arrdtor40_FUN_0056b9b0(CSkeleton *this_ptr,uint flags)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x605900                       ; 0056b9b0
        ;   Label: core_skeleton.cpp_CSkeleton_arrdtor40_FUN_0056b9b0
    PUSH 0x28                           ; 0056b9b5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056b9b7
    PUSH EDX                            ; 0056b9bb
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 0056b9bc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005c1066(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0056b9c1
    RET                                 ; 0056b9c4


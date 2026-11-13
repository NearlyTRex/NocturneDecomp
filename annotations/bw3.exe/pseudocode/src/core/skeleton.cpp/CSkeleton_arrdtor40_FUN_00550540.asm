; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_arrdtor40_FUN_00550540(CSkeleton *this_ptr,uint flags)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5e47d0                       ; 00550540
        ;   Label: core_skeleton.cpp_CSkeleton_arrdtor40_FUN_00550540
    PUSH 0x28                           ; 00550545
    MOV EDX,dword ptr [ESP + 0xc]       ; 00550547
    PUSH EDX                            ; 0055054b
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 0055054c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005a3de6(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00550551
    RET                                 ; 00550554


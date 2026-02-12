; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_arrdtor_FUN_005a1fb0(CSkeleton *objs,uint flags)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CSkeletonTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x662f10                       ; 005a1fb0 | g_CSkeletonTypeInfo
        ;   Label: core_skeleton.cpp_CSkeleton_arrdtor_FUN_005a1fb0
    PUSH 0x28                           ; 005a1fb5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a1fb7
    PUSH EDX                            ; 005a1fbb
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 005a1fbc
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005a1fc1
    RET                                 ; 005a1fc4


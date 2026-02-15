; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_skeleton_cpp_CVector3f_arrdtor_FUN_005a1ff0(CVector3f *objs,uint flags)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x6598c0                       ; 005a1ff0 | g_CVectorTypeInfo
        ;   Label: core_skeleton.cpp_CVector3f_arrdtor_FUN_005a1ff0
    PUSH 0xbb8                          ; 005a1ff5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a1ffa
    PUSH EDX                            ; 005a1ffe
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 005a1fff
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005a2004
    RET                                 ; 005a2007


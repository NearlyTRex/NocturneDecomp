; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * __cdecl core_mirror_cpp_CVector3f_arrdtor_FUN_00522c30(CVector3f *objs,uint flags)
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

    PUSH 0x6598c0                       ; 00522c30 | g_CVectorTypeInfo
        ;   Label: core_mirror.cpp_CVector3f_arrdtor_FUN_00522c30
    PUSH 0x20                           ; 00522c35
    MOV EDX,dword ptr [ESP + 0xc]       ; 00522c37
    PUSH EDX                            ; 00522c3b
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 00522c3c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00522c41
    RET                                 ; 00522c44


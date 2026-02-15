; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_set_cpp_CVector3f_arrdtor_FUN_00571510(CVector3f *objs,uint flags)
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

    PUSH 0x6598c0                       ; 00571510 | g_CVectorTypeInfo
        ;   Label: core_set.cpp_CVector3f_arrdtor_FUN_00571510
    PUSH 0xfa0                          ; 00571515
    MOV EDX,dword ptr [ESP + 0xc]       ; 0057151a
    PUSH EDX                            ; 0057151e
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 0057151f
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00571524
    RET                                 ; 00571527


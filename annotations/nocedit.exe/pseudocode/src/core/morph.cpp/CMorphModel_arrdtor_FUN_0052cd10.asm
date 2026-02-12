; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMorphModel * __cdecl core_morph_cpp_CMorphModel_arrdtor_FUN_0052cd10(CMorphModel *objs,uint flags)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_morph.cpp_CMorph_dtor_FUN_0052b330 at 0052b344
;
; Referenced Globals:
;   WatcomTypeInfo g_CMorphModelTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x661b60                       ; 0052cd10 | g_CMorphModelTypeInfo
        ;   Label: core_morph.cpp_CMorphModel_arrdtor_FUN_0052cd10
    PUSH 0x2                            ; 0052cd15
    MOV EDX,dword ptr [ESP + 0xc]       ; 0052cd17
    PUSH EDX                            ; 0052cd1b
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 0052cd1c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0052cd21
    RET                                 ; 0052cd24


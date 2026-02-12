; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SBodyPartModel * __cdecl core_bodypart_cpp_SBodyPartModel_arrdtor_FUN_0041b690(SBodyPartModel *objs,uint flags)
;
; Parameters:
; SBodyPartModel * Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_bodypart.cpp_CBodyPart_dtor_FUN_00419130 at 0041917c
;
; Referenced Globals:
;   WatcomTypeInfo g_SBodyPartModelTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65aec0                       ; 0041b690 | g_SBodyPartModelTypeInfo
        ;   Label: core_bodypart.cpp_SBodyPartModel_arrdtor_FUN_0041b690
    PUSH 0x3                            ; 0041b695
    MOV EDX,dword ptr [ESP + 0xc]       ; 0041b697
    PUSH EDX                            ; 0041b69b
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 0041b69c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0041b6a1
    RET                                 ; 0041b6a4


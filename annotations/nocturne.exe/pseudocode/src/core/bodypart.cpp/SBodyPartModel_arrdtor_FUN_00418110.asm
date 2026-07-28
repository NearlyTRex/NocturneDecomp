; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SBodyPartModel * __cdecl core_bodypart_cpp_SBodyPartModel_arrdtor_FUN_00418110(SBodyPartModel *objs,uint flags)
;
; Parameters:
; SBodyPartModel * Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_bodypart.cpp_CBodyPart_dtor_FUN_00415e40 at 00415e8c
;
; Referenced Globals:
;   WatcomTypeInfo g_SBodyPartModelTypeInfo_0059a820
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59a820                       ; 00418110 | g_SBodyPartModelTypeInfo_0059a820
        ;   Label: core_bodypart.cpp_SBodyPartModel_arrdtor_FUN_00418110
    PUSH 0x3                            ; 00418115
    MOV EDX,dword ptr [ESP + 0xc]       ; 00418117
    PUSH EDX                            ; 0041811b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0041811c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00418121
    RET                                 ; 00418124


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_arrdtor_FUN_00418130(SBodyPartFire *objs,uint flags)
;
; Parameters:
; SBodyPartFire *  Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_bodypart.cpp_CBodyPart_dtor_FUN_00415e40 at 00415e7c
;
; Referenced Globals:
;   WatcomTypeInfo g_SBodyPartFireTypeInfo_0059a840
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59a840                       ; 00418130 | g_SBodyPartFireTypeInfo_0059a840
        ;   Label: core_bodypart.cpp_SBodyPartFire_arrdtor_FUN_00418130
    PUSH 0x2                            ; 00418135
    MOV EDX,dword ptr [ESP + 0xc]       ; 00418137
    PUSH EDX                            ; 0041813b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0041813c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00418141
    RET                                 ; 00418144


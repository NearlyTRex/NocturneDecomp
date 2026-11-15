; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_arrdtor2_FUN_0041b190(SBodyPartFire *this_ptr,uint flags)
;
; Parameters:
; SBodyPartFire *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_bodypart.cpp_CBodyPart_dtor_FUN_00418c70 at 00418cac
;
; Referenced Globals:
;   WatcomTypeInfo g_SBodyPartFireTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fcbd0                       ; 0041b190 | g_SBodyPartFireTypeInfo
        ;   Label: core_bodypart.cpp_SBodyPartFire_arrdtor2_FUN_0041b190
    PUSH 0x2                            ; 0041b195
    MOV EDX,dword ptr [ESP + 0xc]       ; 0041b197
    PUSH EDX                            ; 0041b19b
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 0041b19c
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005c1066(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0041b1a1
    RET                                 ; 0041b1a4


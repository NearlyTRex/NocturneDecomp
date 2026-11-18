; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_arrdtor2_FUN_00417d10(SBodyPartFire *this_ptr,uint flags)
;
; Parameters:
; SBodyPartFire *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_bodypart.cpp_CBodyPart_dtor_FUN_00415800 at 0041583c
;
; Referenced Globals:
;   WatcomTypeInfo g_SBodyPartFireTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f37d0                       ; 00417d10 | g_SBodyPartFireTypeInfo
        ;   Label: core_bodypart.cpp_SBodyPartFire_arrdtor2_FUN_00417d10
    PUSH 0x2                            ; 00417d15
    MOV EDX,dword ptr [ESP + 0xc]       ; 00417d17
    PUSH EDX                            ; 00417d1b
    CALL crt_memory.c___arrfini_FUN_005b854f ; 00417d1c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005b854f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00417d21
    RET                                 ; 00417d24


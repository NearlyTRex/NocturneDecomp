; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMorph * __cdecl core_morph_cpp_CMorph_ctor_FUN_005b6e60(CMorph *this_ptr)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_biggs.cpp_CBiggs_ctor_FUN_00414d10 at 00414d34
;   core_mimic.cpp_CMimic_ctor_FUN_004f0310 at 004f0333
;   core_moloch.cpp_CMoloch_ctor_FUN_00501340 at 00501364
;   core_passngr.cpp_CPassenger_ctor_FUN_00511410 at 0051142b
;   core_succubus.cpp_CSuccubus_ctor_FUN_0056f2c0 at 0056f2f2
;   core_vampboss.cpp_CVampireBoss_ctor_FUN_00581530 at 0058157c
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH 0x6013c0                       ; 005b6e60
        ;   Label: core_morph.cpp_CMorph_ctor_FUN_005b6e60
    PUSH 0x2                            ; 005b6e65
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b6e67
    PUSH EDX                            ; 005b6e6b
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 005b6e6c
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005b6e71
    MOV dword ptr [EAX + 0xc28],0x1     ; 005b6e74
    RET                                 ; 005b6e7e


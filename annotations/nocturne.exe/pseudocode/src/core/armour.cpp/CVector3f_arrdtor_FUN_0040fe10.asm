; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f *objs,uint flags)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; XREF[37]:
;   core_armour.cpp_CEnemy_dtor_FUN_0040fcf0 at 0040fd29
;   core_armour.cpp_FUN_0040fc30 at 0040fc69
;   core_batcreat.cpp_FUN_004132c0 at 004132f9
;   core_batman.cpp_FUN_00414c60 at 00414c99
;   core_beast.cpp_FUN_00415250 at 00415289
;   core_biggs.cpp_FUN_00415a30 at 00415a79
;   core_boneguy.cpp_CBoneGuy_dtor_FUN_0041a400 at 0041a449
;   core_bride.cpp_CBride_dtor_FUN_00420f20 at 00420f59
;   core_bugs.cpp_FUN_00423d90 at 00423dd9
;   core_charactr.cpp_CCharacter_dtor_FUN_0042b5d0 at 0042b609
;   ... and 27 more
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5993b0                       ; 0040fe10 | g_CVectorTypeInfo_005993b0
        ;   Label: core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10
    PUSH 0xf                            ; 0040fe15
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040fe17
    PUSH EDX                            ; 0040fe1b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0040fe1c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0040fe21
    RET                                 ; 0040fe24


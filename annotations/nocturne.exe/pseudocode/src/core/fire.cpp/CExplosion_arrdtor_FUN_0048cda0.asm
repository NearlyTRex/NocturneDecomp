; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CExplosion * __cdecl core_fire_cpp_CExplosion_arrdtor_FUN_0048cda0(CExplosion *this_ptr,uint flags)
;
; Parameters:
; CExplosion *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CExplosionTypeInfo_0059d440
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d440                       ; 0048cda0 | g_CExplosionTypeInfo_0059d440
        ;   Label: core_fire.cpp_CExplosion_arrdtor_FUN_0048cda0
    PUSH 0xa                            ; 0048cda5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048cda7
    PUSH EDX                            ; 0048cdab
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048cdac
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0048cdb1
    RET                                 ; 0048cdb4


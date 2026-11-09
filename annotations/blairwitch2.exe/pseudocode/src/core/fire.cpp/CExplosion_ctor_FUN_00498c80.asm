; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CExplosion * __cdecl core_fire_cpp_CExplosion_ctor_FUN_00498c80(CExplosion *this_ptr)
;
; Parameters:
; CExplosion *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_0049c190 at 0049c303
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00498c80
        ;   Label: core_fire.cpp_CExplosion_ctor_FUN_00498c80
    MOV dword ptr [EAX + 0xc],0x0       ; 00498c84
    RET                                 ; 00498c8b


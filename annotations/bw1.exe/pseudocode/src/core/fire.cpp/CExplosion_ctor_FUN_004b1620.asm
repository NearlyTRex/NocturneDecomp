; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CExplosion * __cdecl core_fire_cpp_CExplosion_ctor_FUN_004b1620(CExplosion *this_ptr)
;
; Parameters:
; CExplosion *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_004b4b30 at 004b4c9a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b1620
        ;   Label: core_fire.cpp_CExplosion_ctor_FUN_004b1620
    MOV dword ptr [EAX + 0xc],0x0       ; 004b1624
    RET                                 ; 004b162b


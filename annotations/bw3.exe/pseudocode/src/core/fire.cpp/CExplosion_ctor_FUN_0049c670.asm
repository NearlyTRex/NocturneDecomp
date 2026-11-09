; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CExplosion * __cdecl core_fire_cpp_CExplosion_ctor_FUN_0049c670(CExplosion *this_ptr)
;
; Parameters:
; CExplosion *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_FUN_004a1480 at 004a15ee
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049c670
        ;   Label: core_fire.cpp_CExplosion_ctor_FUN_0049c670
    MOV dword ptr [EAX + 0xc],0x0       ; 0049c674
    RET                                 ; 0049c67b


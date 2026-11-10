; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gabriela_cpp_CGabriella_isWeaponDrawn_FUN_004b27f0(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b27f0
        ;   Label: core_gabriela.cpp_CGabriella_isWeaponDrawn_FUN_004b27f0
    CMP dword ptr [EAX + 0x25640],0x0   ; 004b27f4
    SETNZ AL                            ; 004b27fb
    AND EAX,0xff                        ; 004b27fe
    RET                                 ; 004b2803


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gabriela_cpp_CGabriella_isWeaponDrawn_FUN_004cb710(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cb710
        ;   Label: core_gabriela.cpp_CGabriella_isWeaponDrawn_FUN_004cb710
    CMP dword ptr [EAX + 0x1ffac],0x0   ; 004cb714
    SETNZ AL                            ; 004cb71b
    AND EAX,0xff                        ; 004cb71e
    RET                                 ; 004cb723


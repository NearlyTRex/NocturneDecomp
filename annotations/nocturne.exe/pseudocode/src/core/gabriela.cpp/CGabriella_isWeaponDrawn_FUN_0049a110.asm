; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gabriela_cpp_CGabriella_isWeaponDrawn_FUN_0049a110(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049a110
        ;   Label: core_gabriela.cpp_CGabriella_isWeaponDrawn_FUN_0049a110
    CMP dword ptr [EAX + 0x1fa3c],0x0   ; 0049a114
    SETNZ AL                            ; 0049a11b
    AND EAX,0xff                        ; 0049a11e
    RET                                 ; 0049a123


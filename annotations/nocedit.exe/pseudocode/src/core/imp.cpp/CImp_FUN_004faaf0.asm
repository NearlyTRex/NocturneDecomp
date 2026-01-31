; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_imp_cpp_CImp_FUN_004faaf0(CImp *this_ptr)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x8],0x0       ; 004faaf0
        ;   Label: core_imp.cpp_CImp_FUN_004faaf0
    SETNZ AL                            ; 004faaf5
    AND EAX,0xff                        ; 004faaf8
    RET                                 ; 004faafd


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_doc_cpp_CDoc_isWeaponDrawn_FUN_0045dc20(CDoc *this_ptr)
;
; Parameters:
; CDoc *           Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0045dc20
        ;   Label: core_doc.cpp_CDoc_isWeaponDrawn_FUN_0045dc20
    MOV EAX,dword ptr [EAX + 0x25640]   ; 0045dc24
    RET                                 ; 0045dc2a


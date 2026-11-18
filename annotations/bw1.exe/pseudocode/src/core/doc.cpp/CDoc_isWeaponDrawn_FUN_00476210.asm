; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_doc_cpp_CDoc_isWeaponDrawn_FUN_00476210(CDoc *this_ptr)
;
; Parameters:
; CDoc *           Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00476210
        ;   Label: core_doc.cpp_CDoc_isWeaponDrawn_FUN_00476210
    MOV EAX,dword ptr [EAX + 0x1ffac]   ; 00476214
    RET                                 ; 0047621a


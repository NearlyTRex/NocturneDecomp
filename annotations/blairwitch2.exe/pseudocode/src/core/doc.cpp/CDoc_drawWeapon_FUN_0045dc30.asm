; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_doc_cpp_CDoc_drawWeapon_FUN_0045dc30(CDoc *this_ptr,int param_2)
;
; Parameters:
; CDoc *           Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0045dc30
        ;   Label: core_doc.cpp_CDoc_drawWeapon_FUN_0045dc30
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045dc34
    MOV dword ptr [EDX + 0x25640],EAX   ; 0045dc38
    RET                                 ; 0045dc3e


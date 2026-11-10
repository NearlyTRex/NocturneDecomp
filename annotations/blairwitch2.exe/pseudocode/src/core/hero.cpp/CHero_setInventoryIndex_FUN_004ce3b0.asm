; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_setInventoryIndex_FUN_004ce3b0(CHero *this_ptr,int index)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
;
; XREF[1]:
;   core_doc.cpp_CDoc_setInventoryIndex_FUN_0045def0 at 0045defb
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ce3b0
        ;   Label: core_hero.cpp_CHero_setInventoryIndex_FUN_004ce3b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004ce3b4
    MOV dword ptr [EAX + 0x247e4],EDX   ; 004ce3b8
    MOV dword ptr [EAX + 0x2563c],EDX   ; 004ce3be
    RET                                 ; 004ce3c4


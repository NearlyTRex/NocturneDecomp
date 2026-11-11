; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_SPageResourceMap_ctor_FUN_004bcb10(SPageResourceMap *this_ptr,int param_2)
;
; Parameters:
; SPageResourceMap * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
;
; XREF[1]:
;   core_fldnotes.cpp_SNotesMap_paginate_FUN_004bca60 at 004bcabd
;
; Referenced Globals:
;   void* g_SPageResourceMapVTable = 004bf670
;
; Called Functions:
;   unkaddr_004b9ab0.cpp_SPageResource_ctor_FUN_004ba730
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004bcb10
        ;   Label: core_fldnotes.cpp_SPageResourceMap_ctor_FUN_004bcb10
    PUSH EDX                            ; 004bcb14
    CALL unkaddr_004b9ab0.cpp_SPageResource_ctor_FUN_004ba730 ; 004bcb15
        ;   XREF to: 004ba730 (UNCONDITIONAL_CALL)  ; void unkaddr_004b9ab0.cpp_SPageResource_ctor_FUN_004ba730(SPageResource * this_ptr)
    ADD ESP,0x4                         ; 004bcb1a
    MOV dword ptr [EAX + 0x14],0x600974 ; 004bcb1d | g_SPageResourceMapVTable
    MOV EDX,dword ptr [ESP + 0x8]       ; 004bcb24
    MOV dword ptr [EAX + 0x18],EDX      ; 004bcb28
    MOV EDX,dword ptr [EDX + 0x68]      ; 004bcb2b
    MOV dword ptr [EAX + 0x8],EDX       ; 004bcb2e
    MOV EDX,dword ptr [EAX + 0x18]      ; 004bcb31
    MOV EDX,dword ptr [EDX + 0x6c]      ; 004bcb34
    MOV dword ptr [EAX + 0xc],EDX       ; 004bcb37
    RET                                 ; 004bcb3a


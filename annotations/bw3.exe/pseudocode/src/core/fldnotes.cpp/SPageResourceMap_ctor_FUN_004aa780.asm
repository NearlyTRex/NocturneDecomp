; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_SPageResourceMap_ctor_FUN_004aa780(SPageResourceMap *this_ptr,int param_2)
;
; Parameters:
; SPageResourceMap * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
;
; XREF[1]:
;   core_fldnotes.cpp_SNotesMap_paginate_FUN_004aa6d0 at 004aa72d
;
; Referenced Globals:
;   void* g_SPageResourceMapVTable = 004ad3c0
;
; Called Functions:
;   unkaddr_004a76f0.cpp_SPageResource_ctor_FUN_004a8370
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004aa780
        ;   Label: core_fldnotes.cpp_SPageResourceMap_ctor_FUN_004aa780
    PUSH EDX                            ; 004aa784
    CALL unkaddr_004a76f0.cpp_SPageResource_ctor_FUN_004a8370 ; 004aa785
        ;   XREF to: 004a8370 (UNCONDITIONAL_CALL)  ; void unkaddr_004a76f0.cpp_SPageResource_ctor_FUN_004a8370(SPageResource * this_ptr)
    ADD ESP,0x4                         ; 004aa78a
    MOV dword ptr [EAX + 0x14],0x5e02d4 ; 004aa78d | g_SPageResourceMapVTable
    MOV EDX,dword ptr [ESP + 0x8]       ; 004aa794
    MOV dword ptr [EAX + 0x18],EDX      ; 004aa798
    MOV EDX,dword ptr [EDX + 0x68]      ; 004aa79b
    MOV dword ptr [EAX + 0x8],EDX       ; 004aa79e
    MOV EDX,dword ptr [EAX + 0x18]      ; 004aa7a1
    MOV EDX,dword ptr [EDX + 0x6c]      ; 004aa7a4
    MOV dword ptr [EAX + 0xc],EDX       ; 004aa7a7
    RET                                 ; 004aa7aa


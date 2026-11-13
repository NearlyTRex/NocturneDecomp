; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPageResourceMap * __cdecl core_fldnotes_cpp_SPageResourceMap_ctor_FUN_004a4120(SPageResourceMap *this_ptr,SNotesMap *map)
;
; Parameters:
; SPageResourceMap * Stack[0x4]:4   this_ptr
; SNotesMap *      Stack[0x8]:4   map
;
; XREF[1]:
;   core_fldnotes.cpp_SNotesMap_paginate_FUN_004a4070 at 004a40cd
;
; Referenced Globals:
;   void* g_SPageResourceMapVTable = 004a66a0
;
; Called Functions:
;   core_fldnotes.cpp_SPageResource_ctor_FUN_004a1e60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a4120
        ;   Label: core_fldnotes.cpp_SPageResourceMap_ctor_FUN_004a4120
    PUSH EDX                            ; 004a4124
    CALL core_fldnotes.cpp_SPageResource_ctor_FUN_004a1e60 ; 004a4125
        ;   XREF to: 004a1e60 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_SPageResource_ctor_FUN_004a1e60(SPageResource * this_ptr)
    ADD ESP,0x4                         ; 004a412a
    MOV dword ptr [EAX + 0x14],0x5f6f14 ; 004a412d | g_SPageResourceMapVTable
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a4134
    MOV dword ptr [EAX + 0x18],EDX      ; 004a4138
    MOV EDX,dword ptr [EDX + 0x68]      ; 004a413b
    MOV dword ptr [EAX + 0x8],EDX       ; 004a413e
    MOV EDX,dword ptr [EAX + 0x18]      ; 004a4141
    MOV EDX,dword ptr [EDX + 0x6c]      ; 004a4144
    MOV dword ptr [EAX + 0xc],EDX       ; 004a4147
    RET                                 ; 004a414a


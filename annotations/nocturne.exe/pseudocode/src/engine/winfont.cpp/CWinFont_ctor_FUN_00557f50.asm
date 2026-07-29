; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWinFont * __cdecl engine_winfont_cpp_CWinFont_ctor_FUN_00557f50(CWinFont *this_ptr,char *font_name,int font_height,int y_offset1,int y_offset2)
;
; Parameters:
; CWinFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   font_name
; int              Stack[0xc]:4   font_height
; int              Stack[0x10]:4   y_offset1
; int              Stack[0x14]:4   y_offset2
;
; XREF[1]:
;   core_dfont.cpp_FUN_0044c560 at 0044ca6a
;
; Referenced Globals:
;   void* PTR_CreateFontA_005753a4 = 0017573c
;   CFont_vtable g_CWinFontVTable
;
; Called Functions:
;   CreateFontA
;   engine_palette.cpp_CFont_ctor_FUN_004eefb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557f50
        ;   Label: engine_winfont.cpp_CWinFont_ctor_FUN_00557f50
    MOV EDX,dword ptr [ESP + 0x8]       ; 00557f51
    PUSH EDX                            ; 00557f55
    CALL engine_palette.cpp_CFont_ctor_FUN_004eefb0 ; 00557f56
        ;   XREF to: 004eefb0 (UNCONDITIONAL_CALL)  ; CFont * engine_palette.cpp_CFont_ctor_FUN_004eefb0(CFont * this_ptr)
    ADD ESP,0x4                         ; 00557f5b
    MOV ECX,dword ptr [ESP + 0xc]       ; 00557f5e
    PUSH ECX                            ; 00557f62
    PUSH 0x0                            ; 00557f63
    PUSH 0x0                            ; 00557f65
    MOV dword ptr [EAX],0x5a4484        ; 00557f67 | g_CWinFontVTable
    PUSH 0x0                            ; 00557f6d
    MOV dword ptr [EAX + 0x4],0x0       ; 00557f6f
    PUSH 0x0                            ; 00557f76
    MOV dword ptr [EAX + 0xc],0x0       ; 00557f78
    PUSH 0x1                            ; 00557f7f
    MOV dword ptr [EAX + 0x10],0x0      ; 00557f81
    PUSH 0x0                            ; 00557f88
    MOV dword ptr [EAX + 0x14],0x0      ; 00557f8a
    PUSH 0x0                            ; 00557f91
    MOV dword ptr [EAX + 0x120],0x0     ; 00557f93
    PUSH 0x0                            ; 00557f9d
    MOV dword ptr [EAX + 0x124],0x0     ; 00557f9f
    PUSH 0x190                          ; 00557fa9
    MOV dword ptr [EAX + 0x128],0x0     ; 00557fae
    PUSH 0x0                            ; 00557fb8
    MOV EBX,EAX                         ; 00557fba
    MOV dword ptr [EAX + 0x12c],0x0     ; 00557fbc
    PUSH 0x0                            ; 00557fc6
    MOV dword ptr [EAX + 0x130],0x0     ; 00557fc8
    MOV EAX,dword ptr [ESP + 0x40]      ; 00557fd2
    PUSH 0x0                            ; 00557fd6
    NEG EAX                             ; 00557fd8
    PUSH EAX                            ; 00557fda
    CALL dword ptr CS:[0x5753a4]        ; 00557fdb | PTR_CreateFontA_005753a4
    MOV dword ptr [EBX + 0xc],EAX       ; 00557fe2
    MOV EAX,dword ptr [ESP + 0x14]      ; 00557fe5
    MOV dword ptr [EBX + 0x134],EAX     ; 00557fe9
    MOV EAX,dword ptr [ESP + 0x18]      ; 00557fef
    MOV dword ptr [EBX + 0x138],EAX     ; 00557ff3
    MOV EAX,EBX                         ; 00557ff9
    POP EBX                             ; 00557ffb
    RET                                 ; 00557ffc


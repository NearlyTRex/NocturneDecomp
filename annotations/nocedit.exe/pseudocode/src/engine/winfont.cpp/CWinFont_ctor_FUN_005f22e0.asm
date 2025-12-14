; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CWinFont * engine_winfont.cpp_CWinFont_ctor_FUN_005f22e0(CWinFont * this_ptr, char * font_name, int font_height, int font_width)
;
; Parameters:
; CWinFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   font_name
; int              Stack[0xc]:4   font_height
; int              Stack[0x10]:4   font_width
;
; XREF[1]:
;   core_dfont.cpp_initFonts_FUN_004709a0 at 00470ee4
;
; Referenced Globals:
;   CreateFontA* CreateFontA = 00211776
;   CFont_vtable g_CWinFontVTable
;
; Called Functions:
;   CreateFontA
;   engine_palette.cpp_CFont_ctor_FUN_00544eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f22e0
        ;   Label: engine_winfont.cpp_CWinFont_ctor_FUN_005f22e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005f22e1
    PUSH EDX                            ; 005f22e5
    CALL engine_palette.cpp_CFont_ctor_FUN_00544eb0 ; 005f22e6
        ;   XREF to: 00544eb0 (UNCONDITIONAL_CALL)  ; CFont * engine_palette.cpp_CFont_ctor_FUN_00544eb0(CFont * this_ptr)
    ADD ESP,0x4                         ; 005f22eb
    MOV ECX,dword ptr [ESP + 0xc]       ; 005f22ee
    PUSH ECX                            ; 005f22f2
    PUSH 0x0                            ; 005f22f3
    PUSH 0x0                            ; 005f22f5
    MOV dword ptr [EAX],0x665914        ; 005f22f7 | g_CWinFontVTable
    PUSH 0x0                            ; 005f22fd
    MOV dword ptr [EAX + 0x4],0x0       ; 005f22ff
    PUSH 0x0                            ; 005f2306
    MOV dword ptr [EAX + 0xc],0x0       ; 005f2308
    PUSH 0x1                            ; 005f230f
    MOV dword ptr [EAX + 0x10],0x0      ; 005f2311
    PUSH 0x0                            ; 005f2318
    MOV dword ptr [EAX + 0x14],0x0      ; 005f231a
    PUSH 0x0                            ; 005f2321
    MOV dword ptr [EAX + 0x120],0x0     ; 005f2323
    PUSH 0x0                            ; 005f232d
    MOV dword ptr [EAX + 0x124],0x0     ; 005f232f
    PUSH 0x190                          ; 005f2339
    MOV dword ptr [EAX + 0x128],0x0     ; 005f233e
    PUSH 0x0                            ; 005f2348
    MOV EBX,EAX                         ; 005f234a
    MOV dword ptr [EAX + 0x12c],0x0     ; 005f234c
    PUSH 0x0                            ; 005f2356
    MOV dword ptr [EAX + 0x130],0x0     ; 005f2358
    MOV EAX,dword ptr [ESP + 0x40]      ; 005f2362
    PUSH 0x0                            ; 005f2366
    NEG EAX                             ; 005f2368
    PUSH EAX                            ; 005f236a
    CALL dword ptr CS:[0x6113d4]        ; 005f236b | CreateFontA
    MOV dword ptr [EBX + 0xc],EAX       ; 005f2372
    MOV EAX,dword ptr [ESP + 0x14]      ; 005f2375
    MOV dword ptr [EBX + 0x134],EAX     ; 005f2379
    MOV EAX,dword ptr [ESP + 0x18]      ; 005f237f
    MOV dword ptr [EBX + 0x138],EAX     ; 005f2383
    MOV EAX,EBX                         ; 005f2389
    POP EBX                             ; 005f238b
    RET                                 ; 005f238c


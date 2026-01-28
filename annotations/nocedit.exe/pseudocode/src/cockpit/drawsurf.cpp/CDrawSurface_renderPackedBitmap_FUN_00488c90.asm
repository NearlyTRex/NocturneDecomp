; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_renderPackedBitmap_FUN_00488c90 (CDrawSurface *this_ptr,int x_offset,int y_offset,CPackedBitmap *bitmap_ptr)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x_offset
; int              Stack[0xc]:4   y_offset
; CPackedBitmap *  Stack[0x10]:4   bitmap_ptr
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_renderIfIntersectsRect_FUN_0054adb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488c90
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_renderPackedBitmap_FUN_00488c90
    PUSH ESI                            ; 00488c91
    PUSH EDI                            ; 00488c92
    PUSH EBP                            ; 00488c93
    MOV EAX,dword ptr [ESP + 0x14]      ; 00488c94
    MOV EDX,dword ptr [ESP + 0x18]      ; 00488c98
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00488c9c
    MOV EDI,dword ptr [EAX + 0x1c]      ; 00488ca0
    MOV EBX,dword ptr [EAX + 0x8]       ; 00488ca3
    PUSH EDI                            ; 00488ca6
    MOV EBP,dword ptr [EAX + 0x18]      ; 00488ca7
    ADD EDX,EBX                         ; 00488caa
    PUSH EBP                            ; 00488cac
    MOV EBX,dword ptr [EAX + 0x14]      ; 00488cad
    MOV ESI,dword ptr [EAX + 0xc]       ; 00488cb0
    PUSH EBX                            ; 00488cb3
    ADD ECX,ESI                         ; 00488cb4
    MOV ESI,dword ptr [EAX + 0x10]      ; 00488cb6
    PUSH ESI                            ; 00488cb9
    PUSH ECX                            ; 00488cba
    PUSH EDX                            ; 00488cbb
    MOV EDI,dword ptr [ESP + 0x38]      ; 00488cbc
    PUSH EDI                            ; 00488cc0
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_renderIfIntersectsRect_FUN_0054adb0 ; 00488cc1
        ;   XREF to: 0054adb0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_renderIfIntersectsRect_FUN_0054adb0(CPackedBitmap * this_ptr, int dest_x, int dest_y, int rect_left, ...)
    ADD ESP,0x1c                        ; 00488cc6
    POP EBP                             ; 00488cc9
    POP EDI                             ; 00488cca
    POP ESI                             ; 00488ccb
    POP EBX                             ; 00488ccc
    RET                                 ; 00488ccd


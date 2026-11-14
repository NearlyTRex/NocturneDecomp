; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00480bc0(CDrawSurface *this_ptr,int x,int y,int width,char *format)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; char *           Stack[0x14]:4   format
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00481090 at 004815f1
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00480b60
;   crt_stdio.c_vsprintf_FUN_005bfb18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480bc0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00480bc0
    PUSH ESI                            ; 00480bc1
    PUSH EDI                            ; 00480bc2
    PUSH EBP                            ; 00480bc3
    SUB ESP,0x1004                      ; 00480bc4
    LEA EAX,[ESP + 0x102c]              ; 00480bca
    MOV dword ptr [ESP + 0x1000],EAX    ; 00480bd1
    LEA EAX,[ESP + 0x1000]              ; 00480bd8
    PUSH EAX                            ; 00480bdf
    MOV EDX,dword ptr [ESP + 0x102c]    ; 00480be0
    PUSH EDX                            ; 00480be7
    LEA EAX,[ESP + 0x8]                 ; 00480be8
    PUSH EAX                            ; 00480bec
    CALL crt_stdio.c_vsprintf_FUN_005bfb18 ; 00480bed
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005bfb18(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00480bf2
    MOV EBX,dword ptr [ESP + 0x1024]    ; 00480bf5
    PUSH EBX                            ; 00480bfc
    MOV ESI,dword ptr [ESP + 0x1024]    ; 00480bfd
    PUSH ESI                            ; 00480c04
    MOV EDI,dword ptr [ESP + 0x1024]    ; 00480c05
    PUSH EDI                            ; 00480c0c
    LEA EAX,[ESP + 0xc]                 ; 00480c0d
    PUSH EAX                            ; 00480c11
    MOV EBP,dword ptr [ESP + 0x1028]    ; 00480c12
    XOR ECX,ECX                         ; 00480c19
    PUSH EBP                            ; 00480c1b
    MOV dword ptr [ESP + 0x1014],ECX    ; 00480c1c
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00480b60 ; 00480c23
        ;   XREF to: 00480b60 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00480b60(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x14                        ; 00480c28
    ADD ESP,0x1004                      ; 00480c2b
    POP EBP                             ; 00480c31
    POP EDI                             ; 00480c32
    POP ESI                             ; 00480c33
    POP EBX                             ; 00480c34
    RET                                 ; 00480c35


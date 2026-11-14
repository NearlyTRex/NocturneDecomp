; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00480d90(CDrawSurface *this_ptr,int x,int width,int y,int height,char *format)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   y
; int              Stack[0x14]:4   height
; char *           Stack[0x18]:4   format
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00481090 at 0048165f
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_00480d20
;   crt_stdio.c_vsprintf_FUN_005bfb18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480d90
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00480d90
    PUSH ESI                            ; 00480d91
    PUSH EDI                            ; 00480d92
    PUSH EBP                            ; 00480d93
    SUB ESP,0x1004                      ; 00480d94
    LEA EAX,[ESP + 0x1030]              ; 00480d9a
    MOV dword ptr [ESP + 0x1000],EAX    ; 00480da1
    LEA EAX,[ESP + 0x1000]              ; 00480da8
    PUSH EAX                            ; 00480daf
    MOV EDX,dword ptr [ESP + 0x1030]    ; 00480db0
    PUSH EDX                            ; 00480db7
    LEA EAX,[ESP + 0x8]                 ; 00480db8
    PUSH EAX                            ; 00480dbc
    CALL crt_stdio.c_vsprintf_FUN_005bfb18 ; 00480dbd
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005bfb18(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00480dc2
    MOV EBX,dword ptr [ESP + 0x1028]    ; 00480dc5
    PUSH EBX                            ; 00480dcc
    MOV ESI,dword ptr [ESP + 0x1028]    ; 00480dcd
    PUSH ESI                            ; 00480dd4
    MOV EDI,dword ptr [ESP + 0x1028]    ; 00480dd5
    PUSH EDI                            ; 00480ddc
    MOV EBP,dword ptr [ESP + 0x1028]    ; 00480ddd
    PUSH EBP                            ; 00480de4
    LEA EAX,[ESP + 0x10]                ; 00480de5
    PUSH EAX                            ; 00480de9
    MOV EAX,dword ptr [ESP + 0x102c]    ; 00480dea
    XOR ECX,ECX                         ; 00480df1
    PUSH EAX                            ; 00480df3
    MOV dword ptr [ESP + 0x1018],ECX    ; 00480df4
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_00480d20 ; 00480dfb
        ;   XREF to: 00480d20 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_00480d20(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x18                        ; 00480e00
    ADD ESP,0x1004                      ; 00480e03
    POP EBP                             ; 00480e09
    POP EDI                             ; 00480e0a
    POP ESI                             ; 00480e0b
    POP EBX                             ; 00480e0c
    RET                                 ; 00480e0d


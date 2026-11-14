; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_004685e0(CDrawSurface *this_ptr,int x,int y,char *format)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; char *           Stack[0x10]:4   format
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00468b80 at 0046909a
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00468580
;   crt_stdio.c_vsprintf_FUN_005b7768
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004685e0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_004685e0
    PUSH ESI                            ; 004685e1
    PUSH EDI                            ; 004685e2
    SUB ESP,0x1004                      ; 004685e3
    LEA EAX,[ESP + 0x1024]              ; 004685e9
    MOV dword ptr [ESP + 0x1000],EAX    ; 004685f0
    LEA EAX,[ESP + 0x1000]              ; 004685f7
    PUSH EAX                            ; 004685fe
    MOV EDX,dword ptr [ESP + 0x1024]    ; 004685ff
    PUSH EDX                            ; 00468606
    LEA EAX,[ESP + 0x8]                 ; 00468607
    PUSH EAX                            ; 0046860b
    CALL crt_stdio.c_vsprintf_FUN_005b7768 ; 0046860c
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005b7768(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00468611
    MOV EBX,dword ptr [ESP + 0x101c]    ; 00468614
    PUSH EBX                            ; 0046861b
    MOV ESI,dword ptr [ESP + 0x101c]    ; 0046861c
    PUSH ESI                            ; 00468623
    LEA EAX,[ESP + 0x8]                 ; 00468624
    PUSH EAX                            ; 00468628
    MOV EDI,dword ptr [ESP + 0x1020]    ; 00468629
    XOR ECX,ECX                         ; 00468630
    PUSH EDI                            ; 00468632
    MOV dword ptr [ESP + 0x1010],ECX    ; 00468633
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00468580 ; 0046863a
        ;   XREF to: 00468580 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00468580(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 0046863f
    ADD ESP,0x1004                      ; 00468642
    POP EDI                             ; 00468648
    POP ESI                             ; 00468649
    POP EBX                             ; 0046864a
    RET                                 ; 0046864b


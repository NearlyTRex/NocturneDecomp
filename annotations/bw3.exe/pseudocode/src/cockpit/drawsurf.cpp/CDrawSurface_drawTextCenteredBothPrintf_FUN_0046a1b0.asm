; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_0046a1b0(CDrawSurface *this_ptr,int x,int y,char *format)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; char *           Stack[0x10]:4   format
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0046a750 at 0046ac6a
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_0046a150
;   crt_stdio.c_vsprintf_FUN_005a2898
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a1b0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_0046a1b0
    PUSH ESI                            ; 0046a1b1
    PUSH EDI                            ; 0046a1b2
    SUB ESP,0x1004                      ; 0046a1b3
    LEA EAX,[ESP + 0x1024]              ; 0046a1b9
    MOV dword ptr [ESP + 0x1000],EAX    ; 0046a1c0
    LEA EAX,[ESP + 0x1000]              ; 0046a1c7
    PUSH EAX                            ; 0046a1ce
    MOV EDX,dword ptr [ESP + 0x1024]    ; 0046a1cf
    PUSH EDX                            ; 0046a1d6
    LEA EAX,[ESP + 0x8]                 ; 0046a1d7
    PUSH EAX                            ; 0046a1db
    CALL crt_stdio.c_vsprintf_FUN_005a2898 ; 0046a1dc
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005a2898(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 0046a1e1
    MOV EBX,dword ptr [ESP + 0x101c]    ; 0046a1e4
    PUSH EBX                            ; 0046a1eb
    MOV ESI,dword ptr [ESP + 0x101c]    ; 0046a1ec
    PUSH ESI                            ; 0046a1f3
    LEA EAX,[ESP + 0x8]                 ; 0046a1f4
    PUSH EAX                            ; 0046a1f8
    MOV EDI,dword ptr [ESP + 0x1020]    ; 0046a1f9
    XOR ECX,ECX                         ; 0046a200
    PUSH EDI                            ; 0046a202
    MOV dword ptr [ESP + 0x1010],ECX    ; 0046a203
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_0046a150 ; 0046a20a
        ;   XREF to: 0046a150 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_0046a150(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 0046a20f
    ADD ESP,0x1004                      ; 0046a212
    POP EDI                             ; 0046a218
    POP ESI                             ; 0046a219
    POP EBX                             ; 0046a21a
    RET                                 ; 0046a21b


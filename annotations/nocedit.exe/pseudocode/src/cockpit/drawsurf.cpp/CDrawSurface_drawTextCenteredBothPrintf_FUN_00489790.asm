; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_00489790(CDrawSurface *this_ptr,int x,int y,char *format,...)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; char *           Stack[0x14]:4   format
; Local Variables:
; char[4096]       Stack[-0x1010]:4096  local_1010
; va_list_t        Stack[-0x10]:4  local_10
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 at 0048a24a
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00489730
;   crt_stdio.c__vsprintf_FUN_005fdba8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489790
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_00489790
    PUSH ESI                            ; 00489791
    PUSH EDI                            ; 00489792
    SUB ESP,0x1004                      ; 00489793
    LEA EAX,[ESP + 0x1024]              ; 00489799
    MOV dword ptr [ESP + 0x1000],EAX    ; 004897a0
    LEA EAX,[ESP + 0x1000]              ; 004897a7
    PUSH EAX                            ; 004897ae
    MOV EDX,dword ptr [ESP + 0x1024]    ; 004897af
    PUSH EDX                            ; 004897b6
    LEA EAX,[ESP + 0x8]                 ; 004897b7
    PUSH EAX                            ; 004897bb
    CALL crt_stdio.c__vsprintf_FUN_005fdba8 ; 004897bc
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 004897c1
    MOV EBX,dword ptr [ESP + 0x101c]    ; 004897c4
    PUSH EBX                            ; 004897cb
    MOV ESI,dword ptr [ESP + 0x101c]    ; 004897cc
    PUSH ESI                            ; 004897d3
    LEA EAX,[ESP + 0x8]                 ; 004897d4
    PUSH EAX                            ; 004897d8
    MOV EDI,dword ptr [ESP + 0x1020]    ; 004897d9
    XOR ECX,ECX                         ; 004897e0
    PUSH EDI                            ; 004897e2
    MOV dword ptr [ESP + 0x1010],ECX    ; 004897e3
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00489730 ; 004897ea
        ;   XREF to: 00489730 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00489730(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 004897ef
    ADD ESP,0x1004                      ; 004897f2
    POP EDI                             ; 004897f8
    POP ESI                             ; 004897f9
    POP EBX                             ; 004897fa
    RET                                 ; 004897fb


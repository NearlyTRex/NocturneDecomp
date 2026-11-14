; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00468790(CDrawSurface *this_ptr,int x,int y,int height,char *format)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   height
; char *           Stack[0x14]:4   format
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00468b80 at 00469121
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_00468730
;   crt_stdio.c_vsprintf_FUN_005b7768
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468790
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00468790
    PUSH ESI                            ; 00468791
    PUSH EDI                            ; 00468792
    PUSH EBP                            ; 00468793
    SUB ESP,0x1004                      ; 00468794
    LEA EAX,[ESP + 0x102c]              ; 0046879a
    MOV dword ptr [ESP + 0x1000],EAX    ; 004687a1
    LEA EAX,[ESP + 0x1000]              ; 004687a8
    PUSH EAX                            ; 004687af
    MOV EDX,dword ptr [ESP + 0x102c]    ; 004687b0
    PUSH EDX                            ; 004687b7
    LEA EAX,[ESP + 0x8]                 ; 004687b8
    PUSH EAX                            ; 004687bc
    CALL crt_stdio.c_vsprintf_FUN_005b7768 ; 004687bd
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005b7768(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 004687c2
    MOV EBX,dword ptr [ESP + 0x1024]    ; 004687c5
    PUSH EBX                            ; 004687cc
    MOV ESI,dword ptr [ESP + 0x1024]    ; 004687cd
    PUSH ESI                            ; 004687d4
    MOV EDI,dword ptr [ESP + 0x1024]    ; 004687d5
    PUSH EDI                            ; 004687dc
    LEA EAX,[ESP + 0xc]                 ; 004687dd
    PUSH EAX                            ; 004687e1
    MOV EBP,dword ptr [ESP + 0x1028]    ; 004687e2
    XOR ECX,ECX                         ; 004687e9
    PUSH EBP                            ; 004687eb
    MOV dword ptr [ESP + 0x1014],ECX    ; 004687ec
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_00468730 ; 004687f3
        ;   XREF to: 00468730 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_00468730(CDrawSurface * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x14                        ; 004687f8
    ADD ESP,0x1004                      ; 004687fb
    POP EBP                             ; 00468801
    POP EDI                             ; 00468802
    POP ESI                             ; 00468803
    POP EBX                             ; 00468804
    RET                                 ; 00468805


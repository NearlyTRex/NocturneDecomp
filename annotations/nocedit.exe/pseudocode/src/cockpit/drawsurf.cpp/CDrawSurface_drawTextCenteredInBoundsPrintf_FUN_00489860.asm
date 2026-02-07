; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860 (CDrawSurface *this_ptr,int x,int y,int width,char *format,...)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; char *           Stack[0x18]:4   format
; Local Variables:
; char[4096]       Stack[-0x1014]:4096  local_1014
; va_list_t        Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 at 0048a291
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800
;   crt_stdio.c_vsprintf_FUN_005fdba8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489860
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860
    PUSH ESI                            ; 00489861
    PUSH EDI                            ; 00489862
    PUSH EBP                            ; 00489863
    SUB ESP,0x1004                      ; 00489864
    LEA EAX,[ESP + 0x102c]              ; 0048986a
    MOV dword ptr [ESP + 0x1000],EAX    ; 00489871
    LEA EAX,[ESP + 0x1000]              ; 00489878
    PUSH EAX                            ; 0048987f
    MOV EDX,dword ptr [ESP + 0x102c]    ; 00489880
    PUSH EDX                            ; 00489887
    LEA EAX,[ESP + 0x8]                 ; 00489888
    PUSH EAX                            ; 0048988c
    CALL crt_stdio.c_vsprintf_FUN_005fdba8 ; 0048988d
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00489892
    MOV EBX,dword ptr [ESP + 0x1024]    ; 00489895
    PUSH EBX                            ; 0048989c
    MOV ESI,dword ptr [ESP + 0x1024]    ; 0048989d
    PUSH ESI                            ; 004898a4
    MOV EDI,dword ptr [ESP + 0x1024]    ; 004898a5
    PUSH EDI                            ; 004898ac
    LEA EAX,[ESP + 0xc]                 ; 004898ad
    PUSH EAX                            ; 004898b1
    MOV EBP,dword ptr [ESP + 0x1028]    ; 004898b2
    XOR ECX,ECX                         ; 004898b9
    PUSH EBP                            ; 004898bb
    MOV dword ptr [ESP + 0x1014],ECX    ; 004898bc
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800 ; 004898c3
        ;   XREF to: 00489800 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x14                        ; 004898c8
    ADD ESP,0x1004                      ; 004898cb
    POP EBP                             ; 004898d1
    POP EDI                             ; 004898d2
    POP ESI                             ; 004898d3
    POP EBX                             ; 004898d4
    RET                                 ; 004898d5


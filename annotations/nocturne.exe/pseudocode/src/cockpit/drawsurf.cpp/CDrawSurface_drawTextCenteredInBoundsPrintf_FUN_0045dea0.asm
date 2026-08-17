; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_0045dea0(CDrawSurface *this_ptr,int x,int y,int width,char *format,...)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; char *           Stack[0x14]:4   format
; Local Variables:
; undefined        Stack[-0x1014]:1  local_1014
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0045e370 at 0045e8d1
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_0045de40
;   crt_stdio.c_vsprintf_FUN_00563a08
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045dea0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_0045dea0
    PUSH ESI                            ; 0045dea1
    PUSH EDI                            ; 0045dea2
    PUSH EBP                            ; 0045dea3
    SUB ESP,0x1004                      ; 0045dea4
    LEA EAX,[ESP + 0x102c]              ; 0045deaa
    MOV dword ptr [ESP + 0x1000],EAX    ; 0045deb1
    LEA EAX,[ESP + 0x1000]              ; 0045deb8
    PUSH EAX                            ; 0045debf
    MOV EDX,dword ptr [ESP + 0x102c]    ; 0045dec0
    PUSH EDX                            ; 0045dec7
    LEA EAX,[ESP + 0x8]                 ; 0045dec8
    PUSH EAX                            ; 0045decc
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 0045decd
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_00563a08(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 0045ded2
    MOV EBX,dword ptr [ESP + 0x1024]    ; 0045ded5
    PUSH EBX                            ; 0045dedc
    MOV ESI,dword ptr [ESP + 0x1024]    ; 0045dedd
    PUSH ESI                            ; 0045dee4
    MOV EDI,dword ptr [ESP + 0x1024]    ; 0045dee5
    PUSH EDI                            ; 0045deec
    LEA EAX,[ESP + 0xc]                 ; 0045deed
    PUSH EAX                            ; 0045def1
    MOV EBP,dword ptr [ESP + 0x1028]    ; 0045def2
    XOR ECX,ECX                         ; 0045def9
    PUSH EBP                            ; 0045defb
    MOV dword ptr [ESP + 0x1014],ECX    ; 0045defc
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_0045de40 ; 0045df03
        ;   XREF to: 0045de40 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_0045de40(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x14                        ; 0045df08
    ADD ESP,0x1004                      ; 0045df0b
    POP EBP                             ; 0045df11
    POP EDI                             ; 0045df12
    POP ESI                             ; 0045df13
    POP EBX                             ; 0045df14
    RET                                 ; 0045df15


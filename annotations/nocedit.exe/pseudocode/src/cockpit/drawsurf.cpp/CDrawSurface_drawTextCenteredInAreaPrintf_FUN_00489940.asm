; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940(CDrawSurface *this_ptr,int x,int y,int height,char *format,...)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   height
; char *           Stack[0x14]:4   format
; Local Variables:
; char[4096]       Stack[-0x1014]:4096  local_1014
; va_list_t        Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 at 0048a2d1
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0
;   crt_stdio.c__vsprintf_FUN_005fdba8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489940
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940
    PUSH ESI                            ; 00489941
    PUSH EDI                            ; 00489942
    PUSH EBP                            ; 00489943
    SUB ESP,0x1004                      ; 00489944
    LEA EAX,[ESP + 0x102c]              ; 0048994a
    MOV dword ptr [ESP + 0x1000],EAX    ; 00489951
    LEA EAX,[ESP + 0x1000]              ; 00489958
    PUSH EAX                            ; 0048995f
    MOV EDX,dword ptr [ESP + 0x102c]    ; 00489960
    PUSH EDX                            ; 00489967
    LEA EAX,[ESP + 0x8]                 ; 00489968
    PUSH EAX                            ; 0048996c
    CALL crt_stdio.c__vsprintf_FUN_005fdba8 ; 0048996d
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00489972
    MOV EBX,dword ptr [ESP + 0x1024]    ; 00489975
    PUSH EBX                            ; 0048997c
    MOV ESI,dword ptr [ESP + 0x1024]    ; 0048997d
    PUSH ESI                            ; 00489984
    MOV EDI,dword ptr [ESP + 0x1024]    ; 00489985
    PUSH EDI                            ; 0048998c
    LEA EAX,[ESP + 0xc]                 ; 0048998d
    PUSH EAX                            ; 00489991
    MOV EBP,dword ptr [ESP + 0x1028]    ; 00489992
    XOR ECX,ECX                         ; 00489999
    PUSH EBP                            ; 0048999b
    MOV dword ptr [ESP + 0x1014],ECX    ; 0048999c
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0 ; 004899a3
        ;   XREF to: 004898e0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0(CDrawSurface * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x14                        ; 004899a8
    ADD ESP,0x1004                      ; 004899ab
    POP EBP                             ; 004899b1
    POP EDI                             ; 004899b2
    POP ESI                             ; 004899b3
    POP EBX                             ; 004899b4
    RET                                 ; 004899b5


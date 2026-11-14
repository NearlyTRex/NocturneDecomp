; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredPrintf_FUN_0046a010(CDrawSurface *this_ptr,int x,int y,char *format)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; char *           Stack[0x10]:4   format
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0046a750 at 0046ac15
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_00469fb0
;   crt_stdio.c_vsprintf_FUN_005a2898
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a010
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredPrintf_FUN_0046a010
    PUSH ESI                            ; 0046a011
    PUSH EDI                            ; 0046a012
    SUB ESP,0x1004                      ; 0046a013
    LEA EAX,[ESP + 0x1024]              ; 0046a019
    MOV dword ptr [ESP + 0x1000],EAX    ; 0046a020
    LEA EAX,[ESP + 0x1000]              ; 0046a027
    PUSH EAX                            ; 0046a02e
    MOV EDX,dword ptr [ESP + 0x1024]    ; 0046a02f
    PUSH EDX                            ; 0046a036
    LEA EAX,[ESP + 0x8]                 ; 0046a037
    PUSH EAX                            ; 0046a03b
    CALL crt_stdio.c_vsprintf_FUN_005a2898 ; 0046a03c
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005a2898(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 0046a041
    MOV EBX,dword ptr [ESP + 0x101c]    ; 0046a044
    PUSH EBX                            ; 0046a04b
    MOV ESI,dword ptr [ESP + 0x101c]    ; 0046a04c
    PUSH ESI                            ; 0046a053
    LEA EAX,[ESP + 0x8]                 ; 0046a054
    PUSH EAX                            ; 0046a058
    MOV EDI,dword ptr [ESP + 0x1020]    ; 0046a059
    XOR ECX,ECX                         ; 0046a060
    PUSH EDI                            ; 0046a062
    MOV dword ptr [ESP + 0x1010],ECX    ; 0046a063
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_00469fb0 ; 0046a06a
        ;   XREF to: 00469fb0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_00469fb0(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 0046a06f
    ADD ESP,0x1004                      ; 0046a072
    POP EDI                             ; 0046a078
    POP ESI                             ; 0046a079
    POP EBX                             ; 0046a07a
    RET                                 ; 0046a07b


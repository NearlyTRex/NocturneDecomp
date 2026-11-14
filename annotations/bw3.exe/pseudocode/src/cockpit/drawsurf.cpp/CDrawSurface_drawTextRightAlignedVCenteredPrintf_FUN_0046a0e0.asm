; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_0046a0e0(CDrawSurface *this_ptr,int x,int y,char *format)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; char *           Stack[0x10]:4   format
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0046a750 at 0046ac38
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_0046a080
;   crt_stdio.c_vsprintf_FUN_005a2898
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a0e0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_0046a0e0
    PUSH ESI                            ; 0046a0e1
    PUSH EDI                            ; 0046a0e2
    SUB ESP,0x1004                      ; 0046a0e3
    LEA EAX,[ESP + 0x1024]              ; 0046a0e9
    MOV dword ptr [ESP + 0x1000],EAX    ; 0046a0f0
    LEA EAX,[ESP + 0x1000]              ; 0046a0f7
    PUSH EAX                            ; 0046a0fe
    MOV EDX,dword ptr [ESP + 0x1024]    ; 0046a0ff
    PUSH EDX                            ; 0046a106
    LEA EAX,[ESP + 0x8]                 ; 0046a107
    PUSH EAX                            ; 0046a10b
    CALL crt_stdio.c_vsprintf_FUN_005a2898 ; 0046a10c
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005a2898(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 0046a111
    MOV EBX,dword ptr [ESP + 0x101c]    ; 0046a114
    PUSH EBX                            ; 0046a11b
    MOV ESI,dword ptr [ESP + 0x101c]    ; 0046a11c
    PUSH ESI                            ; 0046a123
    LEA EAX,[ESP + 0x8]                 ; 0046a124
    PUSH EAX                            ; 0046a128
    MOV EDI,dword ptr [ESP + 0x1020]    ; 0046a129
    XOR ECX,ECX                         ; 0046a130
    PUSH EDI                            ; 0046a132
    MOV dword ptr [ESP + 0x1010],ECX    ; 0046a133
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_0046a080 ; 0046a13a
        ;   XREF to: 0046a080 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_0046a080(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 0046a13f
    ADD ESP,0x1004                      ; 0046a142
    POP EDI                             ; 0046a148
    POP ESI                             ; 0046a149
    POP EBX                             ; 0046a14a
    RET                                 ; 0046a14b


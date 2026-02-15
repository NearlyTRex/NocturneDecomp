; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520(CDrawSurface *this_ptr,int x,int y,char *format,...)
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
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 at 0048a1d4
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_004894c0
;   crt_stdio.c__vsprintf_FUN_005fdba8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489520
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520
    PUSH ESI                            ; 00489521
    PUSH EDI                            ; 00489522
    SUB ESP,0x1004                      ; 00489523
    LEA EAX,[ESP + 0x1024]              ; 00489529
    MOV dword ptr [ESP + 0x1000],EAX    ; 00489530
    LEA EAX,[ESP + 0x1000]              ; 00489537
    PUSH EAX                            ; 0048953e
    MOV EDX,dword ptr [ESP + 0x1024]    ; 0048953f
    PUSH EDX                            ; 00489546
    LEA EAX,[ESP + 0x8]                 ; 00489547
    PUSH EAX                            ; 0048954b
    CALL crt_stdio.c__vsprintf_FUN_005fdba8 ; 0048954c
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00489551
    MOV EBX,dword ptr [ESP + 0x101c]    ; 00489554
    PUSH EBX                            ; 0048955b
    MOV ESI,dword ptr [ESP + 0x101c]    ; 0048955c
    PUSH ESI                            ; 00489563
    LEA EAX,[ESP + 0x8]                 ; 00489564
    PUSH EAX                            ; 00489568
    MOV EDI,dword ptr [ESP + 0x1020]    ; 00489569
    XOR ECX,ECX                         ; 00489570
    PUSH EDI                            ; 00489572
    MOV dword ptr [ESP + 0x1010],ECX    ; 00489573
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_004894c0 ; 0048957a
        ;   XREF to: 004894c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_004894c0(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 0048957f
    ADD ESP,0x1004                      ; 00489582
    POP EDI                             ; 00489588
    POP ESI                             ; 00489589
    POP EBX                             ; 0048958a
    RET                                 ; 0048958b


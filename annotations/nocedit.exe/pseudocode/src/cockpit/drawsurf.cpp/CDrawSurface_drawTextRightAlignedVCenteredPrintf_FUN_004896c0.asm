; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_004896c0(CDrawSurface * this_ptr, int x, int y, int height, char * format, ...)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   height
; char *           Stack[0x14]:4   format
; Local Variables:
; undefined        Stack[-0x1010]:1  local_1010
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 at 0048a218
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_00489660
;   crt_stdio.c_vsprintf_FUN_005fdba8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004896c0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_004896c0
    PUSH ESI                            ; 004896c1
    PUSH EDI                            ; 004896c2
    SUB ESP,0x1004                      ; 004896c3
    LEA EAX,[ESP + 0x1024]              ; 004896c9
    MOV dword ptr [ESP + 0x1000],EAX    ; 004896d0
    LEA EAX,[ESP + 0x1000]              ; 004896d7
    PUSH EAX                            ; 004896de
    MOV EDX,dword ptr [ESP + 0x1024]    ; 004896df
    PUSH EDX                            ; 004896e6
    LEA EAX,[ESP + 0x8]                 ; 004896e7
    PUSH EAX                            ; 004896eb
    CALL crt_stdio.c_vsprintf_FUN_005fdba8 ; 004896ec | int crt_stdio.c_vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t * args)
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004896f1
    MOV EBX,dword ptr [ESP + 0x101c]    ; 004896f4
    PUSH EBX                            ; 004896fb
    MOV ESI,dword ptr [ESP + 0x101c]    ; 004896fc
    PUSH ESI                            ; 00489703
    LEA EAX,[ESP + 0x8]                 ; 00489704
    PUSH EAX                            ; 00489708
    MOV EDI,dword ptr [ESP + 0x1020]    ; 00489709
    XOR ECX,ECX                         ; 00489710
    PUSH EDI                            ; 00489712
    MOV dword ptr [ESP + 0x1010],ECX    ; 00489713
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_00489660 ; 0048971a | void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_00489660(CDrawSurface * this_ptr, int x, int y, int height, ...)
        ;   XREF to: 00489660 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0048971f
    ADD ESP,0x1004                      ; 00489722
    POP EDI                             ; 00489728
    POP ESI                             ; 00489729
    POP EBX                             ; 0048972a
    RET                                 ; 0048972b


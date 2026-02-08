; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450 (CDrawSurface *this_ptr,int x,int y,char *format,...)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; char *           Stack[0x10]:4   format
; Local Variables:
; char[4096]       Stack[-0x1010]:4096  local_1010
; va_list_t        Stack[-0x10]:4  local_10
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 at 0048a1b0
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0
;   crt_stdio.c__vsprintf_FUN_005fdba8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489450
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450
    PUSH ESI                            ; 00489451
    PUSH EDI                            ; 00489452
    SUB ESP,0x1004                      ; 00489453
    LEA EAX,[ESP + 0x1024]              ; 00489459
    MOV dword ptr [ESP + 0x1000],EAX    ; 00489460
    LEA EAX,[ESP + 0x1000]              ; 00489467
    PUSH EAX                            ; 0048946e
    MOV EDX,dword ptr [ESP + 0x1024]    ; 0048946f
    PUSH EDX                            ; 00489476
    LEA EAX,[ESP + 0x8]                 ; 00489477
    PUSH EAX                            ; 0048947b
    CALL crt_stdio.c__vsprintf_FUN_005fdba8 ; 0048947c
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00489481
    MOV EBX,dword ptr [ESP + 0x101c]    ; 00489484
    PUSH EBX                            ; 0048948b
    MOV ESI,dword ptr [ESP + 0x101c]    ; 0048948c
    PUSH ESI                            ; 00489493
    LEA EAX,[ESP + 0x8]                 ; 00489494
    PUSH EAX                            ; 00489498
    MOV EDI,dword ptr [ESP + 0x1020]    ; 00489499
    XOR ECX,ECX                         ; 004894a0
    PUSH EDI                            ; 004894a2
    MOV dword ptr [ESP + 0x1010],ECX    ; 004894a3
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0 ; 004894aa
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 004894af
    ADD ESP,0x1004                      ; 004894b2
    POP EDI                             ; 004894b8
    POP ESI                             ; 004894b9
    POP EBX                             ; 004894ba
    RET                                 ; 004894bb


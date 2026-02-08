; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0 (CDrawSurface *this_ptr,int x,int y,char *format,...)
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
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 at 0048a1f5
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_00489590
;   crt_stdio.c__vsprintf_FUN_005fdba8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004895f0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0
    PUSH ESI                            ; 004895f1
    PUSH EDI                            ; 004895f2
    SUB ESP,0x1004                      ; 004895f3
    LEA EAX,[ESP + 0x1024]              ; 004895f9
    MOV dword ptr [ESP + 0x1000],EAX    ; 00489600
    LEA EAX,[ESP + 0x1000]              ; 00489607
    PUSH EAX                            ; 0048960e
    MOV EDX,dword ptr [ESP + 0x1024]    ; 0048960f
    PUSH EDX                            ; 00489616
    LEA EAX,[ESP + 0x8]                 ; 00489617
    PUSH EAX                            ; 0048961b
    CALL crt_stdio.c__vsprintf_FUN_005fdba8 ; 0048961c
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00489621
    MOV EBX,dword ptr [ESP + 0x101c]    ; 00489624
    PUSH EBX                            ; 0048962b
    MOV ESI,dword ptr [ESP + 0x101c]    ; 0048962c
    PUSH ESI                            ; 00489633
    LEA EAX,[ESP + 0x8]                 ; 00489634
    PUSH EAX                            ; 00489638
    MOV EDI,dword ptr [ESP + 0x1020]    ; 00489639
    XOR ECX,ECX                         ; 00489640
    PUSH EDI                            ; 00489642
    MOV dword ptr [ESP + 0x1010],ECX    ; 00489643
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_00489590 ; 0048964a
        ;   XREF to: 00489590 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_00489590(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 0048964f
    ADD ESP,0x1004                      ; 00489652
    POP EDI                             ; 00489658
    POP ESI                             ; 00489659
    POP EBX                             ; 0048965a
    RET                                 ; 0048965b


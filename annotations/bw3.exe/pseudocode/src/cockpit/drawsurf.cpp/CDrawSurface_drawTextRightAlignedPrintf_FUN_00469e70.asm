; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00469e70(CDrawSurface *this_ptr,int x,int y,char *format)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; char *           Stack[0x10]:4   format
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0046a750 at 0046abd0
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00469e10
;   crt_stdio.c_vsprintf_FUN_005a2898
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469e70
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00469e70
    PUSH ESI                            ; 00469e71
    PUSH EDI                            ; 00469e72
    SUB ESP,0x1004                      ; 00469e73
    LEA EAX,[ESP + 0x1024]              ; 00469e79
    MOV dword ptr [ESP + 0x1000],EAX    ; 00469e80
    LEA EAX,[ESP + 0x1000]              ; 00469e87
    PUSH EAX                            ; 00469e8e
    MOV EDX,dword ptr [ESP + 0x1024]    ; 00469e8f
    PUSH EDX                            ; 00469e96
    LEA EAX,[ESP + 0x8]                 ; 00469e97
    PUSH EAX                            ; 00469e9b
    CALL crt_stdio.c_vsprintf_FUN_005a2898 ; 00469e9c
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005a2898(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00469ea1
    MOV EBX,dword ptr [ESP + 0x101c]    ; 00469ea4
    PUSH EBX                            ; 00469eab
    MOV ESI,dword ptr [ESP + 0x101c]    ; 00469eac
    PUSH ESI                            ; 00469eb3
    LEA EAX,[ESP + 0x8]                 ; 00469eb4
    PUSH EAX                            ; 00469eb8
    MOV EDI,dword ptr [ESP + 0x1020]    ; 00469eb9
    XOR ECX,ECX                         ; 00469ec0
    PUSH EDI                            ; 00469ec2
    MOV dword ptr [ESP + 0x1010],ECX    ; 00469ec3
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00469e10 ; 00469eca
        ;   XREF to: 00469e10 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00469e10(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 00469ecf
    ADD ESP,0x1004                      ; 00469ed2
    POP EDI                             ; 00469ed8
    POP ESI                             ; 00469ed9
    POP EBX                             ; 00469eda
    RET                                 ; 00469edb


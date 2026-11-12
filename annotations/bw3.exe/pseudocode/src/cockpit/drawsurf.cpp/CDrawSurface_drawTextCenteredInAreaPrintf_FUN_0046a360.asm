; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_0046a360(CDrawSurface *this_ptr,int x,int y,int height,char *format)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   height
; char *           Stack[0x14]:4   format
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0046a750 at 0046acf1
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_0046a300
;   crt_stdio.c_vsprintf_FUN_005a2898
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a360
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_0046a360
    PUSH ESI                            ; 0046a361
    PUSH EDI                            ; 0046a362
    PUSH EBP                            ; 0046a363
    SUB ESP,0x1004                      ; 0046a364
    LEA EAX,[ESP + 0x102c]              ; 0046a36a
    MOV dword ptr [ESP + 0x1000],EAX    ; 0046a371
    LEA EAX,[ESP + 0x1000]              ; 0046a378
    PUSH EAX                            ; 0046a37f
    MOV EDX,dword ptr [ESP + 0x102c]    ; 0046a380
    PUSH EDX                            ; 0046a387
    LEA EAX,[ESP + 0x8]                 ; 0046a388
    PUSH EAX                            ; 0046a38c
    CALL crt_stdio.c_vsprintf_FUN_005a2898 ; 0046a38d
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005a2898(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 0046a392
    MOV EBX,dword ptr [ESP + 0x1024]    ; 0046a395
    PUSH EBX                            ; 0046a39c
    MOV ESI,dword ptr [ESP + 0x1024]    ; 0046a39d
    PUSH ESI                            ; 0046a3a4
    MOV EDI,dword ptr [ESP + 0x1024]    ; 0046a3a5
    PUSH EDI                            ; 0046a3ac
    LEA EAX,[ESP + 0xc]                 ; 0046a3ad
    PUSH EAX                            ; 0046a3b1
    MOV EBP,dword ptr [ESP + 0x1028]    ; 0046a3b2
    XOR ECX,ECX                         ; 0046a3b9
    PUSH EBP                            ; 0046a3bb
    MOV dword ptr [ESP + 0x1014],ECX    ; 0046a3bc
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_0046a300 ; 0046a3c3
        ;   XREF to: 0046a300 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_0046a300(CDrawSurface * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x14                        ; 0046a3c8
    ADD ESP,0x1004                      ; 0046a3cb
    POP EBP                             ; 0046a3d1
    POP EDI                             ; 0046a3d2
    POP ESI                             ; 0046a3d3
    POP EBX                             ; 0046a3d4
    RET                                 ; 0046a3d5


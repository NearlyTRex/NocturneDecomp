; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00468880(CDrawSurface *this_ptr,int x,int width,int y,int height,char *format)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   y
; int              Stack[0x14]:4   height
; char *           Stack[0x18]:4   format
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00468b80 at 0046914f
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_00468810
;   crt_stdio.c_vsprintf_FUN_005b7768
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468880
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00468880
    PUSH ESI                            ; 00468881
    PUSH EDI                            ; 00468882
    PUSH EBP                            ; 00468883
    SUB ESP,0x1004                      ; 00468884
    LEA EAX,[ESP + 0x1030]              ; 0046888a
    MOV dword ptr [ESP + 0x1000],EAX    ; 00468891
    LEA EAX,[ESP + 0x1000]              ; 00468898
    PUSH EAX                            ; 0046889f
    MOV EDX,dword ptr [ESP + 0x1030]    ; 004688a0
    PUSH EDX                            ; 004688a7
    LEA EAX,[ESP + 0x8]                 ; 004688a8
    PUSH EAX                            ; 004688ac
    CALL crt_stdio.c_vsprintf_FUN_005b7768 ; 004688ad
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005b7768(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 004688b2
    MOV EBX,dword ptr [ESP + 0x1028]    ; 004688b5
    PUSH EBX                            ; 004688bc
    MOV ESI,dword ptr [ESP + 0x1028]    ; 004688bd
    PUSH ESI                            ; 004688c4
    MOV EDI,dword ptr [ESP + 0x1028]    ; 004688c5
    PUSH EDI                            ; 004688cc
    MOV EBP,dword ptr [ESP + 0x1028]    ; 004688cd
    PUSH EBP                            ; 004688d4
    LEA EAX,[ESP + 0x10]                ; 004688d5
    PUSH EAX                            ; 004688d9
    MOV EAX,dword ptr [ESP + 0x102c]    ; 004688da
    XOR ECX,ECX                         ; 004688e1
    PUSH EAX                            ; 004688e3
    MOV dword ptr [ESP + 0x1018],ECX    ; 004688e4
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_00468810 ; 004688eb
        ;   XREF to: 00468810 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_00468810(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x18                        ; 004688f0
    ADD ESP,0x1004                      ; 004688f3
    POP EBP                             ; 004688f9
    POP EDI                             ; 004688fa
    POP ESI                             ; 004688fb
    POP EBX                             ; 004688fc
    RET                                 ; 004688fd


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00489a30(CDrawSurface * this_ptr, int x, int y, int width, int height, char * format, ...)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
; char *           Stack[0x18]:4   format
; Local Variables:
; undefined        Stack[-0x1014]:1  local_1014
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 at 0048a2ff
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0
;   crt_stdio.c_vsprintf_FUN_005fdba8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489a30
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00489a30
    PUSH ESI                            ; 00489a31
    PUSH EDI                            ; 00489a32
    PUSH EBP                            ; 00489a33
    SUB ESP,0x1004                      ; 00489a34
    LEA EAX,[ESP + 0x1030]              ; 00489a3a
    MOV dword ptr [ESP + 0x1000],EAX    ; 00489a41
    LEA EAX,[ESP + 0x1000]              ; 00489a48
    PUSH EAX                            ; 00489a4f
    MOV EDX,dword ptr [ESP + 0x1030]    ; 00489a50
    PUSH EDX                            ; 00489a57
    LEA EAX,[ESP + 0x8]                 ; 00489a58
    PUSH EAX                            ; 00489a5c
    CALL crt_stdio.c_vsprintf_FUN_005fdba8 ; 00489a5d
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t * args)
    ADD ESP,0xc                         ; 00489a62
    MOV EBX,dword ptr [ESP + 0x1028]    ; 00489a65
    PUSH EBX                            ; 00489a6c
    MOV ESI,dword ptr [ESP + 0x1028]    ; 00489a6d
    PUSH ESI                            ; 00489a74
    MOV EDI,dword ptr [ESP + 0x1028]    ; 00489a75
    PUSH EDI                            ; 00489a7c
    MOV EBP,dword ptr [ESP + 0x1028]    ; 00489a7d
    PUSH EBP                            ; 00489a84
    LEA EAX,[ESP + 0x10]                ; 00489a85
    PUSH EAX                            ; 00489a89
    MOV EAX,dword ptr [ESP + 0x102c]    ; 00489a8a
    XOR ECX,ECX                         ; 00489a91
    PUSH EAX                            ; 00489a93
    MOV dword ptr [ESP + 0x1018],ECX    ; 00489a94
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0 ; 00489a9b
        ;   XREF to: 004899c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 00489aa0
    ADD ESP,0x1004                      ; 00489aa3
    POP EBP                             ; 00489aa9
    POP EDI                             ; 00489aaa
    POP ESI                             ; 00489aab
    POP EBX                             ; 00489aac
    RET                                 ; 00489aad


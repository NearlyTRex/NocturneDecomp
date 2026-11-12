; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00468a90(CDrawSurface *this_ptr,char *format)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   format
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00468b80 at 0046916c
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00468a70
;   crt_stdio.c_vsprintf_FUN_005b7768
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468a90
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00468a90
    SUB ESP,0x1004                      ; 00468a91
    LEA EAX,[ESP + 0x1014]              ; 00468a97
    MOV dword ptr [ESP + 0x1000],EAX    ; 00468a9e
    LEA EAX,[ESP + 0x1000]              ; 00468aa5
    PUSH EAX                            ; 00468aac
    MOV EDX,dword ptr [ESP + 0x1014]    ; 00468aad
    PUSH EDX                            ; 00468ab4
    LEA EAX,[ESP + 0x8]                 ; 00468ab5
    PUSH EAX                            ; 00468ab9
    CALL crt_stdio.c_vsprintf_FUN_005b7768 ; 00468aba
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005b7768(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00468abf
    MOV EAX,ESP                         ; 00468ac2
    PUSH EAX                            ; 00468ac4
    MOV EBX,dword ptr [ESP + 0x1010]    ; 00468ac5
    XOR ECX,ECX                         ; 00468acc
    PUSH EBX                            ; 00468ace
    MOV dword ptr [ESP + 0x1008],ECX    ; 00468acf
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00468a70 ; 00468ad6
        ;   XREF to: 00468a70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00468a70(CDrawSurface * this_ptr, char * text)
    ADD ESP,0x8                         ; 00468adb
    ADD ESP,0x1004                      ; 00468ade
    POP EBX                             ; 00468ae4
    RET                                 ; 00468ae5


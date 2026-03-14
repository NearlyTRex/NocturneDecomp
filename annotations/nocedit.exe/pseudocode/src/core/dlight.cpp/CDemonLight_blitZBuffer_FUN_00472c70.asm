; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_blitZBuffer_FUN_00472c70(CDemonLight *this_ptr,CRect *source_rect)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; CRect *          Stack[0x8]:4   source_rect
;
; XREF[1]:
;   core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80 at 004731b7
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_0061efc4
;   TerminatedCString s_CDemonLight_blitZBuffer__0061efd7
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dstrender.cpp_memcpyMMX_FUN_00492001
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00472c70
        ;   Label: core_dlight.cpp_CDemonLight_blitZBuffer_FUN_00472c70
    PUSH ESI                            ; 00472c71
    PUSH EDI                            ; 00472c72
    PUSH EBP                            ; 00472c73
    MOV EBP,dword ptr [ESP + 0x14]      ; 00472c74
    MOV ESI,dword ptr [ESP + 0x18]      ; 00472c78
    CMP dword ptr [EBP + 0x2f9c],0x0    ; 00472c7c
    JZ 0x00472d05                       ; 00472c83
        ;   XREF to: 00472d05 (CONDITIONAL_JUMP)  ; LAB_00472d05
    MOV EDI,dword ptr [EBP + 0x11d4]    ; 00472c89
        ;   Label: LAB_00472c89
    CMP EDI,dword ptr [ESI + 0x4]       ; 00472c8f
    JGE 0x00472d00                      ; 00472c92
        ;   XREF to: 00472d00 (CONDITIONAL_JUMP)  ; LAB_00472d00
    MOV EDX,dword ptr [EBP + 0x11d8]    ; 00472c98
    CMP EDX,dword ptr [ESI + 0xc]       ; 00472c9e
    JGE 0x00472d00                      ; 00472ca1
        ;   XREF to: 00472d00 (CONDITIONAL_JUMP)  ; LAB_00472d00
    MOV ECX,dword ptr [EBP + 0x11dc]    ; 00472ca3
    CMP ECX,dword ptr [ESI]             ; 00472ca9
    JLE 0x00472d00                      ; 00472cab
        ;   XREF to: 00472d00 (CONDITIONAL_JUMP)  ; LAB_00472d00
    MOV EBX,dword ptr [EBP + 0x11e0]    ; 00472cad
    MOV EAX,dword ptr [ESI + 0x8]       ; 00472cb3
    CMP EAX,EBX                         ; 00472cb6
    JGE 0x00472d00                      ; 00472cb8
        ;   XREF to: 00472d00 (CONDITIONAL_JUMP)  ; LAB_00472d00
    MOV EDI,EAX                         ; 00472cba
    CMP EDI,dword ptr [ESI + 0xc]       ; 00472cbc
    JG 0x00472d00                       ; 00472cbf
        ;   XREF to: 00472d00 (CONDITIONAL_JUMP)  ; LAB_00472d00
    MOV EAX,dword ptr [EBP + 0x1cc0]    ; 00472cc1
        ;   Label: LAB_00472cc1
    IMUL EAX,EDI                        ; 00472cc7
    ADD EAX,dword ptr [ESI]             ; 00472cca
    MOV EDX,dword ptr [EBP + 0x2f94]    ; 00472ccc
    ADD EAX,EAX                         ; 00472cd2
    LEA ECX,[EDX + EAX*0x1]             ; 00472cd4
    MOV EDX,dword ptr [EBP + 0x2f9c]    ; 00472cd7
    MOV EBX,dword ptr [ESI]             ; 00472cdd
    ADD EDX,EAX                         ; 00472cdf
    MOV EAX,dword ptr [ESI + 0x4]       ; 00472ce1
    SUB EAX,EBX                         ; 00472ce4
    ADD EAX,EAX                         ; 00472ce6
    ADD EAX,0x2                         ; 00472ce8
    PUSH EAX                            ; 00472ceb
    PUSH EDX                            ; 00472cec
    PUSH ECX                            ; 00472ced
    INC EDI                             ; 00472cee
    CALL core_dstrender.cpp_memcpyMMX_FUN_00492001 ; 00472cef
        ;   XREF to: 00492001 (UNCONDITIONAL_CALL)  ; void core_dstrender.cpp_memcpyMMX_FUN_00492001(void * dest, void * src, int byte_count)
    MOV EAX,dword ptr [ESI + 0xc]       ; 00472cf4
    ADD ESP,0xc                         ; 00472cf7
    CMP EDI,EAX                         ; 00472cfa
    JLE 0x00472cc1                      ; 00472cfc
        ;   XREF to: 00472cc1 (CONDITIONAL_JUMP)  ; LAB_00472cc1
    MOV EAX,EAX                         ; 00472cfe
    POP EBP                             ; 00472d00
        ;   Label: LAB_00472d00
    POP EDI                             ; 00472d01
    POP ESI                             ; 00472d02
    POP EBX                             ; 00472d03
    RET                                 ; 00472d04
    MOV ECX,0x61efc4                    ; 00472d05 | = "..\\core\\dlight.cpp"
        ;   Label: LAB_00472d05
    MOV EBX,0x147                       ; 00472d0a
    PUSH 0x61efd7                       ; 00472d0f | = "CDemonLight::blitZBuffer - No master ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00472d14 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00472d1a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00472d20
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00472d25
    JMP 0x00472c89                      ; 00472d28
        ;   XREF to: 00472c89 (UNCONDITIONAL_JUMP)  ; LAB_00472c89


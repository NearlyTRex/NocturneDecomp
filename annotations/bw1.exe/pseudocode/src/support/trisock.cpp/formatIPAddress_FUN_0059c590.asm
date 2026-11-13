; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trisock_cpp_formatIPAddress_FUN_0059c590(uchar *ip_bytes,char *output_buffer)
;
; Parameters:
; uchar *          Stack[0x4]:4   ip_bytes
; char *           Stack[0x8]:4   output_buffer
;
; XREF[3]:
;   core_netgame.cpp_CNetGame_runLobby_FUN_0052e120 at 0052e493
;   support_trisock.cpp_FUN_0059daf0 at 0059dcfa
;   support_trisock.cpp_formatSocketAddress_FUN_0059c830 at 0059c83c
;
; Referenced Globals:
;   TerminatedCString s_d_d_d_d_005f8316
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005bfb40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059c590
        ;   Label: support_trisock.cpp_formatIPAddress_FUN_0059c590
    XOR EDX,EDX                         ; 0059c594
    MOV DL,byte ptr [EAX + 0x3]         ; 0059c596
    PUSH EDX                            ; 0059c599
    XOR EDX,EDX                         ; 0059c59a
    MOV DL,byte ptr [EAX + 0x2]         ; 0059c59c
    PUSH EDX                            ; 0059c59f
    XOR EDX,EDX                         ; 0059c5a0
    MOV DL,byte ptr [EAX + 0x1]         ; 0059c5a2
    PUSH EDX                            ; 0059c5a5
    MOV AL,byte ptr [EAX]               ; 0059c5a6
    AND EAX,0xff                        ; 0059c5a8
    PUSH EAX                            ; 0059c5ad
    PUSH 0x5f8316                       ; 0059c5ae | = "%d.%d.%d.%d"
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0059c5b3
    PUSH EDX                            ; 0059c5b7
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059c5b8
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x18                        ; 0059c5bd
    RET                                 ; 0059c5c0


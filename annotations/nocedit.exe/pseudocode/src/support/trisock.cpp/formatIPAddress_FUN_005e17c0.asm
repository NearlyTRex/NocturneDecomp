; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl support_trisock_cpp_formatIPAddress_FUN_005e17c0(char *output_buffer,uchar *ip_bytes)
;
; Parameters:
; char *           Stack[0x4]:4   output_buffer
; uchar *          Stack[0x8]:4   ip_bytes
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_FUN_00541390 at 00541704
;   support_trisock.cpp_formatSocketAddress_FUN_005e1a30 at 005e1a3c
;
; Referenced Globals:
;   TerminatedCString s_d_d_d_d_006564dc
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005e17c0
        ;   Label: support_trisock.cpp_formatIPAddress_FUN_005e17c0
    XOR EDX,EDX                         ; 005e17c4
    MOV DL,byte ptr [EAX + 0x3]         ; 005e17c6
    PUSH EDX                            ; 005e17c9
    XOR EDX,EDX                         ; 005e17ca
    MOV DL,byte ptr [EAX + 0x2]         ; 005e17cc
    PUSH EDX                            ; 005e17cf
    XOR EDX,EDX                         ; 005e17d0
    MOV DL,byte ptr [EAX + 0x1]         ; 005e17d2
    PUSH EDX                            ; 005e17d5
    MOV AL,byte ptr [EAX]               ; 005e17d6
    AND EAX,0xff                        ; 005e17d8
    PUSH EAX                            ; 005e17dd
    PUSH 0x6564dc                       ; 005e17de | = "%d.%d.%d.%d"
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005e17e3
    PUSH EDX                            ; 005e17e7
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005e17e8
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x18                        ; 005e17ed
    RET                                 ; 005e17f0


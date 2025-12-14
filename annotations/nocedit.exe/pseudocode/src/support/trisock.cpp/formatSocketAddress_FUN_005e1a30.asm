; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void support_trisock.cpp_formatSocketAddress_FUN_005e1a30(char * output_buffer, SNetworkAddr * network_addr)
;
; Parameters:
; char *           Stack[0x4]:4   output_buffer
; SNetworkAddr *   Stack[0x8]:4   network_addr
;
; Referenced Globals:
;   TerminatedCString s_d_0065652e
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   support_trisock.cpp_formatIPAddress_FUN_005e17c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e1a30
        ;   Label: support_trisock.cpp_formatSocketAddress_FUN_005e1a30
    PUSH ESI                            ; 005e1a31
    MOV ESI,dword ptr [ESP + 0xc]       ; 005e1a32
    MOV EBX,dword ptr [ESP + 0x10]      ; 005e1a36
    PUSH EBX                            ; 005e1a3a
    PUSH ESI                            ; 005e1a3b
    CALL support_trisock.cpp_formatIPAddress_FUN_005e17c0 ; 005e1a3c
        ;   XREF to: 005e17c0 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_formatIPAddress_FUN_005e17c0(char * output_buffer, uchar * ip_bytes)
    ADD ESP,0x8                         ; 005e1a41
    MOV SI,word ptr [ESI + 0x4]         ; 005e1a44
    AND ESI,0xffff                      ; 005e1a48
    PUSH ESI                            ; 005e1a4e
    PUSH 0x65652e                       ; 005e1a4f | = ":%d"
    XOR DL,DL                           ; 005e1a54
    MOV ESI,EBX                         ; 005e1a56
    MOV AL,byte ptr [ESI]               ; 005e1a58
        ;   Label: LAB_005e1a58
    CMP AL,DL                           ; 005e1a5a
    JZ 0x005e1a70                       ; 005e1a5c
        ;   XREF to: 005e1a70 (CONDITIONAL_JUMP)  ; LAB_005e1a70
    CMP AL,0x0                          ; 005e1a5e
    JZ 0x005e1a6e                       ; 005e1a60
        ;   XREF to: 005e1a6e (CONDITIONAL_JUMP)  ; LAB_005e1a6e
    INC ESI                             ; 005e1a62
    MOV AL,byte ptr [ESI]               ; 005e1a63
    CMP AL,DL                           ; 005e1a65
    JZ 0x005e1a70                       ; 005e1a67
        ;   XREF to: 005e1a70 (CONDITIONAL_JUMP)  ; LAB_005e1a70
    INC ESI                             ; 005e1a69
    CMP AL,0x0                          ; 005e1a6a
    JNZ 0x005e1a58                      ; 005e1a6c
        ;   XREF to: 005e1a58 (CONDITIONAL_JUMP)  ; LAB_005e1a58
    SUB ESI,ESI                         ; 005e1a6e
        ;   Label: LAB_005e1a6e
    PUSH ESI                            ; 005e1a70
        ;   Label: LAB_005e1a70
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005e1a71
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005e1a76
    POP ESI                             ; 005e1a79
    POP EBX                             ; 005e1a7a
    RET                                 ; 005e1a7b


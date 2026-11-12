; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trisock_cpp_formatSocketAddress_FUN_0056f820(uchar *param_1,char *param_2)
;
;
; XREF[2]:
;   support_trisock.cpp_FUN_0056fef0 at 0056ffeb
;   support_trisock.cpp_FUN_00571340 at 00571c10
;
; Referenced Globals:
;   undefined4 DAT_005d68d7
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005a28c0
;   support_trisock.cpp_formatIPAddress_FUN_0056f580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f820
        ;   Label: support_trisock.cpp_formatSocketAddress_FUN_0056f820
    PUSH ESI                            ; 0056f821
    MOV ESI,dword ptr [ESP + 0xc]       ; 0056f822
    MOV EBX,dword ptr [ESP + 0x10]      ; 0056f826
    PUSH EBX                            ; 0056f82a
    PUSH ESI                            ; 0056f82b
    CALL support_trisock.cpp_formatIPAddress_FUN_0056f580 ; 0056f82c
        ;   XREF to: 0056f580 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_formatIPAddress_FUN_0056f580(uchar * ip_bytes, char * output_buffer)
    ADD ESP,0x8                         ; 0056f831
    MOV SI,word ptr [ESI + 0x4]         ; 0056f834
    AND ESI,0xffff                      ; 0056f838
    PUSH ESI                            ; 0056f83e
    PUSH 0x5d68d7                       ; 0056f83f | DAT_005d68d7
    XOR DL,DL                           ; 0056f844
    MOV ESI,EBX                         ; 0056f846
    MOV AL,byte ptr [ESI]               ; 0056f848
        ;   Label: LAB_0056f848
    CMP AL,DL                           ; 0056f84a
    JZ 0x0056f860                       ; 0056f84c
        ;   XREF to: 0056f860 (CONDITIONAL_JUMP)  ; LAB_0056f860
    CMP AL,0x0                          ; 0056f84e
    JZ 0x0056f85e                       ; 0056f850
        ;   XREF to: 0056f85e (CONDITIONAL_JUMP)  ; LAB_0056f85e
    INC ESI                             ; 0056f852
    MOV AL,byte ptr [ESI]               ; 0056f853
    CMP AL,DL                           ; 0056f855
    JZ 0x0056f860                       ; 0056f857
        ;   XREF to: 0056f860 (CONDITIONAL_JUMP)  ; LAB_0056f860
    INC ESI                             ; 0056f859
    CMP AL,0x0                          ; 0056f85a
    JNZ 0x0056f848                      ; 0056f85c
        ;   XREF to: 0056f848 (CONDITIONAL_JUMP)  ; LAB_0056f848
    SUB ESI,ESI                         ; 0056f85e
        ;   Label: LAB_0056f85e
    PUSH ESI                            ; 0056f860
        ;   Label: LAB_0056f860
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0056f861
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0056f866
    POP ESI                             ; 0056f869
    POP EBX                             ; 0056f86a
    RET                                 ; 0056f86b


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trisock_cpp_formatSocketAddress_FUN_00578f50(SNetworkAddr *network_addr,char *output_buffer)
;
; Parameters:
; SNetworkAddr *   Stack[0x4]:4   network_addr
; char *           Stack[0x8]:4   output_buffer
;
; XREF[2]:
;   support_trisock.cpp_FUN_00579890 at 0057998b
;   support_trisock.cpp_FUN_0057ad10 at 0057b504
;
; Referenced Globals:
;   undefined4 DAT_005ed04e
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005b7790
;   support_trisock.cpp_formatIPAddress_FUN_00578cb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578f50
        ;   Label: support_trisock.cpp_formatSocketAddress_FUN_00578f50
    PUSH ESI                            ; 00578f51
    MOV ESI,dword ptr [ESP + 0xc]       ; 00578f52
    MOV EBX,dword ptr [ESP + 0x10]      ; 00578f56
    PUSH EBX                            ; 00578f5a
    PUSH ESI                            ; 00578f5b
    CALL support_trisock.cpp_formatIPAddress_FUN_00578cb0 ; 00578f5c
        ;   XREF to: 00578cb0 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_formatIPAddress_FUN_00578cb0(uchar * ip_bytes, char * output_buffer)
    ADD ESP,0x8                         ; 00578f61
    MOV SI,word ptr [ESI + 0x4]         ; 00578f64
    AND ESI,0xffff                      ; 00578f68
    PUSH ESI                            ; 00578f6e
    PUSH 0x5ed04e                       ; 00578f6f | DAT_005ed04e
    XOR DL,DL                           ; 00578f74
    MOV ESI,EBX                         ; 00578f76
    MOV AL,byte ptr [ESI]               ; 00578f78
        ;   Label: LAB_00578f78
    CMP AL,DL                           ; 00578f7a
    JZ 0x00578f90                       ; 00578f7c
        ;   XREF to: 00578f90 (CONDITIONAL_JUMP)  ; LAB_00578f90
    CMP AL,0x0                          ; 00578f7e
    JZ 0x00578f8e                       ; 00578f80
        ;   XREF to: 00578f8e (CONDITIONAL_JUMP)  ; LAB_00578f8e
    INC ESI                             ; 00578f82
    MOV AL,byte ptr [ESI]               ; 00578f83
    CMP AL,DL                           ; 00578f85
    JZ 0x00578f90                       ; 00578f87
        ;   XREF to: 00578f90 (CONDITIONAL_JUMP)  ; LAB_00578f90
    INC ESI                             ; 00578f89
    CMP AL,0x0                          ; 00578f8a
    JNZ 0x00578f78                      ; 00578f8c
        ;   XREF to: 00578f78 (CONDITIONAL_JUMP)  ; LAB_00578f78
    SUB ESI,ESI                         ; 00578f8e
        ;   Label: LAB_00578f8e
    PUSH ESI                            ; 00578f90
        ;   Label: LAB_00578f90
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00578f91
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 00578f96
    POP ESI                             ; 00578f99
    POP EBX                             ; 00578f9a
    RET                                 ; 00578f9b


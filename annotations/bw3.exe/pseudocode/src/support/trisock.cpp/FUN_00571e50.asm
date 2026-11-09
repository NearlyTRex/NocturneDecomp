; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint support_trisock_cpp_FUN_00571e50(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   support_trisock.cpp_FUN_00571d80
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00571e50
        ;   Label: support_trisock.cpp_FUN_00571e50
    MOV EAX,dword ptr [ESP + 0x8]       ; 00571e51
    MOV ECX,dword ptr [EAX + 0xa14]     ; 00571e55
    MOV EDX,dword ptr [EAX + 0xa10]     ; 00571e5b
    CMP EDX,ECX                         ; 00571e61
    JGE 0x00571e83                      ; 00571e63
        ;   XREF to: 00571e83 (CONDITIONAL_JUMP)  ; LAB_00571e83
    MOV DL,byte ptr [EDX + EAX*0x1 + 0x610] ; 00571e65
    MOV ESI,dword ptr [EAX + 0xa10]     ; 00571e6c
    INC ESI                             ; 00571e72
    AND EDX,0xff                        ; 00571e73
    MOV dword ptr [EAX + 0xa10],ESI     ; 00571e79
    MOV EAX,EDX                         ; 00571e7f
    POP ESI                             ; 00571e81
    RET                                 ; 00571e82
    PUSH EBX                            ; 00571e83
        ;   Label: LAB_00571e83
    MOV EBX,dword ptr [ESP + 0x10]      ; 00571e84
    PUSH EBX                            ; 00571e88
    PUSH EAX                            ; 00571e89
    CALL support_trisock.cpp_FUN_00571d80 ; 00571e8a
        ;   XREF to: 00571d80 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00571d80()
    ADD ESP,0x8                         ; 00571e8f
    MOV EDX,EAX                         ; 00571e92
    POP EBX                             ; 00571e94
    MOV EAX,EDX                         ; 00571e95
    POP ESI                             ; 00571e97
    RET                                 ; 00571e98


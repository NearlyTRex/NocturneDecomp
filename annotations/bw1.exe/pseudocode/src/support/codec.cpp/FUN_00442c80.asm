; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_FUN_00442c80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5)
;
;
; Called Functions:
;   support_trstream.cpp_COutStreamMemory_ctorOpen_FUN_005a1ad0
;   support_trstream.cpp_COutStreamMemory_dtor_FUN_005a1b60
;   support_trstream.cpp_COutStreamMemory_tell_FUN_005a1d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442c80
        ;   Label: support_codec.cpp_FUN_00442c80
    PUSH ESI                            ; 00442c81
    PUSH EDI                            ; 00442c82
    SUB ESP,0x18                        ; 00442c83
    MOV ESI,dword ptr [ESP + 0x28]      ; 00442c86
    MOV EDI,dword ptr [ESP + 0x34]      ; 00442c8a
    MOV EDX,dword ptr [EDI]             ; 00442c8e
    PUSH EDX                            ; 00442c90
    MOV ECX,dword ptr [ESP + 0x34]      ; 00442c91
    PUSH ECX                            ; 00442c95
    LEA EAX,[ESP + 0x8]                 ; 00442c96
    PUSH EAX                            ; 00442c9a
    CALL support_trstream.cpp_COutStreamMemory_ctorOpen_FUN_005a1ad0 ; 00442c9b
        ;   XREF to: 005a1ad0 (UNCONDITIONAL_CALL)  ; undefined4 * support_trstream.cpp_COutStreamMemory_ctorOpen_FUN_005a1ad0(COutStreamMemory * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 00442ca0
    MOV EBX,ESP                         ; 00442ca3
    PUSH EBX                            ; 00442ca5
    MOV EBX,dword ptr [ESP + 0x30]      ; 00442ca6
    PUSH EBX                            ; 00442caa
    MOV EAX,dword ptr [ESI]             ; 00442cab
    PUSH ESI                            ; 00442cad
    CALL dword ptr [EAX + 0x8]          ; 00442cae
    ADD ESP,0xc                         ; 00442cb1
    MOV EBX,EAX                         ; 00442cb4
    CMP EAX,0x1                         ; 00442cb6
    JNZ 0x00442cfe                      ; 00442cb9
        ;   XREF to: 00442cfe (CONDITIONAL_JUMP)  ; LAB_00442cfe
    CMP dword ptr [ESP + 0x38],0x0      ; 00442cbb
    JNZ 0x00442ceb                      ; 00442cc0
        ;   XREF to: 00442ceb (CONDITIONAL_JUMP)  ; LAB_00442ceb
    MOV EAX,ESP                         ; 00442cc2
        ;   Label: LAB_00442cc2
    PUSH EAX                            ; 00442cc4
    CALL support_trstream.cpp_COutStreamMemory_tell_FUN_005a1d10 ; 00442cc5
        ;   XREF to: 005a1d10 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_COutStreamMemory_tell_FUN_005a1d10(COutStreamMemory * this_ptr)
    ADD ESP,0x4                         ; 00442cca
    MOV EDX,dword ptr [EDI]             ; 00442ccd
    PUSH 0x0                            ; 00442ccf
    SUB EDX,EAX                         ; 00442cd1
    LEA EAX,[ESP + 0x4]                 ; 00442cd3
    PUSH EAX                            ; 00442cd7
    MOV dword ptr [EDI],EDX             ; 00442cd8
    CALL support_trstream.cpp_COutStreamMemory_dtor_FUN_005a1b60 ; 00442cda
        ;   XREF to: 005a1b60 (UNCONDITIONAL_CALL)  ; COutStreamMemory * support_trstream.cpp_COutStreamMemory_dtor_FUN_005a1b60(COutStreamMemory * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00442cdf
    MOV EAX,EBX                         ; 00442ce2
    ADD ESP,0x18                        ; 00442ce4
    POP EDI                             ; 00442ce7
    POP ESI                             ; 00442ce8
    POP EBX                             ; 00442ce9
    RET                                 ; 00442cea
    MOV EAX,ESP                         ; 00442ceb
        ;   Label: LAB_00442ceb
    PUSH EAX                            ; 00442ced
    MOV EBX,dword ptr [ESI]             ; 00442cee
    PUSH ESI                            ; 00442cf0
    CALL dword ptr [EBX + 0xc]          ; 00442cf1
    ADD ESP,0x8                         ; 00442cf4
    MOV EBX,EAX                         ; 00442cf7
    CMP EAX,0x1                         ; 00442cf9
    JZ 0x00442cc2                       ; 00442cfc
        ;   XREF to: 00442cc2 (CONDITIONAL_JUMP)  ; LAB_00442cc2
    XOR EBX,EAX                         ; 00442cfe
        ;   Label: LAB_00442cfe
    JMP 0x00442cc2                      ; 00442d00
        ;   XREF to: 00442cc2 (UNCONDITIONAL_JUMP)  ; LAB_00442cc2


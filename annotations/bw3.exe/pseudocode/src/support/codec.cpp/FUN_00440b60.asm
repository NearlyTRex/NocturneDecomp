; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool support_codec_cpp_FUN_00440b60(int *param_1,undefined4 param_2,int *param_3)
;
;
; Called Functions:
;   support_trstream.cpp_COutStreamMemory_dtor_FUN_00574b50
;   support_trstream.cpp_FUN_00574ac0
;   support_trstream.cpp_FUN_00574d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440b60
        ;   Label: support_codec.cpp_FUN_00440b60
    PUSH ESI                            ; 00440b61
    PUSH EDI                            ; 00440b62
    PUSH EBP                            ; 00440b63
    SUB ESP,0x18                        ; 00440b64
    MOV ESI,dword ptr [ESP + 0x34]      ; 00440b67
    MOV EDX,dword ptr [ESI]             ; 00440b6b
    PUSH EDX                            ; 00440b6d
    MOV ECX,dword ptr [ESP + 0x34]      ; 00440b6e
    PUSH ECX                            ; 00440b72
    LEA EAX,[ESP + 0x8]                 ; 00440b73
    PUSH EAX                            ; 00440b77
    CALL support_trstream.cpp_FUN_00574ac0 ; 00440b78
        ;   XREF to: 00574ac0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_00574ac0()
    ADD ESP,0xc                         ; 00440b7d
    MOV EAX,ESP                         ; 00440b80
    PUSH EAX                            ; 00440b82
    MOV EDI,dword ptr [ESP + 0x30]      ; 00440b83
    MOV EBX,dword ptr [ESP + 0x30]      ; 00440b87
    PUSH EDI                            ; 00440b8b
    MOV EBX,dword ptr [EBX]             ; 00440b8c
    CALL dword ptr [EBX + 0xc]          ; 00440b8e
    ADD ESP,0x8                         ; 00440b91
    MOV EBX,EAX                         ; 00440b94
    MOV EAX,ESP                         ; 00440b96
    PUSH EAX                            ; 00440b98
    CALL support_trstream.cpp_FUN_00574d00 ; 00440b99
        ;   XREF to: 00574d00 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_00574d00()
    MOV EBP,dword ptr [ESI]             ; 00440b9e
    SUB EBP,EAX                         ; 00440ba0
    ADD ESP,0x4                         ; 00440ba2
    MOV dword ptr [ESI],EBP             ; 00440ba5
    CMP EBX,0x1                         ; 00440ba7
    SETZ AL                             ; 00440baa
    XOR EBX,EBX                         ; 00440bad
    PUSH 0x0                            ; 00440baf
    MOV BL,AL                           ; 00440bb1
    LEA EAX,[ESP + 0x4]                 ; 00440bb3
    PUSH EAX                            ; 00440bb7
    CALL support_trstream.cpp_COutStreamMemory_dtor_FUN_00574b50 ; 00440bb8
        ;   XREF to: 00574b50 (UNCONDITIONAL_CALL)  ; COutStreamMemory * support_trstream.cpp_COutStreamMemory_dtor_FUN_00574b50(COutStreamMemory * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00440bbd
    MOV EAX,EBX                         ; 00440bc0
    ADD ESP,0x18                        ; 00440bc2
    POP EBP                             ; 00440bc5
    POP EDI                             ; 00440bc6
    POP ESI                             ; 00440bc7
    POP EBX                             ; 00440bc8
    RET                                 ; 00440bc9


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool support_codec_cpp_FUN_00442f00(int *param_1,char *param_2,int *param_3)
;
;
; Called Functions:
;   support_trstream.cpp_COutStreamMemory_ctorOpen_FUN_005a1ad0
;   support_trstream.cpp_COutStreamMemory_dtor_FUN_005a1b60
;   support_trstream.cpp_COutStreamMemory_tell_FUN_005a1d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442f00
        ;   Label: support_codec.cpp_FUN_00442f00
    PUSH ESI                            ; 00442f01
    PUSH EDI                            ; 00442f02
    PUSH EBP                            ; 00442f03
    SUB ESP,0x18                        ; 00442f04
    MOV ESI,dword ptr [ESP + 0x34]      ; 00442f07
    MOV EDX,dword ptr [ESI]             ; 00442f0b
    PUSH EDX                            ; 00442f0d
    MOV ECX,dword ptr [ESP + 0x34]      ; 00442f0e
    PUSH ECX                            ; 00442f12
    LEA EAX,[ESP + 0x8]                 ; 00442f13
    PUSH EAX                            ; 00442f17
    CALL support_trstream.cpp_COutStreamMemory_ctorOpen_FUN_005a1ad0 ; 00442f18
        ;   XREF to: 005a1ad0 (UNCONDITIONAL_CALL)  ; COutStreamMemory * support_trstream.cpp_COutStreamMemory_ctorOpen_FUN_005a1ad0(COutStreamMemory * this_ptr, char * buffer, int capacity)
    ADD ESP,0xc                         ; 00442f1d
    MOV EAX,ESP                         ; 00442f20
    PUSH EAX                            ; 00442f22
    MOV EDI,dword ptr [ESP + 0x30]      ; 00442f23
    MOV EBX,dword ptr [ESP + 0x30]      ; 00442f27
    PUSH EDI                            ; 00442f2b
    MOV EBX,dword ptr [EBX]             ; 00442f2c
    CALL dword ptr [EBX + 0xc]          ; 00442f2e
    ADD ESP,0x8                         ; 00442f31
    MOV EBX,EAX                         ; 00442f34
    MOV EAX,ESP                         ; 00442f36
    PUSH EAX                            ; 00442f38
    CALL support_trstream.cpp_COutStreamMemory_tell_FUN_005a1d10 ; 00442f39
        ;   XREF to: 005a1d10 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_COutStreamMemory_tell_FUN_005a1d10(COutStreamMemory * this_ptr)
    MOV EBP,dword ptr [ESI]             ; 00442f3e
    SUB EBP,EAX                         ; 00442f40
    ADD ESP,0x4                         ; 00442f42
    MOV dword ptr [ESI],EBP             ; 00442f45
    CMP EBX,0x1                         ; 00442f47
    SETZ AL                             ; 00442f4a
    XOR EBX,EBX                         ; 00442f4d
    PUSH 0x0                            ; 00442f4f
    MOV BL,AL                           ; 00442f51
    LEA EAX,[ESP + 0x4]                 ; 00442f53
    PUSH EAX                            ; 00442f57
    CALL support_trstream.cpp_COutStreamMemory_dtor_FUN_005a1b60 ; 00442f58
        ;   XREF to: 005a1b60 (UNCONDITIONAL_CALL)  ; COutStreamMemory * support_trstream.cpp_COutStreamMemory_dtor_FUN_005a1b60(COutStreamMemory * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00442f5d
    MOV EAX,EBX                         ; 00442f60
    ADD ESP,0x18                        ; 00442f62
    POP EBP                             ; 00442f65
    POP EDI                             ; 00442f66
    POP ESI                             ; 00442f67
    POP EBX                             ; 00442f68
    RET                                 ; 00442f69


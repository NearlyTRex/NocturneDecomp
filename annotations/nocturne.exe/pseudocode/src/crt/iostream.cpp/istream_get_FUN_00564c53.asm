; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl crt_iostream_cpp_istream_get_FUN_00564c53(int *param_1,undefined1 *param_2)
;
;
; XREF[4]:
;   FUN_00438a40 at 00438a65
;   support_codec.cpp_CCodec_process_FUN_00438f90 at 00438fc8
;   support_codec.cpp_CLZWCompress_process_FUN_004398c0 at 00439911
;   support_codec.cpp_readBitsFromStream_FUN_00438ab0 at 00438b69
;
; Called Functions:
;   FUN_0056b227
;   FUN_0056b2b4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564c53
        ;   Label: crt_iostream.cpp_istream_get_FUN_00564c53
    PUSH ESI                            ; 00564c54
    PUSH EDI                            ; 00564c55
    PUSH EBP                            ; 00564c56
    MOV EBX,dword ptr [ESP + 0x14]      ; 00564c57
    MOV EDX,dword ptr [EBX]             ; 00564c5b
    MOV EDX,dword ptr [EDX + 0x4]       ; 00564c5d
    MOV ECX,dword ptr [EDX + EBX*0x1 + 0x10] ; 00564c60
    MOV EAX,EBX                         ; 00564c64
    TEST ECX,ECX                        ; 00564c66
    JNZ 0x00564c77                      ; 00564c68
        ;   XREF to: 00564c77 (CONDITIONAL_JUMP)  ; LAB_00564c77
    MOV EDX,dword ptr [EBX]             ; 00564c6a
    MOV EDX,dword ptr [EDX + 0x4]       ; 00564c6c
    MOV EDX,dword ptr [EDX + EAX*0x1 + 0x8] ; 00564c6f
    TEST EDX,EDX                        ; 00564c73
    JZ 0x00564c86                       ; 00564c75
        ;   XREF to: 00564c86 (CONDITIONAL_JUMP)  ; LAB_00564c86
    PUSH 0x1                            ; 00564c77
        ;   Label: LAB_00564c77
    PUSH EAX                            ; 00564c79
    CALL FUN_0056b227                   ; 00564c7a
        ;   XREF to: 0056b227 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b227()
    ADD ESP,0x8                         ; 00564c7f
    TEST EAX,EAX                        ; 00564c82
    JZ 0x00564ce0                       ; 00564c84
        ;   XREF to: 00564ce0 (CONDITIONAL_JUMP)  ; LAB_00564ce0
    MOV EAX,dword ptr [EBX]             ; 00564c86
        ;   Label: LAB_00564c86
    MOV EAX,dword ptr [EAX + 0x4]       ; 00564c88
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 00564c8b
    MOV ESI,dword ptr [EAX + 0x10]      ; 00564c8f
    MOV EDI,dword ptr [EAX + 0x14]      ; 00564c92
    SUB ESI,EDI                         ; 00564c95
    JZ 0x00564cd0                       ; 00564c97
        ;   XREF to: 00564cd0 (CONDITIONAL_JUMP)  ; LAB_00564cd0
    MOV ECX,dword ptr [EAX + 0x10]      ; 00564c99
    MOV ESI,EAX                         ; 00564c9c
    CMP EDI,ECX                         ; 00564c9e
    JNC 0x00564cbf                      ; 00564ca0
        ;   XREF to: 00564cbf (CONDITIONAL_JUMP)  ; LAB_00564cbf
    MOV EAX,dword ptr [ESI + 0x14]      ; 00564ca2
        ;   Label: LAB_00564ca2
    LEA EDX,[EAX + 0x1]                 ; 00564ca5
    MOV dword ptr [ESI + 0x14],EDX      ; 00564ca8
    MOV AL,byte ptr [EAX]               ; 00564cab
    AND EAX,0xff                        ; 00564cad
    MOV EDX,dword ptr [ESP + 0x18]      ; 00564cb2
        ;   Label: LAB_00564cb2
    MOV byte ptr [EDX],AL               ; 00564cb6
    MOV EAX,EBX                         ; 00564cb8
        ;   Label: LAB_00564cb8
    POP EBP                             ; 00564cba
    POP EDI                             ; 00564cbb
    POP ESI                             ; 00564cbc
    POP EBX                             ; 00564cbd
    RET                                 ; 00564cbe
    PUSH EAX                            ; 00564cbf
        ;   Label: LAB_00564cbf
    MOV EDX,dword ptr [EAX + 0x28]      ; 00564cc0
    CALL dword ptr [EDX + 0x10]         ; 00564cc3
    ADD ESP,0x4                         ; 00564cc6
    CMP EAX,-0x1                        ; 00564cc9
    JNZ 0x00564ca2                      ; 00564ccc
        ;   XREF to: 00564ca2 (CONDITIONAL_JUMP)  ; LAB_00564ca2
    JMP 0x00564cb2                      ; 00564cce
        ;   XREF to: 00564cb2 (UNCONDITIONAL_JUMP)  ; LAB_00564cb2
    MOV EBP,dword ptr [ESP + 0x18]      ; 00564cd0
        ;   Label: LAB_00564cd0
    PUSH EBP                            ; 00564cd4
    PUSH EBX                            ; 00564cd5
    CALL FUN_0056b2b4                   ; 00564cd6
        ;   XREF to: 0056b2b4 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b2b4()
    ADD ESP,0x8                         ; 00564cdb
    JMP 0x00564cb8                      ; 00564cde
        ;   XREF to: 00564cb8 (UNCONDITIONAL_JUMP)  ; LAB_00564cb8
    MOV dword ptr [EBX + 0x4],EAX       ; 00564ce0
        ;   Label: LAB_00564ce0
    JMP 0x00564cb8                      ; 00564ce3
        ;   XREF to: 00564cb8 (UNCONDITIONAL_JUMP)  ; LAB_00564cb8


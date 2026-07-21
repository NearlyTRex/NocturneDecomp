; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_writeBitsToStream_FUN_00438c40(byte *param_1,int param_2,uint param_3,undefined4 param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_004396d0 at 00439713
;
; Called Functions:
;   crt_iostream.cpp_ostream_put_FUN_00564ce5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438c40
        ;   Label: support_codec.cpp_writeBitsToStream_FUN_00438c40
    PUSH ESI                            ; 00438c41
    PUSH EDI                            ; 00438c42
    PUSH EBP                            ; 00438c43
    SUB ESP,0x4                         ; 00438c44
    MOV EBX,dword ptr [ESP + 0x18]      ; 00438c47
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00438c4b
    MOV EDX,dword ptr [EBX]             ; 00438c4f
    MOV EDI,dword ptr [ESP + 0x24]      ; 00438c51
    CMP EDX,0x8                         ; 00438c55
    JL 0x00438c80                       ; 00438c58
        ;   XREF to: 00438c80 (CONDITIONAL_JUMP)  ; LAB_00438c80
    XOR EAX,EAX                         ; 00438c5a
        ;   Label: LAB_00438c5a
    MOV AL,byte ptr [EBX + 0x4]         ; 00438c5c
    PUSH EAX                            ; 00438c5f
    PUSH EDI                            ; 00438c60
    CALL crt_iostream.cpp_ostream_put_FUN_00564ce5 ; 00438c61
        ;   XREF to: 00564ce5 (UNCONDITIONAL_CALL)  ; undefined crt_iostream.cpp_ostream_put_FUN_00564ce5()
    MOV ECX,dword ptr [EBX + 0x4]       ; 00438c66
    MOV EBP,dword ptr [EBX]             ; 00438c69
    SHR ECX,0x8                         ; 00438c6b
    SUB EBP,0x8                         ; 00438c6e
    MOV dword ptr [EBX + 0x4],ECX       ; 00438c71
    ADD ESP,0x8                         ; 00438c74
    MOV dword ptr [EBX],EBP             ; 00438c77
    CMP EBP,0x8                         ; 00438c79
    JGE 0x00438c5a                      ; 00438c7c
        ;   XREF to: 00438c5a (CONDITIONAL_JUMP)  ; LAB_00438c5a
    MOV EAX,EAX                         ; 00438c7e
    MOV EDX,dword ptr [EBX]             ; 00438c80
        ;   Label: LAB_00438c80
    TEST EDX,EDX                        ; 00438c82
    JLE 0x00438cd3                      ; 00438c84
        ;   XREF to: 00438cd3 (CONDITIONAL_JUMP)  ; LAB_00438cd3
    MOV EAX,0x8                         ; 00438c86
    SUB EAX,EDX                         ; 00438c8b
    MOV dword ptr [ESP],EAX             ; 00438c8d
    CMP ESI,EAX                         ; 00438c90
    JL 0x00438cf8                       ; 00438c92
        ;   XREF to: 00438cf8 (CONDITIONAL_JUMP)  ; LAB_00438cf8
    JZ 0x00438d16                       ; 00438c94
        ;   XREF to: 00438d16 (CONDITIONAL_JUMP)  ; LAB_00438d16
    MOV AL,byte ptr [ESP + 0x20]        ; 00438c9a
    MOV CL,byte ptr [EBX]               ; 00438c9e
    SHL AL,CL                           ; 00438ca0
    OR AL,byte ptr [EBX + 0x4]          ; 00438ca2
    AND EAX,0xff                        ; 00438ca5
    PUSH EAX                            ; 00438caa
    PUSH EDI                            ; 00438cab
    CALL crt_iostream.cpp_ostream_put_FUN_00564ce5 ; 00438cac
        ;   XREF to: 00564ce5 (UNCONDITIONAL_CALL)  ; undefined crt_iostream.cpp_ostream_put_FUN_00564ce5()
    ADD ESP,0x8                         ; 00438cb1
    MOV dword ptr [EBX],0x0             ; 00438cb4
    MOV CL,byte ptr [ESP]               ; 00438cba
    MOV EDX,dword ptr [ESP + 0x20]      ; 00438cbd
    MOV dword ptr [EBX + 0x4],0x0       ; 00438cc1
    SHR EDX,CL                          ; 00438cc8
    MOV ECX,dword ptr [ESP]             ; 00438cca
    MOV dword ptr [ESP + 0x20],EDX      ; 00438ccd
    SUB ESI,ECX                         ; 00438cd1
    CMP ESI,0x8                         ; 00438cd3
        ;   Label: LAB_00438cd3
    JL 0x00438d44                       ; 00438cd6
        ;   XREF to: 00438d44 (CONDITIONAL_JUMP)  ; LAB_00438d44
    XOR EAX,EAX                         ; 00438cd8
    MOV AL,byte ptr [ESP + 0x20]        ; 00438cda
    PUSH EAX                            ; 00438cde
    PUSH EDI                            ; 00438cdf
    CALL crt_iostream.cpp_ostream_put_FUN_00564ce5 ; 00438ce0
        ;   XREF to: 00564ce5 (UNCONDITIONAL_CALL)  ; undefined crt_iostream.cpp_ostream_put_FUN_00564ce5()
    ADD ESP,0x8                         ; 00438ce5
    MOV EAX,dword ptr [ESP + 0x20]      ; 00438ce8
    SHR EAX,0x8                         ; 00438cec
    SUB ESI,0x8                         ; 00438cef
    MOV dword ptr [ESP + 0x20],EAX      ; 00438cf2
    JMP 0x00438cd3                      ; 00438cf6
        ;   XREF to: 00438cd3 (UNCONDITIONAL_JUMP)  ; LAB_00438cd3
    MOV EAX,dword ptr [ESP + 0x20]      ; 00438cf8
        ;   Label: LAB_00438cf8
    MOV CL,byte ptr [EBX]               ; 00438cfc
    MOV EDI,dword ptr [EBX + 0x4]       ; 00438cfe
    MOV EBP,dword ptr [EBX]             ; 00438d01
    SHL EAX,CL                          ; 00438d03
    ADD EBP,ESI                         ; 00438d05
    OR EDI,EAX                          ; 00438d07
    MOV dword ptr [EBX],EBP             ; 00438d09
    MOV dword ptr [EBX + 0x4],EDI       ; 00438d0b
    ADD ESP,0x4                         ; 00438d0e
        ;   Label: LAB_00438d0e
    POP EBP                             ; 00438d11
    POP EDI                             ; 00438d12
    POP ESI                             ; 00438d13
    POP EBX                             ; 00438d14
    RET                                 ; 00438d15
    MOV EAX,dword ptr [ESP + 0x20]      ; 00438d16
        ;   Label: LAB_00438d16
    MOV CL,byte ptr [EBX]               ; 00438d1a
    MOV ESI,dword ptr [EBX + 0x4]       ; 00438d1c
    SHL EAX,CL                          ; 00438d1f
    OR ESI,EAX                          ; 00438d21
    XOR EAX,EAX                         ; 00438d23
    MOV dword ptr [EBX + 0x4],ESI       ; 00438d25
    MOV AL,byte ptr [EBX + 0x4]         ; 00438d28
    PUSH EAX                            ; 00438d2b
    PUSH EDI                            ; 00438d2c
    CALL crt_iostream.cpp_ostream_put_FUN_00564ce5 ; 00438d2d
        ;   XREF to: 00564ce5 (UNCONDITIONAL_CALL)  ; undefined crt_iostream.cpp_ostream_put_FUN_00564ce5()
    MOV dword ptr [EBX],0x0             ; 00438d32
    ADD ESP,0x8                         ; 00438d38
    MOV dword ptr [EBX + 0x4],0x0       ; 00438d3b
    JMP 0x00438d0e                      ; 00438d42
        ;   XREF to: 00438d0e (UNCONDITIONAL_JUMP)  ; LAB_00438d0e
    MOV EAX,dword ptr [ESP + 0x20]      ; 00438d44
        ;   Label: LAB_00438d44
    MOV dword ptr [EBX],ESI             ; 00438d48
    MOV dword ptr [EBX + 0x4],EAX       ; 00438d4a
    ADD ESP,0x4                         ; 00438d4d
    POP EBP                             ; 00438d50
    POP EDI                             ; 00438d51
    POP ESI                             ; 00438d52
    POP EBX                             ; 00438d53
    RET                                 ; 00438d54


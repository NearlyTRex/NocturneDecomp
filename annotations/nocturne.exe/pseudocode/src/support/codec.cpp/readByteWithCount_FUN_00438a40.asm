; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_codec_cpp_readByteWithCount_FUN_00438a40(_istream *istream,int *remaining_count)
;
; Parameters:
; _istream *       Stack[0x4]:4   istream
; int *            Stack[0x8]:4   remaining_count
; Local Variables:
; undefined1       Stack[-0x14]:1  local_14
;
; Called Functions:
;   crt_iostream.cpp_istream_get_FUN_00564c53
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438a40
        ;   Label: support_codec.cpp_readByteWithCount_FUN_00438a40
    PUSH ESI                            ; 00438a41
    PUSH EDI                            ; 00438a42
    PUSH EBP                            ; 00438a43
    SUB ESP,0x4                         ; 00438a44
    MOV ESI,dword ptr [ESP + 0x18]      ; 00438a47
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00438a4b
    CMP dword ptr [EBX],0x1             ; 00438a4f
    JGE 0x00438a61                      ; 00438a52
        ;   XREF to: 00438a61 (CONDITIONAL_JUMP)  ; LAB_00438a61
    MOV EAX,0xffffffff                  ; 00438a54
        ;   Label: LAB_00438a54
    ADD ESP,0x4                         ; 00438a59
    POP EBP                             ; 00438a5c
    POP EDI                             ; 00438a5d
    POP ESI                             ; 00438a5e
    POP EBX                             ; 00438a5f
    RET                                 ; 00438a60
    MOV EAX,ESP                         ; 00438a61
        ;   Label: LAB_00438a61
    PUSH EAX                            ; 00438a63
    PUSH ESI                            ; 00438a64
    CALL crt_iostream.cpp_istream_get_FUN_00564c53 ; 00438a65
        ;   XREF to: 00564c53 (UNCONDITIONAL_CALL)  ; _istream * crt_iostream.cpp_istream_get_FUN_00564c53(_istream * this_ptr, char * c)
    MOV EAX,dword ptr [ESI]             ; 00438a6a
    ADD ESI,dword ptr [EAX + 0x4]       ; 00438a6c
    MOV EDI,dword ptr [ESI + 0x10]      ; 00438a6f
    ADD ESP,0x8                         ; 00438a72
    TEST EDI,EDI                        ; 00438a75
    JNZ 0x00438a54                      ; 00438a77
        ;   XREF to: 00438a54 (CONDITIONAL_JUMP)  ; LAB_00438a54
    MOV EBP,dword ptr [EBX]             ; 00438a79
    DEC EBP                             ; 00438a7b
    XOR EAX,EAX                         ; 00438a7c
    MOV dword ptr [EBX],EBP             ; 00438a7e
    MOV AL,byte ptr [ESP]               ; 00438a80
    ADD ESP,0x4                         ; 00438a83
    POP EBP                             ; 00438a86
    POP EDI                             ; 00438a87
    POP ESI                             ; 00438a88
    POP EBX                             ; 00438a89
    RET                                 ; 00438a8a


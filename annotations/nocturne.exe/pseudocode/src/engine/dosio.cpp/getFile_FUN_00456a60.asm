; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_dosio_cpp_getFile_FUN_00456a60(int param_1,undefined4 param_2,char *param_3)
;
; Local Variables:
; undefined        Stack[-0x220]:1  local_220
; undefined        Stack[-0x120]:1  local_120
; undefined4       Stack[-0x20]:4  local_20
;
; XREF[48]:
;   FUN_00401010 at 0040109f
;   FUN_00446810 at 00446894
;   FUN_00467890 at 004678a0
;   FUN_0049cc10 at 0049d692
;   FUN_0049f930 at 0049fffb
;   FUN_004a4170 at 004a42f1
;   FUN_004a4b50 at 004a4b69
;   FUN_004a57c0 at 004a5889
;   FUN_004c90e0 at 004c90f9
;   FUN_004d7f80 at 004d7f91
;   ... and 38 more
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_00565e20
;   crt_stdio.c_fopen_FUN_0056568c
;   crt_stdio.c_fseek_FUN_0056582c
;   crt_watcom.c__mkdir_FUN_00565e40
;   engine_dosio.cpp_findFile_FUN_004567a0
;   engine_dosio.cpp_getRelativeFilePath_FUN_00456700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456a60
        ;   Label: engine_dosio.cpp_getFile_FUN_00456a60
    PUSH ESI                            ; 00456a61
    PUSH EDI                            ; 00456a62
    SUB ESP,0x214                       ; 00456a63
    MOV EDI,dword ptr [ESP + 0x224]     ; 00456a69
    MOV ESI,dword ptr [ESP + 0x22c]     ; 00456a70
    MOV EDX,dword ptr [ESP + 0x228]     ; 00456a77
    PUSH EDX                            ; 00456a7e
    PUSH EDI                            ; 00456a7f
    LEA EAX,[ESP + 0x8]                 ; 00456a80
    PUSH EAX                            ; 00456a84
    MOV EBX,ESI                         ; 00456a85
    CALL engine_dosio.cpp_getRelativeFilePath_FUN_00456700 ; 00456a87
        ;   XREF to: 00456700 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getRelativeFilePath_FUN_00456700()
    MOV AH,byte ptr [ESI]               ; 00456a8c
    ADD ESP,0xc                         ; 00456a8e
    TEST AH,AH                          ; 00456a91
    JZ 0x00456ad4                       ; 00456a93
        ;   XREF to: 00456ad4 (CONDITIONAL_JUMP)  ; LAB_00456ad4
    XOR EAX,EAX                         ; 00456a95
        ;   Label: LAB_00456a95
    MOV AL,byte ptr [EBX]               ; 00456a97
    PUSH EAX                            ; 00456a99
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 00456a9a
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; undefined crt_ctype.c_toupper_FUN_00565e20()
    ADD ESP,0x4                         ; 00456a9f
    CMP EAX,0x57                        ; 00456aa2
    JNZ 0x00456acc                      ; 00456aa5
        ;   XREF to: 00456acc (CONDITIONAL_JUMP)  ; LAB_00456acc
    TEST EDI,EDI                        ; 00456aa7
    JZ 0x00456ab4                       ; 00456aa9
        ;   XREF to: 00456ab4 (CONDITIONAL_JUMP)  ; LAB_00456ab4
    PUSH EDI                            ; 00456aab
    CALL crt_watcom.c__mkdir_FUN_00565e40 ; 00456aac
        ;   XREF to: 00565e40 (UNCONDITIONAL_CALL)  ; undefined crt_watcom.c__mkdir_FUN_00565e40()
    ADD ESP,0x4                         ; 00456ab1
    PUSH ESI                            ; 00456ab4
        ;   Label: LAB_00456ab4
    LEA EAX,[ESP + 0x4]                 ; 00456ab5
    PUSH EAX                            ; 00456ab9
    CALL crt_stdio.c_fopen_FUN_0056568c ; 00456aba
        ;   XREF to: 0056568c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_0056568c()
    ADD ESP,0x8                         ; 00456abf
    ADD ESP,0x214                       ; 00456ac2
        ;   Label: LAB_00456ac2
    POP EDI                             ; 00456ac8
    POP ESI                             ; 00456ac9
    POP EBX                             ; 00456aca
    RET                                 ; 00456acb
    MOV DL,byte ptr [EBX + 0x1]         ; 00456acc
        ;   Label: LAB_00456acc
    INC EBX                             ; 00456acf
    TEST DL,DL                          ; 00456ad0
    JNZ 0x00456a95                      ; 00456ad2
        ;   XREF to: 00456a95 (CONDITIONAL_JUMP)  ; LAB_00456a95
    MOV EAX,ESP                         ; 00456ad4
        ;   Label: LAB_00456ad4
    PUSH EAX                            ; 00456ad6
    CALL engine_dosio.cpp_findFile_FUN_004567a0 ; 00456ad7
        ;   XREF to: 004567a0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_findFile_FUN_004567a0()
    ADD ESP,0x4                         ; 00456adc
    TEST EAX,EAX                        ; 00456adf
    JZ 0x00456ac2                       ; 00456ae1
        ;   XREF to: 00456ac2 (CONDITIONAL_JUMP)  ; LAB_00456ac2
    PUSH ESI                            ; 00456ae3
    LEA EAX,[ESP + 0x104]               ; 00456ae4
    PUSH EAX                            ; 00456aeb
    CALL crt_stdio.c_fopen_FUN_0056568c ; 00456aec
        ;   XREF to: 0056568c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_0056568c()
    ADD ESP,0x8                         ; 00456af1
    MOV EBX,EAX                         ; 00456af4
    TEST EAX,EAX                        ; 00456af6
    JZ 0x00456ac2                       ; 00456af8
        ;   XREF to: 00456ac2 (CONDITIONAL_JUMP)  ; LAB_00456ac2
    MOV ECX,dword ptr [ESP + 0x200]     ; 00456afa
    TEST ECX,ECX                        ; 00456b01
    JZ 0x00456b11                       ; 00456b03
        ;   XREF to: 00456b11 (CONDITIONAL_JUMP)  ; LAB_00456b11
    PUSH 0x0                            ; 00456b05
    PUSH ECX                            ; 00456b07
    PUSH EAX                            ; 00456b08
    CALL crt_stdio.c_fseek_FUN_0056582c ; 00456b09
        ;   XREF to: 0056582c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_0056582c()
    ADD ESP,0xc                         ; 00456b0e
    MOV EAX,EBX                         ; 00456b11
        ;   Label: LAB_00456b11
    ADD ESP,0x214                       ; 00456b13
    POP EDI                             ; 00456b19
    POP ESI                             ; 00456b1a
    POP EBX                             ; 00456b1b
    RET                                 ; 00456b1c


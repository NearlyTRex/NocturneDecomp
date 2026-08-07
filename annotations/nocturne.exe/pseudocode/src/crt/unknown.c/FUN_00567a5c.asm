; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_00567a5c(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined1       Stack[-0x1c]:1  local_1c
; undefined1       Stack[-0x1b]:1  local_1b
; undefined1       Stack[-0x18]:1  local_18
;
; XREF[1]:
;   crt_unknown.c_FUN_00567560 at 00567762
;
; Referenced Globals:
;   uchar[257] g_CharacterClassificationTable
;   undefined4 DAT_02de5c30
;
; Called Functions:
;   crt_locale.c_mbtowc_FUN_0056f040
;   crt_unknown.c_FUN_00567540
;   crt_unknown.c_FUN_0056754c
;   crt_unknown.c_FUN_00568528
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567a5c
        ;   Label: crt_unknown.c_FUN_00567a5c
    PUSH ESI                            ; 00567a5d
    PUSH EDI                            ; 00567a5e
    PUSH ES                             ; 00567a5f
    PUSH EBP                            ; 00567a60
    SUB ESP,0xc                         ; 00567a61
    MOV ESI,dword ptr [ESP + 0x24]      ; 00567a64
    MOV EAX,dword ptr [ESP + 0x28]      ; 00567a68
    MOV DL,byte ptr [ESI + 0x10]        ; 00567a6c
    TEST DL,0x20                        ; 00567a6f
    JZ 0x00567a7b                       ; 00567a72
        ;   XREF to: 00567a7b (CONDITIONAL_JUMP)  ; LAB_00567a7b
    MOV byte ptr [ESP + 0x8],0x2        ; 00567a74
    JMP 0x00567a83                      ; 00567a79
        ;   XREF to: 00567a83 (UNCONDITIONAL_JUMP)  ; LAB_00567a83
    TEST DL,0x10                        ; 00567a7b
        ;   Label: LAB_00567a7b
    MOV byte ptr [ESP + 0x8],0x1        ; 00567a7e
    MOV CH,byte ptr [ESI + 0x10]        ; 00567a83
        ;   Label: LAB_00567a83
    TEST CH,0x1                         ; 00567a86
    JZ 0x00567abf                       ; 00567a89
        ;   XREF to: 00567abf (CONDITIONAL_JUMP)  ; LAB_00567abf
    TEST CH,0x4                         ; 00567a8b
    JZ 0x00567a9c                       ; 00567a8e
        ;   XREF to: 00567a9c (CONDITIONAL_JUMP)  ; LAB_00567a9c
    MOV ECX,dword ptr [EAX]             ; 00567a90
    ADD ECX,0x8                         ; 00567a92
    MOV dword ptr [EAX],ECX             ; 00567a95
    LES EDI,[ECX + -0x8]                ; 00567a97
    JMP 0x00567abf                      ; 00567a9a
        ;   XREF to: 00567abf (UNCONDITIONAL_JUMP)  ; LAB_00567abf
    TEST CH,0x8                         ; 00567a9c
        ;   Label: LAB_00567a9c
    JZ 0x00567ab1                       ; 00567a9f
        ;   XREF to: 00567ab1 (CONDITIONAL_JUMP)  ; LAB_00567ab1
    MOV EBX,dword ptr [EAX]             ; 00567aa1
    ADD EBX,0x4                         ; 00567aa3
    MOV dword ptr [EAX],EBX             ; 00567aa6
    MOV AX,DS                           ; 00567aa8
    MOV ES,AX                           ; 00567aaa
    MOV EDI,dword ptr [EBX + -0x4]      ; 00567aac
    JMP 0x00567abf                      ; 00567aaf
        ;   XREF to: 00567abf (UNCONDITIONAL_JUMP)  ; LAB_00567abf
    MOV EDX,dword ptr [EAX]             ; 00567ab1
        ;   Label: LAB_00567ab1
    ADD EDX,0x4                         ; 00567ab3
    MOV dword ptr [EAX],EDX             ; 00567ab6
    MOV AX,DS                           ; 00567ab8
    MOV ES,AX                           ; 00567aba
    MOV EDI,dword ptr [EDX + -0x4]      ; 00567abc
    XOR EBP,EBP                         ; 00567abf
        ;   Label: LAB_00567abf
    PUSH ESI                            ; 00567ac1
        ;   Label: LAB_00567ac1
    CALL crt_unknown.c_FUN_00567540     ; 00567ac2
        ;   XREF to: 00567540 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00567540()
    ADD ESP,0x4                         ; 00567ac7
    MOV EBX,EAX                         ; 00567aca
    INC AL                              ; 00567acc
    AND EAX,0xff                        ; 00567ace
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 00567ad3 | g_CharacterClassificationTable
    JZ 0x00567adf                       ; 00567ada
        ;   XREF to: 00567adf (CONDITIONAL_JUMP)  ; LAB_00567adf
    INC EBP                             ; 00567adc
    JMP 0x00567ac1                      ; 00567add
        ;   XREF to: 00567ac1 (UNCONDITIONAL_JUMP)  ; LAB_00567ac1
    TEST byte ptr [ESI + 0x10],0x2      ; 00567adf
        ;   Label: LAB_00567adf
    JZ 0x00567aec                       ; 00567ae3
        ;   XREF to: 00567aec (CONDITIONAL_JUMP)  ; LAB_00567aec
    XOR EBP,EBP                         ; 00567ae5
    JMP 0x00567b98                      ; 00567ae7
        ;   XREF to: 00567b98 (UNCONDITIONAL_JUMP)  ; LAB_00567b98
    MOV EAX,dword ptr [ESI + 0xc]       ; 00567aec
        ;   Label: LAB_00567aec
    LEA EDX,[EAX + -0x1]                ; 00567aef
    MOV dword ptr [ESI + 0xc],EDX       ; 00567af2
    TEST EAX,EAX                        ; 00567af5
    JZ 0x00567b8e                       ; 00567af7
        ;   XREF to: 00567b8e (CONDITIONAL_JUMP)  ; LAB_00567b8e
    MOV AL,byte ptr [ESI + 0x10]        ; 00567afd
        ;   Label: LAB_00567afd
    INC EBP                             ; 00567b00
    TEST AL,0x1                         ; 00567b01
    JZ 0x00567b6a                       ; 00567b03
        ;   XREF to: 00567b6a (CONDITIONAL_JUMP)  ; LAB_00567b6a
    CMP byte ptr [ESP + 0x8],0x1        ; 00567b05
    JNZ 0x00567b11                      ; 00567b0a
        ;   XREF to: 00567b11 (CONDITIONAL_JUMP)  ; LAB_00567b11
    MOV byte ptr ES:[EDI],BL            ; 00567b0c
    JMP 0x00567b62                      ; 00567b0f
        ;   XREF to: 00567b62 (UNCONDITIONAL_JUMP)  ; LAB_00567b62
    MOV EAX,[0x02de5c30]                ; 00567b11 | DAT_02de5c30
        ;   Label: LAB_00567b11
    MOV byte ptr [ESP + 0x4],BL         ; 00567b16
    TEST EAX,EAX                        ; 00567b1a
    JZ 0x00567b3e                       ; 00567b1c
        ;   XREF to: 00567b3e (CONDITIONAL_JUMP)  ; LAB_00567b3e
    XOR EAX,EAX                         ; 00567b1e
    MOV AL,BL                           ; 00567b20
    MOV AL,byte ptr [EAX + 0x2de5c41]   ; 00567b22
    AND AL,0x1                          ; 00567b28
    AND EAX,0xff                        ; 00567b2a
    JZ 0x00567b3e                       ; 00567b2f
        ;   XREF to: 00567b3e (CONDITIONAL_JUMP)  ; LAB_00567b3e
    PUSH ESI                            ; 00567b31
    CALL crt_unknown.c_FUN_00567540     ; 00567b32
        ;   XREF to: 00567540 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00567540()
    ADD ESP,0x4                         ; 00567b37
    MOV byte ptr [ESP + 0x5],AL         ; 00567b3a
    PUSH 0x2                            ; 00567b3e
        ;   Label: LAB_00567b3e
    LEA EAX,[ESP + 0x8]                 ; 00567b40
    PUSH EAX                            ; 00567b44
    LEA EAX,[ESP + 0x8]                 ; 00567b45
    PUSH EAX                            ; 00567b49
    CALL crt_locale.c_mbtowc_FUN_0056f040 ; 00567b4a
        ;   XREF to: 0056f040 (UNCONDITIONAL_CALL)  ; int crt_locale.c_mbtowc_FUN_0056f040(wchar_t * wide_char, char * mb_string, SIZE_T max_bytes)
    ADD ESP,0xc                         ; 00567b4f
    CMP EAX,-0x1                        ; 00567b52
    JNZ 0x00567b5b                      ; 00567b55
        ;   XREF to: 00567b5b (CONDITIONAL_JUMP)  ; LAB_00567b5b
    XOR EAX,EAX                         ; 00567b57
    JMP 0x00567bb7                      ; 00567b59
        ;   XREF to: 00567bb7 (UNCONDITIONAL_JUMP)  ; LAB_00567bb7
    MOV EAX,dword ptr [ESP]             ; 00567b5b
        ;   Label: LAB_00567b5b
    MOV word ptr ES:[EDI],AX            ; 00567b5e
    XOR EAX,EAX                         ; 00567b62
        ;   Label: LAB_00567b62
    MOV AL,byte ptr [ESP + 0x8]         ; 00567b64
    ADD EDI,EAX                         ; 00567b68
    PUSH ESI                            ; 00567b6a
        ;   Label: LAB_00567b6a
    CALL crt_unknown.c_FUN_00568528     ; 00567b6b
        ;   XREF to: 00568528 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00568528()
    ADD ESP,0x4                         ; 00567b70
    MOV EBX,EAX                         ; 00567b73
    CMP EAX,-0x1                        ; 00567b75
    JZ 0x00567b98                       ; 00567b78
        ;   XREF to: 00567b98 (CONDITIONAL_JUMP)  ; LAB_00567b98
    INC AL                              ; 00567b7a
    AND EAX,0xff                        ; 00567b7c
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 00567b81 | g_CharacterClassificationTable
    JZ 0x00567afd                       ; 00567b88
        ;   XREF to: 00567afd (CONDITIONAL_JUMP)  ; LAB_00567afd
    PUSH ESI                            ; 00567b8e
        ;   Label: LAB_00567b8e
    PUSH EBX                            ; 00567b8f
    CALL crt_unknown.c_FUN_0056754c     ; 00567b90
        ;   XREF to: 0056754c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056754c()
    ADD ESP,0x8                         ; 00567b95
    TEST byte ptr [ESI + 0x10],0x1      ; 00567b98
        ;   Label: LAB_00567b98
    JZ 0x00567bb5                       ; 00567b9c
        ;   XREF to: 00567bb5 (CONDITIONAL_JUMP)  ; LAB_00567bb5
    TEST EBP,EBP                        ; 00567b9e
    JLE 0x00567bb5                      ; 00567ba0
        ;   XREF to: 00567bb5 (CONDITIONAL_JUMP)  ; LAB_00567bb5
    CMP byte ptr [ESP + 0x8],0x1        ; 00567ba2
    JNZ 0x00567baf                      ; 00567ba7
        ;   XREF to: 00567baf (CONDITIONAL_JUMP)  ; LAB_00567baf
    MOV byte ptr ES:[EDI],0x0           ; 00567ba9
    JMP 0x00567bb5                      ; 00567bad
        ;   XREF to: 00567bb5 (UNCONDITIONAL_JUMP)  ; LAB_00567bb5
    MOV word ptr ES:[EDI],0x0           ; 00567baf
        ;   Label: LAB_00567baf
    MOV EAX,EBP                         ; 00567bb5
        ;   Label: LAB_00567bb5
    ADD ESP,0xc                         ; 00567bb7
        ;   Label: LAB_00567bb7
    POP EBP                             ; 00567bba
    POP ES                              ; 00567bbb
    POP EDI                             ; 00567bbc
    POP ESI                             ; 00567bbd
    POP EBX                             ; 00567bbe
    RET                                 ; 00567bbf


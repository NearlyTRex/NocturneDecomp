; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_findFilesByExtension_FUN_004f8b90(CPod *pod,char *extension,char *output_buffer,int max_results,int result_string_length)
;
; Parameters:
; CPod *           Stack[0x4]:4   pod
; char *           Stack[0x8]:4   extension
; char *           Stack[0xc]:4   output_buffer
; int              Stack[0x10]:4   max_results
; int              Stack[0x14]:4   result_string_length
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_00565e20
;   crt_string.c__strcmp_FUN_005649c0
;   crt_string.c__strncpy_FUN_00565f70
;   engine_pod.cpp_CPodFile_findFileIndex_FUN_004f8150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8b90
        ;   Label: engine_pod.cpp_findFilesByExtension_FUN_004f8b90
    PUSH ESI                            ; 004f8b91
    PUSH EDI                            ; 004f8b92
    PUSH EBP                            ; 004f8b93
    SUB ESP,0x40                        ; 004f8b94
    MOV ESI,dword ptr [ESP + 0x58]      ; 004f8b97
    MOV EDI,ESI                         ; 004f8b9b
    SUB ECX,ECX                         ; 004f8b9d
    DEC ECX                             ; 004f8b9f
    XOR EAX,EAX                         ; 004f8ba0
    SCASB.REPNE ES:EDI                  ; 004f8ba2
    NOT ECX                             ; 004f8ba4
    DEC ECX                             ; 004f8ba6
    XOR EDX,EDX                         ; 004f8ba7
    XOR EBX,EBX                         ; 004f8ba9
    MOV dword ptr [ESP + 0x2c],ECX      ; 004f8bab
    MOV dword ptr [ESP + 0x3c],EDX      ; 004f8baf
    TEST ECX,ECX                        ; 004f8bb3
    JLE 0x004f8be0                      ; 004f8bb5
        ;   XREF to: 004f8be0 (CONDITIONAL_JUMP)  ; LAB_004f8be0
    XOR EAX,EAX                         ; 004f8bb7
        ;   Label: LAB_004f8bb7
    MOV AL,byte ptr [ESI]               ; 004f8bb9
    PUSH EAX                            ; 004f8bbb
    INC EBX                             ; 004f8bbc
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004f8bbd
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004f8bc2
    INC ESI                             ; 004f8bc5
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004f8bc6
    MOV byte ptr [ESP + EBX*0x1 + 0xb],AL ; 004f8bca
    CMP EBX,ECX                         ; 004f8bce
    JL 0x004f8bb7                       ; 004f8bd0
        ;   XREF to: 004f8bb7 (CONDITIONAL_JUMP)  ; LAB_004f8bb7
    LEA EAX,[EAX]                       ; 004f8bd2
    LEA EDX,[EDX]                       ; 004f8bd8
    MOV EAX,EAX                         ; 004f8bde
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004f8be0
        ;   Label: LAB_004f8be0
    XOR DL,DL                           ; 004f8be4
    MOV byte ptr [ESP + EAX*0x1 + 0xc],DL ; 004f8be6
    MOV EAX,dword ptr [ESP + 0x54]      ; 004f8bea
    XOR EBX,EBX                         ; 004f8bee
    MOV ESI,dword ptr [EAX]             ; 004f8bf0
    MOV dword ptr [ESP + 0x18],EBX      ; 004f8bf2
    TEST ESI,ESI                        ; 004f8bf6
    JLE 0x004f8c6b                      ; 004f8bf8
        ;   XREF to: 004f8c6b (CONDITIONAL_JUMP)  ; LAB_004f8c6b
    MOV EAX,dword ptr [ESP + 0x64]      ; 004f8bfa
    DEC EAX                             ; 004f8bfe
    MOV dword ptr [ESP + 0x1c],EBX      ; 004f8bff
    MOV dword ptr [ESP + 0x20],EAX      ; 004f8c03
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f8c07
        ;   Label: LAB_004f8c07
    MOV dword ptr [ESP + 0x24],EAX      ; 004f8c0b
    MOV EAX,dword ptr [ESP + 0x64]      ; 004f8c0f
    MOV EDI,dword ptr [ESP + 0x64]      ; 004f8c13
    MOV dword ptr [ESP + 0x28],EAX      ; 004f8c17
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004f8c1b
    IMUL EAX,EDI                        ; 004f8c1f
    XOR EBX,EBX                         ; 004f8c22
    MOV EBP,dword ptr [ESP + 0x5c]      ; 004f8c24
    MOV dword ptr [ESP + 0x30],EBX      ; 004f8c28
    ADD EAX,EBP                         ; 004f8c2c
    MOV dword ptr [ESP + 0x38],EBX      ; 004f8c2e
    MOV dword ptr [ESP + 0x34],EAX      ; 004f8c32
    MOV EAX,dword ptr [ESP + 0x54]      ; 004f8c36
        ;   Label: LAB_004f8c36
    ADD EAX,dword ptr [ESP + 0x24]      ; 004f8c3a
    MOV EAX,dword ptr [EAX + 0x4]       ; 004f8c3e
    MOV ECX,dword ptr [ESP + 0x38]      ; 004f8c41
    CMP ECX,dword ptr [EAX + 0x208]     ; 004f8c45
    JL 0x004f8c77                       ; 004f8c4b
        ;   XREF to: 004f8c77 (CONDITIONAL_JUMP)  ; LAB_004f8c77
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004f8c4d
    MOV EBP,dword ptr [ESP + 0x18]      ; 004f8c51
    MOV ECX,dword ptr [ESP + 0x54]      ; 004f8c55
    ADD EDI,0x4                         ; 004f8c59
    INC EBP                             ; 004f8c5c
    MOV EDX,dword ptr [ECX]             ; 004f8c5d
    MOV dword ptr [ESP + 0x1c],EDI      ; 004f8c5f
    MOV dword ptr [ESP + 0x18],EBP      ; 004f8c63
    CMP EBP,EDX                         ; 004f8c67
    JL 0x004f8c07                       ; 004f8c69
        ;   XREF to: 004f8c07 (CONDITIONAL_JUMP)  ; LAB_004f8c07
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004f8c6b
        ;   Label: LAB_004f8c6b
    ADD ESP,0x40                        ; 004f8c6f
    POP EBP                             ; 004f8c72
    POP EDI                             ; 004f8c73
    POP ESI                             ; 004f8c74
    POP EBX                             ; 004f8c75
    RET                                 ; 004f8c76
    MOV ESI,dword ptr [ESP + 0x30]      ; 004f8c77
        ;   Label: LAB_004f8c77
    MOV EAX,dword ptr [EAX + 0x20c]     ; 004f8c7b
    ADD EAX,ESI                         ; 004f8c81
    MOV EBP,dword ptr [EAX]             ; 004f8c83
    MOV EDI,EBP                         ; 004f8c85
    SUB ECX,ECX                         ; 004f8c87
    DEC ECX                             ; 004f8c89
    XOR EAX,EAX                         ; 004f8c8a
    SCASB.REPNE ES:EDI                  ; 004f8c8c
    NOT ECX                             ; 004f8c8e
    DEC ECX                             ; 004f8c90
    SUB ECX,dword ptr [ESP + 0x2c]      ; 004f8c91
    MOV EDI,ESP                         ; 004f8c95
    LEA ESI,[ECX + EBP*0x1]             ; 004f8c97
    PUSH EDI                            ; 004f8c9a
    MOV AL,byte ptr [ESI]               ; 004f8c9b
        ;   Label: LAB_004f8c9b
    MOV byte ptr [EDI],AL               ; 004f8c9d
    CMP AL,0x0                          ; 004f8c9f
    JZ 0x004f8cb3                       ; 004f8ca1
        ;   XREF to: 004f8cb3 (CONDITIONAL_JUMP)  ; LAB_004f8cb3
    MOV AL,byte ptr [ESI + 0x1]         ; 004f8ca3
    ADD ESI,0x2                         ; 004f8ca6
    MOV byte ptr [EDI + 0x1],AL         ; 004f8ca9
    ADD EDI,0x2                         ; 004f8cac
    CMP AL,0x0                          ; 004f8caf
    JNZ 0x004f8c9b                      ; 004f8cb1
        ;   XREF to: 004f8c9b (CONDITIONAL_JUMP)  ; LAB_004f8c9b
    POP EDI                             ; 004f8cb3
        ;   Label: LAB_004f8cb3
    LEA EAX,[ESP + 0xc]                 ; 004f8cb4
    PUSH EAX                            ; 004f8cb8
    LEA EAX,[ESP + 0x4]                 ; 004f8cb9
    PUSH EAX                            ; 004f8cbd
    CALL crt_string.c__strcmp_FUN_005649c0 ; 004f8cbe
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f8cc3
    TEST EAX,EAX                        ; 004f8cc6
    JNZ 0x004f8d22                      ; 004f8cc8
        ;   XREF to: 004f8d22 (CONDITIONAL_JUMP)  ; LAB_004f8d22
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f8cca
    XOR EBX,EBX                         ; 004f8cce
    TEST EAX,EAX                        ; 004f8cd0
    JLE 0x004f8ce9                      ; 004f8cd2
        ;   XREF to: 004f8ce9 (CONDITIONAL_JUMP)  ; LAB_004f8ce9
    MOV ESI,dword ptr [ESP + 0x54]      ; 004f8cd4
    PUSH EBP                            ; 004f8cd8
        ;   Label: LAB_004f8cd8
    MOV ECX,dword ptr [ESI + 0x4]       ; 004f8cd9
    PUSH ECX                            ; 004f8cdc
    CALL engine_pod.cpp_CPodFile_findFileIndex_FUN_004f8150 ; 004f8cdd
        ;   XREF to: 004f8150 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_findFileIndex_FUN_004f8150(CPodFile * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004f8ce2
    TEST EAX,EAX                        ; 004f8ce5
    JL 0x004f8d3b                       ; 004f8ce7
        ;   XREF to: 004f8d3b (CONDITIONAL_JUMP)  ; LAB_004f8d3b
    CMP EBX,dword ptr [ESP + 0x18]      ; 004f8ce9
        ;   Label: LAB_004f8ce9
    JNZ 0x004f8d22                      ; 004f8ced
        ;   XREF to: 004f8d22 (CONDITIONAL_JUMP)  ; LAB_004f8d22
    MOV EDI,dword ptr [ESP + 0x20]      ; 004f8cef
    PUSH EDI                            ; 004f8cf3
    PUSH EBP                            ; 004f8cf4
    MOV EBP,dword ptr [ESP + 0x3c]      ; 004f8cf5
    PUSH EBP                            ; 004f8cf9
    CALL crt_string.c__strncpy_FUN_00565f70 ; 004f8cfa
        ;   XREF to: 00565f70 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_00565f70(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 004f8cff
    MOV EAX,dword ptr [ESP + 0x28]      ; 004f8d02
    MOV ECX,dword ptr [ESP + 0x3c]      ; 004f8d06
    MOV EBX,dword ptr [ESP + 0x60]      ; 004f8d0a
    LEA EDX,[EAX + EBP*0x1]             ; 004f8d0e
    INC ECX                             ; 004f8d11
    MOV dword ptr [ESP + 0x34],EDX      ; 004f8d12
    MOV dword ptr [ESP + 0x3c],ECX      ; 004f8d16
    CMP ECX,EBX                         ; 004f8d1a
    JGE 0x004f8c6b                      ; 004f8d1c
        ;   XREF to: 004f8c6b (CONDITIONAL_JUMP)  ; LAB_004f8c6b
    MOV EDI,dword ptr [ESP + 0x38]      ; 004f8d22
        ;   Label: LAB_004f8d22
    MOV ESI,dword ptr [ESP + 0x30]      ; 004f8d26
    INC EDI                             ; 004f8d2a
    ADD ESI,0x14                        ; 004f8d2b
    MOV dword ptr [ESP + 0x38],EDI      ; 004f8d2e
    MOV dword ptr [ESP + 0x30],ESI      ; 004f8d32
    JMP 0x004f8c36                      ; 004f8d36
        ;   XREF to: 004f8c36 (UNCONDITIONAL_JUMP)  ; LAB_004f8c36
    MOV EDX,dword ptr [ESP + 0x18]      ; 004f8d3b
        ;   Label: LAB_004f8d3b
    INC EBX                             ; 004f8d3f
    ADD ESI,0x4                         ; 004f8d40
    CMP EBX,EDX                         ; 004f8d43
    JL 0x004f8cd8                       ; 004f8d45
        ;   XREF to: 004f8cd8 (CONDITIONAL_JUMP)  ; LAB_004f8cd8
    JMP 0x004f8ce9                      ; 004f8d47
        ;   XREF to: 004f8ce9 (UNCONDITIONAL_JUMP)  ; LAB_004f8ce9


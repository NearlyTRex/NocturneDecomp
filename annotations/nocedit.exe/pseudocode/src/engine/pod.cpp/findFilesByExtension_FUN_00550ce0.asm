; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_pod_cpp_findFilesByExtension_FUN_00550ce0 (CPod **pod_array,char *extension,char *output_buffer,int max_results, int result_string_length)
;
; Parameters:
; CPod * *         Stack[0x4]:4   pod_array
; char *           Stack[0x8]:4   extension
; char *           Stack[0xc]:4   output_buffer
; int              Stack[0x10]:4   max_results
; int              Stack[0x14]:4   result_string_length
; Local Variables:
; undefined1       Stack[-0x50]:1  local_50
; undefined1       Stack[-0x4f]:1  local_4f
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005ff9e0
;   crt_string.c__strncpy_FUN_00600f40
;   crt_string.c_strcmp_FUN_005fef20
;   engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550ce0
        ;   Label: engine_pod.cpp_findFilesByExtension_FUN_00550ce0
    PUSH ESI                            ; 00550ce1
    PUSH EDI                            ; 00550ce2
    PUSH EBP                            ; 00550ce3
    SUB ESP,0x40                        ; 00550ce4
    MOV ESI,dword ptr [ESP + 0x58]      ; 00550ce7
    MOV EDI,ESI                         ; 00550ceb
    SUB ECX,ECX                         ; 00550ced
    DEC ECX                             ; 00550cef
    XOR EAX,EAX                         ; 00550cf0
    SCASB.REPNE ES:EDI                  ; 00550cf2
    NOT ECX                             ; 00550cf4
    DEC ECX                             ; 00550cf6
    XOR EDX,EDX                         ; 00550cf7
    XOR EBX,EBX                         ; 00550cf9
    MOV dword ptr [ESP + 0x2c],ECX      ; 00550cfb
    MOV dword ptr [ESP + 0x3c],EDX      ; 00550cff
    TEST ECX,ECX                        ; 00550d03
    JLE 0x00550d30                      ; 00550d05
        ;   XREF to: 00550d30 (CONDITIONAL_JUMP)  ; LAB_00550d30
    XOR EAX,EAX                         ; 00550d07
        ;   Label: LAB_00550d07
    MOV AL,byte ptr [ESI]               ; 00550d09
    PUSH EAX                            ; 00550d0b
    INC EBX                             ; 00550d0c
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 00550d0d
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 00550d12
    INC ESI                             ; 00550d15
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00550d16
    MOV byte ptr [ESP + EBX*0x1 + 0xb],AL ; 00550d1a
    CMP EBX,ECX                         ; 00550d1e
    JL 0x00550d07                       ; 00550d20
        ;   XREF to: 00550d07 (CONDITIONAL_JUMP)  ; LAB_00550d07
    LEA EAX,[EAX]                       ; 00550d22
    LEA EDX,[EDX]                       ; 00550d28
    MOV EAX,EAX                         ; 00550d2e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00550d30
        ;   Label: LAB_00550d30
    XOR DL,DL                           ; 00550d34
    MOV byte ptr [ESP + EAX*0x1 + 0xc],DL ; 00550d36
    MOV EAX,dword ptr [ESP + 0x54]      ; 00550d3a
    XOR EBX,EBX                         ; 00550d3e
    MOV ESI,dword ptr [EAX]             ; 00550d40
    MOV dword ptr [ESP + 0x18],EBX      ; 00550d42
    TEST ESI,ESI                        ; 00550d46
    JLE 0x00550dbb                      ; 00550d48
        ;   XREF to: 00550dbb (CONDITIONAL_JUMP)  ; LAB_00550dbb
    MOV EAX,dword ptr [ESP + 0x64]      ; 00550d4a
    DEC EAX                             ; 00550d4e
    MOV dword ptr [ESP + 0x1c],EBX      ; 00550d4f
    MOV dword ptr [ESP + 0x20],EAX      ; 00550d53
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00550d57
        ;   Label: LAB_00550d57
    MOV dword ptr [ESP + 0x24],EAX      ; 00550d5b
    MOV EAX,dword ptr [ESP + 0x64]      ; 00550d5f
    MOV EDI,dword ptr [ESP + 0x64]      ; 00550d63
    MOV dword ptr [ESP + 0x28],EAX      ; 00550d67
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00550d6b
    IMUL EAX,EDI                        ; 00550d6f
    XOR EBX,EBX                         ; 00550d72
    MOV EBP,dword ptr [ESP + 0x5c]      ; 00550d74
    MOV dword ptr [ESP + 0x30],EBX      ; 00550d78
    ADD EAX,EBP                         ; 00550d7c
    MOV dword ptr [ESP + 0x38],EBX      ; 00550d7e
    MOV dword ptr [ESP + 0x34],EAX      ; 00550d82
    MOV EAX,dword ptr [ESP + 0x54]      ; 00550d86
        ;   Label: LAB_00550d86
    ADD EAX,dword ptr [ESP + 0x24]      ; 00550d8a
    MOV EAX,dword ptr [EAX + 0x4]       ; 00550d8e
    MOV ECX,dword ptr [ESP + 0x38]      ; 00550d91
    CMP ECX,dword ptr [EAX + 0x410]     ; 00550d95
    JL 0x00550dc7                       ; 00550d9b
        ;   XREF to: 00550dc7 (CONDITIONAL_JUMP)  ; LAB_00550dc7
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00550d9d
    MOV EBP,dword ptr [ESP + 0x18]      ; 00550da1
    MOV ECX,dword ptr [ESP + 0x54]      ; 00550da5
    ADD EDI,0x4                         ; 00550da9
    INC EBP                             ; 00550dac
    MOV EDX,dword ptr [ECX]             ; 00550dad
    MOV dword ptr [ESP + 0x1c],EDI      ; 00550daf
    MOV dword ptr [ESP + 0x18],EBP      ; 00550db3
    CMP EBP,EDX                         ; 00550db7
    JL 0x00550d57                       ; 00550db9
        ;   XREF to: 00550d57 (CONDITIONAL_JUMP)  ; LAB_00550d57
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00550dbb
        ;   Label: LAB_00550dbb
    ADD ESP,0x40                        ; 00550dbf
    POP EBP                             ; 00550dc2
    POP EDI                             ; 00550dc3
    POP ESI                             ; 00550dc4
    POP EBX                             ; 00550dc5
    RET                                 ; 00550dc6
    MOV ESI,dword ptr [ESP + 0x30]      ; 00550dc7
        ;   Label: LAB_00550dc7
    MOV EAX,dword ptr [EAX + 0x414]     ; 00550dcb
    ADD EAX,ESI                         ; 00550dd1
    MOV EBP,dword ptr [EAX]             ; 00550dd3
    MOV EDI,EBP                         ; 00550dd5
    SUB ECX,ECX                         ; 00550dd7
    DEC ECX                             ; 00550dd9
    XOR EAX,EAX                         ; 00550dda
    SCASB.REPNE ES:EDI                  ; 00550ddc
    NOT ECX                             ; 00550dde
    DEC ECX                             ; 00550de0
    SUB ECX,dword ptr [ESP + 0x2c]      ; 00550de1
    MOV EDI,ESP                         ; 00550de5
    LEA ESI,[ECX + EBP*0x1]             ; 00550de7
    PUSH EDI                            ; 00550dea
    MOV AL,byte ptr [ESI]               ; 00550deb
        ;   Label: LAB_00550deb
    MOV byte ptr [EDI],AL               ; 00550ded
    CMP AL,0x0                          ; 00550def
    JZ 0x00550e03                       ; 00550df1
        ;   XREF to: 00550e03 (CONDITIONAL_JUMP)  ; LAB_00550e03
    MOV AL,byte ptr [ESI + 0x1]         ; 00550df3
    ADD ESI,0x2                         ; 00550df6
    MOV byte ptr [EDI + 0x1],AL         ; 00550df9
    ADD EDI,0x2                         ; 00550dfc
    CMP AL,0x0                          ; 00550dff
    JNZ 0x00550deb                      ; 00550e01
        ;   XREF to: 00550deb (CONDITIONAL_JUMP)  ; LAB_00550deb
    POP EDI                             ; 00550e03
        ;   Label: LAB_00550e03
    LEA EAX,[ESP + 0xc]                 ; 00550e04
    PUSH EAX                            ; 00550e08
    LEA EAX,[ESP + 0x4]                 ; 00550e09
    PUSH EAX                            ; 00550e0d
    CALL crt_string.c_strcmp_FUN_005fef20 ; 00550e0e
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 00550e13
    TEST EAX,EAX                        ; 00550e16
    JNZ 0x00550e72                      ; 00550e18
        ;   XREF to: 00550e72 (CONDITIONAL_JUMP)  ; LAB_00550e72
    MOV EAX,dword ptr [ESP + 0x18]      ; 00550e1a
    XOR EBX,EBX                         ; 00550e1e
    TEST EAX,EAX                        ; 00550e20
    JLE 0x00550e39                      ; 00550e22
        ;   XREF to: 00550e39 (CONDITIONAL_JUMP)  ; LAB_00550e39
    MOV ESI,dword ptr [ESP + 0x54]      ; 00550e24
    PUSH EBP                            ; 00550e28
        ;   Label: LAB_00550e28
    MOV ECX,dword ptr [ESI + 0x4]       ; 00550e29
    PUSH ECX                            ; 00550e2c
    CALL engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140 ; 00550e2d
        ;   XREF to: 00550140 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140(CPodFile * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00550e32
    TEST EAX,EAX                        ; 00550e35
    JL 0x00550e8b                       ; 00550e37
        ;   XREF to: 00550e8b (CONDITIONAL_JUMP)  ; LAB_00550e8b
    CMP EBX,dword ptr [ESP + 0x18]      ; 00550e39
        ;   Label: LAB_00550e39
    JNZ 0x00550e72                      ; 00550e3d
        ;   XREF to: 00550e72 (CONDITIONAL_JUMP)  ; LAB_00550e72
    MOV EDI,dword ptr [ESP + 0x20]      ; 00550e3f
    PUSH EDI                            ; 00550e43
    PUSH EBP                            ; 00550e44
    MOV EBP,dword ptr [ESP + 0x3c]      ; 00550e45
    PUSH EBP                            ; 00550e49
    CALL crt_string.c__strncpy_FUN_00600f40 ; 00550e4a
        ;   XREF to: 00600f40 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_00600f40(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 00550e4f
    MOV EAX,dword ptr [ESP + 0x28]      ; 00550e52
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00550e56
    MOV EBX,dword ptr [ESP + 0x60]      ; 00550e5a
    LEA EDX,[EAX + EBP*0x1]             ; 00550e5e
    INC ECX                             ; 00550e61
    MOV dword ptr [ESP + 0x34],EDX      ; 00550e62
    MOV dword ptr [ESP + 0x3c],ECX      ; 00550e66
    CMP ECX,EBX                         ; 00550e6a
    JGE 0x00550dbb                      ; 00550e6c
        ;   XREF to: 00550dbb (CONDITIONAL_JUMP)  ; LAB_00550dbb
    MOV EDI,dword ptr [ESP + 0x38]      ; 00550e72
        ;   Label: LAB_00550e72
    MOV ESI,dword ptr [ESP + 0x30]      ; 00550e76
    INC EDI                             ; 00550e7a
    ADD ESI,0x14                        ; 00550e7b
    MOV dword ptr [ESP + 0x38],EDI      ; 00550e7e
    MOV dword ptr [ESP + 0x30],ESI      ; 00550e82
    JMP 0x00550d86                      ; 00550e86
        ;   XREF to: 00550d86 (UNCONDITIONAL_JUMP)  ; LAB_00550d86
    MOV EDX,dword ptr [ESP + 0x18]      ; 00550e8b
        ;   Label: LAB_00550e8b
    INC EBX                             ; 00550e8f
    ADD ESI,0x4                         ; 00550e90
    CMP EBX,EDX                         ; 00550e93
    JL 0x00550e28                       ; 00550e95
        ;   XREF to: 00550e28 (CONDITIONAL_JUMP)  ; LAB_00550e28
    JMP 0x00550e39                      ; 00550e97
        ;   XREF to: 00550e39 (UNCONDITIONAL_JUMP)  ; LAB_00550e39


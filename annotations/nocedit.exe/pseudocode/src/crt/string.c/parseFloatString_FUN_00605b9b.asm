; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_string_c_parseFloatString_FUN_00605b9b(char *str,void *result,char **endptr)
;
; Parameters:
; char *           Stack[0x4]:4   str
; void *           Stack[0x8]:4   result
; char * *         Stack[0xc]:4   endptr
; Local Variables:
; undefined4       Stack[-0x44]:4  uStackY_44
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; ushort           Stack[-0x24]:2  local_24
; byte *           Stack[-0x20]:4  local_20
;
; XREF[1]:
;   crt_string.c_strtod_main_FUN_00605d5d at 00605d72
;
; Called Functions:
;   crt_unknown.c_FUN_00603d60
;   crt_unknown.c_FUN_0060b586
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00605b9b
        ;   Label: crt_string.c_parseFloatString_FUN_00605b9b
    MOV EBP,ESP                         ; 00605b9c
    PUSH EBX                            ; 00605b9e
    PUSH ESI                            ; 00605b9f
    PUSH EDI                            ; 00605ba0
    SUB ESP,0x30                        ; 00605ba1
    MOV EAX,dword ptr [EBP + 0x8]       ; 00605ba4
    MOV dword ptr [EBP + -0x1c],EAX     ; 00605ba7
    MOV DL,byte ptr [EAX]               ; 00605baa
        ;   Label: LAB_00605baa
    CMP DL,0x20                         ; 00605bac
    JZ 0x00605bbb                       ; 00605baf
        ;   XREF to: 00605bbb (CONDITIONAL_JUMP)  ; LAB_00605bbb
    CMP DL,0x9                          ; 00605bb1
    JC 0x00605bbe                       ; 00605bb4
        ;   XREF to: 00605bbe (CONDITIONAL_JUMP)  ; LAB_00605bbe
    CMP DL,0xd                          ; 00605bb6
    JA 0x00605bbe                       ; 00605bb9
        ;   XREF to: 00605bbe (CONDITIONAL_JUMP)  ; LAB_00605bbe
    INC EAX                             ; 00605bbb
        ;   Label: LAB_00605bbb
    JMP 0x00605baa                      ; 00605bbc
        ;   XREF to: 00605baa (UNCONDITIONAL_JUMP)  ; LAB_00605baa
    XOR DH,DH                           ; 00605bbe
        ;   Label: LAB_00605bbe
    LEA EBX,[EAX + 0x1]                 ; 00605bc0
    MOV byte ptr [EBP + -0x10],DH       ; 00605bc3
    CMP DL,0x2b                         ; 00605bc6
    JNZ 0x00605bcf                      ; 00605bc9
        ;   XREF to: 00605bcf (CONDITIONAL_JUMP)  ; LAB_00605bcf
    MOV EAX,EBX                         ; 00605bcb
    JMP 0x00605bdb                      ; 00605bcd
        ;   XREF to: 00605bdb (UNCONDITIONAL_JUMP)  ; LAB_00605bdb
    CMP DL,0x2d                         ; 00605bcf
        ;   Label: LAB_00605bcf
    JNZ 0x00605bdb                      ; 00605bd2
        ;   XREF to: 00605bdb (CONDITIONAL_JUMP)  ; LAB_00605bdb
    MOV CL,0x1                          ; 00605bd4
    MOV EAX,EBX                         ; 00605bd6
    MOV byte ptr [EBP + -0x10],CL       ; 00605bd8
    MOV DH,0x30                         ; 00605bdb
        ;   Label: LAB_00605bdb
    XOR EBX,EBX                         ; 00605bdd
    XOR EDI,EDI                         ; 00605bdf
    MOV DL,byte ptr [EAX]               ; 00605be1
        ;   Label: LAB_00605be1
    INC EAX                             ; 00605be3
    CMP DL,0x2e                         ; 00605be4
    JNZ 0x00605bfb                      ; 00605be7
        ;   XREF to: 00605bfb (CONDITIONAL_JUMP)  ; LAB_00605bfb
    MOV CL,byte ptr [EBP + -0x10]       ; 00605be9
    TEST CL,0x8                         ; 00605bec
    JNZ 0x00605c23                      ; 00605bef
        ;   XREF to: 00605c23 (CONDITIONAL_JUMP)  ; LAB_00605c23
    MOV CH,CL                           ; 00605bf1
    OR CH,0x8                           ; 00605bf3
    MOV byte ptr [EBP + -0x10],CH       ; 00605bf6
    JMP 0x00605be1                      ; 00605bf9
        ;   XREF to: 00605be1 (UNCONDITIONAL_JUMP)  ; LAB_00605be1
    CMP DL,0x30                         ; 00605bfb
        ;   Label: LAB_00605bfb
    JC 0x00605c23                       ; 00605bfe
        ;   XREF to: 00605c23 (CONDITIONAL_JUMP)  ; LAB_00605c23
    CMP DL,0x39                         ; 00605c00
    JA 0x00605c23                       ; 00605c03
        ;   XREF to: 00605c23 (CONDITIONAL_JUMP)  ; LAB_00605c23
    TEST byte ptr [EBP + -0x10],0x8     ; 00605c05
    JZ 0x00605c0c                       ; 00605c09
        ;   XREF to: 00605c0c (CONDITIONAL_JUMP)  ; LAB_00605c0c
    INC EDI                             ; 00605c0b
    OR DH,DL                            ; 00605c0c
        ;   Label: LAB_00605c0c
    CMP DH,0x30                         ; 00605c0e
    JZ 0x00605c1d                       ; 00605c11
        ;   XREF to: 00605c1d (CONDITIONAL_JUMP)  ; LAB_00605c1d
    CMP EBX,0x13                        ; 00605c13
    JGE 0x00605c1c                      ; 00605c16
        ;   XREF to: 00605c1c (CONDITIONAL_JUMP)  ; LAB_00605c1c
    MOV byte ptr [EBX + EBP*0x1 + -0x3c],DL ; 00605c18
    INC EBX                             ; 00605c1c
        ;   Label: LAB_00605c1c
    OR byte ptr [EBP + -0x10],0x4       ; 00605c1d
        ;   Label: LAB_00605c1d
    JMP 0x00605be1                      ; 00605c21
        ;   XREF to: 00605be1 (UNCONDITIONAL_JUMP)  ; LAB_00605be1
    MOV DH,byte ptr [EBP + -0x10]       ; 00605c23
        ;   Label: LAB_00605c23
    XOR ESI,ESI                         ; 00605c26
    TEST DH,0x4                         ; 00605c28
    JZ 0x00605cad                       ; 00605c2b
        ;   XREF to: 00605cad (CONDITIONAL_JUMP)  ; LAB_00605cad
    CMP DL,0x65                         ; 00605c31
    JZ 0x00605c3f                       ; 00605c34
        ;   XREF to: 00605c3f (CONDITIONAL_JUMP)  ; LAB_00605c3f
    CMP DL,0x45                         ; 00605c36
    JNZ 0x00605ca9                      ; 00605c39
        ;   XREF to: 00605ca9 (CONDITIONAL_JUMP)  ; LAB_00605ca9
    LEA EDX,[EAX + -0x1]                ; 00605c3f
        ;   Label: LAB_00605c3f
    MOV CL,byte ptr [EAX]               ; 00605c42
    MOV dword ptr [EBP + -0x18],EDX     ; 00605c44
    LEA EDX,[EAX + 0x1]                 ; 00605c47
    CMP CL,0x2b                         ; 00605c4a
    JNZ 0x00605c53                      ; 00605c4d
        ;   XREF to: 00605c53 (CONDITIONAL_JUMP)  ; LAB_00605c53
    MOV EAX,EDX                         ; 00605c4f
    JMP 0x00605c63                      ; 00605c51
        ;   XREF to: 00605c63 (UNCONDITIONAL_JUMP)  ; LAB_00605c63
    CMP CL,0x2d                         ; 00605c53
        ;   Label: LAB_00605c53
    JNZ 0x00605c63                      ; 00605c56
        ;   XREF to: 00605c63 (CONDITIONAL_JUMP)  ; LAB_00605c63
    MOV CL,byte ptr [EBP + -0x10]       ; 00605c58
    OR CL,0x2                           ; 00605c5b
    MOV EAX,EDX                         ; 00605c5e
    MOV byte ptr [EBP + -0x10],CL       ; 00605c60
    AND byte ptr [EBP + -0x10],0xfb     ; 00605c63
        ;   Label: LAB_00605c63
    MOV DL,byte ptr [EAX]               ; 00605c67
        ;   Label: LAB_00605c67
    CMP DL,0x30                         ; 00605c69
    JC 0x00605c96                       ; 00605c6c
        ;   XREF to: 00605c96 (CONDITIONAL_JUMP)  ; LAB_00605c96
    CMP DL,0x39                         ; 00605c6e
    JA 0x00605c96                       ; 00605c71
        ;   XREF to: 00605c96 (CONDITIONAL_JUMP)  ; LAB_00605c96
    CMP ESI,0x3e8                       ; 00605c73
    JGE 0x00605c8a                      ; 00605c79
        ;   XREF to: 00605c8a (CONDITIONAL_JUMP)  ; LAB_00605c8a
    IMUL ESI,ESI,0xa                    ; 00605c7b
    MOV dword ptr [EBP + -0x14],ESI     ; 00605c7e
    MOVZX ESI,DL                        ; 00605c81
    ADD ESI,dword ptr [EBP + -0x14]     ; 00605c84
    SUB ESI,0x30                        ; 00605c87
    MOV DL,byte ptr [EBP + -0x10]       ; 00605c8a
        ;   Label: LAB_00605c8a
    OR DL,0x4                           ; 00605c8d
    INC EAX                             ; 00605c90
    MOV byte ptr [EBP + -0x10],DL       ; 00605c91
    JMP 0x00605c67                      ; 00605c94
        ;   XREF to: 00605c67 (UNCONDITIONAL_JUMP)  ; LAB_00605c67
    TEST byte ptr [EBP + -0x10],0x2     ; 00605c96
        ;   Label: LAB_00605c96
    JZ 0x00605c9e                       ; 00605c9a
        ;   XREF to: 00605c9e (CONDITIONAL_JUMP)  ; LAB_00605c9e
    NEG ESI                             ; 00605c9c
    TEST byte ptr [EBP + -0x10],0x4     ; 00605c9e
        ;   Label: LAB_00605c9e
    JNZ 0x00605caa                      ; 00605ca2
        ;   XREF to: 00605caa (CONDITIONAL_JUMP)  ; LAB_00605caa
    MOV EAX,dword ptr [EBP + -0x18]     ; 00605ca4
    JMP 0x00605caa                      ; 00605ca7
        ;   XREF to: 00605caa (UNCONDITIONAL_JUMP)  ; LAB_00605caa
    DEC EAX                             ; 00605ca9
        ;   Label: LAB_00605ca9
    MOV dword ptr [EBP + -0x1c],EAX     ; 00605caa
        ;   Label: LAB_00605caa
    MOV ECX,dword ptr [EBP + 0x10]      ; 00605cad
        ;   Label: LAB_00605cad
    TEST ECX,ECX                        ; 00605cb0
    JZ 0x00605cb9                       ; 00605cb2
        ;   XREF to: 00605cb9 (CONDITIONAL_JUMP)  ; LAB_00605cb9
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00605cb4
    MOV dword ptr [ECX],EAX             ; 00605cb7
    SUB ESI,EDI                         ; 00605cb9
        ;   Label: LAB_00605cb9
    CMP EBX,0x13                        ; 00605cbb
    JLE 0x00605cca                      ; 00605cbe
        ;   XREF to: 00605cca (CONDITIONAL_JUMP)  ; LAB_00605cca
    SUB EBX,0x13                        ; 00605cc0
    ADD ESI,EBX                         ; 00605cc3
    MOV EBX,0x13                        ; 00605cc5
    TEST EBX,EBX                        ; 00605cca
        ;   Label: LAB_00605cca
    JLE 0x00605cd9                      ; 00605ccc
        ;   XREF to: 00605cd9 (CONDITIONAL_JUMP)  ; LAB_00605cd9
    CMP byte ptr [EBX + EBP*0x1 + -0x3d],0x30 ; 00605cce
    JNZ 0x00605cd9                      ; 00605cd3
        ;   XREF to: 00605cd9 (CONDITIONAL_JUMP)  ; LAB_00605cd9
    INC ESI                             ; 00605cd5
    DEC EBX                             ; 00605cd6
    JMP 0x00605cca                      ; 00605cd7
        ;   XREF to: 00605cca (UNCONDITIONAL_JUMP)  ; LAB_00605cca
    TEST EBX,EBX                        ; 00605cd9
        ;   Label: LAB_00605cd9
    JNZ 0x00605cef                      ; 00605cdb
        ;   XREF to: 00605cef (CONDITIONAL_JUMP)  ; LAB_00605cef
    MOV EAX,dword ptr [EBP + 0xc]       ; 00605cdd
    MOV word ptr [EAX + 0x8],0x0        ; 00605ce0
    MOV dword ptr [EAX + 0x4],EBX       ; 00605ce6
    MOV dword ptr [EAX],EBX             ; 00605ce9
    XOR EAX,EAX                         ; 00605ceb
    JMP 0x00605d55                      ; 00605ced
        ;   XREF to: 00605d55 (UNCONDITIONAL_JUMP)  ; LAB_00605d55
    XOR AL,AL                           ; 00605cef
        ;   Label: LAB_00605cef
    LEA EDX,[EBP + -0x28]               ; 00605cf1
    MOV byte ptr [EBX + EBP*0x1 + -0x3c],AL ; 00605cf4
    LEA EAX,[EBP + -0x3c]               ; 00605cf8
    CALL crt_unknown.c_FUN_0060b586     ; 00605cfb
        ;   XREF to: 0060b586 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_0060b586(byte * param_1, undefined8 * param_2)
    TEST ESI,ESI                        ; 00605d00
    JZ 0x00605d11                       ; 00605d02
        ;   XREF to: 00605d11 (CONDITIONAL_JUMP)  ; LAB_00605d11
    PUSH ESI                            ; 00605d04
    LEA EAX,[EBP + -0x28]               ; 00605d05
    PUSH EAX                            ; 00605d08
    CALL crt_unknown.c_FUN_00603d60     ; 00605d09
        ;   XREF to: 00603d60 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_00603d60()
    ADD ESP,0x8                         ; 00605d0e
    TEST byte ptr [EBP + -0x10],0x1     ; 00605d11
        ;   Label: LAB_00605d11
    JZ 0x00605d1b                       ; 00605d15
        ;   XREF to: 00605d1b (CONDITIONAL_JUMP)  ; LAB_00605d1b
    OR byte ptr [EBP + -0x1f],0x80      ; 00605d17
    MOV EDX,dword ptr [EBP + 0xc]       ; 00605d1b
        ;   Label: LAB_00605d1b
    MOV EAX,dword ptr [EBP + -0x20]     ; 00605d1e
    MOV word ptr [EDX + 0x8],AX         ; 00605d21
    MOV EAX,dword ptr [EBP + -0x24]     ; 00605d25
    MOV dword ptr [EDX + 0x4],EAX       ; 00605d28
    MOV EAX,dword ptr [EBP + -0x28]     ; 00605d2b
    MOV dword ptr [EDX],EAX             ; 00605d2e
    LEA EAX,[ESI + EBX*0x1 + -0x1]      ; 00605d30
    CMP EAX,0x134                       ; 00605d34
    JLE 0x00605d42                      ; 00605d39
        ;   XREF to: 00605d42 (CONDITIONAL_JUMP)  ; LAB_00605d42
    MOV EAX,0x3                         ; 00605d3b
    JMP 0x00605d55                      ; 00605d40
        ;   XREF to: 00605d55 (UNCONDITIONAL_JUMP)  ; LAB_00605d55
    CMP EAX,0xfffffecc                  ; 00605d42
        ;   Label: LAB_00605d42
    JGE 0x00605d50                      ; 00605d47
        ;   XREF to: 00605d50 (CONDITIONAL_JUMP)  ; LAB_00605d50
    MOV EAX,0x2                         ; 00605d49
    JMP 0x00605d55                      ; 00605d4e
        ;   XREF to: 00605d55 (UNCONDITIONAL_JUMP)  ; LAB_00605d55
    MOV EAX,0x1                         ; 00605d50
        ;   Label: LAB_00605d50
    LEA ESP,[EBP + -0xc]                ; 00605d55
        ;   Label: LAB_00605d55
    POP EDI                             ; 00605d58
    POP ESI                             ; 00605d59
    POP EBX                             ; 00605d5a
    POP EBP                             ; 00605d5b
    RET                                 ; 00605d5c


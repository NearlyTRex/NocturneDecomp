; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_string_c_mb_get_last_char_FUN_00605aa0(char *start,char *end)
;
; Parameters:
; char *           Stack[0x4]:4   start
; char *           Stack[0x8]:4   end
;
; XREF[1]:
;   crt_file.c_makepath_FUN_005febfc at 005fece3
;
; Referenced Globals:
;   int g_MultibyteLocaleActive
;   char[256] g_LeadByteTable
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00605aa0
        ;   Label: crt_string.c_mb_get_last_char_FUN_00605aa0
    PUSH ESI                            ; 00605aa1
    PUSH EDI                            ; 00605aa2
    MOV ESI,dword ptr [0x03f9c020]      ; 00605aa3 | g_MultibyteLocaleActive
    MOV EBX,dword ptr [ESP + 0x10]      ; 00605aa9
    MOV EDI,dword ptr [ESP + 0x14]      ; 00605aad
    CMP EBX,EDI                         ; 00605ab1
    JC 0x00605ab9                       ; 00605ab3
        ;   XREF to: 00605ab9 (CONDITIONAL_JUMP)  ; LAB_00605ab9
    XOR EDX,EDX                         ; 00605ab5
    JMP 0x00605b17                      ; 00605ab7
        ;   XREF to: 00605b17 (UNCONDITIONAL_JUMP)  ; LAB_00605b17
    LEA EAX,[EDI + -0x1]                ; 00605ab9
        ;   Label: LAB_00605ab9
    TEST ESI,ESI                        ; 00605abc
    JZ 0x00605ae4                       ; 00605abe
        ;   XREF to: 00605ae4 (CONDITIONAL_JUMP)  ; LAB_00605ae4
    XOR EDX,EDX                         ; 00605ac0
    MOV DL,byte ptr [EAX]               ; 00605ac2
    MOV DL,byte ptr [EDX + 0x3f9c031]   ; 00605ac4 | g_LeadByteTable
    AND DL,0x1                          ; 00605aca
    AND EDX,0xff                        ; 00605acd
    JZ 0x00605ae4                       ; 00605ad3
        ;   XREF to: 00605ae4 (CONDITIONAL_JUMP)  ; LAB_00605ae4
    LEA EDX,[EAX + -0x1]                ; 00605ad5
    MOV EAX,EDX                         ; 00605ad8
    MOV dword ptr [0x03f9c020],ESI      ; 00605ada | g_MultibyteLocaleActive
    POP EDI                             ; 00605ae0
    POP ESI                             ; 00605ae1
    POP EBX                             ; 00605ae2
    RET                                 ; 00605ae3
    DEC EAX                             ; 00605ae4
        ;   Label: LAB_00605ae4
    CMP EBX,EAX                         ; 00605ae5
    JA 0x00605b02                       ; 00605ae7
        ;   XREF to: 00605b02 (CONDITIONAL_JUMP)  ; LAB_00605b02
    TEST ESI,ESI                        ; 00605ae9
    JZ 0x00605b02                       ; 00605aeb
        ;   XREF to: 00605b02 (CONDITIONAL_JUMP)  ; LAB_00605b02
    XOR EDX,EDX                         ; 00605aed
    MOV DL,byte ptr [EAX]               ; 00605aef
    MOV DL,byte ptr [EDX + 0x3f9c031]   ; 00605af1 | g_LeadByteTable
    AND DL,0x1                          ; 00605af7
    AND EDX,0xff                        ; 00605afa
    JNZ 0x00605ae4                      ; 00605b00
        ;   XREF to: 00605ae4 (CONDITIONAL_JUMP)  ; LAB_00605ae4
    MOV EDX,EDI                         ; 00605b02
        ;   Label: LAB_00605b02
    SUB EDX,EAX                         ; 00605b04
    MOV EBX,0x2                         ; 00605b06
    MOV EAX,EDX                         ; 00605b0b
    SAR EDX,0x1f                        ; 00605b0d
    IDIV EBX                            ; 00605b10
    DEC EDI                             ; 00605b12
    SUB EDI,EDX                         ; 00605b13
    MOV EDX,EDI                         ; 00605b15
    MOV EAX,EDX                         ; 00605b17
        ;   Label: LAB_00605b17
    MOV dword ptr [0x03f9c020],ESI      ; 00605b19 | g_MultibyteLocaleActive
    POP EDI                             ; 00605b1f
    POP ESI                             ; 00605b20
    POP EBX                             ; 00605b21
    RET                                 ; 00605b22


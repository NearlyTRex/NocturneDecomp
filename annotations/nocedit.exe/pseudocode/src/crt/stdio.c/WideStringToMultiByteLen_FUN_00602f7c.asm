; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_WideStringToMultiByteLen_FUN_00602f7c(wchar_t *wide_string_offset,ushort segment,int max_chars)
;
; Parameters:
; wchar_t *        Stack[0x4]:4   wide_string_offset
; ushort           Stack[0x8]:2   segment
; int              Stack[0xc]:4   max_chars
; Local Variables:
; undefined1       Stack[-0x14]:1  local_14
;
; XREF[1]:
;   crt_stdio.c_ConvertFormatSpec_FUN_00603238 at 00603581
;
; Called Functions:
;   crt_stdio.c_WideCharToSingleByte_FUN_0060acf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00602f7c
        ;   Label: crt_stdio.c_WideStringToMultiByteLen_FUN_00602f7c
    PUSH ESI                            ; 00602f7d
    PUSH EDI                            ; 00602f7e
    PUSH ES                             ; 00602f7f
    SUB ESP,0x4                         ; 00602f80
    MOV EDI,dword ptr [ESP + 0x20]      ; 00602f83
    LES EBX,[ESP + 0x18]                ; 00602f87
    XOR ESI,ESI                         ; 00602f8b
    CMP EDI,-0x1                        ; 00602f8d
    JNZ 0x00602fba                      ; 00602f90
        ;   XREF to: 00602fba (CONDITIONAL_JUMP)  ; LAB_00602fba
    MOV CX,word ptr ES:[EBX]            ; 00602f92
        ;   Label: LAB_00602f92
    TEST CX,CX                          ; 00602f96
    JZ 0x00602fea                       ; 00602f99
        ;   XREF to: 00602fea (CONDITIONAL_JUMP)  ; LAB_00602fea
    XOR EAX,EAX                         ; 00602f9b
    MOV AX,CX                           ; 00602f9d
    PUSH EAX                            ; 00602fa0
    LEA EAX,[ESP + 0x4]                 ; 00602fa1
    PUSH EAX                            ; 00602fa5
    ADD EBX,0x2                         ; 00602fa6
    CALL crt_stdio.c_WideCharToSingleByte_FUN_0060acf0 ; 00602fa9
        ;   XREF to: 0060acf0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_WideCharToSingleByte_FUN_0060acf0(wchar_t wide_char, char * output_buffer)
    ADD ESP,0x8                         ; 00602fae
    CMP EAX,-0x1                        ; 00602fb1
    JZ 0x00602f92                       ; 00602fb4
        ;   XREF to: 00602f92 (CONDITIONAL_JUMP)  ; LAB_00602f92
    ADD ESI,EAX                         ; 00602fb6
    JMP 0x00602f92                      ; 00602fb8
        ;   XREF to: 00602f92 (UNCONDITIONAL_JUMP)  ; LAB_00602f92
    MOV DX,word ptr ES:[EBX]            ; 00602fba
        ;   Label: LAB_00602fba
    TEST DX,DX                          ; 00602fbe
    JZ 0x00602fe6                       ; 00602fc1
        ;   XREF to: 00602fe6 (CONDITIONAL_JUMP)  ; LAB_00602fe6
    CMP ESI,EDI                         ; 00602fc3
    JG 0x00602fe6                       ; 00602fc5
        ;   XREF to: 00602fe6 (CONDITIONAL_JUMP)  ; LAB_00602fe6
    XOR EAX,EAX                         ; 00602fc7
    MOV AX,DX                           ; 00602fc9
    PUSH EAX                            ; 00602fcc
    LEA EAX,[ESP + 0x4]                 ; 00602fcd
    PUSH EAX                            ; 00602fd1
    ADD EBX,0x2                         ; 00602fd2
    CALL crt_stdio.c_WideCharToSingleByte_FUN_0060acf0 ; 00602fd5
        ;   XREF to: 0060acf0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_WideCharToSingleByte_FUN_0060acf0(wchar_t wide_char, char * output_buffer)
    ADD ESP,0x8                         ; 00602fda
    CMP EAX,-0x1                        ; 00602fdd
    JZ 0x00602fba                       ; 00602fe0
        ;   XREF to: 00602fba (CONDITIONAL_JUMP)  ; LAB_00602fba
    ADD ESI,EAX                         ; 00602fe2
    JMP 0x00602fba                      ; 00602fe4
        ;   XREF to: 00602fba (UNCONDITIONAL_JUMP)  ; LAB_00602fba
    CMP ESI,EDI                         ; 00602fe6
        ;   Label: LAB_00602fe6
    JG 0x00602fee                       ; 00602fe8
        ;   XREF to: 00602fee (CONDITIONAL_JUMP)  ; LAB_00602fee
    MOV EAX,ESI                         ; 00602fea
        ;   Label: LAB_00602fea
    JMP 0x00602ff0                      ; 00602fec
        ;   XREF to: 00602ff0 (UNCONDITIONAL_JUMP)  ; LAB_00602ff0
    MOV EAX,EDI                         ; 00602fee
        ;   Label: LAB_00602fee
    ADD ESP,0x4                         ; 00602ff0
        ;   Label: LAB_00602ff0
    POP ES                              ; 00602ff3
    POP EDI                             ; 00602ff4
    POP ESI                             ; 00602ff5
    POP EBX                             ; 00602ff6
    RET                                 ; 00602ff7


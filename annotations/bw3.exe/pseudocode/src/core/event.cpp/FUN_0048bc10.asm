; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * core_event_cpp_FUN_0048bc10(int *param_1,char *param_2,int param_3,int param_4)
;
;
; XREF[1]:
;   core_event.cpp_FUN_0048c2e0 at 0048c6ab
;
; Referenced Globals:
;   TerminatedCString s_No_opening_parenthesis_005bdeb1
;   TerminatedCString s_Argument_too_long_005bdec8
;   TerminatedCString s_Can_t_find_closing_paren_005bdeda
;   undefined4 DAT_006074b8
;
; Called Functions:
;   crt_string.c_memmove_FUN_005a54c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048bc10
        ;   Label: core_event.cpp_FUN_0048bc10
    PUSH ESI                            ; 0048bc11
    PUSH EDI                            ; 0048bc12
    PUSH EBP                            ; 0048bc13
    MOV ESI,dword ptr [ESP + 0x14]      ; 0048bc14
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0048bc18
    MOV ECX,dword ptr [ESI]             ; 0048bc1c
    MOV AL,byte ptr [ECX]               ; 0048bc1e
        ;   Label: LAB_0048bc1e
    INC AL                              ; 0048bc20
    AND EAX,0xff                        ; 0048bc22
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048bc27 | DAT_006074b8
    JZ 0x0048bc33                       ; 0048bc2e
        ;   XREF to: 0048bc33 (CONDITIONAL_JUMP)  ; LAB_0048bc33
    INC ECX                             ; 0048bc30
    JMP 0x0048bc1e                      ; 0048bc31
        ;   XREF to: 0048bc1e (UNCONDITIONAL_JUMP)  ; LAB_0048bc1e
    MOV EDX,dword ptr [ESP + 0x20]      ; 0048bc33
        ;   Label: LAB_0048bc33
    MOV dword ptr [ESI],ECX             ; 0048bc37
    TEST EDX,EDX                        ; 0048bc39
    JZ 0x0048bc4b                       ; 0048bc3b
        ;   XREF to: 0048bc4b (CONDITIONAL_JUMP)  ; LAB_0048bc4b
    MOV DH,byte ptr [ECX]               ; 0048bc3d
    MOV EAX,ECX                         ; 0048bc3f
    CMP DH,0x28                         ; 0048bc41
    JNZ 0x0048bc84                      ; 0048bc44
        ;   XREF to: 0048bc84 (CONDITIONAL_JUMP)  ; LAB_0048bc84
    LEA EAX,[ECX + 0x1]                 ; 0048bc46
    MOV dword ptr [ESI],EAX             ; 0048bc49
    XOR EBX,EBX                         ; 0048bc4b
        ;   Label: LAB_0048bc4b
    XOR ECX,ECX                         ; 0048bc4d
    TEST EDI,EDI                        ; 0048bc4f
    JLE 0x0048bc7a                      ; 0048bc51
        ;   XREF to: 0048bc7a (CONDITIONAL_JUMP)  ; LAB_0048bc7a
    MOV EAX,dword ptr [ESI]             ; 0048bc53
        ;   Label: LAB_0048bc53
    MOV DL,byte ptr [EAX]               ; 0048bc55
    TEST DL,DL                          ; 0048bc57
    JZ 0x0048bc8e                       ; 0048bc59
        ;   XREF to: 0048bc8e (CONDITIONAL_JUMP)  ; LAB_0048bc8e
    CMP DL,0x28                         ; 0048bc5b
    JNZ 0x0048bc98                      ; 0048bc5e
        ;   XREF to: 0048bc98 (CONDITIONAL_JUMP)  ; LAB_0048bc98
    INC EBX                             ; 0048bc60
    MOV EDX,dword ptr [ESP + 0x18]      ; 0048bc61
        ;   Label: LAB_0048bc61
    MOV EAX,ECX                         ; 0048bc65
    MOV EBP,dword ptr [ESI]             ; 0048bc67
    ADD EDX,EAX                         ; 0048bc69
    MOV AL,byte ptr [EBP]               ; 0048bc6b
    MOV byte ptr [EDX],AL               ; 0048bc6e
    MOV EBP,dword ptr [ESI]             ; 0048bc70
    INC EBP                             ; 0048bc72
    INC ECX                             ; 0048bc73
    MOV dword ptr [ESI],EBP             ; 0048bc74
    CMP ECX,EDI                         ; 0048bc76
    JL 0x0048bc53                       ; 0048bc78
        ;   XREF to: 0048bc53 (CONDITIONAL_JUMP)  ; LAB_0048bc53
    MOV EAX,0x5bdec8                    ; 0048bc7a | = "Argument too long"
        ;   Label: LAB_0048bc7a
    POP EBP                             ; 0048bc7f
    POP EDI                             ; 0048bc80
    POP ESI                             ; 0048bc81
    POP EBX                             ; 0048bc82
    RET                                 ; 0048bc83
    MOV EAX,0x5bdeb1                    ; 0048bc84 | = "No opening parenthesis"
        ;   Label: LAB_0048bc84
    POP EBP                             ; 0048bc89
    POP EDI                             ; 0048bc8a
    POP ESI                             ; 0048bc8b
    POP EBX                             ; 0048bc8c
    RET                                 ; 0048bc8d
    MOV EAX,0x5bdeda                    ; 0048bc8e | = "Can't find closing parenthesis"
        ;   Label: LAB_0048bc8e
    POP EBP                             ; 0048bc93
    POP EDI                             ; 0048bc94
    POP ESI                             ; 0048bc95
    POP EBX                             ; 0048bc96
    RET                                 ; 0048bc97
    CMP DL,0x29                         ; 0048bc98
        ;   Label: LAB_0048bc98
    JNZ 0x0048bc61                      ; 0048bc9b
        ;   XREF to: 0048bc61 (CONDITIONAL_JUMP)  ; LAB_0048bc61
    TEST EBX,EBX                        ; 0048bc9d
    JZ 0x0048bca4                       ; 0048bc9f
        ;   XREF to: 0048bca4 (CONDITIONAL_JUMP)  ; LAB_0048bca4
    DEC EBX                             ; 0048bca1
    JMP 0x0048bc61                      ; 0048bca2
        ;   XREF to: 0048bc61 (UNCONDITIONAL_JUMP)  ; LAB_0048bc61
    INC EAX                             ; 0048bca4
        ;   Label: LAB_0048bca4
    MOV dword ptr [ESI],EAX             ; 0048bca5
    MOV EAX,dword ptr [ESP + 0x18]      ; 0048bca7
    ADD ECX,EAX                         ; 0048bcab
    MOV EBP,EAX                         ; 0048bcad
    MOV EDI,EAX                         ; 0048bcaf
    MOV byte ptr [ECX],0x0              ; 0048bcb1
    SUB ECX,ECX                         ; 0048bcb4
    DEC ECX                             ; 0048bcb6
    XOR EAX,EAX                         ; 0048bcb7
    SCASB.REPNE ES:EDI                  ; 0048bcb9
    NOT ECX                             ; 0048bcbb
    DEC ECX                             ; 0048bcbd
    MOV EAX,ECX                         ; 0048bcbe
    MOV EBX,ECX                         ; 0048bcc0
    TEST ECX,ECX                        ; 0048bcc2
    JLE 0x0048bcdd                      ; 0048bcc4
        ;   XREF to: 0048bcdd (CONDITIONAL_JUMP)  ; LAB_0048bcdd
    LEA EAX,[ECX + EBP*0x1]             ; 0048bcc6
    MOV CL,byte ptr [EAX + -0x1]        ; 0048bcc9
        ;   Label: LAB_0048bcc9
    INC CL                              ; 0048bccc
    AND ECX,0xff                        ; 0048bcce
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048bcd4 | DAT_006074b8
    JNZ 0x0048bd07                      ; 0048bcdb
        ;   XREF to: 0048bd07 (CONDITIONAL_JUMP)  ; LAB_0048bd07
    LEA EAX,[EBX + EBP*0x1]             ; 0048bcdd
        ;   Label: LAB_0048bcdd
    LEA EDI,[EBP + 0x1]                 ; 0048bce0
    MOV byte ptr [EAX],0x0              ; 0048bce3
    MOV AL,byte ptr [EBP]               ; 0048bce6
        ;   Label: LAB_0048bce6
    INC AL                              ; 0048bce9
    AND EAX,0xff                        ; 0048bceb
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048bcf0 | DAT_006074b8
    JZ 0x0048bd0f                       ; 0048bcf7
        ;   XREF to: 0048bd0f (CONDITIONAL_JUMP)  ; LAB_0048bd0f
    PUSH EBX                            ; 0048bcf9
    PUSH EDI                            ; 0048bcfa
    PUSH EBP                            ; 0048bcfb
    DEC EBX                             ; 0048bcfc
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048bcfd
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048bd02
    JMP 0x0048bce6                      ; 0048bd05
        ;   XREF to: 0048bce6 (UNCONDITIONAL_JUMP)  ; LAB_0048bce6
    DEC EBX                             ; 0048bd07
        ;   Label: LAB_0048bd07
    DEC EAX                             ; 0048bd08
    TEST EBX,EBX                        ; 0048bd09
    JG 0x0048bcc9                       ; 0048bd0b
        ;   XREF to: 0048bcc9 (CONDITIONAL_JUMP)  ; LAB_0048bcc9
    JMP 0x0048bcdd                      ; 0048bd0d
        ;   XREF to: 0048bcdd (UNCONDITIONAL_JUMP)  ; LAB_0048bcdd
    MOV EAX,dword ptr [ESI]             ; 0048bd0f
        ;   Label: LAB_0048bd0f
    MOV BL,byte ptr [EAX]               ; 0048bd11
        ;   Label: LAB_0048bd11
    XOR ECX,ECX                         ; 0048bd13
    INC BL                              ; 0048bd15
    MOV CL,BL                           ; 0048bd17
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 0048bd19 | DAT_006074b8
    JZ 0x0048bd25                       ; 0048bd20
        ;   XREF to: 0048bd25 (CONDITIONAL_JUMP)  ; LAB_0048bd25
    INC EAX                             ; 0048bd22
    JMP 0x0048bd11                      ; 0048bd23
        ;   XREF to: 0048bd11 (UNCONDITIONAL_JUMP)  ; LAB_0048bd11
    MOV dword ptr [ESI],EAX             ; 0048bd25
        ;   Label: LAB_0048bd25
    XOR EAX,EAX                         ; 0048bd27
    POP EBP                             ; 0048bd29
    POP EDI                             ; 0048bd2a
    POP ESI                             ; 0048bd2b
    POP EBX                             ; 0048bd2c
    RET                                 ; 0048bd2d


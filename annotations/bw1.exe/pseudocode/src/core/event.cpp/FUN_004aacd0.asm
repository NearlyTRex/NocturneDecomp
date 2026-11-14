; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_event_cpp_FUN_004aacd0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_string.c_memmove_FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aacd0
        ;   Label: core_event.cpp_FUN_004aacd0
    PUSH ESI                            ; 004aacd1
    PUSH EDI                            ; 004aacd2
    PUSH EBP                            ; 004aacd3
    SUB ESP,0x8                         ; 004aacd4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004aacd7
    MOV ESI,dword ptr [ESP + 0x20]      ; 004aacdb
    TEST ESI,ESI                        ; 004aacdf
    JL 0x004aace7                       ; 004aace1
        ;   XREF to: 004aace7 (CONDITIONAL_JUMP)  ; LAB_004aace7
    CMP ESI,dword ptr [EBX]             ; 004aace3
    JLE 0x004aad0a                      ; 004aace5
        ;   XREF to: 004aad0a (CONDITIONAL_JUMP)  ; LAB_004aad0a
    MOV ECX,0x5defef                    ; 004aace7
        ;   Label: LAB_004aace7
    MOV EDI,0x1030                      ; 004aacec
    PUSH 0x5df001                       ; 004aacf1
    MOV dword ptr [0x01d1d400],ECX      ; 004aacf6 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 004aacfc | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004aad02
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004aad07
    CMP dword ptr [EBX],0x5             ; 004aad0a
        ;   Label: LAB_004aad0a
    JGE 0x004aade4                      ; 004aad0d
        ;   XREF to: 004aade4 (CONDITIONAL_JUMP)  ; LAB_004aade4
    MOV EDX,dword ptr [EBX]             ; 004aad13
        ;   Label: LAB_004aad13
    SUB EDX,ESI                         ; 004aad15
    LEA EAX,[EDX*0x4 + 0x0]             ; 004aad17
    SUB EAX,EDX                         ; 004aad1e
    SHL EAX,0x3                         ; 004aad20
    ADD EAX,EDX                         ; 004aad23
    SHL EAX,0x2                         ; 004aad25
    PUSH EAX                            ; 004aad28
    LEA EAX,[ESI*0x4 + 0x0]             ; 004aad29
    SUB EAX,ESI                         ; 004aad30
    SHL EAX,0x3                         ; 004aad32
    ADD EAX,ESI                         ; 004aad35
    LEA EBP,[EBX + 0x4]                 ; 004aad37
    SHL EAX,0x2                         ; 004aad3a
    LEA EDX,[ESI + 0x1]                 ; 004aad3d
    MOV dword ptr [ESP + 0x4],EAX       ; 004aad40
    LEA EDI,[EAX + EBP*0x1]             ; 004aad44
    LEA EAX,[EDX*0x4 + 0x0]             ; 004aad47
    SUB EAX,EDX                         ; 004aad4e
    SHL EAX,0x3                         ; 004aad50
    ADD EAX,EDX                         ; 004aad53
    SHL EAX,0x2                         ; 004aad55
    PUSH EDI                            ; 004aad58
    ADD EBP,EAX                         ; 004aad59
    PUSH EBP                            ; 004aad5b
    MOV dword ptr [ESP + 0x10],EAX      ; 004aad5c
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004aad60
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    MOV EDX,dword ptr [EBX]             ; 004aad65
    SUB EDX,ESI                         ; 004aad67
    LEA EAX,[EDX*0x4 + 0x0]             ; 004aad69
    SUB EAX,EDX                         ; 004aad70
    SHL EAX,0x3                         ; 004aad72
    ADD EAX,EDX                         ; 004aad75
    ADD ESP,0xc                         ; 004aad77
    SHL EAX,0x2                         ; 004aad7a
    MOV EBP,dword ptr [ESP]             ; 004aad7d
    PUSH EAX                            ; 004aad80
    LEA EAX,[EBX + 0x1f8]               ; 004aad81
    ADD EBP,EAX                         ; 004aad87
    MOV ESI,dword ptr [ESP + 0x8]       ; 004aad89
    PUSH EBP                            ; 004aad8d
    ADD EAX,ESI                         ; 004aad8e
    PUSH EAX                            ; 004aad90
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004aad91
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    MOV EAX,dword ptr [EBX]             ; 004aad96
    ADD ESP,0xc                         ; 004aad98
    INC EAX                             ; 004aad9b
    MOV ESI,dword ptr [ESP + 0x24]      ; 004aad9c
    MOV dword ptr [EBX],EAX             ; 004aada0
    PUSH EDI                            ; 004aada2
    MOV AL,byte ptr [ESI]               ; 004aada3
        ;   Label: LAB_004aada3
    MOV byte ptr [EDI],AL               ; 004aada5
    CMP AL,0x0                          ; 004aada7
    JZ 0x004aadbb                       ; 004aada9
        ;   XREF to: 004aadbb (CONDITIONAL_JUMP)  ; LAB_004aadbb
    MOV AL,byte ptr [ESI + 0x1]         ; 004aadab
    ADD ESI,0x2                         ; 004aadae
    MOV byte ptr [EDI + 0x1],AL         ; 004aadb1
    ADD EDI,0x2                         ; 004aadb4
    CMP AL,0x0                          ; 004aadb7
    JNZ 0x004aada3                      ; 004aadb9
        ;   XREF to: 004aada3 (CONDITIONAL_JUMP)  ; LAB_004aada3
    POP EDI                             ; 004aadbb
        ;   Label: LAB_004aadbb
    MOV ESI,dword ptr [ESP + 0x28]      ; 004aadbc
    MOV EDI,EBP                         ; 004aadc0
    PUSH EDI                            ; 004aadc2
    MOV AL,byte ptr [ESI]               ; 004aadc3
        ;   Label: LAB_004aadc3
    MOV byte ptr [EDI],AL               ; 004aadc5
    CMP AL,0x0                          ; 004aadc7
    JZ 0x004aaddb                       ; 004aadc9
        ;   XREF to: 004aaddb (CONDITIONAL_JUMP)  ; LAB_004aaddb
    MOV AL,byte ptr [ESI + 0x1]         ; 004aadcb
    ADD ESI,0x2                         ; 004aadce
    MOV byte ptr [EDI + 0x1],AL         ; 004aadd1
    ADD EDI,0x2                         ; 004aadd4
    CMP AL,0x0                          ; 004aadd7
    JNZ 0x004aadc3                      ; 004aadd9
        ;   XREF to: 004aadc3 (CONDITIONAL_JUMP)  ; LAB_004aadc3
    POP EDI                             ; 004aaddb
        ;   Label: LAB_004aaddb
    ADD ESP,0x8                         ; 004aaddc
    POP EBP                             ; 004aaddf
    POP EDI                             ; 004aade0
    POP ESI                             ; 004aade1
    POP EBX                             ; 004aade2
    RET                                 ; 004aade3
    MOV EAX,0x5df023                    ; 004aade4
        ;   Label: LAB_004aade4
    MOV EDX,0x1031                      ; 004aade9
    PUSH 0x5df035                       ; 004aadee
    MOV [0x01d1d400],EAX                ; 004aadf3 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 004aadf8 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004aadfe
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004aae03
    JMP 0x004aad13                      ; 004aae06
        ;   XREF to: 004aad13 (UNCONDITIONAL_JUMP)  ; LAB_004aad13


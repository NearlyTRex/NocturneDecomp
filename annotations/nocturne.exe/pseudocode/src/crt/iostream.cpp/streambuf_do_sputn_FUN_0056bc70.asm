; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_iostream_cpp_streambuf_do_sputn_FUN_0056bc70(int param_1,undefined4 *param_2,uint param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056bc70
        ;   Label: crt_iostream.cpp_streambuf_do_sputn_FUN_0056bc70
    PUSH ESI                            ; 0056bc71
    PUSH EDI                            ; 0056bc72
    PUSH EBP                            ; 0056bc73
    SUB ESP,0x4                         ; 0056bc74
    MOV EBX,dword ptr [ESP + 0x18]      ; 0056bc77
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0056bc7b
    XOR EDX,EDX                         ; 0056bc7f
    MOV dword ptr [ESP],EDX             ; 0056bc81
    CMP dword ptr [ESP + 0x20],0x0      ; 0056bc84
        ;   Label: LAB_0056bc84
    JLE 0x0056bd17                      ; 0056bc89
        ;   XREF to: 0056bd17 (CONDITIONAL_JUMP)  ; LAB_0056bd17
    MOV EAX,dword ptr [EBX + 0x18]      ; 0056bc8f
    TEST EAX,EAX                        ; 0056bc92
    JZ 0x0056bcfb                       ; 0056bc94
        ;   XREF to: 0056bcfb (CONDITIONAL_JUMP)  ; LAB_0056bcfb
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0056bc96
    MOV EDX,dword ptr [EBX + 0x20]      ; 0056bc99
    SUB EAX,EDX                         ; 0056bc9c
    MOV EDX,EAX                         ; 0056bc9e
    TEST EAX,EAX                        ; 0056bca0
    JLE 0x0056bcde                      ; 0056bca2
        ;   XREF to: 0056bcde (CONDITIONAL_JUMP)  ; LAB_0056bcde
    MOV ESI,dword ptr [ESP + 0x20]      ; 0056bca4
        ;   Label: LAB_0056bca4
    CMP EDX,ESI                         ; 0056bca8
    JLE 0x0056bcae                      ; 0056bcaa
        ;   XREF to: 0056bcae (CONDITIONAL_JUMP)  ; LAB_0056bcae
    MOV EDX,ESI                         ; 0056bcac
    MOV ECX,EDX                         ; 0056bcae
        ;   Label: LAB_0056bcae
    MOV ESI,EBP                         ; 0056bcb0
    MOV EDI,dword ptr [EBX + 0x20]      ; 0056bcb2
    PUSH EDI                            ; 0056bcb5
    MOV EAX,ECX                         ; 0056bcb6
    SHR ECX,0x2                         ; 0056bcb8
    MOVSD.REP ES:EDI,ESI                ; 0056bcbb
    MOV CL,AL                           ; 0056bcbd
    AND CL,0x3                          ; 0056bcbf
    MOVSB.REP ES:EDI,ESI                ; 0056bcc2
    POP EDI                             ; 0056bcc4
    ADD dword ptr [EBX + 0x20],EDX      ; 0056bcc5
    MOV EAX,dword ptr [ESP]             ; 0056bcc8
        ;   Label: LAB_0056bcc8
    MOV ECX,dword ptr [ESP + 0x20]      ; 0056bccb
    ADD EBP,EDX                         ; 0056bccf
    ADD EAX,EDX                         ; 0056bcd1
    SUB ECX,EDX                         ; 0056bcd3
    MOV dword ptr [ESP],EAX             ; 0056bcd5
    MOV dword ptr [ESP + 0x20],ECX      ; 0056bcd8
    JMP 0x0056bc84                      ; 0056bcdc
        ;   XREF to: 0056bc84 (UNCONDITIONAL_JUMP)  ; LAB_0056bc84
    PUSH -0x1                           ; 0056bcde
        ;   Label: LAB_0056bcde
    MOV EAX,dword ptr [EBX + 0x28]      ; 0056bce0
    PUSH EBX                            ; 0056bce3
    CALL dword ptr [EAX + 0xc]          ; 0056bce4
    ADD ESP,0x8                         ; 0056bce7
    CMP EAX,-0x1                        ; 0056bcea
    JZ 0x0056bd17                       ; 0056bced
        ;   XREF to: 0056bd17 (CONDITIONAL_JUMP)  ; LAB_0056bd17
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0056bcef
    MOV EDX,dword ptr [EBX + 0x20]      ; 0056bcf2
    SUB EAX,EDX                         ; 0056bcf5
    MOV EDX,EAX                         ; 0056bcf7
    JMP 0x0056bca4                      ; 0056bcf9
        ;   XREF to: 0056bca4 (UNCONDITIONAL_JUMP)  ; LAB_0056bca4
    XOR EDX,EDX                         ; 0056bcfb
        ;   Label: LAB_0056bcfb
    MOV DL,byte ptr [EBP]               ; 0056bcfd
    PUSH EDX                            ; 0056bd00
    MOV EAX,dword ptr [EBX + 0x28]      ; 0056bd01
    PUSH EBX                            ; 0056bd04
    CALL dword ptr [EAX + 0xc]          ; 0056bd05
    ADD ESP,0x8                         ; 0056bd08
    CMP EAX,-0x1                        ; 0056bd0b
    JZ 0x0056bd17                       ; 0056bd0e
        ;   XREF to: 0056bd17 (CONDITIONAL_JUMP)  ; LAB_0056bd17
    MOV EDX,0x1                         ; 0056bd10
    JMP 0x0056bcc8                      ; 0056bd15
        ;   XREF to: 0056bcc8 (UNCONDITIONAL_JUMP)  ; LAB_0056bcc8
    MOV EAX,dword ptr [ESP]             ; 0056bd17
        ;   Label: LAB_0056bd17
    ADD ESP,0x4                         ; 0056bd1a
    POP EBP                             ; 0056bd1d
    POP EDI                             ; 0056bd1e
    POP ESI                             ; 0056bd1f
    POP EBX                             ; 0056bd20
    RET                                 ; 0056bd21


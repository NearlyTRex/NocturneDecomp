; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_0060b670()
;
;
; XREF[1]:
;   crt_string.c_mbstrncpy_FUN_00605e90 at 00605eb0
;
; Referenced Globals:
;   int g_MultibyteLocaleActive
;   char[256] g_LeadByteTable
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060b670
        ;   Label: crt_unknown.c_FUN_0060b670
    PUSH ESI                            ; 0060b671
    MOV ESI,dword ptr [ESP + 0xc]       ; 0060b672
    MOV EAX,dword ptr [ESP + 0x10]      ; 0060b676
    MOV EBX,dword ptr [ESP + 0x14]      ; 0060b67a
    MOV EDX,ESI                         ; 0060b67e
    TEST EBX,EBX                        ; 0060b680
    JBE 0x0060b695                      ; 0060b682 | LAB_0060b695
        ;   XREF to: 0060b695 (CONDITIONAL_JUMP)
    CMP byte ptr [EAX],0x0              ; 0060b684
        ;   Label: LAB_0060b684
    JZ 0x0060b695                       ; 0060b687 | LAB_0060b695
        ;   XREF to: 0060b695 (CONDITIONAL_JUMP)
    INC EDX                             ; 0060b689
    MOV CL,byte ptr [EAX]               ; 0060b68a
    INC EAX                             ; 0060b68c
    DEC EBX                             ; 0060b68d
    MOV byte ptr [EDX + -0x1],CL        ; 0060b68e
    TEST EBX,EBX                        ; 0060b691
    JA 0x0060b684                       ; 0060b693 | LAB_0060b684
        ;   XREF to: 0060b684 (CONDITIONAL_JUMP)
    CMP byte ptr [EAX],0x0              ; 0060b695
        ;   Label: LAB_0060b695
    JZ 0x0060b6c2                       ; 0060b698 | LAB_0060b6c2
        ;   XREF to: 0060b6c2 (CONDITIONAL_JUMP)
    CMP EDX,ESI                         ; 0060b69a
    JBE 0x0060b6c2                      ; 0060b69c | LAB_0060b6c2
        ;   XREF to: 0060b6c2 (CONDITIONAL_JUMP)
    CMP dword ptr [0x03f9c020],0x0      ; 0060b69e | int g_MultibyteLocaleActive
    JZ 0x0060b6c2                       ; 0060b6a5 | LAB_0060b6c2
        ;   XREF to: 0060b6c2 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [EAX + -0x1]        ; 0060b6a7
    AND EAX,0xff                        ; 0060b6aa
    MOV AL,byte ptr [EAX + 0x3f9c031]   ; 0060b6af | char[256] g_LeadByteTable
    AND AL,0x1                          ; 0060b6b5
    AND EAX,0xff                        ; 0060b6b7
    JZ 0x0060b6c2                       ; 0060b6bc | LAB_0060b6c2
        ;   XREF to: 0060b6c2 (CONDITIONAL_JUMP)
    MOV byte ptr [EDX + -0x1],0x0       ; 0060b6be
    TEST EBX,EBX                        ; 0060b6c2
        ;   Label: LAB_0060b6c2
    JBE 0x0060b6d2                      ; 0060b6c4 | LAB_0060b6d2
        ;   XREF to: 0060b6d2 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0060b6c6
    PUSH 0x0                            ; 0060b6c7
    PUSH EDX                            ; 0060b6c9
    CALL crt_memory.c_memset_FUN_005fde40 ; 0060b6ca | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0060b6cf
    MOV EAX,ESI                         ; 0060b6d2
        ;   Label: LAB_0060b6d2
    POP ESI                             ; 0060b6d4
    POP EBX                             ; 0060b6d5
    RET                                 ; 0060b6d6


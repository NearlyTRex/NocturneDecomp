; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_string_c_parse_uint_FUN_0056d628(char *str,int *result)
;
; Parameters:
; char *           Stack[0x4]:4   str
; int *            Stack[0x8]:4   result
;
; XREF[2]:
;   crt_time.c_parse_dst_rule_FUN_0056d774 at 0056d7a5
;   crt_time.c_parse_timezone_spec_FUN_0056d658 at 0056d6fe
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d628
        ;   Label: crt_string.c_parse_uint_FUN_0056d628
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056d629
    MOV BL,byte ptr [EAX]               ; 0056d62d
    XOR EDX,EDX                         ; 0056d62f
    CMP BL,0x30                         ; 0056d631
    JC 0x0056d64f                       ; 0056d634
        ;   XREF to: 0056d64f (CONDITIONAL_JUMP)  ; LAB_0056d64f
    CMP byte ptr [EAX],0x39             ; 0056d636
        ;   Label: LAB_0056d636
    JA 0x0056d64f                       ; 0056d639
        ;   XREF to: 0056d64f (CONDITIONAL_JUMP)  ; LAB_0056d64f
    IMUL EDX,EDX,0xa                    ; 0056d63b
    XOR EBX,EBX                         ; 0056d63e
    MOV BL,byte ptr [EAX]               ; 0056d640
    INC EAX                             ; 0056d642
    ADD EDX,EBX                         ; 0056d643
    MOV BH,byte ptr [EAX]               ; 0056d645
    SUB EDX,0x30                        ; 0056d647
    CMP BH,0x30                         ; 0056d64a
    JNC 0x0056d636                      ; 0056d64d
        ;   XREF to: 0056d636 (CONDITIONAL_JUMP)  ; LAB_0056d636
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056d64f
        ;   Label: LAB_0056d64f
    MOV dword ptr [EBX],EDX             ; 0056d653
    POP EBX                             ; 0056d655
    RET                                 ; 0056d656


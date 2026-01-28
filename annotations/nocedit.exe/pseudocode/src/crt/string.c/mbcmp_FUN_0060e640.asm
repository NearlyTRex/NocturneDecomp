; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl crt_string_c_mbcmp_FUN_0060e640(char *str1,char *str2)
;
; Parameters:
; char *           Stack[0x4]:4   str1
; char *           Stack[0x8]:4   str2
;
; XREF[2]:
;   crt_string.c_char_in_set_FUN_0060e340 at 0060e379
;   crt_string.c_compare_mb_chars_ci_FUN_0060c790 at 0060c7fe
;
; Referenced Globals:
;   int g_MultibyteLocaleActive
;   char[256] g_LeadByteTable
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060e640
        ;   Label: crt_string.c_mbcmp_FUN_0060e640
    MOV EAX,dword ptr [ESP + 0x8]       ; 0060e641
    MOV EDX,dword ptr [ESP + 0xc]       ; 0060e645
    MOV BL,byte ptr [EAX]               ; 0060e649
    CMP BL,byte ptr [EDX]               ; 0060e64b
    JNZ 0x0060e68e                      ; 0060e64d
        ;   XREF to: 0060e68e (CONDITIONAL_JUMP)  ; LAB_0060e68e
    CMP dword ptr [0x03f9c020],0x0      ; 0060e64f | g_MultibyteLocaleActive
    JZ 0x0060e677                       ; 0060e656
        ;   XREF to: 0060e677 (CONDITIONAL_JUMP)  ; LAB_0060e677
    XOR EBX,EBX                         ; 0060e658
    MOV BL,byte ptr [EAX]               ; 0060e65a
    MOV BL,byte ptr [EBX + 0x3f9c031]   ; 0060e65c | g_LeadByteTable
    AND BL,0x1                          ; 0060e662
    AND EBX,0xff                        ; 0060e665
    JZ 0x0060e677                       ; 0060e66b
        ;   XREF to: 0060e677 (CONDITIONAL_JUMP)  ; LAB_0060e677
    MOV BL,byte ptr [EAX + 0x1]         ; 0060e66d
    MOV CL,byte ptr [EDX + 0x1]         ; 0060e670
    CMP BL,CL                           ; 0060e673
    JNZ 0x0060e67b                      ; 0060e675
        ;   XREF to: 0060e67b (CONDITIONAL_JUMP)  ; LAB_0060e67b
    XOR EAX,EAX                         ; 0060e677
        ;   Label: LAB_0060e677
    POP EBX                             ; 0060e679
    RET                                 ; 0060e67a
    MOV AL,BL                           ; 0060e67b
        ;   Label: LAB_0060e67b
    AND EAX,0xff                        ; 0060e67d
    MOV DL,CL                           ; 0060e682
    AND EDX,0xff                        ; 0060e684
    SUB EAX,EDX                         ; 0060e68a
    POP EBX                             ; 0060e68c
    RET                                 ; 0060e68d
    XOR EBX,EBX                         ; 0060e68e
        ;   Label: LAB_0060e68e
    MOV BL,byte ptr [EAX]               ; 0060e690
    XOR EAX,EAX                         ; 0060e692
    MOV AL,byte ptr [EDX]               ; 0060e694
    SUB EBX,EAX                         ; 0060e696
    MOV EAX,EBX                         ; 0060e698
    POP EBX                             ; 0060e69a
    RET                                 ; 0060e69b


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_string_c_mbstring_termination_check_FUN_0060b630(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; XREF[6]:
;   crt_string.c__mbstrnicmp_FUN_00608e50 at 00608e67
;   crt_string.c_char_in_set_FUN_0060e340 at 0060e369
;   crt_string.c_mbstrnbytes_FUN_00605ec0 at 00605ece
;   crt_string.c_mbstrnlen_FUN_00605e50 at 00605e5e
;   crt_string.c_strpbrk_FUN_0060c190 at 0060c19b
;   crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0 at 0060e5dc
;
; Referenced Globals:
;   int g_MultibyteLocaleActive
;   char[256] g_LeadByteTable
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0060b630
        ;   Label: crt_string.c_mbstring_termination_check_FUN_0060b630
    CMP byte ptr [EDX],0x0              ; 0060b634
    JNZ 0x0060b63f                      ; 0060b637
        ;   XREF to: 0060b63f (CONDITIONAL_JUMP)  ; LAB_0060b63f
    MOV EAX,0x1                         ; 0060b639
    RET                                 ; 0060b63e
    CMP dword ptr [0x03f9c020],0x0      ; 0060b63f | g_MultibyteLocaleActive
        ;   Label: LAB_0060b63f
    JZ 0x0060b667                       ; 0060b646
        ;   XREF to: 0060b667 (CONDITIONAL_JUMP)  ; LAB_0060b667
    XOR EAX,EAX                         ; 0060b648
    MOV AL,byte ptr [EDX]               ; 0060b64a
    MOV AL,byte ptr [EAX + 0x3f9c031]   ; 0060b64c | g_LeadByteTable
    AND AL,0x1                          ; 0060b652
    AND EAX,0xff                        ; 0060b654
    JZ 0x0060b667                       ; 0060b659
        ;   XREF to: 0060b667 (CONDITIONAL_JUMP)  ; LAB_0060b667
    CMP byte ptr [EDX + 0x1],0x0        ; 0060b65b
    JNZ 0x0060b667                      ; 0060b65f
        ;   XREF to: 0060b667 (CONDITIONAL_JUMP)  ; LAB_0060b667
    MOV EAX,0x2                         ; 0060b661
    RET                                 ; 0060b666
    XOR EAX,EAX                         ; 0060b667
        ;   Label: LAB_0060b667
    RET                                 ; 0060b669


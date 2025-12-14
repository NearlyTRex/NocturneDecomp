; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_mbstring.c_copyMbChar_FUN_0060e590(char * dest, char * src)
;
; Parameters:
; char *           Stack[0x4]:4   dest
; char *           Stack[0x8]:4   src
;
; XREF[2]:
;   crt_string.c_compare_mb_chars_ci_FUN_0060c790 at 0060c7c4
;   crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0 at 0060e61a
;
; Referenced Globals:
;   int g_MultibyteLocaleActive
;   char[256] g_LeadByteTable
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060e590
        ;   Label: crt_mbstring.c_copyMbChar_FUN_0060e590
    MOV EBX,dword ptr [ESP + 0x8]       ; 0060e591
    MOV EAX,dword ptr [ESP + 0xc]       ; 0060e595
    CMP dword ptr [0x03f9c020],0x0      ; 0060e599 | g_MultibyteLocaleActive
    JZ 0x0060e5c3                       ; 0060e5a0
        ;   XREF to: 0060e5c3 (CONDITIONAL_JUMP)  ; LAB_0060e5c3
    XOR EDX,EDX                         ; 0060e5a2
    MOV DL,byte ptr [EAX]               ; 0060e5a4
    MOV DL,byte ptr [EDX + 0x3f9c031]   ; 0060e5a6 | g_LeadByteTable
    AND DL,0x1                          ; 0060e5ac
    AND EDX,0xff                        ; 0060e5af
    JZ 0x0060e5c3                       ; 0060e5b5
        ;   XREF to: 0060e5c3 (CONDITIONAL_JUMP)  ; LAB_0060e5c3
    MOV DL,byte ptr [EAX]               ; 0060e5b7
    MOV byte ptr [EBX],DL               ; 0060e5b9
    MOV AL,byte ptr [EAX + 0x1]         ; 0060e5bb
    MOV byte ptr [EBX + 0x1],AL         ; 0060e5be
    POP EBX                             ; 0060e5c1
    RET                                 ; 0060e5c2
    MOV AL,byte ptr [EAX]               ; 0060e5c3
        ;   Label: LAB_0060e5c3
    MOV byte ptr [EBX],AL               ; 0060e5c5
    POP EBX                             ; 0060e5c7
    RET                                 ; 0060e5c8


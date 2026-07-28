; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_locale_c_mbtowc_FUN_0056f040(wchar_t *wide_char,char *mb_string,SIZE_T max_bytes)
;
; Parameters:
; wchar_t *        Stack[0x4]:4   wide_char
; char *           Stack[0x8]:4   mb_string
; SIZE_T           Stack[0xc]:4   max_bytes
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_00567964 at 00567a23
;   FUN_00567a5c at 00567b4a
;   FUN_00574030 at 00574053
;
; Referenced Globals:
;   void* PTR_MultiByteToWideChar_0057556c = 00175ee0
;   undefined4 DAT_005c2144
;   undefined4 DAT_02de5c30
;
; Called Functions:
;   crt_locale.c_mblen_FUN_0056da50
;   MultiByteToWideChar
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f040
        ;   Label: crt_locale.c_mbtowc_FUN_0056f040
    PUSH ESI                            ; 0056f041
    PUSH EDI                            ; 0056f042
    PUSH EBP                            ; 0056f043
    MOV EBP,ESP                         ; 0056f044
    SUB ESP,0x4                         ; 0056f046
    MOV ESI,dword ptr [EBP + 0x14]      ; 0056f049
    MOV EBX,dword ptr [EBP + 0x18]      ; 0056f04c
    TEST EBX,EBX                        ; 0056f04f
    JNZ 0x0056f05a                      ; 0056f051
        ;   XREF to: 0056f05a (CONDITIONAL_JUMP)  ; LAB_0056f05a
    XOR EAX,EAX                         ; 0056f053
    JMP 0x0056f0e5                      ; 0056f055
        ;   XREF to: 0056f0e5 (UNCONDITIONAL_JUMP)  ; LAB_0056f0e5
    CMP dword ptr [EBP + 0x1c],0x0      ; 0056f05a
        ;   Label: LAB_0056f05a
    JBE 0x0056f0e0                      ; 0056f05e
        ;   XREF to: 0056f0e0 (CONDITIONAL_JUMP)  ; LAB_0056f0e0
    CMP byte ptr [EBX],0x0              ; 0056f064
    JNZ 0x0056f07b                      ; 0056f067
        ;   XREF to: 0056f07b (CONDITIONAL_JUMP)  ; LAB_0056f07b
    TEST ESI,ESI                        ; 0056f069
    JZ 0x0056f072                       ; 0056f06b
        ;   XREF to: 0056f072 (CONDITIONAL_JUMP)  ; LAB_0056f072
    MOV word ptr [ESI],0x0              ; 0056f06d
    XOR EAX,EAX                         ; 0056f072
        ;   Label: LAB_0056f072
    MOV ESP,EBP                         ; 0056f074
    POP EBP                             ; 0056f076
    POP EDI                             ; 0056f077
    POP ESI                             ; 0056f078
    POP EBX                             ; 0056f079
    RET                                 ; 0056f07a
    CMP dword ptr [0x02de5c30],0x0      ; 0056f07b | DAT_02de5c30
        ;   Label: LAB_0056f07b
    JZ 0x0056f09d                       ; 0056f082
        ;   XREF to: 0056f09d (CONDITIONAL_JUMP)  ; LAB_0056f09d
    XOR EAX,EAX                         ; 0056f084
    MOV AL,byte ptr [EBX]               ; 0056f086
    MOV AL,byte ptr [EAX + 0x2de5c41]   ; 0056f088
    AND AL,0x1                          ; 0056f08e
    AND EAX,0xff                        ; 0056f090
    JZ 0x0056f09d                       ; 0056f095
        ;   XREF to: 0056f09d (CONDITIONAL_JUMP)  ; LAB_0056f09d
    CMP byte ptr [EBX + 0x1],0x0        ; 0056f097
    JZ 0x0056f0e0                       ; 0056f09b
        ;   XREF to: 0056f0e0 (CONDITIONAL_JUMP)  ; LAB_0056f0e0
    PUSH EBX                            ; 0056f09d
        ;   Label: LAB_0056f09d
    CALL crt_locale.c_mblen_FUN_0056da50 ; 0056f09e
        ;   XREF to: 0056da50 (UNCONDITIONAL_CALL)  ; int crt_locale.c_mblen_FUN_0056da50(char * mb_string)
    ADD ESP,0x4                         ; 0056f0a3
    PUSH 0x1                            ; 0056f0a6
    LEA EDX,[EBP + -0x4]                ; 0056f0a8
    PUSH EDX                            ; 0056f0ab
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0056f0ac
    MOV EDI,EAX                         ; 0056f0af
    CMP EAX,EDX                         ; 0056f0b1
    JBE 0x0056f0b7                      ; 0056f0b3
        ;   XREF to: 0056f0b7 (CONDITIONAL_JUMP)  ; LAB_0056f0b7
    MOV EAX,EDX                         ; 0056f0b5
    PUSH EAX                            ; 0056f0b7
        ;   Label: LAB_0056f0b7
    PUSH EBX                            ; 0056f0b8
    PUSH 0x8                            ; 0056f0b9
    MOV EBX,dword ptr [0x005c2144]      ; 0056f0bb | DAT_005c2144
    PUSH EBX                            ; 0056f0c1
    CALL dword ptr CS:[0x57556c]        ; 0056f0c2 | PTR_MultiByteToWideChar_0057556c
    TEST EAX,EAX                        ; 0056f0c9
    JZ 0x0056f0e0                       ; 0056f0cb
        ;   XREF to: 0056f0e0 (CONDITIONAL_JUMP)  ; LAB_0056f0e0
    TEST ESI,ESI                        ; 0056f0cd
    JZ 0x0056f0d7                       ; 0056f0cf
        ;   XREF to: 0056f0d7 (CONDITIONAL_JUMP)  ; LAB_0056f0d7
    MOV EAX,dword ptr [EBP + -0x4]      ; 0056f0d1
    MOV word ptr [ESI],AX               ; 0056f0d4
    MOV EAX,EDI                         ; 0056f0d7
        ;   Label: LAB_0056f0d7
    MOV ESP,EBP                         ; 0056f0d9
    POP EBP                             ; 0056f0db
    POP EDI                             ; 0056f0dc
    POP ESI                             ; 0056f0dd
    POP EBX                             ; 0056f0de
    RET                                 ; 0056f0df
    MOV EAX,0xffffffff                  ; 0056f0e0
        ;   Label: LAB_0056f0e0
    MOV ESP,EBP                         ; 0056f0e5
        ;   Label: LAB_0056f0e5
    POP EBP                             ; 0056f0e7
    POP EDI                             ; 0056f0e8
    POP ESI                             ; 0056f0e9
    POP EBX                             ; 0056f0ea
    RET                                 ; 0056f0eb


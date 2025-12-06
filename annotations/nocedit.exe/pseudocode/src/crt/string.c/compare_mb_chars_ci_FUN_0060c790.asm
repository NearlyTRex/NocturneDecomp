; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_string.c_compare_mb_chars_ci_FUN_0060c790(char * str1, char * str2)
;
; Parameters:
; char *           Stack[0x4]:4   str1
; char *           Stack[0x8]:4   str2
; Local Variables:
; undefined1       Stack[-0x10]:1  local_10
; undefined1       Stack[-0xc]:1  local_c
;
; XREF[1]:
;   crt_string.c_mbstrnicmp_FUN_00608e50 at 00608e82
;
; Called Functions:
;   crt_locale.c_mblen_FUN_00605a40
;   crt_mbstring.c_copyMbChar_FUN_0060e590
;   crt_string.c_mbcmp_FUN_0060e640
;   crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060c790
        ;   Label: crt_string.c_compare_mb_chars_ci_FUN_0060c790
    PUSH ESI                            ; 0060c791
    SUB ESP,0x8                         ; 0060c792
    MOV EDX,dword ptr [ESP + 0x14]      ; 0060c795
    PUSH EDX                            ; 0060c799
    LEA EAX,[ESP + 0x8]                 ; 0060c79a
    PUSH EAX                            ; 0060c79e
    CALL crt_mbstring.c_copyMbChar_FUN_0060e590 ; 0060c79f | void crt_mbstring.c_copyMbChar_FUN_0060e590(char * dest, char * src)
        ;   XREF to: 0060e590 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0060c7a4
    MOV EBX,dword ptr [ESP + 0x14]      ; 0060c7a7
    PUSH EBX                            ; 0060c7ab
    CALL crt_locale.c_mblen_FUN_00605a40 ; 0060c7ac | int crt_locale.c_mblen_FUN_00605a40(char * mb_string)
        ;   XREF to: 00605a40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060c7b1
    MOV ECX,dword ptr [ESP + 0x18]      ; 0060c7b4
    XOR DL,DL                           ; 0060c7b8
    PUSH ECX                            ; 0060c7ba
    MOV byte ptr [ESP + EAX*0x1 + 0x8],DL ; 0060c7bb
    LEA EAX,[ESP + 0x4]                 ; 0060c7bf
    PUSH EAX                            ; 0060c7c3
    CALL crt_mbstring.c_copyMbChar_FUN_0060e590 ; 0060c7c4 | void crt_mbstring.c_copyMbChar_FUN_0060e590(char * dest, char * src)
        ;   XREF to: 0060e590 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0060c7c9
    MOV ESI,dword ptr [ESP + 0x18]      ; 0060c7cc
    PUSH ESI                            ; 0060c7d0
    CALL crt_locale.c_mblen_FUN_00605a40 ; 0060c7d1 | int crt_locale.c_mblen_FUN_00605a40(char * mb_string)
        ;   XREF to: 00605a40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060c7d6
    XOR DH,DH                           ; 0060c7d9
    MOV byte ptr [ESP + EAX*0x1],DH     ; 0060c7db
    LEA EAX,[ESP + 0x4]                 ; 0060c7de
    PUSH EAX                            ; 0060c7e2
    CALL crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0 ; 0060c7e3 | undefined crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0()
        ;   XREF to: 0060e5d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060c7e8
    MOV EAX,ESP                         ; 0060c7eb
    PUSH EAX                            ; 0060c7ed
    CALL crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0 ; 0060c7ee | undefined crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0()
        ;   XREF to: 0060e5d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060c7f3
    MOV EAX,ESP                         ; 0060c7f6
    PUSH EAX                            ; 0060c7f8
    LEA EAX,[ESP + 0x8]                 ; 0060c7f9
    PUSH EAX                            ; 0060c7fd
    CALL crt_string.c_mbcmp_FUN_0060e640 ; 0060c7fe | int crt_string.c_mbcmp_FUN_0060e640(char * str1, char * str2)
        ;   XREF to: 0060e640 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0060c803
    ADD ESP,0x8                         ; 0060c806
    POP ESI                             ; 0060c809
    POP EBX                             ; 0060c80a
    RET                                 ; 0060c80b


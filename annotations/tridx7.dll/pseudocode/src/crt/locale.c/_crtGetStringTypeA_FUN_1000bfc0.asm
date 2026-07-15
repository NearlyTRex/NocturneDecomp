; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; BOOL __cdecl crt_locale_c__crtGetStringTypeA_FUN_1000bfc0(_locale_t plocinfo,DWORD dw_info_type,LPCSTR lp_src_str,int cch_src,LPWORD lp_char_type,int code_page,BOOL b_error)
;
; Parameters:
; _locale_t        Stack[0x4]:4   plocinfo
; DWORD            Stack[0x8]:4   dw_info_type
; LPCSTR           Stack[0xc]:4   lp_src_str
; int              Stack[0x10]:4   cch_src
; LPWORD           Stack[0x14]:4   lp_char_type
; int              Stack[0x18]:4   code_page
; BOOL             Stack[0x1c]:4   b_error
; Local Variables:
; undefined        Stack[-0x2]:1  local_2
;
; XREF[1]:
;   crt_ctype.c__isctype_FUN_10009ac0 at 10009b2c
;
; Referenced Globals:
;   undefined4 DAT_1001276c
;   undefined4 DAT_10012770
;   undefined4 DAT_10017760
;   undefined4 DAT_10017770
;   undefined4 DAT_10017910
;   void* PTR_MultiByteToWideChar_10242220 = 0024257a
;   void* PTR_GetStringTypeA_10242264 = 002426b6
;   void* PTR_GetStringTypeW_10242268 = 002426c8
;
; Called Functions:
;   crt_heap.c_calloc_FUN_1000a750
;   crt_heap.c_free_FUN_10005b30
;   GetStringTypeA
;   GetStringTypeW
;   MultiByteToWideChar
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 1000bfc0
        ;   Label: crt_locale.c__crtGetStringTypeA_FUN_1000bfc0
    MOV EAX,[0x10017910]                ; 1000bfc3 | DAT_10017910
    TEST EAX,EAX                        ; 1000bfc8
    PUSH EBX                            ; 1000bfca
    PUSH ESI                            ; 1000bfcb
    PUSH EDI                            ; 1000bfcc
    PUSH EBP                            ; 1000bfcd
    JNZ 0x1000c01c                      ; 1000bfce
        ;   XREF to: 1000c01c (CONDITIONAL_JUMP)  ; LAB_1000c01c
    LEA EAX,[ESP + 0x12]                ; 1000bfd0
    MOV ESI,dword ptr [0x10242264]      ; 1000bfd4 | PTR_GetStringTypeA_10242264
    PUSH EAX                            ; 1000bfda
    PUSH 0x1                            ; 1000bfdb
    PUSH 0x1001276c                     ; 1000bfdd | DAT_1001276c
    PUSH 0x1                            ; 1000bfe2
    PUSH 0x0                            ; 1000bfe4
    CALL ESI                            ; 1000bfe6 | BOOL GetStringTypeA(LCID Locale, DWORD dwInfoType, LPCSTR lpSrcStr, int cchSrc, ...)
    TEST EAX,EAX                        ; 1000bfe8
    JZ 0x1000bff3                       ; 1000bfea
        ;   XREF to: 1000bff3 (CONDITIONAL_JUMP)  ; LAB_1000bff3
    MOV EAX,0x2                         ; 1000bfec
    JMP 0x1000c022                      ; 1000bff1
        ;   XREF to: 1000c022 (UNCONDITIONAL_JUMP)  ; LAB_1000c022
    LEA EAX,[ESP + 0x12]                ; 1000bff3
        ;   Label: LAB_1000bff3
    PUSH EAX                            ; 1000bff7
    PUSH 0x1                            ; 1000bff8
    PUSH 0x10012770                     ; 1000bffa | DAT_10012770
    PUSH 0x1                            ; 1000bfff
    CALL dword ptr [0x10242268]         ; 1000c001 | PTR_GetStringTypeW_10242268
    TEST EAX,EAX                        ; 1000c007
    JZ 0x1000c012                       ; 1000c009
        ;   XREF to: 1000c012 (CONDITIONAL_JUMP)  ; LAB_1000c012
    MOV EAX,0x1                         ; 1000c00b
    JMP 0x1000c022                      ; 1000c010
        ;   XREF to: 1000c022 (UNCONDITIONAL_JUMP)  ; LAB_1000c022
    XOR EAX,EAX                         ; 1000c012
        ;   Label: LAB_1000c012
    POP EBP                             ; 1000c014
    POP EDI                             ; 1000c015
    POP ESI                             ; 1000c016
    POP EBX                             ; 1000c017
    ADD ESP,0x4                         ; 1000c018
    RET                                 ; 1000c01b
    MOV ESI,dword ptr [0x10242264]      ; 1000c01c | PTR_GetStringTypeA_10242264
        ;   Label: LAB_1000c01c
    MOV [0x10017910],EAX                ; 1000c022 | DAT_10017910
        ;   Label: LAB_1000c022
    CMP EAX,0x2                         ; 1000c027
    JNZ 0x1000c059                      ; 1000c02a
        ;   XREF to: 1000c059 (CONDITIONAL_JUMP)  ; LAB_1000c059
    MOV EDX,dword ptr [ESP + 0x2c]      ; 1000c02c
    TEST EDX,EDX                        ; 1000c030
    JNZ 0x1000c03a                      ; 1000c032
        ;   XREF to: 1000c03a (CONDITIONAL_JUMP)  ; LAB_1000c03a
    MOV EDX,dword ptr [0x10017760]      ; 1000c034 | DAT_10017760
    MOV ECX,dword ptr [ESP + 0x24]      ; 1000c03a
        ;   Label: LAB_1000c03a
    MOV EAX,dword ptr [ESP + 0x20]      ; 1000c03e
    MOV EBX,dword ptr [ESP + 0x1c]      ; 1000c042
    PUSH ECX                            ; 1000c046
    MOV ECX,dword ptr [ESP + 0x1c]      ; 1000c047
    PUSH EAX                            ; 1000c04b
    PUSH EBX                            ; 1000c04c
    PUSH ECX                            ; 1000c04d
    PUSH EDX                            ; 1000c04e
    CALL ESI                            ; 1000c04f | BOOL GetStringTypeA(LCID Locale, DWORD dwInfoType, LPCSTR lpSrcStr, int cchSrc, ...)
    POP EBP                             ; 1000c051
    POP EDI                             ; 1000c052
    POP ESI                             ; 1000c053
    POP EBX                             ; 1000c054
    ADD ESP,0x4                         ; 1000c055
    RET                                 ; 1000c058
    MOV [0x10017910],EAX                ; 1000c059 | DAT_10017910
        ;   Label: LAB_1000c059
    CMP EAX,0x1                         ; 1000c05e
    JNZ 0x1000c0db                      ; 1000c061
        ;   XREF to: 1000c0db (CONDITIONAL_JUMP)  ; LAB_1000c0db
    XOR EBX,EBX                         ; 1000c063
    XOR ESI,ESI                         ; 1000c065
    MOV EDI,dword ptr [ESP + 0x28]      ; 1000c067
    CMP EDI,EBX                         ; 1000c06b
    JNZ 0x1000c075                      ; 1000c06d
        ;   XREF to: 1000c075 (CONDITIONAL_JUMP)  ; LAB_1000c075
    MOV EDI,dword ptr [0x10017770]      ; 1000c06f | DAT_10017770
    MOV EAX,dword ptr [ESP + 0x20]      ; 1000c075
        ;   Label: LAB_1000c075
    PUSH 0x0                            ; 1000c079
    MOV ECX,dword ptr [ESP + 0x20]      ; 1000c07b
    PUSH 0x0                            ; 1000c07f
    PUSH EAX                            ; 1000c081
    PUSH ECX                            ; 1000c082
    PUSH 0x9                            ; 1000c083
    PUSH EDI                            ; 1000c085
    CALL dword ptr [0x10242220]         ; 1000c086 | PTR_MultiByteToWideChar_10242220
    MOV EBP,EAX                         ; 1000c08c
    TEST EBP,EBP                        ; 1000c08e
    JZ 0x1000c0d0                       ; 1000c090
        ;   XREF to: 1000c0d0 (CONDITIONAL_JUMP)  ; LAB_1000c0d0
    PUSH EBP                            ; 1000c092
    PUSH 0x2                            ; 1000c093
    CALL crt_heap.c_calloc_FUN_1000a750 ; 1000c095
        ;   XREF to: 1000a750 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_calloc_FUN_1000a750(size_t num, size_t size)
    ADD ESP,0x8                         ; 1000c09a
    MOV ESI,EAX                         ; 1000c09d
    TEST ESI,ESI                        ; 1000c09f
    JZ 0x1000c0d0                       ; 1000c0a1
        ;   XREF to: 1000c0d0 (CONDITIONAL_JUMP)  ; LAB_1000c0d0
    MOV EAX,dword ptr [ESP + 0x20]      ; 1000c0a3
    PUSH EBP                            ; 1000c0a7
    MOV ECX,dword ptr [ESP + 0x20]      ; 1000c0a8
    PUSH ESI                            ; 1000c0ac
    PUSH EAX                            ; 1000c0ad
    PUSH ECX                            ; 1000c0ae
    PUSH 0x1                            ; 1000c0af
    PUSH EDI                            ; 1000c0b1
    CALL dword ptr [0x10242220]         ; 1000c0b2 | PTR_MultiByteToWideChar_10242220
    TEST EAX,EAX                        ; 1000c0b8
    JZ 0x1000c0d0                       ; 1000c0ba
        ;   XREF to: 1000c0d0 (CONDITIONAL_JUMP)  ; LAB_1000c0d0
    MOV ECX,dword ptr [ESP + 0x24]      ; 1000c0bc
    PUSH ECX                            ; 1000c0c0
    PUSH EAX                            ; 1000c0c1
    MOV EAX,dword ptr [ESP + 0x20]      ; 1000c0c2
    PUSH ESI                            ; 1000c0c6
    PUSH EAX                            ; 1000c0c7
    CALL dword ptr [0x10242268]         ; 1000c0c8 | PTR_GetStringTypeW_10242268
    MOV EBX,EAX                         ; 1000c0ce
    PUSH ESI                            ; 1000c0d0
        ;   Label: LAB_1000c0d0
    CALL crt_heap.c_free_FUN_10005b30   ; 1000c0d1
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000c0d6
    MOV EAX,EBX                         ; 1000c0d9
    POP EBP                             ; 1000c0db
        ;   Label: LAB_1000c0db
    POP EDI                             ; 1000c0dc
    POP ESI                             ; 1000c0dd
    POP EBX                             ; 1000c0de
    ADD ESP,0x4                         ; 1000c0df
    RET                                 ; 1000c0e2


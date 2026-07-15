; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; BOOL __cdecl crt_locale_c___crtGetStringTypeW_FUN_1000be00(DWORD info_type,LPCWSTR src,int cch_src,LPWORD char_type,UINT code_page,LCID lcid)
;
; Parameters:
; DWORD            Stack[0x4]:4   info_type
; LPCWSTR          Stack[0x8]:4   src
; int              Stack[0xc]:4   cch_src
; LPWORD           Stack[0x10]:4   char_type
; UINT             Stack[0x14]:4   code_page
; LCID             Stack[0x18]:4   lcid
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   crt_ctype.c_iswctype_FUN_10010870 at 100108c0
;
; Referenced Globals:
;   undefined4 DAT_1001276c
;   undefined4 DAT_10012770
;   undefined4 DAT_10017760
;   undefined4 DAT_10017770
;   undefined4 DAT_1001790c
;   void* PTR_WideCharToMultiByte_10242230 = 002425dc
;   void* PTR_GetStringTypeA_10242264 = 002426b6
;   void* PTR_GetStringTypeW_10242268 = 002426c8
;
; Called Functions:
;   crt_heap.c_calloc_FUN_1000a750
;   crt_heap.c_free_FUN_10005b30
;   crt_heap.c_malloc_FUN_10008830
;   crt_string.c_memcpy_FUN_1000a4a0
;   GetStringTypeA
;   GetStringTypeW
;   WideCharToMultiByte
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 1000be00
        ;   Label: crt_locale.c___crtGetStringTypeW_FUN_1000be00
    CMP dword ptr [0x1001790c],0x0      ; 1000be03 | DAT_1001790c
    PUSH EBX                            ; 1000be0a
    PUSH ESI                            ; 1000be0b
    PUSH EDI                            ; 1000be0c
    PUSH EBP                            ; 1000be0d
    JNZ 0x1000be66                      ; 1000be0e
        ;   XREF to: 1000be66 (CONDITIONAL_JUMP)  ; LAB_1000be66
    LEA EAX,[ESP + 0x10]                ; 1000be10
    MOV ESI,dword ptr [0x10242268]      ; 1000be14 | PTR_GetStringTypeW_10242268
    PUSH EAX                            ; 1000be1a
    PUSH 0x1                            ; 1000be1b
    PUSH 0x10012770                     ; 1000be1d | DAT_10012770
    PUSH 0x1                            ; 1000be22
    CALL ESI                            ; 1000be24 | BOOL GetStringTypeW(DWORD dwInfoType, LPCWSTR lpSrcStr, int cchSrc, LPWORD lpCharType)
    TEST EAX,EAX                        ; 1000be26
    JZ 0x1000be36                       ; 1000be28
        ;   XREF to: 1000be36 (CONDITIONAL_JUMP)  ; LAB_1000be36
    MOV dword ptr [0x1001790c],0x1      ; 1000be2a | DAT_1001790c
    JMP 0x1000be6c                      ; 1000be34
        ;   XREF to: 1000be6c (UNCONDITIONAL_JUMP)  ; LAB_1000be6c
    LEA EAX,[ESP + 0x10]                ; 1000be36
        ;   Label: LAB_1000be36
    PUSH EAX                            ; 1000be3a
    PUSH 0x1                            ; 1000be3b
    PUSH 0x1001276c                     ; 1000be3d | DAT_1001276c
    PUSH 0x1                            ; 1000be42
    PUSH 0x0                            ; 1000be44
    CALL dword ptr [0x10242264]         ; 1000be46 | PTR_GetStringTypeA_10242264
    TEST EAX,EAX                        ; 1000be4c
    JZ 0x1000be5c                       ; 1000be4e
        ;   XREF to: 1000be5c (CONDITIONAL_JUMP)  ; LAB_1000be5c
    MOV dword ptr [0x1001790c],0x2      ; 1000be50 | DAT_1001790c
    JMP 0x1000be6c                      ; 1000be5a
        ;   XREF to: 1000be6c (UNCONDITIONAL_JUMP)  ; LAB_1000be6c
    XOR EAX,EAX                         ; 1000be5c
        ;   Label: LAB_1000be5c
    POP EBP                             ; 1000be5e
    POP EDI                             ; 1000be5f
    POP ESI                             ; 1000be60
    POP EBX                             ; 1000be61
    ADD ESP,0x4                         ; 1000be62
    RET                                 ; 1000be65
    MOV ESI,dword ptr [0x10242268]      ; 1000be66 | PTR_GetStringTypeW_10242268
        ;   Label: LAB_1000be66
    CMP dword ptr [0x1001790c],0x1      ; 1000be6c | DAT_1001790c
        ;   Label: LAB_1000be6c
    JNZ 0x1000be93                      ; 1000be73
        ;   XREF to: 1000be93 (CONDITIONAL_JUMP)  ; LAB_1000be93
    MOV EAX,dword ptr [ESP + 0x24]      ; 1000be75
    MOV ECX,dword ptr [ESP + 0x20]      ; 1000be79
    MOV EDX,dword ptr [ESP + 0x1c]      ; 1000be7d
    PUSH EAX                            ; 1000be81
    MOV EAX,dword ptr [ESP + 0x1c]      ; 1000be82
    PUSH ECX                            ; 1000be86
    PUSH EDX                            ; 1000be87
    PUSH EAX                            ; 1000be88
    CALL ESI                            ; 1000be89 | BOOL GetStringTypeW(DWORD dwInfoType, LPCWSTR lpSrcStr, int cchSrc, LPWORD lpCharType)
    POP EBP                             ; 1000be8b
    POP EDI                             ; 1000be8c
    POP ESI                             ; 1000be8d
    POP EBX                             ; 1000be8e
    ADD ESP,0x4                         ; 1000be8f
    RET                                 ; 1000be92
    CMP dword ptr [0x1001790c],0x2      ; 1000be93 | DAT_1001790c
        ;   Label: LAB_1000be93
    JNZ 0x1000bfac                      ; 1000be9a
        ;   XREF to: 1000bfac (CONDITIONAL_JUMP)  ; LAB_1000bfac
    XOR EDI,EDI                         ; 1000bea0
    MOV EBP,dword ptr [ESP + 0x28]      ; 1000bea2
    MOV dword ptr [ESP + 0x10],EDI      ; 1000bea6
    CMP EBP,EDI                         ; 1000beaa
    JNZ 0x1000beb4                      ; 1000beac
        ;   XREF to: 1000beb4 (CONDITIONAL_JUMP)  ; LAB_1000beb4
    MOV EBP,dword ptr [0x10017770]      ; 1000beae | DAT_10017770
    MOV EAX,dword ptr [ESP + 0x20]      ; 1000beb4
        ;   Label: LAB_1000beb4
    PUSH 0x0                            ; 1000beb8
    MOV ECX,dword ptr [ESP + 0x20]      ; 1000beba
    PUSH 0x0                            ; 1000bebe
    PUSH 0x0                            ; 1000bec0
    PUSH 0x0                            ; 1000bec2
    PUSH EAX                            ; 1000bec4
    PUSH ECX                            ; 1000bec5
    PUSH 0x220                          ; 1000bec6
    PUSH EBP                            ; 1000becb
    CALL dword ptr [0x10242230]         ; 1000becc | PTR_WideCharToMultiByte_10242230
    MOV EBX,EAX                         ; 1000bed2
    TEST EBX,EBX                        ; 1000bed4
    JNZ 0x1000bee2                      ; 1000bed6
        ;   XREF to: 1000bee2 (CONDITIONAL_JUMP)  ; LAB_1000bee2
    XOR EAX,EAX                         ; 1000bed8
    POP EBP                             ; 1000beda
    POP EDI                             ; 1000bedb
    POP ESI                             ; 1000bedc
    POP EBX                             ; 1000bedd
    ADD ESP,0x4                         ; 1000bede
    RET                                 ; 1000bee1
    PUSH EBX                            ; 1000bee2
        ;   Label: LAB_1000bee2
    PUSH 0x1                            ; 1000bee3
    CALL crt_heap.c_calloc_FUN_1000a750 ; 1000bee5
        ;   XREF to: 1000a750 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_calloc_FUN_1000a750(size_t num, size_t size)
    ADD ESP,0x8                         ; 1000beea
    MOV ESI,EAX                         ; 1000beed
    TEST ESI,ESI                        ; 1000beef
    JNZ 0x1000befd                      ; 1000bef1
        ;   XREF to: 1000befd (CONDITIONAL_JUMP)  ; LAB_1000befd
    XOR EAX,EAX                         ; 1000bef3
    POP EBP                             ; 1000bef5
    POP EDI                             ; 1000bef6
    POP ESI                             ; 1000bef7
    POP EBX                             ; 1000bef8
    ADD ESP,0x4                         ; 1000bef9
    RET                                 ; 1000befc
    MOV EAX,dword ptr [ESP + 0x20]      ; 1000befd
        ;   Label: LAB_1000befd
    PUSH 0x0                            ; 1000bf01
    MOV ECX,dword ptr [ESP + 0x20]      ; 1000bf03
    PUSH 0x0                            ; 1000bf07
    PUSH EBX                            ; 1000bf09
    PUSH ESI                            ; 1000bf0a
    PUSH EAX                            ; 1000bf0b
    PUSH ECX                            ; 1000bf0c
    PUSH 0x220                          ; 1000bf0d
    PUSH EBP                            ; 1000bf12
    CALL dword ptr [0x10242230]         ; 1000bf13 | PTR_WideCharToMultiByte_10242230
    TEST EAX,EAX                        ; 1000bf19
    JZ 0x1000bf96                       ; 1000bf1b
        ;   XREF to: 1000bf96 (CONDITIONAL_JUMP)  ; LAB_1000bf96
    LEA EAX,[EBX*0x2 + 0x2]             ; 1000bf1d
    PUSH EAX                            ; 1000bf24
    CALL crt_heap.c_malloc_FUN_10008830 ; 1000bf25
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_malloc_FUN_10008830(size_t size)
    ADD ESP,0x4                         ; 1000bf2a
    MOV EDI,EAX                         ; 1000bf2d
    TEST EDI,EDI                        ; 1000bf2f
    JZ 0x1000bf96                       ; 1000bf31
        ;   XREF to: 1000bf96 (CONDITIONAL_JUMP)  ; LAB_1000bf96
    MOV ECX,dword ptr [ESP + 0x2c]      ; 1000bf33
    TEST ECX,ECX                        ; 1000bf37
    JNZ 0x1000bf41                      ; 1000bf39
        ;   XREF to: 1000bf41 (CONDITIONAL_JUMP)  ; LAB_1000bf41
    MOV ECX,dword ptr [0x10017760]      ; 1000bf3b | DAT_10017760
    MOV EAX,dword ptr [ESP + 0x20]      ; 1000bf41
        ;   Label: LAB_1000bf41
    PUSH EDI                            ; 1000bf45
    MOV EDX,dword ptr [ESP + 0x1c]      ; 1000bf46
    PUSH EBX                            ; 1000bf4a
    LEA EBP,[EDI + EAX*0x2]             ; 1000bf4b
    PUSH ESI                            ; 1000bf4e
    MOV word ptr [EBP],0xffff           ; 1000bf4f
    PUSH EDX                            ; 1000bf55
    MOV word ptr [EBP + -0x2],0xffff    ; 1000bf56
    PUSH ECX                            ; 1000bf5c
    CALL dword ptr [0x10242264]         ; 1000bf5d | PTR_GetStringTypeA_10242264
    CMP word ptr [EBP + -0x2],0xffff    ; 1000bf63
    MOV dword ptr [ESP + 0x10],EAX      ; 1000bf69
    JZ 0x1000bf8e                       ; 1000bf6d
        ;   XREF to: 1000bf8e (CONDITIONAL_JUMP)  ; LAB_1000bf8e
    CMP word ptr [EBP],0xffff           ; 1000bf6f
    JNZ 0x1000bf8e                      ; 1000bf75
        ;   XREF to: 1000bf8e (CONDITIONAL_JUMP)  ; LAB_1000bf8e
    MOV EAX,dword ptr [ESP + 0x20]      ; 1000bf77
    MOV ECX,dword ptr [ESP + 0x24]      ; 1000bf7b
    ADD EAX,EAX                         ; 1000bf7f
    PUSH EAX                            ; 1000bf81
    PUSH EDI                            ; 1000bf82
    PUSH ECX                            ; 1000bf83
    CALL crt_string.c_memcpy_FUN_1000a4a0 ; 1000bf84
        ;   XREF to: 1000a4a0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memcpy_FUN_1000a4a0(void * dst, void * src, size_t size)
    ADD ESP,0xc                         ; 1000bf89
    JMP 0x1000bf96                      ; 1000bf8c
        ;   XREF to: 1000bf96 (UNCONDITIONAL_JUMP)  ; LAB_1000bf96
    MOV dword ptr [ESP + 0x10],0x0      ; 1000bf8e
        ;   Label: LAB_1000bf8e
    PUSH ESI                            ; 1000bf96
        ;   Label: LAB_1000bf96
    CALL crt_heap.c_free_FUN_10005b30   ; 1000bf97
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000bf9c
    PUSH EDI                            ; 1000bf9f
    CALL crt_heap.c_free_FUN_10005b30   ; 1000bfa0
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    MOV EAX,dword ptr [ESP + 0x14]      ; 1000bfa5
    ADD ESP,0x4                         ; 1000bfa9
    POP EBP                             ; 1000bfac
        ;   Label: LAB_1000bfac
    POP EDI                             ; 1000bfad
    POP ESI                             ; 1000bfae
    POP EBX                             ; 1000bfaf
    ADD ESP,0x4                         ; 1000bfb0
    RET                                 ; 1000bfb3


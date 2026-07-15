; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_locale_c___crtGetLocaleInfoA_FUN_1000fad0(LCID lcid,LCTYPE lc_type,LPSTR dest,int cch,UINT code_page)
;
; Parameters:
; LCID             Stack[0x4]:4   lcid
; LCTYPE           Stack[0x8]:4   lc_type
; LPSTR            Stack[0xc]:4   dest
; int              Stack[0x10]:4   cch
; UINT             Stack[0x14]:4   code_page
;
; XREF[2]:
;   crt_locale.c___get_qualified_locale_FUN_1000e350 at 1000e5dd
;   crt_locale.c___getlocaleinfo_FUN_1000f6e0 at 1000f718
;
; Referenced Globals:
;   undefined4 DAT_10017770
;   undefined4 DAT_10018258
;   void* PTR_WideCharToMultiByte_10242230 = 002425dc
;   void* PTR_GetLocaleInfoA_1024227c = 00242732
;   void* PTR_GetLocaleInfoW_10242280 = 00242744
;
; Called Functions:
;   crt_heap.c_free_FUN_10005b30
;   crt_heap.c_malloc_FUN_10008830
;   GetLocaleInfoA
;   GetLocaleInfoW
;   WideCharToMultiByte
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 1000fad0
        ;   Label: crt_locale.c___crtGetLocaleInfoA_FUN_1000fad0
    MOV EAX,[0x10018258]                ; 1000fad1 | DAT_10018258
    PUSH ESI                            ; 1000fad6
    TEST EAX,EAX                        ; 1000fad7
    PUSH EDI                            ; 1000fad9
    PUSH EBP                            ; 1000fada
    JNZ 0x1000fb18                      ; 1000fadb
        ;   XREF to: 1000fb18 (CONDITIONAL_JUMP)  ; LAB_1000fb18
    PUSH 0x0                            ; 1000fadd
    MOV ESI,dword ptr [0x1024227c]      ; 1000fadf | PTR_GetLocaleInfoA_1024227c
    PUSH 0x0                            ; 1000fae5
    PUSH 0x1                            ; 1000fae7
    PUSH 0x0                            ; 1000fae9
    CALL ESI                            ; 1000faeb | int GetLocaleInfoA(LCID Locale, LCTYPE LCType, LPSTR lpLCData, int cchData)
    TEST EAX,EAX                        ; 1000faed
    JZ 0x1000faf8                       ; 1000faef
        ;   XREF to: 1000faf8 (CONDITIONAL_JUMP)  ; LAB_1000faf8
    MOV EAX,0x2                         ; 1000faf1
    JMP 0x1000fb1e                      ; 1000faf6
        ;   XREF to: 1000fb1e (UNCONDITIONAL_JUMP)  ; LAB_1000fb1e
    PUSH 0x0                            ; 1000faf8
        ;   Label: LAB_1000faf8
    PUSH 0x0                            ; 1000fafa
    PUSH 0x1                            ; 1000fafc
    PUSH 0x0                            ; 1000fafe
    CALL dword ptr [0x10242280]         ; 1000fb00 | PTR_GetLocaleInfoW_10242280
    TEST EAX,EAX                        ; 1000fb06
    JZ 0x1000fb11                       ; 1000fb08
        ;   XREF to: 1000fb11 (CONDITIONAL_JUMP)  ; LAB_1000fb11
    MOV EAX,0x1                         ; 1000fb0a
    JMP 0x1000fb1e                      ; 1000fb0f
        ;   XREF to: 1000fb1e (UNCONDITIONAL_JUMP)  ; LAB_1000fb1e
    XOR EAX,EAX                         ; 1000fb11
        ;   Label: LAB_1000fb11
    POP EBP                             ; 1000fb13
    POP EDI                             ; 1000fb14
    POP ESI                             ; 1000fb15
    POP EBX                             ; 1000fb16
    RET                                 ; 1000fb17
    MOV ESI,dword ptr [0x1024227c]      ; 1000fb18 | PTR_GetLocaleInfoA_1024227c
        ;   Label: LAB_1000fb18
    MOV [0x10018258],EAX                ; 1000fb1e | DAT_10018258
        ;   Label: LAB_1000fb1e
    CMP EAX,0x2                         ; 1000fb23
    JNZ 0x1000fb43                      ; 1000fb26
        ;   XREF to: 1000fb43 (CONDITIONAL_JUMP)  ; LAB_1000fb43
    MOV EAX,dword ptr [ESP + 0x20]      ; 1000fb28
    MOV ECX,dword ptr [ESP + 0x1c]      ; 1000fb2c
    MOV EDX,dword ptr [ESP + 0x18]      ; 1000fb30
    PUSH EAX                            ; 1000fb34
    MOV EBX,dword ptr [ESP + 0x18]      ; 1000fb35
    PUSH ECX                            ; 1000fb39
    PUSH EDX                            ; 1000fb3a
    PUSH EBX                            ; 1000fb3b
    CALL ESI                            ; 1000fb3c | int GetLocaleInfoA(LCID Locale, LCTYPE LCType, LPSTR lpLCData, int cchData)
    POP EBP                             ; 1000fb3e
    POP EDI                             ; 1000fb3f
    POP ESI                             ; 1000fb40
    POP EBX                             ; 1000fb41
    RET                                 ; 1000fb42
    MOV [0x10018258],EAX                ; 1000fb43 | DAT_10018258
        ;   Label: LAB_1000fb43
    CMP EAX,0x1                         ; 1000fb48
    JNZ 0x1000fbdf                      ; 1000fb4b
        ;   XREF to: 1000fbdf (CONDITIONAL_JUMP)  ; LAB_1000fbdf
    MOV EDI,dword ptr [ESP + 0x24]      ; 1000fb51
    TEST EDI,EDI                        ; 1000fb55
    JNZ 0x1000fb5f                      ; 1000fb57
        ;   XREF to: 1000fb5f (CONDITIONAL_JUMP)  ; LAB_1000fb5f
    MOV EDI,dword ptr [0x10017770]      ; 1000fb59 | DAT_10017770
    MOV EAX,dword ptr [ESP + 0x18]      ; 1000fb5f
        ;   Label: LAB_1000fb5f
    PUSH 0x0                            ; 1000fb63
    MOV EBX,dword ptr [ESP + 0x18]      ; 1000fb65
    PUSH 0x0                            ; 1000fb69
    PUSH EAX                            ; 1000fb6b
    PUSH EBX                            ; 1000fb6c
    CALL dword ptr [0x10242280]         ; 1000fb6d | PTR_GetLocaleInfoW_10242280
    MOV EBP,EAX                         ; 1000fb73
    TEST EBP,EBP                        ; 1000fb75
    JNZ 0x1000fb80                      ; 1000fb77
        ;   XREF to: 1000fb80 (CONDITIONAL_JUMP)  ; LAB_1000fb80
    XOR EAX,EAX                         ; 1000fb79
    POP EBP                             ; 1000fb7b
    POP EDI                             ; 1000fb7c
    POP ESI                             ; 1000fb7d
    POP EBX                             ; 1000fb7e
    RET                                 ; 1000fb7f
    LEA EAX,[EBP*0x2 + 0x0]             ; 1000fb80
        ;   Label: LAB_1000fb80
    PUSH EAX                            ; 1000fb87
    CALL crt_heap.c_malloc_FUN_10008830 ; 1000fb88
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_malloc_FUN_10008830(size_t size)
    ADD ESP,0x4                         ; 1000fb8d
    MOV ESI,EAX                         ; 1000fb90
    TEST ESI,ESI                        ; 1000fb92
    JNZ 0x1000fb9d                      ; 1000fb94
        ;   XREF to: 1000fb9d (CONDITIONAL_JUMP)  ; LAB_1000fb9d
    XOR EAX,EAX                         ; 1000fb96
    POP EBP                             ; 1000fb98
    POP EDI                             ; 1000fb99
    POP ESI                             ; 1000fb9a
    POP EBX                             ; 1000fb9b
    RET                                 ; 1000fb9c
    MOV EAX,dword ptr [ESP + 0x18]      ; 1000fb9d
        ;   Label: LAB_1000fb9d
    PUSH EBP                            ; 1000fba1
    PUSH ESI                            ; 1000fba2
    PUSH EAX                            ; 1000fba3
    PUSH EBX                            ; 1000fba4
    CALL dword ptr [0x10242280]         ; 1000fba5 | PTR_GetLocaleInfoW_10242280
    TEST EAX,EAX                        ; 1000fbab
    JZ 0x1000fbd4                       ; 1000fbad
        ;   XREF to: 1000fbd4 (CONDITIONAL_JUMP)  ; LAB_1000fbd4
    MOV EAX,dword ptr [ESP + 0x20]      ; 1000fbaf
    PUSH 0x0                            ; 1000fbb3
    PUSH 0x0                            ; 1000fbb5
    TEST EAX,EAX                        ; 1000fbb7
    JNZ 0x1000fbe4                      ; 1000fbb9
        ;   XREF to: 1000fbe4 (CONDITIONAL_JUMP)  ; LAB_1000fbe4
    PUSH 0x0                            ; 1000fbbb
    PUSH 0x0                            ; 1000fbbd
    PUSH -0x1                           ; 1000fbbf
    PUSH ESI                            ; 1000fbc1
    PUSH 0x220                          ; 1000fbc2
    PUSH EDI                            ; 1000fbc7
    CALL dword ptr [0x10242230]         ; 1000fbc8 | PTR_WideCharToMultiByte_10242230
    MOV EDI,EAX                         ; 1000fbce
    TEST EDI,EDI                        ; 1000fbd0
    JNZ 0x1000fbff                      ; 1000fbd2
        ;   XREF to: 1000fbff (CONDITIONAL_JUMP)  ; LAB_1000fbff
    PUSH ESI                            ; 1000fbd4
        ;   Label: LAB_1000fbd4
    CALL crt_heap.c_free_FUN_10005b30   ; 1000fbd5
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000fbda
    XOR EAX,EAX                         ; 1000fbdd
    POP EBP                             ; 1000fbdf
        ;   Label: LAB_1000fbdf
    POP EDI                             ; 1000fbe0
    POP ESI                             ; 1000fbe1
    POP EBX                             ; 1000fbe2
    RET                                 ; 1000fbe3
    PUSH EAX                            ; 1000fbe4
        ;   Label: LAB_1000fbe4
    MOV EAX,dword ptr [ESP + 0x28]      ; 1000fbe5
    PUSH EAX                            ; 1000fbe9
    PUSH -0x1                           ; 1000fbea
    PUSH ESI                            ; 1000fbec
    PUSH 0x220                          ; 1000fbed
    PUSH EDI                            ; 1000fbf2
    CALL dword ptr [0x10242230]         ; 1000fbf3 | PTR_WideCharToMultiByte_10242230
    MOV EDI,EAX                         ; 1000fbf9
    TEST EDI,EDI                        ; 1000fbfb
    JZ 0x1000fbd4                       ; 1000fbfd
        ;   XREF to: 1000fbd4 (CONDITIONAL_JUMP)  ; LAB_1000fbd4
    PUSH ESI                            ; 1000fbff
        ;   Label: LAB_1000fbff
    CALL crt_heap.c_free_FUN_10005b30   ; 1000fc00
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000fc05
    MOV EAX,EDI                         ; 1000fc08
    POP EBP                             ; 1000fc0a
    POP EDI                             ; 1000fc0b
    POP ESI                             ; 1000fc0c
    POP EBX                             ; 1000fc0d
    RET                                 ; 1000fc0e


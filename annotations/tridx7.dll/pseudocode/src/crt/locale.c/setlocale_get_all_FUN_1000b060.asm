; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_locale_c_setlocale_get_all_FUN_1000b060(void)
;
;
; XREF[1]:
;   crt_locale.c_setlocale_FUN_1000ac10 at 1000ae76
;
; Referenced Globals:
;   TerminatedCString s_LC_CTYPE_10012734
;   TerminatedCString s_LC_COLLATE_10012740
;   undefined4 DAT_10012754
;   undefined4 DAT_10012754+1
;   undefined4 DAT_1001275c
;   undefined1 DAT_10017788
;   undefined1 DAT_10017789
;   undefined1 DAT_1001778a
;   undefined1 DAT_1001778b
;   undefined4 DAT_10017794
;   undefined1* PTR_s_LC_COLLATE_1001779c = 10012740
;   undefined1* PTR_DAT_100177a0 = 10017788
;   undefined1* PTR_s_LC_CTYPE_100177a8 = 10012734
;   undefined1* PTR_DAT_100177ac = 10017788
;   undefined1* PTR_DAT_100177d0 = 10017788
;
; Called Functions:
;   crt_heap.c_free_FUN_10005b30
;   crt_heap.c_malloc_FUN_10008830
;   crt_locale.c__lc_lctostr_FUN_1000b330
;
; *****************************************************************************

section .text

    CMP dword ptr [0x10017794],0x0      ; 1000b060 | DAT_10017794
        ;   Label: crt_locale.c_setlocale_get_all_FUN_1000b060
    PUSH EBX                            ; 1000b067
    PUSH ESI                            ; 1000b068
    PUSH EDI                            ; 1000b069
    MOV EBX,0x1                         ; 1000b06a
    PUSH EBP                            ; 1000b06f
    JNZ 0x1000b084                      ; 1000b070
        ;   XREF to: 1000b084 (CONDITIONAL_JUMP)  ; LAB_1000b084
    PUSH 0x351                          ; 1000b072
    CALL crt_heap.c_malloc_FUN_10008830 ; 1000b077
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_malloc_FUN_10008830(size_t size)
    ADD ESP,0x4                         ; 1000b07c
    MOV [0x10017794],EAX                ; 1000b07f | DAT_10017794
    MOV EAX,[0x10017794]                ; 1000b084 | DAT_10017794
        ;   Label: LAB_1000b084
    MOV EBP,0x100177a0                  ; 1000b089 | PTR_DAT_100177a0
    MOV byte ptr [EAX],0x0              ; 1000b08e
    MOV EAX,dword ptr [EBP]             ; 1000b091 | PTR_DAT_100177a0 | PTR_DAT_100177ac
        ;   Label: LAB_1000b091
    MOV ECX,dword ptr [EBP + -0x4]      ; 1000b094 | PTR_s_LC_COLLATE_1001779c | PTR_s_LC_CTYPE_100177a8
    PUSH EAX                            ; 1000b097 | DAT_10017788
    MOV EDX,dword ptr [0x10017794]      ; 1000b098 | DAT_10017794
    PUSH 0x1001275c                     ; 1000b09e | DAT_1001275c
    PUSH ECX                            ; 1000b0a3 | = "LC_COLLATE" | s_LC_CTYPE_10012734
    PUSH 0x3                            ; 1000b0a4
    PUSH EDX                            ; 1000b0a6
    CALL crt_locale.c__lc_lctostr_FUN_1000b330 ; 1000b0a7
        ;   XREF to: 1000b330 (UNCONDITIONAL_CALL)  ; void crt_locale.c__lc_lctostr_FUN_1000b330(char * dst, int count)
    ADD ESP,0x14                        ; 1000b0ac
    CMP EBP,0x100177d0                  ; 1000b0af | PTR_DAT_100177d0
    JNC 0x1000b125                      ; 1000b0b5
        ;   XREF to: 1000b125 (CONDITIONAL_JUMP)  ; LAB_1000b125
    MOV EDI,0x10012754                  ; 1000b0b7 | DAT_10012754
    MOV ECX,0xffffffff                  ; 1000b0bc
    SUB EAX,EAX                         ; 1000b0c1
    SCASB.REPNE ES:EDI                  ; 1000b0c3 | DAT_10012754 | DAT_10012754+1
    NOT ECX                             ; 1000b0c5
    SUB EDI,ECX                         ; 1000b0c7
    MOV EDX,ECX                         ; 1000b0c9
    MOV ESI,EDI                         ; 1000b0cb
    MOV ECX,0xffffffff                  ; 1000b0cd
    MOV EDI,dword ptr [0x10017794]      ; 1000b0d2 | DAT_10017794
    SUB EAX,EAX                         ; 1000b0d8
    SCASB.REPNE ES:EDI                  ; 1000b0da
    DEC EDI                             ; 1000b0dc
    MOV ECX,EDX                         ; 1000b0dd
    SHR ECX,0x2                         ; 1000b0df
    MOVSD.REP ES:EDI,ESI                ; 1000b0e2 | DAT_10012754
    MOV ECX,EDX                         ; 1000b0e4
    AND ECX,0x3                         ; 1000b0e6
    MOVSB.REP ES:EDI,ESI                ; 1000b0e9 | DAT_10012754 | DAT_10012754+1
    LEA ECX,[EBP + 0xc]                 ; 1000b0eb | PTR_DAT_100177ac
    MOV EAX,dword ptr [EBP]             ; 1000b0ee | PTR_DAT_100177a0
    MOV ESI,dword ptr [ECX]             ; 1000b0f1 | PTR_DAT_100177ac
    MOV DL,byte ptr [EAX]               ; 1000b0f3 | DAT_10017788 | DAT_1001778a
        ;   Label: LAB_1000b0f3
    CMP DL,byte ptr [ESI]               ; 1000b0f5 | DAT_10017788 | DAT_1001778a
    JNZ 0x1000b113                      ; 1000b0f7
        ;   XREF to: 1000b113 (CONDITIONAL_JUMP)  ; LAB_1000b113
    OR DL,DL                            ; 1000b0f9
    JZ 0x1000b10f                       ; 1000b0fb
        ;   XREF to: 1000b10f (CONDITIONAL_JUMP)  ; LAB_1000b10f
    MOV DL,byte ptr [EAX + 0x1]         ; 1000b0fd | DAT_10017789 | DAT_1001778b
    CMP DL,byte ptr [ESI + 0x1]         ; 1000b100 | DAT_10017789 | DAT_1001778b
    JNZ 0x1000b113                      ; 1000b103
        ;   XREF to: 1000b113 (CONDITIONAL_JUMP)  ; LAB_1000b113
    ADD EAX,0x2                         ; 1000b105
    ADD ESI,0x2                         ; 1000b108
    OR DL,DL                            ; 1000b10b
    JNZ 0x1000b0f3                      ; 1000b10d
        ;   XREF to: 1000b0f3 (CONDITIONAL_JUMP)  ; LAB_1000b0f3
    XOR EAX,EAX                         ; 1000b10f
        ;   Label: LAB_1000b10f
    JMP 0x1000b118                      ; 1000b111
        ;   XREF to: 1000b118 (UNCONDITIONAL_JUMP)  ; LAB_1000b118
    SBB EAX,EAX                         ; 1000b113
        ;   Label: LAB_1000b113
    SBB EAX,-0x1                        ; 1000b115
    TEST EAX,EAX                        ; 1000b118
        ;   Label: LAB_1000b118
    JZ 0x1000b11e                       ; 1000b11a
        ;   XREF to: 1000b11e (CONDITIONAL_JUMP)  ; LAB_1000b11e
    XOR EBX,EBX                         ; 1000b11c
    MOV EBP,ECX                         ; 1000b11e
        ;   Label: LAB_1000b11e
    JMP 0x1000b091                      ; 1000b120
        ;   XREF to: 1000b091 (UNCONDITIONAL_JUMP)  ; LAB_1000b091
    MOV EAX,[0x10017794]                ; 1000b125 | DAT_10017794
        ;   Label: LAB_1000b125
    TEST EBX,EBX                        ; 1000b12a
    JNZ 0x1000b133                      ; 1000b12c
        ;   XREF to: 1000b133 (CONDITIONAL_JUMP)  ; LAB_1000b133
    POP EBP                             ; 1000b12e
    POP EDI                             ; 1000b12f
    POP ESI                             ; 1000b130
    POP EBX                             ; 1000b131
    RET                                 ; 1000b132
    PUSH EAX                            ; 1000b133
        ;   Label: LAB_1000b133
    CALL crt_heap.c_free_FUN_10005b30   ; 1000b134
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000b139
    MOV EAX,[0x100177ac]                ; 1000b13c | PTR_DAT_100177ac | DAT_10017788
    MOV dword ptr [0x10017794],0x0      ; 1000b141 | DAT_10017794
    POP EBP                             ; 1000b14b
    POP EDI                             ; 1000b14c
    POP ESI                             ; 1000b14d
    POP EBX                             ; 1000b14e
    RET                                 ; 1000b14f


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_locale_c___get_qualified_locale_FUN_1000e350(char *locale,void *id,void *out)
;
; Parameters:
; char *           Stack[0x4]:4   locale
; void *           Stack[0x8]:4   id
; void *           Stack[0xc]:4   out
; Local Variables:
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
;
; XREF[1]:
;   crt_locale.c__expandlocale_FUN_1000b150 at 1000b24f
;
; Referenced Globals:
;   TerminatedCString s_OCP_10012d28
;   undefined4 s_OCP_10012d28+1
;   TerminatedCString s_ACP_10012d2c
;   undefined4 s_ACP_10012d2c+1
;   void* PTR_IsValidLocale_10242270 = 002426fa
;   void* PTR_IsValidCodePage_10242274 = 0024270a
;   void* PTR_GetUserDefaultLCID_10242278 = 0024271c
;
; Called Functions:
;   crt_locale.c___crtGetLocaleInfoA_FUN_1000fad0
;   crt_locale.c___crtGetLocaleInfoW_FUN_1000f9a0
;   crt_locale.c_GetLcidFromCountry_FUN_1000e6b0
;   crt_locale.c_GetLcidFromCountry_FUN_1000e710
;   crt_locale.c_GetLcidFromLangCountry_FUN_1000e780
;   crt_locale.c_GetLcidFromLanguage_FUN_1000e650
;   crt_stdlib.c__itoa_FUN_1000f8b0
;   crt_stdlib.c_atoi_FUN_1000ff10
;   crt_stdlib.c_wcstol_FUN_1000fc10
;   GetUserDefaultLCID
;   IsValidCodePage
;   IsValidLocale
;
; *****************************************************************************

section .text

    SUB ESP,0x8c                        ; 1000e350
        ;   Label: crt_locale.c___get_qualified_locale_FUN_1000e350
    MOV dword ptr [ESP + 0x8],0x0       ; 1000e356
    CMP dword ptr [ESP + 0x94],0x0      ; 1000e35e
    PUSH EBX                            ; 1000e366
    PUSH ESI                            ; 1000e367
    MOV EBX,dword ptr [ESP + 0xa0]      ; 1000e368
    PUSH EDI                            ; 1000e36f
    PUSH EBP                            ; 1000e370
    JNZ 0x1000e384                      ; 1000e371
        ;   XREF to: 1000e384 (CONDITIONAL_JUMP)  ; LAB_1000e384
    TEST EBX,EBX                        ; 1000e373
    JNZ 0x1000e384                      ; 1000e375
        ;   XREF to: 1000e384 (CONDITIONAL_JUMP)  ; LAB_1000e384
    XOR EAX,EAX                         ; 1000e377
    POP EBP                             ; 1000e379
    POP EDI                             ; 1000e37a
    POP ESI                             ; 1000e37b
    POP EBX                             ; 1000e37c
    ADD ESP,0x8c                        ; 1000e37d
    RET                                 ; 1000e383
    MOV word ptr [ESP + 0x10],0x0       ; 1000e384
        ;   Label: LAB_1000e384
    MOV word ptr [ESP + 0x12],0x0       ; 1000e38b
    MOV word ptr [ESP + 0x14],0x0       ; 1000e392
    MOV EBP,dword ptr [ESP + 0xa0]      ; 1000e399
    TEST EBP,EBP                        ; 1000e3a0
    JZ 0x1000e3ca                       ; 1000e3a2
        ;   XREF to: 1000e3ca (CONDITIONAL_JUMP)  ; LAB_1000e3ca
    CMP byte ptr [EBP],0x0              ; 1000e3a4
    JZ 0x1000e3ca                       ; 1000e3a8
        ;   XREF to: 1000e3ca (CONDITIONAL_JUMP)  ; LAB_1000e3ca
    PUSH EBP                            ; 1000e3aa
    CALL crt_locale.c_GetLcidFromLanguage_FUN_1000e650 ; 1000e3ab
        ;   XREF to: 1000e650 (UNCONDITIONAL_CALL)  ; uint crt_locale.c_GetLcidFromLanguage_FUN_1000e650(char * lang)
    MOV word ptr [ESP + 0x14],AX        ; 1000e3b0
    ADD ESP,0x4                         ; 1000e3b5
    TEST AX,AX                          ; 1000e3b8
    JNZ 0x1000e3ca                      ; 1000e3bb
        ;   XREF to: 1000e3ca (CONDITIONAL_JUMP)  ; LAB_1000e3ca
    XOR EAX,EAX                         ; 1000e3bd
    POP EBP                             ; 1000e3bf
    POP EDI                             ; 1000e3c0
    POP ESI                             ; 1000e3c1
    POP EBX                             ; 1000e3c2
    ADD ESP,0x8c                        ; 1000e3c3
    RET                                 ; 1000e3c9
    CMP EBP,-0x40                       ; 1000e3ca
        ;   Label: LAB_1000e3ca
    JZ 0x1000e3f7                       ; 1000e3cd
        ;   XREF to: 1000e3f7 (CONDITIONAL_JUMP)  ; LAB_1000e3f7
    LEA EAX,[EBP + 0x40]                ; 1000e3cf
    CMP byte ptr [EAX],0x0              ; 1000e3d2
    JZ 0x1000e3f7                       ; 1000e3d5
        ;   XREF to: 1000e3f7 (CONDITIONAL_JUMP)  ; LAB_1000e3f7
    PUSH EAX                            ; 1000e3d7
    CALL crt_locale.c_GetLcidFromCountry_FUN_1000e6b0 ; 1000e3d8
        ;   XREF to: 1000e6b0 (UNCONDITIONAL_CALL)  ; uint crt_locale.c_GetLcidFromCountry_FUN_1000e6b0(char * country)
    MOV word ptr [ESP + 0x16],AX        ; 1000e3dd
    ADD ESP,0x4                         ; 1000e3e2
    TEST AX,AX                          ; 1000e3e5
    JNZ 0x1000e3f7                      ; 1000e3e8
        ;   XREF to: 1000e3f7 (CONDITIONAL_JUMP)  ; LAB_1000e3f7
    XOR EAX,EAX                         ; 1000e3ea
    POP EBP                             ; 1000e3ec
    POP EDI                             ; 1000e3ed
    POP ESI                             ; 1000e3ee
    POP EBX                             ; 1000e3ef
    ADD ESP,0x8c                        ; 1000e3f0
    RET                                 ; 1000e3f6
    CMP EBP,-0x80                       ; 1000e3f7
        ;   Label: LAB_1000e3f7
    JZ 0x1000e430                       ; 1000e3fa
        ;   XREF to: 1000e430 (CONDITIONAL_JUMP)  ; LAB_1000e430
    ADD EBP,0x80                        ; 1000e3fc
    CMP byte ptr [EBP],0x0              ; 1000e402
    JZ 0x1000e430                       ; 1000e406
        ;   XREF to: 1000e430 (CONDITIONAL_JUMP)  ; LAB_1000e430
    MOV EDI,0x10012d2c                  ; 1000e408 | = "ACP"
    MOV ECX,0x4                         ; 1000e40d
    MOV ESI,EBP                         ; 1000e412
    CMPSB.REPE ES:EDI,ESI               ; 1000e414 | = "ACP" | s_ACP_10012d2c+1
    JZ 0x1000e430                       ; 1000e416
        ;   XREF to: 1000e430 (CONDITIONAL_JUMP)  ; LAB_1000e430
    MOV EDI,0x10012d28                  ; 1000e418 | = "OCP"
    MOV ECX,0x4                         ; 1000e41d
    MOV ESI,EBP                         ; 1000e422
    CMPSB.REPE ES:EDI,ESI               ; 1000e424 | = "OCP" | s_OCP_10012d28+1
    JNZ 0x1000e465                      ; 1000e426
        ;   XREF to: 1000e465 (CONDITIONAL_JUMP)  ; LAB_1000e465
    MOV dword ptr [ESP + 0x18],0x1      ; 1000e428
    CMP word ptr [ESP + 0x10],0x0       ; 1000e430
        ;   Label: LAB_1000e430
    JNZ 0x1000e4af                      ; 1000e436
        ;   XREF to: 1000e4af (CONDITIONAL_JUMP)  ; LAB_1000e4af
    CMP word ptr [ESP + 0x12],0x0       ; 1000e438
    JNZ 0x1000e485                      ; 1000e43e
        ;   XREF to: 1000e485 (CONDITIONAL_JUMP)  ; LAB_1000e485
    MOV ESI,dword ptr [0x10242278]      ; 1000e440 | PTR_GetUserDefaultLCID_10242278
    CALL ESI                            ; 1000e446 | LCID GetUserDefaultLCID()
    MOV word ptr [ESP + 0x12],AX        ; 1000e448
    CMP word ptr [ESP + 0x14],0x0       ; 1000e44d
    MOV word ptr [ESP + 0x10],AX        ; 1000e453
    JNZ 0x1000e506                      ; 1000e458
        ;   XREF to: 1000e506 (CONDITIONAL_JUMP)  ; LAB_1000e506
    CALL ESI                            ; 1000e45e | LCID GetUserDefaultLCID()
    JMP 0x1000e50a                      ; 1000e460
        ;   XREF to: 1000e50a (UNCONDITIONAL_JUMP)  ; LAB_1000e50a
    PUSH EBP                            ; 1000e465
        ;   Label: LAB_1000e465
    CALL crt_stdlib.c_atoi_FUN_1000ff10 ; 1000e466
        ;   XREF to: 1000ff10 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_1000ff10(char * str)
    MOV word ptr [ESP + 0x18],AX        ; 1000e46b
    ADD ESP,0x4                         ; 1000e470
    TEST AX,AX                          ; 1000e473
    JNZ 0x1000e430                      ; 1000e476
        ;   XREF to: 1000e430 (CONDITIONAL_JUMP)  ; LAB_1000e430
    XOR EAX,EAX                         ; 1000e478
    POP EBP                             ; 1000e47a
    POP EDI                             ; 1000e47b
    POP ESI                             ; 1000e47c
    POP EBX                             ; 1000e47d
    ADD ESP,0x8c                        ; 1000e47e
    RET                                 ; 1000e484
    MOV EAX,dword ptr [ESP + 0x12]      ; 1000e485
        ;   Label: LAB_1000e485
    PUSH EAX                            ; 1000e489
    CALL crt_locale.c_GetLcidFromCountry_FUN_1000e710 ; 1000e48a
        ;   XREF to: 1000e710 (UNCONDITIONAL_CALL)  ; int crt_locale.c_GetLcidFromCountry_FUN_1000e710(ushort ctry)
    MOV word ptr [ESP + 0x14],AX        ; 1000e48f
    ADD ESP,0x4                         ; 1000e494
    CMP word ptr [ESP + 0x14],0x0       ; 1000e497
    MOV word ptr [ESP + 0x12],AX        ; 1000e49d
    JNZ 0x1000e506                      ; 1000e4a2
        ;   XREF to: 1000e506 (CONDITIONAL_JUMP)  ; LAB_1000e506
    MOV EAX,dword ptr [ESP + 0x10]      ; 1000e4a4
    AND EAX,0xffff                      ; 1000e4a8
    JMP 0x1000e50a                      ; 1000e4ad
        ;   XREF to: 1000e50a (UNCONDITIONAL_JUMP)  ; LAB_1000e50a
    CMP word ptr [ESP + 0x12],0x0       ; 1000e4af
        ;   Label: LAB_1000e4af
    JNZ 0x1000e4d2                      ; 1000e4b5
        ;   XREF to: 1000e4d2 (CONDITIONAL_JUMP)  ; LAB_1000e4d2
    MOV AX,word ptr [ESP + 0x10]        ; 1000e4b7
    CMP word ptr [ESP + 0x14],0x0       ; 1000e4bc
    MOV word ptr [ESP + 0x12],AX        ; 1000e4c2
    JNZ 0x1000e506                      ; 1000e4c7
        ;   XREF to: 1000e506 (CONDITIONAL_JUMP)  ; LAB_1000e506
    XOR EAX,EAX                         ; 1000e4c9
    MOV AX,word ptr [ESP + 0x12]        ; 1000e4cb
    JMP 0x1000e50a                      ; 1000e4d0
        ;   XREF to: 1000e50a (UNCONDITIONAL_JUMP)  ; LAB_1000e50a
    LEA EAX,[ESP + 0x10]                ; 1000e4d2
        ;   Label: LAB_1000e4d2
    LEA ECX,[ESP + 0x12]                ; 1000e4d6
    PUSH EAX                            ; 1000e4da
    PUSH ECX                            ; 1000e4db
    CALL crt_locale.c_GetLcidFromLangCountry_FUN_1000e780 ; 1000e4dc
        ;   XREF to: 1000e780 (UNCONDITIONAL_CALL)  ; int crt_locale.c_GetLcidFromLangCountry_FUN_1000e780(ushort * plang, ushort * pctry)
    ADD ESP,0x8                         ; 1000e4e1
    TEST EAX,EAX                        ; 1000e4e4
    JNZ 0x1000e4f5                      ; 1000e4e6
        ;   XREF to: 1000e4f5 (CONDITIONAL_JUMP)  ; LAB_1000e4f5
    XOR EAX,EAX                         ; 1000e4e8
    POP EBP                             ; 1000e4ea
    POP EDI                             ; 1000e4eb
    POP ESI                             ; 1000e4ec
    POP EBX                             ; 1000e4ed
    ADD ESP,0x8c                        ; 1000e4ee
    RET                                 ; 1000e4f4
    CMP word ptr [ESP + 0x14],0x0       ; 1000e4f5
        ;   Label: LAB_1000e4f5
    JNZ 0x1000e506                      ; 1000e4fb
        ;   XREF to: 1000e506 (CONDITIONAL_JUMP)  ; LAB_1000e506
    XOR EAX,EAX                         ; 1000e4fd
    MOV AX,word ptr [ESP + 0x12]        ; 1000e4ff
    JMP 0x1000e50a                      ; 1000e504
        ;   XREF to: 1000e50a (UNCONDITIONAL_JUMP)  ; LAB_1000e50a
    MOV EAX,dword ptr [ESP + 0x1c]      ; 1000e506
        ;   Label: LAB_1000e506
    CMP word ptr [ESP + 0x14],0x0       ; 1000e50a
        ;   Label: LAB_1000e50a
    JNZ 0x1000e55c                      ; 1000e510
        ;   XREF to: 1000e55c (CONDITIONAL_JUMP)  ; LAB_1000e55c
    LEA ECX,[ESP + 0x1c]                ; 1000e512
    PUSH 0x0                            ; 1000e516
    CMP dword ptr [ESP + 0x1c],0x1      ; 1000e518
    PUSH 0x40                           ; 1000e51d
    PUSH ECX                            ; 1000e51f
    SBB ECX,ECX                         ; 1000e520
    AND ECX,0xff9                       ; 1000e522
    ADD ECX,0xb                         ; 1000e528
    PUSH ECX                            ; 1000e52b
    PUSH EAX                            ; 1000e52c
    CALL crt_locale.c___crtGetLocaleInfoW_FUN_1000f9a0 ; 1000e52d
        ;   XREF to: 1000f9a0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___crtGetLocaleInfoW_FUN_1000f9a0(LCID lcid, LCTYPE lc_type, LPWSTR dest, int cch, ...)
    ADD ESP,0x14                        ; 1000e532
    TEST EAX,EAX                        ; 1000e535
    JNZ 0x1000e546                      ; 1000e537
        ;   XREF to: 1000e546 (CONDITIONAL_JUMP)  ; LAB_1000e546
    XOR EAX,EAX                         ; 1000e539
    POP EBP                             ; 1000e53b
    POP EDI                             ; 1000e53c
    POP ESI                             ; 1000e53d
    POP EBX                             ; 1000e53e
    ADD ESP,0x8c                        ; 1000e53f
    RET                                 ; 1000e545
    LEA EAX,[ESP + 0x1c]                ; 1000e546
        ;   Label: LAB_1000e546
    PUSH 0xa                            ; 1000e54a
    PUSH 0x0                            ; 1000e54c
    PUSH EAX                            ; 1000e54e
    CALL crt_stdlib.c_wcstol_FUN_1000fc10 ; 1000e54f
        ;   XREF to: 1000fc10 (UNCONDITIONAL_CALL)  ; long crt_stdlib.c_wcstol_FUN_1000fc10(wchar_t * nptr, wchar_t * * endptr, int base)
    MOV word ptr [ESP + 0x20],AX        ; 1000e554
    ADD ESP,0xc                         ; 1000e559
    MOV EAX,dword ptr [ESP + 0x14]      ; 1000e55c
        ;   Label: LAB_1000e55c
    MOV EBP,dword ptr [0x10242274]      ; 1000e560 | PTR_IsValidCodePage_10242274
    AND EAX,0xffff                      ; 1000e566
    PUSH EAX                            ; 1000e56b
    CALL EBP                            ; 1000e56c | BOOL IsValidCodePage(UINT CodePage)
    TEST EAX,EAX                        ; 1000e56e
    JNZ 0x1000e57f                      ; 1000e570
        ;   XREF to: 1000e57f (CONDITIONAL_JUMP)  ; LAB_1000e57f
    XOR EAX,EAX                         ; 1000e572
    POP EBP                             ; 1000e574
    POP EDI                             ; 1000e575
    POP ESI                             ; 1000e576
    POP EBX                             ; 1000e577
    ADD ESP,0x8c                        ; 1000e578
    RET                                 ; 1000e57e
    MOV EAX,dword ptr [ESP + 0x10]      ; 1000e57f
        ;   Label: LAB_1000e57f
    PUSH 0x1                            ; 1000e583
    AND EAX,0xffff                      ; 1000e585
    MOV EBP,dword ptr [0x10242270]      ; 1000e58a | PTR_IsValidLocale_10242270
    PUSH EAX                            ; 1000e590
    CALL EBP                            ; 1000e591 | BOOL IsValidLocale(LCID Locale, DWORD dwFlags)
    TEST EAX,EAX                        ; 1000e593
    JNZ 0x1000e5a4                      ; 1000e595
        ;   XREF to: 1000e5a4 (CONDITIONAL_JUMP)  ; LAB_1000e5a4
    XOR EAX,EAX                         ; 1000e597
    POP EBP                             ; 1000e599
    POP EDI                             ; 1000e59a
    POP ESI                             ; 1000e59b
    POP EBX                             ; 1000e59c
    ADD ESP,0x8c                        ; 1000e59d
    RET                                 ; 1000e5a3
    CMP dword ptr [ESP + 0xa4],0x0      ; 1000e5a4
        ;   Label: LAB_1000e5a4
    JZ 0x1000e5c5                       ; 1000e5ac
        ;   XREF to: 1000e5c5 (CONDITIONAL_JUMP)  ; LAB_1000e5c5
    LEA EAX,[ESP + 0x10]                ; 1000e5ae
    MOV EDX,dword ptr [ESP + 0xa4]      ; 1000e5b2
    MOV ECX,dword ptr [EAX]             ; 1000e5b9
    MOV AX,word ptr [EAX + 0x4]         ; 1000e5bb
    MOV dword ptr [EDX],ECX             ; 1000e5bf
    MOV word ptr [EDX + 0x4],AX         ; 1000e5c1
    TEST EBX,EBX                        ; 1000e5c5
        ;   Label: LAB_1000e5c5
    JZ 0x1000e63f                       ; 1000e5c7
        ;   XREF to: 1000e63f (CONDITIONAL_JUMP)  ; LAB_1000e63f
    MOV EAX,dword ptr [ESP + 0x10]      ; 1000e5c9
    PUSH 0x0                            ; 1000e5cd
    PUSH 0x40                           ; 1000e5cf
    AND EAX,0xffff                      ; 1000e5d1
    PUSH EBX                            ; 1000e5d6
    PUSH 0x1001                         ; 1000e5d7
    PUSH EAX                            ; 1000e5dc
    CALL crt_locale.c___crtGetLocaleInfoA_FUN_1000fad0 ; 1000e5dd
        ;   XREF to: 1000fad0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___crtGetLocaleInfoA_FUN_1000fad0(LCID lcid, LCTYPE lc_type, LPSTR dest, int cch, ...)
    ADD ESP,0x14                        ; 1000e5e2
    TEST EAX,EAX                        ; 1000e5e5
    JNZ 0x1000e5f6                      ; 1000e5e7
        ;   XREF to: 1000e5f6 (CONDITIONAL_JUMP)  ; LAB_1000e5f6
    XOR EAX,EAX                         ; 1000e5e9
    POP EBP                             ; 1000e5eb
    POP EDI                             ; 1000e5ec
    POP ESI                             ; 1000e5ed
    POP EBX                             ; 1000e5ee
    ADD ESP,0x8c                        ; 1000e5ef
    RET                                 ; 1000e5f5
    PUSH 0x0                            ; 1000e5f6
        ;   Label: LAB_1000e5f6
    LEA EAX,[EBX + 0x40]                ; 1000e5f8
    PUSH 0x40                           ; 1000e5fb
    PUSH EAX                            ; 1000e5fd
    PUSH 0x1002                         ; 1000e5fe
    XOR EAX,EAX                         ; 1000e603
    MOV AX,word ptr [ESP + 0x22]        ; 1000e605
    PUSH EAX                            ; 1000e60a
    CALL crt_locale.c___crtGetLocaleInfoA_FUN_1000fad0 ; 1000e60b
        ;   XREF to: 1000fad0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___crtGetLocaleInfoA_FUN_1000fad0(LCID lcid, LCTYPE lc_type, LPSTR dest, int cch, ...)
    ADD ESP,0x14                        ; 1000e610
    TEST EAX,EAX                        ; 1000e613
    JNZ 0x1000e624                      ; 1000e615
        ;   XREF to: 1000e624 (CONDITIONAL_JUMP)  ; LAB_1000e624
    XOR EAX,EAX                         ; 1000e617
    POP EBP                             ; 1000e619
    POP EDI                             ; 1000e61a
    POP ESI                             ; 1000e61b
    POP EBX                             ; 1000e61c
    ADD ESP,0x8c                        ; 1000e61d
    RET                                 ; 1000e623
    PUSH 0xa                            ; 1000e624
        ;   Label: LAB_1000e624
    ADD EBX,0x80                        ; 1000e626
    MOV EAX,dword ptr [ESP + 0x18]      ; 1000e62c
    PUSH EBX                            ; 1000e630
    AND EAX,0xffff                      ; 1000e631
    PUSH EAX                            ; 1000e636
    CALL crt_stdlib.c__itoa_FUN_1000f8b0 ; 1000e637
        ;   XREF to: 1000f8b0 (UNCONDITIONAL_CALL)  ; char * crt_stdlib.c__itoa_FUN_1000f8b0(int val, char * buf, int radix)
    ADD ESP,0xc                         ; 1000e63c
    MOV EAX,0x1                         ; 1000e63f
        ;   Label: LAB_1000e63f
    POP EBP                             ; 1000e644
    POP EDI                             ; 1000e645
    POP ESI                             ; 1000e646
    POP EBX                             ; 1000e647
    ADD ESP,0x8c                        ; 1000e648
    RET                                 ; 1000e64e


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_locale_c___crtLCMapStringA_FUN_1000c340(LCID lcid,DWORD map_flags,LPCSTR src,int cch_src,LPWSTR dest,int cch_dest,UINT code_page)
;
; Parameters:
; LCID             Stack[0x4]:4   lcid
; DWORD            Stack[0x8]:4   map_flags
; LPCSTR           Stack[0xc]:4   src
; int              Stack[0x10]:4   cch_src
; LPWSTR           Stack[0x14]:4   dest
; int              Stack[0x18]:4   cch_dest
; UINT             Stack[0x1c]:4   code_page
;
; XREF[1]:
;   crt_ctype.c__tolower_lk_FUN_10009be0 at 10009c8c
;
; Referenced Globals:
;   undefined4 DAT_1001276c
;   undefined4 DAT_10012770
;   undefined4 DAT_10017770
;   undefined4 DAT_10017918
;   void* PTR_MultiByteToWideChar_10242220 = 0024257a
;   void* PTR_WideCharToMultiByte_10242230 = 002425dc
;   void* PTR_LCMapStringA_10242250 = 002426da
;   void* PTR_LCMapStringW_1024226c = 002426ea
;
; Called Functions:
;   crt_heap.c_free_FUN_10005b30
;   crt_heap.c_malloc_FUN_10008830
;   crt_string.c__strncnt_FUN_1000c570
;   LCMapStringA
;   LCMapStringW
;   MultiByteToWideChar
;   WideCharToMultiByte
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 1000c340
        ;   Label: crt_locale.c___crtLCMapStringA_FUN_1000c340
    MOV EAX,[0x10017918]                ; 1000c341 | DAT_10017918
    PUSH ESI                            ; 1000c346
    TEST EAX,EAX                        ; 1000c347
    PUSH EDI                            ; 1000c349
    PUSH EBP                            ; 1000c34a
    JNZ 0x1000c39c                      ; 1000c34b
        ;   XREF to: 1000c39c (CONDITIONAL_JUMP)  ; LAB_1000c39c
    PUSH 0x0                            ; 1000c34d
    MOV ESI,dword ptr [0x10242250]      ; 1000c34f | PTR_LCMapStringA_10242250
    PUSH 0x0                            ; 1000c355
    PUSH 0x1                            ; 1000c357
    PUSH 0x1001276c                     ; 1000c359 | DAT_1001276c
    PUSH 0x100                          ; 1000c35e
    PUSH 0x0                            ; 1000c363
    CALL ESI                            ; 1000c365 | int LCMapStringA(LCID Locale, DWORD dwMapFlags, LPCSTR lpSrcStr, int cchSrc, ...)
    TEST EAX,EAX                        ; 1000c367
    JZ 0x1000c372                       ; 1000c369
        ;   XREF to: 1000c372 (CONDITIONAL_JUMP)  ; LAB_1000c372
    MOV EAX,0x2                         ; 1000c36b
    JMP 0x1000c3a2                      ; 1000c370
        ;   XREF to: 1000c3a2 (UNCONDITIONAL_JUMP)  ; LAB_1000c3a2
    PUSH 0x0                            ; 1000c372
        ;   Label: LAB_1000c372
    PUSH 0x0                            ; 1000c374
    PUSH 0x1                            ; 1000c376
    PUSH 0x10012770                     ; 1000c378 | DAT_10012770
    PUSH 0x100                          ; 1000c37d
    PUSH 0x0                            ; 1000c382
    CALL dword ptr [0x1024226c]         ; 1000c384 | PTR_LCMapStringW_1024226c
    TEST EAX,EAX                        ; 1000c38a
    JZ 0x1000c395                       ; 1000c38c
        ;   XREF to: 1000c395 (CONDITIONAL_JUMP)  ; LAB_1000c395
    MOV EAX,0x1                         ; 1000c38e
    JMP 0x1000c3a2                      ; 1000c393
        ;   XREF to: 1000c3a2 (UNCONDITIONAL_JUMP)  ; LAB_1000c3a2
    XOR EAX,EAX                         ; 1000c395
        ;   Label: LAB_1000c395
    POP EBP                             ; 1000c397
    POP EDI                             ; 1000c398
    POP ESI                             ; 1000c399
    POP EBX                             ; 1000c39a
    RET                                 ; 1000c39b
    MOV ESI,dword ptr [0x10242250]      ; 1000c39c | PTR_LCMapStringA_10242250
        ;   Label: LAB_1000c39c
    MOV EDI,dword ptr [ESP + 0x20]      ; 1000c3a2
        ;   Label: LAB_1000c3a2
    MOV [0x10017918],EAX                ; 1000c3a6 | DAT_10017918
    TEST EDI,EDI                        ; 1000c3ab
    JLE 0x1000c3c4                      ; 1000c3ad
        ;   XREF to: 1000c3c4 (CONDITIONAL_JUMP)  ; LAB_1000c3c4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 1000c3af
    PUSH EDI                            ; 1000c3b3
    PUSH EAX                            ; 1000c3b4
    CALL crt_string.c__strncnt_FUN_1000c570 ; 1000c3b5
        ;   XREF to: 1000c570 (UNCONDITIONAL_CALL)  ; size_t crt_string.c__strncnt_FUN_1000c570(char * str, size_t count)
    ADD ESP,0x8                         ; 1000c3ba
    MOV EDI,EAX                         ; 1000c3bd
    MOV EAX,[0x10017918]                ; 1000c3bf | DAT_10017918
    MOV [0x10017918],EAX                ; 1000c3c4 | DAT_10017918
        ;   Label: LAB_1000c3c4
    CMP EAX,0x2                         ; 1000c3c9
    JNZ 0x1000c3ef                      ; 1000c3cc
        ;   XREF to: 1000c3ef (CONDITIONAL_JUMP)  ; LAB_1000c3ef
    MOV EAX,dword ptr [ESP + 0x28]      ; 1000c3ce
    MOV ECX,dword ptr [ESP + 0x24]      ; 1000c3d2
    MOV EDX,dword ptr [ESP + 0x1c]      ; 1000c3d6
    PUSH EAX                            ; 1000c3da
    MOV EAX,dword ptr [ESP + 0x1c]      ; 1000c3db
    PUSH ECX                            ; 1000c3df
    MOV ECX,dword ptr [ESP + 0x1c]      ; 1000c3e0
    PUSH EDI                            ; 1000c3e4
    PUSH EDX                            ; 1000c3e5
    PUSH EAX                            ; 1000c3e6
    PUSH ECX                            ; 1000c3e7
    CALL ESI                            ; 1000c3e8 | int LCMapStringA(LCID Locale, DWORD dwMapFlags, LPCSTR lpSrcStr, int cchSrc, ...)
    POP EBP                             ; 1000c3ea
    POP EDI                             ; 1000c3eb
    POP ESI                             ; 1000c3ec
    POP EBX                             ; 1000c3ed
    RET                                 ; 1000c3ee
    MOV [0x10017918],EAX                ; 1000c3ef | DAT_10017918
        ;   Label: LAB_1000c3ef
    CMP EAX,0x1                         ; 1000c3f4
    JNZ 0x1000c4cf                      ; 1000c3f7
        ;   XREF to: 1000c4cf (CONDITIONAL_JUMP)  ; LAB_1000c4cf
    XOR ESI,ESI                         ; 1000c3fd
    CMP dword ptr [ESP + 0x2c],ESI      ; 1000c3ff
    JNZ 0x1000c40e                      ; 1000c403
        ;   XREF to: 1000c40e (CONDITIONAL_JUMP)  ; LAB_1000c40e
    MOV EAX,[0x10017770]                ; 1000c405 | DAT_10017770
    MOV dword ptr [ESP + 0x2c],EAX      ; 1000c40a
    MOV EAX,dword ptr [ESP + 0x1c]      ; 1000c40e
        ;   Label: LAB_1000c40e
    PUSH 0x0                            ; 1000c412
    MOV ECX,dword ptr [ESP + 0x30]      ; 1000c414
    PUSH 0x0                            ; 1000c418
    PUSH EDI                            ; 1000c41a
    PUSH EAX                            ; 1000c41b
    PUSH 0x9                            ; 1000c41c
    PUSH ECX                            ; 1000c41e
    CALL dword ptr [0x10242220]         ; 1000c41f | PTR_MultiByteToWideChar_10242220
    MOV EBP,EAX                         ; 1000c425
    TEST EBP,EBP                        ; 1000c427
    JNZ 0x1000c432                      ; 1000c429
        ;   XREF to: 1000c432 (CONDITIONAL_JUMP)  ; LAB_1000c432
    XOR EAX,EAX                         ; 1000c42b
    POP EBP                             ; 1000c42d
    POP EDI                             ; 1000c42e
    POP ESI                             ; 1000c42f
    POP EBX                             ; 1000c430
    RET                                 ; 1000c431
    LEA EAX,[EBP*0x2 + 0x0]             ; 1000c432
        ;   Label: LAB_1000c432
    PUSH EAX                            ; 1000c439
    CALL crt_heap.c_malloc_FUN_10008830 ; 1000c43a
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_malloc_FUN_10008830(size_t size)
    ADD ESP,0x4                         ; 1000c43f
    MOV EBX,EAX                         ; 1000c442
    TEST EBX,EBX                        ; 1000c444
    JNZ 0x1000c44f                      ; 1000c446
        ;   XREF to: 1000c44f (CONDITIONAL_JUMP)  ; LAB_1000c44f
    XOR EAX,EAX                         ; 1000c448
    POP EBP                             ; 1000c44a
    POP EDI                             ; 1000c44b
    POP ESI                             ; 1000c44c
    POP EBX                             ; 1000c44d
    RET                                 ; 1000c44e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 1000c44f
        ;   Label: LAB_1000c44f
    PUSH EBP                            ; 1000c453
    MOV ECX,dword ptr [ESP + 0x30]      ; 1000c454
    PUSH EBX                            ; 1000c458
    PUSH EDI                            ; 1000c459
    PUSH EAX                            ; 1000c45a
    PUSH 0x1                            ; 1000c45b
    PUSH ECX                            ; 1000c45d
    CALL dword ptr [0x10242220]         ; 1000c45e | PTR_MultiByteToWideChar_10242220
    TEST EAX,EAX                        ; 1000c464
    JZ 0x1000c4bb                       ; 1000c466
        ;   XREF to: 1000c4bb (CONDITIONAL_JUMP)  ; LAB_1000c4bb
    MOV EAX,dword ptr [ESP + 0x18]      ; 1000c468
    PUSH 0x0                            ; 1000c46c
    MOV ECX,dword ptr [ESP + 0x18]      ; 1000c46e
    PUSH 0x0                            ; 1000c472
    PUSH EBP                            ; 1000c474
    PUSH EBX                            ; 1000c475
    PUSH EAX                            ; 1000c476
    PUSH ECX                            ; 1000c477
    CALL dword ptr [0x1024226c]         ; 1000c478 | PTR_LCMapStringW_1024226c
    MOV EDI,EAX                         ; 1000c47e
    TEST EDI,EDI                        ; 1000c480
    JZ 0x1000c4bb                       ; 1000c482
        ;   XREF to: 1000c4bb (CONDITIONAL_JUMP)  ; LAB_1000c4bb
    TEST byte ptr [ESP + 0x19],0x4      ; 1000c484
    JZ 0x1000c4d4                       ; 1000c489
        ;   XREF to: 1000c4d4 (CONDITIONAL_JUMP)  ; LAB_1000c4d4
    MOV EAX,dword ptr [ESP + 0x28]      ; 1000c48b
    TEST EAX,EAX                        ; 1000c48f
    JZ 0x1000c552                       ; 1000c491
        ;   XREF to: 1000c552 (CONDITIONAL_JUMP)  ; LAB_1000c552
    CMP EAX,EDI                         ; 1000c497
    JL 0x1000c4bb                       ; 1000c499
        ;   XREF to: 1000c4bb (CONDITIONAL_JUMP)  ; LAB_1000c4bb
    MOV ECX,dword ptr [ESP + 0x18]      ; 1000c49b
    PUSH EAX                            ; 1000c49f
    MOV EAX,dword ptr [ESP + 0x28]      ; 1000c4a0
    MOV EDX,dword ptr [ESP + 0x18]      ; 1000c4a4
    PUSH EAX                            ; 1000c4a8
    PUSH EBP                            ; 1000c4a9
    PUSH EBX                            ; 1000c4aa
    PUSH ECX                            ; 1000c4ab
    PUSH EDX                            ; 1000c4ac
    CALL dword ptr [0x1024226c]         ; 1000c4ad | PTR_LCMapStringW_1024226c
    TEST EAX,EAX                        ; 1000c4b3
    JNZ 0x1000c552                      ; 1000c4b5
        ;   XREF to: 1000c552 (CONDITIONAL_JUMP)  ; LAB_1000c552
    PUSH EBX                            ; 1000c4bb
        ;   Label: LAB_1000c4bb
    CALL crt_heap.c_free_FUN_10005b30   ; 1000c4bc
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000c4c1
    PUSH ESI                            ; 1000c4c4
    CALL crt_heap.c_free_FUN_10005b30   ; 1000c4c5
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000c4ca
    XOR EAX,EAX                         ; 1000c4cd
    POP EBP                             ; 1000c4cf
        ;   Label: LAB_1000c4cf
    POP EDI                             ; 1000c4d0
    POP ESI                             ; 1000c4d1
    POP EBX                             ; 1000c4d2
    RET                                 ; 1000c4d3
    LEA EAX,[EDI*0x2 + 0x0]             ; 1000c4d4
        ;   Label: LAB_1000c4d4
    PUSH EAX                            ; 1000c4db
    CALL crt_heap.c_malloc_FUN_10008830 ; 1000c4dc
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_malloc_FUN_10008830(size_t size)
    ADD ESP,0x4                         ; 1000c4e1
    MOV ESI,EAX                         ; 1000c4e4
    TEST ESI,ESI                        ; 1000c4e6
    JZ 0x1000c4bb                       ; 1000c4e8
        ;   XREF to: 1000c4bb (CONDITIONAL_JUMP)  ; LAB_1000c4bb
    MOV EAX,dword ptr [ESP + 0x18]      ; 1000c4ea
    PUSH EDI                            ; 1000c4ee
    MOV ECX,dword ptr [ESP + 0x18]      ; 1000c4ef
    PUSH ESI                            ; 1000c4f3
    PUSH EBP                            ; 1000c4f4
    PUSH EBX                            ; 1000c4f5
    PUSH EAX                            ; 1000c4f6
    PUSH ECX                            ; 1000c4f7
    CALL dword ptr [0x1024226c]         ; 1000c4f8 | PTR_LCMapStringW_1024226c
    TEST EAX,EAX                        ; 1000c4fe
    JZ 0x1000c4bb                       ; 1000c500
        ;   XREF to: 1000c4bb (CONDITIONAL_JUMP)  ; LAB_1000c4bb
    MOV EAX,dword ptr [ESP + 0x28]      ; 1000c502
    PUSH 0x0                            ; 1000c506
    PUSH 0x0                            ; 1000c508
    TEST EAX,EAX                        ; 1000c50a
    JNZ 0x1000c52e                      ; 1000c50c
        ;   XREF to: 1000c52e (CONDITIONAL_JUMP)  ; LAB_1000c52e
    MOV EAX,dword ptr [ESP + 0x34]      ; 1000c50e
    PUSH 0x0                            ; 1000c512
    PUSH 0x0                            ; 1000c514
    MOV EBP,dword ptr [0x10242230]      ; 1000c516 | PTR_WideCharToMultiByte_10242230
    PUSH EDI                            ; 1000c51c
    PUSH ESI                            ; 1000c51d
    PUSH 0x220                          ; 1000c51e
    PUSH EAX                            ; 1000c523
    CALL EBP                            ; 1000c524 | int WideCharToMultiByte(UINT CodePage, DWORD dwFlags, LPCWSTR lpWideCharStr, int cchWideChar, ...)
    MOV EDI,EAX                         ; 1000c526
    TEST EDI,EDI                        ; 1000c528
    JNZ 0x1000c552                      ; 1000c52a
        ;   XREF to: 1000c552 (CONDITIONAL_JUMP)  ; LAB_1000c552
    JMP 0x1000c4bb                      ; 1000c52c
        ;   XREF to: 1000c4bb (UNCONDITIONAL_JUMP)  ; LAB_1000c4bb
    MOV ECX,dword ptr [ESP + 0x34]      ; 1000c52e
        ;   Label: LAB_1000c52e
    PUSH EAX                            ; 1000c532
    MOV EAX,dword ptr [ESP + 0x30]      ; 1000c533
    MOV EBP,dword ptr [0x10242230]      ; 1000c537 | PTR_WideCharToMultiByte_10242230
    PUSH EAX                            ; 1000c53d
    PUSH EDI                            ; 1000c53e
    PUSH ESI                            ; 1000c53f
    PUSH 0x220                          ; 1000c540
    PUSH ECX                            ; 1000c545
    CALL EBP                            ; 1000c546 | int WideCharToMultiByte(UINT CodePage, DWORD dwFlags, LPCWSTR lpWideCharStr, int cchWideChar, ...)
    MOV EDI,EAX                         ; 1000c548
    TEST EDI,EDI                        ; 1000c54a
    JZ 0x1000c4bb                       ; 1000c54c
        ;   XREF to: 1000c4bb (CONDITIONAL_JUMP)  ; LAB_1000c4bb
    PUSH EBX                            ; 1000c552
        ;   Label: LAB_1000c552
    CALL crt_heap.c_free_FUN_10005b30   ; 1000c553
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000c558
    PUSH ESI                            ; 1000c55b
    CALL crt_heap.c_free_FUN_10005b30   ; 1000c55c
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000c561
    MOV EAX,EDI                         ; 1000c564
    POP EBP                             ; 1000c566
    POP EDI                             ; 1000c567
    POP ESI                             ; 1000c568
    POP EBX                             ; 1000c569
    RET                                 ; 1000c56a


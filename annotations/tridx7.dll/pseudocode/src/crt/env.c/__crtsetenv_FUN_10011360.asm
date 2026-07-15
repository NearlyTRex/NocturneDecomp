; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_env_c___crtsetenv_FUN_10011360(char *option,int primary)
;
; Parameters:
; char *           Stack[0x4]:4   option
; int              Stack[0x8]:4   primary
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   crt_env.c__build_ansi_environ_FUN_10010d30 at 10010d88
;
; Referenced Globals:
;   undefined4 DAT_10016d80
;   undefined4 DAT_10016d84
;   undefined4 DAT_10016d88
;   void* PTR_SetEnvironmentVariableA_10242198 = 00242794
;
; Called Functions:
;   crt_env.c__build_ansi_environ_FUN_10010d30
;   crt_env.c_copy_environ_FUN_10011610
;   crt_env.c_findenv_FUN_100115b0
;   crt_heap.c_free_FUN_10005b30
;   crt_heap.c_malloc_FUN_10008830
;   crt_heap.c_realloc_FUN_10011680
;   crt_string.c__mbschr_FUN_100116f0
;   SetEnvironmentVariableA
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 10011360
        ;   Label: crt_env.c___crtsetenv_FUN_10011360
    CMP dword ptr [ESP + 0x8],0x0       ; 10011363
    PUSH EBX                            ; 10011368
    PUSH ESI                            ; 10011369
    PUSH EDI                            ; 1001136a
    PUSH EBP                            ; 1001136b
    JZ 0x1001159d                       ; 1001136c
        ;   XREF to: 1001159d (CONDITIONAL_JUMP)  ; LAB_1001159d
    MOV EDX,dword ptr [ESP + 0x18]      ; 10011372
    PUSH 0x3d                           ; 10011376
    PUSH EDX                            ; 10011378
    CALL crt_string.c__mbschr_FUN_100116f0 ; 10011379
        ;   XREF to: 100116f0 (UNCONDITIONAL_CALL)  ; uchar * crt_string.c__mbschr_FUN_100116f0(uchar * str, uint c)
    ADD ESP,0x8                         ; 1001137e
    MOV EBP,EAX                         ; 10011381
    TEST EBP,EBP                        ; 10011383
    JZ 0x1001159d                       ; 10011385
        ;   XREF to: 1001159d (CONDITIONAL_JUMP)  ; LAB_1001159d
    CMP dword ptr [ESP + 0x18],EBP      ; 1001138b
    JZ 0x1001159d                       ; 1001138f
        ;   XREF to: 1001159d (CONDITIONAL_JUMP)  ; LAB_1001159d
    CMP byte ptr [EBP + 0x1],0x1        ; 10011395
    SBB EAX,EAX                         ; 10011399
    MOV ECX,dword ptr [0x10016d80]      ; 1001139b | DAT_10016d80
    NEG EAX                             ; 100113a1
    MOV dword ptr [ESP + 0x10],EAX      ; 100113a3
    CMP dword ptr [0x10016d84],ECX      ; 100113a7 | DAT_10016d84
    JNZ 0x100113bd                      ; 100113ad
        ;   XREF to: 100113bd (CONDITIONAL_JUMP)  ; LAB_100113bd
    PUSH ECX                            ; 100113af
    CALL crt_env.c_copy_environ_FUN_10011610 ; 100113b0
        ;   XREF to: 10011610 (UNCONDITIONAL_CALL)  ; char * * crt_env.c_copy_environ_FUN_10011610(char * * oldenviron)
    ADD ESP,0x4                         ; 100113b5
    MOV [0x10016d80],EAX                ; 100113b8 | DAT_10016d80
    CMP dword ptr [0x10016d80],0x0      ; 100113bd | DAT_10016d80
        ;   Label: LAB_100113bd
    JNZ 0x1001146d                      ; 100113c4
        ;   XREF to: 1001146d (CONDITIONAL_JUMP)  ; LAB_1001146d
    CMP dword ptr [ESP + 0x1c],0x0      ; 100113ca
    JZ 0x100113f4                       ; 100113cf
        ;   XREF to: 100113f4 (CONDITIONAL_JUMP)  ; LAB_100113f4
    CMP dword ptr [0x10016d88],0x0      ; 100113d1 | DAT_10016d88
    JZ 0x100113f4                       ; 100113d8
        ;   XREF to: 100113f4 (CONDITIONAL_JUMP)  ; LAB_100113f4
    CALL crt_env.c__build_ansi_environ_FUN_10010d30 ; 100113da
        ;   XREF to: 10010d30 (UNCONDITIONAL_CALL)  ; int crt_env.c__build_ansi_environ_FUN_10010d30()
    TEST EAX,EAX                        ; 100113df
    JZ 0x1001146d                       ; 100113e1
        ;   XREF to: 1001146d (CONDITIONAL_JUMP)  ; LAB_1001146d
    MOV EAX,0xffffffff                  ; 100113e7
    POP EBP                             ; 100113ec
    POP EDI                             ; 100113ed
    POP ESI                             ; 100113ee
    POP EBX                             ; 100113ef
    ADD ESP,0x4                         ; 100113f0
    RET                                 ; 100113f3
    CMP dword ptr [ESP + 0x10],0x0      ; 100113f4
        ;   Label: LAB_100113f4
    JZ 0x10011405                       ; 100113f9
        ;   XREF to: 10011405 (CONDITIONAL_JUMP)  ; LAB_10011405
    XOR EAX,EAX                         ; 100113fb
    POP EBP                             ; 100113fd
    POP EDI                             ; 100113fe
    POP ESI                             ; 100113ff
    POP EBX                             ; 10011400
    ADD ESP,0x4                         ; 10011401
    RET                                 ; 10011404
    CMP dword ptr [0x10016d80],0x0      ; 10011405 | DAT_10016d80
        ;   Label: LAB_10011405
    JNZ 0x10011439                      ; 1001140c
        ;   XREF to: 10011439 (CONDITIONAL_JUMP)  ; LAB_10011439
    PUSH 0x4                            ; 1001140e
    CALL crt_heap.c_malloc_FUN_10008830 ; 10011410
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_malloc_FUN_10008830(size_t size)
    ADD ESP,0x4                         ; 10011415
    MOV [0x10016d80],EAX                ; 10011418 | DAT_10016d80
    TEST EAX,EAX                        ; 1001141d
    JNZ 0x1001142e                      ; 1001141f
        ;   XREF to: 1001142e (CONDITIONAL_JUMP)  ; LAB_1001142e
    MOV EAX,0xffffffff                  ; 10011421
    POP EBP                             ; 10011426
    POP EDI                             ; 10011427
    POP ESI                             ; 10011428
    POP EBX                             ; 10011429
    ADD ESP,0x4                         ; 1001142a
    RET                                 ; 1001142d
    MOV EAX,[0x10016d80]                ; 1001142e | DAT_10016d80
        ;   Label: LAB_1001142e
    MOV dword ptr [EAX],0x0             ; 10011433
    CMP dword ptr [0x10016d88],0x0      ; 10011439 | DAT_10016d88
        ;   Label: LAB_10011439
    JNZ 0x1001146d                      ; 10011440
        ;   XREF to: 1001146d (CONDITIONAL_JUMP)  ; LAB_1001146d
    PUSH 0x4                            ; 10011442
    CALL crt_heap.c_malloc_FUN_10008830 ; 10011444
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_malloc_FUN_10008830(size_t size)
    ADD ESP,0x4                         ; 10011449
    MOV [0x10016d88],EAX                ; 1001144c | DAT_10016d88
    TEST EAX,EAX                        ; 10011451
    JNZ 0x10011462                      ; 10011453
        ;   XREF to: 10011462 (CONDITIONAL_JUMP)  ; LAB_10011462
    MOV EAX,0xffffffff                  ; 10011455
    POP EBP                             ; 1001145a
    POP EDI                             ; 1001145b
    POP ESI                             ; 1001145c
    POP EBX                             ; 1001145d
    ADD ESP,0x4                         ; 1001145e
    RET                                 ; 10011461
    MOV EAX,[0x10016d88]                ; 10011462 | DAT_10016d88
        ;   Label: LAB_10011462
    MOV dword ptr [EAX],0x0             ; 10011467
    MOV ESI,dword ptr [0x10016d80]      ; 1001146d | DAT_10016d80
        ;   Label: LAB_1001146d
    SUB EBP,dword ptr [ESP + 0x18]      ; 10011473
    MOV EDX,dword ptr [ESP + 0x18]      ; 10011477
    PUSH EBP                            ; 1001147b
    PUSH EDX                            ; 1001147c
    CALL crt_env.c_findenv_FUN_100115b0 ; 1001147d
        ;   XREF to: 100115b0 (UNCONDITIONAL_CALL)  ; int crt_env.c_findenv_FUN_100115b0(char * name, int len)
    ADD ESP,0x8                         ; 10011482
    MOV EDI,EAX                         ; 10011485
    TEST EDI,EDI                        ; 10011487
    JL 0x100114d5                       ; 10011489
        ;   XREF to: 100114d5 (CONDITIONAL_JUMP)  ; LAB_100114d5
    CMP dword ptr [ESI],0x0             ; 1001148b
    JZ 0x100114d5                       ; 1001148e
        ;   XREF to: 100114d5 (CONDITIONAL_JUMP)  ; LAB_100114d5
    CMP dword ptr [ESP + 0x10],0x0      ; 10011490
    JZ 0x100114cc                       ; 10011495
        ;   XREF to: 100114cc (CONDITIONAL_JUMP)  ; LAB_100114cc
    LEA EBX,[ESI + EDI*0x4]             ; 10011497
    MOV EAX,dword ptr [EBX]             ; 1001149a
    PUSH EAX                            ; 1001149c
    CALL crt_heap.c_free_FUN_10005b30   ; 1001149d
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 100114a2
    CMP dword ptr [EBX],0x0             ; 100114a5
    JZ 0x100114b9                       ; 100114a8
        ;   XREF to: 100114b9 (CONDITIONAL_JUMP)  ; LAB_100114b9
    MOV EAX,dword ptr [EBX + 0x4]       ; 100114aa
        ;   Label: LAB_100114aa
    ADD EBX,0x4                         ; 100114ad
    INC EDI                             ; 100114b0
    MOV dword ptr [EBX + -0x4],EAX      ; 100114b1
    CMP dword ptr [EBX],0x0             ; 100114b4
    JNZ 0x100114aa                      ; 100114b7
        ;   XREF to: 100114aa (CONDITIONAL_JUMP)  ; LAB_100114aa
    SHL EDI,0x2                         ; 100114b9
        ;   Label: LAB_100114b9
    PUSH EDI                            ; 100114bc
    PUSH ESI                            ; 100114bd
    CALL crt_heap.c_realloc_FUN_10011680 ; 100114be
        ;   XREF to: 10011680 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_realloc_FUN_10011680(void * ptr, size_t size)
    ADD ESP,0x8                         ; 100114c3
    TEST EAX,EAX                        ; 100114c6
    JZ 0x1001151d                       ; 100114c8
        ;   XREF to: 1001151d (CONDITIONAL_JUMP)  ; LAB_1001151d
    JMP 0x10011518                      ; 100114ca
        ;   XREF to: 10011518 (UNCONDITIONAL_JUMP)  ; LAB_10011518
    MOV EDX,dword ptr [ESP + 0x18]      ; 100114cc
        ;   Label: LAB_100114cc
    MOV dword ptr [ESI + EDI*0x4],EDX   ; 100114d0
    JMP 0x1001151d                      ; 100114d3
        ;   XREF to: 1001151d (UNCONDITIONAL_JUMP)  ; LAB_1001151d
    CMP dword ptr [ESP + 0x10],0x0      ; 100114d5
        ;   Label: LAB_100114d5
    JNZ 0x10011593                      ; 100114da
        ;   XREF to: 10011593 (CONDITIONAL_JUMP)  ; LAB_10011593
    TEST EDI,EDI                        ; 100114e0
    JGE 0x100114e6                      ; 100114e2
        ;   XREF to: 100114e6 (CONDITIONAL_JUMP)  ; LAB_100114e6
    NEG EDI                             ; 100114e4
    LEA EAX,[EDI*0x4 + 0x8]             ; 100114e6
        ;   Label: LAB_100114e6
    PUSH EAX                            ; 100114ed
    PUSH ESI                            ; 100114ee
    CALL crt_heap.c_realloc_FUN_10011680 ; 100114ef
        ;   XREF to: 10011680 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_realloc_FUN_10011680(void * ptr, size_t size)
    ADD ESP,0x8                         ; 100114f4
    TEST EAX,EAX                        ; 100114f7
    JNZ 0x10011508                      ; 100114f9
        ;   XREF to: 10011508 (CONDITIONAL_JUMP)  ; LAB_10011508
    MOV EAX,0xffffffff                  ; 100114fb
    POP EBP                             ; 10011500
    POP EDI                             ; 10011501
    POP ESI                             ; 10011502
    POP EBX                             ; 10011503
    ADD ESP,0x4                         ; 10011504
    RET                                 ; 10011507
    LEA ECX,[EAX + EDI*0x4]             ; 10011508
        ;   Label: LAB_10011508
    MOV EDX,dword ptr [ESP + 0x18]      ; 1001150b
    MOV dword ptr [ECX],EDX             ; 1001150f
    MOV dword ptr [ECX + 0x4],0x0       ; 10011511
    MOV [0x10016d80],EAX                ; 10011518 | DAT_10016d80
        ;   Label: LAB_10011518
    CMP dword ptr [ESP + 0x1c],0x0      ; 1001151d
        ;   Label: LAB_1001151d
    JZ 0x10011589                       ; 10011522
        ;   XREF to: 10011589 (CONDITIONAL_JUMP)  ; LAB_10011589
    MOV EDI,dword ptr [ESP + 0x18]      ; 10011524
    MOV ECX,0xffffffff                  ; 10011528
    SUB EAX,EAX                         ; 1001152d
    SCASB.REPNE ES:EDI                  ; 1001152f
    NOT ECX                             ; 10011531
    INC ECX                             ; 10011533
    PUSH ECX                            ; 10011534
    CALL crt_heap.c_malloc_FUN_10008830 ; 10011535
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_malloc_FUN_10008830(size_t size)
    ADD ESP,0x4                         ; 1001153a
    MOV EBX,EAX                         ; 1001153d
    TEST EBX,EBX                        ; 1001153f
    JZ 0x10011589                       ; 10011541
        ;   XREF to: 10011589 (CONDITIONAL_JUMP)  ; LAB_10011589
    MOV EDI,dword ptr [ESP + 0x18]      ; 10011543
    MOV ECX,0xffffffff                  ; 10011547
    SUB EAX,EAX                         ; 1001154c
    SCASB.REPNE ES:EDI                  ; 1001154e
    NOT ECX                             ; 10011550
    SUB EDI,ECX                         ; 10011552
    MOV EAX,ECX                         ; 10011554
    SHR ECX,0x2                         ; 10011556
    MOV ESI,EDI                         ; 10011559
    MOV EDI,EBX                         ; 1001155b
    MOVSD.REP ES:EDI,ESI                ; 1001155d
    MOV ECX,EAX                         ; 1001155f
    AND ECX,0x3                         ; 10011561
    MOVSB.REP ES:EDI,ESI                ; 10011564
    CMP dword ptr [ESP + 0x10],0x1      ; 10011566
    SBB ECX,ECX                         ; 1001156b
    LEA EAX,[EBX + EBP*0x1]             ; 1001156d
    MOV byte ptr [EAX],0x0              ; 10011570
    LEA EAX,[EAX + 0x1]                 ; 10011573
    AND ECX,EAX                         ; 10011576
    PUSH ECX                            ; 10011578
    PUSH EBX                            ; 10011579
    CALL dword ptr [0x10242198]         ; 1001157a | PTR_SetEnvironmentVariableA_10242198
    PUSH EBX                            ; 10011580
    CALL crt_heap.c_free_FUN_10005b30   ; 10011581
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 10011586
    XOR EAX,EAX                         ; 10011589
        ;   Label: LAB_10011589
    POP EBP                             ; 1001158b
    POP EDI                             ; 1001158c
    POP ESI                             ; 1001158d
    POP EBX                             ; 1001158e
    ADD ESP,0x4                         ; 1001158f
    RET                                 ; 10011592
    XOR EAX,EAX                         ; 10011593
        ;   Label: LAB_10011593
    POP EBP                             ; 10011595
    POP EDI                             ; 10011596
    POP ESI                             ; 10011597
    POP EBX                             ; 10011598
    ADD ESP,0x4                         ; 10011599
    RET                                 ; 1001159c
    MOV EAX,0xffffffff                  ; 1001159d
        ;   Label: LAB_1001159d
    POP EBP                             ; 100115a2
    POP EDI                             ; 100115a3
    POP ESI                             ; 100115a4
    POP EBX                             ; 100115a5
    ADD ESP,0x4                         ; 100115a6
    RET                                 ; 100115a9


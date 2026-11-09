; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_simbox_cpp_FUN_005473c0(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d1592
;   undefined4 DAT_005d1596
;   undefined4 DAT_005d159e
;   undefined4 DAT_005d15a6
;   undefined4 DAT_005d15ae
;   undefined4 DAT_005fba60
;   undefined4 DAT_00600284
;
; Called Functions:
;   core_box.cpp_CBox_process_FUN_0041b410
;   core_dirmat.cpp_FUN_0045b800
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   crt_stdlib.c_rand_FUN_005a35cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005473c0
        ;   Label: core_simbox.cpp_FUN_005473c0
    PUSH ESI                            ; 005473c1
    PUSH EDI                            ; 005473c2
    SUB ESP,0x1c                        ; 005473c3
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005473c6
    CMP dword ptr [EBX + 0x2d4],0x1     ; 005473ca
    JNZ 0x00547490                      ; 005473d1
        ;   XREF to: 00547490 (CONDITIONAL_JUMP)  ; LAB_00547490
    CMP dword ptr [EBX + 0x5ac],0x0     ; 005473d7
    JNZ 0x00547490                      ; 005473de
        ;   XREF to: 00547490 (CONDITIONAL_JUMP)  ; LAB_00547490
    LEA EAX,[EBX + 0x2dc]               ; 005473e4
    PUSH EAX                            ; 005473ea
    MOV ESI,dword ptr [0x005fba60]      ; 005473eb | DAT_005fba60
    PUSH ESI                            ; 005473f1
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 005473f2
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005473f7
    TEST EAX,EAX                        ; 005473fa
    JZ 0x00547490                       ; 005473fc
        ;   XREF to: 00547490 (CONDITIONAL_JUMP)  ; LAB_00547490
    LEA EAX,[EBX + 0x3a4]               ; 00547402
    LEA ESI,[EBX + 0x340]               ; 00547408
    MOV dword ptr [EBX + 0x5ac],0x1     ; 0054740e
    CMP EAX,ESI                         ; 00547418
    JZ 0x0054742c                       ; 0054741a
        ;   XREF to: 0054742c (CONDITIONAL_JUMP)  ; LAB_0054742c
    MOV EDX,dword ptr [ESI]             ; 0054741c
    MOV dword ptr [EAX],EDX             ; 0054741e
    MOV EDX,dword ptr [ESI + 0x4]       ; 00547420
    MOV dword ptr [EAX + 0x4],EDX       ; 00547423
    MOV EDX,dword ptr [ESI + 0x8]       ; 00547426
    MOV dword ptr [EAX + 0x8],EDX       ; 00547429
    LEA EAX,[EBX + 0x3c8]               ; 0054742c
        ;   Label: LAB_0054742c
    LEA ESI,[EBX + 0x34c]               ; 00547432
    CMP EAX,ESI                         ; 00547438
    JZ 0x0054744c                       ; 0054743a
        ;   XREF to: 0054744c (CONDITIONAL_JUMP)  ; LAB_0054744c
    MOV EDX,dword ptr [ESI]             ; 0054743c
    MOV dword ptr [EAX],EDX             ; 0054743e
    MOV EDX,dword ptr [ESI + 0x4]       ; 00547440
    MOV dword ptr [EAX + 0x4],EDX       ; 00547443
    MOV EDX,dword ptr [ESI + 0x8]       ; 00547446
    MOV dword ptr [EAX + 0x8],EDX       ; 00547449
    LEA EAX,[EBX + 0x3a4]               ; 0054744c
        ;   Label: LAB_0054744c
    PUSH EAX                            ; 00547452
    LEA EAX,[EBX + 0x370]               ; 00547453
    PUSH EAX                            ; 00547459
    LEA ESI,[ESP + 0x14]                ; 0054745a
    LEA EDI,[ESP + 0x8]                 ; 0054745e
    CALL core_dirmat.cpp_FUN_0045b800   ; 00547462
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    LEA ESI,[ESP + 0x14]                ; 00547467
    ADD ESP,0x8                         ; 0054746b
    MOVSD ES:EDI,ESI                    ; 0054746e
    MOVSD ES:EDI,ESI                    ; 0054746f
    MOVSD ES:EDI,ESI                    ; 00547470
    MOV EAX,ESP                         ; 00547471
    LEA ESI,[EBX + 0x398]               ; 00547473
    CMP ESI,EAX                         ; 00547479
    JZ 0x00547490                       ; 0054747b
        ;   XREF to: 00547490 (CONDITIONAL_JUMP)  ; LAB_00547490
    MOV EAX,dword ptr [ESP]             ; 0054747d
    MOV dword ptr [ESI],EAX             ; 00547480
    MOV EAX,dword ptr [ESP + 0x4]       ; 00547482
    MOV dword ptr [ESI + 0x4],EAX       ; 00547486
    MOV EAX,dword ptr [ESP + 0x8]       ; 00547489
    MOV dword ptr [ESI + 0x8],EAX       ; 0054748d
    CMP dword ptr [EBX + 0x2d4],0x0     ; 00547490
        ;   Label: LAB_00547490
    JNZ 0x0054753f                      ; 00547497
        ;   XREF to: 0054753f (CONDITIONAL_JUMP)  ; LAB_0054753f
    PUSH 0x13                           ; 0054749d
    MOV EAX,[0x00600284]                ; 0054749f | DAT_00600284
    PUSH EAX                            ; 005474a4
    MOV ESI,dword ptr [EAX]             ; 005474a5
    CALL dword ptr [ESI]                ; 005474a7
    ADD ESP,0x8                         ; 005474a9
    TEST EAX,EAX                        ; 005474ac
    JZ 0x0054753f                       ; 005474ae
        ;   XREF to: 0054753f (CONDITIONAL_JUMP)  ; LAB_0054753f
    LEA ESI,[EBX + 0x20]                ; 005474b4
    LEA EAX,[EBX + 0x5b4]               ; 005474b7
    MOV EDX,dword ptr [EAX]             ; 005474bd
    MOV dword ptr [ESI],EDX             ; 005474bf
    MOV EDX,dword ptr [EAX + 0x4]       ; 005474c1
    MOV dword ptr [ESI + 0x4],EDX       ; 005474c4
    MOV EDX,dword ptr [EAX + 0x8]       ; 005474c7
    MOV dword ptr [ESI + 0x8],EDX       ; 005474ca
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 005474cd
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
    MOV dword ptr [ESP + 0x18],EAX      ; 005474d2
    FILD dword ptr [ESP + 0x18]         ; 005474d6
    FMUL float ptr [0x005d1592]         ; 005474da | DAT_005d1592
    FADD double ptr [0x005d1596]        ; 005474e0 | DAT_005d1596
    FMUL double ptr [0x005d159e]        ; 005474e6 | DAT_005d159e
    FSTP float ptr [EBX + 0x30]         ; 005474ec
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 005474ef
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
    MOV dword ptr [ESP + 0x18],EAX      ; 005474f4
    FILD dword ptr [ESP + 0x18]         ; 005474f8
    FMUL float ptr [0x005d1592]         ; 005474fc | DAT_005d1592
    FMUL float ptr [0x005d15a6]         ; 00547502 | DAT_005d15a6
    FMUL double ptr [0x005d15ae]        ; 00547508 | DAT_005d15ae
    FSTP float ptr [EBX + 0x38]         ; 0054750e
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 00547511
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
    MOV dword ptr [ESP + 0x18],EAX      ; 00547516
    FILD dword ptr [ESP + 0x18]         ; 0054751a
    FMUL float ptr [0x005d1592]         ; 0054751e | DAT_005d1592
    FMUL float ptr [0x005d15a6]         ; 00547524 | DAT_005d15a6
    FMUL double ptr [0x005d15ae]        ; 0054752a | DAT_005d15ae
    PUSH EBX                            ; 00547530
    MOV EAX,dword ptr [EBX + 0x154]     ; 00547531
    FSTP float ptr [EBX + 0x34]         ; 00547537
    CALL dword ptr [EAX]                ; 0054753a
    ADD ESP,0x4                         ; 0054753c
    CMP dword ptr [EBX + 0x5ac],0x0     ; 0054753f
        ;   Label: LAB_0054753f
    JNZ 0x0054754f                      ; 00547546
        ;   XREF to: 0054754f (CONDITIONAL_JUMP)  ; LAB_0054754f
    ADD ESP,0x1c                        ; 00547548
        ;   Label: LAB_00547548
    POP EDI                             ; 0054754b
    POP ESI                             ; 0054754c
    POP EBX                             ; 0054754d
    RET                                 ; 0054754e
    LEA ESI,[EBX + 0x358]               ; 0054754f
        ;   Label: LAB_0054754f
    PUSH dword ptr [ESP + 0x30]         ; 00547555
    PUSH ESI                            ; 00547559
    CALL core_box.cpp_CBox_process_FUN_0041b410 ; 0054755a
        ;   XREF to: 0041b410 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_process_FUN_0041b410(CBox * this_ptr, float delta_time)
    LEA EAX,[EBX + 0x20]                ; 0054755f
    MOV EDX,dword ptr [ESI]             ; 00547562
    MOV dword ptr [EAX],EDX             ; 00547564
    MOV EDX,dword ptr [ESI + 0x4]       ; 00547566
    MOV dword ptr [EAX + 0x4],EDX       ; 00547569
    MOV EDX,dword ptr [ESI + 0x8]       ; 0054756c
    MOV dword ptr [EAX + 0x8],EDX       ; 0054756f
    LEA EAX,[EBX + 0x30]                ; 00547572
    ADD EBX,0x364                       ; 00547575
    ADD ESP,0x8                         ; 0054757b
    CMP EAX,EBX                         ; 0054757e
    JZ 0x00547548                       ; 00547580
        ;   XREF to: 00547548 (CONDITIONAL_JUMP)  ; LAB_00547548
    MOV EDX,dword ptr [EBX]             ; 00547582
    MOV dword ptr [EAX],EDX             ; 00547584
    MOV EDX,dword ptr [EBX + 0x4]       ; 00547586
    MOV dword ptr [EAX + 0x4],EDX       ; 00547589
    MOV EDX,dword ptr [EBX + 0x8]       ; 0054758c
    MOV dword ptr [EAX + 0x8],EDX       ; 0054758f
    ADD ESP,0x1c                        ; 00547592
    POP EDI                             ; 00547595
    POP ESI                             ; 00547596
    POP EBX                             ; 00547597
    RET                                 ; 00547598


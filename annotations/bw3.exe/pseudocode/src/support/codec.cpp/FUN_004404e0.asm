; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_codec_cpp_FUN_004404e0(uint *param_1,byte param_2)
;
;
; XREF[1]:
;   support_codec.cpp_FUN_004406e0 at 0044072a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004404e0
        ;   Label: support_codec.cpp_FUN_004404e0
    XOR EDX,EDX                         ; 004404e4
    MOV DL,byte ptr [ESP + 0x8]         ; 004404e6
    MOV ECX,dword ptr [EAX]             ; 004404ea
    SHL EDX,0x18                        ; 004404ec
    XOR ECX,EDX                         ; 004404ef
    MOV dword ptr [EAX],ECX             ; 004404f1
    TEST byte ptr [EAX + 0x3],0x80      ; 004404f3
    JZ 0x00440587                       ; 004404f7
        ;   XREF to: 00440587 (CONDITIONAL_JUMP)  ; LAB_00440587
    LEA EDX,[ECX + ECX*0x1]             ; 004404fd
    XOR EDX,0x4c11db7                   ; 00440500
    MOV dword ptr [EAX],EDX             ; 00440506
        ;   Label: LAB_00440506
    TEST byte ptr [EAX + 0x3],0x80      ; 00440508
    JZ 0x0044058f                       ; 0044050c
        ;   XREF to: 0044058f (CONDITIONAL_JUMP)  ; LAB_0044058f
    MOV EDX,dword ptr [EAX]             ; 00440512
    ADD EDX,EDX                         ; 00440514
    XOR EDX,0x4c11db7                   ; 00440516
    MOV dword ptr [EAX],EDX             ; 0044051c
        ;   Label: LAB_0044051c
    TEST byte ptr [EAX + 0x3],0x80      ; 0044051e
    JZ 0x00440595                       ; 00440522
        ;   XREF to: 00440595 (CONDITIONAL_JUMP)  ; LAB_00440595
    ADD EDX,EDX                         ; 00440528
    XOR EDX,0x4c11db7                   ; 0044052a
    MOV dword ptr [EAX],EDX             ; 00440530
        ;   Label: LAB_00440530
    TEST byte ptr [EAX + 0x3],0x80      ; 00440532
    JZ 0x00440599                       ; 00440536
        ;   XREF to: 00440599 (CONDITIONAL_JUMP)  ; LAB_00440599
    ADD EDX,EDX                         ; 00440538
    XOR EDX,0x4c11db7                   ; 0044053a
    MOV dword ptr [EAX],EDX             ; 00440540
        ;   Label: LAB_00440540
    TEST byte ptr [EAX + 0x3],0x80      ; 00440542
    JZ 0x0044059d                       ; 00440546
        ;   XREF to: 0044059d (CONDITIONAL_JUMP)  ; LAB_0044059d
    ADD EDX,EDX                         ; 00440548
    XOR EDX,0x4c11db7                   ; 0044054a
    MOV dword ptr [EAX],EDX             ; 00440550
        ;   Label: LAB_00440550
    TEST byte ptr [EAX + 0x3],0x80      ; 00440552
    JZ 0x004405a1                       ; 00440556
        ;   XREF to: 004405a1 (CONDITIONAL_JUMP)  ; LAB_004405a1
    ADD EDX,EDX                         ; 00440558
    XOR EDX,0x4c11db7                   ; 0044055a
    MOV dword ptr [EAX],EDX             ; 00440560
        ;   Label: LAB_00440560
    TEST byte ptr [EAX + 0x3],0x80      ; 00440562
    JZ 0x004405a5                       ; 00440566
        ;   XREF to: 004405a5 (CONDITIONAL_JUMP)  ; LAB_004405a5
    MOV EDX,dword ptr [EAX]             ; 00440568
    ADD EDX,EDX                         ; 0044056a
    XOR EDX,0x4c11db7                   ; 0044056c
    MOV dword ptr [EAX],EDX             ; 00440572
        ;   Label: LAB_00440572
    TEST byte ptr [EAX + 0x3],0x80      ; 00440574
    JZ 0x004405ab                       ; 00440578
        ;   XREF to: 004405ab (CONDITIONAL_JUMP)  ; LAB_004405ab
    MOV EDX,dword ptr [EAX]             ; 0044057a
    ADD EDX,EDX                         ; 0044057c
    XOR EDX,0x4c11db7                   ; 0044057e
    MOV dword ptr [EAX],EDX             ; 00440584
    RET                                 ; 00440586
    LEA EDX,[ECX + ECX*0x1]             ; 00440587
        ;   Label: LAB_00440587
    JMP 0x00440506                      ; 0044058a
        ;   XREF to: 00440506 (UNCONDITIONAL_JUMP)  ; LAB_00440506
    MOV EDX,dword ptr [EAX]             ; 0044058f
        ;   Label: LAB_0044058f
    ADD EDX,EDX                         ; 00440591
    JMP 0x0044051c                      ; 00440593
        ;   XREF to: 0044051c (UNCONDITIONAL_JUMP)  ; LAB_0044051c
    ADD EDX,EDX                         ; 00440595
        ;   Label: LAB_00440595
    JMP 0x00440530                      ; 00440597
        ;   XREF to: 00440530 (UNCONDITIONAL_JUMP)  ; LAB_00440530
    ADD EDX,EDX                         ; 00440599
        ;   Label: LAB_00440599
    JMP 0x00440540                      ; 0044059b
        ;   XREF to: 00440540 (UNCONDITIONAL_JUMP)  ; LAB_00440540
    ADD EDX,EDX                         ; 0044059d
        ;   Label: LAB_0044059d
    JMP 0x00440550                      ; 0044059f
        ;   XREF to: 00440550 (UNCONDITIONAL_JUMP)  ; LAB_00440550
    ADD EDX,EDX                         ; 004405a1
        ;   Label: LAB_004405a1
    JMP 0x00440560                      ; 004405a3
        ;   XREF to: 00440560 (UNCONDITIONAL_JUMP)  ; LAB_00440560
    MOV EDX,dword ptr [EAX]             ; 004405a5
        ;   Label: LAB_004405a5
    ADD EDX,EDX                         ; 004405a7
    JMP 0x00440572                      ; 004405a9
        ;   XREF to: 00440572 (UNCONDITIONAL_JUMP)  ; LAB_00440572
    MOV EDX,dword ptr [EAX]             ; 004405ab
        ;   Label: LAB_004405ab
    ADD EDX,EDX                         ; 004405ad
    MOV dword ptr [EAX],EDX             ; 004405af
    RET                                 ; 004405b1


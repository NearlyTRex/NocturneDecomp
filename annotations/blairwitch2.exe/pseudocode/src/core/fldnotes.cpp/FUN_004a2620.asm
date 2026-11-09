; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004a2620(int param_1,char *param_2)
;
;
; XREF[1]:
;   core_fldnotes.cpp_FUN_004a2380 at 004a23a3
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2620
        ;   Label: core_fldnotes.cpp_FUN_004a2620
    PUSH ESI                            ; 004a2621
    PUSH EDI                            ; 004a2622
    MOV EDI,dword ptr [ESP + 0x10]      ; 004a2623
    MOV EDX,EDI                         ; 004a2627
    MOV BL,byte ptr [EDI + 0x18]        ; 004a2629
    XOR EAX,EAX                         ; 004a262c
    TEST BL,BL                          ; 004a262e
    JZ 0x004a2641                       ; 004a2630
        ;   XREF to: 004a2641 (CONDITIONAL_JUMP)  ; LAB_004a2641
    INC EAX                             ; 004a2632
        ;   Label: LAB_004a2632
    ADD EDX,0x20                        ; 004a2633
    CMP EAX,0x3                         ; 004a2636
    JGE 0x004a2641                      ; 004a2639
        ;   XREF to: 004a2641 (CONDITIONAL_JUMP)  ; LAB_004a2641
    CMP byte ptr [EDX + 0x18],0x0       ; 004a263b
    JNZ 0x004a2632                      ; 004a263f
        ;   XREF to: 004a2632 (CONDITIONAL_JUMP)  ; LAB_004a2632
    CMP EAX,0x3                         ; 004a2641
        ;   Label: LAB_004a2641
    JGE 0x004a2670                      ; 004a2644
        ;   XREF to: 004a2670 (CONDITIONAL_JUMP)  ; LAB_004a2670
    SHL EAX,0x5                         ; 004a2646
        ;   Label: LAB_004a2646
    ADD EDI,0x18                        ; 004a2649
    MOV ESI,dword ptr [ESP + 0x14]      ; 004a264c
    ADD EDI,EAX                         ; 004a2650
    PUSH EDI                            ; 004a2652
    MOV AL,byte ptr [ESI]               ; 004a2653
        ;   Label: LAB_004a2653
    MOV byte ptr [EDI],AL               ; 004a2655
    CMP AL,0x0                          ; 004a2657
    JZ 0x004a266b                       ; 004a2659
        ;   XREF to: 004a266b (CONDITIONAL_JUMP)  ; LAB_004a266b
    MOV AL,byte ptr [ESI + 0x1]         ; 004a265b
    ADD ESI,0x2                         ; 004a265e
    MOV byte ptr [EDI + 0x1],AL         ; 004a2661
    ADD EDI,0x2                         ; 004a2664
    CMP AL,0x0                          ; 004a2667
    JNZ 0x004a2653                      ; 004a2669
        ;   XREF to: 004a2653 (CONDITIONAL_JUMP)  ; LAB_004a2653
    POP EDI                             ; 004a266b
        ;   Label: LAB_004a266b
    POP EDI                             ; 004a266c
    POP ESI                             ; 004a266d
    POP EBX                             ; 004a266e
    RET                                 ; 004a266f
    PUSH 0x60                           ; 004a2670
        ;   Label: LAB_004a2670
    PUSH 0x0                            ; 004a2672
    LEA EAX,[EDI + 0x18]                ; 004a2674
    PUSH EAX                            ; 004a2677
    CALL crt_memory.c_memset_FUN_005b77c0 ; 004a2678
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004a267d
    XOR EAX,EAX                         ; 004a2680
    JMP 0x004a2646                      ; 004a2682
        ;   XREF to: 004a2646 (UNCONDITIONAL_JUMP)  ; LAB_004a2646


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005af71c(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005acf30 at 005ad090
;
; Called Functions:
;   crt_unknown.c_FUN_005af77e
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005af71c
        ;   Label: crt_unknown.c_FUN_005af71c
    PUSH ESI                            ; 005af71d
    PUSH EDI                            ; 005af71e
    PUSH ECX                            ; 005af71f
    PUSH EBX                            ; 005af720
    PUSH EDX                            ; 005af721
    MOV ESI,EAX                         ; 005af722
    SUB EDX,EDX                         ; 005af724
    SUB ECX,ECX                         ; 005af726
    SUB EBP,EBP                         ; 005af728
    SUB EAX,EAX                         ; 005af72a
    MOV AL,byte ptr [ESI]               ; 005af72c
        ;   Label: LAB_005af72c
    CMP AL,0x0                          ; 005af72e
    JZ 0x005af761                       ; 005af730
        ;   XREF to: 005af761 (CONDITIONAL_JUMP)  ; LAB_005af761
    MOV EDI,EDX                         ; 005af732
    MOV EBX,ECX                         ; 005af734
    MOV EAX,EBP                         ; 005af736
    ADD EBP,EBP                         ; 005af738
    ADC ECX,ECX                         ; 005af73a
    ADC EDX,EDX                         ; 005af73c
    ADD EBP,EBP                         ; 005af73e
    ADC ECX,ECX                         ; 005af740
    ADC EDX,EDX                         ; 005af742
    ADD EBP,EAX                         ; 005af744
    ADC ECX,EBX                         ; 005af746
    ADC EDX,EDI                         ; 005af748
    ADD EBP,EBP                         ; 005af74a
    ADC ECX,ECX                         ; 005af74c
    ADC EDX,EDX                         ; 005af74e
    SUB EAX,EAX                         ; 005af750
    MOV AL,byte ptr [ESI]               ; 005af752
    AND AL,0xf                          ; 005af754
    ADD EBP,EAX                         ; 005af756
    ADC ECX,0x0                         ; 005af758
    ADC EDX,0x0                         ; 005af75b
    INC ESI                             ; 005af75e
    JMP 0x005af72c                      ; 005af75f
        ;   XREF to: 005af72c (UNCONDITIONAL_JUMP)  ; LAB_005af72c
    MOV EAX,ECX                         ; 005af761
        ;   Label: LAB_005af761
    MOV EDI,0x405e                      ; 005af763
    CALL crt_unknown.c_FUN_005af77e     ; 005af768
        ;   XREF to: 005af77e (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005af77e()
    POP EBP                             ; 005af76d
    MOV dword ptr [EBP + 0x4],EDX       ; 005af76e
    MOV dword ptr [EBP],EAX             ; 005af771
    MOV word ptr [EBP + 0x8],SI         ; 005af774
    POP EBX                             ; 005af778
    POP ECX                             ; 005af779
    POP EDI                             ; 005af77a
    POP ESI                             ; 005af77b
    POP EBP                             ; 005af77c
    RET                                 ; 005af77d


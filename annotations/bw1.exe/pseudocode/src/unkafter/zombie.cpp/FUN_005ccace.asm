; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_zombie_cpp_FUN_005ccace(void)
;
;
; XREF[1]:
;   unkafter_zombie.cpp_FUN_005cca6c at 005ccab8
;
; *****************************************************************************

section .text

    SUB ESI,ESI                         ; 005ccace
        ;   Label: unkafter_zombie.cpp_FUN_005ccace
    OR ESI,EAX                          ; 005ccad0
    OR ESI,EDX                          ; 005ccad2
    OR ESI,EBP                          ; 005ccad4
    JZ 0x005ccb0e                       ; 005ccad6
        ;   XREF to: 005ccb0e (CONDITIONAL_JUMP)  ; LAB_005ccb0e
    OR EDX,EDX                          ; 005ccad8
    JNZ 0x005ccae5                      ; 005ccada
        ;   XREF to: 005ccae5 (CONDITIONAL_JUMP)  ; LAB_005ccae5
    MOV EDX,EAX                         ; 005ccadc
    MOV EAX,EBP                         ; 005ccade
    SUB EBP,EBP                         ; 005ccae0
    SUB EDI,0x20                        ; 005ccae2
    OR EDX,EDX                          ; 005ccae5
        ;   Label: LAB_005ccae5
    JNZ 0x005ccaf2                      ; 005ccae7
        ;   XREF to: 005ccaf2 (CONDITIONAL_JUMP)  ; LAB_005ccaf2
    MOV EDX,EAX                         ; 005ccae9
    MOV EAX,EBP                         ; 005ccaeb
    SUB EBP,EBP                         ; 005ccaed
    SUB EDI,0x20                        ; 005ccaef
    OR EDX,EDX                          ; 005ccaf2
        ;   Label: LAB_005ccaf2
    JS 0x005ccaff                       ; 005ccaf4
        ;   XREF to: 005ccaff (CONDITIONAL_JUMP)  ; LAB_005ccaff
    DEC EDI                             ; 005ccaf6
    ADD EBP,EBP                         ; 005ccaf7
    ADC EAX,EAX                         ; 005ccaf9
    ADC EDX,EDX                         ; 005ccafb
    JMP 0x005ccaf2                      ; 005ccafd
        ;   XREF to: 005ccaf2 (UNCONDITIONAL_JUMP)  ; LAB_005ccaf2
    ADD EBP,EBP                         ; 005ccaff
        ;   Label: LAB_005ccaff
    ADC EAX,0x0                         ; 005ccb01
    ADC EDX,0x0                         ; 005ccb04
    JNC 0x005ccb0c                      ; 005ccb07
        ;   XREF to: 005ccb0c (CONDITIONAL_JUMP)  ; LAB_005ccb0c
    RCR EDX,0x1                         ; 005ccb09
    INC EDI                             ; 005ccb0b
    MOV ESI,EDI                         ; 005ccb0c
        ;   Label: LAB_005ccb0c
    RET                                 ; 005ccb0e
        ;   Label: LAB_005ccb0e


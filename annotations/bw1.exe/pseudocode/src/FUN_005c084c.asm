; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005c084c(void)
;
;
; XREF[38]:
;   FUN_0040cc00 at 0040cc4b
;   FUN_0040cc60 at 0040cc95
;   FUN_0040cd00 at 0040cd3d
;   FUN_0040fcf0 at 0040fec2
;   FUN_00412170 at 00412190
;   FUN_00413c40 at 00413c60
;   FUN_00422f90 at 0042306a
;   FUN_004248e0 at 00424903
;   FUN_0042b580 at 0042b5a0
;   FUN_0042e580 at 0042e6c4
;   ... and 28 more
;
; Called Functions:
;   FUN_005c0840
;
; *****************************************************************************

section .text

    CALL FUN_005c0840                   ; 005c084c
        ;   XREF to: 005c0840 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0840()
        ;   Label: FUN_005c084c
    TEST EAX,EAX                        ; 005c0851
    JNZ 0x005c0856                      ; 005c0853
        ;   XREF to: 005c0856 (CONDITIONAL_JUMP)  ; LAB_005c0856
    RET                                 ; 005c0855
    IMUL EDX,dword ptr [EAX],0x41c64e6d ; 005c0856
        ;   Label: LAB_005c0856
    ADD EDX,0x3039                      ; 005c085c
    MOV dword ptr [EAX],EDX             ; 005c0862
    MOV EAX,EDX                         ; 005c0864
    SHR EAX,0x10                        ; 005c0866
    AND EAX,0x7fff                      ; 005c0869
    RET                                 ; 005c086e


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c2750(char *param_1,int param_2)
;
;
; XREF[1]:
;   crt_time.c__strftime_FUN_005c2784 at 005c297b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2750
        ;   Label: crt_unknown.c_FUN_005c2750
    PUSH ESI                            ; 005c2751
    MOV ESI,dword ptr [ESP + 0xc]       ; 005c2752
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c2756
    MOV ECX,0xa                         ; 005c275a
    MOV EDX,EBX                         ; 005c275f
    MOV EAX,EBX                         ; 005c2761
    SAR EDX,0x1f                        ; 005c2763
    IDIV ECX                            ; 005c2766
    MOV EDX,EBX                         ; 005c2768
    ADD EAX,0x30                        ; 005c276a
    SAR EDX,0x1f                        ; 005c276d
    MOV byte ptr [ESI],AL               ; 005c2770
    MOV EAX,EBX                         ; 005c2772
    IDIV ECX                            ; 005c2774
    MOV byte ptr [ESI + 0x2],0x0        ; 005c2776
    ADD EDX,0x30                        ; 005c277a
    MOV byte ptr [ESI + 0x1],DL         ; 005c277d
    POP ESI                             ; 005c2780
    POP EBX                             ; 005c2781
    RET                                 ; 005c2782


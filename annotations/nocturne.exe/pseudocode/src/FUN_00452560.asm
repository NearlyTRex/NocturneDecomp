; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00452560(undefined4 param_1,int param_2)
;
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_00564570
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00452560
        ;   Label: FUN_00452560
    PUSH ESI                            ; 00452561
    MOV ESI,dword ptr [ESP + 0x10]      ; 00452562
    MOV EBX,dword ptr [ESP + 0xc]       ; 00452566
    TEST ESI,ESI                        ; 0045256a
    JLE 0x00452585                      ; 0045256c
        ;   XREF to: 00452585 (CONDITIONAL_JUMP)  ; LAB_00452585
    PUSH EBX                            ; 0045256e
        ;   Label: LAB_0045256e
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 0045256f
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 00452574
    TEST EAX,EAX                        ; 00452577
    JL 0x00452585                       ; 00452579
        ;   XREF to: 00452585 (CONDITIONAL_JUMP)  ; LAB_00452585
    CMP EAX,0xa                         ; 0045257b
    JNZ 0x0045256e                      ; 0045257e
        ;   XREF to: 0045256e (CONDITIONAL_JUMP)  ; LAB_0045256e
    DEC ESI                             ; 00452580
    TEST ESI,ESI                        ; 00452581
    JG 0x0045256e                       ; 00452583
        ;   XREF to: 0045256e (CONDITIONAL_JUMP)  ; LAB_0045256e
    POP ESI                             ; 00452585
        ;   Label: LAB_00452585
    POP EBX                             ; 00452586
    RET                                 ; 00452587


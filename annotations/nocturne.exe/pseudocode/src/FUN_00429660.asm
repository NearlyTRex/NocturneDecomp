; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00429660(int param_1,float param_2)
;
;
; XREF[1]:
;   FUN_004259f0 at 00425a2f
;
; Called Functions:
;   FUN_004e1890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429660
        ;   Label: FUN_00429660
    PUSH ESI                            ; 00429661
    MOV EBX,dword ptr [ESP + 0xc]       ; 00429662
    MOV EDX,dword ptr [EBX + 0x25c0]    ; 00429666
    TEST EDX,EDX                        ; 0042966c
    JGE 0x00429673                      ; 0042966e
        ;   XREF to: 00429673 (CONDITIONAL_JUMP)  ; LAB_00429673
    POP ESI                             ; 00429670
        ;   Label: LAB_00429670
    POP EBX                             ; 00429671
    RET                                 ; 00429672
    IMUL ESI,EDX,0x54c                  ; 00429673
        ;   Label: LAB_00429673
    LEA EAX,[EBX + 0x150]               ; 00429679
    PUSH EAX                            ; 0042967f
    CALL FUN_004e1890                   ; 00429680
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1890()
    ADD ESP,0x4                         ; 00429685
    FLD float ptr [ESP + 0x10]          ; 00429688
    FMUL float ptr [ESI + EAX*0x1 + 0x988] ; 0042968c
    FADD float ptr [EBX + 0x25c4]       ; 00429693
    FSTP float ptr [EBX + 0x25c4]       ; 00429699
    FILD dword ptr [ESI + EAX*0x1 + 0x9cc] ; 0042969f
    FCOMP float ptr [EBX + 0x25c4]      ; 004296a6
    FNSTSW AX                           ; 004296ac
    SAHF                                ; 004296ae
    JA 0x00429670                       ; 004296af
        ;   XREF to: 00429670 (CONDITIONAL_JUMP)  ; LAB_00429670
    MOV dword ptr [EBX + 0x25c0],0xffffffff ; 004296b1
    POP ESI                             ; 004296bb
    POP EBX                             ; 004296bc
    RET                                 ; 004296bd


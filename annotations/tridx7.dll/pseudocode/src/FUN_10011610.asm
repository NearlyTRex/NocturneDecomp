; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_10011610(int *param_1)
;
;
; XREF[1]:
;   FUN_10011360 at 100113b0
;
; Called Functions:
;   __amsg_exit
;   FUN_10008830
;   FUN_100117b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 10011610
        ;   Label: FUN_10011610
    XOR EAX,EAX                         ; 10011611
    PUSH ESI                            ; 10011613
    PUSH EDI                            ; 10011614
    MOV ESI,dword ptr [ESP + 0x10]      ; 10011615
    CMP ESI,EAX                         ; 10011619
    JZ 0x1001167a                       ; 1001161b
        ;   XREF to: 1001167a (CONDITIONAL_JUMP)  ; LAB_1001167a
    LEA ECX,[ESI + 0x4]                 ; 1001161d
    CMP dword ptr [ESI],0x0             ; 10011620
    JZ 0x10011630                       ; 10011623
        ;   XREF to: 10011630 (CONDITIONAL_JUMP)  ; LAB_10011630
    INC EAX                             ; 10011625
        ;   Label: LAB_10011625
    MOV EDX,ECX                         ; 10011626
    ADD ECX,0x4                         ; 10011628
    CMP dword ptr [EDX],0x0             ; 1001162b
    JNZ 0x10011625                      ; 1001162e
        ;   XREF to: 10011625 (CONDITIONAL_JUMP)  ; LAB_10011625
    LEA EAX,[EAX*0x4 + 0x4]             ; 10011630
        ;   Label: LAB_10011630
    PUSH EAX                            ; 10011637
    CALL FUN_10008830                   ; 10011638
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; undefined FUN_10008830()
    MOV EDI,EAX                         ; 1001163d
    ADD ESP,0x4                         ; 1001163f
    MOV EBX,EAX                         ; 10011642
    TEST EBX,EBX                        ; 10011644
    JNZ 0x10011652                      ; 10011646
        ;   XREF to: 10011652 (CONDITIONAL_JUMP)  ; LAB_10011652
    PUSH 0x9                            ; 10011648
    CALL __amsg_exit                    ; 1001164a
        ;   XREF to: 100058c0 (UNCONDITIONAL_CALL)  ; void __amsg_exit(int param_1)
    ADD ESP,0x4                         ; 1001164f
    CMP dword ptr [ESI],0x0             ; 10011652
        ;   Label: LAB_10011652
    JZ 0x10011672                       ; 10011655
        ;   XREF to: 10011672 (CONDITIONAL_JUMP)  ; LAB_10011672
    MOV ECX,dword ptr [ESI]             ; 10011657
        ;   Label: LAB_10011657
    MOV EAX,ESI                         ; 10011659
    ADD ESI,0x4                         ; 1001165b
    PUSH ECX                            ; 1001165e
    ADD EBX,0x4                         ; 1001165f
    CALL FUN_100117b0                   ; 10011662
        ;   XREF to: 100117b0 (UNCONDITIONAL_CALL)  ; undefined FUN_100117b0()
    ADD ESP,0x4                         ; 10011667
    MOV dword ptr [EBX + -0x4],EAX      ; 1001166a
    CMP dword ptr [ESI],0x0             ; 1001166d
    JNZ 0x10011657                      ; 10011670
        ;   XREF to: 10011657 (CONDITIONAL_JUMP)  ; LAB_10011657
    MOV EAX,EDI                         ; 10011672
        ;   Label: LAB_10011672
    MOV dword ptr [EBX],0x0             ; 10011674
    POP EDI                             ; 1001167a
        ;   Label: LAB_1001167a
    POP ESI                             ; 1001167b
    POP EBX                             ; 1001167c
    RET                                 ; 1001167d


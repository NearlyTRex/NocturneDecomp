; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00430950(int *param_1,int *param_2,int *param_3)
;
;
; XREF[4]:
;   FUN_00407cc0 at 00407d9c
;   FUN_00407fc0 at 0040809c
;   FUN_00431330 at 00431afa
;   FUN_0046b970 at 0046ba9b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430950
        ;   Label: FUN_00430950
    PUSH ESI                            ; 00430951
    PUSH EDI                            ; 00430952
    PUSH EBP                            ; 00430953
    MOV ESI,dword ptr [ESP + 0x14]      ; 00430954
    MOV EBP,dword ptr [ESP + 0x18]      ; 00430958
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0043095c
    MOV EDX,dword ptr [ESI + 0x4]       ; 00430960
    MOV ECX,dword ptr [ESI + 0x8]       ; 00430963
    MOV EBX,dword ptr [EBP + 0x8]       ; 00430966
    ADD EDX,ECX                         ; 00430969
    MOV ECX,dword ptr [EBP + 0x4]       ; 0043096b
    ADD ECX,EBX                         ; 0043096e
    MOV EBX,EDX                         ; 00430970
    SUB EBX,ECX                         ; 00430972
    CMP EDX,EBX                         ; 00430974
    JGE 0x0043098a                      ; 00430976
        ;   XREF to: 0043098a (CONDITIONAL_JUMP)  ; LAB_0043098a
    NEG EBX                             ; 00430978
    CMP EDX,EBX                         ; 0043097a
    JLE 0x00430991                      ; 0043097c
        ;   XREF to: 00430991 (CONDITIONAL_JUMP)  ; LAB_00430991
    NEG EBX                             ; 0043097e
    XOR EAX,EAX                         ; 00430980
    SAR EDX,0x1                         ; 00430982
    RCR EAX,0x1                         ; 00430984
    IDIV EBX                            ; 00430986
    JMP 0x00430998                      ; 00430988
        ;   XREF to: 00430998 (UNCONDITIONAL_JUMP)  ; LAB_00430998
    MOV EAX,0x7fffffff                  ; 0043098a
        ;   Label: LAB_0043098a
    JMP 0x00430998                      ; 0043098f
        ;   XREF to: 00430998 (UNCONDITIONAL_JUMP)  ; LAB_00430998
    NEG EBX                             ; 00430991
        ;   Label: LAB_00430991
    MOV EAX,0x80000000                  ; 00430993
    MOV ECX,EAX                         ; 00430998
        ;   Label: LAB_00430998
    MOV EDX,dword ptr [EBP + 0x8]       ; 0043099a
    MOV EAX,dword ptr [ESI + 0x8]       ; 0043099d
    SUB EDX,EAX                         ; 004309a0
    MOV EAX,EDX                         ; 004309a2
    MOV EDX,ECX                         ; 004309a4
    IMUL EDX                            ; 004309a6
    ADD EAX,EAX                         ; 004309a8
    ADC EDX,EDX                         ; 004309aa
    MOV EAX,EDX                         ; 004309ac
    MOV EDX,dword ptr [ESI + 0x8]       ; 004309ae
    ADD EAX,EDX                         ; 004309b1
    MOV dword ptr [EDI + 0x8],EAX       ; 004309b3
    MOV EDX,EAX                         ; 004309b6
    MOV dword ptr [EDI + 0x4],EAX       ; 004309b8
    NEG EDX                             ; 004309bb
    MOV dword ptr [EDI + 0x4],EDX       ; 004309bd
    MOV EAX,dword ptr [EBP]             ; 004309c0
    MOV EBX,dword ptr [ESI]             ; 004309c3
    MOV EDX,ECX                         ; 004309c5
    SUB EAX,EBX                         ; 004309c7
    IMUL EDX                            ; 004309c9
    ADD EAX,EAX                         ; 004309cb
    ADC EDX,EDX                         ; 004309cd
    MOV EAX,EDX                         ; 004309cf
    MOV EDX,dword ptr [ESI]             ; 004309d1
    ADD EAX,EDX                         ; 004309d3
    MOV dword ptr [EDI],EAX             ; 004309d5
    MOV EDX,dword ptr [EBP + 0x20]      ; 004309d7
    MOV EAX,dword ptr [ESI + 0x20]      ; 004309da
    SUB EDX,EAX                         ; 004309dd
    MOV EAX,EDX                         ; 004309df
    MOV EDX,ECX                         ; 004309e1
    IMUL EDX                            ; 004309e3
    ADD EAX,EAX                         ; 004309e5
    ADC EDX,EDX                         ; 004309e7
    MOV EAX,EDX                         ; 004309e9
    MOV EDX,dword ptr [ESI + 0x20]      ; 004309eb
    ADD EAX,EDX                         ; 004309ee
    MOV dword ptr [EDI + 0x20],EAX      ; 004309f0
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004309f3
    MOV EBX,dword ptr [ESI + 0x2c]      ; 004309f6
    MOV EDX,ECX                         ; 004309f9
    SUB EAX,EBX                         ; 004309fb
    IMUL EDX                            ; 004309fd
    ADD EAX,EAX                         ; 004309ff
    ADC EDX,EDX                         ; 00430a01
    MOV EAX,EDX                         ; 00430a03
    MOV EDX,dword ptr [ESI + 0x2c]      ; 00430a05
    ADD EAX,EDX                         ; 00430a08
    MOV dword ptr [EDI + 0x2c],EAX      ; 00430a0a
    MOV EDX,dword ptr [EBP + 0x18]      ; 00430a0d
    MOV EAX,dword ptr [ESI + 0x18]      ; 00430a10
    SUB EDX,EAX                         ; 00430a13
    MOV EAX,EDX                         ; 00430a15
    MOV EDX,ECX                         ; 00430a17
    IMUL EDX                            ; 00430a19
    ADD EAX,EAX                         ; 00430a1b
    ADC EDX,EDX                         ; 00430a1d
    MOV EAX,EDX                         ; 00430a1f
    MOV EDX,dword ptr [ESI + 0x18]      ; 00430a21
    ADD EAX,EDX                         ; 00430a24
    MOV dword ptr [EDI + 0x18],EAX      ; 00430a26
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00430a29
    SUB EAX,dword ptr [ESI + 0x1c]      ; 00430a2c
    MOV EDX,ECX                         ; 00430a2f
    IMUL EDX                            ; 00430a31
    ADD EAX,EAX                         ; 00430a33
    ADC EDX,EDX                         ; 00430a35
    MOV EAX,EDX                         ; 00430a37
    MOV EDX,dword ptr [ESI + 0x1c]      ; 00430a39
    MOV dword ptr [EDI + 0x10],0xffffffff ; 00430a3c
    ADD EAX,EDX                         ; 00430a43
    MOV dword ptr [EDI + 0x1c],EAX      ; 00430a45
    POP EBP                             ; 00430a48
    POP EDI                             ; 00430a49
    POP ESI                             ; 00430a4a
    POP EBX                             ; 00430a4b
    RET                                 ; 00430a4c


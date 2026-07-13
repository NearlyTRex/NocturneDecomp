; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00431930(int *param_1,int *param_2,int *param_3)
;
;
; XREF[2]:
;   FUN_00431f50 at 004320bf
;   FUN_00432cd0 at 004336a7
;
; Referenced Globals:
;   undefined4 DAT_005ad284
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431930
        ;   Label: FUN_00431930
    PUSH ESI                            ; 00431931
    PUSH EDI                            ; 00431932
    PUSH EBP                            ; 00431933
    MOV ESI,dword ptr [ESP + 0x14]      ; 00431934
    MOV EDI,dword ptr [ESP + 0x18]      ; 00431938
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0043193c
    MOV EBX,dword ptr [EDI + 0x8]       ; 00431940
    MOV EDX,dword ptr [ESI + 0x8]       ; 00431943
    MOV ECX,dword ptr [ESI + 0x8]       ; 00431946
    SUB EBX,EDX                         ; 00431949
    MOV EDX,dword ptr [0x005ad284]      ; 0043194b | DAT_005ad284
    SUB EDX,ECX                         ; 00431951
    CMP EDX,EBX                         ; 00431953
    JGE 0x00431969                      ; 00431955
        ;   XREF to: 00431969 (CONDITIONAL_JUMP)  ; LAB_00431969
    NEG EBX                             ; 00431957
    CMP EDX,EBX                         ; 00431959
    JLE 0x00431970                      ; 0043195b
        ;   XREF to: 00431970 (CONDITIONAL_JUMP)  ; LAB_00431970
    NEG EBX                             ; 0043195d
    XOR EAX,EAX                         ; 0043195f
    SAR EDX,0x1                         ; 00431961
    RCR EAX,0x1                         ; 00431963
    IDIV EBX                            ; 00431965
    JMP 0x00431977                      ; 00431967
        ;   XREF to: 00431977 (UNCONDITIONAL_JUMP)  ; LAB_00431977
    MOV EAX,0x7fffffff                  ; 00431969
        ;   Label: LAB_00431969
    JMP 0x00431977                      ; 0043196e
        ;   XREF to: 00431977 (UNCONDITIONAL_JUMP)  ; LAB_00431977
    NEG EBX                             ; 00431970
        ;   Label: LAB_00431970
    MOV EAX,0x80000000                  ; 00431972
    MOV ECX,EAX                         ; 00431977
        ;   Label: LAB_00431977
    MOV EBX,dword ptr [ESI + 0x8]       ; 00431979
    MOV EAX,dword ptr [EDI + 0x8]       ; 0043197c
    MOV EDX,ECX                         ; 0043197f
    SUB EAX,EBX                         ; 00431981
    IMUL EDX                            ; 00431983
    ADD EAX,EAX                         ; 00431985
    ADC EDX,EDX                         ; 00431987
    MOV EAX,EDX                         ; 00431989
    MOV EBX,dword ptr [ESI + 0x8]       ; 0043198b
    ADD EAX,EBX                         ; 0043198e
    MOV dword ptr [EBP + 0x8],EAX       ; 00431990
    MOV EAX,dword ptr [EDI + 0x4]       ; 00431993
    SUB EAX,dword ptr [ESI + 0x4]       ; 00431996
    MOV EDX,ECX                         ; 00431999
    IMUL EDX                            ; 0043199b
    ADD EAX,EAX                         ; 0043199d
    ADC EDX,EDX                         ; 0043199f
    MOV EAX,EDX                         ; 004319a1
    MOV EBX,dword ptr [ESI + 0x4]       ; 004319a3
    ADD EAX,EBX                         ; 004319a6
    MOV dword ptr [EBP + 0x4],EAX       ; 004319a8
    MOV EAX,dword ptr [EDI]             ; 004319ab
    MOV EBX,dword ptr [ESI]             ; 004319ad
    MOV EDX,ECX                         ; 004319af
    SUB EAX,EBX                         ; 004319b1
    IMUL EDX                            ; 004319b3
    ADD EAX,EAX                         ; 004319b5
    ADC EDX,EDX                         ; 004319b7
    MOV EAX,EDX                         ; 004319b9
    MOV EBX,dword ptr [ESI]             ; 004319bb
    ADD EAX,EBX                         ; 004319bd
    MOV dword ptr [EBP],EAX             ; 004319bf
    MOV EAX,dword ptr [EDI + 0x20]      ; 004319c2
    SUB EAX,dword ptr [ESI + 0x20]      ; 004319c5
    MOV EDX,ECX                         ; 004319c8
    IMUL EDX                            ; 004319ca
    ADD EAX,EAX                         ; 004319cc
    ADC EDX,EDX                         ; 004319ce
    MOV EAX,EDX                         ; 004319d0
    MOV EBX,dword ptr [ESI + 0x20]      ; 004319d2
    ADD EAX,EBX                         ; 004319d5
    MOV dword ptr [EBP + 0x20],EAX      ; 004319d7
    MOV EAX,dword ptr [EDI + 0x2c]      ; 004319da
    MOV EBX,dword ptr [ESI + 0x2c]      ; 004319dd
    MOV EDX,ECX                         ; 004319e0
    SUB EAX,EBX                         ; 004319e2
    IMUL EDX                            ; 004319e4
    ADD EAX,EAX                         ; 004319e6
    ADC EDX,EDX                         ; 004319e8
    MOV EAX,EDX                         ; 004319ea
    MOV EBX,dword ptr [ESI + 0x2c]      ; 004319ec
    ADD EAX,EBX                         ; 004319ef
    MOV dword ptr [EBP + 0x2c],EAX      ; 004319f1
    MOV EAX,dword ptr [EDI + 0x18]      ; 004319f4
    SUB EAX,dword ptr [ESI + 0x18]      ; 004319f7
    MOV EDX,ECX                         ; 004319fa
    IMUL EDX                            ; 004319fc
    ADD EAX,EAX                         ; 004319fe
    ADC EDX,EDX                         ; 00431a00
    MOV EAX,EDX                         ; 00431a02
    MOV EBX,dword ptr [ESI + 0x18]      ; 00431a04
    ADD EAX,EBX                         ; 00431a07
    MOV dword ptr [EBP + 0x18],EAX      ; 00431a09
    MOV EAX,dword ptr [EDI + 0x1c]      ; 00431a0c
    MOV EBX,dword ptr [ESI + 0x1c]      ; 00431a0f
    MOV EDX,ECX                         ; 00431a12
    SUB EAX,EBX                         ; 00431a14
    IMUL EDX                            ; 00431a16
    ADD EAX,EAX                         ; 00431a18
    ADC EDX,EDX                         ; 00431a1a
    MOV EAX,EDX                         ; 00431a1c
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00431a1e
    MOV dword ptr [EBP + 0x10],0xffffffff ; 00431a21
    ADD ECX,EAX                         ; 00431a28
    MOV dword ptr [EBP + 0x1c],ECX      ; 00431a2a
    POP EBP                             ; 00431a2d
    POP EDI                             ; 00431a2e
    POP ESI                             ; 00431a2f
    POP EBX                             ; 00431a30
    RET                                 ; 00431a31


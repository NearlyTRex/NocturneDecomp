; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00415760(int param_1)
;
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
;
; Referenced Globals:
;   undefined4 DAT_0059a5a0
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01cd4318
;
; Called Functions:
;   FUN_00409f20
;   FUN_00409f60
;   FUN_0041ceb0
;   FUN_00425c20
;   FUN_00454530
;   FUN_00461090
;   FUN_004e0340
;   FUN_004e0380
;   FUN_004e0820
;   FUN_004e22b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415760
        ;   Label: FUN_00415760
    PUSH EBP                            ; 00415761
    SUB ESP,0x18                        ; 00415762
    MOV EBX,dword ptr [ESP + 0x24]      ; 00415765
    CMP dword ptr [EBX + 0x2404],0x0    ; 00415769
    JZ 0x0041577a                       ; 00415770
        ;   XREF to: 0041577a (CONDITIONAL_JUMP)  ; LAB_0041577a
    XOR EAX,EAX                         ; 00415772
    ADD ESP,0x18                        ; 00415774
    POP EBP                             ; 00415777
    POP EBX                             ; 00415778
    RET                                 ; 00415779
    PUSH EDI                            ; 0041577a
        ;   Label: LAB_0041577a
    PUSH ESI                            ; 0041577b
    PUSH EBX                            ; 0041577c
    CALL FUN_00409f20                   ; 0041577d
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; undefined FUN_00409f20()
    ADD ESP,0x4                         ; 00415782
    PUSH 0x0                            ; 00415785
    LEA ESI,[ESP + 0xc]                 ; 00415787
    PUSH ESI                            ; 0041578b
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0041578c
    PUSH EBX                            ; 00415792
    CALL dword ptr [EAX + 0x14]         ; 00415793
    ADD ESP,0x8                         ; 00415796
    PUSH EAX                            ; 00415799
    CALL FUN_0041ceb0                   ; 0041579a
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041ceb0()
    ADD ESP,0x8                         ; 0041579f
    MOV EDI,EAX                         ; 004157a2
    TEST EAX,EAX                        ; 004157a4
    JZ 0x00415851                       ; 004157a6
        ;   XREF to: 00415851 (CONDITIONAL_JUMP)  ; LAB_00415851
    MOV ECX,dword ptr [EBX + 0xbea0]    ; 004157ac
    MOV dword ptr [EBX + 0x2618],0x1    ; 004157b2
    TEST ECX,ECX                        ; 004157bc
    JZ 0x00415864                       ; 004157be
        ;   XREF to: 00415864 (CONDITIONAL_JUMP)  ; LAB_00415864
    PUSH 0x0                            ; 004157c4
    LEA EAX,[EBX + 0x150]               ; 004157c6
    PUSH EAX                            ; 004157cc
    PUSH 0x0                            ; 004157cd
    LEA ESI,[EBX + 0xbea8]              ; 004157cf
    PUSH ESI                            ; 004157d5
    CALL FUN_004e0340                   ; 004157d6
        ;   XREF to: 004e0340 (UNCONDITIONAL_CALL)  ; undefined FUN_004e0340()
    ADD ESP,0x10                        ; 004157db
    PUSH 0x0                            ; 004157de
    PUSH 0x0                            ; 004157e0
    LEA EAX,[EBX + 0xbd24]              ; 004157e2
    PUSH EAX                            ; 004157e8
    CALL FUN_00454530                   ; 004157e9
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined FUN_00454530()
    ADD ESP,0x4                         ; 004157ee
    PUSH EAX                            ; 004157f1
    PUSH 0x1                            ; 004157f2
    PUSH ESI                            ; 004157f4
    CALL FUN_004e0380                   ; 004157f5
        ;   XREF to: 004e0380 (UNCONDITIONAL_CALL)  ; undefined FUN_004e0380()
    FLD float ptr [EBX + 0xbea4]        ; 004157fa
    FDIV float ptr [0x0059a5a0]         ; 00415800 | DAT_0059a5a0
    ADD ESP,0x14                        ; 00415806
    SUB ESP,0x4                         ; 00415809
    FSTP float ptr [ESP]                ; 0041580c
    PUSH ESI                            ; 0041580f
    CALL FUN_004e0820                   ; 00415810
        ;   XREF to: 004e0820 (UNCONDITIONAL_CALL)  ; undefined FUN_004e0820()
    ADD ESP,0x8                         ; 00415815
    CMP dword ptr [0x01cd4318],0x0      ; 00415818 | DAT_01cd4318
        ;   Label: LAB_00415818
    JZ 0x00415851                       ; 0041581f
        ;   XREF to: 00415851 (CONDITIONAL_JUMP)  ; LAB_00415851
    MOV EBP,dword ptr [0x005ae704]      ; 00415821 | DAT_005ae704
    PUSH EBP                            ; 00415827 | DAT_01b4d738
    CALL FUN_00461090                   ; 00415828
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; undefined FUN_00461090()
    ADD ESP,0x4                         ; 0041582d
    TEST EAX,EAX                        ; 00415830
    JNZ 0x00415851                      ; 00415832
        ;   XREF to: 00415851 (CONDITIONAL_JUMP)  ; LAB_00415851
    PUSH EBX                            ; 00415834
    LEA EAX,[EBX + 0x150]               ; 00415835
    PUSH EAX                            ; 0041583b
    CALL FUN_004e22b0                   ; 0041583c
        ;   XREF to: 004e22b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e22b0()
    ADD ESP,0x8                         ; 00415841
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00415844
    PUSH EBX                            ; 0041584a
    CALL dword ptr [EAX + 0x50]         ; 0041584b
    ADD ESP,0x4                         ; 0041584e
    PUSH EBX                            ; 00415851
        ;   Label: LAB_00415851
    CALL FUN_00409f60                   ; 00415852
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined FUN_00409f60()
    ADD ESP,0x4                         ; 00415857
    MOV EAX,EDI                         ; 0041585a
    POP ESI                             ; 0041585c
    POP EDI                             ; 0041585d
    ADD ESP,0x18                        ; 0041585e
    POP EBP                             ; 00415861
    POP EBX                             ; 00415862
    RET                                 ; 00415863
    PUSH EBX                            ; 00415864
        ;   Label: LAB_00415864
    CALL FUN_00425c20                   ; 00415865
        ;   XREF to: 00425c20 (UNCONDITIONAL_CALL)  ; undefined FUN_00425c20()
    ADD ESP,0x4                         ; 0041586a
    JMP 0x00415818                      ; 0041586d
        ;   XREF to: 00415818 (UNCONDITIONAL_JUMP)  ; LAB_00415818


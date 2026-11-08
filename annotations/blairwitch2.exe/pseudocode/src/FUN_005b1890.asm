; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b1890(int *param_1,undefined4 *param_2)
;
;
; XREF[4]:
;   FUN_005a2240 at 005a2336
;   FUN_005a2910 at 005a29f6
;   FUN_005a4330 at 005a44c2
;   FUN_005a5c40 at 005a5cdf
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1890
        ;   Label: FUN_005b1890
    PUSH ESI                            ; 005b1891
    PUSH EDI                            ; 005b1892
    MOV ESI,dword ptr [ESP + 0x10]      ; 005b1893
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b1897
    MOV ECX,dword ptr [ESI]             ; 005b189b
    XOR EBX,EBX                         ; 005b189d
    TEST ECX,ECX                        ; 005b189f
    JLE 0x005b18be                      ; 005b18a1
        ;   XREF to: 005b18be (CONDITIONAL_JUMP)  ; LAB_005b18be
    MOV ECX,ESI                         ; 005b18a3
    MOV EAX,dword ptr [ECX + 0x194]     ; 005b18a5
        ;   Label: LAB_005b18a5
    ADD EAX,0x3ab24                     ; 005b18ab
    CMP EAX,EDX                         ; 005b18b0
    JNZ 0x005b18c2                      ; 005b18b2
        ;   XREF to: 005b18c2 (CONDITIONAL_JUMP)  ; LAB_005b18c2
    INC EBX                             ; 005b18b4
    MOV EDI,dword ptr [ESI]             ; 005b18b5
    ADD ECX,0x4                         ; 005b18b7
    CMP EBX,EDI                         ; 005b18ba
    JL 0x005b18a5                       ; 005b18bc
        ;   XREF to: 005b18a5 (CONDITIONAL_JUMP)  ; LAB_005b18a5
    POP EDI                             ; 005b18be
        ;   Label: LAB_005b18be
    POP ESI                             ; 005b18bf
    POP EBX                             ; 005b18c0
    RET                                 ; 005b18c1
    MOV EDI,dword ptr [EDX]             ; 005b18c2
        ;   Label: LAB_005b18c2
    MOV dword ptr [EAX],EDI             ; 005b18c4
    MOV EDI,dword ptr [EDX + 0x4]       ; 005b18c6
    MOV dword ptr [EAX + 0x4],EDI       ; 005b18c9
    MOV EDI,dword ptr [EDX + 0x8]       ; 005b18cc
    MOV dword ptr [EAX + 0x8],EDI       ; 005b18cf
    INC EBX                             ; 005b18d2
    MOV EDI,dword ptr [ESI]             ; 005b18d3
    ADD ECX,0x4                         ; 005b18d5
    CMP EBX,EDI                         ; 005b18d8
    JL 0x005b18a5                       ; 005b18da
        ;   XREF to: 005b18a5 (CONDITIONAL_JUMP)  ; LAB_005b18a5
    POP EDI                             ; 005b18dc
    POP ESI                             ; 005b18dd
    POP EBX                             ; 005b18de
    RET                                 ; 005b18df


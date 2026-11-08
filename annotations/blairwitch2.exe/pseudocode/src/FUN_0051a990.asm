; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0051a990(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_0051b3c0 at 0051b50d
;   FUN_0051b9d0 at 0051b9eb
;
; Called Functions:
;   FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051a990
        ;   Label: FUN_0051a990
    PUSH ESI                            ; 0051a991
    PUSH EDI                            ; 0051a992
    PUSH EBP                            ; 0051a993
    MOV EBP,dword ptr [ESP + 0x14]      ; 0051a994
    MOV ESI,dword ptr [EBP + 0x410]     ; 0051a998
    DEC ESI                             ; 0051a99e
    XOR EDI,EDI                         ; 0051a99f
    TEST ESI,ESI                        ; 0051a9a1
    JL 0x0051a9da                       ; 0051a9a3
        ;   XREF to: 0051a9da (CONDITIONAL_JUMP)  ; LAB_0051a9da
    LEA EDX,[EDI + ESI*0x1]             ; 0051a9a5
        ;   Label: LAB_0051a9a5
    MOV EAX,EDX                         ; 0051a9a8
    SAR EDX,0x1f                        ; 0051a9aa
    SUB EAX,EDX                         ; 0051a9ad
    SAR EAX,0x1                         ; 0051a9af
    MOV EBX,EAX                         ; 0051a9b1
    IMUL EAX,EAX,0x14                   ; 0051a9b3
    MOV EDX,dword ptr [EBP + 0x414]     ; 0051a9b6
    MOV ECX,dword ptr [EDX + EAX*0x1]   ; 0051a9bc
    PUSH ECX                            ; 0051a9bf
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0051a9c0
    PUSH EAX                            ; 0051a9c4
    CALL FUN_005b8130                   ; 0051a9c5
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 0051a9ca
    TEST EAX,EAX                        ; 0051a9cd
    JZ 0x0051a9e4                       ; 0051a9cf
        ;   XREF to: 0051a9e4 (CONDITIONAL_JUMP)  ; LAB_0051a9e4
    JL 0x0051a9eb                       ; 0051a9d1
        ;   XREF to: 0051a9eb (CONDITIONAL_JUMP)  ; LAB_0051a9eb
    LEA EDI,[EBX + 0x1]                 ; 0051a9d3
    CMP EDI,ESI                         ; 0051a9d6
    JLE 0x0051a9a5                      ; 0051a9d8
        ;   XREF to: 0051a9a5 (CONDITIONAL_JUMP)  ; LAB_0051a9a5
    MOV EAX,0xffffffff                  ; 0051a9da
        ;   Label: LAB_0051a9da
    POP EBP                             ; 0051a9df
    POP EDI                             ; 0051a9e0
    POP ESI                             ; 0051a9e1
    POP EBX                             ; 0051a9e2
    RET                                 ; 0051a9e3
    MOV EAX,EBX                         ; 0051a9e4
        ;   Label: LAB_0051a9e4
    POP EBP                             ; 0051a9e6
    POP EDI                             ; 0051a9e7
    POP ESI                             ; 0051a9e8
    POP EBX                             ; 0051a9e9
    RET                                 ; 0051a9ea
    LEA ESI,[EBX + -0x1]                ; 0051a9eb
        ;   Label: LAB_0051a9eb
    CMP EDI,ESI                         ; 0051a9ee
    JLE 0x0051a9a5                      ; 0051a9f0
        ;   XREF to: 0051a9a5 (CONDITIONAL_JUMP)  ; LAB_0051a9a5
    MOV EAX,0xffffffff                  ; 0051a9f2
    POP EBP                             ; 0051a9f7
    POP EDI                             ; 0051a9f8
    POP ESI                             ; 0051a9f9
    POP EBX                             ; 0051a9fa
    RET                                 ; 0051a9fb


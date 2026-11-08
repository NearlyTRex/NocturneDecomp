; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c17c8(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_005c1824 at 005c184e
;
; Called Functions:
;   FUN_005c16c8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c17c8
        ;   Label: FUN_005c17c8
    PUSH ESI                            ; 005c17c9
    PUSH EBP                            ; 005c17ca
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c17cb
    MOV ESI,dword ptr [ESP + 0x14]      ; 005c17cf
    CMP dword ptr [EAX + 0x20],0x0      ; 005c17d3
    JNZ 0x005c17f4                      ; 005c17d7
        ;   XREF to: 005c17f4 (CONDITIONAL_JUMP)  ; LAB_005c17f4
    CMP dword ptr [ESI + 0x20],0x0      ; 005c17d9
    JNZ 0x005c17f4                      ; 005c17dd
        ;   XREF to: 005c17f4 (CONDITIONAL_JUMP)  ; LAB_005c17f4
    MOV EBX,dword ptr [EAX + 0x10]      ; 005c17df
    MOV ECX,dword ptr [ESI + 0x10]      ; 005c17e2
    CMP EBX,ECX                         ; 005c17e5
    JLE 0x005c17f2                      ; 005c17e7
        ;   XREF to: 005c17f2 (CONDITIONAL_JUMP)  ; LAB_005c17f2
    MOV EAX,0x1                         ; 005c17e9
    POP EBP                             ; 005c17ee
    POP ESI                             ; 005c17ef
    POP EBX                             ; 005c17f0
    RET                                 ; 005c17f1
    JL 0x005c181b                       ; 005c17f2
        ;   XREF to: 005c181b (CONDITIONAL_JUMP)  ; LAB_005c181b
        ;   Label: LAB_005c17f2
    MOV EBP,dword ptr [ESP + 0x18]      ; 005c17f4
        ;   Label: LAB_005c17f4
    PUSH EBP                            ; 005c17f8
    PUSH EAX                            ; 005c17f9
    CALL FUN_005c16c8                   ; 005c17fa
        ;   XREF to: 005c16c8 (UNCONDITIONAL_CALL)  ; undefined FUN_005c16c8()
    ADD ESP,0x8                         ; 005c17ff
    PUSH EBP                            ; 005c1802
    PUSH ESI                            ; 005c1803
    MOV EBX,EAX                         ; 005c1804
    CALL FUN_005c16c8                   ; 005c1806
        ;   XREF to: 005c16c8 (UNCONDITIONAL_CALL)  ; undefined FUN_005c16c8()
    ADD ESP,0x8                         ; 005c180b
    CMP EBX,EAX                         ; 005c180e
    JLE 0x005c181b                      ; 005c1810
        ;   XREF to: 005c181b (CONDITIONAL_JUMP)  ; LAB_005c181b
    MOV EAX,0x1                         ; 005c1812
    POP EBP                             ; 005c1817
    POP ESI                             ; 005c1818
    POP EBX                             ; 005c1819
    RET                                 ; 005c181a
    XOR EAX,EAX                         ; 005c181b
        ;   Label: LAB_005c181b
    POP EBP                             ; 005c181d
    POP ESI                             ; 005c181e
    POP EBX                             ; 005c181f
    RET                                 ; 005c1820


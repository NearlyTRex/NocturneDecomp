; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00480810(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_0047dba0 at 0047dbee
;   FUN_004802e0 at 004802fa
;
; Called Functions:
;   FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480810
        ;   Label: FUN_00480810
    PUSH ESI                            ; 00480811
    PUSH EDI                            ; 00480812
    PUSH EBP                            ; 00480813
    MOV EDI,dword ptr [ESP + 0x14]      ; 00480814
    MOV EBP,dword ptr [ESP + 0x18]      ; 00480818
    MOV EDX,dword ptr [EDI + 0x258c]    ; 0048081c
    XOR EBX,EBX                         ; 00480822
    TEST EDX,EDX                        ; 00480824
    JLE 0x0048084a                      ; 00480826
        ;   XREF to: 0048084a (CONDITIONAL_JUMP)  ; LAB_0048084a
    LEA ESI,[EDI + 0x2590]              ; 00480828
    PUSH EBP                            ; 0048082e
        ;   Label: LAB_0048082e
    PUSH ESI                            ; 0048082f
    CALL FUN_00564520                   ; 00480830
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined FUN_00564520()
    ADD ESP,0x8                         ; 00480835
    TEST EAX,EAX                        ; 00480838
    JZ 0x00480854                       ; 0048083a
        ;   XREF to: 00480854 (CONDITIONAL_JUMP)  ; LAB_00480854
    INC EBX                             ; 0048083c
    MOV ECX,dword ptr [EDI + 0x258c]    ; 0048083d
    ADD ESI,0x20                        ; 00480843
    CMP EBX,ECX                         ; 00480846
    JL 0x0048082e                       ; 00480848
        ;   XREF to: 0048082e (CONDITIONAL_JUMP)  ; LAB_0048082e
    MOV EAX,0xffffffff                  ; 0048084a
        ;   Label: LAB_0048084a
    POP EBP                             ; 0048084f
    POP EDI                             ; 00480850
    POP ESI                             ; 00480851
    POP EBX                             ; 00480852
    RET                                 ; 00480853
    MOV EAX,EBX                         ; 00480854
        ;   Label: LAB_00480854
    POP EBP                             ; 00480856
    POP EDI                             ; 00480857
    POP ESI                             ; 00480858
    POP EBX                             ; 00480859
    RET                                 ; 0048085a


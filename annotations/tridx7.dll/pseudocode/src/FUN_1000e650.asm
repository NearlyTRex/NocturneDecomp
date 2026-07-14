; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_1000e650(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_1000e350 at 1000e3ab
;
; Referenced Globals:
;   TerminatedCString s_french_10012b74
;   TerminatedCString s_dutch_belgian_10012c2c
;   void* PTR_s_dutch_belgian_10012c2c_10017a28 = 10012c2c
;   void* PTR_s_french_10012b74_10017af0 = 10012b74
;   undefined2 DAT_10017af4
;
; Called Functions:
;   FUN_1000ff20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 1000e650
        ;   Label: FUN_1000e650
    PUSH ESI                            ; 1000e651
    PUSH EDI                            ; 1000e652
    MOV EBX,0x63                        ; 1000e653
    PUSH EBP                            ; 1000e658
    XOR EDI,EDI                         ; 1000e659
    MOV ESI,dword ptr [ESP + 0x14]      ; 1000e65b
    LEA EAX,[EDI + EBX*0x1]             ; 1000e65f
        ;   Label: LAB_1000e65f
    CDQ                                 ; 1000e662
    SUB EAX,EDX                         ; 1000e663
    SAR EAX,0x1                         ; 1000e665
    MOV EBP,EAX                         ; 1000e668
    MOV EAX,dword ptr [EAX*0x8 + 0x10017968] ; 1000e66a | PTR_s_french_10012b74_10017af0 | PTR_s_dutch_belgian_10012c2c_10017a28
    PUSH EAX                            ; 1000e671 | = "french" | s_dutch_belgian_10012c2c
    PUSH ESI                            ; 1000e672
    CALL FUN_1000ff20                   ; 1000e673
        ;   XREF to: 1000ff20 (UNCONDITIONAL_CALL)  ; undefined FUN_1000ff20()
    ADD ESP,0x8                         ; 1000e678
    TEST EAX,EAX                        ; 1000e67b
    JZ 0x1000e698                       ; 1000e67d
        ;   XREF to: 1000e698 (CONDITIONAL_JUMP)  ; LAB_1000e698
    JGE 0x1000e685                      ; 1000e67f
        ;   XREF to: 1000e685 (CONDITIONAL_JUMP)  ; LAB_1000e685
    MOV EBX,EBP                         ; 1000e681
    JMP 0x1000e687                      ; 1000e683
        ;   XREF to: 1000e687 (UNCONDITIONAL_JUMP)  ; LAB_1000e687
    MOV EDI,EBP                         ; 1000e685
        ;   Label: LAB_1000e685
    MOV EAX,EDI                         ; 1000e687
        ;   Label: LAB_1000e687
    SUB EAX,EBX                         ; 1000e689
    CMP EAX,-0x1                        ; 1000e68b
    JNZ 0x1000e65f                      ; 1000e68e
        ;   XREF to: 1000e65f (CONDITIONAL_JUMP)  ; LAB_1000e65f
    XOR AX,AX                           ; 1000e690
    POP EBP                             ; 1000e693
    POP EDI                             ; 1000e694
    POP ESI                             ; 1000e695
    POP EBX                             ; 1000e696
    RET                                 ; 1000e697
    MOV AX,word ptr [EBP*0x8 + 0x1001796c] ; 1000e698 | DAT_10017af4
        ;   Label: LAB_1000e698
    POP EBP                             ; 1000e6a0
    POP EDI                             ; 1000e6a1
    POP ESI                             ; 1000e6a2
    POP EBX                             ; 1000e6a3
    RET                                 ; 1000e6a4


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_100115b0(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   FUN_10011360 at 1001147d
;
; Referenced Globals:
;   undefined4 DAT_10016d80
;
; Called Functions:
;   FUN_10010cf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 100115b0
        ;   Label: FUN_100115b0
    PUSH ESI                            ; 100115b1
    PUSH EDI                            ; 100115b2
    MOV EDI,dword ptr [0x10016d80]      ; 100115b3 | DAT_10016d80
    CMP dword ptr [EDI],0x0             ; 100115b9
    JZ 0x100115ec                       ; 100115bc
        ;   XREF to: 100115ec (CONDITIONAL_JUMP)  ; LAB_100115ec
    MOV ESI,dword ptr [ESP + 0x14]      ; 100115be
    MOV EBX,dword ptr [ESP + 0x10]      ; 100115c2
    PUSH ESI                            ; 100115c6
        ;   Label: LAB_100115c6
    MOV EAX,dword ptr [EDI]             ; 100115c7
    PUSH EAX                            ; 100115c9
    PUSH EBX                            ; 100115ca
    CALL FUN_10010cf0                   ; 100115cb
        ;   XREF to: 10010cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_10010cf0()
    ADD ESP,0xc                         ; 100115d0
    TEST EAX,EAX                        ; 100115d3
    JNZ 0x100115e4                      ; 100115d5
        ;   XREF to: 100115e4 (CONDITIONAL_JUMP)  ; LAB_100115e4
    MOV EAX,dword ptr [EDI]             ; 100115d7
    MOV AL,byte ptr [EAX + ESI*0x1]     ; 100115d9
    CMP AL,0x3d                         ; 100115dc
    JZ 0x100115fd                       ; 100115de
        ;   XREF to: 100115fd (CONDITIONAL_JUMP)  ; LAB_100115fd
    TEST AL,AL                          ; 100115e0
    JZ 0x100115fd                       ; 100115e2
        ;   XREF to: 100115fd (CONDITIONAL_JUMP)  ; LAB_100115fd
    ADD EDI,0x4                         ; 100115e4
        ;   Label: LAB_100115e4
    CMP dword ptr [EDI],0x0             ; 100115e7
    JNZ 0x100115c6                      ; 100115ea
        ;   XREF to: 100115c6 (CONDITIONAL_JUMP)  ; LAB_100115c6
    MOV EAX,EDI                         ; 100115ec
        ;   Label: LAB_100115ec
    POP EDI                             ; 100115ee
    SUB EAX,dword ptr [0x10016d80]      ; 100115ef | DAT_10016d80
    POP ESI                             ; 100115f5
    SAR EAX,0x2                         ; 100115f6
    POP EBX                             ; 100115f9
    NEG EAX                             ; 100115fa
    RET                                 ; 100115fc
    SUB EDI,dword ptr [0x10016d80]      ; 100115fd | DAT_10016d80
        ;   Label: LAB_100115fd
    SAR EDI,0x2                         ; 10011603
    MOV EAX,EDI                         ; 10011606
    POP EDI                             ; 10011608
    POP ESI                             ; 10011609
    POP EBX                             ; 1001160a
    RET                                 ; 1001160b


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004635e0(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004635e0
        ;   Label: FUN_004635e0
    PUSH ESI                            ; 004635e1
    PUSH EDI                            ; 004635e2
    SUB ESP,0x18                        ; 004635e3
    MOV EAX,dword ptr [ESP + 0x28]      ; 004635e6
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004635ea
    MOV EDX,dword ptr [EAX + 0xd054]    ; 004635ee
    PUSH EDX                            ; 004635f4
    ADD EAX,0x158                       ; 004635f5
    PUSH EAX                            ; 004635fa
    LEA ESI,[ESP + 0x8]                 ; 004635fb
    LEA EDI,[ESP + 0x14]                ; 004635ff
    CALL FUN_0054dcc0                   ; 00463603
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x8]                 ; 00463608
    ADD ESP,0x8                         ; 0046360c
    LEA EAX,[ESP + 0xc]                 ; 0046360f
    MOVSD ES:EDI,ESI                    ; 00463613
    MOVSD ES:EDI,ESI                    ; 00463614
    MOVSD ES:EDI,ESI                    ; 00463615
    CMP EBX,EAX                         ; 00463616
    JNZ 0x00463626                      ; 00463618
        ;   XREF to: 00463626 (CONDITIONAL_JUMP)  ; LAB_00463626
    MOV EAX,0x1                         ; 0046361a
    ADD ESP,0x18                        ; 0046361f
    POP EDI                             ; 00463622
    POP ESI                             ; 00463623
    POP EBX                             ; 00463624
    RET                                 ; 00463625
    MOV EAX,dword ptr [ESP + 0xc]       ; 00463626
        ;   Label: LAB_00463626
    MOV dword ptr [EBX],EAX             ; 0046362a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0046362c
    MOV dword ptr [EBX + 0x4],EAX       ; 00463630
    MOV EAX,dword ptr [ESP + 0x14]      ; 00463633
    MOV dword ptr [EBX + 0x8],EAX       ; 00463637
    MOV EAX,0x1                         ; 0046363a
    ADD ESP,0x18                        ; 0046363f
    POP EDI                             ; 00463642
    POP ESI                             ; 00463643
    POP EBX                             ; 00463644
    RET                                 ; 00463645


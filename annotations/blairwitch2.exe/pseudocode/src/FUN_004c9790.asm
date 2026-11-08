; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004c9790(void)
;
;
; XREF[2]:
;   FUN_004c97e0 at 004c97ef
;   FUN_004c9810 at 004c9820
;
; Referenced Globals:
;   undefined4 DAT_01cbcaf4
;   undefined4 DAT_01cbcaf8
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x01cbcaf4]      ; 004c9790 | DAT_01cbcaf4
        ;   Label: FUN_004c9790
    MOV EAX,ECX                         ; 004c9796
    SHL EAX,0x4                         ; 004c9798
    ADD EAX,ECX                         ; 004c979b
    SHL EAX,0x2                         ; 004c979d
    INC ECX                             ; 004c97a0
    ADD EAX,0x1cbcafc                   ; 004c97a1
    CMP ECX,0x7d0                       ; 004c97a6
    JL 0x004c97b0                       ; 004c97ac
        ;   XREF to: 004c97b0 (CONDITIONAL_JUMP)  ; LAB_004c97b0
    XOR ECX,ECX                         ; 004c97ae
    MOV EDX,dword ptr [0x01cbcaf8]      ; 004c97b0 | DAT_01cbcaf8
        ;   Label: LAB_004c97b0
    CMP EDX,0x7d0                       ; 004c97b6
    JL 0x004c97c5                       ; 004c97bc
        ;   XREF to: 004c97c5 (CONDITIONAL_JUMP)  ; LAB_004c97c5
    MOV dword ptr [0x01cbcaf4],ECX      ; 004c97be | DAT_01cbcaf4
    RET                                 ; 004c97c4
    PUSH EBX                            ; 004c97c5
        ;   Label: LAB_004c97c5
    LEA EBX,[EDX + 0x1]                 ; 004c97c6
    MOV dword ptr [0x01cbcaf8],EBX      ; 004c97c9 | DAT_01cbcaf8
    POP EBX                             ; 004c97cf
    MOV dword ptr [0x01cbcaf4],ECX      ; 004c97d0 | DAT_01cbcaf4
    RET                                 ; 004c97d6


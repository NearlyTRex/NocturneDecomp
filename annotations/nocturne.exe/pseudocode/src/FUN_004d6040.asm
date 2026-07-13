; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d6040(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005b80f0
;
; Called Functions:
;   FUN_0048ae90
;   FUN_004f6170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6040
        ;   Label: FUN_004d6040
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d6041
    PUSH dword ptr [ESP + 0xc]          ; 004d6045
    PUSH EBX                            ; 004d6049
    CALL FUN_004f6170                   ; 004d604a
        ;   XREF to: 004f6170 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6170()
    MOV EDX,dword ptr [EBX + 0x2cc]     ; 004d604f
    ADD ESP,0x8                         ; 004d6055
    CMP EDX,0x3                         ; 004d6058
    JZ 0x004d6062                       ; 004d605b
        ;   XREF to: 004d6062 (CONDITIONAL_JUMP)  ; LAB_004d6062
    CMP EDX,0x4                         ; 004d605d
    JNZ 0x004d607b                      ; 004d6060
        ;   XREF to: 004d607b (CONDITIONAL_JUMP)  ; LAB_004d607b
    FLD float ptr [EBX + 0x720]         ; 004d6062
        ;   Label: LAB_004d6062
    FSUB float ptr [ESP + 0xc]          ; 004d6068
    FST float ptr [EBX + 0x720]         ; 004d606c
    FLDZ                                ; 004d6072
    FCOMPP                              ; 004d6074
    FNSTSW AX                           ; 004d6076
    SAHF                                ; 004d6078
    JA 0x004d607d                       ; 004d6079
        ;   XREF to: 004d607d (CONDITIONAL_JUMP)  ; LAB_004d607d
    POP EBX                             ; 004d607b
        ;   Label: LAB_004d607b
    RET                                 ; 004d607c
    PUSH 0xffff                         ; 004d607d
        ;   Label: LAB_004d607d
    PUSH 0x0                            ; 004d6082
    PUSH 0x10000                        ; 004d6084
    PUSH 0x4000                         ; 004d6089
    PUSH 0x0                            ; 004d608e
    ADD EBX,0x20                        ; 004d6090
    PUSH EBX                            ; 004d6093
    MOV dword ptr [EBX + 0x700],0x3dcccccd ; 004d6094
    MOV EBX,dword ptr [0x005b80f0]      ; 004d609e | DAT_005b80f0
    PUSH EBX                            ; 004d60a4
    CALL FUN_0048ae90                   ; 004d60a5
        ;   XREF to: 0048ae90 (UNCONDITIONAL_CALL)  ; undefined FUN_0048ae90()
    ADD ESP,0x1c                        ; 004d60aa
    POP EBX                             ; 004d60ad
    RET                                 ; 004d60ae


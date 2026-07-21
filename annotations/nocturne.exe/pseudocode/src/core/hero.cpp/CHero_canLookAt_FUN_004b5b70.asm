; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_hero_cpp_CHero_canLookAt_FUN_004b5b70(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005858e3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5b70
        ;   Label: core_hero.cpp_CHero_canLookAt_FUN_004b5b70
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b5b71
    PUSH EBX                            ; 004b5b75
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004b5b76
    CALL dword ptr [EAX + 0x104]        ; 004b5b7c
    ADD ESP,0x4                         ; 004b5b82
    CMP EAX,0x1                         ; 004b5b85
    JG 0x004b5c21                       ; 004b5b88
        ;   XREF to: 004b5c21 (CONDITIONAL_JUMP)  ; LAB_004b5c21
    JZ 0x004b5c23                       ; 004b5b8e
        ;   XREF to: 004b5c23 (CONDITIONAL_JUMP)  ; LAB_004b5c23
    CMP dword ptr [EBX + 0xbc94],0x0    ; 004b5b94
    JNZ 0x004b5c25                      ; 004b5b9b
        ;   XREF to: 004b5c25 (CONDITIONAL_JUMP)  ; LAB_004b5c25
    CMP dword ptr [EBX + 0xbc98],0x0    ; 004b5ba1
    JNZ 0x004b5c25                      ; 004b5ba8
        ;   XREF to: 004b5c25 (CONDITIONAL_JUMP)  ; LAB_004b5c25
    CMP dword ptr [EBX + 0xbca0],0x0    ; 004b5bae
    JNZ 0x004b5c25                      ; 004b5bb5
        ;   XREF to: 004b5c25 (CONDITIONAL_JUMP)  ; LAB_004b5c25
    CMP dword ptr [EBX + 0xbca4],0x0    ; 004b5bbb
    JNZ 0x004b5c25                      ; 004b5bc2
        ;   XREF to: 004b5c25 (CONDITIONAL_JUMP)  ; LAB_004b5c25
    CMP dword ptr [EBX + 0xbca8],0x0    ; 004b5bc4
    JNZ 0x004b5c25                      ; 004b5bcb
        ;   XREF to: 004b5c25 (CONDITIONAL_JUMP)  ; LAB_004b5c25
    CMP dword ptr [EBX + 0xbcac],0x0    ; 004b5bcd
    JNZ 0x004b5c25                      ; 004b5bd4
        ;   XREF to: 004b5c25 (CONDITIONAL_JUMP)  ; LAB_004b5c25
    CMP dword ptr [EBX + 0xbcb0],0x0    ; 004b5bd6
    JNZ 0x004b5c25                      ; 004b5bdd
        ;   XREF to: 004b5c25 (CONDITIONAL_JUMP)  ; LAB_004b5c25
    FLD float ptr [EBX + 0xbcb4]        ; 004b5bdf
    FABS                                ; 004b5be5
    FCOMP double ptr [0x005858e3]       ; 004b5be7 | DAT_005858e3
    FNSTSW AX                           ; 004b5bed
    SAHF                                ; 004b5bef
    JA 0x004b5c25                       ; 004b5bf0
        ;   XREF to: 004b5c25 (CONDITIONAL_JUMP)  ; LAB_004b5c25
    FLD float ptr [EBX + 0xbcb8]        ; 004b5bf2
    FABS                                ; 004b5bf8
    FCOMP double ptr [0x005858e3]       ; 004b5bfa | DAT_005858e3
    FNSTSW AX                           ; 004b5c00
    SAHF                                ; 004b5c02
    JA 0x004b5c25                       ; 004b5c03
        ;   XREF to: 004b5c25 (CONDITIONAL_JUMP)  ; LAB_004b5c25
    FLD float ptr [EBX + 0xbcbc]        ; 004b5c05
    FABS                                ; 004b5c0b
    FCOMP double ptr [0x005858e3]       ; 004b5c0d | DAT_005858e3
    FNSTSW AX                           ; 004b5c13
    SAHF                                ; 004b5c15
    JA 0x004b5c25                       ; 004b5c16
        ;   XREF to: 004b5c25 (CONDITIONAL_JUMP)  ; LAB_004b5c25
    CMP dword ptr [EBX + 0x2408],0x0    ; 004b5c18
    JZ 0x004b5c25                       ; 004b5c1f
        ;   XREF to: 004b5c25 (CONDITIONAL_JUMP)  ; LAB_004b5c25
    XOR EAX,EAX                         ; 004b5c21
        ;   Label: LAB_004b5c21
    POP EBX                             ; 004b5c23
        ;   Label: LAB_004b5c23
    RET                                 ; 004b5c24
    MOV EAX,0x1                         ; 004b5c25
        ;   Label: LAB_004b5c25
    POP EBX                             ; 004b5c2a
    RET                                 ; 004b5c2b


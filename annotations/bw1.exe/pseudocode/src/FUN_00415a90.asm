; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00415a90(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fc8d0
;
; Called Functions:
;   FUN_00408730
;   FUN_0040ee30
;   FUN_00441ca0
;   FUN_005673f0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415a90
        ;   Label: FUN_00415a90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00415a91
    TEST byte ptr [ESP + 0xc],0x4       ; 00415a95
    JNZ 0x00415aed                      ; 00415a9a
        ;   XREF to: 00415aed (CONDITIONAL_JUMP)  ; LAB_00415aed
    PUSH 0x0                            ; 00415a9c
    ADD EBX,0x35dc                      ; 00415a9e
    PUSH EBX                            ; 00415aa4
    CALL FUN_0040ee30                   ; 00415aa5
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 00415aaa
    PUSH 0x0                            ; 00415aad
    SUB EAX,0x93c                       ; 00415aaf
    PUSH EAX                            ; 00415ab4
    CALL FUN_00441ca0                   ; 00415ab5
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 00415aba
    PUSH 0x0                            ; 00415abd
    SUB EAX,0x2b48                      ; 00415abf
    PUSH EAX                            ; 00415ac4
    CALL FUN_005673f0                   ; 00415ac5
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 00415aca
    PUSH 0x1                            ; 00415acd
    LEA EBX,[EAX + 0xfffffea8]          ; 00415acf
    PUSH EBX                            ; 00415ad5
    CALL FUN_00408730                   ; 00415ad6
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 00415adb
    MOV DL,byte ptr [ESP + 0xc]         ; 00415ade
    MOV EBX,EAX                         ; 00415ae2
    TEST DL,0x2                         ; 00415ae4
    JNZ 0x00415b08                      ; 00415ae7
        ;   XREF to: 00415b08 (CONDITIONAL_JUMP)  ; LAB_00415b08
    MOV EAX,EBX                         ; 00415ae9
    POP EBX                             ; 00415aeb
    RET                                 ; 00415aec
    PUSH 0x5fc8d0                       ; 00415aed | DAT_005fc8d0
        ;   Label: LAB_00415aed
    PUSH EBX                            ; 00415af2
    CALL FUN_005c030f                   ; 00415af3
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00415af8
    PUSH EAX                            ; 00415afb
    CALL FUN_005c0336                   ; 00415afc
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00415b01
    MOV EAX,EBX                         ; 00415b04
    POP EBX                             ; 00415b06
    RET                                 ; 00415b07
    PUSH EAX                            ; 00415b08
        ;   Label: LAB_00415b08
    CALL FUN_005c0344                   ; 00415b09
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00415b0e
    MOV EAX,EBX                         ; 00415b11
    POP EBX                             ; 00415b13
    RET                                 ; 00415b14


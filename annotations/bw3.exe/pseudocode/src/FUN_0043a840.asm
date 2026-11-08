; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043a840(undefined4 param_1,undefined4 param_2)
;
;
; XREF[48]:
;   FUN_00403aa0 at 00403b21
;   FUN_00403b70 at 00403bca
;   FUN_00403c90 at 00403ce8
;   FUN_00403d30 at 00403d82
;   FUN_00403e70 at 00403f42
;   FUN_00404070 at 004040cc
;   FUN_00404120 at 004042f6
;   FUN_00404370 at 004043c2
;   FUN_00404560 at 004046c4
;   FUN_004046e0 at 004048b5
;   ... and 38 more
;
; Referenced Globals:
;   undefined4 DAT_005fba40
;   undefined4 DAT_007e3e88
;   undefined4 DAT_007e3e8c
;
; Called Functions:
;   FUN_00439da0
;   FUN_00515e80
;   FUN_005163b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043a840
        ;   Label: FUN_0043a840
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043a841
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043a845
    CMP dword ptr [0x005fba40],0x0      ; 0043a849 | DAT_005fba40
    JZ 0x0043a86d                       ; 0043a850
        ;   XREF to: 0043a86d (CONDITIONAL_JUMP)  ; LAB_0043a86d
    PUSH EDX                            ; 0043a852
    PUSH EAX                            ; 0043a853
    CALL FUN_00439da0                   ; 0043a854
        ;   XREF to: 00439da0 (UNCONDITIONAL_CALL)  ; undefined FUN_00439da0()
    ADD ESP,0x8                         ; 0043a859
    TEST EAX,EAX                        ; 0043a85c
    JNZ 0x0043a86b                      ; 0043a85e
        ;   XREF to: 0043a86b (CONDITIONAL_JUMP)  ; LAB_0043a86b
    MOV EBX,dword ptr [0x007e3e88]      ; 0043a860 | DAT_007e3e88
    CMP EBX,0x2                         ; 0043a866
    JG 0x0043a879                       ; 0043a869
        ;   XREF to: 0043a879 (CONDITIONAL_JUMP)  ; LAB_0043a879
    POP EBX                             ; 0043a86b
        ;   Label: LAB_0043a86b
    RET                                 ; 0043a86c
    PUSH EAX                            ; 0043a86d
        ;   Label: LAB_0043a86d
    PUSH EDX                            ; 0043a86e
    CALL FUN_005163b0                   ; 0043a86f
        ;   XREF to: 005163b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005163b0()
    ADD ESP,0x8                         ; 0043a874
    POP EBX                             ; 0043a877
    RET                                 ; 0043a878
    PUSH EBX                            ; 0043a879
        ;   Label: LAB_0043a879
    PUSH 0x7e3e8c                       ; 0043a87a | DAT_007e3e8c
    CALL FUN_00515e80                   ; 0043a87f
        ;   XREF to: 00515e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00515e80()
    ADD ESP,0x8                         ; 0043a884
    POP EBX                             ; 0043a887
    RET                                 ; 0043a888


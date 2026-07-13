; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00540a90(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005a2890
;
; Called Functions:
;   FUN_004b4800
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540a90
        ;   Label: FUN_00540a90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00540a91
    TEST byte ptr [ESP + 0xc],0x4       ; 00540a95
    JNZ 0x00540ab6                      ; 00540a9a
        ;   XREF to: 00540ab6 (CONDITIONAL_JUMP)  ; LAB_00540ab6
    PUSH 0x1                            ; 00540a9c
    PUSH EBX                            ; 00540a9e
    CALL FUN_004b4800                   ; 00540a9f
        ;   XREF to: 004b4800 (UNCONDITIONAL_CALL)  ; undefined FUN_004b4800()
    ADD ESP,0x8                         ; 00540aa4
    MOV DL,byte ptr [ESP + 0xc]         ; 00540aa7
    MOV EBX,EAX                         ; 00540aab
    TEST DL,0x2                         ; 00540aad
    JNZ 0x00540ad1                      ; 00540ab0
        ;   XREF to: 00540ad1 (CONDITIONAL_JUMP)  ; LAB_00540ad1
    MOV EAX,EBX                         ; 00540ab2
    POP EBX                             ; 00540ab4
    RET                                 ; 00540ab5
    PUSH 0x5a2890                       ; 00540ab6 | DAT_005a2890
        ;   Label: LAB_00540ab6
    PUSH EBX                            ; 00540abb
    CALL FUN_0056445f                   ; 00540abc
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 00540ac1
    PUSH EAX                            ; 00540ac4
    CALL FUN_00564486                   ; 00540ac5
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 00540aca
    MOV EAX,EBX                         ; 00540acd
    POP EBX                             ; 00540acf
    RET                                 ; 00540ad0
    PUSH EAX                            ; 00540ad1
        ;   Label: LAB_00540ad1
    CALL FUN_00564494                   ; 00540ad2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 00540ad7
    MOV EAX,EBX                         ; 00540ada
    POP EBX                             ; 00540adc
    RET                                 ; 00540add


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00509a90(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_006038f0
;
; Called Functions:
;   FUN_005ad5d0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509a90
        ;   Label: FUN_00509a90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00509a91
    TEST byte ptr [ESP + 0xc],0x4       ; 00509a95
    JNZ 0x00509ab6                      ; 00509a9a
        ;   XREF to: 00509ab6 (CONDITIONAL_JUMP)  ; LAB_00509ab6
    PUSH 0x1                            ; 00509a9c
    PUSH EBX                            ; 00509a9e
    CALL FUN_005ad5d0                   ; 00509a9f
        ;   XREF to: 005ad5d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad5d0()
    ADD ESP,0x8                         ; 00509aa4
    MOV DL,byte ptr [ESP + 0xc]         ; 00509aa7
    MOV EBX,EAX                         ; 00509aab
    TEST DL,0x2                         ; 00509aad
    JNZ 0x00509ad1                      ; 00509ab0
        ;   XREF to: 00509ad1 (CONDITIONAL_JUMP)  ; LAB_00509ad1
    MOV EAX,EBX                         ; 00509ab2
    POP EBX                             ; 00509ab4
    RET                                 ; 00509ab5
    PUSH 0x6038f0                       ; 00509ab6 | DAT_006038f0
        ;   Label: LAB_00509ab6
    PUSH EBX                            ; 00509abb
    CALL FUN_005c030f                   ; 00509abc
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00509ac1
    PUSH EAX                            ; 00509ac4
    CALL FUN_005c0336                   ; 00509ac5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00509aca
    MOV EAX,EBX                         ; 00509acd
    POP EBX                             ; 00509acf
    RET                                 ; 00509ad0
    PUSH EAX                            ; 00509ad1
        ;   Label: LAB_00509ad1
    CALL FUN_005c0344                   ; 00509ad2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00509ad7
    MOV EAX,EBX                         ; 00509ada
    POP EBX                             ; 00509adc
    RET                                 ; 00509add


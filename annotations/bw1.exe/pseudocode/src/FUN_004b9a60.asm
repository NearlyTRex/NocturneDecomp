; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004b9a60(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00600830
;
; Called Functions:
;   FUN_005ad5d0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b9a60
        ;   Label: FUN_004b9a60
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b9a61
    TEST byte ptr [ESP + 0xc],0x4       ; 004b9a65
    JNZ 0x004b9a86                      ; 004b9a6a
        ;   XREF to: 004b9a86 (CONDITIONAL_JUMP)  ; LAB_004b9a86
    PUSH 0x1                            ; 004b9a6c
    PUSH EBX                            ; 004b9a6e
    CALL FUN_005ad5d0                   ; 004b9a6f
        ;   XREF to: 005ad5d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad5d0()
    ADD ESP,0x8                         ; 004b9a74
    MOV DL,byte ptr [ESP + 0xc]         ; 004b9a77
    MOV EBX,EAX                         ; 004b9a7b
    TEST DL,0x2                         ; 004b9a7d
    JNZ 0x004b9aa1                      ; 004b9a80
        ;   XREF to: 004b9aa1 (CONDITIONAL_JUMP)  ; LAB_004b9aa1
    MOV EAX,EBX                         ; 004b9a82
    POP EBX                             ; 004b9a84
    RET                                 ; 004b9a85
    PUSH 0x600830                       ; 004b9a86 | DAT_00600830
        ;   Label: LAB_004b9a86
    PUSH EBX                            ; 004b9a8b
    CALL FUN_005c030f                   ; 004b9a8c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 004b9a91
    PUSH EAX                            ; 004b9a94
    CALL FUN_005c0336                   ; 004b9a95
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 004b9a9a
    MOV EAX,EBX                         ; 004b9a9d
    POP EBX                             ; 004b9a9f
    RET                                 ; 004b9aa0
    PUSH EAX                            ; 004b9aa1
        ;   Label: LAB_004b9aa1
    CALL FUN_005c0344                   ; 004b9aa2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 004b9aa7
    MOV EAX,EBX                         ; 004b9aaa
    POP EBX                             ; 004b9aac
    RET                                 ; 004b9aad


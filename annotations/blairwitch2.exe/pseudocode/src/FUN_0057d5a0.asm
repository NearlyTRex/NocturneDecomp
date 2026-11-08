; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0057d5a0(undefined4 *param_1,byte param_2)
;
;
; XREF[2]:
;   FUN_00433ff0 at 0043404f
;   FUN_00434070 at 004340cf
;
; Referenced Globals:
;   undefined4 DAT_005f43b0
;   undefined1* PTR_FUN_005fd424 = 0057d5a0
;
; Called Functions:
;   FUN_0057b9d0
;   FUN_0057d7b0
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d5a0
        ;   Label: FUN_0057d5a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057d5a1
    TEST byte ptr [ESP + 0xc],0x4       ; 0057d5a5
    JNZ 0x0057d5d5                      ; 0057d5aa
        ;   XREF to: 0057d5d5 (CONDITIONAL_JUMP)  ; LAB_0057d5d5
    PUSH EBX                            ; 0057d5ac
    MOV dword ptr [EBX],0x5fd424        ; 0057d5ad | PTR_FUN_005fd424
    CALL FUN_0057d7b0                   ; 0057d5b3
        ;   XREF to: 0057d7b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d7b0()
    ADD ESP,0x4                         ; 0057d5b8
    PUSH 0x1                            ; 0057d5bb
    PUSH EBX                            ; 0057d5bd
    CALL FUN_0057b9d0                   ; 0057d5be
        ;   XREF to: 0057b9d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057b9d0()
    ADD ESP,0x8                         ; 0057d5c3
    MOV DL,byte ptr [ESP + 0xc]         ; 0057d5c6
    MOV EBX,EAX                         ; 0057d5ca
    TEST DL,0x2                         ; 0057d5cc
    JNZ 0x0057d5f0                      ; 0057d5cf
        ;   XREF to: 0057d5f0 (CONDITIONAL_JUMP)  ; LAB_0057d5f0
    MOV EAX,EBX                         ; 0057d5d1
    POP EBX                             ; 0057d5d3
    RET                                 ; 0057d5d4
    PUSH 0x5f43b0                       ; 0057d5d5 | DAT_005f43b0
        ;   Label: LAB_0057d5d5
    PUSH EBX                            ; 0057d5da
    CALL FUN_005b7fa7                   ; 0057d5db
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0057d5e0
    PUSH EAX                            ; 0057d5e3
    CALL FUN_005b7fce                   ; 0057d5e4
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0057d5e9
    MOV EAX,EBX                         ; 0057d5ec
    POP EBX                             ; 0057d5ee
    RET                                 ; 0057d5ef
    PUSH EAX                            ; 0057d5f0
        ;   Label: LAB_0057d5f0
    CALL FUN_005b7fdc                   ; 0057d5f1
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0057d5f6
    MOV EAX,EBX                         ; 0057d5f9
    POP EBX                             ; 0057d5fb
    RET                                 ; 0057d5fc


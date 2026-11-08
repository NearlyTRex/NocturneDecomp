; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00410bb0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2c20
;
; Called Functions:
;   FUN_00589ae0
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410bb0
        ;   Label: FUN_00410bb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00410bb1
    TEST byte ptr [ESP + 0xc],0x4       ; 00410bb5
    JNZ 0x00410bd6                      ; 00410bba
        ;   XREF to: 00410bd6 (CONDITIONAL_JUMP)  ; LAB_00410bd6
    PUSH 0x1                            ; 00410bbc
    PUSH EBX                            ; 00410bbe
    CALL FUN_00589ae0                   ; 00410bbf
        ;   XREF to: 00589ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00589ae0()
    ADD ESP,0x8                         ; 00410bc4
    MOV DL,byte ptr [ESP + 0xc]         ; 00410bc7
    MOV EBX,EAX                         ; 00410bcb
    TEST DL,0x2                         ; 00410bcd
    JNZ 0x00410bf1                      ; 00410bd0
        ;   XREF to: 00410bf1 (CONDITIONAL_JUMP)  ; LAB_00410bf1
    MOV EAX,EBX                         ; 00410bd2
    POP EBX                             ; 00410bd4
    RET                                 ; 00410bd5
    PUSH 0x5f2c20                       ; 00410bd6 | DAT_005f2c20
        ;   Label: LAB_00410bd6
    PUSH EBX                            ; 00410bdb
    CALL FUN_005b7fa7                   ; 00410bdc
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00410be1
    PUSH EAX                            ; 00410be4
    CALL FUN_005b7fce                   ; 00410be5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 00410bea
    MOV EAX,EBX                         ; 00410bed
    POP EBX                             ; 00410bef
    RET                                 ; 00410bf0
    PUSH EAX                            ; 00410bf1
        ;   Label: LAB_00410bf1
    CALL FUN_005b7fdc                   ; 00410bf2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 00410bf7
    MOV EAX,EBX                         ; 00410bfa
    POP EBX                             ; 00410bfc
    RET                                 ; 00410bfd


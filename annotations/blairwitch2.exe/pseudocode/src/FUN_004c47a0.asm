; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004c47a0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f7a40
;
; Called Functions:
;   FUN_00408930
;   FUN_0040f2b0
;   FUN_00544d50
;   FUN_0059df70
;   FUN_005b1480
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c47a0
        ;   Label: FUN_004c47a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c47a1
    TEST byte ptr [ESP + 0xc],0x4       ; 004c47a5
    JNZ 0x004c480d                      ; 004c47aa
        ;   XREF to: 004c480d (CONDITIONAL_JUMP)  ; LAB_004c480d
    PUSH 0x0                            ; 004c47ac
    ADD EBX,0x3a20                      ; 004c47ae
    PUSH EBX                            ; 004c47b4
    CALL FUN_0040f2b0                   ; 004c47b5
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 004c47ba
    PUSH 0x0                            ; 004c47bd
    SUB EAX,0x9c8                       ; 004c47bf
    PUSH EAX                            ; 004c47c4
    CALL FUN_0059df70                   ; 004c47c5
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 004c47ca
    PUSH 0x0                            ; 004c47cd
    SUB EAX,0x34c                       ; 004c47cf
    PUSH EAX                            ; 004c47d4
    CALL FUN_005b1480                   ; 004c47d5
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 004c47da
    PUSH 0x0                            ; 004c47dd
    SUB EAX,0x2a58                      ; 004c47df
    PUSH EAX                            ; 004c47e4
    CALL FUN_00544d50                   ; 004c47e5
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 004c47ea
    PUSH 0x1                            ; 004c47ed
    LEA EBX,[EAX + 0xfffffd4c]          ; 004c47ef
    PUSH EBX                            ; 004c47f5
    CALL FUN_00408930                   ; 004c47f6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 004c47fb
    MOV DL,byte ptr [ESP + 0xc]         ; 004c47fe
    MOV EBX,EAX                         ; 004c4802
    TEST DL,0x2                         ; 004c4804
    JNZ 0x004c4828                      ; 004c4807
        ;   XREF to: 004c4828 (CONDITIONAL_JUMP)  ; LAB_004c4828
    MOV EAX,EBX                         ; 004c4809
    POP EBX                             ; 004c480b
    RET                                 ; 004c480c
    PUSH 0x5f7a40                       ; 004c480d | DAT_005f7a40
        ;   Label: LAB_004c480d
    PUSH EBX                            ; 004c4812
    CALL FUN_005b7fa7                   ; 004c4813
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 004c4818
    PUSH EAX                            ; 004c481b
    CALL FUN_005b7fce                   ; 004c481c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004c4821
    MOV EAX,EBX                         ; 004c4824
    POP EBX                             ; 004c4826
    RET                                 ; 004c4827
    PUSH EAX                            ; 004c4828
        ;   Label: LAB_004c4828
    CALL FUN_005b7fdc                   ; 004c4829
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004c482e
    MOV EAX,EBX                         ; 004c4831
    POP EBX                             ; 004c4833
    RET                                 ; 004c4834


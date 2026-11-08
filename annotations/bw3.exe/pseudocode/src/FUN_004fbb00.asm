; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004fbb00(int param_1,uint param_2)
;
;
; XREF[1]:
;   FUN_0054bf80 at 0054bf9f
;
; Referenced Globals:
;   void* PTR_FUN_005e2c84 = 004fbb00
;   undefined4 DAT_005e2c90
;
; Called Functions:
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fbb00
        ;   Label: FUN_004fbb00
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fbb01
    MOV EAX,dword ptr [ESP + 0xc]       ; 004fbb05
    TEST AL,0x4                         ; 004fbb09
    JNZ 0x004fbb1c                      ; 004fbb0b
        ;   XREF to: 004fbb1c (CONDITIONAL_JUMP)  ; LAB_004fbb1c
    MOV dword ptr [EBX + 0x50],0x5e2c84 ; 004fbb0d | PTR_FUN_005e2c84
    TEST AL,0x2                         ; 004fbb14
    JNZ 0x004fbb37                      ; 004fbb16
        ;   XREF to: 004fbb37 (CONDITIONAL_JUMP)  ; LAB_004fbb37
    MOV EAX,EBX                         ; 004fbb18
    POP EBX                             ; 004fbb1a
    RET                                 ; 004fbb1b
    PUSH 0x5e2c90                       ; 004fbb1c | DAT_005e2c90
        ;   Label: LAB_004fbb1c
    PUSH EBX                            ; 004fbb21
    CALL FUN_005a308f                   ; 004fbb22
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004fbb27
    PUSH EAX                            ; 004fbb2a
    CALL FUN_005a30b6                   ; 004fbb2b
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004fbb30
    MOV EAX,EBX                         ; 004fbb33
    POP EBX                             ; 004fbb35
    RET                                 ; 004fbb36
    PUSH EBX                            ; 004fbb37
        ;   Label: LAB_004fbb37
    CALL FUN_005a30c4                   ; 004fbb38
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004fbb3d
    MOV EAX,EBX                         ; 004fbb40
    POP EBX                             ; 004fbb42
    RET                                 ; 004fbb43


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00480d40(int param_1,byte param_2)
;
;
; XREF[4]:
;   FUN_0047c760 at 0047c7dc
;   FUN_004820b0 at 00482104
;   FUN_004a32c0 at 004a32cc
;   FUN_00521600 at 00521614
;
; Referenced Globals:
;   undefined1* PTR_FUN_005f5d14 = 00480d40
;   undefined4 DAT_005f5d90
;
; Called Functions:
;   FUN_00480e10
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480d40
        ;   Label: FUN_00480d40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00480d41
    TEST byte ptr [ESP + 0xc],0x4       ; 00480d45
    JNZ 0x00480d67                      ; 00480d4a
        ;   XREF to: 00480d67 (CONDITIONAL_JUMP)  ; LAB_00480d67
    PUSH EBX                            ; 00480d4c
    MOV dword ptr [EBX + 0xc],0x5f5d14  ; 00480d4d | PTR_FUN_005f5d14
    CALL FUN_00480e10                   ; 00480d54
        ;   XREF to: 00480e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00480e10()
    ADD ESP,0x4                         ; 00480d59
    TEST byte ptr [ESP + 0xc],0x2       ; 00480d5c
    JNZ 0x00480d82                      ; 00480d61
        ;   XREF to: 00480d82 (CONDITIONAL_JUMP)  ; LAB_00480d82
    MOV EAX,EBX                         ; 00480d63
    POP EBX                             ; 00480d65
    RET                                 ; 00480d66
    PUSH 0x5f5d90                       ; 00480d67 | DAT_005f5d90
        ;   Label: LAB_00480d67
    PUSH EBX                            ; 00480d6c
    CALL FUN_005b7fa7                   ; 00480d6d
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00480d72
    PUSH EAX                            ; 00480d75
    CALL FUN_005b7fce                   ; 00480d76
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 00480d7b
    MOV EAX,EBX                         ; 00480d7e
    POP EBX                             ; 00480d80
    RET                                 ; 00480d81
    PUSH EBX                            ; 00480d82
        ;   Label: LAB_00480d82
    CALL FUN_005b7fdc                   ; 00480d83
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 00480d88
    MOV EAX,EBX                         ; 00480d8b
    POP EBX                             ; 00480d8d
    RET                                 ; 00480d8e


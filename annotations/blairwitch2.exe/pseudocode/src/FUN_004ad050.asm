; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ad050(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f72f0
;
; Called Functions:
;   FUN_00408930
;   FUN_00438a70
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ad050
        ;   Label: FUN_004ad050
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ad051
    TEST byte ptr [ESP + 0xc],0x4       ; 004ad055
    JNZ 0x004ad08d                      ; 004ad05a
        ;   XREF to: 004ad08d (CONDITIONAL_JUMP)  ; LAB_004ad08d
    PUSH 0x0                            ; 004ad05c
    ADD EBX,0x45c                       ; 004ad05e
    PUSH EBX                            ; 004ad064
    CALL FUN_00438a70                   ; 004ad065
        ;   XREF to: 00438a70 (UNCONDITIONAL_CALL)  ; undefined FUN_00438a70()
    ADD ESP,0x8                         ; 004ad06a
    PUSH 0x1                            ; 004ad06d
    LEA EBX,[EAX + 0xfffffba4]          ; 004ad06f
    PUSH EBX                            ; 004ad075
    CALL FUN_00408930                   ; 004ad076
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 004ad07b
    MOV DL,byte ptr [ESP + 0xc]         ; 004ad07e
    MOV EBX,EAX                         ; 004ad082
    TEST DL,0x2                         ; 004ad084
    JNZ 0x004ad0a8                      ; 004ad087
        ;   XREF to: 004ad0a8 (CONDITIONAL_JUMP)  ; LAB_004ad0a8
    MOV EAX,EBX                         ; 004ad089
    POP EBX                             ; 004ad08b
    RET                                 ; 004ad08c
    PUSH 0x5f72f0                       ; 004ad08d | DAT_005f72f0
        ;   Label: LAB_004ad08d
    PUSH EBX                            ; 004ad092
    CALL FUN_005b7fa7                   ; 004ad093
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 004ad098
    PUSH EAX                            ; 004ad09b
    CALL FUN_005b7fce                   ; 004ad09c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004ad0a1
    MOV EAX,EBX                         ; 004ad0a4
    POP EBX                             ; 004ad0a6
    RET                                 ; 004ad0a7
    PUSH EAX                            ; 004ad0a8
        ;   Label: LAB_004ad0a8
    CALL FUN_005b7fdc                   ; 004ad0a9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004ad0ae
    MOV EAX,EBX                         ; 004ad0b1
    POP EBX                             ; 004ad0b3
    RET                                 ; 004ad0b4


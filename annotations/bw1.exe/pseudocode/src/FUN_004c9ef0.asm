; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c9ef0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_objectToPickUp_005e1163+1
;   TerminatedCString s_doorToOpen_005e1173
;   TerminatedCString s_leverToPull_005e117e
;   TerminatedCString s_ladderToClimb_005e118a
;   TerminatedCString s_lhCarryObject_005e1198
;   TerminatedCString s_rhCarryObject_005e11a6
;   undefined4 DAT_0061d884
;
; Called Functions:
;   FUN_0040b6f0
;   FUN_004eab00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9ef0
        ;   Label: FUN_004c9ef0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c9ef1
    PUSH EBX                            ; 004c9ef5
    CALL FUN_004eab00                   ; 004c9ef6
        ;   XREF to: 004eab00 (UNCONDITIONAL_CALL)  ; undefined FUN_004eab00()
    MOV EDX,dword ptr [0x0061d884]      ; 004c9efb | DAT_0061d884
    ADD ESP,0x4                         ; 004c9f01
    CMP EDX,0x2                         ; 004c9f04
    JL 0x004c9f5e                       ; 004c9f07
        ;   XREF to: 004c9f5e (CONDITIONAL_JUMP)  ; LAB_004c9f5e
    CMP EDX,0x3                         ; 004c9f09
    JG 0x004c9f5e                       ; 004c9f0c
        ;   XREF to: 004c9f5e (CONDITIONAL_JUMP)  ; LAB_004c9f5e
    PUSH 0x5e1164                       ; 004c9f0e | s_objectToPickUp_005e1163+1
    LEA EAX,[EBX + 0x1ff78]             ; 004c9f13
    PUSH EAX                            ; 004c9f19
    CALL FUN_0040b6f0                   ; 004c9f1a
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 004c9f1f
    PUSH 0x5e1173                       ; 004c9f22 | = "doorToOpen"
    LEA EAX,[EBX + 0x1ff74]             ; 004c9f27
    PUSH EAX                            ; 004c9f2d
    CALL FUN_0040b6f0                   ; 004c9f2e
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 004c9f33
    PUSH 0x5e117e                       ; 004c9f36 | = "leverToPull"
    LEA EAX,[EBX + 0x1ff80]             ; 004c9f3b
    PUSH EAX                            ; 004c9f41
    CALL FUN_0040b6f0                   ; 004c9f42
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 004c9f47
    PUSH 0x5e118a                       ; 004c9f4a | = "ladderToClimb"
    LEA EAX,[EBX + 0x1ff84]             ; 004c9f4f
    PUSH EAX                            ; 004c9f55
    CALL FUN_0040b6f0                   ; 004c9f56
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 004c9f5b
    CMP dword ptr [0x0061d884],0x2      ; 004c9f5e | DAT_0061d884
        ;   Label: LAB_004c9f5e
    JZ 0x004c9f69                       ; 004c9f65
        ;   XREF to: 004c9f69 (CONDITIONAL_JUMP)  ; LAB_004c9f69
    POP EBX                             ; 004c9f67
    RET                                 ; 004c9f68
    PUSH 0x5e1198                       ; 004c9f69 | = "lhCarryObject"
        ;   Label: LAB_004c9f69
    LEA EAX,[EBX + 0x25b0]              ; 004c9f6e
    PUSH EAX                            ; 004c9f74
    CALL FUN_0040b6f0                   ; 004c9f75
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 004c9f7a
    PUSH 0x5e11a6                       ; 004c9f7d | = "rhCarryObject"
    ADD EBX,0x2628                      ; 004c9f82
    PUSH EBX                            ; 004c9f88
    CALL FUN_0040b6f0                   ; 004c9f89
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 004c9f8e
    POP EBX                             ; 004c9f91
    RET                                 ; 004c9f92


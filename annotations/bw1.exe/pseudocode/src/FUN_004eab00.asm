; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004eab00(int param_1)
;
; Local Variables:
; undefined        Stack[-0xd4]:1  local_d4
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0xc]:1  local_c
;
; XREF[10]:
;   FUN_00410180 at 00410186
;   FUN_004451a0 at 004451a5
;   FUN_00471970 at 00471976
;   FUN_004c9ef0 at 004c9ef6
;   FUN_004ea120 at 004ea125
;   FUN_004f2550 at 004f2555
;   FUN_005211b0 at 005211b6
;   FUN_00541b80 at 00541b85
;   FUN_0058e240 at 0058e246
;   FUN_00594330 at 00594335
;
; Referenced Globals:
;   TerminatedCString s_motion_state_005e4644
;   TerminatedCString s_partStatus_005e4651
;   TerminatedCString s_grabbedBy_005e465c
;   TerminatedCString s_hitPoints_005e4666
;   TerminatedCString s_motion_state_005e4670
;   TerminatedCString s_partStatus_005e467d
;   TerminatedCString s_grabbedBy_005e4688
;   TerminatedCString s_controlType_005e4692
;   TerminatedCString s_objectToPickUp_005e469e
;   TerminatedCString s_doorToOpen_005e46ad
;   TerminatedCString s_leverToPull_005e46b8
;   TerminatedCString s_ladderToClimb_005e46c4
;   TerminatedCString s_pushedObject_005e46d2
;   TerminatedCString s_keys_005e46df
;   TerminatedCString s_keyNameList_d_005e46e4
;   ... and 6 more
;
; Called Functions:
;   FUN_0040b440
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_0040b6f0
;   FUN_0040b870
;   FUN_0040b960
;   FUN_0040c040
;   FUN_0042c7f0
;   FUN_004f95b0
;   FUN_004f97a0
;   FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eab00
        ;   Label: FUN_004eab00
    PUSH ESI                            ; 004eab01
    SUB ESP,0xcc                        ; 004eab02
    MOV ESI,dword ptr [ESP + 0xd8]      ; 004eab08
    MOV EDX,dword ptr [0x0061ef20]      ; 004eab0f | DAT_0061ef20
    LEA EBX,[ESI + 0x158]               ; 004eab15
    CMP EDX,0x4                         ; 004eab1b
    JGE 0x004eab92                      ; 004eab1e
        ;   XREF to: 004eab92 (CONDITIONAL_JUMP)  ; LAB_004eab92
    PUSH ESI                            ; 004eab20
    CALL FUN_0040c040                   ; 004eab21
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    MOV ECX,dword ptr [0x0061ef20]      ; 004eab26 | DAT_0061ef20
    ADD ESP,0x4                         ; 004eab2c
    CMP ECX,0x2                         ; 004eab2f
    JL 0x004eab42                       ; 004eab32
        ;   XREF to: 004eab42 (CONDITIONAL_JUMP)  ; LAB_004eab42
    PUSH 0x5e4644                       ; 004eab34 | = "motion state"
    PUSH EBX                            ; 004eab39
    CALL FUN_0040b870                   ; 004eab3a
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b870()
    ADD ESP,0x8                         ; 004eab3f
    CMP dword ptr [0x0061ef20],0x3      ; 004eab42 | DAT_0061ef20
        ;   Label: LAB_004eab42
    JGE 0x004eab54                      ; 004eab49
        ;   XREF to: 004eab54 (CONDITIONAL_JUMP)  ; LAB_004eab54
    ADD ESP,0xcc                        ; 004eab4b
        ;   Label: LAB_004eab4b
    POP ESI                             ; 004eab51
    POP EBX                             ; 004eab52
    RET                                 ; 004eab53
    PUSH 0x5e4651                       ; 004eab54 | = "partStatus"
        ;   Label: LAB_004eab54
    LEA EAX,[ESI + 0x158]               ; 004eab59
    PUSH EAX                            ; 004eab5f
    CALL FUN_0040b960                   ; 004eab60
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 004eab65
    PUSH 0x5e465c                       ; 004eab68 | = "grabbedBy"
    LEA EAX,[ESI + 0x26fc]              ; 004eab6d
    PUSH EAX                            ; 004eab73
    CALL FUN_0040b6f0                   ; 004eab74
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 004eab79
    PUSH 0x5e4666                       ; 004eab7c | = "hitPoints"
    ADD ESI,0x2538                      ; 004eab81
    PUSH ESI                            ; 004eab87
    CALL FUN_0040b5f0                   ; 004eab88
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 004eab8d
    JMP 0x004eab4b                      ; 004eab90
        ;   XREF to: 004eab4b (UNCONDITIONAL_JUMP)  ; LAB_004eab4b
    PUSH ESI                            ; 004eab92
        ;   Label: LAB_004eab92
    CALL FUN_0042c7f0                   ; 004eab93
        ;   XREF to: 0042c7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c7f0()
    ADD ESP,0x4                         ; 004eab98
    PUSH 0x5e4670                       ; 004eab9b | = "motion state"
    PUSH EBX                            ; 004eaba0
    CALL FUN_0040b870                   ; 004eaba1
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b870()
    ADD ESP,0x8                         ; 004eaba6
    PUSH 0x5e467d                       ; 004eaba9 | = "partStatus"
    PUSH EBX                            ; 004eabae
    CALL FUN_0040b960                   ; 004eabaf
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    MOV ECX,dword ptr [0x0061ef20]      ; 004eabb4 | DAT_0061ef20
    ADD ESP,0x8                         ; 004eabba
    CMP ECX,0x8                         ; 004eabbd
    JGE 0x004eabe0                      ; 004eabc0
        ;   XREF to: 004eabe0 (CONDITIONAL_JUMP)  ; LAB_004eabe0
    PUSH 0x5e4688                       ; 004eabc2 | = "grabbedBy"
    LEA EAX,[ESI + 0x26fc]              ; 004eabc7
    PUSH EAX                            ; 004eabcd
    CALL FUN_0040b6f0                   ; 004eabce
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 004eabd3
    MOV dword ptr [ESI + 0x2700],0x0    ; 004eabd6
    CMP dword ptr [0x0061ef20],0x5      ; 004eabe0 | DAT_0061ef20
        ;   Label: LAB_004eabe0
    JL 0x004eabfd                       ; 004eabe7
        ;   XREF to: 004eabfd (CONDITIONAL_JUMP)  ; LAB_004eabfd
    PUSH 0x5e4692                       ; 004eabe9 | = "controlType"
    LEA EAX,[ESI + 0xc1d4]              ; 004eabee
    PUSH EAX                            ; 004eabf4
    CALL FUN_0040b670                   ; 004eabf5
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004eabfa
    CMP dword ptr [0x0061ef20],0x7      ; 004eabfd | DAT_0061ef20
        ;   Label: LAB_004eabfd
    JL 0x004eac6a                       ; 004eac04
        ;   XREF to: 004eac6a (CONDITIONAL_JUMP)  ; LAB_004eac6a
    PUSH 0x5e469e                       ; 004eac06 | = "objectToPickUp"
    LEA EAX,[ESI + 0x1ff78]             ; 004eac0b
    PUSH EAX                            ; 004eac11
    CALL FUN_0040b6f0                   ; 004eac12
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 004eac17
    PUSH 0x5e46ad                       ; 004eac1a | = "doorToOpen"
    LEA EAX,[ESI + 0x1ff74]             ; 004eac1f
    PUSH EAX                            ; 004eac25
    CALL FUN_0040b6f0                   ; 004eac26
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 004eac2b
    PUSH 0x5e46b8                       ; 004eac2e | = "leverToPull"
    LEA EAX,[ESI + 0x1ff80]             ; 004eac33
    PUSH EAX                            ; 004eac39
    CALL FUN_0040b6f0                   ; 004eac3a
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 004eac3f
    PUSH 0x5e46c4                       ; 004eac42 | = "ladderToClimb"
    LEA EAX,[ESI + 0x1ff84]             ; 004eac47
    PUSH EAX                            ; 004eac4d
    CALL FUN_0040b6f0                   ; 004eac4e
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 004eac53
    PUSH 0x5e46d2                       ; 004eac56 | = "pushedObject"
    LEA EAX,[ESI + 0x1ff7c]             ; 004eac5b
    PUSH EAX                            ; 004eac61
    CALL FUN_0040b6f0                   ; 004eac62
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 004eac67
    CMP dword ptr [0x0061ef20],0xa      ; 004eac6a | DAT_0061ef20
        ;   Label: LAB_004eac6a
    JNZ 0x004eac88                      ; 004eac71
        ;   XREF to: 004eac88 (CONDITIONAL_JUMP)  ; LAB_004eac88
    PUSH 0x5e46df                       ; 004eac73 | = "keys"
    LEA EAX,[ESP + 0xcc]                ; 004eac78
    PUSH EAX                            ; 004eac7f
    CALL FUN_0040b670                   ; 004eac80
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004eac85
    MOV EAX,[0x0061ef20]                ; 004eac88 | DAT_0061ef20
        ;   Label: LAB_004eac88
    CMP EAX,0x8                         ; 004eac8d
    JL 0x004eacd0                       ; 004eac90
        ;   XREF to: 004eacd0 (CONDITIONAL_JUMP)  ; LAB_004eacd0
    CMP EAX,0xb                         ; 004eac92
    JGE 0x004eacd0                      ; 004eac95
        ;   XREF to: 004eacd0 (CONDITIONAL_JUMP)  ; LAB_004eacd0
    XOR EBX,EBX                         ; 004eac97
    PUSH EBX                            ; 004eac99
        ;   Label: LAB_004eac99
    PUSH 0x5e46e4                       ; 004eac9a | = "keyNameList[%d]"
    LEA EAX,[ESP + 0x6c]                ; 004eac9f
    PUSH EAX                            ; 004eaca3
    CALL FUN_005bfb40                   ; 004eaca4
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0xc                         ; 004eaca9
    LEA EAX,[ESP + 0x64]                ; 004eacac
    PUSH EAX                            ; 004eacb0
    LEA EAX,[ESP + 0x4]                 ; 004eacb1
    PUSH EAX                            ; 004eacb5
    INC EBX                             ; 004eacb6
    CALL FUN_0040b440                   ; 004eacb7
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 004eacbc
    CMP EBX,0x20                        ; 004eacbf
    JL 0x004eac99                       ; 004eacc2
        ;   XREF to: 004eac99 (CONDITIONAL_JUMP)  ; LAB_004eac99
    LEA EAX,[EAX]                       ; 004eacc4
    LEA EDX,[EDX]                       ; 004eacca
    CMP dword ptr [0x0061ef20],0x9      ; 004eacd0 | DAT_0061ef20
        ;   Label: LAB_004eacd0
    JL 0x004eaced                       ; 004eacd7
        ;   XREF to: 004eaced (CONDITIONAL_JUMP)  ; LAB_004eaced
    PUSH 0x5e46f4                       ; 004eacd9 | = "AITask"
    LEA EAX,[ESI + 0x1ffa8]             ; 004eacde
    PUSH EAX                            ; 004eace4
    CALL FUN_0040b670                   ; 004eace5
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004eacea
    CMP dword ptr [0x0061ef20],0xc      ; 004eaced | DAT_0061ef20
        ;   Label: LAB_004eaced
    JL 0x004ead0a                       ; 004eacf4
        ;   XREF to: 004ead0a (CONDITIONAL_JUMP)  ; LAB_004ead0a
    PUSH 0x5e46fb                       ; 004eacf6 | = "isWearingGasMask"
    LEA EAX,[ESI + 0x1ff54]             ; 004eacfb
    PUSH EAX                            ; 004ead01
    CALL FUN_0040b670                   ; 004ead02
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004ead07
    CMP dword ptr [0x0061ef20],0xd      ; 004ead0a | DAT_0061ef20
        ;   Label: LAB_004ead0a
    JL 0x004ead27                       ; 004ead11
        ;   XREF to: 004ead27 (CONDITIONAL_JUMP)  ; LAB_004ead27
    PUSH 0x5e470c                       ; 004ead13 | = "isWearingGoggles"
    LEA EAX,[ESI + 0x1ff58]             ; 004ead18
    PUSH EAX                            ; 004ead1e
    CALL FUN_0040b670                   ; 004ead1f
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004ead24
    CMP dword ptr [0x0061ef20],0x6      ; 004ead27 | DAT_0061ef20
        ;   Label: LAB_004ead27
    JL 0x004eab4b                       ; 004ead2e
        ;   XREF to: 004eab4b (CONDITIONAL_JUMP)  ; LAB_004eab4b
    MOV ECX,dword ptr [0x007c3038]      ; 004ead34 | DAT_007c3038
    LEA EAX,[ESI + 0x1fae8]             ; 004ead3a
    CMP ECX,0x1                         ; 004ead40
    JNZ 0x004ead5e                      ; 004ead43
        ;   XREF to: 004ead5e (CONDITIONAL_JUMP)  ; LAB_004ead5e
    MOV ESI,dword ptr [0x007c3034]      ; 004ead45 | DAT_007c3034
    PUSH ESI                            ; 004ead4b
    PUSH EAX                            ; 004ead4c
    CALL FUN_004f97a0                   ; 004ead4d
        ;   XREF to: 004f97a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f97a0()
    ADD ESP,0x8                         ; 004ead52
    ADD ESP,0xcc                        ; 004ead55
    POP ESI                             ; 004ead5b
    POP EBX                             ; 004ead5c
    RET                                 ; 004ead5d
    MOV EBX,dword ptr [0x007c3034]      ; 004ead5e | DAT_007c3034
        ;   Label: LAB_004ead5e
    PUSH EBX                            ; 004ead64
    PUSH EAX                            ; 004ead65
    CALL FUN_004f95b0                   ; 004ead66
        ;   XREF to: 004f95b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f95b0()
    ADD ESP,0x8                         ; 004ead6b
    ADD ESP,0xcc                        ; 004ead6e
    POP ESI                             ; 004ead74
    POP EBX                             ; 004ead75
    RET                                 ; 004ead76


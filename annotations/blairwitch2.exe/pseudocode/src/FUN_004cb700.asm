; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cb700(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_0057b860 at 0057b943
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   FUN_0046b880
;   FUN_004caf00
;   FUN_004cb5e0
;   FUN_004ea3b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb700
        ;   Label: FUN_004cb700
    PUSH ESI                            ; 004cb701
    PUSH EBP                            ; 004cb702
    SUB ESP,0xc                         ; 004cb703
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004cb706
    MOV ESI,ESP                         ; 004cb70a
    CALL FUN_004ea3b0                   ; 004cb70c
        ;   XREF to: 004ea3b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ea3b0()
    MOV EAX,dword ptr [ESP]             ; 004cb711
    MOV ESI,dword ptr [EBX + 0x1c]      ; 004cb714
    MOV EDX,EAX                         ; 004cb717
    SHL ESI,0x8                         ; 004cb719
    SAR EDX,0x1f                        ; 004cb71c
    IDIV ESI                            ; 004cb71f
    MOV dword ptr [EBX + 0x2c],EAX      ; 004cb721
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cb724
    MOV ESI,dword ptr [EBX + 0x1c]      ; 004cb728
    MOV EDX,EAX                         ; 004cb72b
    SHL ESI,0x8                         ; 004cb72d
    SAR EDX,0x1f                        ; 004cb730
    IDIV ESI                            ; 004cb733
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004cb735
    MOV dword ptr [EBX + 0x30],EAX      ; 004cb738
    TEST EDX,EDX                        ; 004cb73b
    JL 0x004cb780                       ; 004cb73d
        ;   XREF to: 004cb780 (CONDITIONAL_JUMP)  ; LAB_004cb780
    MOV ESI,dword ptr [EBX + 0x30]      ; 004cb73f
        ;   Label: LAB_004cb73f
    TEST ESI,ESI                        ; 004cb742
    JL 0x004cb788                       ; 004cb744
        ;   XREF to: 004cb788 (CONDITIONAL_JUMP)  ; LAB_004cb788
    PUSH EBX                            ; 004cb746
        ;   Label: LAB_004cb746
    CALL FUN_004caf00                   ; 004cb747
        ;   XREF to: 004caf00 (UNCONDITIONAL_CALL)  ; undefined FUN_004caf00()
    ADD ESP,0x4                         ; 004cb74c
    PUSH 0x1                            ; 004cb74f
    MOV EBP,dword ptr [0x0060b280]      ; 004cb751 | DAT_0060b280
    PUSH EBP                            ; 004cb757 | DAT_01ba5c50
    CALL FUN_0046b880                   ; 004cb758
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b880()
    ADD ESP,0x8                         ; 004cb75d
    PUSH EBX                            ; 004cb760
    CALL FUN_004cb5e0                   ; 004cb761
        ;   XREF to: 004cb5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004cb5e0()
    ADD ESP,0x4                         ; 004cb766
    PUSH 0x0                            ; 004cb769
    MOV EAX,[0x0060b280]                ; 004cb76b | DAT_0060b280
    PUSH EAX                            ; 004cb770 | DAT_01ba5c50
    CALL FUN_0046b880                   ; 004cb771
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b880()
    ADD ESP,0x8                         ; 004cb776
    ADD ESP,0xc                         ; 004cb779
    POP EBP                             ; 004cb77c
    POP ESI                             ; 004cb77d
    POP EBX                             ; 004cb77e
    RET                                 ; 004cb77f
    LEA ECX,[EDX + -0x1]                ; 004cb780
        ;   Label: LAB_004cb780
    MOV dword ptr [EBX + 0x2c],ECX      ; 004cb783
    JMP 0x004cb73f                      ; 004cb786
        ;   XREF to: 004cb73f (UNCONDITIONAL_JUMP)  ; LAB_004cb73f
    PUSH EDI                            ; 004cb788
        ;   Label: LAB_004cb788
    LEA EDI,[ESI + -0x1]                ; 004cb789
    MOV dword ptr [EBX + 0x30],EDI      ; 004cb78c
    POP EDI                             ; 004cb78f
    JMP 0x004cb746                      ; 004cb790
        ;   XREF to: 004cb746 (UNCONDITIONAL_JUMP)  ; LAB_004cb746


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00433350(int param_1,undefined4 param_2)
;
;
; XREF[39]:
;   FUN_0040fb40 at 0040fdce
;   FUN_004179b0 at 00418023
;   FUN_00419b40 at 0041a175
;   FUN_00425da0 at 00426b41
;   FUN_0042cd70 at 0042d36d
;   FUN_00442a20 at 004435b6
;   FUN_00445130 at 0044538c
;   FUN_00455080 at 00455d59
;   FUN_004628b0 at 00462b87
;   FUN_004c5350 at 004c55cb
;   ... and 29 more
;
; Called Functions:
;   FUN_00431d10
;   FUN_004320d0
;   FUN_004322a0
;   FUN_00433000
;   FUN_0043fc00
;   FUN_0054dd10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433350
        ;   Label: FUN_00433350
    MOV EBX,dword ptr [ESP + 0x8]       ; 00433351
    PUSH EBX                            ; 00433355
    CALL FUN_004320d0                   ; 00433356
        ;   XREF to: 004320d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004320d0()
    ADD ESP,0x4                         ; 0043335b
    PUSH EBX                            ; 0043335e
    CALL FUN_00433000                   ; 0043335f
        ;   XREF to: 00433000 (UNCONDITIONAL_CALL)  ; undefined FUN_00433000()
    ADD ESP,0x4                         ; 00433364
    LEA EAX,[EBX + 0x158]               ; 00433367
    PUSH EAX                            ; 0043336d
    CALL FUN_0054dd10                   ; 0043336e
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dd10()
    ADD ESP,0x4                         ; 00433373
    PUSH EBX                            ; 00433376
    CALL FUN_004322a0                   ; 00433377
        ;   XREF to: 004322a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004322a0()
    ADD ESP,0x4                         ; 0043337c
    PUSH dword ptr [ESP + 0xc]          ; 0043337f
    PUSH EBX                            ; 00433383
    CALL FUN_00431d10                   ; 00433384
        ;   XREF to: 00431d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00431d10()
    MOV EDX,dword ptr [EBX + 0x27bc]    ; 00433389
    ADD ESP,0x8                         ; 0043338f
    TEST EDX,EDX                        ; 00433392
    JNZ 0x004333ad                      ; 00433394
        ;   XREF to: 004333ad (CONDITIONAL_JUMP)  ; LAB_004333ad
    PUSH EBX                            ; 00433396
    MOV EAX,dword ptr [EBX + 0x154]     ; 00433397
    CALL dword ptr [EAX + 0x10c]        ; 0043339d
    ADD ESP,0x4                         ; 004333a3
    CMP EAX,0x1                         ; 004333a6
    JZ 0x004333ad                       ; 004333a9
        ;   XREF to: 004333ad (CONDITIONAL_JUMP)  ; LAB_004333ad
    POP EBX                             ; 004333ab
    RET                                 ; 004333ac
    LEA EAX,[EBX + 0x158]               ; 004333ad
        ;   Label: LAB_004333ad
    PUSH EAX                            ; 004333b3
    PUSH dword ptr [EBX + 0x2504]       ; 004333b4
    LEA EAX,[EBX + 0x30]                ; 004333ba
    PUSH dword ptr [ESP + 0x14]         ; 004333bd
    PUSH EAX                            ; 004333c1
    LEA EAX,[EBX + 0x20]                ; 004333c2
    PUSH EAX                            ; 004333c5
    ADD EBX,0x2f08                      ; 004333c6
    PUSH EBX                            ; 004333cc
    CALL FUN_0043fc00                   ; 004333cd
        ;   XREF to: 0043fc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0043fc00()
    ADD ESP,0x18                        ; 004333d2
    POP EBX                             ; 004333d5
    RET                                 ; 004333d6


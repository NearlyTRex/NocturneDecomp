; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fd610(int param_1)
;
;
; XREF[1]:
;   FUN_004fd400 at 004fd405
;
; Called Functions:
;   FUN_004088b0
;   FUN_005b5200
;   FUN_005b5760
;   FUN_005b5930
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd610
        ;   Label: FUN_004fd610
    SUB ESP,0xf0                        ; 004fd611
    MOV EBX,dword ptr [ESP + 0xf8]      ; 004fd617
    CMP dword ptr [EBX + 0x2e0],0x0     ; 004fd61e
    JNZ 0x004fd62f                      ; 004fd625
        ;   XREF to: 004fd62f (CONDITIONAL_JUMP)  ; LAB_004fd62f
    ADD ESP,0xf0                        ; 004fd627
    POP EBX                             ; 004fd62d
    RET                                 ; 004fd62e
    PUSH EDI                            ; 004fd62f
        ;   Label: LAB_004fd62f
    PUSH ESI                            ; 004fd630
    LEA EAX,[EBX + 0x2f0]               ; 004fd631
    PUSH EAX                            ; 004fd637
    LEA EAX,[EBX + 0x2e4]               ; 004fd638
    PUSH EAX                            ; 004fd63e
    LEA EAX,[ESP + 0x40]                ; 004fd63f
    PUSH EAX                            ; 004fd643
    CALL FUN_005b5760                   ; 004fd644
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5760()
    MOV EAX,dword ptr [EBX + 0x2e0]     ; 004fd649
    ADD ESP,0xc                         ; 004fd64f
    LEA EDX,[EAX + 0x30]                ; 004fd652
    PUSH EDX                            ; 004fd655
    ADD EAX,0x20                        ; 004fd656
    PUSH EAX                            ; 004fd659
    LEA EAX,[ESP + 0x70]                ; 004fd65a
    PUSH EAX                            ; 004fd65e
    CALL FUN_005b5760                   ; 004fd65f
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5760()
    ADD ESP,0xc                         ; 004fd664
    LEA EAX,[ESP + 0x68]                ; 004fd667
    PUSH EAX                            ; 004fd66b
    LEA EAX,[ESP + 0x3c]                ; 004fd66c
    PUSH EAX                            ; 004fd670
    LEA ESI,[ESP + 0xa0]                ; 004fd671
    LEA EDI,[ESP + 0x10]                ; 004fd678
    CALL FUN_005b5200                   ; 004fd67c
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5200()
    MOV ECX,0xc                         ; 004fd681
    LEA ESI,[ESP + 0xa0]                ; 004fd686
    ADD ESP,0x8                         ; 004fd68d
    MOVSD.REP ES:EDI,ESI                ; 004fd690
    MOV EAX,dword ptr [ESP + 0x14]      ; 004fd692
    MOV dword ptr [ESP + 0xec],EAX      ; 004fd696
    MOV EAX,dword ptr [ESP + 0x24]      ; 004fd69d
    LEA EDI,[ESP + 0xc8]                ; 004fd6a1
    MOV dword ptr [ESP + 0xf0],EAX      ; 004fd6a8
    MOV EAX,dword ptr [ESP + 0x34]      ; 004fd6af
    LEA ESI,[ESP + 0xec]                ; 004fd6b3
    MOV dword ptr [ESP + 0xf4],EAX      ; 004fd6ba
    MOVSD ES:EDI,ESI                    ; 004fd6c1
    MOVSD ES:EDI,ESI                    ; 004fd6c2
    MOVSD ES:EDI,ESI                    ; 004fd6c3
    LEA EDX,[EBX + 0x20]                ; 004fd6c4
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004fd6c7
    MOV dword ptr [EDX],EAX             ; 004fd6ce
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004fd6d0
    MOV dword ptr [EDX + 0x4],EAX       ; 004fd6d7
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004fd6da
    MOV dword ptr [EDX + 0x8],EAX       ; 004fd6e1
    LEA EAX,[ESP + 0x8]                 ; 004fd6e4
    PUSH EAX                            ; 004fd6e8
    LEA ESI,[ESP + 0xe4]                ; 004fd6e9
    LEA EDI,[ESP + 0xd8]                ; 004fd6f0
    CALL FUN_005b5930                   ; 004fd6f7
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5930()
    LEA ESI,[ESP + 0xe4]                ; 004fd6fc
    LEA EAX,[ESP + 0xd8]                ; 004fd703
    ADD ESP,0x4                         ; 004fd70a
    LEA EDX,[EBX + 0x30]                ; 004fd70d
    MOVSD ES:EDI,ESI                    ; 004fd710
    MOVSD ES:EDI,ESI                    ; 004fd711
    MOVSD ES:EDI,ESI                    ; 004fd712
    CMP EDX,EAX                         ; 004fd713
    JZ 0x004fd734                       ; 004fd715
        ;   XREF to: 004fd734 (CONDITIONAL_JUMP)  ; LAB_004fd734
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004fd717
    MOV dword ptr [EDX],EAX             ; 004fd71e
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004fd720
    MOV dword ptr [EDX + 0x4],EAX       ; 004fd727
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004fd72a
    MOV dword ptr [EDX + 0x8],EAX       ; 004fd731
    PUSH EBX                            ; 004fd734
        ;   Label: LAB_004fd734
    CALL FUN_004088b0                   ; 004fd735
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004088b0()
    ADD ESP,0x4                         ; 004fd73a
    POP ESI                             ; 004fd73d
    POP EDI                             ; 004fd73e
    ADD ESP,0xf0                        ; 004fd73f
    POP EBX                             ; 004fd745
    RET                                 ; 004fd746


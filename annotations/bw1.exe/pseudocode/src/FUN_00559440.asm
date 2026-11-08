; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00559440(undefined4 param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x3c]:1  local_3c
;
; XREF[3]:
;   FUN_004109e0 at 004109f6
;   FUN_00477ab0 at 00477db6
;   FUN_00478af0 at 00478b1f
;
; Referenced Globals:
;   undefined4 DAT_01fe5c1c
;
; Called Functions:
;   FUN_0048f2e0
;   FUN_00535280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559440
        ;   Label: FUN_00559440
    PUSH ESI                            ; 00559441
    PUSH EDI                            ; 00559442
    SUB ESP,0x48                        ; 00559443
    MOV EBX,dword ptr [ESP + 0x5c]      ; 00559446
    PUSH EBX                            ; 0055944a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0055944b
    LEA ESI,[ESP + 0x1c]                ; 00559451
    LEA EDI,[ESP + 0x4]                 ; 00559455
    CALL dword ptr [EAX + 0x1c]         ; 00559459
    MOV ECX,0x6                         ; 0055945c
    LEA ESI,[ESP + 0x1c]                ; 00559461
    ADD ESP,0x4                         ; 00559465
    MOVSD.REP ES:EDI,ESI                ; 00559468
    LEA EDX,[ESP + 0x30]                ; 0055946a
    MOV ESI,ESP                         ; 0055946e
    CMP EDX,ESI                         ; 00559470
    JNZ 0x005594be                      ; 00559472
        ;   XREF to: 005594be (CONDITIONAL_JUMP)  ; LAB_005594be
    LEA EAX,[ESP + 0x3c]                ; 00559474
        ;   Label: LAB_00559474
    LEA EDX,[ESI + 0xc]                 ; 00559478
    CMP EAX,EDX                         ; 0055947b
    JZ 0x00559493                       ; 0055947d
        ;   XREF to: 00559493 (CONDITIONAL_JUMP)  ; LAB_00559493
    MOV EAX,dword ptr [EDX]             ; 0055947f
    MOV dword ptr [ESP + 0x3c],EAX      ; 00559481
    MOV EAX,dword ptr [EDX + 0x4]       ; 00559485
    MOV dword ptr [ESP + 0x40],EAX      ; 00559488
    MOV EAX,dword ptr [EDX + 0x8]       ; 0055948c
    MOV dword ptr [ESP + 0x44],EAX      ; 0055948f
    LEA EAX,[ESP + 0x3c]                ; 00559493
        ;   Label: LAB_00559493
    PUSH EAX                            ; 00559497
    LEA EAX,[ESP + 0x34]                ; 00559498
    PUSH EAX                            ; 0055949c
    LEA EAX,[EBX + 0x30]                ; 0055949d
    PUSH EAX                            ; 005594a0
    ADD EBX,0x20                        ; 005594a1
    PUSH EBX                            ; 005594a4
    PUSH 0x1fe5c1c                      ; 005594a5 | DAT_01fe5c1c
    CALL FUN_0048f2e0                   ; 005594aa
        ;   XREF to: 0048f2e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048f2e0()
    ADD ESP,0x14                        ; 005594af
    CALL FUN_00535280                   ; 005594b2
        ;   XREF to: 00535280 (UNCONDITIONAL_CALL)  ; undefined FUN_00535280()
    ADD ESP,0x48                        ; 005594b7
    POP EDI                             ; 005594ba
    POP ESI                             ; 005594bb
    POP EBX                             ; 005594bc
    RET                                 ; 005594bd
    MOV EAX,dword ptr [ESP]             ; 005594be
        ;   Label: LAB_005594be
    MOV dword ptr [ESP + 0x30],EAX      ; 005594c1
    MOV EAX,dword ptr [ESP + 0x4]       ; 005594c5
    MOV dword ptr [ESP + 0x34],EAX      ; 005594c9
    MOV EAX,dword ptr [ESP + 0x8]       ; 005594cd
    MOV dword ptr [ESP + 0x38],EAX      ; 005594d1
    JMP 0x00559474                      ; 005594d5
        ;   XREF to: 00559474 (UNCONDITIONAL_JUMP)  ; LAB_00559474


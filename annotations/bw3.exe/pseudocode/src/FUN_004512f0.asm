; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004512f0(undefined4 param_1,uint param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_00603b28
;   undefined4 DAT_0060b014
;   undefined4 DAT_0060b044
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01ed78c8
;
; Called Functions:
;   FUN_0046d460
;   FUN_0046e720
;   FUN_0046e880
;   FUN_0053b250
;   FUN_0056356c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004512f0
        ;   Label: FUN_004512f0
    PUSH ESI                            ; 004512f1
    PUSH EDI                            ; 004512f2
    PUSH EBP                            ; 004512f3
    SUB ESP,0x28                        ; 004512f4
    MOV EBP,dword ptr [ESP + 0x40]      ; 004512f7
    PUSH 0x15484dc                      ; 004512fb
    MOV EDX,dword ptr [0x005f2afc]      ; 00451300 | DAT_005f2afc
    PUSH EDX                            ; 00451306 | DAT_01bdd7e4
    CALL FUN_0046e880                   ; 00451307
        ;   XREF to: 0046e880 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e880()
    ADD ESP,0x8                         ; 0045130c
    PUSH 0x14a01f0                      ; 0045130f
    MOV ECX,dword ptr [0x005f2afc]      ; 00451314 | DAT_005f2afc
    MOV EDI,0x60b014                    ; 0045131a | DAT_0060b014
    PUSH ECX                            ; 0045131f | DAT_01bdd7e4
    MOV ESI,EBP                         ; 00451320
    ADD EBP,0x60                        ; 00451322
    CALL FUN_0046e720                   ; 00451325
        ;   XREF to: 0046e720 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e720()
    ADD ESP,0x8                         ; 0045132a
    PUSH ESI                            ; 0045132d
        ;   Label: LAB_0045132d
    PUSH EDI                            ; 0045132e | DAT_0060b014 | DAT_0060b044
    CALL FUN_0056356c                   ; 0045132f
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; undefined FUN_0056356c()
    ADD ESI,0xc                         ; 00451334
    ADD ESP,0x8                         ; 00451337
    ADD EDI,0x30                        ; 0045133a
    CMP ESI,EBP                         ; 0045133d
    JNZ 0x0045132d                      ; 0045133f
        ;   XREF to: 0045132d (CONDITIONAL_JUMP)  ; LAB_0045132d
    MOV EBX,0x4                         ; 00451341
    PUSH 0x1                            ; 00451346
    MOV EDX,dword ptr [0x005f2afc]      ; 00451348 | DAT_005f2afc
    XOR ESI,EBP                         ; 0045134e
    XOR EDI,EDI                         ; 00451350
    MOV EBP,0x2                         ; 00451352
    MOV dword ptr [ESP + 0x8],EBX       ; 00451357
    MOV dword ptr [ESP + 0x18],ESI      ; 0045135b
    MOV dword ptr [ESP + 0x14],EDI      ; 0045135f
    PUSH EDX                            ; 00451363 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x14],EDI      ; 00451364
    MOV dword ptr [ESP + 0x10],EDI      ; 00451368
    CALL FUN_0046d460                   ; 0045136c
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d460()
    LEA EAX,[ESP + 0x8]                 ; 00451371
    ADD ESP,0x8                         ; 00451375
    XOR ESI,ESI                         ; 00451378
    MOV dword ptr [ESP + 0x18],EDI      ; 0045137a
    MOV dword ptr [ESP + 0x1c],EBX      ; 0045137e
    PUSH EAX                            ; 00451382
    MOV EAX,[0x00603b28]                ; 00451383 | DAT_00603b28
    MOV EDI,0x6                         ; 00451388
    PUSH EAX                            ; 0045138d | DAT_01ed78c8
    MOV dword ptr [ESP + 0x2c],EBP      ; 0045138e
    MOV dword ptr [ESP + 0x28],EDI      ; 00451392
    CALL FUN_0053b250                   ; 00451396
        ;   XREF to: 0053b250 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b250()
    ADD ESP,0x8                         ; 0045139b
    TEST EAX,EAX                        ; 0045139e
    JZ 0x004513d6                       ; 004513a0
        ;   XREF to: 004513d6 (CONDITIONAL_JUMP)  ; LAB_004513d6
    MOV ESI,0x1                         ; 004513a2
        ;   Label: LAB_004513a2
    PUSH 0x0                            ; 004513a7
        ;   Label: LAB_004513a7
    MOV ECX,dword ptr [0x005f2afc]      ; 004513a9 | DAT_005f2afc
    PUSH ECX                            ; 004513af | DAT_01bdd7e4
    CALL FUN_0046d460                   ; 004513b0
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d460()
    ADD ESP,0x8                         ; 004513b5
    PUSH 0x15484dc                      ; 004513b8
    MOV EBX,dword ptr [0x005f2afc]      ; 004513bd | DAT_005f2afc
    PUSH EBX                            ; 004513c3 | DAT_01bdd7e4
    CALL FUN_0046e720                   ; 004513c4
        ;   XREF to: 0046e720 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e720()
    ADD ESP,0x8                         ; 004513c9
    MOV EAX,ESI                         ; 004513cc
    ADD ESP,0x28                        ; 004513ce
    POP EBP                             ; 004513d1
    POP EDI                             ; 004513d2
    POP ESI                             ; 004513d3
    POP EBX                             ; 004513d4
    RET                                 ; 004513d5
    MOV EDX,0x1                         ; 004513d6
        ;   Label: LAB_004513d6
    MOV ECX,0x3                         ; 004513db
    MOV EBX,0x7                         ; 004513e0
    MOV EDI,0x5                         ; 004513e5
    MOV EAX,ESP                         ; 004513ea
    MOV EBP,dword ptr [0x00603b28]      ; 004513ec | DAT_00603b28
    PUSH EAX                            ; 004513f2
    MOV dword ptr [ESP + 0x1c],EDX      ; 004513f3
    MOV dword ptr [ESP + 0x20],ECX      ; 004513f7
    PUSH EBP                            ; 004513fb | DAT_01ed78c8
    MOV dword ptr [ESP + 0x28],EBX      ; 004513fc
    MOV dword ptr [ESP + 0x2c],EDI      ; 00451400
    CALL FUN_0053b250                   ; 00451404
        ;   XREF to: 0053b250 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b250()
    ADD ESP,0x8                         ; 00451409
    TEST EAX,EAX                        ; 0045140c
    JNZ 0x004513a2                      ; 0045140e
        ;   XREF to: 004513a2 (CONDITIONAL_JUMP)  ; LAB_004513a2
    MOV EDX,0x1                         ; 00451410
    MOV dword ptr [ESP + 0x18],EAX      ; 00451415
    MOV EAX,ESP                         ; 00451419
    MOV dword ptr [ESP + 0x20],EDI      ; 0045141b
    PUSH EAX                            ; 0045141f
    MOV EDI,dword ptr [0x00603b28]      ; 00451420 | DAT_00603b28
    MOV EBX,0x4                         ; 00451426
    PUSH EDI                            ; 0045142b | DAT_01ed78c8
    MOV dword ptr [ESP + 0x24],EDX      ; 0045142c
    MOV dword ptr [ESP + 0x2c],EBX      ; 00451430
    CALL FUN_0053b250                   ; 00451434
        ;   XREF to: 0053b250 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b250()
    ADD ESP,0x8                         ; 00451439
    TEST EAX,EAX                        ; 0045143c
    JNZ 0x004513a2                      ; 0045143e
        ;   XREF to: 004513a2 (CONDITIONAL_JUMP)  ; LAB_004513a2
    MOV EBP,0x2                         ; 00451444
    MOV EAX,0x6                         ; 00451449
    MOV EDX,0x7                         ; 0045144e
    MOV dword ptr [ESP + 0x1c],EAX      ; 00451453
    MOV EAX,ESP                         ; 00451457
    MOV ECX,0x3                         ; 00451459
    PUSH EAX                            ; 0045145e
    MOV EBX,dword ptr [0x00603b28]      ; 0045145f | DAT_00603b28
    MOV dword ptr [ESP + 0x1c],EBP      ; 00451465
    PUSH EBX                            ; 00451469 | DAT_01ed78c8
    MOV dword ptr [ESP + 0x28],EDX      ; 0045146a
    MOV dword ptr [ESP + 0x2c],ECX      ; 0045146e
    CALL FUN_0053b250                   ; 00451472
        ;   XREF to: 0053b250 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b250()
    ADD ESP,0x8                         ; 00451477
    TEST EAX,EAX                        ; 0045147a
    JNZ 0x004513a2                      ; 0045147c
        ;   XREF to: 004513a2 (CONDITIONAL_JUMP)  ; LAB_004513a2
    MOV dword ptr [ESP + 0x20],0x3      ; 00451482
    MOV EAX,ESP                         ; 0045148a
    MOV EDX,0x1                         ; 0045148c
    PUSH EAX                            ; 00451491
    MOV ECX,dword ptr [0x00603b28]      ; 00451492 | DAT_00603b28
    MOV dword ptr [ESP + 0x1c],ESI      ; 00451498
    PUSH ECX                            ; 0045149c | DAT_01ed78c8
    MOV dword ptr [ESP + 0x24],EBP      ; 0045149d
    MOV dword ptr [ESP + 0x2c],EDX      ; 004514a1
    CALL FUN_0053b250                   ; 004514a5
        ;   XREF to: 0053b250 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b250()
    ADD ESP,0x8                         ; 004514aa
    TEST EAX,EAX                        ; 004514ad
    JNZ 0x004513a2                      ; 004514af
        ;   XREF to: 004513a2 (CONDITIONAL_JUMP)  ; LAB_004513a2
    MOV EBX,0x4                         ; 004514b5
    MOV EAX,0x6                         ; 004514ba
    MOV EDI,0x5                         ; 004514bf
    MOV dword ptr [ESP + 0x24],EAX      ; 004514c4
    MOV EAX,ESP                         ; 004514c8
    MOV EBP,0x7                         ; 004514ca
    PUSH EAX                            ; 004514cf
    MOV EDX,dword ptr [0x00603b28]      ; 004514d0 | DAT_00603b28
    MOV dword ptr [ESP + 0x1c],EBX      ; 004514d6
    PUSH EDX                            ; 004514da | DAT_01ed78c8
    MOV dword ptr [ESP + 0x24],EDI      ; 004514db
    MOV dword ptr [ESP + 0x28],EBP      ; 004514df
    CALL FUN_0053b250                   ; 004514e3
        ;   XREF to: 0053b250 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b250()
    ADD ESP,0x8                         ; 004514e8
    TEST EAX,EAX                        ; 004514eb
    JZ 0x004513a7                       ; 004514ed
        ;   XREF to: 004513a7 (CONDITIONAL_JUMP)  ; LAB_004513a7
    JMP 0x004513a2                      ; 004514f3
        ;   XREF to: 004513a2 (UNCONDITIONAL_JUMP)  ; LAB_004513a2


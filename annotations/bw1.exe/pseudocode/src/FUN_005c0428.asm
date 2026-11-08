; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c0428(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_005c04b0 at 005c04c8
;
; Referenced Globals:
;   void* PTR_FUN_00626600 = 005c50d4
;   void* PTR_FUN_00626604 = 005c50d4
;
; Called Functions:
;   FUN_005c50d4
;   FUN_005c5450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0428
        ;   Label: FUN_005c0428
    PUSH ESI                            ; 005c0429
    PUSH EDI                            ; 005c042a
    PUSH EBP                            ; 005c042b
    SUB ESP,0x14                        ; 005c042c
    MOV EBX,dword ptr [ESP + 0x28]      ; 005c042f
    MOV EDX,dword ptr [EBX + 0x10]      ; 005c0433
    PUSH EDX                            ; 005c0436
    CALL dword ptr [0x00626600]         ; 005c0437 | PTR_FUN_00626600
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c043d
    MOV ECX,dword ptr [EAX + 0xc]       ; 005c0440
    ADD ESP,0x4                         ; 005c0443
    CMP ECX,0x1                         ; 005c0446
    JZ 0x005c0467                       ; 005c0449
        ;   XREF to: 005c0467 (CONDITIONAL_JUMP)  ; LAB_005c0467
    TEST ECX,ECX                        ; 005c044b
    JZ 0x005c0460                       ; 005c044d
        ;   XREF to: 005c0460 (CONDITIONAL_JUMP)  ; LAB_005c0460
    MOV EDI,dword ptr [EBX + 0x10]      ; 005c044f
    PUSH EDI                            ; 005c0452
    CALL dword ptr [0x00626604]         ; 005c0453 | PTR_FUN_00626604
    ADD ESP,0x4                         ; 005c0459
    XOR EAX,EAX                         ; 005c045c
    JMP 0x005c04a5                      ; 005c045e
        ;   XREF to: 005c04a5 (UNCONDITIONAL_JUMP)  ; LAB_005c04a5
    MOV dword ptr [EAX + 0xc],0x1       ; 005c0460
        ;   Label: LAB_005c0460
    MOV EDX,dword ptr [ESP + 0x30]      ; 005c0467
        ;   Label: LAB_005c0467
    MOV EAX,0x5c0410                    ; 005c046b | LAB_005c0410
    PUSH EDX                            ; 005c0470
    MOV ECX,dword ptr [ESP + 0x30]      ; 005c0471
    MOV dword ptr [ESP + 0x8],EAX       ; 005c0475 | LAB_005c0410
    PUSH ECX                            ; 005c0479
    LEA EAX,[ESP + 0x8]                 ; 005c047a
    MOV EBP,0x5c03f0                    ; 005c047e | LAB_005c03f0
    PUSH EAX                            ; 005c0483
    MOV dword ptr [ESP + 0x14],EBX      ; 005c0484
    MOV dword ptr [ESP + 0xc],EBP       ; 005c0488 | LAB_005c03f0
    CALL FUN_005c5450                   ; 005c048c
        ;   XREF to: 005c5450 (UNCONDITIONAL_CALL)  ; undefined FUN_005c5450()
    ADD ESP,0xc                         ; 005c0491
    MOV EDI,dword ptr [EBX + 0x10]      ; 005c0494
    PUSH EDI                            ; 005c0497
    MOV ESI,EAX                         ; 005c0498
    CALL dword ptr [0x00626604]         ; 005c049a | PTR_FUN_00626604
    ADD ESP,0x4                         ; 005c04a0
    MOV EAX,ESI                         ; 005c04a3
    ADD ESP,0x14                        ; 005c04a5
        ;   Label: LAB_005c04a5
    POP EBP                             ; 005c04a8
    POP EDI                             ; 005c04a9
    POP ESI                             ; 005c04aa
    POP EBX                             ; 005c04ab
    RET                                 ; 005c04ac


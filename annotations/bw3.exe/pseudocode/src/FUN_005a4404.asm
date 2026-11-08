; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a4404(int param_1)
;
;
; XREF[1]:
;   FUN_005a4484 at 005a44c7
;
; Referenced Globals:
;   void* PTR_FUN_006079b4 = 005a7f44
;   void* PTR_FUN_006079b8 = 005a7f44
;   undefined4 DAT_02d252a0
;   undefined4 DAT_02d252a4
;
; Called Functions:
;   FUN_005a3bc0
;   FUN_005a7f44
;   FUN_005a92c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4404
        ;   Label: FUN_005a4404
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a4405
    CALL dword ptr [0x006079b4]         ; 005a4409 | PTR_FUN_006079b4
    MOV EAX,[0x02d252a0]                ; 005a440f | DAT_02d252a0
    TEST EAX,EAX                        ; 005a4414
    JZ 0x005a4440                       ; 005a4416
        ;   XREF to: 005a4440 (CONDITIONAL_JUMP)  ; LAB_005a4440
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a4418
        ;   Label: LAB_005a4418
    CMP EBX,EDX                         ; 005a441b
    JNZ 0x005a443a                      ; 005a441d
        ;   XREF to: 005a443a (CONDITIONAL_JUMP)  ; LAB_005a443a
    TEST byte ptr [EDX + 0xc],0x3       ; 005a441f
    JZ 0x005a4430                       ; 005a4423
        ;   XREF to: 005a4430 (CONDITIONAL_JUMP)  ; LAB_005a4430
    PUSH 0x1                            ; 005a4425
    PUSH EDX                            ; 005a4427
    CALL FUN_005a3bc0                   ; 005a4428
        ;   XREF to: 005a3bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3bc0()
    ADD ESP,0x8                         ; 005a442d
    CALL dword ptr [0x006079b8]         ; 005a4430 | PTR_FUN_006079b8
        ;   Label: LAB_005a4430
    MOV EAX,EBX                         ; 005a4436
    POP EBX                             ; 005a4438
    RET                                 ; 005a4439
    MOV EAX,dword ptr [EAX]             ; 005a443a
        ;   Label: LAB_005a443a
    TEST EAX,EAX                        ; 005a443c
    JNZ 0x005a4418                      ; 005a443e
        ;   XREF to: 005a4418 (CONDITIONAL_JUMP)  ; LAB_005a4418
    MOV EDX,0x2d252a4                   ; 005a4440
        ;   Label: LAB_005a4440
    MOV EAX,dword ptr [EDX]             ; 005a4445 | DAT_02d252a4
        ;   Label: LAB_005a4445
    TEST EAX,EAX                        ; 005a4447
    JZ 0x005a446f                       ; 005a4449
        ;   XREF to: 005a446f (CONDITIONAL_JUMP)  ; LAB_005a446f
    CMP EBX,dword ptr [EAX + 0x4]       ; 005a444b
    JNZ 0x005a446b                      ; 005a444e
        ;   XREF to: 005a446b (CONDITIONAL_JUMP)  ; LAB_005a446b
    MOV ECX,dword ptr [EAX]             ; 005a4450
    MOV dword ptr [EDX],ECX             ; 005a4452 | DAT_02d252a4
    MOV EDX,dword ptr [0x02d252a0]      ; 005a4454 | DAT_02d252a0
    MOV [0x02d252a0],EAX                ; 005a445a | DAT_02d252a0
    MOV dword ptr [EAX],EDX             ; 005a445f
    CALL dword ptr [0x006079b8]         ; 005a4461 | PTR_FUN_006079b8
    MOV EAX,EBX                         ; 005a4467
    POP EBX                             ; 005a4469
    RET                                 ; 005a446a
    MOV EDX,EAX                         ; 005a446b
        ;   Label: LAB_005a446b
    JMP 0x005a4445                      ; 005a446d
        ;   XREF to: 005a4445 (UNCONDITIONAL_JUMP)  ; LAB_005a4445
    PUSH 0x4                            ; 005a446f
        ;   Label: LAB_005a446f
    CALL FUN_005a92c0                   ; 005a4471
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a92c0()
    ADD ESP,0x4                         ; 005a4476
    CALL dword ptr [0x006079b8]         ; 005a4479 | PTR_FUN_006079b8
    XOR EAX,EAX                         ; 005a447f
    POP EBX                             ; 005a4481
    RET                                 ; 005a4482


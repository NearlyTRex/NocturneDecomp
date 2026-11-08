; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00493510(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   FUN_0049cd50 at 0049ce9f
;   FUN_0049d230 at 0049d27c
;
; Called Functions:
;   FUN_0040cf60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00493510
        ;   Label: FUN_00493510
    SUB ESP,0x4                         ; 00493511
    MOV EBX,dword ptr [ESP + 0xc]       ; 00493514
    MOV ECX,dword ptr [ESP + 0x10]      ; 00493518
    MOV EDX,dword ptr [ESP + 0x18]      ; 0049351c
    LEA EAX,[EBX + 0x4]                 ; 00493520
    CMP EAX,ECX                         ; 00493523
    JNZ 0x0049357f                      ; 00493525
        ;   XREF to: 0049357f (CONDITIONAL_JUMP)  ; LAB_0049357f
    LEA EAX,[EBX + 0x1c]                ; 00493527
        ;   Label: LAB_00493527
    TEST EDX,EDX                        ; 0049352a
    JZ 0x00493593                       ; 0049352c
        ;   XREF to: 00493593 (CONDITIONAL_JUMP)  ; LAB_00493593
    CMP EAX,EDX                         ; 0049352e
    JZ 0x00493542                       ; 00493530
        ;   XREF to: 00493542 (CONDITIONAL_JUMP)  ; LAB_00493542
    MOV ECX,dword ptr [EDX]             ; 00493532
    MOV dword ptr [EAX],ECX             ; 00493534
    MOV ECX,dword ptr [EDX + 0x4]       ; 00493536
    MOV dword ptr [EAX + 0x4],ECX       ; 00493539
    MOV ECX,dword ptr [EDX + 0x8]       ; 0049353c
    MOV dword ptr [EAX + 0x8],ECX       ; 0049353f
    PUSH 0x3f866666                     ; 00493542
        ;   Label: LAB_00493542
    MOV EAX,dword ptr [ESP + 0x18]      ; 00493547
    MOV dword ptr [EBX + 0x18],0x0      ; 0049354b
    PUSH 0x3f733333                     ; 00493552
    MOV dword ptr [EBX + 0x14],EAX      ; 00493557
    CALL FUN_0040cf60                   ; 0049355a
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x8],EAX       ; 0049355f
    FLD float ptr [ESP + 0x8]           ; 00493563
    ADD ESP,0x8                         ; 00493567
    MOV dword ptr [EBX],0x1             ; 0049356a
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00493570
    FSTP float ptr [EBX + 0x10]         ; 00493574
    MOV dword ptr [EBX + 0x28],EAX      ; 00493577
    ADD ESP,0x4                         ; 0049357a
    POP EBX                             ; 0049357d
    RET                                 ; 0049357e
    PUSH ESI                            ; 0049357f
        ;   Label: LAB_0049357f
    MOV ESI,dword ptr [ECX]             ; 00493580
    MOV dword ptr [EAX],ESI             ; 00493582
    MOV ESI,dword ptr [ECX + 0x4]       ; 00493584
    MOV dword ptr [EAX + 0x4],ESI       ; 00493587
    MOV ESI,dword ptr [ECX + 0x8]       ; 0049358a
    MOV dword ptr [EAX + 0x8],ESI       ; 0049358d
    POP ESI                             ; 00493590
    JMP 0x00493527                      ; 00493591
        ;   XREF to: 00493527 (UNCONDITIONAL_JUMP)  ; LAB_00493527
    MOV dword ptr [EAX + 0x8],EDX       ; 00493593
        ;   Label: LAB_00493593
    MOV EDX,dword ptr [EAX + 0x8]       ; 00493596
    MOV dword ptr [EAX + 0x4],EDX       ; 00493599
    MOV EDX,dword ptr [EAX + 0x4]       ; 0049359c
    MOV dword ptr [EAX],EDX             ; 0049359f
    JMP 0x00493542                      ; 004935a1
        ;   XREF to: 00493542 (UNCONDITIONAL_JUMP)  ; LAB_00493542


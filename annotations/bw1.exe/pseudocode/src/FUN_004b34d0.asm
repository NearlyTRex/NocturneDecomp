; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b34d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   FUN_004b7060 at 004b7090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b34d0
        ;   Label: FUN_004b34d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b34d1
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b34d5
    MOV EBX,dword ptr [ESP + 0x10]      ; 004b34d9
    LEA EAX,[EDX + 0x4]                 ; 004b34dd
    CMP EAX,ECX                         ; 004b34e0
    JNZ 0x004b3508                      ; 004b34e2
        ;   XREF to: 004b3508 (CONDITIONAL_JUMP)  ; LAB_004b3508
    LEA EAX,[EDX + 0x1c]                ; 004b34e4
        ;   Label: LAB_004b34e4
    CMP EAX,EBX                         ; 004b34e7
    JNZ 0x004b351c                      ; 004b34e9
        ;   XREF to: 004b351c (CONDITIONAL_JUMP)  ; LAB_004b351c
    MOV dword ptr [EDX],0x1             ; 004b34eb
        ;   Label: LAB_004b34eb
    MOV EAX,dword ptr [ESP + 0x14]      ; 004b34f1
    MOV dword ptr [EDX + 0x14],0x3e800000 ; 004b34f5
    MOV dword ptr [EDX + 0x18],EAX      ; 004b34fc
    MOV EAX,dword ptr [ESP + 0x18]      ; 004b34ff
    MOV dword ptr [EDX + 0x28],EAX      ; 004b3503
    POP EBX                             ; 004b3506
    RET                                 ; 004b3507
    PUSH ESI                            ; 004b3508
        ;   Label: LAB_004b3508
    MOV ESI,dword ptr [ECX]             ; 004b3509
    MOV dword ptr [EAX],ESI             ; 004b350b
    MOV ESI,dword ptr [ECX + 0x4]       ; 004b350d
    MOV dword ptr [EAX + 0x4],ESI       ; 004b3510
    MOV ESI,dword ptr [ECX + 0x8]       ; 004b3513
    MOV dword ptr [EAX + 0x8],ESI       ; 004b3516
    POP ESI                             ; 004b3519
    JMP 0x004b34e4                      ; 004b351a
        ;   XREF to: 004b34e4 (UNCONDITIONAL_JUMP)  ; LAB_004b34e4
    MOV ECX,dword ptr [EBX]             ; 004b351c
        ;   Label: LAB_004b351c
    MOV dword ptr [EAX],ECX             ; 004b351e
    MOV ECX,dword ptr [EBX + 0x4]       ; 004b3520
    MOV dword ptr [EAX + 0x4],ECX       ; 004b3523
    MOV ECX,dword ptr [EBX + 0x8]       ; 004b3526
    MOV dword ptr [EAX + 0x8],ECX       ; 004b3529
    JMP 0x004b34eb                      ; 004b352c
        ;   XREF to: 004b34eb (UNCONDITIONAL_JUMP)  ; LAB_004b34eb


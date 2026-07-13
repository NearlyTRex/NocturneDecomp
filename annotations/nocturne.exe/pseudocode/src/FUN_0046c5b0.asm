; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046c5b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)
;
;
; XREF[8]:
;   FUN_00453990 at 00453b61
;   FUN_00454100 at 0045431f
;   FUN_004c9580 at 004c99af
;   FUN_0050ec80 at 0050f063
;   FUN_00510710 at 005107d1
;   FUN_0051a470 at 0051a5ca
;   FUN_00534ad0 at 00534bc6
;   FUN_005520d0 at 0055217e
;
; Called Functions:
;   FUN_0046c460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046c5b0
        ;   Label: FUN_0046c5b0
    PUSH ESI                            ; 0046c5b1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046c5b2
    MOV EDX,dword ptr [ESP + 0x10]      ; 0046c5b6
    MOV ECX,dword ptr [ESP + 0x14]      ; 0046c5ba
    MOV EBX,dword ptr [ESP + 0x18]      ; 0046c5be
    CMP EAX,EDX                         ; 0046c5c2
    JNZ 0x0046c600                      ; 0046c5c4
        ;   XREF to: 0046c600 (CONDITIONAL_JUMP)  ; LAB_0046c600
    LEA EDX,[EAX + 0xc]                 ; 0046c5c6
        ;   Label: LAB_0046c5c6
    CMP EDX,ECX                         ; 0046c5c9
    JZ 0x0046c5dd                       ; 0046c5cb
        ;   XREF to: 0046c5dd (CONDITIONAL_JUMP)  ; LAB_0046c5dd
    MOV ESI,dword ptr [ECX]             ; 0046c5cd
    MOV dword ptr [EDX],ESI             ; 0046c5cf
    MOV ESI,dword ptr [ECX + 0x4]       ; 0046c5d1
    MOV dword ptr [EDX + 0x4],ESI       ; 0046c5d4
    MOV ESI,dword ptr [ECX + 0x8]       ; 0046c5d7
    MOV dword ptr [EDX + 0x8],ESI       ; 0046c5da
    LEA EDX,[EAX + 0x18]                ; 0046c5dd
        ;   Label: LAB_0046c5dd
    CMP EDX,EBX                         ; 0046c5e0
    JZ 0x0046c5f4                       ; 0046c5e2
        ;   XREF to: 0046c5f4 (CONDITIONAL_JUMP)  ; LAB_0046c5f4
    MOV ECX,dword ptr [EBX]             ; 0046c5e4
    MOV dword ptr [EDX],ECX             ; 0046c5e6
    MOV ECX,dword ptr [EBX + 0x4]       ; 0046c5e8
    MOV dword ptr [EDX + 0x4],ECX       ; 0046c5eb
    MOV ECX,dword ptr [EBX + 0x8]       ; 0046c5ee
    MOV dword ptr [EDX + 0x8],ECX       ; 0046c5f1
    PUSH EAX                            ; 0046c5f4
        ;   Label: LAB_0046c5f4
    CALL FUN_0046c460                   ; 0046c5f5
        ;   XREF to: 0046c460 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c460()
    ADD ESP,0x4                         ; 0046c5fa
    POP ESI                             ; 0046c5fd
    POP EBX                             ; 0046c5fe
    RET                                 ; 0046c5ff
    MOV ESI,dword ptr [EDX]             ; 0046c600
        ;   Label: LAB_0046c600
    MOV dword ptr [EAX],ESI             ; 0046c602
    MOV ESI,dword ptr [EDX + 0x4]       ; 0046c604
    MOV dword ptr [EAX + 0x4],ESI       ; 0046c607
    MOV ESI,dword ptr [EDX + 0x8]       ; 0046c60a
    MOV dword ptr [EAX + 0x8],ESI       ; 0046c60d
    JMP 0x0046c5c6                      ; 0046c610
        ;   XREF to: 0046c5c6 (UNCONDITIONAL_JUMP)  ; LAB_0046c5c6


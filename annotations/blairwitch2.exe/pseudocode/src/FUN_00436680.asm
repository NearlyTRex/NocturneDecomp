; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00436680(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   FUN_00436650 at 0043665d
;
; Called Functions:
;   FUN_004368b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436680
        ;   Label: FUN_00436680
    MOV EBX,dword ptr [ESP + 0x8]       ; 00436681
    MOV EAX,dword ptr [ESP + 0xc]       ; 00436685
    MOV dword ptr [EBX + 0xfb0],EAX     ; 00436689
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043668f
    MOV dword ptr [EBX + 0xfb4],EAX     ; 00436693
    MOV EAX,dword ptr [ESP + 0x14]      ; 00436699
    MOV dword ptr [EBX + 0xfb8],EAX     ; 0043669d
    MOV EAX,dword ptr [ESP + 0x18]      ; 004366a3
    MOV EDX,dword ptr [EBX + 0xfb8]     ; 004366a7
    MOV dword ptr [EBX + 0xfbc],EAX     ; 004366ad
    CMP EDX,0x1                         ; 004366b3
    JL 0x004366e5                       ; 004366b6
        ;   XREF to: 004366e5 (CONDITIONAL_JUMP)  ; LAB_004366e5
    CMP dword ptr [EBX + 0xfbc],0x1     ; 004366b8
        ;   Label: LAB_004366b8
    JGE 0x004366cb                      ; 004366bf
        ;   XREF to: 004366cb (CONDITIONAL_JUMP)  ; LAB_004366cb
    MOV dword ptr [EBX + 0xfbc],0x1     ; 004366c1
    PUSH EBX                            ; 004366cb
        ;   Label: LAB_004366cb
    CALL FUN_004368b0                   ; 004366cc
        ;   XREF to: 004368b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004368b0()
    ADD ESP,0x4                         ; 004366d1
    MOV dword ptr [EBX],0x0             ; 004366d4
    MOV EAX,EBX                         ; 004366da
    MOV dword ptr [EBX + 0x4],0x0       ; 004366dc
    POP EBX                             ; 004366e3
    RET                                 ; 004366e4
    MOV dword ptr [EBX + 0xfb8],0x1     ; 004366e5
        ;   Label: LAB_004366e5
    JMP 0x004366b8                      ; 004366ef
        ;   XREF to: 004366b8 (UNCONDITIONAL_JUMP)  ; LAB_004366b8


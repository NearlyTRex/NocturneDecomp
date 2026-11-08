; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_004453a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   FUN_00445370 at 0044537d
;
; Called Functions:
;   FUN_004455d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004453a0
        ;   Label: FUN_004453a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004453a1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004453a5
    MOV dword ptr [EBX + 0xfb0],EAX     ; 004453a9
    MOV EAX,dword ptr [ESP + 0x10]      ; 004453af
    MOV dword ptr [EBX + 0xfb4],EAX     ; 004453b3
    MOV EAX,dword ptr [ESP + 0x14]      ; 004453b9
    MOV dword ptr [EBX + 0xfb8],EAX     ; 004453bd
    MOV EAX,dword ptr [ESP + 0x18]      ; 004453c3
    MOV EDX,dword ptr [EBX + 0xfb8]     ; 004453c7
    MOV dword ptr [EBX + 0xfbc],EAX     ; 004453cd
    CMP EDX,0x1                         ; 004453d3
    JL 0x00445405                       ; 004453d6
        ;   XREF to: 00445405 (CONDITIONAL_JUMP)  ; LAB_00445405
    CMP dword ptr [EBX + 0xfbc],0x1     ; 004453d8
        ;   Label: LAB_004453d8
    JGE 0x004453eb                      ; 004453df
        ;   XREF to: 004453eb (CONDITIONAL_JUMP)  ; LAB_004453eb
    MOV dword ptr [EBX + 0xfbc],0x1     ; 004453e1
    PUSH EBX                            ; 004453eb
        ;   Label: LAB_004453eb
    CALL FUN_004455d0                   ; 004453ec
        ;   XREF to: 004455d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004455d0()
    ADD ESP,0x4                         ; 004453f1
    MOV dword ptr [EBX],0x0             ; 004453f4
    MOV EAX,EBX                         ; 004453fa
    MOV dword ptr [EBX + 0x4],0x0       ; 004453fc
    POP EBX                             ; 00445403
    RET                                 ; 00445404
    MOV dword ptr [EBX + 0xfb8],0x1     ; 00445405
        ;   Label: LAB_00445405
    JMP 0x004453d8                      ; 0044540f
        ;   XREF to: 004453d8 (UNCONDITIONAL_JUMP)  ; LAB_004453d8


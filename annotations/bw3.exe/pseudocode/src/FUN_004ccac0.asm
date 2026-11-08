; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ccac0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_004ce8a0 at 004ce8e7
;
; Called Functions:
;   FUN_0040cea0
;   FUN_00509e40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ccac0
        ;   Label: FUN_004ccac0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ccac1
    PUSH 0xf                            ; 004ccac5
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ccac7
    PUSH 0x0                            ; 004ccacb
    MOV dword ptr [EBX + 0x40],EAX      ; 004ccacd
    CALL FUN_0040cea0                   ; 004ccad0
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cea0()
    ADD ESP,0x8                         ; 004ccad5
    MOV EDX,dword ptr [ESP + 0x10]      ; 004ccad8
    PUSH EDX                            ; 004ccadc
    MOV ECX,dword ptr [ESP + 0x10]      ; 004ccadd
    PUSH ECX                            ; 004ccae1
    PUSH EBX                            ; 004ccae2
    MOV dword ptr [EBX + 0x44],EAX      ; 004ccae3
    CALL FUN_00509e40                   ; 004ccae6
        ;   XREF to: 00509e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00509e40()
    ADD ESP,0xc                         ; 004ccaeb
    POP EBX                             ; 004ccaee
    RET                                 ; 004ccaef


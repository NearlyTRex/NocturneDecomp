; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004349d0(int param_1)
;
;
; XREF[2]:
;   FUN_0043e930 at 0043ebe6
;   FUN_004bbf70 at 004bc284
;
; Called Functions:
;   FUN_00433760
;   FUN_004342d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004349d0
        ;   Label: FUN_004349d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004349d1
    PUSH EBX                            ; 004349d5
    ADD ESP,0x4                         ; 004349d6
    MOV EDX,dword ptr [EBX + 0x24]      ; 004349d9
    PUSH EDX                            ; 004349dc
    MOV ECX,dword ptr [EBX + 0x20]      ; 004349dd
    PUSH ECX                            ; 004349e0
    LEA EAX,[EBX + 0x4]                 ; 004349e1
    PUSH EAX                            ; 004349e4
    CALL FUN_004342d0                   ; 004349e5
        ;   XREF to: 004342d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004342d0()
    ADD ESP,0xc                         ; 004349ea
    LEA EAX,[EBX + 0x18]                ; 004349ed
    PUSH EAX                            ; 004349f0
    CALL FUN_00433760                   ; 004349f1
        ;   XREF to: 00433760 (UNCONDITIONAL_CALL)  ; undefined FUN_00433760()
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 004349f6
    MOV dword ptr [EBX + 0x30],0xffffffff ; 004349fd
    ADD ESP,0x4                         ; 00434a04
    MOV dword ptr [EBX + 0x28],0xffffffff ; 00434a07
    POP EBX                             ; 00434a0e
    RET                                 ; 00434a0f


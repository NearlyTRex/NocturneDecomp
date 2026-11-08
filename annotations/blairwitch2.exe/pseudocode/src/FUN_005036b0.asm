; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005036b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[4]:
;   FUN_004285f0 at 0042864d
;   FUN_004cea50 at 004ceb26
;   FUN_004ceb80 at 004cebf5
;   FUN_005105b0 at 00510720
;
; Called Functions:
;   FUN_00502fa0
;   FUN_00503620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005036b0
        ;   Label: FUN_005036b0
    PUSH ESI                            ; 005036b1
    PUSH 0x1                            ; 005036b2
    MOV EDX,dword ptr [ESP + 0x14]      ; 005036b4
    MOV EAX,dword ptr [ESP + 0x10]      ; 005036b8
    PUSH EDX                            ; 005036bc
    MOV ECX,dword ptr [EAX]             ; 005036bd
    PUSH ECX                            ; 005036bf
    CALL FUN_00502fa0                   ; 005036c0
        ;   XREF to: 00502fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00502fa0()
    ADD ESP,0xc                         ; 005036c5
    MOV EBX,dword ptr [ESP + 0x14]      ; 005036c8
    PUSH EBX                            ; 005036cc
    PUSH EAX                            ; 005036cd
    MOV ESI,dword ptr [ESP + 0x14]      ; 005036ce
    PUSH ESI                            ; 005036d2
    CALL FUN_00503620                   ; 005036d3
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005036d8
    POP ESI                             ; 005036db
    POP EBX                             ; 005036dc
    RET                                 ; 005036dd


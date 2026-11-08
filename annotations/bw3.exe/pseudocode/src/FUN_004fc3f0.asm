; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fc3f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   FUN_00526f50 at 00526f9e
;   FUN_00591f30 at 005935c4
;   FUN_005a0be0 at 005a169f
;
; Called Functions:
;   FUN_004fb9c0
;   FUN_004fc420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc3f0
        ;   Label: FUN_004fc3f0
    PUSH 0x1                            ; 004fc3f1
    MOV EDX,dword ptr [ESP + 0x10]      ; 004fc3f3
    MOV EAX,dword ptr [ESP + 0xc]       ; 004fc3f7
    PUSH EDX                            ; 004fc3fb
    MOV ECX,dword ptr [EAX]             ; 004fc3fc
    PUSH ECX                            ; 004fc3fe
    CALL FUN_004fb9c0                   ; 004fc3ff
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fb9c0()
    ADD ESP,0xc                         ; 004fc404
    PUSH dword ptr [ESP + 0x10]         ; 004fc407
    PUSH EAX                            ; 004fc40b
    MOV EBX,dword ptr [ESP + 0x10]      ; 004fc40c
    PUSH EBX                            ; 004fc410
    CALL FUN_004fc420                   ; 004fc411
        ;   XREF to: 004fc420 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc420()
    ADD ESP,0xc                         ; 004fc416
    POP EBX                             ; 004fc419
    RET                                 ; 004fc41a


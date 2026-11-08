; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a3280(int param_1)
;
;
; XREF[1]:
;   FUN_004a3630 at 004a365b
;
; Called Functions:
;   FUN_00480d20
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a3280
        ;   Label: FUN_004a3280
    ADD EAX,0x148                       ; 004a3284
    PUSH EAX                            ; 004a3289
    CALL FUN_00480d20                   ; 004a328a
        ;   XREF to: 00480d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00480d20()
    SUB EAX,0x148                       ; 004a328f
    MOV byte ptr [EAX + 0x40],0x0       ; 004a3294
    MOV dword ptr [EAX + 0x144],0x0     ; 004a3298
    MOV dword ptr [EAX + 0x140],0xffffffff ; 004a32a2
    MOV dword ptr [EAX + 0x158],0xffffffff ; 004a32ac
    ADD ESP,0x4                         ; 004a32b6
    MOV byte ptr [EAX],0x0              ; 004a32b9
    RET                                 ; 004a32bc


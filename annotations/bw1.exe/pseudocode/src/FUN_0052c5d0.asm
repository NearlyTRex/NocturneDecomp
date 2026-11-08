; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052c5d0(int param_1)
;
;
; XREF[1]:
;   FUN_00503a30 at 00503a3f
;
; Called Functions:
;   FUN_0052cab0
;   FUN_0059cc40
;   FUN_0059ef20
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 0052c5d0
        ;   Label: FUN_0052c5d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0052c5d2
    PUSH EDX                            ; 0052c5d6
    CALL FUN_0052cab0                   ; 0052c5d7
        ;   XREF to: 0052cab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052cab0()
    ADD ESP,0x8                         ; 0052c5dc
    MOV EAX,dword ptr [ESP + 0x4]       ; 0052c5df
    ADD EAX,0x178                       ; 0052c5e3
    PUSH EAX                            ; 0052c5e8
    CALL FUN_0059cc40                   ; 0052c5e9
        ;   XREF to: 0059cc40 (UNCONDITIONAL_CALL)  ; undefined FUN_0059cc40()
    ADD ESP,0x4                         ; 0052c5ee
    JMP 0x0059ef20                      ; 0052c5f1
        ;   XREF to: 0059ef20 (UNCONDITIONAL_CALL)


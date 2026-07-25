; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056d488(undefined4 *param_1,int param_2)
;
;
; XREF[1]:
;   FUN_0056d4ab at 0056d4bb
;
; Called Functions:
;   FUN_0056d340
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0056d488
        ;   Label: FUN_0056d488
    PUSH EAX                            ; 0056d48c
    MOV dword ptr [EAX + 0x20],0x0      ; 0056d48d
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056d494
    PUSH 0x0                            ; 0056d498
    MOV EDX,dword ptr [EAX]             ; 0056d49a
    PUSH EDX                            ; 0056d49c
    PUSH 0x63df                         ; 0056d49d
    CALL FUN_0056d340                   ; 0056d4a2
        ;   XREF to: 0056d340 (UNCONDITIONAL_CALL)  ; undefined FUN_0056d340()
    ADD ESP,0x10                        ; 0056d4a7
    RET                                 ; 0056d4aa


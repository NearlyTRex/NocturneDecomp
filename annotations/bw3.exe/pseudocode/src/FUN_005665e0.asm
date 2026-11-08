; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005665e0(int param_1)
;
;
; XREF[1]:
;   FUN_00564be0 at 00564c70
;
; Called Functions:
;   FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005665e0
        ;   Label: FUN_005665e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005665e1
    PUSH 0x1dc8                         ; 005665e5
    PUSH 0x0                            ; 005665ea
    PUSH EBX                            ; 005665ec
    CALL FUN_005a28f0                   ; 005665ed
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    MOV word ptr [EBX + 0x200],0x100    ; 005665f2
    MOV dword ptr [EBX + 0x208],0x0     ; 005665fb
    MOV AH,byte ptr [EBX + 0x208]       ; 00566605
    MOV word ptr [EBX + 0x204],0x1      ; 0056660b
    OR AH,0x1                           ; 00566614
    ADD ESP,0xc                         ; 00566617
    MOV byte ptr [EBX + 0x208],AH       ; 0056661a
    POP EBX                             ; 00566620
    RET                                 ; 00566621


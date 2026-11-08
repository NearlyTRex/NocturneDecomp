; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048aab0(int param_1)
;
;
; XREF[2]:
;   FUN_0048a930 at 0048a948
;   FUN_0048adc0 at 0048add0
;
; Referenced Globals:
;   undefined4 DAT_005ff640
;
; Called Functions:
;   FUN_005c030f
;   FUN_005c0336
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048aab0
        ;   Label: FUN_0048aab0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0048aab1
    PUSH 0x5ff640                       ; 0048aab5 | DAT_005ff640
    MOV EDX,dword ptr [EBX + 0x50]      ; 0048aaba
    PUSH EDX                            ; 0048aabd
    CALL FUN_005c030f                   ; 0048aabe
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 0048aac3
    PUSH EAX                            ; 0048aac6
    CALL FUN_005c0336                   ; 0048aac7
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    MOV dword ptr [EBX + 0x50],0x0      ; 0048aacc
    MOV dword ptr [EBX + 0x48],0x0      ; 0048aad3
    MOV EAX,dword ptr [EBX + 0x48]      ; 0048aada
    MOV dword ptr [EBX + 0x44],EAX      ; 0048aadd
    ADD ESP,0x4                         ; 0048aae0
    MOV dword ptr [EBX + 0x40],EAX      ; 0048aae3
    POP EBX                             ; 0048aae6
    RET                                 ; 0048aae7


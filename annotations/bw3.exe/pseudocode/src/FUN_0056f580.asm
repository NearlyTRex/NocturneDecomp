; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056f580(undefined1 *param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_00505a30 at 00505d98
;   FUN_0056f820 at 0056f82c
;
; Referenced Globals:
;   TerminatedCString s_d_d_d_d_005d6885
;
; Called Functions:
;   FUN_005a28c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056f580
        ;   Label: FUN_0056f580
    XOR EDX,EDX                         ; 0056f584
    MOV DL,byte ptr [EAX + 0x3]         ; 0056f586
    PUSH EDX                            ; 0056f589
    XOR EDX,EDX                         ; 0056f58a
    MOV DL,byte ptr [EAX + 0x2]         ; 0056f58c
    PUSH EDX                            ; 0056f58f
    XOR EDX,EDX                         ; 0056f590
    MOV DL,byte ptr [EAX + 0x1]         ; 0056f592
    PUSH EDX                            ; 0056f595
    MOV AL,byte ptr [EAX]               ; 0056f596
    AND EAX,0xff                        ; 0056f598
    PUSH EAX                            ; 0056f59d
    PUSH 0x5d6885                       ; 0056f59e | = "%d.%d.%d.%d"
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0056f5a3
    PUSH EDX                            ; 0056f5a7
    CALL FUN_005a28c0                   ; 0056f5a8
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x18                        ; 0056f5ad
    RET                                 ; 0056f5b0


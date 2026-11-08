; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00522fa0(undefined4 param_1)
;
;
; XREF[6]:
;   FUN_004149f0 at 00414a14
;   FUN_0050f0c0 at 0050f0e3
;   FUN_005202f0 at 00520314
;   FUN_00532770 at 0053278b
;   FUN_00591f10 at 00591f42
;   FUN_005a5170 at 005a51bc
;
; Called Functions:
;   FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH 0x604280                       ; 00522fa0
        ;   Label: FUN_00522fa0
    PUSH 0x2                            ; 00522fa5
    MOV EDX,dword ptr [ESP + 0xc]       ; 00522fa7
    PUSH EDX                            ; 00522fab
    CALL FUN_005c0357                   ; 00522fac
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 00522fb1
    MOV dword ptr [EAX + 0xc28],0x1     ; 00522fb4
    RET                                 ; 00522fbe


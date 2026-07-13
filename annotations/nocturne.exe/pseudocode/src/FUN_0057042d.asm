; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057042d(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_0056b75d at 0056b784
;   FUN_0056b896 at 0056b8a6
;
; Referenced Globals:
;   undefined1* PTR_FUN_005a4b0c = 0056ff82
;
; Called Functions:
;   FUN_0056fe12
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057042d
        ;   Label: FUN_0057042d
    PUSH EDX                            ; 00570431
    CALL FUN_0056fe12                   ; 00570432
        ;   XREF to: 0056fe12 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fe12()
    MOV dword ptr [EAX + 0x2c],0xffffffff ; 00570437
    ADD ESP,0x4                         ; 0057043e
    MOV dword ptr [EAX + 0x28],0x5a4b0c ; 00570441 | PTR_FUN_005a4b0c
    RET                                 ; 00570448


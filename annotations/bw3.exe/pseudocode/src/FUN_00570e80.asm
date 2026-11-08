; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00570e80(int param_1)
;
;
; XREF[1]:
;   FUN_00571f10 at 00571f5f
;
; Called Functions:
;   FUN_00570fb0
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00570e80
        ;   Label: FUN_00570e80
    MOV EDX,dword ptr [ESP + 0x8]       ; 00570e82
    PUSH EDX                            ; 00570e86
    CALL FUN_00570fb0                   ; 00570e87
        ;   XREF to: 00570fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00570fb0()
    ADD ESP,0x8                         ; 00570e8c
    MOV EAX,dword ptr [ESP + 0x4]       ; 00570e8f
    MOV dword ptr [EAX + 0x3bc],0x0     ; 00570e93
    RET                                 ; 00570e9d


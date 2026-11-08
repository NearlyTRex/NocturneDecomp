; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d6410(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004d5430
;   FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6410
        ;   Label: FUN_004d6410
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d6411
    PUSH EDX                            ; 004d6415
    CALL FUN_004d5430                   ; 004d6416
        ;   XREF to: 004d5430 (UNCONDITIONAL_CALL)  ; undefined FUN_004d5430()
    ADD ESP,0x4                         ; 004d641b
    PUSH 0x5c5443                       ; 004d641e
    MOV EBX,EAX                         ; 004d6423
    ADD EAX,0x158                       ; 004d6425
    PUSH EAX                            ; 004d642a
    MOV dword ptr [EAX + -0x4],0x5e1d04 ; 004d642b
    CALL FUN_0054eae0                   ; 004d6432
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    MOV dword ptr [EBX + 0x2538],0x42700000 ; 004d6437
    ADD ESP,0x8                         ; 004d6441
    MOV dword ptr [EBX + 0xce5c],0x41c80000 ; 004d6444
    MOV EAX,EBX                         ; 004d644e
    MOV dword ptr [EBX + 0xce60],0x41a00000 ; 004d6450
    POP EBX                             ; 004d645a
    RET                                 ; 004d645b


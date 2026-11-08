; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d65f0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f8d60
;   undefined4 DAT_005f8d64
;
; Called Functions:
;   FUN_00487db0
;   FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d65f0
        ;   Label: FUN_004d65f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d65f1
    PUSH EDX                            ; 004d65f5
    CALL FUN_00487db0                   ; 004d65f6
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487db0()
    ADD ESP,0x4                         ; 004d65fb
    PUSH 0x5da92e                       ; 004d65fe
    MOV EBX,EAX                         ; 004d6603
    ADD EAX,0x2b4                       ; 004d6605
    PUSH EAX                            ; 004d660a
    MOV dword ptr [EAX + -0x4],0x5f8d74 ; 004d660b
    CALL FUN_005478b0                   ; 004d6612
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    FLD float ptr [0x005f8d60]          ; 004d6617 | DAT_005f8d60
    MOV dword ptr [EBX + 0x3430],0x3f19999a ; 004d661d
    FLD float ptr [0x005f8d64]          ; 004d6627 | DAT_005f8d64
    MOV dword ptr [EBX + 0x3434],0x3f000000 ; 004d662d
    ADD ESP,0x8                         ; 004d6637
    MOV dword ptr [EBX + 0x282c],0x0    ; 004d663a
    MOV EAX,EBX                         ; 004d6644
    FXCH                                ; 004d6646
    FSTP float ptr [EBX + 0x3438]       ; 004d6648
    FSTP float ptr [EBX + 0x343c]       ; 004d664e
    POP EBX                             ; 004d6654
    RET                                 ; 004d6655


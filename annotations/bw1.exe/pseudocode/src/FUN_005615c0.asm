; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005615c0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006054dc
;
; Called Functions:
;   FUN_00468950
;   FUN_005ad4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005615c0
        ;   Label: FUN_005615c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005615c1
    PUSH EDX                            ; 005615c5
    CALL FUN_005ad4c0                   ; 005615c6
        ;   XREF to: 005ad4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad4c0()
    ADD ESP,0x4                         ; 005615cb
    PUSH 0x5f1998                       ; 005615ce
    MOV EBX,EAX                         ; 005615d3
    ADD EAX,0x158                       ; 005615d5
    PUSH EAX                            ; 005615da
    MOV dword ptr [EAX + -0x4],0x6054e4 ; 005615db
    CALL FUN_00468950                   ; 005615e2
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    MOV dword ptr [EBX + 0x578],0x41200000 ; 005615e7
    MOV dword ptr [EBX + 0x2d8],0x1     ; 005615f1
    MOV dword ptr [EBX + 0x2dc],0x2     ; 005615fb
    MOV dword ptr [EBX + 0x2e0],0x1     ; 00561605
    MOV dword ptr [EBX + 0x2e4],0x1     ; 0056160f
    MOV dword ptr [EBX + 0x2e8],0x41700000 ; 00561619
    FLD float ptr [0x006054dc]          ; 00561623 | DAT_006054dc
    MOV dword ptr [EBX + 0x2ec],0x0     ; 00561629
    ADD ESP,0x8                         ; 00561633
    MOV dword ptr [EBX + 0x57c],0x0     ; 00561636
    MOV EAX,EBX                         ; 00561640
    FSTP float ptr [EBX + 0x564]        ; 00561642
    POP EBX                             ; 00561648
    RET                                 ; 00561649


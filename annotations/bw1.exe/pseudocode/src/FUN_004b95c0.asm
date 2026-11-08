; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004b95c0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006005bc
;
; Called Functions:
;   FUN_00468950
;   FUN_005ad4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b95c0
        ;   Label: FUN_004b95c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b95c1
    PUSH EDX                            ; 004b95c5
    CALL FUN_005ad4c0                   ; 004b95c6
        ;   XREF to: 005ad4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad4c0()
    ADD ESP,0x4                         ; 004b95cb
    PUSH 0x5df7e0                       ; 004b95ce
    MOV EBX,EAX                         ; 004b95d3
    ADD EAX,0x158                       ; 004b95d5
    PUSH EAX                            ; 004b95da
    MOV dword ptr [EAX + -0x4],0x6005d4 ; 004b95db
    CALL FUN_00468950                   ; 004b95e2
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    MOV dword ptr [EBX + 0x57c],0x0     ; 004b95e7
    MOV dword ptr [EBX + 0x578],0x0     ; 004b95f1
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004b95fb
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004b9605
    MOV dword ptr [EBX + 0x2e0],0x2     ; 004b960f
    MOV dword ptr [EBX + 0x2e4],0x0     ; 004b9619
    MOV dword ptr [EBX + 0x2e8],0x41700000 ; 004b9623
    MOV dword ptr [EBX + 0x2ec],0x1     ; 004b962d
    FLD float ptr [0x006005bc]          ; 004b9637 | DAT_006005bc
    MOV dword ptr [EBX + 0x584],0x0     ; 004b963d
    ADD ESP,0x8                         ; 004b9647
    MOV dword ptr [EBX + 0x580],0x0     ; 004b964a
    MOV EAX,EBX                         ; 004b9654
    FSTP float ptr [EBX + 0x564]        ; 004b9656
    POP EBX                             ; 004b965c
    RET                                 ; 004b965d


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0050bb50(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)
;
;
; XREF[3]:
;   FUN_00482950 at 00482c14
;   FUN_00482f50 at 0048325f
;   FUN_00555020 at 0055523e
;
; Referenced Globals:
;   undefined4 DAT_005c5014
;   undefined4 DAT_005c5034
;   undefined4 DAT_005c5038
;   undefined4 DAT_005c503c
;   undefined4 DAT_005c5064
;   undefined4 DAT_005c5068
;   undefined4 DAT_005c506c
;   undefined4 DAT_005c5094
;   undefined4 DAT_005c5098
;   undefined4 DAT_005c509c
;
; Called Functions:
;   FUN_0050b7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050bb50
        ;   Label: FUN_0050bb50
    PUSH ESI                            ; 0050bb51
    PUSH EDI                            ; 0050bb52
    MOV EBX,dword ptr [ESP + 0x20]      ; 0050bb53
    PUSH 0x0                            ; 0050bb57
    MOV EDX,dword ptr [ESP + 0x20]      ; 0050bb59
    PUSH EDX                            ; 0050bb5d
    MOV ECX,dword ptr [ESP + 0x20]      ; 0050bb5e
    PUSH ECX                            ; 0050bb62
    MOV ESI,dword ptr [ESP + 0x20]      ; 0050bb63
    PUSH ESI                            ; 0050bb67
    MOV EDI,dword ptr [ESP + 0x20]      ; 0050bb68
    PUSH EDI                            ; 0050bb6c
    CALL FUN_0050b7f0                   ; 0050bb6d
        ;   XREF to: 0050b7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b7f0()
    ADD ESP,0x14                        ; 0050bb72
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0050bb75
    LEA EAX,[EDX*0x4 + 0x0]             ; 0050bb79
    SUB EAX,EDX                         ; 0050bb80
    MOV EDX,0x5c5014                    ; 0050bb82 | DAT_005c5014
    SHL EAX,0x4                         ; 0050bb87
    ADD EDX,EAX                         ; 0050bb8a
    DEC EBX                             ; 0050bb8c
    LEA EAX,[EDX + 0x30]                ; 0050bb8d
    TEST EBX,EBX                        ; 0050bb90
    JLE 0x0050bbb0                      ; 0050bb92
        ;   XREF to: 0050bbb0 (CONDITIONAL_JUMP)  ; LAB_0050bbb0
    MOV ECX,dword ptr [EDX + 0x20]      ; 0050bb94 | DAT_005c5034
        ;   Label: LAB_0050bb94
    MOV dword ptr [EAX + 0x20],ECX      ; 0050bb97 | DAT_005c5064 | DAT_005c5094
    MOV ECX,dword ptr [EDX + 0x24]      ; 0050bb9a | DAT_005c5038
    MOV dword ptr [EAX + 0x24],ECX      ; 0050bb9d | DAT_005c5068 | DAT_005c5098
    ADD EAX,0x30                        ; 0050bba0
    MOV ECX,dword ptr [EDX + 0x28]      ; 0050bba3 | DAT_005c503c
    DEC EBX                             ; 0050bba6
    MOV dword ptr [EAX + -0x8],ECX      ; 0050bba7 | DAT_005c506c | DAT_005c509c
    TEST EBX,EBX                        ; 0050bbaa
    JG 0x0050bb94                       ; 0050bbac
        ;   XREF to: 0050bb94 (CONDITIONAL_JUMP)  ; LAB_0050bb94
    MOV EAX,EAX                         ; 0050bbae
    POP EDI                             ; 0050bbb0
        ;   Label: LAB_0050bbb0
    POP ESI                             ; 0050bbb1
    POP EBX                             ; 0050bbb2
    RET                                 ; 0050bbb3


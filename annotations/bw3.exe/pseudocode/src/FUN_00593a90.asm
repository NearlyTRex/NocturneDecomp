; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00593a90(int param_1)
;
;
; XREF[1]:
;   FUN_00591f30 at 005923dc
;
; Called Functions:
;   FUN_0040cea0
;   FUN_004fc0d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00593a90
        ;   Label: FUN_00593a90
    MOV EAX,dword ptr [ESP + 0x8]       ; 00593a91
    LEA EBX,[EAX + 0x158]               ; 00593a95
    MOV EDX,dword ptr [EAX + 0xd098]    ; 00593a9b
    MOV dword ptr [EAX + 0xd0a8],0x0    ; 00593aa1
    TEST EDX,EDX                        ; 00593aab
    JNZ 0x00593ace                      ; 00593aad
        ;   XREF to: 00593ace (CONDITIONAL_JUMP)  ; LAB_00593ace
    PUSH 0x64                           ; 00593aaf
    PUSH EDX                            ; 00593ab1
    CALL FUN_0040cea0                   ; 00593ab2
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cea0()
    ADD ESP,0x8                         ; 00593ab7
    CMP EAX,0x55                        ; 00593aba
    JGE 0x00593ace                      ; 00593abd
        ;   XREF to: 00593ace (CONDITIONAL_JUMP)  ; LAB_00593ace
    PUSH 0x1                            ; 00593abf
    PUSH 0x1                            ; 00593ac1
    PUSH EBX                            ; 00593ac3
    CALL FUN_004fc0d0                   ; 00593ac4
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 00593ac9
    POP EBX                             ; 00593acc
    RET                                 ; 00593acd
    PUSH 0x1                            ; 00593ace
        ;   Label: LAB_00593ace
    PUSH 0x2                            ; 00593ad0
    PUSH EBX                            ; 00593ad2
    CALL FUN_004fc0d0                   ; 00593ad3
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 00593ad8
    POP EBX                             ; 00593adb
    RET                                 ; 00593adc


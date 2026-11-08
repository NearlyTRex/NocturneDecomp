; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00571030(int param_1)
;
;
; Called Functions:
;   FUN_0056f8d0
;   FUN_00570d30
;   FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571030
        ;   Label: FUN_00571030
    MOV EBX,dword ptr [ESP + 0x8]       ; 00571031
    ADD EBX,0xd2c                       ; 00571035
    PUSH EBX                            ; 0057103b
    CALL FUN_0056f8d0                   ; 0057103c
        ;   XREF to: 0056f8d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f8d0()
    ADD ESP,0x4                         ; 00571041
    ADD EAX,0x4                         ; 00571044
    PUSH EAX                            ; 00571047
    CALL FUN_00570d30                   ; 00571048
        ;   XREF to: 00570d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00570d30()
    ADD ESP,0x4                         ; 0057104d
    PUSH 0x200                          ; 00571050
    PUSH 0x0                            ; 00571055
    LEA EBX,[EAX + 0xfffff2d0]          ; 00571057
    PUSH EBX                            ; 0057105d
    CALL FUN_005a28f0                   ; 0057105e
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 00571063
    PUSH 0x200                          ; 00571066
    PUSH 0x0                            ; 0057106b
    LEA EAX,[EBX + 0x200]               ; 0057106d
    PUSH EAX                            ; 00571073
    CALL FUN_005a28f0                   ; 00571074
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 00571079
    PUSH 0x100                          ; 0057107c
    PUSH 0x0                            ; 00571081
    LEA EAX,[EBX + 0x400]               ; 00571083
    PUSH EAX                            ; 00571089
    CALL FUN_005a28f0                   ; 0057108a
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 0057108f
    PUSH 0x100                          ; 00571092
    PUSH 0x0                            ; 00571097
    LEA EAX,[EBX + 0x500]               ; 00571099
    PUSH EAX                            ; 0057109f
    CALL FUN_005a28f0                   ; 005710a0
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 005710a5
    PUSH 0x300                          ; 005710a8
    PUSH 0x0                            ; 005710ad
    LEA EAX,[EBX + 0xa18]               ; 005710af
    PUSH EAX                            ; 005710b5
    CALL FUN_005a28f0                   ; 005710b6
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    MOV dword ptr [EBX + 0x608],0x0     ; 005710bb
    MOV dword ptr [EBX + 0x60c],0x0     ; 005710c5
    MOV dword ptr [EBX + 0xa10],0x0     ; 005710cf
    MOV dword ptr [EBX + 0xa14],0x0     ; 005710d9
    MOV dword ptr [EBX + 0xd20],0x0     ; 005710e3
    MOV dword ptr [EBX + 0xd18],0x0     ; 005710ed
    ADD ESP,0xc                         ; 005710f7
    MOV dword ptr [EBX + 0xd24],0x0     ; 005710fa
    MOV EAX,EBX                         ; 00571104
    MOV dword ptr [EBX + 0xd28],0x0     ; 00571106
    POP EBX                             ; 00571110
    RET                                 ; 00571111


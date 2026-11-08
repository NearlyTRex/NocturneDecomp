; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00406da0(int param_1)
;
;
; XREF[22]:
;   FUN_00404140 at 00404187
;   FUN_00405ac0 at 00405afa
;   FUN_004060c0 at 00406107
;   FUN_004062b0 at 00406310
;   FUN_00406d80 at 00406d88
;   FUN_00410670 at 00410705
;   FUN_0046b8e0 at 0046b8e5
;   FUN_0046b8f0 at 0046b909
;   FUN_0047afb0 at 0047afe7
;   FUN_0047b800 at 0047b9f3
;   ... and 12 more
;
; Referenced Globals:
;   undefined4 DAT_006093c0
;   undefined4 DAT_006141d8
;   undefined4 DAT_0070ca80
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00406da0
        ;   Label: FUN_00406da0
    SAR EDX,0x8                         ; 00406da4
    TEST EDX,EDX                        ; 00406da7
    JL 0x00406de1                       ; 00406da9
        ;   XREF to: 00406de1 (CONDITIONAL_JUMP)  ; LAB_00406de1
    CMP EDX,0xff                        ; 00406dab
    JLE 0x00406db8                      ; 00406db1
        ;   XREF to: 00406db8 (CONDITIONAL_JUMP)  ; LAB_00406db8
    MOV EDX,0xff                        ; 00406db3
    MOV EAX,EDX                         ; 00406db8
        ;   Label: LAB_00406db8
    MOV ECX,EDX                         ; 00406dba
    SHL EAX,0x8                         ; 00406dbc
    OR ECX,EAX                          ; 00406dbf
    MOV EAX,EDX                         ; 00406dc1
    SHL EAX,0x10                        ; 00406dc3
    OR ECX,EAX                          ; 00406dc6
    MOV EAX,ECX                         ; 00406dc8
    XOR EAX,0xffffff                    ; 00406dca
    MOV dword ptr [0x006093c0],ECX      ; 00406dcf | DAT_006093c0
    MOV [0x0070ca80],EAX                ; 00406dd5 | DAT_0070ca80
    MOV dword ptr [0x006141d8],EDX      ; 00406dda | DAT_006141d8
    RET                                 ; 00406de0
    XOR EDX,EDX                         ; 00406de1
        ;   Label: LAB_00406de1
    JMP 0x00406db8                      ; 00406de3
        ;   XREF to: 00406db8 (UNCONDITIONAL_JUMP)  ; LAB_00406db8


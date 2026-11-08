; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00465da0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[8]:
;   FUN_0049e090 at 0049e168
;   FUN_00500090 at 00500148
;   FUN_005017f0 at 005018a8
;   FUN_00550da0 at 00550ec3
;   FUN_00551170 at 005512b6
;   FUN_0055d0e0 at 0055d146
;   FUN_00561650 at 00561728
;   FUN_005adb20 at 005adcd1
;
; Referenced Globals:
;   undefined4 DAT_005d929c
;   undefined4 DAT_005d92a4
;   undefined4 DAT_00611328
;   undefined4 DAT_00611348
;
; Called Functions:
;   FUN_00463e30
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00465da0
        ;   Label: FUN_00465da0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00465da3
    MOV EDX,dword ptr [ESP + 0xc]       ; 00465da7
    MOV dword ptr [EAX + 0x2fa8],EDX    ; 00465dab
    CMP dword ptr [EAX + 0x1cc0],0x100  ; 00465db1
    JLE 0x00465df3                      ; 00465dbb
        ;   XREF to: 00465df3 (CONDITIONAL_JUMP)  ; LAB_00465df3
    PUSH EBX                            ; 00465dbd
    FLD float ptr [EAX + 0x2fa8]        ; 00465dbe
    PUSH 0x0                            ; 00465dc4
    FMUL double ptr [0x005d92a4]        ; 00465dc6 | DAT_005d92a4
    PUSH 0x0                            ; 00465dcc
    CALL FUN_005c03a0                   ; 00465dce
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0xc]         ; 00465dd3
    MOV EDX,dword ptr [ESP + 0xc]       ; 00465dd7
    PUSH 0x0                            ; 00465ddb
    MOV EBX,dword ptr [EDX*0x4 + 0x611348] ; 00465ddd | DAT_00611348
    PUSH EBX                            ; 00465de4
    PUSH EAX                            ; 00465de5
    CALL FUN_00463e30                   ; 00465de6
        ;   XREF to: 00463e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00463e30()
    ADD ESP,0x14                        ; 00465deb
    POP EBX                             ; 00465dee
    ADD ESP,0x4                         ; 00465def
    RET                                 ; 00465df2
    FLD float ptr [EAX + 0x2fa8]        ; 00465df3
        ;   Label: LAB_00465df3
    PUSH 0x0                            ; 00465df9
    FMUL double ptr [0x005d929c]        ; 00465dfb | DAT_005d929c
    PUSH 0x0                            ; 00465e01
    CALL FUN_005c03a0                   ; 00465e03
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x8]         ; 00465e08
    MOV EDX,dword ptr [ESP + 0x8]       ; 00465e0c
    PUSH 0x0                            ; 00465e10
    MOV ECX,dword ptr [EDX*0x4 + 0x611328] ; 00465e12 | DAT_00611328
    PUSH ECX                            ; 00465e19
    PUSH EAX                            ; 00465e1a
    CALL FUN_00463e30                   ; 00465e1b
        ;   XREF to: 00463e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00463e30()
    ADD ESP,0x14                        ; 00465e20
    ADD ESP,0x4                         ; 00465e23
    RET                                 ; 00465e26


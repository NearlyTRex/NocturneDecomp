; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00460aa0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x214]:1  local_214
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[17]:
;   FUN_0043e930 at 0043eb4c
;   FUN_004478d0 at 0044790b
;   FUN_00489670 at 0048a8c0
;   FUN_004a41b0 at 004a4225
;   FUN_004a7d00 at 004a7d8c
;   FUN_004bcbf0 at 004bcc37
;   FUN_00500720 at 00500754
;   FUN_00509cd0 at 00509ce2
;   FUN_0050f9e0 at 0050fa00
;   FUN_00521cf0 at 00521d17
;   ... and 7 more
;
; Called Functions:
;   FUN_00460910
;   FUN_00460980
;
; *****************************************************************************

section .text

    SUB ESP,0x214                       ; 00460aa0
        ;   Label: FUN_00460aa0
    MOV EDX,dword ptr [ESP + 0x21c]     ; 00460aa6
    PUSH EDX                            ; 00460aad
    MOV ECX,dword ptr [ESP + 0x21c]     ; 00460aae
    PUSH ECX                            ; 00460ab5
    LEA EAX,[ESP + 0x8]                 ; 00460ab6
    PUSH EAX                            ; 00460aba
    CALL FUN_00460910                   ; 00460abb
        ;   XREF to: 00460910 (UNCONDITIONAL_CALL)  ; undefined FUN_00460910()
    ADD ESP,0xc                         ; 00460ac0
    MOV EAX,ESP                         ; 00460ac3
    PUSH EAX                            ; 00460ac5
    CALL FUN_00460980                   ; 00460ac6
        ;   XREF to: 00460980 (UNCONDITIONAL_CALL)  ; undefined FUN_00460980()
    ADD ESP,0x4                         ; 00460acb
    TEST EAX,EAX                        ; 00460ace
    JZ 0x00460ae0                       ; 00460ad0
        ;   XREF to: 00460ae0 (CONDITIONAL_JUMP)  ; LAB_00460ae0
    MOV EAX,dword ptr [ESP + 0x204]     ; 00460ad2
    ADD ESP,0x214                       ; 00460ad9
    RET                                 ; 00460adf
    MOV EAX,0xffffffff                  ; 00460ae0
        ;   Label: LAB_00460ae0
    ADD ESP,0x214                       ; 00460ae5
    RET                                 ; 00460aeb


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004657f0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x214]:1  local_214
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[17]:
;   FUN_0044c130 at 0044c34c
;   FUN_00459980 at 004599bb
;   FUN_0048c2e0 at 0048d5ab
;   FUN_004aa810 at 004aa887
;   FUN_004af920 at 004af9ac
;   FUN_004bec20 at 004bec5b
;   FUN_004f7f20 at 004f7f54
;   FUN_005027b0 at 005027c2
;   FUN_005084c0 at 005084e0
;   FUN_00529410 at 00529437
;   ... and 7 more
;
; Called Functions:
;   FUN_00465660
;   FUN_004656d0
;
; *****************************************************************************

section .text

    SUB ESP,0x214                       ; 004657f0
        ;   Label: FUN_004657f0
    MOV EDX,dword ptr [ESP + 0x21c]     ; 004657f6
    PUSH EDX                            ; 004657fd
    MOV ECX,dword ptr [ESP + 0x21c]     ; 004657fe
    PUSH ECX                            ; 00465805
    LEA EAX,[ESP + 0x8]                 ; 00465806
    PUSH EAX                            ; 0046580a
    CALL FUN_00465660                   ; 0046580b
        ;   XREF to: 00465660 (UNCONDITIONAL_CALL)  ; undefined FUN_00465660()
    ADD ESP,0xc                         ; 00465810
    MOV EAX,ESP                         ; 00465813
    PUSH EAX                            ; 00465815
    CALL FUN_004656d0                   ; 00465816
        ;   XREF to: 004656d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004656d0()
    ADD ESP,0x4                         ; 0046581b
    TEST EAX,EAX                        ; 0046581e
    JZ 0x00465830                       ; 00465820
        ;   XREF to: 00465830 (CONDITIONAL_JUMP)  ; LAB_00465830
    MOV EAX,dword ptr [ESP + 0x204]     ; 00465822
    ADD ESP,0x214                       ; 00465829
    RET                                 ; 0046582f
    MOV EAX,0xffffffff                  ; 00465830
        ;   Label: LAB_00465830
    ADD ESP,0x214                       ; 00465835
    RET                                 ; 0046583b


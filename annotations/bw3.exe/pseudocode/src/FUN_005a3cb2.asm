; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a3cb2(int param_1)
;
;
; XREF[19]:
;   FUN_0040e720 at 0040e768
;   FUN_00414550 at 00414568
;   FUN_0043f920 at 0043f949
;   FUN_00459710 at 00459787
;   FUN_00459f50 at 00459f59
;   FUN_004a91b0 at 004a91c3
;   FUN_004a9330 at 004a9482
;   FUN_004a9c80 at 004a9c9e
;   FUN_004aa6d0 at 004aa6d9
;   FUN_004ced40 at 004ced50
;   ... and 9 more
;
; Referenced Globals:
;   undefined4 DAT_02d25908
;   undefined4 DAT_02d2590c
;
; Called Functions:
;   FUN_005a3650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3cb2
        ;   Label: FUN_005a3cb2
    PUSH ESI                            ; 005a3cb3
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a3cb4
    TEST EBX,EBX                        ; 005a3cb8
    JZ 0x005a3ce2                       ; 005a3cba
        ;   XREF to: 005a3ce2 (CONDITIONAL_JUMP)  ; LAB_005a3ce2
    PUSH EBX                            ; 005a3cbc
        ;   Label: LAB_005a3cbc
    CALL FUN_005a3650                   ; 005a3cbd
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3650()
    ADD ESP,0x4                         ; 005a3cc2
    MOV ESI,EAX                         ; 005a3cc5
    TEST EAX,EAX                        ; 005a3cc7
    JNZ 0x005a3cdd                      ; 005a3cc9
        ;   XREF to: 005a3cdd (CONDITIONAL_JUMP)  ; LAB_005a3cdd
    MOV EAX,[0x02d2590c]                ; 005a3ccb | DAT_02d2590c
    TEST EAX,EAX                        ; 005a3cd0
    JNZ 0x005a3ce5                      ; 005a3cd2
        ;   XREF to: 005a3ce5 (CONDITIONAL_JUMP)  ; LAB_005a3ce5
    MOV EAX,[0x02d25908]                ; 005a3cd4 | DAT_02d25908
        ;   Label: LAB_005a3cd4
    TEST EAX,EAX                        ; 005a3cd9
    JNZ 0x005a3cf1                      ; 005a3cdb
        ;   XREF to: 005a3cf1 (CONDITIONAL_JUMP)  ; LAB_005a3cf1
    MOV EAX,ESI                         ; 005a3cdd
        ;   Label: LAB_005a3cdd
    POP ESI                             ; 005a3cdf
    POP EBX                             ; 005a3ce0
    RET                                 ; 005a3ce1
    INC EBX                             ; 005a3ce2
        ;   Label: LAB_005a3ce2
    JMP 0x005a3cbc                      ; 005a3ce3
        ;   XREF to: 005a3cbc (UNCONDITIONAL_JUMP)  ; LAB_005a3cbc
    PUSH EBX                            ; 005a3ce5
        ;   Label: LAB_005a3ce5
    CALL EAX                            ; 005a3ce6
    ADD ESP,0x4                         ; 005a3ce8
    TEST EAX,EAX                        ; 005a3ceb
    JNZ 0x005a3cbc                      ; 005a3ced
        ;   XREF to: 005a3cbc (CONDITIONAL_JUMP)  ; LAB_005a3cbc
    JMP 0x005a3cd4                      ; 005a3cef
        ;   XREF to: 005a3cd4 (UNCONDITIONAL_JUMP)  ; LAB_005a3cd4
    CALL EAX                            ; 005a3cf1
        ;   Label: LAB_005a3cf1
    JMP 0x005a3cbc                      ; 005a3cf3
        ;   XREF to: 005a3cbc (UNCONDITIONAL_JUMP)  ; LAB_005a3cbc


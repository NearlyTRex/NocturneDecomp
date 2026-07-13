; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl __FF_MSGBANNER(void)
;
;
; XREF[1]:
;   __amsg_exit at 100058d7
;
; Referenced Globals:
;   undefined4 DAT_10016c70
;   undefined4 DAT_10016c74
;   undefined4 DAT_10017080
;
; Called Functions:
;   FUN_10008610
;
; *****************************************************************************

section .text

    MOV EAX,[0x10016c70]                ; 100085d0 | DAT_10016c70
        ;   Label: __FF_MSGBANNER
    CMP EAX,0x1                         ; 100085d5
    JZ 0x100085e7                       ; 100085d8
        ;   XREF to: 100085e7 (CONDITIONAL_JUMP)  ; LAB_100085e7
    TEST EAX,EAX                        ; 100085da
    JNZ 0x1000860c                      ; 100085dc
        ;   XREF to: 1000860c (CONDITIONAL_JUMP)  ; LAB_1000860c
    CMP dword ptr [0x10016c74],0x1      ; 100085de | DAT_10016c74
    JNZ 0x1000860c                      ; 100085e5
        ;   XREF to: 1000860c (CONDITIONAL_JUMP)  ; LAB_1000860c
    PUSH 0xfc                           ; 100085e7
        ;   Label: LAB_100085e7
    CALL FUN_10008610                   ; 100085ec
        ;   XREF to: 10008610 (UNCONDITIONAL_CALL)  ; undefined FUN_10008610()
    ADD ESP,0x4                         ; 100085f1
    MOV EAX,[0x10017080]                ; 100085f4 | DAT_10017080
    TEST EAX,EAX                        ; 100085f9
    JZ 0x100085ff                       ; 100085fb
        ;   XREF to: 100085ff (CONDITIONAL_JUMP)  ; LAB_100085ff
    CALL EAX                            ; 100085fd
    PUSH 0xff                           ; 100085ff
        ;   Label: LAB_100085ff
    CALL FUN_10008610                   ; 10008604
        ;   XREF to: 10008610 (UNCONDITIONAL_CALL)  ; undefined FUN_10008610()
    ADD ESP,0x4                         ; 10008609
    RET                                 ; 1000860c
        ;   Label: LAB_1000860c


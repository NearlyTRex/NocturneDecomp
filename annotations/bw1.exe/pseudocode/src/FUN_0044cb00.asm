; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0044cb00(int param_1,byte param_2)
;
;
; XREF[1]:
;   FUN_00462530 at 0046254f
;
; Referenced Globals:
;   undefined1* PTR_FUN_005fe624 = 0044cb00
;   undefined4 DAT_005fe640
;
; Called Functions:
;   FUN_00428240
;   FUN_0044cdf0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044cb00
        ;   Label: FUN_0044cb00
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044cb01
    TEST byte ptr [ESP + 0xc],0x4       ; 0044cb05
    JNZ 0x0044cb36                      ; 0044cb0a
        ;   XREF to: 0044cb36 (CONDITIONAL_JUMP)  ; LAB_0044cb36
    PUSH EBX                            ; 0044cb0c
    MOV dword ptr [EBX + 0x3c],0x5fe624 ; 0044cb0d | PTR_FUN_005fe624
    CALL FUN_0044cdf0                   ; 0044cb14
        ;   XREF to: 0044cdf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044cdf0()
    ADD ESP,0x4                         ; 0044cb19
    PUSH 0x1                            ; 0044cb1c
    PUSH EBX                            ; 0044cb1e
    CALL FUN_00428240                   ; 0044cb1f
        ;   XREF to: 00428240 (UNCONDITIONAL_CALL)  ; undefined FUN_00428240()
    ADD ESP,0x8                         ; 0044cb24
    MOV DL,byte ptr [ESP + 0xc]         ; 0044cb27
    MOV EBX,EAX                         ; 0044cb2b
    TEST DL,0x2                         ; 0044cb2d
    JNZ 0x0044cb51                      ; 0044cb30
        ;   XREF to: 0044cb51 (CONDITIONAL_JUMP)  ; LAB_0044cb51
    MOV EAX,EBX                         ; 0044cb32
    POP EBX                             ; 0044cb34
    RET                                 ; 0044cb35
    PUSH 0x5fe640                       ; 0044cb36 | DAT_005fe640
        ;   Label: LAB_0044cb36
    PUSH EBX                            ; 0044cb3b
    CALL FUN_005c030f                   ; 0044cb3c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 0044cb41
    PUSH EAX                            ; 0044cb44
    CALL FUN_005c0336                   ; 0044cb45
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0044cb4a
    MOV EAX,EBX                         ; 0044cb4d
    POP EBX                             ; 0044cb4f
    RET                                 ; 0044cb50
    PUSH EAX                            ; 0044cb51
        ;   Label: LAB_0044cb51
    CALL FUN_005c0344                   ; 0044cb52
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0044cb57
    MOV EAX,EBX                         ; 0044cb5a
    POP EBX                             ; 0044cb5c
    RET                                 ; 0044cb5d


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004254d0(int param_1,uint param_2)
;
;
; XREF[1]:
;   FUN_00448c40 at 00448c5f
;
; Referenced Globals:
;   undefined1* PTR_FUN_005dcef4 = 004254d0
;   undefined4 DAT_005dcf10
;
; Called Functions:
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004254d0
        ;   Label: FUN_004254d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004254d1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004254d5
    TEST AL,0x4                         ; 004254d9
    JNZ 0x004254f1                      ; 004254db
        ;   XREF to: 004254f1 (CONDITIONAL_JUMP)  ; LAB_004254f1
    MOV dword ptr [EBX + 0x3c],0x5dcef4 ; 004254dd | PTR_FUN_005dcef4
    TEST AL,0x2                         ; 004254e4
    JNZ 0x0042550c                      ; 004254e6
        ;   XREF to: 0042550c (CONDITIONAL_JUMP)  ; LAB_0042550c
    MOV EAX,EBX                         ; 004254e8
    POP EBX                             ; 004254ea
    LEA EAX,[EAX]                       ; 004254eb
    MOV ECX,ECX                         ; 004254ee
    RET                                 ; 004254f0
        ;   Label: LAB_004254f0
    PUSH 0x5dcf10                       ; 004254f1 | DAT_005dcf10
        ;   Label: LAB_004254f1
    PUSH EBX                            ; 004254f6
    CALL FUN_005a308f                   ; 004254f7
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004254fc
    PUSH EAX                            ; 004254ff
    CALL FUN_005a30b6                   ; 00425500
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00425505
    MOV EAX,EBX                         ; 00425508
    POP EBX                             ; 0042550a
    RET                                 ; 0042550b
    PUSH EBX                            ; 0042550c
        ;   Label: LAB_0042550c
    CALL FUN_005a30c4                   ; 0042550d
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00425512
    MOV EAX,EBX                         ; 00425515
    POP EBX                             ; 00425517
    RET                                 ; 00425518


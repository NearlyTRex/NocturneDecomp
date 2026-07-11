; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005286d0(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005938e6
;   undefined4 DAT_02dc84a8
;   undefined4 DAT_02dc84ac
;   undefined4 DAT_02dc84b0
;   undefined4 DAT_02dc84b4
;
; Called Functions:
;   FUN_00528780
;   FUN_00559c50
;   FUN_00559c80
;   FUN_00559cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005286d0
        ;   Label: FUN_005286d0
    PUSH EBP                            ; 005286d1
    MOV EBP,ESP                         ; 005286d2
    AND ESP,0xfffffff8                  ; 005286d4
    CALL FUN_00528780                   ; 005286d7
        ;   XREF to: 00528780 (UNCONDITIONAL_CALL)  ; undefined FUN_00528780()
    TEST EAX,EAX                        ; 005286dc
    JZ 0x00528734                       ; 005286de
        ;   XREF to: 00528734 (CONDITIONAL_JUMP)  ; LAB_00528734
    MOV EAX,dword ptr [EBP + 0xc]       ; 005286e0
    MOV [0x02dc84a8],EAX                ; 005286e3 | DAT_02dc84a8
    MOV EAX,dword ptr [EBP + 0x10]      ; 005286e8
    FLD double ptr [EBP + 0xc]          ; 005286eb
    MOV [0x02dc84ac],EAX                ; 005286ee | DAT_02dc84ac
    FCOMP double ptr [0x005938e6]       ; 005286f3 | DAT_005938e6
    FNSTSW AX                           ; 005286f9
    SAHF                                ; 005286fb
    JNC 0x00528714                      ; 005286fc
        ;   XREF to: 00528714 (CONDITIONAL_JUMP)  ; LAB_00528714
    MOV EDX,0xd2f1a9fc                  ; 005286fe
    MOV ECX,0x3f60624d                  ; 00528703
    MOV dword ptr [0x02dc84a8],EDX      ; 00528708 | DAT_02dc84a8
    MOV dword ptr [0x02dc84ac],ECX      ; 0052870e | DAT_02dc84ac
    XOR EBX,EBX                         ; 00528714
        ;   Label: LAB_00528714
    PUSH EBX                            ; 00528716
    PUSH 0x528670                       ; 00528717 | LAB_00528670
    MOV dword ptr [0x02dc84b0],EBX      ; 0052871c | DAT_02dc84b0
    MOV dword ptr [0x02dc84b4],EBX      ; 00528722 | DAT_02dc84b4
    CALL FUN_00559c50                   ; 00528728
        ;   XREF to: 00559c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00559c50()
    ADD ESP,0x8                         ; 0052872d
    TEST EAX,EAX                        ; 00528730
    JNZ 0x00528739                      ; 00528732
        ;   XREF to: 00528739 (CONDITIONAL_JUMP)  ; LAB_00528739
    MOV ESP,EBP                         ; 00528734
        ;   Label: LAB_00528734
    POP EBP                             ; 00528736
    POP EBX                             ; 00528737
    RET                                 ; 00528738
    PUSH 0x3                            ; 00528739
        ;   Label: LAB_00528739
    PUSH EAX                            ; 0052873b
    CALL FUN_00559c80                   ; 0052873c
        ;   XREF to: 00559c80 (UNCONDITIONAL_CALL)  ; undefined FUN_00559c80()
    ADD ESP,0x8                         ; 00528741
    TEST EAX,EAX                        ; 00528744
    JZ 0x00528734                       ; 00528746
        ;   XREF to: 00528734 (CONDITIONAL_JUMP)  ; LAB_00528734
    CMP dword ptr [0x02dc84b0],0x0      ; 00528748 | DAT_02dc84b0
    JNZ 0x00528772                      ; 0052874f
        ;   XREF to: 00528772 (CONDITIONAL_JUMP)  ; LAB_00528772
    PUSH 0x3f847ae1                     ; 00528751
        ;   Label: LAB_00528751
    PUSH 0x47ae147b                     ; 00528756
    INC EBX                             ; 0052875b
    CALL FUN_00559cc0                   ; 0052875c
        ;   XREF to: 00559cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00559cc0()
    ADD ESP,0x8                         ; 00528761
    CMP EBX,0x64                        ; 00528764
    JGE 0x00528772                      ; 00528767
        ;   XREF to: 00528772 (CONDITIONAL_JUMP)  ; LAB_00528772
    CMP dword ptr [0x02dc84b0],0x0      ; 00528769 | DAT_02dc84b0
    JZ 0x00528751                       ; 00528770
        ;   XREF to: 00528751 (CONDITIONAL_JUMP)  ; LAB_00528751
    MOV EAX,[0x02dc84b0]                ; 00528772 | DAT_02dc84b0
        ;   Label: LAB_00528772
    MOV ESP,EBP                         ; 00528777
    POP EBP                             ; 00528779
    POP EBX                             ; 0052877a
    RET                                 ; 0052877b


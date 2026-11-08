; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0041a950(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005dc870
;
; Called Functions:
;   FUN_00408770
;   FUN_00410370
;   FUN_0043f900
;   FUN_0054bf80
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041a950
        ;   Label: FUN_0041a950
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041a951
    TEST byte ptr [ESP + 0xc],0x4       ; 0041a955
    JNZ 0x0041a9ad                      ; 0041a95a
        ;   XREF to: 0041a9ad (CONDITIONAL_JUMP)  ; LAB_0041a9ad
    PUSH 0x0                            ; 0041a95c
    ADD EBX,0x385c                      ; 0041a95e
    PUSH EBX                            ; 0041a964
    CALL FUN_00410370                   ; 0041a965
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 0041a96a
    PUSH 0x0                            ; 0041a96d
    SUB EAX,0x954                       ; 0041a96f
    PUSH EAX                            ; 0041a974
    CALL FUN_0043f900                   ; 0041a975
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 0041a97a
    PUSH 0x0                            ; 0041a97d
    SUB EAX,0x2db0                      ; 0041a97f
    PUSH EAX                            ; 0041a984
    CALL FUN_0054bf80                   ; 0041a985
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 0041a98a
    PUSH 0x1                            ; 0041a98d
    LEA EBX,[EAX + 0xfffffea8]          ; 0041a98f
    PUSH EBX                            ; 0041a995
    CALL FUN_00408770                   ; 0041a996
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0041a99b
    MOV DL,byte ptr [ESP + 0xc]         ; 0041a99e
    MOV EBX,EAX                         ; 0041a9a2
    TEST DL,0x2                         ; 0041a9a4
    JNZ 0x0041a9c8                      ; 0041a9a7
        ;   XREF to: 0041a9c8 (CONDITIONAL_JUMP)  ; LAB_0041a9c8
    MOV EAX,EBX                         ; 0041a9a9
    POP EBX                             ; 0041a9ab
    RET                                 ; 0041a9ac
    PUSH 0x5dc870                       ; 0041a9ad | DAT_005dc870
        ;   Label: LAB_0041a9ad
    PUSH EBX                            ; 0041a9b2
    CALL FUN_005a308f                   ; 0041a9b3
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0041a9b8
    PUSH EAX                            ; 0041a9bb
    CALL FUN_005a30b6                   ; 0041a9bc
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0041a9c1
    MOV EAX,EBX                         ; 0041a9c4
    POP EBX                             ; 0041a9c6
    RET                                 ; 0041a9c7
    PUSH EAX                            ; 0041a9c8
        ;   Label: LAB_0041a9c8
    CALL FUN_005a30c4                   ; 0041a9c9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0041a9ce
    MOV EAX,EBX                         ; 0041a9d1
    POP EBX                             ; 0041a9d3
    RET                                 ; 0041a9d4


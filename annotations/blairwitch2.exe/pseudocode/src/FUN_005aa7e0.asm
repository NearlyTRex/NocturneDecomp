; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005aa7e0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00600a84
;   undefined4 DAT_00600c10
;
; Called Functions:
;   FUN_00408930
;   FUN_0040f2b0
;   FUN_00544d50
;   FUN_0059df70
;   FUN_005a8100
;   FUN_005a8220
;   FUN_005b1480
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aa7e0
        ;   Label: FUN_005aa7e0
    PUSH ESI                            ; 005aa7e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005aa7e2
    TEST byte ptr [ESP + 0x10],0x4      ; 005aa7e6
    JNZ 0x005aa891                      ; 005aa7eb
        ;   XREF to: 005aa891 (CONDITIONAL_JUMP)  ; LAB_005aa891
    PUSH 0x0                            ; 005aa7f1
    LEA ESI,[EBX + 0x264]               ; 005aa7f3
    PUSH ESI                            ; 005aa7f9
    MOV dword ptr [EBX + 0x2b0],0x600a84 ; 005aa7fa | DAT_00600a84
    CALL FUN_005a8100                   ; 005aa804
        ;   XREF to: 005a8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8100()
    ADD ESP,0x8                         ; 005aa809
    PUSH ESI                            ; 005aa80c
    CALL FUN_005a8220                   ; 005aa80d
        ;   XREF to: 005a8220 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8220()
    ADD ESP,0x4                         ; 005aa812
    PUSH 0x0                            ; 005aa815
    LEA ESI,[EBX + 0x154]               ; 005aa817
    PUSH ESI                            ; 005aa81d
    CALL FUN_005a8100                   ; 005aa81e
        ;   XREF to: 005a8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8100()
    ADD ESP,0x8                         ; 005aa823
    PUSH ESI                            ; 005aa826
    CALL FUN_005a8220                   ; 005aa827
        ;   XREF to: 005a8220 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8220()
    ADD ESP,0x4                         ; 005aa82c
    PUSH 0x0                            ; 005aa82f
    ADD EBX,0x3a20                      ; 005aa831
    PUSH EBX                            ; 005aa837
    CALL FUN_0040f2b0                   ; 005aa838
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 005aa83d
    PUSH 0x0                            ; 005aa840
    SUB EAX,0x9c8                       ; 005aa842
    PUSH EAX                            ; 005aa847
    CALL FUN_0059df70                   ; 005aa848
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 005aa84d
    PUSH 0x0                            ; 005aa850
    SUB EAX,0x34c                       ; 005aa852
    PUSH EAX                            ; 005aa857
    CALL FUN_005b1480                   ; 005aa858
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 005aa85d
    PUSH 0x0                            ; 005aa860
    SUB EAX,0x2a58                      ; 005aa862
    PUSH EAX                            ; 005aa867
    CALL FUN_00544d50                   ; 005aa868
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 005aa86d
    PUSH 0x1                            ; 005aa870
    LEA EBX,[EAX + 0xfffffd4c]          ; 005aa872
    PUSH EBX                            ; 005aa878
    CALL FUN_00408930                   ; 005aa879
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 005aa87e
    MOV DL,byte ptr [ESP + 0x10]        ; 005aa881
    MOV EBX,EAX                         ; 005aa885
    TEST DL,0x2                         ; 005aa887
    JNZ 0x005aa8ad                      ; 005aa88a
        ;   XREF to: 005aa8ad (CONDITIONAL_JUMP)  ; LAB_005aa8ad
    MOV EAX,EBX                         ; 005aa88c
    POP ESI                             ; 005aa88e
    POP EBX                             ; 005aa88f
    RET                                 ; 005aa890
    PUSH 0x600c10                       ; 005aa891 | DAT_00600c10
        ;   Label: LAB_005aa891
    PUSH EBX                            ; 005aa896
    CALL FUN_005b7fa7                   ; 005aa897
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 005aa89c
    PUSH EAX                            ; 005aa89f
    CALL FUN_005b7fce                   ; 005aa8a0
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 005aa8a5
    MOV EAX,EBX                         ; 005aa8a8
    POP ESI                             ; 005aa8aa
    POP EBX                             ; 005aa8ab
    RET                                 ; 005aa8ac
    PUSH EAX                            ; 005aa8ad
        ;   Label: LAB_005aa8ad
    CALL FUN_005b7fdc                   ; 005aa8ae
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 005aa8b3
    MOV EAX,EBX                         ; 005aa8b6
    POP ESI                             ; 005aa8b8
    POP EBX                             ; 005aa8b9
    RET                                 ; 005aa8ba


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050f910(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,int param_6)
;
;
; XREF[1]:
;   FUN_0050f190 at 0050f1c8
;
; Called Functions:
;   FUN_00438ef0
;   FUN_0050f230
;   FUN_0050f2a0
;   FUN_0050fa90
;   FUN_0050fd90
;   FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f910
        ;   Label: FUN_0050f910
    PUSH ESI                            ; 0050f911
    PUSH EDI                            ; 0050f912
    PUSH EBP                            ; 0050f913
    MOV EBX,dword ptr [ESP + 0x14]      ; 0050f914
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0050f918
    PUSH EBX                            ; 0050f91c
    CALL FUN_0050f230                   ; 0050f91d
        ;   XREF to: 0050f230 (UNCONDITIONAL_CALL)  ; undefined FUN_0050f230()
    ADD ESP,0x4                         ; 0050f922
    MOV EDX,dword ptr [ESP + 0x18]      ; 0050f925
    PUSH EDX                            ; 0050f929
    PUSH EBX                            ; 0050f92a
    CALL FUN_0050f2a0                   ; 0050f92b
        ;   XREF to: 0050f2a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050f2a0()
    ADD ESP,0x8                         ; 0050f930
    MOV ESI,dword ptr [ESP + 0x20]      ; 0050f933
    IMUL ESI,EDI                        ; 0050f937
    PUSH ESI                            ; 0050f93a
    PUSH 0x0                            ; 0050f93b
    PUSH EBX                            ; 0050f93d
    CALL FUN_00438ef0                   ; 0050f93e
        ;   XREF to: 00438ef0 (UNCONDITIONAL_CALL)  ; undefined FUN_00438ef0()
    ADD ESP,0xc                         ; 0050f943
    PUSH EDI                            ; 0050f946
    MOV ECX,dword ptr [ESP + 0x28]      ; 0050f947
    PUSH ECX                            ; 0050f94b
    MOV EBP,dword ptr [ESP + 0x28]      ; 0050f94c
    PUSH EBP                            ; 0050f950
    PUSH EDI                            ; 0050f951
    PUSH EAX                            ; 0050f952
    PUSH EBX                            ; 0050f953
    MOV ESI,EAX                         ; 0050f954
    CALL FUN_0050fa90                   ; 0050f956
        ;   XREF to: 0050fa90 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fa90()
    ADD ESP,0x18                        ; 0050f95b
    PUSH ESI                            ; 0050f95e
    CALL FUN_005a3770                   ; 0050f95f
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 0050f964
    CMP dword ptr [ESP + 0x28],0x0      ; 0050f967
    JNZ 0x0050f973                      ; 0050f96c
        ;   XREF to: 0050f973 (CONDITIONAL_JUMP)  ; LAB_0050f973
    POP EBP                             ; 0050f96e
    POP EDI                             ; 0050f96f
    POP ESI                             ; 0050f970
    POP EBX                             ; 0050f971
    RET                                 ; 0050f972
    PUSH EBX                            ; 0050f973
        ;   Label: LAB_0050f973
    CALL FUN_0050fd90                   ; 0050f974
        ;   XREF to: 0050fd90 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fd90()
    ADD ESP,0x4                         ; 0050f979
    POP EBP                             ; 0050f97c
    POP EDI                             ; 0050f97d
    POP ESI                             ; 0050f97e
    POP EBX                             ; 0050f97f
    RET                                 ; 0050f980


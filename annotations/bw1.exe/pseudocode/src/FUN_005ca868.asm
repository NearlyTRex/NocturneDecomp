; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ca868(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; Called Functions:
;   FUN_005ca82a
;   FUN_005cccc0
;   FUN_005ccccc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005ca868
        ;   Label: FUN_005ca868
    MOV EBP,ESP                         ; 005ca869
    PUSH EBX                            ; 005ca86b
    PUSH ESI                            ; 005ca86c
    PUSH EDI                            ; 005ca86d
    CALL FUN_005cccc0                   ; 005ca86e
        ;   XREF to: 005cccc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005cccc0()
    PUSH EAX                            ; 005ca873
    PUSH 0x47                           ; 005ca874
    MOV EDX,dword ptr [EBP + 0x18]      ; 005ca876
    PUSH EDX                            ; 005ca879
    MOV EBX,dword ptr [EBP + 0x14]      ; 005ca87a
    PUSH EBX                            ; 005ca87d
    MOV ECX,dword ptr [EBP + 0x10]      ; 005ca87e
    PUSH ECX                            ; 005ca881
    MOV ESI,dword ptr [EBP + 0xc]       ; 005ca882
    PUSH ESI                            ; 005ca885
    MOV EDI,dword ptr [EBP + 0x8]       ; 005ca886
    PUSH EDI                            ; 005ca889
    CALL FUN_005ccccc                   ; 005ca88a
        ;   XREF to: 005ccccc (UNCONDITIONAL_CALL)  ; undefined FUN_005ccccc()
    ADD ESP,0x1c                        ; 005ca88f
    MOV EDX,dword ptr [EBP + 0x10]      ; 005ca892
    PUSH EDX                            ; 005ca895
        ;   Label: LAB_005ca895
    PUSH EAX                            ; 005ca896
    CALL FUN_005ca82a                   ; 005ca897
        ;   XREF to: 005ca82a (UNCONDITIONAL_CALL)  ; undefined FUN_005ca82a()
    ADD ESP,0x8                         ; 005ca89c
    POP EDI                             ; 005ca89f
    POP ESI                             ; 005ca8a0
    POP EBX                             ; 005ca8a1
    POP EBP                             ; 005ca8a2
    RET                                 ; 005ca8a3


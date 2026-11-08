; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00523910(undefined4 *param_1)
;
;
; XREF[3]:
;   FUN_005238f0 at 005238f6
;   FUN_00523980 at 00523990
;   FUN_00562f70 at 00562fe9
;
; Called Functions:
;   FUN_005bfb70
;   FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523910
        ;   Label: FUN_00523910
    PUSH ESI                            ; 00523911
    PUSH EDI                            ; 00523912
    PUSH EBP                            ; 00523913
    MOV EDI,dword ptr [ESP + 0x14]      ; 00523914
    MOV EDX,dword ptr [EDI + 0x1c24]    ; 00523918
    XOR ESI,ESI                         ; 0052391e
    TEST EDX,EDX                        ; 00523920
    JLE 0x0052394a                      ; 00523922
        ;   XREF to: 0052394a (CONDITIONAL_JUMP)  ; LAB_0052394a
    MOV EBX,EDI                         ; 00523924
    MOV EBP,dword ptr [EBX + 0x1c9c]    ; 00523926
        ;   Label: LAB_00523926
    TEST EBP,EBP                        ; 0052392c
    JZ 0x00523939                       ; 0052392e
        ;   XREF to: 00523939 (CONDITIONAL_JUMP)  ; LAB_00523939
    PUSH EBP                            ; 00523930
    CALL FUN_005c09f0                   ; 00523931
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 00523936
    INC ESI                             ; 00523939
        ;   Label: LAB_00523939
    MOV ECX,dword ptr [EDI + 0x1c24]    ; 0052393a
    ADD EBX,0x120                       ; 00523940
    CMP ESI,ECX                         ; 00523946
    JL 0x00523926                       ; 00523948
        ;   XREF to: 00523926 (CONDITIONAL_JUMP)  ; LAB_00523926
    PUSH 0x1c200                        ; 0052394a
        ;   Label: LAB_0052394a
    PUSH 0x0                            ; 0052394f
    MOV dword ptr [EDI],0x0             ; 00523951
    ADD EDI,0x1c28                      ; 00523957
    PUSH EDI                            ; 0052395d
    MOV dword ptr [EDI + -0x4],0x0      ; 0052395e
    CALL FUN_005bfb70                   ; 00523965
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 0052396a
    POP EBP                             ; 0052396d
    POP EDI                             ; 0052396e
    POP ESI                             ; 0052396f
    POP EBX                             ; 00523970
    RET                                 ; 00523971


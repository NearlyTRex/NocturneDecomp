; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056d130(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e5770
;
; Called Functions:
;   FUN_00408770
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d130
        ;   Label: FUN_0056d130
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056d131
    TEST byte ptr [ESP + 0xc],0x4       ; 0056d135
    JNZ 0x0056d156                      ; 0056d13a
        ;   XREF to: 0056d156 (CONDITIONAL_JUMP)  ; LAB_0056d156
    PUSH 0x1                            ; 0056d13c
    PUSH EBX                            ; 0056d13e
    CALL FUN_00408770                   ; 0056d13f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0056d144
    MOV DL,byte ptr [ESP + 0xc]         ; 0056d147
    MOV EBX,EAX                         ; 0056d14b
    TEST DL,0x2                         ; 0056d14d
    JNZ 0x0056d171                      ; 0056d150
        ;   XREF to: 0056d171 (CONDITIONAL_JUMP)  ; LAB_0056d171
    MOV EAX,EBX                         ; 0056d152
    POP EBX                             ; 0056d154
    RET                                 ; 0056d155
    PUSH 0x5e5770                       ; 0056d156 | DAT_005e5770
        ;   Label: LAB_0056d156
    PUSH EBX                            ; 0056d15b
    CALL FUN_005a308f                   ; 0056d15c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0056d161
    PUSH EAX                            ; 0056d164
    CALL FUN_005a30b6                   ; 0056d165
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0056d16a
    MOV EAX,EBX                         ; 0056d16d
    POP EBX                             ; 0056d16f
    RET                                 ; 0056d170
    PUSH EAX                            ; 0056d171
        ;   Label: LAB_0056d171
    CALL FUN_005a30c4                   ; 0056d172
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0056d177
    MOV EAX,EBX                         ; 0056d17a
    POP EBX                             ; 0056d17c
    RET                                 ; 0056d17d


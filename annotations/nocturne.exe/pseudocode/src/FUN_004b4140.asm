; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004b4140(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059e9d0
;
; Called Functions:
;   FUN_004b4800
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4140
        ;   Label: FUN_004b4140
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b4141
    TEST byte ptr [ESP + 0xc],0x4       ; 004b4145
    JNZ 0x004b4166                      ; 004b414a
        ;   XREF to: 004b4166 (CONDITIONAL_JUMP)  ; LAB_004b4166
    PUSH 0x1                            ; 004b414c
    PUSH EBX                            ; 004b414e
    CALL FUN_004b4800                   ; 004b414f
        ;   XREF to: 004b4800 (UNCONDITIONAL_CALL)  ; undefined FUN_004b4800()
    ADD ESP,0x8                         ; 004b4154
    MOV DL,byte ptr [ESP + 0xc]         ; 004b4157
    MOV EBX,EAX                         ; 004b415b
    TEST DL,0x2                         ; 004b415d
    JNZ 0x004b4181                      ; 004b4160
        ;   XREF to: 004b4181 (CONDITIONAL_JUMP)  ; LAB_004b4181
    MOV EAX,EBX                         ; 004b4162
    POP EBX                             ; 004b4164
    RET                                 ; 004b4165
    PUSH 0x59e9d0                       ; 004b4166 | DAT_0059e9d0
        ;   Label: LAB_004b4166
    PUSH EBX                            ; 004b416b
    CALL FUN_0056445f                   ; 004b416c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 004b4171
    PUSH EAX                            ; 004b4174
    CALL FUN_00564486                   ; 004b4175
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 004b417a
    MOV EAX,EBX                         ; 004b417d
    POP EBX                             ; 004b417f
    RET                                 ; 004b4180
    PUSH EAX                            ; 004b4181
        ;   Label: LAB_004b4181
    CALL FUN_00564494                   ; 004b4182
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004b4187
    MOV EAX,EBX                         ; 004b418a
    POP EBX                             ; 004b418c
    RET                                 ; 004b418d


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0051c130(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fadf0
;
; Called Functions:
;   FUN_0051b0b0
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051c130
        ;   Label: FUN_0051c130
    MOV EBX,dword ptr [ESP + 0x8]       ; 0051c131
    TEST byte ptr [ESP + 0xc],0x4       ; 0051c135
    JNZ 0x0051c156                      ; 0051c13a
        ;   XREF to: 0051c156 (CONDITIONAL_JUMP)  ; LAB_0051c156
    PUSH 0x1                            ; 0051c13c
    PUSH EBX                            ; 0051c13e
    CALL FUN_0051b0b0                   ; 0051c13f
        ;   XREF to: 0051b0b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b0b0()
    ADD ESP,0x8                         ; 0051c144
    MOV DL,byte ptr [ESP + 0xc]         ; 0051c147
    MOV EBX,EAX                         ; 0051c14b
    TEST DL,0x2                         ; 0051c14d
    JNZ 0x0051c171                      ; 0051c150
        ;   XREF to: 0051c171 (CONDITIONAL_JUMP)  ; LAB_0051c171
    MOV EAX,EBX                         ; 0051c152
    POP EBX                             ; 0051c154
    RET                                 ; 0051c155
    PUSH 0x5fadf0                       ; 0051c156 | DAT_005fadf0
        ;   Label: LAB_0051c156
    PUSH EBX                            ; 0051c15b
    CALL FUN_005b7fa7                   ; 0051c15c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0051c161
    PUSH EAX                            ; 0051c164
    CALL FUN_005b7fce                   ; 0051c165
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0051c16a
    MOV EAX,EBX                         ; 0051c16d
    POP EBX                             ; 0051c16f
    RET                                 ; 0051c170
    PUSH EAX                            ; 0051c171
        ;   Label: LAB_0051c171
    CALL FUN_005b7fdc                   ; 0051c172
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0051c177
    MOV EAX,EBX                         ; 0051c17a
    POP EBX                             ; 0051c17c
    RET                                 ; 0051c17d


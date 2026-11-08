; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040f130(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba80
;
; Called Functions:
;   FUN_00408730
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f130
        ;   Label: FUN_0040f130
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f131
    TEST byte ptr [ESP + 0xc],0x4       ; 0040f135
    JNZ 0x0040f156                      ; 0040f13a
        ;   XREF to: 0040f156 (CONDITIONAL_JUMP)  ; LAB_0040f156
    PUSH 0x1                            ; 0040f13c
    PUSH EBX                            ; 0040f13e
    CALL FUN_00408730                   ; 0040f13f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 0040f144
    MOV DL,byte ptr [ESP + 0xc]         ; 0040f147
    MOV EBX,EAX                         ; 0040f14b
    TEST DL,0x2                         ; 0040f14d
    JNZ 0x0040f171                      ; 0040f150
        ;   XREF to: 0040f171 (CONDITIONAL_JUMP)  ; LAB_0040f171
    MOV EAX,EBX                         ; 0040f152
    POP EBX                             ; 0040f154
    RET                                 ; 0040f155
    PUSH 0x5fba80                       ; 0040f156 | DAT_005fba80
        ;   Label: LAB_0040f156
    PUSH EBX                            ; 0040f15b
    CALL FUN_005c030f                   ; 0040f15c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 0040f161
    PUSH EAX                            ; 0040f164
    CALL FUN_005c0336                   ; 0040f165
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0040f16a
    MOV EAX,EBX                         ; 0040f16d
    POP EBX                             ; 0040f16f
    RET                                 ; 0040f170
    PUSH EAX                            ; 0040f171
        ;   Label: LAB_0040f171
    CALL FUN_005c0344                   ; 0040f172
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0040f177
    MOV EAX,EBX                         ; 0040f17a
    POP EBX                             ; 0040f17c
    RET                                 ; 0040f17d


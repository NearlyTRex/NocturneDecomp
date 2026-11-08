; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00444210(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fdb80
;
; Called Functions:
;   FUN_00442bb0
;   FUN_00442f90
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444210
        ;   Label: FUN_00444210
    MOV EBX,dword ptr [ESP + 0x8]       ; 00444211
    TEST byte ptr [ESP + 0xc],0x4       ; 00444215
    JNZ 0x00444247                      ; 0044421a
        ;   XREF to: 00444247 (CONDITIONAL_JUMP)  ; LAB_00444247
    PUSH 0x0                            ; 0044421c
    ADD EBX,0x4                         ; 0044421e
    PUSH EBX                            ; 00444221
    CALL FUN_00442f90                   ; 00444222
        ;   XREF to: 00442f90 (UNCONDITIONAL_CALL)  ; undefined FUN_00442f90()
    ADD ESP,0x8                         ; 00444227
    PUSH 0x1                            ; 0044422a
    LEA EBX,[EAX + -0x4]                ; 0044422c
    PUSH EBX                            ; 0044422f
    CALL FUN_00442bb0                   ; 00444230
        ;   XREF to: 00442bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00442bb0()
    ADD ESP,0x8                         ; 00444235
    MOV DL,byte ptr [ESP + 0xc]         ; 00444238
    MOV EBX,EAX                         ; 0044423c
    TEST DL,0x2                         ; 0044423e
    JNZ 0x00444262                      ; 00444241
        ;   XREF to: 00444262 (CONDITIONAL_JUMP)  ; LAB_00444262
    MOV EAX,EBX                         ; 00444243
    POP EBX                             ; 00444245
    RET                                 ; 00444246
    PUSH 0x5fdb80                       ; 00444247 | DAT_005fdb80
        ;   Label: LAB_00444247
    PUSH EBX                            ; 0044424c
    CALL FUN_005c030f                   ; 0044424d
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00444252
    PUSH EAX                            ; 00444255
    CALL FUN_005c0336                   ; 00444256
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0044425b
    MOV EAX,EBX                         ; 0044425e
    POP EBX                             ; 00444260
    RET                                 ; 00444261
    PUSH EAX                            ; 00444262
        ;   Label: LAB_00444262
    CALL FUN_005c0344                   ; 00444263
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00444268
    MOV EAX,EBX                         ; 0044426b
    POP EBX                             ; 0044426d
    RET                                 ; 0044426e


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00507250(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_006037b0
;
; Called Functions:
;   FUN_00408730
;   FUN_00447d30
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00507250
        ;   Label: FUN_00507250
    MOV EBX,dword ptr [ESP + 0x8]       ; 00507251
    TEST byte ptr [ESP + 0xc],0x4       ; 00507255
    JNZ 0x0050728d                      ; 0050725a
        ;   XREF to: 0050728d (CONDITIONAL_JUMP)  ; LAB_0050728d
    PUSH 0x0                            ; 0050725c
    ADD EBX,0x1a4                       ; 0050725e
    PUSH EBX                            ; 00507264
    CALL FUN_00447d30                   ; 00507265
        ;   XREF to: 00447d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00447d30()
    ADD ESP,0x8                         ; 0050726a
    PUSH 0x1                            ; 0050726d
    LEA EBX,[EAX + 0xfffffe5c]          ; 0050726f
    PUSH EBX                            ; 00507275
    CALL FUN_00408730                   ; 00507276
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 0050727b
    MOV DL,byte ptr [ESP + 0xc]         ; 0050727e
    MOV EBX,EAX                         ; 00507282
    TEST DL,0x2                         ; 00507284
    JNZ 0x005072a8                      ; 00507287
        ;   XREF to: 005072a8 (CONDITIONAL_JUMP)  ; LAB_005072a8
    MOV EAX,EBX                         ; 00507289
    POP EBX                             ; 0050728b
    RET                                 ; 0050728c
    PUSH 0x6037b0                       ; 0050728d | DAT_006037b0
        ;   Label: LAB_0050728d
    PUSH EBX                            ; 00507292
    CALL FUN_005c030f                   ; 00507293
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00507298
    PUSH EAX                            ; 0050729b
    CALL FUN_005c0336                   ; 0050729c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 005072a1
    MOV EAX,EBX                         ; 005072a4
    POP EBX                             ; 005072a6
    RET                                 ; 005072a7
    PUSH EAX                            ; 005072a8
        ;   Label: LAB_005072a8
    CALL FUN_005c0344                   ; 005072a9
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 005072ae
    MOV EAX,EBX                         ; 005072b1
    POP EBX                             ; 005072b3
    RET                                 ; 005072b4


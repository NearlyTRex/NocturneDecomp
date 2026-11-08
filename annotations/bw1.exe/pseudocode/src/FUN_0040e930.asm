; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040e930(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fb790
;
; Called Functions:
;   FUN_00408730
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e930
        ;   Label: FUN_0040e930
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e931
    TEST byte ptr [ESP + 0xc],0x4       ; 0040e935
    JNZ 0x0040e956                      ; 0040e93a
        ;   XREF to: 0040e956 (CONDITIONAL_JUMP)  ; LAB_0040e956
    PUSH 0x1                            ; 0040e93c
    PUSH EBX                            ; 0040e93e
    CALL FUN_00408730                   ; 0040e93f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 0040e944
    MOV DL,byte ptr [ESP + 0xc]         ; 0040e947
    MOV EBX,EAX                         ; 0040e94b
    TEST DL,0x2                         ; 0040e94d
    JNZ 0x0040e971                      ; 0040e950
        ;   XREF to: 0040e971 (CONDITIONAL_JUMP)  ; LAB_0040e971
    MOV EAX,EBX                         ; 0040e952
    POP EBX                             ; 0040e954
    RET                                 ; 0040e955
    PUSH 0x5fb790                       ; 0040e956 | DAT_005fb790
        ;   Label: LAB_0040e956
    PUSH EBX                            ; 0040e95b
    CALL FUN_005c030f                   ; 0040e95c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 0040e961
    PUSH EAX                            ; 0040e964
    CALL FUN_005c0336                   ; 0040e965
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0040e96a
    MOV EAX,EBX                         ; 0040e96d
    POP EBX                             ; 0040e96f
    RET                                 ; 0040e970
    PUSH EAX                            ; 0040e971
        ;   Label: LAB_0040e971
    CALL FUN_005c0344                   ; 0040e972
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0040e977
    MOV EAX,EBX                         ; 0040e97a
    POP EBX                             ; 0040e97c
    RET                                 ; 0040e97d


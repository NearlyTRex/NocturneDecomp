; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00476700(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fee50
;
; Called Functions:
;   FUN_004ea980
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476700
        ;   Label: FUN_00476700
    MOV EBX,dword ptr [ESP + 0x8]       ; 00476701
    TEST byte ptr [ESP + 0xc],0x4       ; 00476705
    JNZ 0x00476726                      ; 0047670a
        ;   XREF to: 00476726 (CONDITIONAL_JUMP)  ; LAB_00476726
    PUSH 0x1                            ; 0047670c
    PUSH EBX                            ; 0047670e
    CALL FUN_004ea980                   ; 0047670f
        ;   XREF to: 004ea980 (UNCONDITIONAL_CALL)  ; undefined FUN_004ea980()
    ADD ESP,0x8                         ; 00476714
    MOV DL,byte ptr [ESP + 0xc]         ; 00476717
    MOV EBX,EAX                         ; 0047671b
    TEST DL,0x2                         ; 0047671d
    JNZ 0x00476741                      ; 00476720
        ;   XREF to: 00476741 (CONDITIONAL_JUMP)  ; LAB_00476741
    MOV EAX,EBX                         ; 00476722
    POP EBX                             ; 00476724
    RET                                 ; 00476725
    PUSH 0x5fee50                       ; 00476726 | DAT_005fee50
        ;   Label: LAB_00476726
    PUSH EBX                            ; 0047672b
    CALL FUN_005c030f                   ; 0047672c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00476731
    PUSH EAX                            ; 00476734
    CALL FUN_005c0336                   ; 00476735
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0047673a
    MOV EAX,EBX                         ; 0047673d
    POP EBX                             ; 0047673f
    RET                                 ; 00476740
    PUSH EAX                            ; 00476741
        ;   Label: LAB_00476741
    CALL FUN_005c0344                   ; 00476742
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00476747
    MOV EAX,EBX                         ; 0047674a
    POP EBX                             ; 0047674c
    RET                                 ; 0047674d


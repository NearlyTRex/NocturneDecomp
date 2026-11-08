; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00543740(int param_1)
;
;
; XREF[2]:
;   FUN_00543710 at 00543716
;   FUN_00543e00 at 00543e12
;
; Called Functions:
;   FUN_00499470
;   FUN_0049c370
;   FUN_00543790
;   FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543740
        ;   Label: FUN_00543740
    MOV EBX,dword ptr [ESP + 0x8]       ; 00543741
    LEA EAX,[EBX + 0x34]                ; 00543745
    PUSH EAX                            ; 00543748
    CALL FUN_00499470                   ; 00543749
        ;   XREF to: 00499470 (UNCONDITIONAL_CALL)  ; undefined FUN_00499470()
    ADD ESP,0x4                         ; 0054374e
    PUSH EBX                            ; 00543751
    CALL FUN_00543790                   ; 00543752
        ;   XREF to: 00543790 (UNCONDITIONAL_CALL)  ; undefined FUN_00543790()
    MOV EDX,dword ptr [EBX + 0x24]      ; 00543757
    ADD ESP,0x4                         ; 0054375a
    TEST EDX,EDX                        ; 0054375d
    JNZ 0x00543777                      ; 0054375f
        ;   XREF to: 00543777 (CONDITIONAL_JUMP)  ; LAB_00543777
    PUSH 0x1e818c0                      ; 00543761
        ;   Label: LAB_00543761
    MOV dword ptr [EBX + 0x20],0x0      ; 00543766
    CALL FUN_0049c370                   ; 0054376d
        ;   XREF to: 0049c370 (UNCONDITIONAL_CALL)  ; undefined FUN_0049c370()
    ADD ESP,0x4                         ; 00543772
    POP EBX                             ; 00543775
    RET                                 ; 00543776
    PUSH EDX                            ; 00543777
        ;   Label: LAB_00543777
    CALL FUN_005c09f0                   ; 00543778
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 0054377d
    MOV dword ptr [EBX + 0x24],0x0      ; 00543780
    JMP 0x00543761                      ; 00543787
        ;   XREF to: 00543761 (UNCONDITIONAL_JUMP)  ; LAB_00543761


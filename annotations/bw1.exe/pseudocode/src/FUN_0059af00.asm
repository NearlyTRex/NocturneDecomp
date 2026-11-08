; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0059af00(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00607190
;
; Called Functions:
;   FUN_00408730
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059af00
        ;   Label: FUN_0059af00
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059af01
    TEST byte ptr [ESP + 0xc],0x4       ; 0059af05
    JNZ 0x0059af26                      ; 0059af0a
        ;   XREF to: 0059af26 (CONDITIONAL_JUMP)  ; LAB_0059af26
    PUSH 0x1                            ; 0059af0c
    PUSH EBX                            ; 0059af0e
    CALL FUN_00408730                   ; 0059af0f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 0059af14
    MOV DL,byte ptr [ESP + 0xc]         ; 0059af17
    MOV EBX,EAX                         ; 0059af1b
    TEST DL,0x2                         ; 0059af1d
    JNZ 0x0059af41                      ; 0059af20
        ;   XREF to: 0059af41 (CONDITIONAL_JUMP)  ; LAB_0059af41
    MOV EAX,EBX                         ; 0059af22
    POP EBX                             ; 0059af24
    RET                                 ; 0059af25
    PUSH 0x607190                       ; 0059af26 | DAT_00607190
        ;   Label: LAB_0059af26
    PUSH EBX                            ; 0059af2b
    CALL FUN_005c030f                   ; 0059af2c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 0059af31
    PUSH EAX                            ; 0059af34
    CALL FUN_005c0336                   ; 0059af35
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0059af3a
    MOV EAX,EBX                         ; 0059af3d
    POP EBX                             ; 0059af3f
    RET                                 ; 0059af40
    PUSH EAX                            ; 0059af41
        ;   Label: LAB_0059af41
    CALL FUN_005c0344                   ; 0059af42
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0059af47
    MOV EAX,EBX                         ; 0059af4a
    POP EBX                             ; 0059af4c
    RET                                 ; 0059af4d


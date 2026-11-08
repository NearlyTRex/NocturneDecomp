; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004ad3c0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e03e0
;
; Called Functions:
;   FUN_004a83a0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ad3c0
        ;   Label: FUN_004ad3c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ad3c1
    TEST byte ptr [ESP + 0xc],0x4       ; 004ad3c5
    JNZ 0x004ad3e6                      ; 004ad3ca
        ;   XREF to: 004ad3e6 (CONDITIONAL_JUMP)  ; LAB_004ad3e6
    PUSH 0x1                            ; 004ad3cc
    PUSH EBX                            ; 004ad3ce
    CALL FUN_004a83a0                   ; 004ad3cf
        ;   XREF to: 004a83a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a83a0()
    ADD ESP,0x8                         ; 004ad3d4
    MOV DL,byte ptr [ESP + 0xc]         ; 004ad3d7
    MOV EBX,EAX                         ; 004ad3db
    TEST DL,0x2                         ; 004ad3dd
    JNZ 0x004ad401                      ; 004ad3e0
        ;   XREF to: 004ad401 (CONDITIONAL_JUMP)  ; LAB_004ad401
    MOV EAX,EBX                         ; 004ad3e2
    POP EBX                             ; 004ad3e4
    RET                                 ; 004ad3e5
    PUSH 0x5e03e0                       ; 004ad3e6 | DAT_005e03e0
        ;   Label: LAB_004ad3e6
    PUSH EBX                            ; 004ad3eb
    CALL FUN_005a308f                   ; 004ad3ec
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004ad3f1
    PUSH EAX                            ; 004ad3f4
    CALL FUN_005a30b6                   ; 004ad3f5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004ad3fa
    MOV EAX,EBX                         ; 004ad3fd
    POP EBX                             ; 004ad3ff
    RET                                 ; 004ad400
    PUSH EAX                            ; 004ad401
        ;   Label: LAB_004ad401
    CALL FUN_005a30c4                   ; 004ad402
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004ad407
    MOV EAX,EBX                         ; 004ad40a
    POP EBX                             ; 004ad40c
    RET                                 ; 004ad40d


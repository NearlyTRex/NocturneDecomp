; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00544d50(int param_1,byte param_2)
;
;
; XREF[59]:
;   FUN_0040f120 at 0040f165
;   FUN_0040f1c0 at 0040f205
;   FUN_00412a20 at 00412a65
;   FUN_00414620 at 00414665
;   FUN_00414c10 at 00414c55
;   FUN_00415410 at 00415465
;   FUN_0041a3d0 at 0041a415
;   FUN_0041ee50 at 0041ee95
;   FUN_00422150 at 00422195
;   FUN_0042c000 at 0042c045
;   ... and 49 more
;
; Referenced Globals:
;   undefined4 DAT_005f6dc0
;   void* PTR_FUN_005fb9c4 = 00544d50
;
; Called Functions:
;   FUN_00503050
;   FUN_00544e30
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544d50
        ;   Label: FUN_00544d50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00544d51
    TEST byte ptr [ESP + 0xc],0x4       ; 00544d55
    JNZ 0x00544d86                      ; 00544d5a
        ;   XREF to: 00544d86 (CONDITIONAL_JUMP)  ; LAB_00544d86
    PUSH EBX                            ; 00544d5c
    MOV dword ptr [EBX + 0x50],0x5fb9c4 ; 00544d5d | PTR_FUN_005fb9c4
    CALL FUN_00544e30                   ; 00544d64
        ;   XREF to: 00544e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00544e30()
    ADD ESP,0x4                         ; 00544d69
    PUSH 0x1                            ; 00544d6c
    PUSH EBX                            ; 00544d6e
    CALL FUN_00503050                   ; 00544d6f
        ;   XREF to: 00503050 (UNCONDITIONAL_CALL)  ; undefined FUN_00503050()
    ADD ESP,0x8                         ; 00544d74
    MOV DL,byte ptr [ESP + 0xc]         ; 00544d77
    MOV EBX,EAX                         ; 00544d7b
    TEST DL,0x2                         ; 00544d7d
    JNZ 0x00544da1                      ; 00544d80
        ;   XREF to: 00544da1 (CONDITIONAL_JUMP)  ; LAB_00544da1
    MOV EAX,EBX                         ; 00544d82
    POP EBX                             ; 00544d84
    RET                                 ; 00544d85
    PUSH 0x5f6dc0                       ; 00544d86 | DAT_005f6dc0
        ;   Label: LAB_00544d86
    PUSH EBX                            ; 00544d8b
    CALL FUN_005b7fa7                   ; 00544d8c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00544d91
    PUSH EAX                            ; 00544d94
    CALL FUN_005b7fce                   ; 00544d95
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 00544d9a
    MOV EAX,EBX                         ; 00544d9d
    POP EBX                             ; 00544d9f
    RET                                 ; 00544da0
    PUSH EAX                            ; 00544da1
        ;   Label: LAB_00544da1
    CALL FUN_005b7fdc                   ; 00544da2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 00544da7
    MOV EAX,EBX                         ; 00544daa
    POP EBX                             ; 00544dac
    RET                                 ; 00544dad


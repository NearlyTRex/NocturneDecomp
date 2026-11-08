; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040e4c0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005db4f0
;
; Called Functions:
;   FUN_00408770
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e4c0
        ;   Label: FUN_0040e4c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e4c1
    TEST byte ptr [ESP + 0xc],0x4       ; 0040e4c5
    JNZ 0x0040e4e6                      ; 0040e4ca
        ;   XREF to: 0040e4e6 (CONDITIONAL_JUMP)  ; LAB_0040e4e6
    PUSH 0x1                            ; 0040e4cc
    PUSH EBX                            ; 0040e4ce
    CALL FUN_00408770                   ; 0040e4cf
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0040e4d4
    MOV DL,byte ptr [ESP + 0xc]         ; 0040e4d7
    MOV EBX,EAX                         ; 0040e4db
    TEST DL,0x2                         ; 0040e4dd
    JNZ 0x0040e501                      ; 0040e4e0
        ;   XREF to: 0040e501 (CONDITIONAL_JUMP)  ; LAB_0040e501
    MOV EAX,EBX                         ; 0040e4e2
    POP EBX                             ; 0040e4e4
    RET                                 ; 0040e4e5
    PUSH 0x5db4f0                       ; 0040e4e6 | DAT_005db4f0
        ;   Label: LAB_0040e4e6
    PUSH EBX                            ; 0040e4eb
    CALL FUN_005a308f                   ; 0040e4ec
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0040e4f1
    PUSH EAX                            ; 0040e4f4
    CALL FUN_005a30b6                   ; 0040e4f5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0040e4fa
    MOV EAX,EBX                         ; 0040e4fd
    POP EBX                             ; 0040e4ff
    RET                                 ; 0040e500
    PUSH EAX                            ; 0040e501
        ;   Label: LAB_0040e501
    CALL FUN_005a30c4                   ; 0040e502
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0040e507
    MOV EAX,EBX                         ; 0040e50a
    POP EBX                             ; 0040e50c
    RET                                 ; 0040e50d


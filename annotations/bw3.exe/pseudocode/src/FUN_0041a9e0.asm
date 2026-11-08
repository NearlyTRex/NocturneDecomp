; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0041a9e0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005dc890
;
; Called Functions:
;   FUN_00408770
;   FUN_00410370
;   FUN_0043f900
;   FUN_0054bf80
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041a9e0
        ;   Label: FUN_0041a9e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041a9e1
    TEST byte ptr [ESP + 0xc],0x4       ; 0041a9e5
    JNZ 0x0041aa3d                      ; 0041a9ea
        ;   XREF to: 0041aa3d (CONDITIONAL_JUMP)  ; LAB_0041aa3d
    PUSH 0x0                            ; 0041a9ec
    ADD EBX,0x385c                      ; 0041a9ee
    PUSH EBX                            ; 0041a9f4
    CALL FUN_00410370                   ; 0041a9f5
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 0041a9fa
    PUSH 0x0                            ; 0041a9fd
    SUB EAX,0x954                       ; 0041a9ff
    PUSH EAX                            ; 0041aa04
    CALL FUN_0043f900                   ; 0041aa05
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 0041aa0a
    PUSH 0x0                            ; 0041aa0d
    SUB EAX,0x2db0                      ; 0041aa0f
    PUSH EAX                            ; 0041aa14
    CALL FUN_0054bf80                   ; 0041aa15
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 0041aa1a
    PUSH 0x1                            ; 0041aa1d
    LEA EBX,[EAX + 0xfffffea8]          ; 0041aa1f
    PUSH EBX                            ; 0041aa25
    CALL FUN_00408770                   ; 0041aa26
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0041aa2b
    MOV DL,byte ptr [ESP + 0xc]         ; 0041aa2e
    MOV EBX,EAX                         ; 0041aa32
    TEST DL,0x2                         ; 0041aa34
    JNZ 0x0041aa58                      ; 0041aa37
        ;   XREF to: 0041aa58 (CONDITIONAL_JUMP)  ; LAB_0041aa58
    MOV EAX,EBX                         ; 0041aa39
    POP EBX                             ; 0041aa3b
    RET                                 ; 0041aa3c
    PUSH 0x5dc890                       ; 0041aa3d | DAT_005dc890
        ;   Label: LAB_0041aa3d
    PUSH EBX                            ; 0041aa42
    CALL FUN_005a308f                   ; 0041aa43
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0041aa48
    PUSH EAX                            ; 0041aa4b
    CALL FUN_005a30b6                   ; 0041aa4c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0041aa51
    MOV EAX,EBX                         ; 0041aa54
    POP EBX                             ; 0041aa56
    RET                                 ; 0041aa57
    PUSH EAX                            ; 0041aa58
        ;   Label: LAB_0041aa58
    CALL FUN_005a30c4                   ; 0041aa59
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0041aa5e
    MOV EAX,EBX                         ; 0041aa61
    POP EBX                             ; 0041aa63
    RET                                 ; 0041aa64


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040ea10(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005db630
;
; Called Functions:
;   FUN_00408770
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ea10
        ;   Label: FUN_0040ea10
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040ea11
    TEST byte ptr [ESP + 0xc],0x4       ; 0040ea15
    JNZ 0x0040ea36                      ; 0040ea1a
        ;   XREF to: 0040ea36 (CONDITIONAL_JUMP)  ; LAB_0040ea36
    PUSH 0x1                            ; 0040ea1c
    PUSH EBX                            ; 0040ea1e
    CALL FUN_00408770                   ; 0040ea1f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0040ea24
    MOV DL,byte ptr [ESP + 0xc]         ; 0040ea27
    MOV EBX,EAX                         ; 0040ea2b
    TEST DL,0x2                         ; 0040ea2d
    JNZ 0x0040ea51                      ; 0040ea30
        ;   XREF to: 0040ea51 (CONDITIONAL_JUMP)  ; LAB_0040ea51
    MOV EAX,EBX                         ; 0040ea32
    POP EBX                             ; 0040ea34
    RET                                 ; 0040ea35
    PUSH 0x5db630                       ; 0040ea36 | DAT_005db630
        ;   Label: LAB_0040ea36
    PUSH EBX                            ; 0040ea3b
    CALL FUN_005a308f                   ; 0040ea3c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0040ea41
    PUSH EAX                            ; 0040ea44
    CALL FUN_005a30b6                   ; 0040ea45
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0040ea4a
    MOV EAX,EBX                         ; 0040ea4d
    POP EBX                             ; 0040ea4f
    RET                                 ; 0040ea50
    PUSH EAX                            ; 0040ea51
        ;   Label: LAB_0040ea51
    CALL FUN_005a30c4                   ; 0040ea52
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0040ea57
    MOV EAX,EBX                         ; 0040ea5a
    POP EBX                             ; 0040ea5c
    RET                                 ; 0040ea5d


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004655b0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005dec90
;
; Called Functions:
;   FUN_00408770
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004655b0
        ;   Label: FUN_004655b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004655b1
    TEST byte ptr [ESP + 0xc],0x4       ; 004655b5
    JNZ 0x004655d6                      ; 004655ba
        ;   XREF to: 004655d6 (CONDITIONAL_JUMP)  ; LAB_004655d6
    PUSH 0x1                            ; 004655bc
    PUSH EBX                            ; 004655be
    CALL FUN_00408770                   ; 004655bf
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 004655c4
    MOV DL,byte ptr [ESP + 0xc]         ; 004655c7
    MOV EBX,EAX                         ; 004655cb
    TEST DL,0x2                         ; 004655cd
    JNZ 0x004655f1                      ; 004655d0
        ;   XREF to: 004655f1 (CONDITIONAL_JUMP)  ; LAB_004655f1
    MOV EAX,EBX                         ; 004655d2
    POP EBX                             ; 004655d4
    RET                                 ; 004655d5
    PUSH 0x5dec90                       ; 004655d6 | DAT_005dec90
        ;   Label: LAB_004655d6
    PUSH EBX                            ; 004655db
    CALL FUN_005a308f                   ; 004655dc
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004655e1
    PUSH EAX                            ; 004655e4
    CALL FUN_005a30b6                   ; 004655e5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004655ea
    MOV EAX,EBX                         ; 004655ed
    POP EBX                             ; 004655ef
    RET                                 ; 004655f0
    PUSH EAX                            ; 004655f1
        ;   Label: LAB_004655f1
    CALL FUN_005a30c4                   ; 004655f2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004655f7
    MOV EAX,EBX                         ; 004655fa
    POP EBX                             ; 004655fc
    RET                                 ; 004655fd


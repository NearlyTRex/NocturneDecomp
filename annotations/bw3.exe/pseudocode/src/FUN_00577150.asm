; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00577150(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e5e50
;
; Called Functions:
;   FUN_00408770
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00577150
        ;   Label: FUN_00577150
    MOV EBX,dword ptr [ESP + 0x8]       ; 00577151
    TEST byte ptr [ESP + 0xc],0x4       ; 00577155
    JNZ 0x0057718d                      ; 0057715a
        ;   XREF to: 0057718d (CONDITIONAL_JUMP)  ; LAB_0057718d
    PUSH 0x1                            ; 0057715c
    ADD EBX,0x3c4                       ; 0057715e
    PUSH EBX                            ; 00577164
    CALL FUN_00408770                   ; 00577165
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0057716a
    PUSH 0x1                            ; 0057716d
    LEA EBX,[EAX + 0xfffffc3c]          ; 0057716f
    PUSH EBX                            ; 00577175
    CALL FUN_00408770                   ; 00577176
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0057717b
    MOV DL,byte ptr [ESP + 0xc]         ; 0057717e
    MOV EBX,EAX                         ; 00577182
    TEST DL,0x2                         ; 00577184
    JNZ 0x005771a8                      ; 00577187
        ;   XREF to: 005771a8 (CONDITIONAL_JUMP)  ; LAB_005771a8
    MOV EAX,EBX                         ; 00577189
    POP EBX                             ; 0057718b
    RET                                 ; 0057718c
    PUSH 0x5e5e50                       ; 0057718d | DAT_005e5e50
        ;   Label: LAB_0057718d
    PUSH EBX                            ; 00577192
    CALL FUN_005a308f                   ; 00577193
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00577198
    PUSH EAX                            ; 0057719b
    CALL FUN_005a30b6                   ; 0057719c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 005771a1
    MOV EAX,EBX                         ; 005771a4
    POP EBX                             ; 005771a6
    RET                                 ; 005771a7
    PUSH EAX                            ; 005771a8
        ;   Label: LAB_005771a8
    CALL FUN_005a30c4                   ; 005771a9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 005771ae
    MOV EAX,EBX                         ; 005771b1
    POP EBX                             ; 005771b3
    RET                                 ; 005771b4


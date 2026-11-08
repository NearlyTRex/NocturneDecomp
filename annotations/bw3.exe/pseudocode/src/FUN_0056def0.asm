; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056def0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e5890
;
; Called Functions:
;   FUN_00408770
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056def0
        ;   Label: FUN_0056def0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056def1
    TEST byte ptr [ESP + 0xc],0x4       ; 0056def5
    JNZ 0x0056df16                      ; 0056defa
        ;   XREF to: 0056df16 (CONDITIONAL_JUMP)  ; LAB_0056df16
    PUSH 0x1                            ; 0056defc
    PUSH EBX                            ; 0056defe
    CALL FUN_00408770                   ; 0056deff
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0056df04
    MOV DL,byte ptr [ESP + 0xc]         ; 0056df07
    MOV EBX,EAX                         ; 0056df0b
    TEST DL,0x2                         ; 0056df0d
    JNZ 0x0056df31                      ; 0056df10
        ;   XREF to: 0056df31 (CONDITIONAL_JUMP)  ; LAB_0056df31
    MOV EAX,EBX                         ; 0056df12
    POP EBX                             ; 0056df14
    RET                                 ; 0056df15
    PUSH 0x5e5890                       ; 0056df16 | DAT_005e5890
        ;   Label: LAB_0056df16
    PUSH EBX                            ; 0056df1b
    CALL FUN_005a308f                   ; 0056df1c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0056df21
    PUSH EAX                            ; 0056df24
    CALL FUN_005a30b6                   ; 0056df25
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0056df2a
    MOV EAX,EBX                         ; 0056df2d
    POP EBX                             ; 0056df2f
    RET                                 ; 0056df30
    PUSH EAX                            ; 0056df31
        ;   Label: LAB_0056df31
    CALL FUN_005a30c4                   ; 0056df32
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0056df37
    MOV EAX,EBX                         ; 0056df3a
    POP EBX                             ; 0056df3c
    RET                                 ; 0056df3d


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00570554(uint param_1,byte *param_2)
;
;
; XREF[1]:
;   FUN_0056b960 at 0056b9b3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570554
        ;   Label: FUN_00570554
    MOV EBX,dword ptr [ESP + 0x8]       ; 00570555
    MOV EDX,dword ptr [ESP + 0xc]       ; 00570559
    MOV EAX,EBX                         ; 0057055d
    AND EAX,0x70                        ; 0057055f
    AND EBX,0x7                         ; 00570562
    CMP EAX,0x20                        ; 00570565
    JC 0x0057057a                       ; 00570568
        ;   XREF to: 0057057a (CONDITIONAL_JUMP)  ; LAB_0057057a
    JBE 0x005705a4                      ; 0057056a
        ;   XREF to: 005705a4 (CONDITIONAL_JUMP)  ; LAB_005705a4
    CMP EAX,0x30                        ; 0057056c
    JC 0x005705b2                       ; 0057056f
        ;   XREF to: 005705b2 (CONDITIONAL_JUMP)  ; LAB_005705b2
    JBE 0x0057059c                      ; 00570571
        ;   XREF to: 0057059c (CONDITIONAL_JUMP)  ; LAB_0057059c
    CMP EAX,0x40                        ; 00570573
    JZ 0x005705ac                       ; 00570576
        ;   XREF to: 005705ac (CONDITIONAL_JUMP)  ; LAB_005705ac
    POP EBX                             ; 00570578
    RET                                 ; 00570579
    TEST EAX,EAX                        ; 0057057a
        ;   Label: LAB_0057057a
    JBE 0x00570585                      ; 0057057c
        ;   XREF to: 00570585 (CONDITIONAL_JUMP)  ; LAB_00570585
    CMP EAX,0x10                        ; 0057057e
    JZ 0x00570594                       ; 00570581
        ;   XREF to: 00570594 (CONDITIONAL_JUMP)  ; LAB_00570594
    POP EBX                             ; 00570583
    RET                                 ; 00570584
    MOV dword ptr [EDX],0x1             ; 00570585
        ;   Label: LAB_00570585
    TEST EBX,EBX                        ; 0057058b
    JNZ 0x005705b2                      ; 0057058d
        ;   XREF to: 005705b2 (CONDITIONAL_JUMP)  ; LAB_005705b2
    OR byte ptr [EDX],0x2               ; 0057058f
    POP EBX                             ; 00570592
    RET                                 ; 00570593
    MOV dword ptr [EDX],0x0             ; 00570594
        ;   Label: LAB_00570594
    POP EBX                             ; 0057059a
    RET                                 ; 0057059b
    MOV dword ptr [EDX],0x2             ; 0057059c
        ;   Label: LAB_0057059c
    POP EBX                             ; 005705a2
    RET                                 ; 005705a3
    MOV dword ptr [EDX],0x1             ; 005705a4
        ;   Label: LAB_005705a4
    POP EBX                             ; 005705aa
    RET                                 ; 005705ab
    MOV dword ptr [EDX],0x3             ; 005705ac
        ;   Label: LAB_005705ac
    POP EBX                             ; 005705b2
        ;   Label: LAB_005705b2
    RET                                 ; 005705b3


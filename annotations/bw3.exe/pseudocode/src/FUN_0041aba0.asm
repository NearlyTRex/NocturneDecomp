; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0041aba0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005dc8f0
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

    PUSH EBX                            ; 0041aba0
        ;   Label: FUN_0041aba0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041aba1
    TEST byte ptr [ESP + 0xc],0x4       ; 0041aba5
    JNZ 0x0041abfd                      ; 0041abaa
        ;   XREF to: 0041abfd (CONDITIONAL_JUMP)  ; LAB_0041abfd
    PUSH 0x0                            ; 0041abac
    ADD EBX,0x385c                      ; 0041abae
    PUSH EBX                            ; 0041abb4
    CALL FUN_00410370                   ; 0041abb5
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 0041abba
    PUSH 0x0                            ; 0041abbd
    SUB EAX,0x954                       ; 0041abbf
    PUSH EAX                            ; 0041abc4
    CALL FUN_0043f900                   ; 0041abc5
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 0041abca
    PUSH 0x0                            ; 0041abcd
    SUB EAX,0x2db0                      ; 0041abcf
    PUSH EAX                            ; 0041abd4
    CALL FUN_0054bf80                   ; 0041abd5
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 0041abda
    PUSH 0x1                            ; 0041abdd
    LEA EBX,[EAX + 0xfffffea8]          ; 0041abdf
    PUSH EBX                            ; 0041abe5
    CALL FUN_00408770                   ; 0041abe6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0041abeb
    MOV DL,byte ptr [ESP + 0xc]         ; 0041abee
    MOV EBX,EAX                         ; 0041abf2
    TEST DL,0x2                         ; 0041abf4
    JNZ 0x0041ac18                      ; 0041abf7
        ;   XREF to: 0041ac18 (CONDITIONAL_JUMP)  ; LAB_0041ac18
    MOV EAX,EBX                         ; 0041abf9
    POP EBX                             ; 0041abfb
    RET                                 ; 0041abfc
    PUSH 0x5dc8f0                       ; 0041abfd | DAT_005dc8f0
        ;   Label: LAB_0041abfd
    PUSH EBX                            ; 0041ac02
    CALL FUN_005a308f                   ; 0041ac03
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0041ac08
    PUSH EAX                            ; 0041ac0b
    CALL FUN_005a30b6                   ; 0041ac0c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0041ac11
    MOV EAX,EBX                         ; 0041ac14
    POP EBX                             ; 0041ac16
    RET                                 ; 0041ac17
    PUSH EAX                            ; 0041ac18
        ;   Label: LAB_0041ac18
    CALL FUN_005a30c4                   ; 0041ac19
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0041ac1e
    MOV EAX,EBX                         ; 0041ac21
    POP EBX                             ; 0041ac23
    RET                                 ; 0041ac24


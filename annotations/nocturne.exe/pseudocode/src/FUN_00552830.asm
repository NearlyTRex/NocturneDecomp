; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00552830(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005a4110
;
; Called Functions:
;   FUN_00409ea0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552830
        ;   Label: FUN_00552830
    MOV EBX,dword ptr [ESP + 0x8]       ; 00552831
    TEST byte ptr [ESP + 0xc],0x4       ; 00552835
    JNZ 0x00552856                      ; 0055283a
        ;   XREF to: 00552856 (CONDITIONAL_JUMP)  ; LAB_00552856
    PUSH 0x1                            ; 0055283c
    PUSH EBX                            ; 0055283e
    CALL FUN_00409ea0                   ; 0055283f
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 00552844
    MOV DL,byte ptr [ESP + 0xc]         ; 00552847
    MOV EBX,EAX                         ; 0055284b
    TEST DL,0x2                         ; 0055284d
    JNZ 0x00552871                      ; 00552850
        ;   XREF to: 00552871 (CONDITIONAL_JUMP)  ; LAB_00552871
    MOV EAX,EBX                         ; 00552852
    POP EBX                             ; 00552854
    RET                                 ; 00552855
    PUSH 0x5a4110                       ; 00552856 | DAT_005a4110
        ;   Label: LAB_00552856
    PUSH EBX                            ; 0055285b
    CALL FUN_0056445f                   ; 0055285c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 00552861
    PUSH EAX                            ; 00552864
    CALL FUN_00564486                   ; 00552865
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 0055286a
    MOV EAX,EBX                         ; 0055286d
    POP EBX                             ; 0055286f
    RET                                 ; 00552870
    PUSH EAX                            ; 00552871
        ;   Label: LAB_00552871
    CALL FUN_00564494                   ; 00552872
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 00552877
    MOV EAX,EBX                         ; 0055287a
    POP EBX                             ; 0055287c
    RET                                 ; 0055287d


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056bfb0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e54c0
;
; Called Functions:
;   FUN_0057aed0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056bfb0
        ;   Label: FUN_0056bfb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056bfb1
    TEST byte ptr [ESP + 0xc],0x4       ; 0056bfb5
    JNZ 0x0056bfd6                      ; 0056bfba
        ;   XREF to: 0056bfd6 (CONDITIONAL_JUMP)  ; LAB_0056bfd6
    PUSH 0x1                            ; 0056bfbc
    PUSH EBX                            ; 0056bfbe
    CALL FUN_0057aed0                   ; 0056bfbf
        ;   XREF to: 0057aed0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057aed0()
    ADD ESP,0x8                         ; 0056bfc4
    MOV DL,byte ptr [ESP + 0xc]         ; 0056bfc7
    MOV EBX,EAX                         ; 0056bfcb
    TEST DL,0x2                         ; 0056bfcd
    JNZ 0x0056bff1                      ; 0056bfd0
        ;   XREF to: 0056bff1 (CONDITIONAL_JUMP)  ; LAB_0056bff1
    MOV EAX,EBX                         ; 0056bfd2
    POP EBX                             ; 0056bfd4
    RET                                 ; 0056bfd5
    PUSH 0x5e54c0                       ; 0056bfd6 | DAT_005e54c0
        ;   Label: LAB_0056bfd6
    PUSH EBX                            ; 0056bfdb
    CALL FUN_005a308f                   ; 0056bfdc
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0056bfe1
    PUSH EAX                            ; 0056bfe4
    CALL FUN_005a30b6                   ; 0056bfe5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0056bfea
    MOV EAX,EBX                         ; 0056bfed
    POP EBX                             ; 0056bfef
    RET                                 ; 0056bff0
    PUSH EAX                            ; 0056bff1
        ;   Label: LAB_0056bff1
    CALL FUN_005a30c4                   ; 0056bff2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0056bff7
    MOV EAX,EBX                         ; 0056bffa
    POP EBX                             ; 0056bffc
    RET                                 ; 0056bffd


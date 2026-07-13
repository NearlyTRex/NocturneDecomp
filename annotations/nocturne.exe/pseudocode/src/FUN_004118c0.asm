; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004118c0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00599e50
;
; Called Functions:
;   FUN_00409ea0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004118c0
        ;   Label: FUN_004118c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004118c1
    TEST byte ptr [ESP + 0xc],0x4       ; 004118c5
    JNZ 0x004118e6                      ; 004118ca
        ;   XREF to: 004118e6 (CONDITIONAL_JUMP)  ; LAB_004118e6
    PUSH 0x1                            ; 004118cc
    PUSH EBX                            ; 004118ce
    CALL FUN_00409ea0                   ; 004118cf
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 004118d4
    MOV DL,byte ptr [ESP + 0xc]         ; 004118d7
    MOV EBX,EAX                         ; 004118db
    TEST DL,0x2                         ; 004118dd
    JNZ 0x00411901                      ; 004118e0
        ;   XREF to: 00411901 (CONDITIONAL_JUMP)  ; LAB_00411901
    MOV EAX,EBX                         ; 004118e2
    POP EBX                             ; 004118e4
    RET                                 ; 004118e5
    PUSH 0x599e50                       ; 004118e6 | DAT_00599e50
        ;   Label: LAB_004118e6
    PUSH EBX                            ; 004118eb
    CALL FUN_0056445f                   ; 004118ec
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 004118f1
    PUSH EAX                            ; 004118f4
    CALL FUN_00564486                   ; 004118f5
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 004118fa
    MOV EAX,EBX                         ; 004118fd
    POP EBX                             ; 004118ff
    RET                                 ; 00411900
    PUSH EAX                            ; 00411901
        ;   Label: LAB_00411901
    CALL FUN_00564494                   ; 00411902
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 00411907
    MOV EAX,EBX                         ; 0041190a
    POP EBX                             ; 0041190c
    RET                                 ; 0041190d


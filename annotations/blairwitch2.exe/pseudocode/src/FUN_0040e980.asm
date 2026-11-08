; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040e980(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2510
;
; Called Functions:
;   FUN_00408930
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e980
        ;   Label: FUN_0040e980
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e981
    TEST byte ptr [ESP + 0xc],0x4       ; 0040e985
    JNZ 0x0040e9a6                      ; 0040e98a
        ;   XREF to: 0040e9a6 (CONDITIONAL_JUMP)  ; LAB_0040e9a6
    PUSH 0x1                            ; 0040e98c
    PUSH EBX                            ; 0040e98e
    CALL FUN_00408930                   ; 0040e98f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 0040e994
    MOV DL,byte ptr [ESP + 0xc]         ; 0040e997
    MOV EBX,EAX                         ; 0040e99b
    TEST DL,0x2                         ; 0040e99d
    JNZ 0x0040e9c1                      ; 0040e9a0
        ;   XREF to: 0040e9c1 (CONDITIONAL_JUMP)  ; LAB_0040e9c1
    MOV EAX,EBX                         ; 0040e9a2
    POP EBX                             ; 0040e9a4
    RET                                 ; 0040e9a5
    PUSH 0x5f2510                       ; 0040e9a6 | DAT_005f2510
        ;   Label: LAB_0040e9a6
    PUSH EBX                            ; 0040e9ab
    CALL FUN_005b7fa7                   ; 0040e9ac
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0040e9b1
    PUSH EAX                            ; 0040e9b4
    CALL FUN_005b7fce                   ; 0040e9b5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0040e9ba
    MOV EAX,EBX                         ; 0040e9bd
    POP EBX                             ; 0040e9bf
    RET                                 ; 0040e9c0
    PUSH EAX                            ; 0040e9c1
        ;   Label: LAB_0040e9c1
    CALL FUN_005b7fdc                   ; 0040e9c2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0040e9c7
    MOV EAX,EBX                         ; 0040e9ca
    POP EBX                             ; 0040e9cc
    RET                                 ; 0040e9cd


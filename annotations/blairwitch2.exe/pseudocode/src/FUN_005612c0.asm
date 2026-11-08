; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005612c0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fbef0
;
; Called Functions:
;   FUN_00408930
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005612c0
        ;   Label: FUN_005612c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005612c1
    TEST byte ptr [ESP + 0xc],0x4       ; 005612c5
    JNZ 0x005612e6                      ; 005612ca
        ;   XREF to: 005612e6 (CONDITIONAL_JUMP)  ; LAB_005612e6
    PUSH 0x1                            ; 005612cc
    PUSH EBX                            ; 005612ce
    CALL FUN_00408930                   ; 005612cf
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 005612d4
    MOV DL,byte ptr [ESP + 0xc]         ; 005612d7
    MOV EBX,EAX                         ; 005612db
    TEST DL,0x2                         ; 005612dd
    JNZ 0x00561301                      ; 005612e0
        ;   XREF to: 00561301 (CONDITIONAL_JUMP)  ; LAB_00561301
    MOV EAX,EBX                         ; 005612e2
    POP EBX                             ; 005612e4
    RET                                 ; 005612e5
    PUSH 0x5fbef0                       ; 005612e6 | DAT_005fbef0
        ;   Label: LAB_005612e6
    PUSH EBX                            ; 005612eb
    CALL FUN_005b7fa7                   ; 005612ec
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 005612f1
    PUSH EAX                            ; 005612f4
    CALL FUN_005b7fce                   ; 005612f5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 005612fa
    MOV EAX,EBX                         ; 005612fd
    POP EBX                             ; 005612ff
    RET                                 ; 00561300
    PUSH EAX                            ; 00561301
        ;   Label: LAB_00561301
    CALL FUN_005b7fdc                   ; 00561302
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 00561307
    MOV EAX,EBX                         ; 0056130a
    POP EBX                             ; 0056130c
    RET                                 ; 0056130d


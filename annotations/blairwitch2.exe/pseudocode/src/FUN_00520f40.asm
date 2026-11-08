; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00520f40(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fafb0
;
; Called Functions:
;   FUN_004ce3d0
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00520f40
        ;   Label: FUN_00520f40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00520f41
    TEST byte ptr [ESP + 0xc],0x4       ; 00520f45
    JNZ 0x00520f66                      ; 00520f4a
        ;   XREF to: 00520f66 (CONDITIONAL_JUMP)  ; LAB_00520f66
    PUSH 0x1                            ; 00520f4c
    PUSH EBX                            ; 00520f4e
    CALL FUN_004ce3d0                   ; 00520f4f
        ;   XREF to: 004ce3d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce3d0()
    ADD ESP,0x8                         ; 00520f54
    MOV DL,byte ptr [ESP + 0xc]         ; 00520f57
    MOV EBX,EAX                         ; 00520f5b
    TEST DL,0x2                         ; 00520f5d
    JNZ 0x00520f81                      ; 00520f60
        ;   XREF to: 00520f81 (CONDITIONAL_JUMP)  ; LAB_00520f81
    MOV EAX,EBX                         ; 00520f62
    POP EBX                             ; 00520f64
    RET                                 ; 00520f65
    PUSH 0x5fafb0                       ; 00520f66 | DAT_005fafb0
        ;   Label: LAB_00520f66
    PUSH EBX                            ; 00520f6b
    CALL FUN_005b7fa7                   ; 00520f6c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00520f71
    PUSH EAX                            ; 00520f74
    CALL FUN_005b7fce                   ; 00520f75
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 00520f7a
    MOV EAX,EBX                         ; 00520f7d
    POP EBX                             ; 00520f7f
    RET                                 ; 00520f80
    PUSH EAX                            ; 00520f81
        ;   Label: LAB_00520f81
    CALL FUN_005b7fdc                   ; 00520f82
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 00520f87
    MOV EAX,EBX                         ; 00520f8a
    POP EBX                             ; 00520f8c
    RET                                 ; 00520f8d


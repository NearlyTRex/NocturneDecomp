; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_setdir_cpp_FUN_00513e20(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_00514300
;   core_setdir.cpp_CDemonSet_isPointInVdirBox_FUN_00513d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00513e20
        ;   Label: core_setdir.cpp_FUN_00513e20
    PUSH ESI                            ; 00513e21
    PUSH EDI                            ; 00513e22
    PUSH EBP                            ; 00513e23
    MOV ESI,dword ptr [ESP + 0x14]      ; 00513e24
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00513e28
    MOV EDX,dword ptr [ESP + 0x18]      ; 00513e2c
    PUSH EDX                            ; 00513e30
    PUSH ESI                            ; 00513e31
    XOR EBX,EBX                         ; 00513e32
    CALL core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_00514300 ; 00513e34
        ;   XREF to: 00514300 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_00514300()
    ADD ESP,0x8                         ; 00513e39
    MOV ECX,dword ptr [ESI + 0x15b028]  ; 00513e3c
    MOV EDI,EAX                         ; 00513e42
    TEST ECX,ECX                        ; 00513e44
    JLE 0x00513e5f                      ; 00513e46
        ;   XREF to: 00513e5f (CONDITIONAL_JUMP)  ; LAB_00513e5f
    PUSH EBX                            ; 00513e48
        ;   Label: LAB_00513e48
    PUSH ESI                            ; 00513e49
    CALL core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_00514300 ; 00513e4a
        ;   XREF to: 00514300 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_00514300()
    ADD ESP,0x8                         ; 00513e4f
    CMP EAX,EDI                         ; 00513e52
    JZ 0x00513e66                       ; 00513e54
        ;   XREF to: 00513e66 (CONDITIONAL_JUMP)  ; LAB_00513e66
    INC EBX                             ; 00513e56
        ;   Label: LAB_00513e56
    CMP EBX,dword ptr [ESI + 0x15b028]  ; 00513e57
    JL 0x00513e48                       ; 00513e5d
        ;   XREF to: 00513e48 (CONDITIONAL_JUMP)  ; LAB_00513e48
    XOR EAX,EAX                         ; 00513e5f
        ;   Label: LAB_00513e5f
    POP EBP                             ; 00513e61
    POP EDI                             ; 00513e62
    POP ESI                             ; 00513e63
    POP EBX                             ; 00513e64
    RET                                 ; 00513e65
    PUSH EBP                            ; 00513e66
        ;   Label: LAB_00513e66
    PUSH EBX                            ; 00513e67
    PUSH ESI                            ; 00513e68
    CALL core_setdir.cpp_CDemonSet_isPointInVdirBox_FUN_00513d80 ; 00513e69
        ;   XREF to: 00513d80 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_CDemonSet_isPointInVdirBox_FUN_00513d80()
    ADD ESP,0xc                         ; 00513e6e
    TEST EAX,EAX                        ; 00513e71
    JZ 0x00513e56                       ; 00513e73
        ;   XREF to: 00513e56 (CONDITIONAL_JUMP)  ; LAB_00513e56
    MOV EAX,0x1                         ; 00513e75
    POP EBP                             ; 00513e7a
    POP EDI                             ; 00513e7b
    POP ESI                             ; 00513e7c
    POP EBX                             ; 00513e7d
    RET                                 ; 00513e7e


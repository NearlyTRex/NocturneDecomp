; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_setdir_cpp_FUN_0055ba50(CDemonSet *param_1,int param_2,undefined4 param_3)
;
;
; Called Functions:
;   core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_0055c020
;   core_setdir.cpp_FUN_0055b990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055ba50
        ;   Label: core_setdir.cpp_FUN_0055ba50
    PUSH ESI                            ; 0055ba51
    PUSH EDI                            ; 0055ba52
    PUSH EBP                            ; 0055ba53
    MOV ESI,dword ptr [ESP + 0x14]      ; 0055ba54
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0055ba58
    MOV EDX,dword ptr [ESP + 0x18]      ; 0055ba5c
    PUSH EDX                            ; 0055ba60
    PUSH ESI                            ; 0055ba61
    XOR EBX,EBX                         ; 0055ba62
    CALL core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_0055c020 ; 0055ba64
        ;   XREF to: 0055c020 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_0055c020(CDemonSet * this_ptr, int box_index)
    ADD ESP,0x8                         ; 0055ba69
    MOV ECX,dword ptr [ESI + 0x15b428]  ; 0055ba6c
    MOV EDI,EAX                         ; 0055ba72
    TEST ECX,ECX                        ; 0055ba74
    JLE 0x0055ba8f                      ; 0055ba76
        ;   XREF to: 0055ba8f (CONDITIONAL_JUMP)  ; LAB_0055ba8f
    PUSH EBX                            ; 0055ba78
        ;   Label: LAB_0055ba78
    PUSH ESI                            ; 0055ba79
    CALL core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_0055c020 ; 0055ba7a
        ;   XREF to: 0055c020 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_0055c020(CDemonSet * this_ptr, int box_index)
    ADD ESP,0x8                         ; 0055ba7f
    CMP EAX,EDI                         ; 0055ba82
    JZ 0x0055ba96                       ; 0055ba84
        ;   XREF to: 0055ba96 (CONDITIONAL_JUMP)  ; LAB_0055ba96
    INC EBX                             ; 0055ba86
        ;   Label: LAB_0055ba86
    CMP EBX,dword ptr [ESI + 0x15b428]  ; 0055ba87
    JL 0x0055ba78                       ; 0055ba8d
        ;   XREF to: 0055ba78 (CONDITIONAL_JUMP)  ; LAB_0055ba78
    XOR EAX,EAX                         ; 0055ba8f
        ;   Label: LAB_0055ba8f
    POP EBP                             ; 0055ba91
    POP EDI                             ; 0055ba92
    POP ESI                             ; 0055ba93
    POP EBX                             ; 0055ba94
    RET                                 ; 0055ba95
    PUSH EBP                            ; 0055ba96
        ;   Label: LAB_0055ba96
    PUSH EBX                            ; 0055ba97
    PUSH ESI                            ; 0055ba98
    CALL core_setdir.cpp_FUN_0055b990   ; 0055ba99
        ;   XREF to: 0055b990 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_FUN_0055b990()
    ADD ESP,0xc                         ; 0055ba9e
    TEST EAX,EAX                        ; 0055baa1
    JZ 0x0055ba86                       ; 0055baa3
        ;   XREF to: 0055ba86 (CONDITIONAL_JUMP)  ; LAB_0055ba86
    MOV EAX,0x1                         ; 0055baa5
    POP EBP                             ; 0055baaa
    POP EDI                             ; 0055baab
    POP ESI                             ; 0055baac
    POP EBX                             ; 0055baad
    RET                                 ; 0055baae


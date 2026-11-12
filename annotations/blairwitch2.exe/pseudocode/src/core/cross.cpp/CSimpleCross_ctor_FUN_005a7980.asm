; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSimpleCross * core_cross_cpp_CSimpleCross_ctor_FUN_005a7980(CSimpleCross *this_ptr)
;
; Parameters:
; CSimpleCross *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_cross.cpp_FUN_005a7950 at 005a7963
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;   core_melee.cpp_CMelee_ctor_FUN_004ea8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a7980
        ;   Label: core_cross.cpp_CSimpleCross_ctor_FUN_005a7980
    PUSH ESI                            ; 005a7981
    PUSH EDI                            ; 005a7982
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a7983
    PUSH EDX                            ; 005a7987
    CALL core_melee.cpp_CMelee_ctor_FUN_004ea8b0 ; 005a7988
        ;   XREF to: 004ea8b0 (UNCONDITIONAL_CALL)  ; CMelee * core_melee.cpp_CMelee_ctor_FUN_004ea8b0(CMelee * this_ptr)
    ADD ESP,0x4                         ; 005a798d
    PUSH 0x5f07ad                       ; 005a7990
    MOV EBX,EAX                         ; 005a7995
    LEA EDI,[EAX + 0x2b4]               ; 005a7997
    PUSH EDI                            ; 005a799d
    MOV dword ptr [EAX + 0x2b0],0x5fff94 ; 005a799e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 005a79a8
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x43c],0xd     ; 005a79ad
    MOV dword ptr [EBX + 0x6d8],0x40a00000 ; 005a79b7
    MOV ESI,0x5f07b8                    ; 005a79c1
    MOV dword ptr [EBX + 0x6dc],0x41200000 ; 005a79c6
    ADD ESP,0x8                         ; 005a79d0
    MOV dword ptr [EBX + 0x6e0],0x0     ; 005a79d3
    LEA EDI,[EBX + 0x6fc]               ; 005a79dd
    MOV dword ptr [EBX + 0x6e4],0x1     ; 005a79e3
    PUSH EDI                            ; 005a79ed
    MOV AL,byte ptr [ESI]               ; 005a79ee
        ;   Label: LAB_005a79ee
    MOV byte ptr [EDI],AL               ; 005a79f0
    CMP AL,0x0                          ; 005a79f2
    JZ 0x005a7a06                       ; 005a79f4
        ;   XREF to: 005a7a06 (CONDITIONAL_JUMP)  ; LAB_005a7a06
    MOV AL,byte ptr [ESI + 0x1]         ; 005a79f6
    ADD ESI,0x2                         ; 005a79f9
    MOV byte ptr [EDI + 0x1],AL         ; 005a79fc
    ADD EDI,0x2                         ; 005a79ff
    CMP AL,0x0                          ; 005a7a02
    JNZ 0x005a79ee                      ; 005a7a04
        ;   XREF to: 005a79ee (CONDITIONAL_JUMP)  ; LAB_005a79ee
    POP EDI                             ; 005a7a06
        ;   Label: LAB_005a7a06
    MOV ESI,0x5f07c4                    ; 005a7a07
    LEA EDI,[EBX + 0x760]               ; 005a7a0c
    PUSH EDI                            ; 005a7a12
    MOV AL,byte ptr [ESI]               ; 005a7a13
        ;   Label: LAB_005a7a13
    MOV byte ptr [EDI],AL               ; 005a7a15
    CMP AL,0x0                          ; 005a7a17
    JZ 0x005a7a2b                       ; 005a7a19
        ;   XREF to: 005a7a2b (CONDITIONAL_JUMP)  ; LAB_005a7a2b
    MOV AL,byte ptr [ESI + 0x1]         ; 005a7a1b
    ADD ESI,0x2                         ; 005a7a1e
    MOV byte ptr [EDI + 0x1],AL         ; 005a7a21
    ADD EDI,0x2                         ; 005a7a24
    CMP AL,0x0                          ; 005a7a27
    JNZ 0x005a7a13                      ; 005a7a29
        ;   XREF to: 005a7a13 (CONDITIONAL_JUMP)  ; LAB_005a7a13
    POP EDI                             ; 005a7a2b
        ;   Label: LAB_005a7a2b
    MOV ESI,0x5f07d0                    ; 005a7a2c
    LEA EDI,[EBX + 0x7c4]               ; 005a7a31
    PUSH EDI                            ; 005a7a37
    MOV AL,byte ptr [ESI]               ; 005a7a38
        ;   Label: LAB_005a7a38
    MOV byte ptr [EDI],AL               ; 005a7a3a
    CMP AL,0x0                          ; 005a7a3c
    JZ 0x005a7a50                       ; 005a7a3e
        ;   XREF to: 005a7a50 (CONDITIONAL_JUMP)  ; LAB_005a7a50
    MOV AL,byte ptr [ESI + 0x1]         ; 005a7a40
    ADD ESI,0x2                         ; 005a7a43
    MOV byte ptr [EDI + 0x1],AL         ; 005a7a46
    ADD EDI,0x2                         ; 005a7a49
    CMP AL,0x0                          ; 005a7a4c
    JNZ 0x005a7a38                      ; 005a7a4e
        ;   XREF to: 005a7a38 (CONDITIONAL_JUMP)  ; LAB_005a7a38
    POP EDI                             ; 005a7a50
        ;   Label: LAB_005a7a50
    MOV EAX,EBX                         ; 005a7a51
    POP EDI                             ; 005a7a53
    POP ESI                             ; 005a7a54
    POP EBX                             ; 005a7a55
    RET                                 ; 005a7a56


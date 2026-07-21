; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_shatter_FUN_0051ed30(int param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
;
; XREF[1]:
;   FUN_00427a60 at 00427a9d
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_shatter_FUN_0051a780
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051ed30
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_0051ed30
    PUSH ESI                            ; 0051ed31
    PUSH EDI                            ; 0051ed32
    PUSH EBP                            ; 0051ed33
    MOV EBX,dword ptr [ESP + 0x14]      ; 0051ed34
    MOV EAX,dword ptr [ESP + 0x20]      ; 0051ed38
    CMP EAX,dword ptr [EBX + 0x2230]    ; 0051ed3c
    JNZ 0x0051ed81                      ; 0051ed42
        ;   XREF to: 0051ed81 (CONDITIONAL_JUMP)  ; LAB_0051ed81
    LEA EAX,[EBX + 0x21b8]              ; 0051ed44
        ;   Label: LAB_0051ed44
    PUSH EAX                            ; 0051ed4a
    LEA EAX,[EBX + 0x2140]              ; 0051ed4b
    PUSH EAX                            ; 0051ed51
    MOV ECX,dword ptr [EBX + 0x2234]    ; 0051ed52
    PUSH ECX                            ; 0051ed58
    MOV ESI,dword ptr [EBX + 0x2230]    ; 0051ed59
    PUSH ESI                            ; 0051ed5f
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0051ed60
    PUSH EDI                            ; 0051ed64
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0051ed65
    PUSH EBP                            ; 0051ed69
    PUSH EBX                            ; 0051ed6a
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 0051ed6b
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020()
    ADD ESP,0x4                         ; 0051ed70
    PUSH EAX                            ; 0051ed73
    CALL core_skeleton.cpp_CDeformableModel_shatter_FUN_0051a780 ; 0051ed74
        ;   XREF to: 0051a780 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_shatter_FUN_0051a780()
    ADD ESP,0x1c                        ; 0051ed79
    POP EBP                             ; 0051ed7c
    POP EDI                             ; 0051ed7d
    POP ESI                             ; 0051ed7e
    POP EBX                             ; 0051ed7f
    RET                                 ; 0051ed80
    PUSH EAX                            ; 0051ed81
        ;   Label: LAB_0051ed81
    PUSH EBX                            ; 0051ed82
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50 ; 0051ed83
        ;   XREF to: 0051da50 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50()
    ADD ESP,0x8                         ; 0051ed88
    JMP 0x0051ed44                      ; 0051ed8b
        ;   XREF to: 0051ed44 (UNCONDITIONAL_JUMP)  ; LAB_0051ed44


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040(CDeformableModelInstance * this_ptr, CBodyPart * body_part, int part_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CBodyPart *      Stack[0x8]:4   body_part
; int              Stack[0xc]:4   part_index
;
; XREF[3]:
;   core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280 at 0041b49e
;   core_charactr.cpp_CCharacter_FUN_0042bd30 at 0042bd8c
;   core_skeleton.cpp_CDeformableModelInstance_spawnDismemberedBodyPart_FUN_005a0fe0 at 005a1015
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_dismember_FUN_0059c5e0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1040
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040
    PUSH EDI                            ; 005a1041
    PUSH EBP                            ; 005a1042
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a1043
    MOV EDI,dword ptr [ESP + 0x18]      ; 005a1047
    CMP dword ptr [ESP + 0x14],0x0      ; 005a104b
    JNZ 0x005a1061                      ; 005a1050 | LAB_005a1061
        ;   XREF to: 005a1061 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + EDI*0x4 + 0x2140],0x0 ; 005a1052
    POP EBP                             ; 005a105d
    POP EDI                             ; 005a105e
    POP EBX                             ; 005a105f
    RET                                 ; 005a1060
    PUSH ESI                            ; 005a1061
        ;   Label: LAB_005a1061
    PUSH EBX                            ; 005a1062
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 005a1063 | CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
    MOV EDX,EAX                         ; 005a1068
    ADD ESP,0x4                         ; 005a106a
    MOV ESI,EAX                         ; 005a106d
    MOV ECX,dword ptr [EDX]             ; 005a106f
    MOV EAX,0x1                         ; 005a1071
    CMP ECX,0x2                         ; 005a1076
    JL 0x005a1095                       ; 005a1079 | LAB_005a1095
        ;   XREF to: 005a1095 (CONDITIONAL_JUMP)
    LEA EDX,[EAX*0x8 + 0x0]             ; 005a107b
        ;   Label: LAB_005a107b
    ADD EDX,ESI                         ; 005a1082
    XOR ECX,ECX                         ; 005a1084
    TEST EAX,EAX                        ; 005a1086
        ;   Label: LAB_005a1086
    JLE 0x005a1099                      ; 005a1088 | LAB_005a1099
        ;   XREF to: 005a1099 (CONDITIONAL_JUMP)
    CMP ECX,dword ptr [EDX + 0x8]       ; 005a108a
    JZ 0x005a1099                       ; 005a108d | LAB_005a1099
        ;   XREF to: 005a1099 (CONDITIONAL_JUMP)
    DEC EAX                             ; 005a108f
    SUB EDX,0x8                         ; 005a1090
    JMP 0x005a1086                      ; 005a1093 | LAB_005a1086
        ;   XREF to: 005a1086 (UNCONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005a1095
        ;   Label: LAB_005a1095
    JMP 0x005a107b                      ; 005a1097 | LAB_005a107b
        ;   XREF to: 005a107b (UNCONDITIONAL_JUMP)
    CMP EAX,dword ptr [EBX + 0x2230]    ; 005a1099
        ;   Label: LAB_005a1099
    JZ 0x005a10ab                       ; 005a109f | LAB_005a10ab
        ;   XREF to: 005a10ab (CONDITIONAL_JUMP)
    PUSH EAX                            ; 005a10a1
    PUSH EBX                            ; 005a10a2
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0 ; 005a10a3 | void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(CDeformableModelInstance * this_ptr, int lod_index)
        ;   XREF to: 005a01d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005a10a8
    MOV ECX,dword ptr [EBX + EDI*0x4 + 0x21b8] ; 005a10ab
        ;   Label: LAB_005a10ab
    PUSH ECX                            ; 005a10b2
    MOV EBP,dword ptr [EBX + 0x2234]    ; 005a10b3
    PUSH EBP                            ; 005a10b9
    PUSH EDI                            ; 005a10ba
    MOV EAX,dword ptr [ESP + 0x24]      ; 005a10bb
    PUSH EAX                            ; 005a10bf
    MOV EDX,dword ptr [EBX + 0x2230]    ; 005a10c0
    PUSH EDX                            ; 005a10c6
    PUSH ESI                            ; 005a10c7
    CALL core_skeleton.cpp_CDeformableModel_dismember_FUN_0059c5e0 ; 005a10c8 | void core_skeleton.cpp_CDeformableModel_dismember_FUN_0059c5e0(CDeformableModel * this_ptr, int lod_index, CBodyPart * body_part_ptr, int part_index, ...)
        ;   XREF to: 0059c5e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 005a10cd
    POP ESI                             ; 005a10d0
    MOV dword ptr [EBX + EDI*0x4 + 0x2140],0x0 ; 005a10d1
    POP EBP                             ; 005a10dc
    POP EDI                             ; 005a10dd
    POP EBX                             ; 005a10de
    RET                                 ; 005a10df


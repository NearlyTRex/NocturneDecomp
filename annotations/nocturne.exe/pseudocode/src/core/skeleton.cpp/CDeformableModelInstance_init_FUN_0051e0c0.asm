; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(int param_1,char *param_2)
;
;
; XREF[51]:
;   FUN_00412100 at 00412122
;   FUN_00415050 at 00415072
;   FUN_00418630 at 00418674
;   FUN_0041fbb0 at 0041fbd2
;   FUN_00439d30 at 00439d66
;   FUN_0043bbe0 at 0043bc02
;   FUN_00454660 at 00454682
;   FUN_004b30a0 at 004b30d6
;   FUN_004b6610 at 004b6638
;   FUN_004b9af0 at 004b9b18
;   ... and 41 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_0051dcb0
;   core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_0051dc90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051e0c0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
    PUSH ESI                            ; 0051e0c1
    PUSH EDI                            ; 0051e0c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0051e0c3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0051e0c7
    LEA EDI,[EBX + 0x2260]              ; 0051e0cb
    PUSH EDI                            ; 0051e0d1
    MOV AL,byte ptr [ESI]               ; 0051e0d2
        ;   Label: LAB_0051e0d2
    MOV byte ptr [EDI],AL               ; 0051e0d4
    CMP AL,0x0                          ; 0051e0d6
    JZ 0x0051e0ea                       ; 0051e0d8
        ;   XREF to: 0051e0ea (CONDITIONAL_JUMP)  ; LAB_0051e0ea
    MOV AL,byte ptr [ESI + 0x1]         ; 0051e0da
    ADD ESI,0x2                         ; 0051e0dd
    MOV byte ptr [EDI + 0x1],AL         ; 0051e0e0
    ADD EDI,0x2                         ; 0051e0e3
    CMP AL,0x0                          ; 0051e0e6
    JNZ 0x0051e0d2                      ; 0051e0e8
        ;   XREF to: 0051e0d2 (CONDITIONAL_JUMP)  ; LAB_0051e0d2
    POP EDI                             ; 0051e0ea
        ;   Label: LAB_0051e0ea
    PUSH EBX                            ; 0051e0eb
    MOV dword ptr [EBX + 0x22b0],0x0    ; 0051e0ec
    CALL core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_0051dc90 ; 0051e0f6
        ;   XREF to: 0051dc90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_0051dc90()
    ADD ESP,0x4                         ; 0051e0fb
    PUSH EBX                            ; 0051e0fe
    CALL core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_0051dcb0 ; 0051e0ff
        ;   XREF to: 0051dcb0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_0051dcb0()
    ADD ESP,0x4                         ; 0051e104
    MOV dword ptr [EBX + 0x2230],0xffffffff ; 0051e107
    POP EDI                             ; 0051e111
    POP ESI                             ; 0051e112
    POP EBX                             ; 0051e113
    RET                                 ; 0051e114


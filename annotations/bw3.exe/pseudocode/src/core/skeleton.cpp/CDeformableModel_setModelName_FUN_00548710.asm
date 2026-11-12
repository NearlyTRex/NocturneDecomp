; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_setModelName_FUN_00548710(CDeformableModel *this_ptr,char *model_name)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   model_name
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00548710
        ;   Label: core_skeleton.cpp_CDeformableModel_setModelName_FUN_00548710
    PUSH EDI                            ; 00548711
    MOV EDX,dword ptr [ESP + 0xc]       ; 00548712
    MOV ESI,dword ptr [ESP + 0x10]      ; 00548716
    LEA EDI,[EDX + 0x355c]              ; 0054871a
    PUSH EDI                            ; 00548720
    MOV AL,byte ptr [ESI]               ; 00548721
        ;   Label: LAB_00548721
    MOV byte ptr [EDI],AL               ; 00548723
    CMP AL,0x0                          ; 00548725
    JZ 0x00548739                       ; 00548727
        ;   XREF to: 00548739 (CONDITIONAL_JUMP)  ; LAB_00548739
    MOV AL,byte ptr [ESI + 0x1]         ; 00548729
    ADD ESI,0x2                         ; 0054872c
    MOV byte ptr [EDI + 0x1],AL         ; 0054872f
    ADD EDI,0x2                         ; 00548732
    CMP AL,0x0                          ; 00548735
    JNZ 0x00548721                      ; 00548737
        ;   XREF to: 00548721 (CONDITIONAL_JUMP)  ; LAB_00548721
    POP EDI                             ; 00548739
        ;   Label: LAB_00548739
    MOV dword ptr [EDX + 0x35ac],0x0    ; 0054873a
    POP EDI                             ; 00548744
    POP ESI                             ; 00548745
    RET                                 ; 00548746


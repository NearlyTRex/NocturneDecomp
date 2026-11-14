; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_setModelName_FUN_00563b70(CDeformableModel *this_ptr,char *model_name)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   model_name
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00563b70
        ;   Label: core_skeleton.cpp_CDeformableModel_setModelName_FUN_00563b70
    PUSH EDI                            ; 00563b71
    MOV EDX,dword ptr [ESP + 0xc]       ; 00563b72
    MOV ESI,dword ptr [ESP + 0x10]      ; 00563b76
    LEA EDI,[EDX + 0x355c]              ; 00563b7a
    PUSH EDI                            ; 00563b80
    MOV AL,byte ptr [ESI]               ; 00563b81
        ;   Label: LAB_00563b81
    MOV byte ptr [EDI],AL               ; 00563b83
    CMP AL,0x0                          ; 00563b85
    JZ 0x00563b99                       ; 00563b87
        ;   XREF to: 00563b99 (CONDITIONAL_JUMP)  ; LAB_00563b99
    MOV AL,byte ptr [ESI + 0x1]         ; 00563b89
    ADD ESI,0x2                         ; 00563b8c
    MOV byte ptr [EDI + 0x1],AL         ; 00563b8f
    ADD EDI,0x2                         ; 00563b92
    CMP AL,0x0                          ; 00563b95
    JNZ 0x00563b81                      ; 00563b97
        ;   XREF to: 00563b81 (CONDITIONAL_JUMP)  ; LAB_00563b81
    POP EDI                             ; 00563b99
        ;   Label: LAB_00563b99
    MOV dword ptr [EDX + 0x35ac],0x0    ; 00563b9a
    POP EDI                             ; 00563ba4
    POP ESI                             ; 00563ba5
    RET                                 ; 00563ba6


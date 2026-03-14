; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_CBoneStructure_computeWorldMatrices_FUN_0058ad30(CBoneStructure *this_ptr)
;
; Parameters:
; CBoneStructure * Stack[0x4]:4   this_ptr
; Local Variables:
; CMatrix3x4f      Stack[-0x44]:48  local_44
; SBoneData *      Stack[-0x14]:4  local_14
;
; Called Functions:
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    NOP                                 ; 0058ad30
        ;   Label: core_skeledit.cpp_CBoneStructure_computeWorldMatrices_FUN_0058ad30
    NOP                                 ; 0058ad31
    NOP                                 ; 0058ad32
    NOP                                 ; 0058ad33
    NOP                                 ; 0058ad34
    NOP                                 ; 0058ad35
    NOP                                 ; 0058ad36
    NOP                                 ; 0058ad37
    NOP                                 ; 0058ad38
    NOP                                 ; 0058ad39
    PUSH EBX                            ; 0058ad3a
    PUSH ESI                            ; 0058ad3b
    PUSH EDI                            ; 0058ad3c
    PUSH EBP                            ; 0058ad3d
    SUB ESP,0x34                        ; 0058ad3e
    MOV EBX,dword ptr [ESP + 0x48]      ; 0058ad41
    MOV EDX,dword ptr [EBX]             ; 0058ad45
    XOR EBP,EBP                         ; 0058ad47
    TEST EDX,EDX                        ; 0058ad49
    JLE 0x0058ad79                      ; 0058ad4b
        ;   XREF to: 0058ad79 (CONDITIONAL_JUMP)  ; LAB_0058ad79
    ADD EBX,0x4                         ; 0058ad4d
    MOV dword ptr [ESP + 0x30],EBX      ; 0058ad50
    MOV ESI,dword ptr [EBX + 0x20]      ; 0058ad54
        ;   Label: LAB_0058ad54
    TEST ESI,ESI                        ; 0058ad57
    JGE 0x0058ad81                      ; 0058ad59
        ;   XREF to: 0058ad81 (CONDITIONAL_JUMP)  ; LAB_0058ad81
    MOV ECX,0xc                         ; 0058ad5b
    LEA EDI,[EBX + 0x54]                ; 0058ad60
    LEA ESI,[EBX + 0x24]                ; 0058ad63
    MOVSD.REP ES:EDI,ESI                ; 0058ad66
        ;   Label: LAB_0058ad66
    MOV ESI,dword ptr [ESP + 0x48]      ; 0058ad68
    INC EBP                             ; 0058ad6c
    MOV ECX,dword ptr [ESI]             ; 0058ad6d
    ADD EBX,0x84                        ; 0058ad6f
    CMP EBP,ECX                         ; 0058ad75
    JL 0x0058ad54                       ; 0058ad77
        ;   XREF to: 0058ad54 (CONDITIONAL_JUMP)  ; LAB_0058ad54
    ADD ESP,0x34                        ; 0058ad79
        ;   Label: LAB_0058ad79
    POP EBP                             ; 0058ad7c
    POP EDI                             ; 0058ad7d
    POP ESI                             ; 0058ad7e
    POP EBX                             ; 0058ad7f
    RET                                 ; 0058ad80
    IMUL ESI,ESI,0x84                   ; 0058ad81
        ;   Label: LAB_0058ad81
    ADD ESI,dword ptr [ESP + 0x30]      ; 0058ad87
    ADD ESI,0x54                        ; 0058ad8b
    PUSH ESI                            ; 0058ad8e
    LEA ESI,[EBX + 0x24]                ; 0058ad8f
    PUSH ESI                            ; 0058ad92
    LEA ESI,[ESP + 0x8]                 ; 0058ad93
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0058ad97
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0058ad9c
    LEA ESI,[ESP + 0x8]                 ; 0058ada1
    LEA EDI,[EBX + 0x54]                ; 0058ada5
    ADD ESP,0x8                         ; 0058ada8
    JMP 0x0058ad66                      ; 0058adab
        ;   XREF to: 0058ad66 (UNCONDITIONAL_JUMP)  ; LAB_0058ad66


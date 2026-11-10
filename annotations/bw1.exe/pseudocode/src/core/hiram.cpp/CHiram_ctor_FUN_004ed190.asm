; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHiram * __cdecl core_hiram_cpp_CHiram_ctor_FUN_004ed190(CHiram *this_ptr)
;
; Parameters:
; CHiram *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_hiram.cpp_factoryFuncHiram_FUN_004ed160 at 004ed173
;
; Called Functions:
;   core_npc.cpp_CNPC_ctor_FUN_00531670
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ed190
        ;   Label: core_hiram.cpp_CHiram_ctor_FUN_004ed190
    PUSH ESI                            ; 004ed191
    PUSH EDI                            ; 004ed192
    MOV EDX,dword ptr [ESP + 0x10]      ; 004ed193
    PUSH EDX                            ; 004ed197
    CALL core_npc.cpp_CNPC_ctor_FUN_00531670 ; 004ed198
        ;   XREF to: 00531670 (UNCONDITIONAL_CALL)  ; CNPC * core_npc.cpp_CNPC_ctor_FUN_00531670(CNPC * this_ptr)
    ADD ESP,0x4                         ; 004ed19d
    PUSH 0x5e4c40                       ; 004ed1a0
    MOV EBX,EAX                         ; 004ed1a5
    LEA EDI,[EAX + 0x158]               ; 004ed1a7
    PUSH EDI                            ; 004ed1ad
    MOV dword ptr [EAX + 0x154],0x601fc4 ; 004ed1ae
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 004ed1b8
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 004ed1bd
    MOV ESI,0x5e4c4a                    ; 004ed1c0
    LEA EDI,[EBX + 0x1fab8]             ; 004ed1c5
    PUSH EDI                            ; 004ed1cb
    MOV AL,byte ptr [ESI]               ; 004ed1cc
        ;   Label: LAB_004ed1cc
    MOV byte ptr [EDI],AL               ; 004ed1ce
    CMP AL,0x0                          ; 004ed1d0
    JZ 0x004ed1e4                       ; 004ed1d2
        ;   XREF to: 004ed1e4 (CONDITIONAL_JUMP)  ; LAB_004ed1e4
    MOV AL,byte ptr [ESI + 0x1]         ; 004ed1d4
    ADD ESI,0x2                         ; 004ed1d7
    MOV byte ptr [EDI + 0x1],AL         ; 004ed1da
    ADD EDI,0x2                         ; 004ed1dd
    CMP AL,0x0                          ; 004ed1e0
    JNZ 0x004ed1cc                      ; 004ed1e2
        ;   XREF to: 004ed1cc (CONDITIONAL_JUMP)  ; LAB_004ed1cc
    POP EDI                             ; 004ed1e4
        ;   Label: LAB_004ed1e4
    MOV EAX,EBX                         ; 004ed1e5
    POP EDI                             ; 004ed1e7
    POP ESI                             ; 004ed1e8
    POP EBX                             ; 004ed1e9
    RET                                 ; 004ed1ea


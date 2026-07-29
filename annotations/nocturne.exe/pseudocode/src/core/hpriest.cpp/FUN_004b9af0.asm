; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CNPC * core_hpriest_cpp_FUN_004b9af0(CNPC *param_1)
;
;
; XREF[1]:
;   core_hpriest.cpp_FUN_004b9ac0 at 004b9ad3
;
; Referenced Globals:
;   TerminatedCString s_priest_dfm_00585fe2
;   TerminatedCString s_killPriest_00585fed
;   undefined4 s_illPriest_00585fed+1
;   undefined4 s_llPriest_00585fed+2
;   undefined4 s_lPriest_00585fed+3
;   CCharacter_full_vtable g_CHighPriestOfGardathVTable
;
; Called Functions:
;   core_npc.cpp_FUN_004ee950
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b9af0
        ;   Label: core_hpriest.cpp_FUN_004b9af0
    PUSH ESI                            ; 004b9af1
    PUSH EDI                            ; 004b9af2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004b9af3
    PUSH EDX                            ; 004b9af7
    CALL core_npc.cpp_FUN_004ee950      ; 004b9af8
        ;   XREF to: 004ee950 (UNCONDITIONAL_CALL)  ; CNPC * core_npc.cpp_FUN_004ee950(CNPC * this_ptr)
    ADD ESP,0x4                         ; 004b9afd
    PUSH 0x585fe2                       ; 004b9b00 | = "priest.dfm"
    MOV EBX,EAX                         ; 004b9b05
    LEA EDI,[EAX + 0x150]               ; 004b9b07
    PUSH EDI                            ; 004b9b0d
    MOV dword ptr [EAX + 0x14c],0x59f264 ; 004b9b0e | g_CHighPriestOfGardathVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 004b9b18
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 004b9b1d
    MOV ESI,0x585fed                    ; 004b9b20 | = "killPriest"
    LEA EDI,[EBX + 0x1f570]             ; 004b9b25
    PUSH EDI                            ; 004b9b2b
    MOV AL,byte ptr [ESI]               ; 004b9b2c | = "killPriest" | s_llPriest_00585fed+2
        ;   Label: LAB_004b9b2c
    MOV byte ptr [EDI],AL               ; 004b9b2e
    CMP AL,0x0                          ; 004b9b30
    JZ 0x004b9b44                       ; 004b9b32
        ;   XREF to: 004b9b44 (CONDITIONAL_JUMP)  ; LAB_004b9b44
    MOV AL,byte ptr [ESI + 0x1]         ; 004b9b34 | s_illPriest_00585fed+1 | s_lPriest_00585fed+3
    ADD ESI,0x2                         ; 004b9b37
    MOV byte ptr [EDI + 0x1],AL         ; 004b9b3a
    ADD EDI,0x2                         ; 004b9b3d
    CMP AL,0x0                          ; 004b9b40
    JNZ 0x004b9b2c                      ; 004b9b42
        ;   XREF to: 004b9b2c (CONDITIONAL_JUMP)  ; LAB_004b9b2c
    POP EDI                             ; 004b9b44
        ;   Label: LAB_004b9b44
    MOV EAX,EBX                         ; 004b9b45
    POP EDI                             ; 004b9b47
    POP ESI                             ; 004b9b48
    POP EBX                             ; 004b9b49
    RET                                 ; 004b9b4a


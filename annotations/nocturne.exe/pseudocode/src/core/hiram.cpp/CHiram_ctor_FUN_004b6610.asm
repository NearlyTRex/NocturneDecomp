; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHiram * __cdecl core_hiram_cpp_CHiram_ctor_FUN_004b6610(CHiram *this_ptr)
;
; Parameters:
; CHiram *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_hiram.cpp_factoryFuncHiram_FUN_004b65e0 at 004b65f3
;
; Referenced Globals:
;   TerminatedCString s_hiram_dfm_005859cb
;   TerminatedCString s_killHiram_005859d5
;   undefined4 s_illHiram_005859d5+1
;   undefined4 s_llHiram_005859d5+2
;   undefined4 s_lHiram_005859d5+3
;   CCharacter_full_vtable g_CHiramVTable
;
; Called Functions:
;   core_npc.cpp_CNPC_ctor_FUN_004ee950
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b6610
        ;   Label: core_hiram.cpp_CHiram_ctor_FUN_004b6610
    PUSH ESI                            ; 004b6611
    PUSH EDI                            ; 004b6612
    MOV EDX,dword ptr [ESP + 0x10]      ; 004b6613
    PUSH EDX                            ; 004b6617
    CALL core_npc.cpp_CNPC_ctor_FUN_004ee950 ; 004b6618
        ;   XREF to: 004ee950 (UNCONDITIONAL_CALL)  ; CNPC * core_npc.cpp_CNPC_ctor_FUN_004ee950(CNPC * this_ptr)
    ADD ESP,0x4                         ; 004b661d
    PUSH 0x5859cb                       ; 004b6620 | = "hiram.dfm"
    MOV EBX,EAX                         ; 004b6625
    LEA EDI,[EAX + 0x150]               ; 004b6627
    PUSH EDI                            ; 004b662d
    MOV dword ptr [EAX + 0x14c],0x59eda4 ; 004b662e | g_CHiramVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 004b6638
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 004b663d
    MOV ESI,0x5859d5                    ; 004b6640 | = "killHiram"
    LEA EDI,[EBX + 0x1f570]             ; 004b6645
    PUSH EDI                            ; 004b664b
    MOV AL,byte ptr [ESI]               ; 004b664c | = "killHiram" | s_llHiram_005859d5+2
        ;   Label: LAB_004b664c
    MOV byte ptr [EDI],AL               ; 004b664e
    CMP AL,0x0                          ; 004b6650
    JZ 0x004b6664                       ; 004b6652
        ;   XREF to: 004b6664 (CONDITIONAL_JUMP)  ; LAB_004b6664
    MOV AL,byte ptr [ESI + 0x1]         ; 004b6654 | s_illHiram_005859d5+1 | s_lHiram_005859d5+3
    ADD ESI,0x2                         ; 004b6657
    MOV byte ptr [EDI + 0x1],AL         ; 004b665a
    ADD EDI,0x2                         ; 004b665d
    CMP AL,0x0                          ; 004b6660
    JNZ 0x004b664c                      ; 004b6662
        ;   XREF to: 004b664c (CONDITIONAL_JUMP)  ; LAB_004b664c
    POP EDI                             ; 004b6664
        ;   Label: LAB_004b6664
    MOV EAX,EBX                         ; 004b6665
    POP EDI                             ; 004b6667
    POP ESI                             ; 004b6668
    POP EBX                             ; 004b6669
    RET                                 ; 004b666a


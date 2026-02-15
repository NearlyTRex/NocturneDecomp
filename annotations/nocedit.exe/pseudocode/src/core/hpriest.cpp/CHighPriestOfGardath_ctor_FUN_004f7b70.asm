; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHighPriestOfGardath * __cdecl core_hpriest_cpp_CHighPriestOfGardath_ctor_FUN_004f7b70(CHighPriestOfGardath *this_ptr)
;
; Parameters:
; CHighPriestOfGardath * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_hpriest.cpp_factoryFunc_FUN_004f7b30 at 004f7b4a
;
; Referenced Globals:
;   TerminatedCString s_priest_dfm_0062f55d
;   TerminatedCString s_killPriest_0062f568
;   undefined4 s_illPriest_0062f569
;   undefined4 s_llPriest_0062f56a
;   undefined4 s_lPriest_0062f56b
;   CDemonActor_vtable g_CHighPriestOfGardathVTable
;
; Called Functions:
;   core_npc.cpp_CNPC_ctor_FUN_005447e0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7b70
        ;   Label: core_hpriest.cpp_CHighPriestOfGardath_ctor_FUN_004f7b70
    PUSH ESI                            ; 004f7b71
    PUSH EDI                            ; 004f7b72
    MOV EDX,dword ptr [ESP + 0x10]      ; 004f7b73
    PUSH EDX                            ; 004f7b77
    CALL core_npc.cpp_CNPC_ctor_FUN_005447e0 ; 004f7b78
        ;   XREF to: 005447e0 (UNCONDITIONAL_CALL)  ; CNPC * core_npc.cpp_CNPC_ctor_FUN_005447e0(CNPC * this_ptr)
    ADD ESP,0x4                         ; 004f7b7d
    PUSH 0x62f55d                       ; 004f7b80 | = "priest.dfm"
    MOV EBX,EAX                         ; 004f7b85
    LEA EDI,[EAX + 0x158]               ; 004f7b87
    PUSH EDI                            ; 004f7b8d
    MOV dword ptr [EAX + 0x154],0x65fe94 ; 004f7b8e | g_CHighPriestOfGardathVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 004f7b98
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 004f7b9d
    MOV ESI,0x62f568                    ; 004f7ba0 | = "killPriest"
    LEA EDI,[EBX + 0x1f708]             ; 004f7ba5
    PUSH EDI                            ; 004f7bab
    MOV AL,byte ptr [ESI]               ; 004f7bac | = "killPriest" | s_llPriest_0062f56a
        ;   Label: LAB_004f7bac
    MOV byte ptr [EDI],AL               ; 004f7bae
    CMP AL,0x0                          ; 004f7bb0
    JZ 0x004f7bc4                       ; 004f7bb2
        ;   XREF to: 004f7bc4 (CONDITIONAL_JUMP)  ; LAB_004f7bc4
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7bb4 | s_illPriest_0062f569 | s_lPriest_0062f56b
    ADD ESI,0x2                         ; 004f7bb7
    MOV byte ptr [EDI + 0x1],AL         ; 004f7bba
    ADD EDI,0x2                         ; 004f7bbd
    CMP AL,0x0                          ; 004f7bc0
    JNZ 0x004f7bac                      ; 004f7bc2
        ;   XREF to: 004f7bac (CONDITIONAL_JUMP)  ; LAB_004f7bac
    POP EDI                             ; 004f7bc4
        ;   Label: LAB_004f7bc4
    MOV EAX,EBX                         ; 004f7bc5
    POP EDI                             ; 004f7bc7
    POP ESI                             ; 004f7bc8
    POP EBX                             ; 004f7bc9
    RET                                 ; 004f7bca


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSentinel * __cdecl core_sentinel_cpp_CSentinel_ctor_FUN_0052a720(CSentinel *this_ptr)
;
; Parameters:
; CSentinel *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_sentinel.cpp_factoryFuncSentinel_FUN_0052a6f0 at 0052a703
;
; Referenced Globals:
;   undefined4 DAT_005fb04c
;   undefined4 DAT_005fb050
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00487db0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052a720
        ;   Label: core_sentinel.cpp_CSentinel_ctor_FUN_0052a720
    MOV EDX,dword ptr [ESP + 0x8]       ; 0052a721
    PUSH EDX                            ; 0052a725
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00487db0 ; 0052a726
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00487db0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0052a72b
    PUSH 0x5e529f                       ; 0052a72e
    MOV EBX,EAX                         ; 0052a733
    ADD EAX,0x2b4                       ; 0052a735
    PUSH EAX                            ; 0052a73a
    MOV dword ptr [EAX + -0x4],0x5fb064 ; 0052a73b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 0052a742
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x005fb04c]          ; 0052a747 | DAT_005fb04c
    MOV dword ptr [EBX + 0x3430],0x3f19999a ; 0052a74d
    FLD float ptr [0x005fb050]          ; 0052a757 | DAT_005fb050
    MOV dword ptr [EBX + 0x3434],0x40000000 ; 0052a75d
    ADD ESP,0x8                         ; 0052a767
    MOV dword ptr [EBX + 0x10afc],0x0   ; 0052a76a
    MOV EAX,EBX                         ; 0052a774
    FXCH                                ; 0052a776
    FSTP float ptr [EBX + 0x3438]       ; 0052a778
    FSTP float ptr [EBX + 0x343c]       ; 0052a77e
    POP EBX                             ; 0052a784
    RET                                 ; 0052a785


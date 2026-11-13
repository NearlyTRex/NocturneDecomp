; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_setup_FUN_004d26b0(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_prye.cpp_CPrye_setup_FUN_00518680 at 0051868c
;
; Called Functions:
;   core_charactr.cpp_CCharacter_setup_FUN_0042b0e0
;   core_inv.cpp_setupItems_FUN_004dcad0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d26b0
        ;   Label: core_hero.cpp_CHero_setup_FUN_004d26b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d26b1
    LEA EAX,[EBX + 0x158]               ; 004d26b5
    PUSH EAX                            ; 004d26bb
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0 ; 004d26bc
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d26c1
    PUSH EBX                            ; 004d26c4
    CALL core_charactr.cpp_CCharacter_setup_FUN_0042b0e0 ; 004d26c5
        ;   XREF to: 0042b0e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setup_FUN_0042b0e0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004d26ca
    LEA EAX,[EBX + 0x206e8]             ; 004d26cd
    PUSH EAX                            ; 004d26d3
    MOV dword ptr [EBX + 0xcdcc],0x0    ; 004d26d4
    CALL core_inv.cpp_setupItems_FUN_004dcad0 ; 004d26de
        ;   XREF to: 004dcad0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_setupItems_FUN_004dcad0()
    MOV dword ptr [EBX + 0x20b68],0x0   ; 004d26e3
    MOV dword ptr [EBX + 0x20b6c],0x0   ; 004d26ed
    MOV dword ptr [EBX + 0x20b70],0x0   ; 004d26f7
    MOV dword ptr [EBX + 0x20b7c],0x7149f2ca ; 004d2701
    ADD ESP,0x4                         ; 004d270b
    MOV dword ptr [EBX + 0x20b78],0x0   ; 004d270e
    POP EBX                             ; 004d2718
    RET                                 ; 004d2719


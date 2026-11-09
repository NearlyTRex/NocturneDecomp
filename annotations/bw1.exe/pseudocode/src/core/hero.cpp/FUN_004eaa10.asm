; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_FUN_004eaa10(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[10]:
;   core_baron.cpp_FUN_0040f300 at 0040f307
;   core_colonel.cpp_FUN_004443a0 at 004443a7
;   core_doc.cpp_FUN_00469060 at 0046906c
;   core_gabriela.cpp_FUN_004c6390 at 004c6398
;   core_haystack.cpp_FUN_004e9090 at 004e9097
;   core_icepick.cpp_FUN_004f0c20 at 004f0c27
;   core_moloch.cpp_FUN_00520430 at 005204b9
;   core_scat.cpp_FUN_00540b90 at 00540b97
;   core_stranger.cpp_FUN_00585670 at 0058567c
;   core_svetlana.cpp_FUN_00592e90 at 00592ec1
;
; Called Functions:
;   core_charactr.cpp_FUN_0042c510
;   core_inv.cpp_FUN_004f9b20
;   core_skeleton.cpp_FUN_00569b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eaa10
        ;   Label: core_hero.cpp_FUN_004eaa10
    MOV EBX,dword ptr [ESP + 0x8]       ; 004eaa11
    LEA EAX,[EBX + 0x158]               ; 004eaa15
    PUSH EAX                            ; 004eaa1b
    CALL core_skeleton.cpp_FUN_00569b20 ; 004eaa1c
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00569b20(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004eaa21
    PUSH EBX                            ; 004eaa24
    CALL core_charactr.cpp_FUN_0042c510 ; 004eaa25
        ;   XREF to: 0042c510 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c510(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004eaa2a
    LEA EAX,[EBX + 0x1fae8]             ; 004eaa2d
    PUSH EAX                            ; 004eaa33
    MOV dword ptr [EBX + 0xc1d0],0x0    ; 004eaa34
    CALL core_inv.cpp_FUN_004f9b20      ; 004eaa3e
        ;   XREF to: 004f9b20 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004f9b20()
    MOV dword ptr [EBX + 0x1ff60],0x0   ; 004eaa43
    MOV dword ptr [EBX + 0x1ff64],0x0   ; 004eaa4d
    MOV dword ptr [EBX + 0x1ff68],0x0   ; 004eaa57
    ADD ESP,0x4                         ; 004eaa61
    MOV dword ptr [EBX + 0x1ff70],0x7149f2ca ; 004eaa64
    POP EBX                             ; 004eaa6e
    RET                                 ; 004eaa6f


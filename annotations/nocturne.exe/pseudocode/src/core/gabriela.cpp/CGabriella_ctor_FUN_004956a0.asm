; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGabriella * __cdecl core_gabriela_cpp_CGabriella_ctor_FUN_004956a0(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gabriela.cpp_FUN_00495670 at 00495683
;
; Referenced Globals:
;   TerminatedCString s_gabriela_dfm_00581e4a
;   TerminatedCString s_gabgun_kfm_00581e57
;   float FLOAT_0059dcdc = 10
;   undefined1* PTR_core_gabriela.cpp_CGabriella_setup_FUN_004957c0_0059dcf4 = 004957c0
;
; Called Functions:
;   core_cloth.cpp_CCloth_ctor_FUN_00435100
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   core_hero.cpp_FUN_004b46d0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004956a0
        ;   Label: core_gabriela.cpp_CGabriella_ctor_FUN_004956a0
    PUSH EBP                            ; 004956a1
    MOV EBP,ESP                         ; 004956a2
    MOV EBX,dword ptr [EBP + 0xc]       ; 004956a4
    PUSH EBX                            ; 004956a7
    CALL core_hero.cpp_FUN_004b46d0     ; 004956a8
        ;   XREF to: 004b46d0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004b46d0()
    ADD ESP,0x4                         ; 004956ad
    ADD EAX,0x1fa7c                     ; 004956b0
    PUSH EAX                            ; 004956b5
    CALL core_cloth.cpp_CCloth_ctor_FUN_00435100 ; 004956b6
        ;   XREF to: 00435100 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_ctor_FUN_00435100(CCloth * this_ptr)
    LEA EBX,[EAX + 0xfffe0584]          ; 004956bb
    MOV dword ptr [EBX + 0x14c],0x59dcf4 ; 004956c1 | PTR_core_gabriela.cpp_CGabriella_setup_FUN_004957c0_0059dcf4
    MOV dword ptr [EBX + 0x1fa3c],0x0   ; 004956cb
    MOV dword ptr [EBX + 0x1fa40],0x0   ; 004956d5
    MOV dword ptr [EBX + 0x1fa44],0x0   ; 004956df
    MOV dword ptr [EBX + 0x1fa48],0x0   ; 004956e9
    MOV dword ptr [EBX + 0x1fa60],0x0   ; 004956f3
    MOV dword ptr [EBX + 0x1fa4c],0x0   ; 004956fd
    MOV dword ptr [EBX + 0x1fa50],0xbf060a92 ; 00495707
    MOV dword ptr [EBX + 0x1fa74],0x0   ; 00495711
    MOV dword ptr [EBX + 0x1fa6c],0x0   ; 0049571b
    MOV dword ptr [EBX + 0x1fa64],0x0   ; 00495725
    MOV dword ptr [EBX + 0x1fa78],0x0   ; 0049572f
    FLD float ptr [0x0059dcdc]          ; 00495739 | FLOAT_0059dcdc
    MOV dword ptr [EBX + 0x1fa54],0x0   ; 0049573f
    ADD ESP,0x4                         ; 00495749
    FSTP float ptr [EBX + 0x5a5ac]      ; 0049574c
    MOV dword ptr [EBX + 0x1fa58],0x0   ; 00495752
    PUSH 0x581e4a                       ; 0049575c | = "gabriela.dfm"
    MOV dword ptr [EBX + 0x1fa5c],0x0   ; 00495761
    LEA EAX,[EBX + 0x150]               ; 0049576b
    FLD float ptr [EBX + 0x1fa6c]       ; 00495771
    FLD float ptr [EBX + 0x1fa64]       ; 00495777
    PUSH EAX                            ; 0049577d
    FXCH                                ; 0049577e
    FSTP float ptr [EBX + 0x1fa70]      ; 00495780
    FSTP float ptr [EBX + 0x1fa68]      ; 00495786
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 0049578c
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    LEA EAX,[EBX + 0x1f5a0]             ; 00495791
    ADD ESP,0x8                         ; 00495797
    MOV EAX,dword ptr [EAX + 0x330]     ; 0049579a
    PUSH 0x581e57                       ; 004957a0 | = "gabgun.kfm"
    ADD EAX,0x150                       ; 004957a5
    PUSH EAX                            ; 004957aa
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004957ab
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004957b0
    MOV EAX,EBX                         ; 004957b3
    POP EBP                             ; 004957b5
    POP EBX                             ; 004957b6
    RET                                 ; 004957b7


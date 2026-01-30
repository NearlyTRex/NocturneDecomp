; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CGabriella * __cdecl core_gabriela_cpp_CGabriella_ctor_FUN_004d2b20(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gabriela.cpp_factoryFunc_FUN_004d2ae0 at 004d2afd
;
; Referenced Globals:
;   TerminatedCString s_gabriela_dfm_0062acca
;   TerminatedCString s_gabgun_kfm_0062acd7
;   float FLOAT_0065e7ec = 10
;   CDemonActor_vtable g_CGabriellaVTable
;
; Called Functions:
;   core_cloth.cpp_FUN_00438ba0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_hero.cpp_CHero_ctor_FUN_004f2340
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2b20
        ;   Label: core_gabriela.cpp_CGabriella_ctor_FUN_004d2b20
    PUSH EBP                            ; 004d2b21
    MOV EBP,ESP                         ; 004d2b22
    MOV EBX,dword ptr [EBP + 0xc]       ; 004d2b24
    PUSH EBX                            ; 004d2b27
    CALL core_hero.cpp_CHero_ctor_FUN_004f2340 ; 004d2b28
        ;   XREF to: 004f2340 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_ctor_FUN_004f2340(CHero * this_ptr)
    ADD ESP,0x4                         ; 004d2b2d
    ADD EAX,0x1fc14                     ; 004d2b30
    PUSH EAX                            ; 004d2b35
    CALL core_cloth.cpp_FUN_00438ba0    ; 004d2b36
        ;   XREF to: 00438ba0 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_FUN_00438ba0()
    LEA EBX,[EAX + 0xfffe03ec]          ; 004d2b3b
    MOV dword ptr [EBX + 0x154],0x65e804 ; 004d2b41 | g_CGabriellaVTable
    MOV dword ptr [EBX + 0x1fbd4],0x0   ; 004d2b4b
    MOV dword ptr [EBX + 0x1fbd8],0x0   ; 004d2b55
    MOV dword ptr [EBX + 0x1fbdc],0x0   ; 004d2b5f
    MOV dword ptr [EBX + 0x1fbe0],0x0   ; 004d2b69
    MOV dword ptr [EBX + 0x1fbf8],0x0   ; 004d2b73
    MOV dword ptr [EBX + 0x1fbe4],0x0   ; 004d2b7d
    MOV dword ptr [EBX + 0x1fbe8],0xbf060a92 ; 004d2b87
    MOV dword ptr [EBX + 0x1fc0c],0x0   ; 004d2b91
    MOV dword ptr [EBX + 0x1fc04],0x0   ; 004d2b9b
    MOV dword ptr [EBX + 0x1fbfc],0x0   ; 004d2ba5
    MOV dword ptr [EBX + 0x1fc10],0x0   ; 004d2baf
    FLD float ptr [0x0065e7ec]          ; 004d2bb9 | FLOAT_0065e7ec
    MOV dword ptr [EBX + 0x1fbec],0x0   ; 004d2bbf
    ADD ESP,0x4                         ; 004d2bc9
    FSTP float ptr [EBX + 0x5fa84]      ; 004d2bcc
    MOV dword ptr [EBX + 0x1fbf0],0x0   ; 004d2bd2
    PUSH 0x62acca                       ; 004d2bdc | = "gabriela.dfm"
    MOV dword ptr [EBX + 0x1fbf4],0x0   ; 004d2be1
    LEA EAX,[EBX + 0x158]               ; 004d2beb
    FLD float ptr [EBX + 0x1fc04]       ; 004d2bf1
    FLD float ptr [EBX + 0x1fbfc]       ; 004d2bf7
    PUSH EAX                            ; 004d2bfd
    FXCH                                ; 004d2bfe
    FSTP float ptr [EBX + 0x1fc08]      ; 004d2c00
    FSTP float ptr [EBX + 0x1fc00]      ; 004d2c06
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 004d2c0c
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    LEA EAX,[EBX + 0x1f738]             ; 004d2c11
    ADD ESP,0x8                         ; 004d2c17
    MOV EAX,dword ptr [EAX + 0x330]     ; 004d2c1a
    PUSH 0x62acd7                       ; 004d2c20 | = "gabgun.kfm"
    ADD EAX,0x158                       ; 004d2c25
    PUSH EAX                            ; 004d2c2a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004d2c2b
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004d2c30
    MOV EAX,EBX                         ; 004d2c33
    POP EBP                             ; 004d2c35
    POP EBX                             ; 004d2c36
    RET                                 ; 004d2c37


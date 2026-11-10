; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGargoyle * __cdecl core_gargoyle_cpp_CGargoyle_ctor_FUN_004dc270(CGargoyle *this_ptr)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gargoyle.cpp_factoryFuncGargoyle_FUN_004dc240 at 004dc253
;
; Referenced Globals:
;   undefined4 DAT_00601000
;   undefined4 DAT_00601004
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a0410
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dc270
        ;   Label: core_gargoyle.cpp_CGargoyle_ctor_FUN_004dc270
    MOV EDX,dword ptr [ESP + 0x8]       ; 004dc271
    PUSH EDX                            ; 004dc275
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a0410 ; 004dc276
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a0410(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004dc27b
    PUSH 0x5e37c6                       ; 004dc27e
    MOV EBX,EAX                         ; 004dc283
    ADD EAX,0x158                       ; 004dc285
    PUSH EAX                            ; 004dc28a
    MOV dword ptr [EAX + -0x4],0x601014 ; 004dc28b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 004dc292
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2fec],0x3f19999a ; 004dc297
    MOV dword ptr [EBX + 0x2ff0],0x3f19999a ; 004dc2a1
    MOV dword ptr [EBX + 0x27a0],0x2    ; 004dc2ab
    MOV dword ptr [EBX + 0x2538],0x41f00000 ; 004dc2b5
    MOV dword ptr [EBX + 0x108],0xffff  ; 004dc2bf
    MOV dword ptr [EBX + 0x10c],0xffff  ; 004dc2c9
    MOV dword ptr [EBX + 0x110],0xffff  ; 004dc2d3
    MOV dword ptr [EBX + 0xc2b0],0xffff ; 004dc2dd
    MOV dword ptr [EBX + 0xc2b4],0xffff ; 004dc2e7
    MOV dword ptr [EBX + 0xc2b8],0xffff ; 004dc2f1
    MOV dword ptr [EBX + 0xc298],0x80   ; 004dc2fb
    MOV dword ptr [EBX + 0xc29c],0x80   ; 004dc305
    MOV dword ptr [EBX + 0xc2a0],0x80   ; 004dc30f
    MOV dword ptr [EBX + 0xc2a4],0x0    ; 004dc319
    FLD float ptr [0x00601000]          ; 004dc323 | DAT_00601000
    MOV dword ptr [EBX + 0xc2bc],0x0    ; 004dc329
    FLD float ptr [0x00601004]          ; 004dc333 | DAT_00601004
    MOV dword ptr [EBX + 0xc2c0],0x0    ; 004dc339
    ADD ESP,0x8                         ; 004dc343
    MOV dword ptr [EBX + 0x27c0],0x0    ; 004dc346
    MOV EAX,EBX                         ; 004dc350
    FXCH                                ; 004dc352
    FSTP float ptr [EBX + 0x2ff4]       ; 004dc354
    FSTP float ptr [EBX + 0x2ff8]       ; 004dc35a
    POP EBX                             ; 004dc360
    RET                                 ; 004dc361


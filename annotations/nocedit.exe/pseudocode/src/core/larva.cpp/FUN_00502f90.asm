; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CLarva * core_larva.cpp_FUN_00502f90(CLarva * this_ptr)
;
; Parameters:
; CLarva *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_larva.cpp_FUN_00502f50 at 00502f6a
;
; Referenced Globals:
;   TerminatedCString s_worm_dfm_00630edc
;   undefined4 DAT_00660720
;   undefined4 DAT_00660724
;   CDemonActor_vtable PTR_core_larva.cpp_FUN_00660734
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502f90
        ;   Label: core_larva.cpp_FUN_00502f90
    MOV EDX,dword ptr [ESP + 0x8]       ; 00502f91
    PUSH EDX                            ; 00502f95
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 00502f96 | CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00502f9b
    PUSH 0x630edc                       ; 00502f9e | = "worm.dfm" | s_worm_dfm_00630edc = worm.dfm
    MOV EBX,EAX                         ; 00502fa3
    ADD EAX,0x158                       ; 00502fa5
    PUSH EAX                            ; 00502faa
    MOV dword ptr [EAX + -0x4],0x660734 ; 00502fab | CDemonActor_vtable PTR_core_larva.cpp_FUN_00660734
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 00502fb2 | void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBX + 0x2ddc],0x3e800000 ; 00502fb7
    MOV dword ptr [EBX + 0x2de0],0x3f000000 ; 00502fc1
    MOV dword ptr [EBX + 0x2610],0x1    ; 00502fcb
    FLD float ptr [0x00660720]          ; 00502fd5 | DAT_00660720
    MOV dword ptr [EBX + 0x243c],0x41700000 ; 00502fdb
    FLD float ptr [0x00660724]          ; 00502fe5 | DAT_00660724
    MOV dword ptr [EBX + 0xbec0],0x0    ; 00502feb
    ADD ESP,0x8                         ; 00502ff5
    MOV dword ptr [EBX + 0xbec4],0x0    ; 00502ff8
    MOV EAX,EBX                         ; 00503002
    FXCH                                ; 00503004
    FSTP float ptr [EBX + 0x2de4]       ; 00503006
    FSTP float ptr [EBX + 0x2de8]       ; 0050300c
    POP EBX                             ; 00503012
    RET                                 ; 00503013


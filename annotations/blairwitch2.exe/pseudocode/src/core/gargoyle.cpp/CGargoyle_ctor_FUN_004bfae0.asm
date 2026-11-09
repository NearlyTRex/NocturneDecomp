; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGargoyle * __cdecl core_gargoyle_cpp_CGargoyle_ctor_FUN_004bfae0(CGargoyle *this_ptr)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gargoyle.cpp_factoryFuncGargoyle_FUN_004bfab0 at 004bfac3
;
; Referenced Globals:
;   undefined4 DAT_005f75e0
;   undefined4 DAT_005f75e4
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00487db0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bfae0
        ;   Label: core_gargoyle.cpp_CGargoyle_ctor_FUN_004bfae0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004bfae1
    PUSH EDX                            ; 004bfae5
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00487db0 ; 004bfae6
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00487db0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004bfaeb
    PUSH 0x5d8c0c                       ; 004bfaee
    MOV EBX,EAX                         ; 004bfaf3
    ADD EAX,0x2b4                       ; 004bfaf5
    PUSH EAX                            ; 004bfafa
    MOV dword ptr [EAX + -0x4],0x5f75f4 ; 004bfafb
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 004bfb02
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x3430],0x3f19999a ; 004bfb07
    MOV dword ptr [EBX + 0x3434],0x3f19999a ; 004bfb11
    MOV dword ptr [EBX + 0x280c],0x2    ; 004bfb1b
    MOV dword ptr [EBX + 0x25a8],0x41f00000 ; 004bfb25
    MOV dword ptr [EBX + 0x108],0xffff  ; 004bfb2f
    MOV dword ptr [EBX + 0x10c],0xffff  ; 004bfb39
    MOV dword ptr [EBX + 0x110],0xffff  ; 004bfb43
    MOV dword ptr [EBX + 0x10b40],0xffff ; 004bfb4d
    MOV dword ptr [EBX + 0x10b44],0xffff ; 004bfb57
    MOV dword ptr [EBX + 0x10b48],0xffff ; 004bfb61
    MOV dword ptr [EBX + 0x10b28],0x80  ; 004bfb6b
    MOV dword ptr [EBX + 0x10b2c],0x80  ; 004bfb75
    MOV dword ptr [EBX + 0x10b30],0x80  ; 004bfb7f
    MOV dword ptr [EBX + 0x10b34],0x0   ; 004bfb89
    FLD float ptr [0x005f75e0]          ; 004bfb93 | DAT_005f75e0
    MOV dword ptr [EBX + 0x10b4c],0x0   ; 004bfb99
    FLD float ptr [0x005f75e4]          ; 004bfba3 | DAT_005f75e4
    MOV dword ptr [EBX + 0x10b50],0x0   ; 004bfba9
    ADD ESP,0x8                         ; 004bfbb3
    MOV dword ptr [EBX + 0x282c],0x0    ; 004bfbb6
    MOV EAX,EBX                         ; 004bfbc0
    FXCH                                ; 004bfbc2
    FSTP float ptr [EBX + 0x3438]       ; 004bfbc4
    FSTP float ptr [EBX + 0x343c]       ; 004bfbca
    POP EBX                             ; 004bfbd0
    RET                                 ; 004bfbd1


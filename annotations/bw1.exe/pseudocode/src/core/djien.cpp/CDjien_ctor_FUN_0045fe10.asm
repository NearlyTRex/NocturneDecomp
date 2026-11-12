; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDjien * core_djien_cpp_CDjien_ctor_FUN_0045fe10(CDjien *this_ptr)
;
; Parameters:
; CDjien *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_djien.cpp_factoryFuncDjien_FUN_0045fde0 at 0045fdf3
;
; Referenced Globals:
;   undefined4 DAT_005fea20
;   undefined4 DAT_005fea24
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a0410
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045fe10
        ;   Label: core_djien.cpp_CDjien_ctor_FUN_0045fe10
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045fe11
    PUSH EBX                            ; 0045fe15
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a0410 ; 0045fe16
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a0410(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0045fe1b
    PUSH 0x5feb90                       ; 0045fe1e
    PUSH 0x18                           ; 0045fe23
    ADD EAX,0xc2fc                      ; 0045fe25
    PUSH EAX                            ; 0045fe2a
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0045fe2b
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0045fe30
    LEA EBX,[EAX + 0xffff3d04]          ; 0045fe33
    PUSH 0x5d8ac7                       ; 0045fe39
    LEA EAX,[EBX + 0x158]               ; 0045fe3e
    PUSH EAX                            ; 0045fe44
    MOV dword ptr [EBX + 0x154],0x5fea34 ; 0045fe45
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 0045fe4f
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2fec],0x40800000 ; 0045fe54
    MOV dword ptr [EBX + 0x2ff0],0x41000000 ; 0045fe5e
    MOV dword ptr [EBX + 0xc2c8],0x0    ; 0045fe68
    MOV dword ptr [EBX + 0xc9bc],0x0    ; 0045fe72
    MOV dword ptr [EBX + 0xc9c4],0x0    ; 0045fe7c
    MOV dword ptr [EBX + 0xc9c8],0x0    ; 0045fe86
    MOV dword ptr [EBX + 0xc9c0],0x1    ; 0045fe90
    MOV dword ptr [EBX + 0xc2f0],0x0    ; 0045fe9a
    FLD float ptr [0x005fea20]          ; 0045fea4 | DAT_005fea20
    MOV dword ptr [EBX + 0xc2f4],0x0    ; 0045feaa
    FLD float ptr [0x005fea24]          ; 0045feb4 | DAT_005fea24
    MOV dword ptr [EBX + 0xc2d0],0x0    ; 0045feba
    ADD ESP,0x8                         ; 0045fec4
    MOV dword ptr [EBX + 0xc2d4],0x6    ; 0045fec7
    MOV EAX,EBX                         ; 0045fed1
    FXCH                                ; 0045fed3
    FSTP float ptr [EBX + 0x2ff4]       ; 0045fed5
    FSTP float ptr [EBX + 0x2ff8]       ; 0045fedb
    LEA EDX,[EBX + 0x18]                ; 0045fee1
    ADD EAX,0x4                         ; 0045fee4
        ;   Label: LAB_0045fee4
    MOV dword ptr [EAX + 0xc2d4],0x0    ; 0045fee7
    CMP EAX,EDX                         ; 0045fef1
    JNZ 0x0045fee4                      ; 0045fef3
        ;   XREF to: 0045fee4 (CONDITIONAL_JUMP)  ; LAB_0045fee4
    MOV EAX,EBX                         ; 0045fef5
    POP EBX                             ; 0045fef7
    RET                                 ; 0045fef8


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShadow * core_shadow_cpp_CShadow_ctor_FUN_0053c200(CShadow *this_ptr)
;
; Parameters:
; CShadow *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_shadow.cpp_factoryFuncShadow_FUN_0053c1d0 at 0053c1e3
;
; Referenced Globals:
;   undefined4 DAT_005fb400
;   undefined4 DAT_005fb404
;   undefined4 DAT_005fb408
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00487db0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053c200
        ;   Label: core_shadow.cpp_CShadow_ctor_FUN_0053c200
    MOV EDX,dword ptr [ESP + 0x8]       ; 0053c201
    PUSH EDX                            ; 0053c205
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00487db0 ; 0053c206
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00487db0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0053c20b
    PUSH 0x5e6505                       ; 0053c20e
    MOV EBX,EAX                         ; 0053c213
    ADD EAX,0x2b4                       ; 0053c215
    PUSH EAX                            ; 0053c21a
    MOV dword ptr [EAX + -0x4],0x5fb424 ; 0053c21b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 0053c222
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x3430],0x3f800000 ; 0053c227
    MOV dword ptr [EBX + 0x3434],0x40000000 ; 0053c231
    MOV dword ptr [EBX + 0x10af8],0x0   ; 0053c23b
    MOV dword ptr [EBX + 0x10b18],0x1   ; 0053c245
    MOV dword ptr [EBX + 0x10b2c],0x0   ; 0053c24f
    MOV dword ptr [EBX + 0x10b30],0x40a00000 ; 0053c259
    MOV dword ptr [EBX + 0x10b34],0x0   ; 0053c263
    MOV dword ptr [EBX + 0x10b38],0x0   ; 0053c26d
    MOV dword ptr [EBX + 0x10b40],0x0   ; 0053c277
    MOV dword ptr [EBX + 0x10b74],0x3f800000 ; 0053c281
    MOV dword ptr [EBX + 0x10b3c],0x0   ; 0053c28b
    MOV dword ptr [EBX + 0x10b64],0x0   ; 0053c295
    MOV dword ptr [EBX + 0x10b5c],0x0   ; 0053c29f
    MOV dword ptr [EBX + 0x10b60],0x0   ; 0053c2a9
    FLD float ptr [0x005fb400]          ; 0053c2b3 | DAT_005fb400
    MOV dword ptr [EBX + 0x10b6c],0x0   ; 0053c2b9
    FLD float ptr [0x005fb404]          ; 0053c2c3 | DAT_005fb404
    MOV dword ptr [EBX + 0x10b68],0x41200000 ; 0053c2c9
    FLD float ptr [0x005fb408]          ; 0053c2d3 | DAT_005fb408
    MOV dword ptr [EBX + 0x10b78],0x0   ; 0053c2d9
    ADD ESP,0x8                         ; 0053c2e3
    MOV dword ptr [EBX + 0x10b7c],0x0   ; 0053c2e6
    MOV EAX,EBX                         ; 0053c2f0
    FXCH ST2                            ; 0053c2f2
    FSTP float ptr [EBX + 0x3438]       ; 0053c2f4
    FSTP float ptr [EBX + 0x343c]       ; 0053c2fa
    FSTP float ptr [EBX + 0x10b44]      ; 0053c300
    POP EBX                             ; 0053c306
    RET                                 ; 0053c307


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKedward * core_kedward_cpp_CKedward_ctor_FUN_0058fd70(CKedward *this_ptr)
;
; Parameters:
; CKedward *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_kedward.cpp_factoryFuncKedward_FUN_0058fd40 at 0058fd53
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00488fd0
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0058fd70
        ;   Label: core_kedward.cpp_CKedward_ctor_FUN_0058fd70
    PUSH ECX                            ; 0058fd74
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00488fd0 ; 0058fd75
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00488fd0(CEnemy * this_ptr)
    MOV dword ptr [EAX + 0x154],0x5e7204 ; 0058fd7a
    MOV dword ptr [EAX + 0x326c],0x3f000000 ; 0058fd84
    MOV dword ptr [EAX + 0x3270],0x3f800000 ; 0058fd8e
    MOV dword ptr [EAX + 0xd054],0x0    ; 0058fd98
    MOV dword ptr [EAX + 0xd050],0x0    ; 0058fda2
    MOV dword ptr [EAX + 0x252c],0x3fc90fdb ; 0058fdac
    MOV dword ptr [EAX + 0xfc],0x1      ; 0058fdb6
    MOV dword ptr [EAX + 0xf8],0x0      ; 0058fdc0
    MOV dword ptr [EAX + 0xd068],0x1    ; 0058fdca
    MOV EDX,EAX                         ; 0058fdd4
    MOV dword ptr [EAX + 0xd06c],0x40000000 ; 0058fdd6
    FLD float ptr [EDX + 0xd06c]        ; 0058fde0
    MOV dword ptr [EAX + 0xd070],0x4b   ; 0058fde6
    MOV dword ptr [EAX + 0xd08c],0x1    ; 0058fdf0
    MOV dword ptr [EAX + 0xd078],0x0    ; 0058fdfa
    MOV dword ptr [EAX + 0xd07c],0x0    ; 0058fe04
    MOV dword ptr [EAX + 0xd084],0x0    ; 0058fe0e
    MOV dword ptr [EAX + 0xd088],0x0    ; 0058fe18
    MOV dword ptr [EAX + 0xd090],0x0    ; 0058fe22
    ADD ESP,0x4                         ; 0058fe2c
    MOV dword ptr [EAX + 0xd080],0x0    ; 0058fe2f
    MOV ECX,EAX                         ; 0058fe39
    FSTP float ptr [EAX + 0xd064]       ; 0058fe3b
    MOV dword ptr [EAX + 0xd060],0x10000 ; 0058fe41
    LEA EDX,[EAX + 0x34]                ; 0058fe4b
    MOV dword ptr [EAX + 0xd094],0x0    ; 0058fe4e
    ADD EAX,0x4                         ; 0058fe58
        ;   Label: LAB_0058fe58
    MOV dword ptr [EAX + 0xd0a0],0x0    ; 0058fe5b
    CMP EAX,EDX                         ; 0058fe65
    JNZ 0x0058fe58                      ; 0058fe67
        ;   XREF to: 0058fe58 (CONDITIONAL_JUMP)  ; LAB_0058fe58
    MOV EAX,ECX                         ; 0058fe69
    RET                                 ; 0058fe6b


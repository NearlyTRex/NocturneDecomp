; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_00497eb0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005c0518
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_01c5fad0
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.field788_0x314
;
; Called Functions:
;   core_game.cpp_CGame_slamDT_FUN_004bf3a0
;   core_particle.cpp_FUN_00509f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00497eb0
        ;   Label: core_fire.cpp_FUN_00497eb0
    PUSH EDI                            ; 00497eb1
    PUSH EBP                            ; 00497eb2
    SUB ESP,0x8                         ; 00497eb3
    MOV EBX,dword ptr [ESP + 0x18]      ; 00497eb6
    CMP dword ptr [EBX + 0x48],0x0      ; 00497eba
    JNZ 0x00497f29                      ; 00497ebe
        ;   XREF to: 00497f29 (CONDITIONAL_JUMP)  ; LAB_00497f29
    MOV dword ptr [EBX + 0x48],0x1      ; 00497ec0
    MOV EAX,[0x005fe9dc]                ; 00497ec7 | g_CGamePtr
        ;   Label: LAB_00497ec7
    MOV EAX,dword ptr [EAX + 0x314]     ; 00497ecc | g_CGameInstance.field788_0x314
    MOV EDX,dword ptr [0x01c5fad0]      ; 00497ed2 | DAT_01c5fad0
    MOV dword ptr [ESP],EAX             ; 00497ed8
    MOV EAX,dword ptr [EBX + 0x50]      ; 00497edb
    IMUL EDX                            ; 00497ede
    SHRD EAX,EDX,0x10                   ; 00497ee0
    MOV dword ptr [ESP + 0x4],EAX       ; 00497ee4
    FILD dword ptr [ESP + 0x4]          ; 00497ee8
    FMUL double ptr [0x005c0518]        ; 00497eec | DAT_005c0518
    SUB ESP,0x4                         ; 00497ef2
    MOV EDI,dword ptr [0x005fe9dc]      ; 00497ef5 | g_CGamePtr
    FSTP float ptr [ESP]                ; 00497efb
    PUSH EDI                            ; 00497efe | g_CGameInstance
    CALL core_game.cpp_CGame_slamDT_FUN_004bf3a0 ; 00497eff
        ;   XREF to: 004bf3a0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_slamDT_FUN_004bf3a0(CGame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00497f04
    PUSH EBX                            ; 00497f07
    CALL core_particle.cpp_FUN_00509f30 ; 00497f08
        ;   XREF to: 00509f30 (UNCONDITIONAL_CALL)  ; undefined core_particle.cpp_FUN_00509f30()
    ADD ESP,0x4                         ; 00497f0d
    MOV EBP,dword ptr [0x005fe9dc]      ; 00497f10 | g_CGamePtr
    PUSH dword ptr [ESP]                ; 00497f16
    PUSH EBP                            ; 00497f19 | g_CGameInstance
    CALL core_game.cpp_CGame_slamDT_FUN_004bf3a0 ; 00497f1a
        ;   XREF to: 004bf3a0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_slamDT_FUN_004bf3a0(CGame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00497f1f
    ADD ESP,0x8                         ; 00497f22
    POP EBP                             ; 00497f25
    POP EDI                             ; 00497f26
    POP EBX                             ; 00497f27
    RET                                 ; 00497f28
    MOV EAX,[0x01c5fad0]                ; 00497f29 | DAT_01c5fad0
        ;   Label: LAB_00497f29
    MOV EDX,dword ptr [EBX + 0x50]      ; 00497f2e
    MOV ECX,dword ptr [EBX + 0x44]      ; 00497f31
    IMUL EDX                            ; 00497f34
    SHRD EAX,EDX,0x10                   ; 00497f36
    MOV EDX,EAX                         ; 00497f3a
    MOV EAX,ECX                         ; 00497f3c
    IMUL EDX                            ; 00497f3e
    SHRD EAX,EDX,0x10                   ; 00497f40
    MOV ECX,dword ptr [EBX + 0x40]      ; 00497f44
    SUB ECX,EAX                         ; 00497f47
    MOV dword ptr [EBX + 0x40],ECX      ; 00497f49
    TEST ECX,ECX                        ; 00497f4c
    JGE 0x00497ec7                      ; 00497f4e
        ;   XREF to: 00497ec7 (CONDITIONAL_JUMP)  ; LAB_00497ec7
    MOV dword ptr [EBX + 0x24],0x0      ; 00497f54
    MOV dword ptr [EBX + 0x40],0x0      ; 00497f5b
    JMP 0x00497ec7                      ; 00497f62
        ;   XREF to: 00497ec7 (UNCONDITIONAL_JUMP)  ; LAB_00497ec7


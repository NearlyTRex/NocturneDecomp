; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombie * core_zombie_cpp_CZombie_ctor_FUN_00595a90(CZombie *this_ptr)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_zombie.cpp_factoryFuncZombie_FUN_00595a60 at 00595a73
;
; Referenced Globals:
;   undefined4 DAT_005fe31c
;   undefined4 DAT_005fe320
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;
; Called Functions:
;   core_actor.cpp_FUN_0040cf60
;   core_actor.cpp_FUN_0040cfc0
;   core_enemy.cpp_CEnemy_ctor_FUN_00487db0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00595a90
        ;   Label: core_zombie.cpp_CZombie_ctor_FUN_00595a90
    PUSH ESI                            ; 00595a91
    PUSH EDI                            ; 00595a92
    PUSH EBP                            ; 00595a93
    SUB ESP,0x4                         ; 00595a94
    MOV EBP,dword ptr [ESP + 0x18]      ; 00595a97
    PUSH EBP                            ; 00595a9b
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00487db0 ; 00595a9c
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00487db0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00595aa1
    PUSH 0x5eee42                       ; 00595aa4
    MOV EBX,EAX                         ; 00595aa9
    ADD EAX,0x2b4                       ; 00595aab
    PUSH EAX                            ; 00595ab0
    MOV ESI,0x5eee4e                    ; 00595ab1
    MOV dword ptr [EAX + -0x4],0x5fe334 ; 00595ab6
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 00595abd
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x3430],0x3f000000 ; 00595ac2
    LEA EDI,[EBX + 0x10b18]             ; 00595acc
    MOV dword ptr [EBX + 0x3434],0x3f800000 ; 00595ad2
    FLD float ptr [0x005fe31c]          ; 00595adc | DAT_005fe31c
    MOV dword ptr [EBX + 0x10b08],0x0   ; 00595ae2
    FLD float ptr [0x005fe320]          ; 00595aec | DAT_005fe320
    MOV dword ptr [EBX + 0x10b04],0x0   ; 00595af2
    ADD ESP,0x8                         ; 00595afc
    FXCH                                ; 00595aff
    FSTP float ptr [EBX + 0x3438]       ; 00595b01
    FSTP float ptr [EBX + 0x343c]       ; 00595b07
    PUSH EDI                            ; 00595b0d
    MOV AL,byte ptr [ESI]               ; 00595b0e
        ;   Label: LAB_00595b0e
    MOV byte ptr [EDI],AL               ; 00595b10
    CMP AL,0x0                          ; 00595b12
    JZ 0x00595b26                       ; 00595b14
        ;   XREF to: 00595b26 (CONDITIONAL_JUMP)  ; LAB_00595b26
    MOV AL,byte ptr [ESI + 0x1]         ; 00595b16
    ADD ESI,0x2                         ; 00595b19
    MOV byte ptr [EDI + 0x1],AL         ; 00595b1c
    ADD EDI,0x2                         ; 00595b1f
    CMP AL,0x0                          ; 00595b22
    JNZ 0x00595b0e                      ; 00595b24
        ;   XREF to: 00595b0e (CONDITIONAL_JUMP)  ; LAB_00595b0e
    POP EDI                             ; 00595b26
        ;   Label: LAB_00595b26
    PUSH 0x3f800000                     ; 00595b27
    PUSH 0x3e99999a                     ; 00595b2c
    CALL core_actor.cpp_FUN_0040cf60    ; 00595b31
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x8],EAX       ; 00595b36
    FLD float ptr [ESP + 0x8]           ; 00595b3a
    ADD ESP,0x8                         ; 00595b3e
    PUSH 0xff                           ; 00595b41
    MOV dword ptr [EBX + 0x10b10],0x0   ; 00595b46
    PUSH 0x0                            ; 00595b50
    FSTP float ptr [EBX + 0x10af8]      ; 00595b52
    CALL core_actor.cpp_FUN_0040cfc0    ; 00595b58
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cfc0(int min_value, int max_value)
    MOV dword ptr [EBX + 0x10b00],0x0   ; 00595b5d
    MOV dword ptr [EBX + 0x10b14],0x0   ; 00595b67
    ADD ESP,0x8                         ; 00595b71
    MOV dword ptr [EBX + 0x10afc],EAX   ; 00595b74
    MOV EAX,[0x0061b5a8]                ; 00595b7a | g_CDemonSetPtr
    PUSH 0x5eee53                       ; 00595b7f
    ADD EAX,0x14d0f0                    ; 00595b84
    MOV dword ptr [EBX + 0x10b7c],0x0   ; 00595b89
    PUSH EAX                            ; 00595b93
    MOV dword ptr [EBX + 0x10bd0],0x0   ; 00595b94
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00595b9e
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00595ba3
    TEST EAX,EAX                        ; 00595ba6
    SETZ AL                             ; 00595ba8
    MOV dword ptr [EBX + 0x10b80],0x0   ; 00595bab
    MOV dword ptr [EBX + 0x10be0],0x0   ; 00595bb5
    MOV dword ptr [EBX + 0x10be4],0x0   ; 00595bbf
    MOV dword ptr [EBX + 0x10af4],0x0   ; 00595bc9
    AND EAX,0xff                        ; 00595bd3
    MOV dword ptr [EBX + 0x259c],0x3fc90fdb ; 00595bd8
    MOV dword ptr [EBX + 0x10b7c],EAX   ; 00595be2
    MOV EAX,EBX                         ; 00595be8
    ADD ESP,0x4                         ; 00595bea
    POP EBP                             ; 00595bed
    POP EDI                             ; 00595bee
    POP ESI                             ; 00595bef
    POP EBX                             ; 00595bf0
    RET                                 ; 00595bf1


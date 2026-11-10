; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombiePriest * core_zombiepriest_cpp_CZombiePriest_ctor_FUN_0058d4e0(CZombiePriest *this_ptr)
;
; Parameters:
; CZombiePriest *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_zombiepriest.cpp_factoryFuncZombiePriest_FUN_0058d4b0 at 0058d4c3
;
; Referenced Globals:
;   undefined4 DAT_005e7050
;   undefined4 DAT_005e7054
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_enemy.cpp_CEnemy_ctor_FUN_00488fd0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058d4e0
        ;   Label: core_zombiepriest.cpp_CZombiePriest_ctor_FUN_0058d4e0
    PUSH ESI                            ; 0058d4e1
    PUSH EDI                            ; 0058d4e2
    MOV EDX,dword ptr [ESP + 0x10]      ; 0058d4e3
    PUSH EDX                            ; 0058d4e7
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00488fd0 ; 0058d4e8
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00488fd0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0058d4ed
    PUSH 0x5d8a08                       ; 0058d4f0
    MOV EBX,EAX                         ; 0058d4f5
    ADD EAX,0x158                       ; 0058d4f7
    PUSH EAX                            ; 0058d4fc
    MOV dword ptr [EAX + -0x4],0x5e7064 ; 0058d4fd
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 0058d504
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x005e7050]          ; 0058d509 | DAT_005e7050
    ADD ESP,0x8                         ; 0058d50f
    MOV dword ptr [EBX + 0x326c],0x3f19999a ; 0058d512
    FLD float ptr [0x005e7054]          ; 0058d51c | DAT_005e7054
    MOV dword ptr [EBX + 0x3270],0x3f666666 ; 0058d522
    PUSH 0xff                           ; 0058d52c
    FXCH                                ; 0058d531
    FSTP float ptr [EBX + 0x3274]       ; 0058d533
    PUSH 0x0                            ; 0058d539
    FSTP float ptr [EBX + 0x3278]       ; 0058d53b
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 0058d541
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    MOV dword ptr [EBX + 0xd058],0x0    ; 0058d546
    MOV dword ptr [EBX + 0xd05c],0x0    ; 0058d550
    MOV dword ptr [EBX + 0xd060],0x0    ; 0058d55a
    MOV dword ptr [EBX + 0xd10c],0x0    ; 0058d564
    MOV dword ptr [EBX + 0xd110],0x0    ; 0058d56e
    MOV dword ptr [EBX + 0xce58],0x42200000 ; 0058d578
    MOV dword ptr [EBX + 0xd064],0x0    ; 0058d582
    MOV ESI,0x5d8a1c                    ; 0058d58c
    MOV dword ptr [EBX + 0xd068],0x0    ; 0058d591
    ADD ESP,0x8                         ; 0058d59b
    MOV dword ptr [EBX + 0xd06c],0x0    ; 0058d59e
    LEA EDI,[EBX + 0xd070]              ; 0058d5a8
    MOV dword ptr [EBX + 0xd054],EAX    ; 0058d5ae
    PUSH EDI                            ; 0058d5b4
    MOV AL,byte ptr [ESI]               ; 0058d5b5
        ;   Label: LAB_0058d5b5
    MOV byte ptr [EDI],AL               ; 0058d5b7
    CMP AL,0x0                          ; 0058d5b9
    JZ 0x0058d5cd                       ; 0058d5bb
        ;   XREF to: 0058d5cd (CONDITIONAL_JUMP)  ; LAB_0058d5cd
    MOV AL,byte ptr [ESI + 0x1]         ; 0058d5bd
    ADD ESI,0x2                         ; 0058d5c0
    MOV byte ptr [EDI + 0x1],AL         ; 0058d5c3
    ADD EDI,0x2                         ; 0058d5c6
    CMP AL,0x0                          ; 0058d5c9
    JNZ 0x0058d5b5                      ; 0058d5cb
        ;   XREF to: 0058d5b5 (CONDITIONAL_JUMP)  ; LAB_0058d5b5
    POP EDI                             ; 0058d5cd
        ;   Label: LAB_0058d5cd
    MOV EAX,EBX                         ; 0058d5ce
    MOV dword ptr [EBX + 0xd050],0x0    ; 0058d5d0
    POP EDI                             ; 0058d5da
    POP ESI                             ; 0058d5db
    POP EBX                             ; 0058d5dc
    RET                                 ; 0058d5dd


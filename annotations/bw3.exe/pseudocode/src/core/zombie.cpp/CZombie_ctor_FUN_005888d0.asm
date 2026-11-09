; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombie * __cdecl core_zombie_cpp_CZombie_ctor_FUN_005888d0(CZombie *this_ptr)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_zombie.cpp_CZombieCemetery_ctor_FUN_0058ccc0 at 0058ccc6
;   core_zombie.cpp_CZombieDemon_ctor_FUN_0058cf00 at 0058cf06
;   core_zombie.cpp_CZombieForest_ctor_FUN_0058cd50 at 0058cd56
;   core_zombie.cpp_CZombieIndian_ctor_FUN_0058ce70 at 0058ce76
;   core_zombie.cpp_CZombieSpirit_ctor_FUN_0058cde0 at 0058cde6
;   core_zombie.cpp_factoryFuncZombie_FUN_005888a0 at 005888b3
;
; Referenced Globals:
;   undefined4 DAT_005e677c
;   undefined4 DAT_005e6780
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;
; Called Functions:
;   core_actor.cpp_FUN_0040ce40
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_enemy.cpp_CEnemy_ctor_FUN_00488fd0
;   core_skeleton.cpp_FUN_0054eae0
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005888d0
        ;   Label: core_zombie.cpp_CZombie_ctor_FUN_005888d0
    PUSH ESI                            ; 005888d1
    PUSH EDI                            ; 005888d2
    PUSH EBP                            ; 005888d3
    SUB ESP,0x4                         ; 005888d4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005888d7
    PUSH EBP                            ; 005888db
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00488fd0 ; 005888dc
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00488fd0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005888e1
    MOV EBX,EAX                         ; 005888e4
    PUSH 0x5d83d7                       ; 005888e6
    MOV EBP,EAX                         ; 005888eb
    ADD EAX,0x158                       ; 005888ed
    PUSH EAX                            ; 005888f2
    MOV ESI,0x5d83e4                    ; 005888f3
    MOV dword ptr [EAX + -0x4],0x5e6794 ; 005888f8
    CALL core_skeleton.cpp_FUN_0054eae0 ; 005888ff
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054eae0()
    MOV dword ptr [EBX + 0x326c],0x3f000000 ; 00588904
    LEA EDI,[EBX + 0xd074]              ; 0058890e
    MOV dword ptr [EBX + 0x3270],0x3f800000 ; 00588914
    FLD float ptr [0x005e677c]          ; 0058891e | DAT_005e677c
    MOV dword ptr [EBX + 0xd064],0x0    ; 00588924
    FLD float ptr [0x005e6780]          ; 0058892e | DAT_005e6780
    MOV dword ptr [EBX + 0xd060],0x0    ; 00588934
    ADD ESP,0x8                         ; 0058893e
    FXCH                                ; 00588941
    FSTP float ptr [EBX + 0x3274]       ; 00588943
    FSTP float ptr [EBX + 0x3278]       ; 00588949
    PUSH EDI                            ; 0058894f
    MOV AL,byte ptr [ESI]               ; 00588950
        ;   Label: LAB_00588950
    MOV byte ptr [EDI],AL               ; 00588952
    CMP AL,0x0                          ; 00588954
    JZ 0x00588968                       ; 00588956
        ;   XREF to: 00588968 (CONDITIONAL_JUMP)  ; LAB_00588968
    MOV AL,byte ptr [ESI + 0x1]         ; 00588958
    ADD ESI,0x2                         ; 0058895b
    MOV byte ptr [EDI + 0x1],AL         ; 0058895e
    ADD EDI,0x2                         ; 00588961
    CMP AL,0x0                          ; 00588964
    JNZ 0x00588950                      ; 00588966
        ;   XREF to: 00588950 (CONDITIONAL_JUMP)  ; LAB_00588950
    POP EDI                             ; 00588968
        ;   Label: LAB_00588968
    PUSH 0x3f800000                     ; 00588969
    PUSH 0x3e99999a                     ; 0058896e
    CALL core_actor.cpp_FUN_0040ce40    ; 00588973
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x8],EAX       ; 00588978
    FLD float ptr [ESP + 0x8]           ; 0058897c
    ADD ESP,0x8                         ; 00588980
    PUSH 0xff                           ; 00588983
    MOV dword ptr [EBX + 0xd06c],0x0    ; 00588988
    PUSH 0x0                            ; 00588992
    FSTP float ptr [EBX + 0xd054]       ; 00588994
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 0058899a
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    MOV dword ptr [EBX + 0xd05c],0x0    ; 0058899f
    MOV dword ptr [EBX + 0xd070],0x0    ; 005889a9
    ADD ESP,0x8                         ; 005889b3
    MOV dword ptr [EBX + 0xd058],EAX    ; 005889b6
    MOV EAX,[0x00603b28]                ; 005889bc | g_CDemonSetPtr
    PUSH 0x5d83e9                       ; 005889c1
    ADD EAX,0x14d0f0                    ; 005889c6
    MOV dword ptr [EBX + 0xd0d8],0x0    ; 005889cb
    PUSH EAX                            ; 005889d5
    MOV dword ptr [EBX + 0xd130],0x0    ; 005889d6
    CALL crt_string.c__stricmp_FUN_005a3260 ; 005889e0
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 005889e5
    TEST EAX,EAX                        ; 005889e8
    SETZ AL                             ; 005889ea
    MOV dword ptr [EBX + 0xd0dc],0x0    ; 005889ed
    MOV dword ptr [EBX + 0xd144],0x0    ; 005889f7
    MOV dword ptr [EBX + 0xd148],0x0    ; 00588a01
    MOV dword ptr [EBX + 0xd050],0x0    ; 00588a0b
    MOV dword ptr [EBX + 0x252c],0x3fc90fdb ; 00588a15
    AND EAX,0xff                        ; 00588a1f
    MOV dword ptr [EBX + 0xd140],0x0    ; 00588a24
    MOV dword ptr [EBX + 0xd0d8],EAX    ; 00588a2e
    FLD float ptr [EBP + 0xcddc]        ; 00588a34
    MOV dword ptr [EBX + 0x2538],0x41700000 ; 00588a3a
    MOV dword ptr [EBX + 0xce5c],0x40a00000 ; 00588a44
    MOV EAX,EBX                         ; 00588a4e
    FSTP float ptr [EBX + 0xd0e4]       ; 00588a50
    MOV dword ptr [EBX + 0xce60],0x40a00000 ; 00588a56
    ADD ESP,0x4                         ; 00588a60
    POP EBP                             ; 00588a63
    POP EDI                             ; 00588a64
    POP ESI                             ; 00588a65
    POP EBX                             ; 00588a66
    RET                                 ; 00588a67


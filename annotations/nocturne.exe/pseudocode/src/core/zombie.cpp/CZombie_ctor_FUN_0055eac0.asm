; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_zombie_cpp_CZombie_ctor_FUN_0055eac0(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_zombie.cpp_FUN_0055ea90 at 0055eaa3
;
; Referenced Globals:
;   TerminatedCString s_zombie1_dfm_005983e6
;   TerminatedCString s_true_005983f2
;   undefined4 s_rue_005983f2+1
;   undefined4 s_ue_005983f2+2
;   undefined4 s_e_005983f2+3
;   TerminatedCString s_mine_geo_005983f7
;   float FLOAT_005a453c = 50
;   float FLOAT_005a4540 = 100
;   undefined1* PTR_core_zombie.cpp_CZombie_setup_FUN_0055ec20_005a4554 = 0055ec20
;   undefined4 DAT_005be368
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_getRandomInt_FUN_0040de00
;   core_enemy.cpp_CEnemy_ctor_FUN_00479560
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055eac0
        ;   Label: core_zombie.cpp_CZombie_ctor_FUN_0055eac0
    PUSH ESI                            ; 0055eac1
    PUSH EDI                            ; 0055eac2
    PUSH EBP                            ; 0055eac3
    SUB ESP,0x4                         ; 0055eac4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0055eac7
    PUSH EBP                            ; 0055eacb
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00479560 ; 0055eacc
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_ctor_FUN_00479560()
    ADD ESP,0x4                         ; 0055ead1
    PUSH 0x5983e6                       ; 0055ead4 | = "zombie1.dfm"
    MOV EBX,EAX                         ; 0055ead9
    ADD EAX,0x150                       ; 0055eadb
    PUSH EAX                            ; 0055eae0
    MOV ESI,0x5983f2                    ; 0055eae1 | = "true"
    MOV dword ptr [EAX + -0x4],0x5a4554 ; 0055eae6 | PTR_core_zombie.cpp_CZombie_setup_FUN_0055ec20_005a4554
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 0055eaed
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    MOV dword ptr [EBX + 0x2dd4],0x3f000000 ; 0055eaf2
    LEA EDI,[EBX + 0xbd44]              ; 0055eafc
    MOV dword ptr [EBX + 0x2dd8],0x3f800000 ; 0055eb02
    FLD float ptr [0x005a453c]          ; 0055eb0c | FLOAT_005a453c
    MOV dword ptr [EBX + 0xbd34],0x0    ; 0055eb12
    FLD float ptr [0x005a4540]          ; 0055eb1c | FLOAT_005a4540
    MOV dword ptr [EBX + 0xbd30],0x0    ; 0055eb22
    ADD ESP,0x8                         ; 0055eb2c
    FXCH                                ; 0055eb2f
    FSTP float ptr [EBX + 0x2ddc]       ; 0055eb31
    FSTP float ptr [EBX + 0x2de0]       ; 0055eb37
    PUSH EDI                            ; 0055eb3d
    MOV AL,byte ptr [ESI]               ; 0055eb3e | = "true" | s_ue_005983f2+2
        ;   Label: LAB_0055eb3e
    MOV byte ptr [EDI],AL               ; 0055eb40
    CMP AL,0x0                          ; 0055eb42
    JZ 0x0055eb56                       ; 0055eb44
        ;   XREF to: 0055eb56 (CONDITIONAL_JUMP)  ; LAB_0055eb56
    MOV AL,byte ptr [ESI + 0x1]         ; 0055eb46 | s_rue_005983f2+1 | s_e_005983f2+3
    ADD ESI,0x2                         ; 0055eb49
    MOV byte ptr [EDI + 0x1],AL         ; 0055eb4c
    ADD EDI,0x2                         ; 0055eb4f
    CMP AL,0x0                          ; 0055eb52
    JNZ 0x0055eb3e                      ; 0055eb54
        ;   XREF to: 0055eb3e (CONDITIONAL_JUMP)  ; LAB_0055eb3e
    POP EDI                             ; 0055eb56
        ;   Label: LAB_0055eb56
    PUSH 0x3f800000                     ; 0055eb57
    PUSH 0x3e99999a                     ; 0055eb5c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0055eb61
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x8],EAX       ; 0055eb66
    FLD float ptr [ESP + 0x8]           ; 0055eb6a
    ADD ESP,0x8                         ; 0055eb6e
    PUSH 0xff                           ; 0055eb71
    MOV dword ptr [EBX + 0xbd3c],0x0    ; 0055eb76
    PUSH 0x0                            ; 0055eb80
    FSTP float ptr [EBX + 0xbd24]       ; 0055eb82
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 0055eb88
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomInt_FUN_0040de00()
    MOV dword ptr [EBX + 0xbd2c],0x0    ; 0055eb8d
    MOV dword ptr [EBX + 0xbd40],0x0    ; 0055eb97
    ADD ESP,0x8                         ; 0055eba1
    MOV dword ptr [EBX + 0xbd28],EAX    ; 0055eba4
    MOV EAX,[0x005be368]                ; 0055ebaa | DAT_005be368
    PUSH 0x5983f7                       ; 0055ebaf | = "mine.geo"
    ADD EAX,0x14cd08                    ; 0055ebb4
    MOV dword ptr [EBX + 0xbda8],0x0    ; 0055ebb9
    PUSH EAX                            ; 0055ebc3
    MOV dword ptr [EBX + 0xbdfc],0x0    ; 0055ebc4
    CALL crt_string.c__stricmp_FUN_00564520 ; 0055ebce
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0055ebd3
    TEST EAX,EAX                        ; 0055ebd6
    SETZ AL                             ; 0055ebd8
    MOV dword ptr [EBX + 0xbdac],0x0    ; 0055ebdb
    MOV dword ptr [EBX + 0xbe0c],0x0    ; 0055ebe5
    MOV dword ptr [EBX + 0xbe10],0x0    ; 0055ebef
    AND EAX,0xff                        ; 0055ebf9
    MOV dword ptr [EBX + 0xbd20],0x0    ; 0055ebfe
    MOV dword ptr [EBX + 0xbda8],EAX    ; 0055ec08
    MOV EAX,EBX                         ; 0055ec0e
    ADD ESP,0x4                         ; 0055ec10
    POP EBP                             ; 0055ec13
    POP EDI                             ; 0055ec14
    POP ESI                             ; 0055ec15
    POP EBX                             ; 0055ec16
    RET                                 ; 0055ec17


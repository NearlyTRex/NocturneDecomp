; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_melee_cpp_CMelee_playAttackHitEffects_FUN_005098d0(CMelee *this_ptr,int attack_flags,SDamageInfo *damage_info,CDemonActor *victim)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   attack_flags
; SDamageInfo *    Stack[0xc]:4   damage_info
; CDemonActor *    Stack[0x10]:4   victim
;
; Referenced Globals:
;   undefined4 g_CCharacterClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_melee.cpp_CMelee_initBloodSpurtEffects_FUN_00509970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005098d0
        ;   Label: core_melee.cpp_CMelee_playAttackHitEffects_FUN_005098d0
    PUSH EDI                            ; 005098d1
    PUSH EBP                            ; 005098d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005098d3
    MOV EDX,dword ptr [0x007c637c]      ; 005098d7 | g_CCharacterClassInfo.name_hash
    PUSH EDX                            ; 005098dd
    MOV ECX,dword ptr [ESP + 0x20]      ; 005098de
    PUSH ECX                            ; 005098e2
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 005098e3
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 005098e8
    TEST EAX,EAX                        ; 005098eb
    JNZ 0x005098fa                      ; 005098ed
        ;   XREF to: 005098fa (CONDITIONAL_JUMP)  ; LAB_005098fa
    CMP dword ptr [ESP + 0x1c],0x0      ; 005098ef
    JNZ 0x0050994a                      ; 005098f4
        ;   XREF to: 0050994a (CONDITIONAL_JUMP)  ; LAB_0050994a
    POP EBP                             ; 005098f6
    POP EDI                             ; 005098f7
    POP EBX                             ; 005098f8
    RET                                 ; 005098f9
    MOV EDI,dword ptr [EAX + 0x27a0]    ; 005098fa
        ;   Label: LAB_005098fa
    PUSH EDI                            ; 00509900
    PUSH 0x14                           ; 00509901
    PUSH EBX                            ; 00509903
    CALL core_melee.cpp_CMelee_initBloodSpurtEffects_FUN_00509970 ; 00509904
        ;   XREF to: 00509970 (UNCONDITIONAL_CALL)  ; void core_melee.cpp_CMelee_initBloodSpurtEffects_FUN_00509970(CMelee * this_ptr, int blood_spurt_count, int blood_gore_type)
    ADD ESP,0xc                         ; 00509909
    MOV EBP,dword ptr [ESP + 0x14]      ; 0050990c
    CMP EBP,0x1                         ; 00509910
    JZ 0x0050991a                       ; 00509913
        ;   XREF to: 0050991a (CONDITIONAL_JUMP)  ; LAB_0050991a
    CMP EBP,0x8                         ; 00509915
    JNZ 0x00509932                      ; 00509918
        ;   XREF to: 00509932 (CONDITIONAL_JUMP)  ; LAB_00509932
    LEA EAX,[EBX + 0x5a0]               ; 0050991a
        ;   Label: LAB_0050991a
    PUSH EAX                            ; 00509920
    MOV EDX,dword ptr [EBX + 0x154]     ; 00509921
    PUSH EBX                            ; 00509927
    CALL dword ptr [EDX + 0x2c]         ; 00509928
    ADD ESP,0x8                         ; 0050992b
    POP EBP                             ; 0050992e
    POP EDI                             ; 0050992f
    POP EBX                             ; 00509930
    RET                                 ; 00509931
    LEA EAX,[EBX + 0x604]               ; 00509932
        ;   Label: LAB_00509932
    PUSH EAX                            ; 00509938
    MOV EDX,dword ptr [EBX + 0x154]     ; 00509939
    PUSH EBX                            ; 0050993f
    CALL dword ptr [EDX + 0x2c]         ; 00509940
    ADD ESP,0x8                         ; 00509943
    POP EBP                             ; 00509946
    POP EDI                             ; 00509947
    POP EBX                             ; 00509948
    RET                                 ; 00509949
    LEA EDX,[EBX + 0x668]               ; 0050994a
        ;   Label: LAB_0050994a
    PUSH EDX                            ; 00509950
    MOV EAX,dword ptr [EBX + 0x154]     ; 00509951
    PUSH EBX                            ; 00509957
    CALL dword ptr [EAX + 0x2c]         ; 00509958
    ADD ESP,0x8                         ; 0050995b
    POP EBP                             ; 0050995e
    POP EDI                             ; 0050995f
    POP EBX                             ; 00509960
    RET                                 ; 00509961


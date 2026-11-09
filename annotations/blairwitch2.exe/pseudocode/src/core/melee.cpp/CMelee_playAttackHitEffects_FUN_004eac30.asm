; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_melee_cpp_CMelee_playAttackHitEffects_FUN_004eac30(CMelee *this_ptr,int attack_flags,SDamageInfo *damage_info,CDemonActor *victim)
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
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_melee.cpp_FUN_004eacc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eac30
        ;   Label: core_melee.cpp_CMelee_playAttackHitEffects_FUN_004eac30
    PUSH EDI                            ; 004eac31
    MOV EBX,dword ptr [ESP + 0xc]       ; 004eac32
    MOV EDX,dword ptr [0x007bdc94]      ; 004eac36 | g_CCharacterClassInfo.name_hash
    PUSH EDX                            ; 004eac3c
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004eac3d
    PUSH ECX                            ; 004eac41
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004eac42
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004eac47
    TEST EAX,EAX                        ; 004eac4a
    JNZ 0x004eac58                      ; 004eac4c
        ;   XREF to: 004eac58 (CONDITIONAL_JUMP)  ; LAB_004eac58
    CMP dword ptr [ESP + 0x18],0x0      ; 004eac4e
    JNZ 0x004eac9f                      ; 004eac53
        ;   XREF to: 004eac9f (CONDITIONAL_JUMP)  ; LAB_004eac9f
    POP EDI                             ; 004eac55
    POP EBX                             ; 004eac56
    RET                                 ; 004eac57
    MOV EDI,dword ptr [EAX + 0x280c]    ; 004eac58
        ;   Label: LAB_004eac58
    PUSH EDI                            ; 004eac5e
    PUSH 0x14                           ; 004eac5f
    PUSH EBX                            ; 004eac61
    CALL core_melee.cpp_FUN_004eacc0    ; 004eac62
        ;   XREF to: 004eacc0 (UNCONDITIONAL_CALL)  ; void core_melee.cpp_FUN_004eacc0(CMelee * this_ptr, int blood_spurt_count, int blood_gore_type)
    ADD ESP,0xc                         ; 004eac67
    CMP dword ptr [ESP + 0x10],0x1      ; 004eac6a
    JNZ 0x004eac88                      ; 004eac6f
        ;   XREF to: 004eac88 (CONDITIONAL_JUMP)  ; LAB_004eac88
    LEA EAX,[EBX + 0x6fc]               ; 004eac71
    PUSH EAX                            ; 004eac77
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 004eac78
    PUSH EBX                            ; 004eac7e
    CALL dword ptr [EDX + 0x34]         ; 004eac7f
    ADD ESP,0x8                         ; 004eac82
    POP EDI                             ; 004eac85
    POP EBX                             ; 004eac86
    RET                                 ; 004eac87
    LEA EDX,[EBX + 0x760]               ; 004eac88
        ;   Label: LAB_004eac88
    PUSH EDX                            ; 004eac8e
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004eac8f
    PUSH EBX                            ; 004eac95
    CALL dword ptr [EAX + 0x34]         ; 004eac96
    ADD ESP,0x8                         ; 004eac99
    POP EDI                             ; 004eac9c
    POP EBX                             ; 004eac9d
    RET                                 ; 004eac9e
    LEA EDX,[EBX + 0x7c4]               ; 004eac9f
        ;   Label: LAB_004eac9f
    PUSH EDX                            ; 004eaca5
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004eaca6
    PUSH EBX                            ; 004eacac
    CALL dword ptr [EAX + 0x34]         ; 004eacad
    ADD ESP,0x8                         ; 004eacb0
    POP EDI                             ; 004eacb3
    POP EBX                             ; 004eacb4
    RET                                 ; 004eacb5


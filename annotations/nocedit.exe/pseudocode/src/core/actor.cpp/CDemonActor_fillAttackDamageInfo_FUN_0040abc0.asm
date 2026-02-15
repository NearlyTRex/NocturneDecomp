; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0(CDemonActor *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   attack_flags
; SDamageInfo *    Stack[0xc]:4   out_damage_info
; CDemonActor *    Stack[0x10]:4   victim
;
; XREF[2]:
;   core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_0041b210 at 0041b229
;   core_melee.cpp_CMelee_fillAttackDamageInfo_FUN_0050eaf0 at 0050eb09
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_00613ab0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040abc0
        ;   Label: core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0
    PUSH ESI                            ; 0040abc1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040abc2
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040abc6
    PUSH 0x6e4                          ; 0040abca
    PUSH 0x613ab0                       ; 0040abcf | = "..\\core\\actor.cpp"
    PUSH ESI                            ; 0040abd4
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 0040abd5
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    MOV dword ptr [EBX + 0x4],0x40a00000 ; 0040abda
    MOV dword ptr [EBX + 0x30],0x67     ; 0040abe1
    MOV dword ptr [EBX + 0x2c],0x3e4ccccd ; 0040abe8
    MOV dword ptr [EBX + 0x8],0x3ecccccd ; 0040abef
    ADD ESP,0xc                         ; 0040abf6
    MOV dword ptr [EBX + 0x34],ESI      ; 0040abf9
    PUSH ESI                            ; 0040abfc
    MOV EAX,dword ptr [ESI + 0x154]     ; 0040abfd
    CALL dword ptr [EAX + 0x8c]         ; 0040ac03
    ADD ESP,0x4                         ; 0040ac09
    MOV dword ptr [EBX + 0x38],EAX      ; 0040ac0c
    POP ESI                             ; 0040ac0f
    POP EBX                             ; 0040ac10


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040aa60(CDemonActor *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   attack_flags
; SDamageInfo *    Stack[0xc]:4   out_damage_info
; CDemonActor *    Stack[0x10]:4   victim
;
; XREF[2]:
;   core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_0041af50 at 0041af69
;   core_melee.cpp_CMelee_fillAttackDamageInfo_FUN_00509870 at 00509889
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040aa60
        ;   Label: core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040aa60
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040aa61
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040aa65
    MOV dword ptr [EBX + 0x4],0x40a00000 ; 0040aa69
    MOV dword ptr [EBX + 0x30],0x67     ; 0040aa70
    MOV dword ptr [EBX + 0x2c],0x3e4ccccd ; 0040aa77
    MOV dword ptr [EBX + 0x8],0x3ecccccd ; 0040aa7e
    MOV dword ptr [EBX + 0x34],EDX      ; 0040aa85
    PUSH EDX                            ; 0040aa88
    MOV EAX,dword ptr [EDX + 0x154]     ; 0040aa89
    CALL dword ptr [EAX + 0x94]         ; 0040aa8f
    ADD ESP,0x4                         ; 0040aa95
    MOV dword ptr [EBX + 0x38],EAX      ; 0040aa98
    POP EBX                             ; 0040aa9b
    LEA EAX,[EAX]                       ; 0040aa9c


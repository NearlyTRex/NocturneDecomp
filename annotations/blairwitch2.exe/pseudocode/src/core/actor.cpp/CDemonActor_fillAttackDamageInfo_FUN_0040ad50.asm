; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040ad50(CDemonActor *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   attack_flags
; SDamageInfo *    Stack[0xc]:4   out_damage_info
; CDemonActor *    Stack[0x10]:4   victim
;
; XREF[2]:
;   core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_00417ad0 at 00417ae9
;   core_melee.cpp_CMelee_fillAttackDamageInfo_FUN_004eabd0 at 004eabe9
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ad50
        ;   Label: core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040ad50
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040ad51
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040ad55
    MOV dword ptr [EBX + 0x4],0x40a00000 ; 0040ad59
    MOV dword ptr [EBX + 0x30],0x67     ; 0040ad60
    MOV dword ptr [EBX + 0x2c],0x3e4ccccd ; 0040ad67
    MOV dword ptr [EBX + 0x8],0x3ecccccd ; 0040ad6e
    MOV dword ptr [EBX + 0x34],EDX      ; 0040ad75
    PUSH EDX                            ; 0040ad78
    MOV EAX,dword ptr [EDX + 0x2b0]     ; 0040ad79
    CALL dword ptr [EAX + 0x9c]         ; 0040ad7f
    ADD ESP,0x4                         ; 0040ad85
    MOV dword ptr [EBX + 0x38],EAX      ; 0040ad88
    POP EBX                             ; 0040ad8b
    LEA EAX,[EAX]                       ; 0040ad8c


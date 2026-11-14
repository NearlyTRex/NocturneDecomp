; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_melee_cpp_CMelee_fillAttackDamageInfo_FUN_004eabd0(CMelee *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   attack_flags
; SDamageInfo *    Stack[0xc]:4   out_damage_info
; CDemonActor *    Stack[0x10]:4   victim
;
; Called Functions:
;   core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040ad50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eabd0
        ;   Label: core_melee.cpp_CMelee_fillAttackDamageInfo_FUN_004eabd0
    PUSH ESI                            ; 004eabd1
    SUB ESP,0x4                         ; 004eabd2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004eabd5
    MOV ESI,dword ptr [ESP + 0x18]      ; 004eabd9
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004eabdd
    PUSH EDX                            ; 004eabe1
    PUSH ESI                            ; 004eabe2
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004eabe3
    PUSH ECX                            ; 004eabe7
    PUSH EBX                            ; 004eabe8
    CALL core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040ad50 ; 004eabe9
        ;   XREF to: 0040ad50 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040ad50(CDemonActor * this_ptr, int attack_flags, SDamageInfo * out_damage_info, CDemonActor * victim)
    ADD ESP,0x10                        ; 004eabee
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004eabf1
    PUSH EBX                            ; 004eabf7
    CALL dword ptr [EAX + 0xf4]         ; 004eabf8
    MOV dword ptr [ESP + 0x4],EAX       ; 004eabfe
    MOV EAX,dword ptr [ESP + 0x4]       ; 004eac02
    MOV dword ptr [ESI + 0x4],EAX       ; 004eac06
    MOV EAX,dword ptr [EBX + 0x6e0]     ; 004eac09
    MOV dword ptr [ESI + 0x2c],EAX      ; 004eac0f
    MOV EBX,dword ptr [EBX + 0x6f8]     ; 004eac12
    ADD ESP,0x4                         ; 004eac18
    MOV dword ptr [ESI + 0x28],EBX      ; 004eac1b
    ADD ESP,0x4                         ; 004eac1e
    POP ESI                             ; 004eac21
    POP EBX                             ; 004eac22
    RET                                 ; 004eac23


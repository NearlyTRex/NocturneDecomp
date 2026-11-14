; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_melee_cpp_CMelee_fillAttackDamageInfo_FUN_004e72b0(CMelee *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   attack_flags
; SDamageInfo *    Stack[0xc]:4   out_damage_info
; CDemonActor *    Stack[0x10]:4   victim
;
; Called Functions:
;   core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040aca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e72b0
        ;   Label: core_melee.cpp_CMelee_fillAttackDamageInfo_FUN_004e72b0
    PUSH ESI                            ; 004e72b1
    SUB ESP,0x4                         ; 004e72b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004e72b5
    MOV ESI,dword ptr [ESP + 0x18]      ; 004e72b9
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004e72bd
    PUSH EDX                            ; 004e72c1
    PUSH ESI                            ; 004e72c2
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004e72c3
    PUSH ECX                            ; 004e72c7
    PUSH EBX                            ; 004e72c8
    CALL core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040aca0 ; 004e72c9
        ;   XREF to: 0040aca0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040aca0(CDemonActor * this_ptr, int attack_flags, SDamageInfo * out_damage_info, CDemonActor * victim)
    ADD ESP,0x10                        ; 004e72ce
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e72d1
    PUSH EBX                            ; 004e72d7
    CALL dword ptr [EAX + 0xec]         ; 004e72d8
    MOV dword ptr [ESP + 0x4],EAX       ; 004e72de
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e72e2
    MOV dword ptr [ESI + 0x4],EAX       ; 004e72e6
    MOV EAX,dword ptr [EBX + 0x5a0]     ; 004e72e9
    MOV dword ptr [ESI + 0x2c],EAX      ; 004e72ef
    MOV EBX,dword ptr [EBX + 0x5b8]     ; 004e72f2
    ADD ESP,0x4                         ; 004e72f8
    MOV dword ptr [ESI + 0x28],EBX      ; 004e72fb
    ADD ESP,0x4                         ; 004e72fe
    POP ESI                             ; 004e7301
    POP EBX                             ; 004e7302
    RET                                 ; 004e7303


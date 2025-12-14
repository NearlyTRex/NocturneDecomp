; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_0041b210(CBodyPart * this_ptr, int attack_flags, SDamageInfo * out_damage_info, CDemonActor * victim)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   attack_flags
; SDamageInfo *    Stack[0xc]:4   out_damage_info
; CDemonActor *    Stack[0x10]:4   victim
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041b210
        ;   Label: core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_0041b210
    PUSH ESI                            ; 0041b211
    SUB ESP,0x4                         ; 0041b212
    MOV EBX,dword ptr [ESP + 0x18]      ; 0041b215
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0041b219
    PUSH EDX                            ; 0041b21d
    PUSH EBX                            ; 0041b21e
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0041b21f
    PUSH ECX                            ; 0041b223
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0041b224
    PUSH ESI                            ; 0041b228
    CALL core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0 ; 0041b229
        ;   XREF to: 0040abc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0(CDemonActor * this_ptr, int attack_flags, SDamageInfo * out_damage_info, CDemonActor * victim)
    ADD ESP,0x10                        ; 0041b22e
    PUSH 0x41700000                     ; 0041b231
    PUSH 0x40a00000                     ; 0041b236
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0041b23b
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_fillAttackDamageInfo_FUN_00417ad0(CBodyPart *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   attack_flags
; SDamageInfo *    Stack[0xc]:4   out_damage_info
; CDemonActor *    Stack[0x10]:4   victim
;
; Called Functions:
;   core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040ad50
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417ad0
        ;   Label: core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_00417ad0
    PUSH ESI                            ; 00417ad1
    SUB ESP,0x4                         ; 00417ad2
    MOV EBX,dword ptr [ESP + 0x18]      ; 00417ad5
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00417ad9
    PUSH EDX                            ; 00417add
    PUSH EBX                            ; 00417ade
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00417adf
    PUSH ECX                            ; 00417ae3
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00417ae4
    PUSH ESI                            ; 00417ae8
    CALL core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040ad50 ; 00417ae9
        ;   XREF to: 0040ad50 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040ad50(CDemonActor * this_ptr, int attack_flags, SDamageInfo * out_damage_info, CDemonActor * victim)
    ADD ESP,0x10                        ; 00417aee
    PUSH 0x41700000                     ; 00417af1
    PUSH 0x40a00000                     ; 00417af6
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00417afb
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 00417b00
    MOV dword ptr [EBX + 0x2c],0x3ca3d70a ; 00417b04
    MOV EAX,dword ptr [ESP + 0x8]       ; 00417b0b
    MOV dword ptr [EBX + 0x4],EAX       ; 00417b0f
    ADD ESP,0x8                         ; 00417b12
    ADD ESP,0x4                         ; 00417b15
    POP ESI                             ; 00417b18
    POP EBX                             ; 00417b19
    RET                                 ; 00417b1a


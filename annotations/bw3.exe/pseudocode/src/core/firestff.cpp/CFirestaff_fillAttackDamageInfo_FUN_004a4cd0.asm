; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_firestff_cpp_CFirestaff_fillAttackDamageInfo_FUN_004a4cd0(CFirestaff *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)
;
; Parameters:
; CFirestaff *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   attack_flags
; SDamageInfo *    Stack[0xc]:4   out_damage_info
; CDemonActor *    Stack[0x10]:4   victim
;
; Called Functions:
;   core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040aca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a4cd0
        ;   Label: core_firestff.cpp_CFirestaff_fillAttackDamageInfo_FUN_004a4cd0
    PUSH ESI                            ; 004a4cd1
    MOV EDX,dword ptr [ESP + 0x18]      ; 004a4cd2
    PUSH EDX                            ; 004a4cd6
    MOV ECX,dword ptr [ESP + 0x18]      ; 004a4cd7
    PUSH ECX                            ; 004a4cdb
    MOV EBX,dword ptr [ESP + 0x18]      ; 004a4cdc
    PUSH EBX                            ; 004a4ce0
    MOV ESI,dword ptr [ESP + 0x18]      ; 004a4ce1
    PUSH ESI                            ; 004a4ce5
    CALL core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040aca0 ; 004a4ce6
        ;   XREF to: 0040aca0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040aca0(CDemonActor * this_ptr, int attack_flags, SDamageInfo * out_damage_info, CDemonActor * victim)
    ADD ESP,0x10                        ; 004a4ceb
    MOV EAX,dword ptr [ESP + 0x14]      ; 004a4cee
    MOV dword ptr [EAX + 0x4],0x41700000 ; 004a4cf2
    POP ESI                             ; 004a4cf9
    POP EBX                             ; 004a4cfa
    RET                                 ; 004a4cfb


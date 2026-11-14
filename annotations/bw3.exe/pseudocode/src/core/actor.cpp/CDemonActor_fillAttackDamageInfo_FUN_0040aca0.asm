; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040aca0(CDemonActor *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   attack_flags
; SDamageInfo *    Stack[0xc]:4   out_damage_info
; CDemonActor *    Stack[0x10]:4   victim
;
; XREF[4]:
;   core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_00416b80 at 00416b99
;   core_firestff.cpp_CFirestaff_fillAttackDamageInfo_FUN_004a4cd0 at 004a4ce6
;   core_holycrss.cpp_CHolycross_fillAttackDamageInfo_FUN_004d51d0 at 004d51ea
;   core_melee.cpp_CMelee_fillAttackDamageInfo_FUN_004e72b0 at 004e72c9
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040aca0
        ;   Label: core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040aca0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040aca1
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040aca5
    MOV dword ptr [EBX + 0x4],0x40a00000 ; 0040aca9
    MOV dword ptr [EBX + 0x30],0x67     ; 0040acb0
    MOV dword ptr [EBX + 0x2c],0x3e4ccccd ; 0040acb7
    MOV dword ptr [EBX + 0x8],0x3ecccccd ; 0040acbe
    MOV dword ptr [EBX + 0x34],EDX      ; 0040acc5
    PUSH EDX                            ; 0040acc8
    MOV EAX,dword ptr [EDX + 0x154]     ; 0040acc9
    CALL dword ptr [EAX + 0x94]         ; 0040accf
    ADD ESP,0x4                         ; 0040acd5
    MOV dword ptr [EBX + 0x38],EAX      ; 0040acd8
    POP EBX                             ; 0040acdb
    LEA EAX,[EAX]                       ; 0040acdc


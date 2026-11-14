; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_getInteractionInfo_FUN_00409d20(CDemonActor *this_ptr,SInteractionInfo *out_info)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; SInteractionInfo * Stack[0x8]:4   out_info
;
; XREF[2]:
;   core_manpuz.cpp_CMirrorHack_getInteractionInfo_FUN_00506620 at 0050662b
;   core_turret.cpp_CTurret_getInteractionInfo_FUN_005a3530 at 005a353c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00409d20
        ;   Label: core_actor.cpp_CDemonActor_getInteractionInfo_FUN_00409d20
    MOV dword ptr [EAX + 0x4],0x0       ; 00409d24
    MOV dword ptr [EAX + 0x10],0x0      ; 00409d2b
    MOV dword ptr [EAX + 0x14],0x0      ; 00409d32
    MOV dword ptr [EAX + 0x18],0x0      ; 00409d39
    MOV dword ptr [EAX + 0x1c],0x0      ; 00409d40
    MOV dword ptr [EAX + 0x8],0xc0000000 ; 00409d47
    MOV dword ptr [EAX + 0xc],0x40800000 ; 00409d4e
    MOV dword ptr [EAX],0x0             ; 00409d55
    LEA EAX,[EAX]                       ; 00409d5b
    MOV ECX,ECX                         ; 00409d5e


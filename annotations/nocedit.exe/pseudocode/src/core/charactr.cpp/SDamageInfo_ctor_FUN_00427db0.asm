; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SDamageInfo * __cdecl core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo *this_ptr)
;
; Parameters:
; SDamageInfo *    Stack[0x4]:4   this_ptr
;
; XREF[46]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 at 0040aaa0
;   core_anvil.cpp_CAnvil_process_FUN_00411d90 at 00411e75
;   core_baron.cpp_CBaron_FUN_004136b0 at 004137ab
;   core_batcreat.cpp_CBatCreature_process_FUN_00415470 at 00415740
;   core_batman.cpp_CBatman_process_FUN_00416870 at 00416f3c
;   core_bodypart.cpp_CBodyPart_process_FUN_00419be0 at 00419da3
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bf90 at 0041c61c
;   core_boxactor.cpp_CBoxActor_process_FUN_004219e0 at 00421dbb
;   core_bugs.cpp_CBugs_FUN_00425fe0 at 0042607d
;   core_charactr.cpp_CCharacter_applyDamage_FUN_00428ee0 at 00428f04
;   ... and 36 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00427db0
        ;   Label: core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
    MOV dword ptr [EAX + 0x28],0x0      ; 00427db4
    MOV dword ptr [EAX + 0x2c],0x0      ; 00427dbb
    MOV dword ptr [EAX],0xffffffff      ; 00427dc2
    LEA EDX,[EAX + 0xc]                 ; 00427dc8
    MOV dword ptr [EAX + 0x8],0x0       ; 00427dcb
    MOV dword ptr [EDX + 0x8],0x0       ; 00427dd2
    MOV ECX,dword ptr [EDX + 0x8]       ; 00427dd9
    MOV dword ptr [EDX + 0x4],ECX       ; 00427ddc
    MOV ECX,dword ptr [EDX + 0x4]       ; 00427ddf
    MOV dword ptr [EDX],ECX             ; 00427de2
    LEA EDX,[EAX + 0x1c]                ; 00427de4
    MOV dword ptr [EAX + 0x18],0x41a00000 ; 00427de7
    MOV dword ptr [EDX + 0x8],0x0       ; 00427dee
    MOV ECX,dword ptr [EDX + 0x8]       ; 00427df5
    MOV dword ptr [EDX + 0x4],ECX       ; 00427df8
    MOV ECX,dword ptr [EDX + 0x4]       ; 00427dfb
    MOV dword ptr [EDX],ECX             ; 00427dfe
    MOV dword ptr [EAX + 0x30],0x64     ; 00427e00
    MOV dword ptr [EAX + 0x34],0x0      ; 00427e07
    MOV dword ptr [EAX + 0x38],0x0      ; 00427e0e
    RET                                 ; 00427e15


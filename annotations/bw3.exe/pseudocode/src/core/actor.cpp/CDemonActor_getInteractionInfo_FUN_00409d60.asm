; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_getInteractionInfo_FUN_00409d60(CDemonActor *this_ptr,SInteractionInfo *out_info)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; SInteractionInfo * Stack[0x8]:4   out_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00409d60
        ;   Label: core_actor.cpp_CDemonActor_getInteractionInfo_FUN_00409d60
    MOV dword ptr [EAX + 0x4],0x0       ; 00409d64
    MOV dword ptr [EAX + 0x10],0x0      ; 00409d6b
    MOV dword ptr [EAX + 0x14],0x0      ; 00409d72
    MOV dword ptr [EAX + 0x18],0x0      ; 00409d79
    MOV dword ptr [EAX + 0x1c],0x0      ; 00409d80
    MOV dword ptr [EAX + 0x8],0xc0000000 ; 00409d87
    MOV dword ptr [EAX + 0xc],0x40800000 ; 00409d8e
    MOV dword ptr [EAX],0x0             ; 00409d95
    LEA EAX,[EAX]                       ; 00409d9b
    MOV ECX,ECX                         ; 00409d9e


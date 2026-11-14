; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMirrorHack_getInteractionInfo_FUN_00506620(CMirrorHack *this_ptr,SInteractionInfo *out_info)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
; SInteractionInfo * Stack[0x8]:4   out_info
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getInteractionInfo_FUN_00409d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506620
        ;   Label: core_manpuz.cpp_CMirrorHack_getInteractionInfo_FUN_00506620
    MOV EBX,dword ptr [ESP + 0xc]       ; 00506621
    PUSH EBX                            ; 00506625
    MOV EDX,dword ptr [ESP + 0xc]       ; 00506626
    PUSH EDX                            ; 0050662a
    CALL core_actor.cpp_CDemonActor_getInteractionInfo_FUN_00409d20 ; 0050662b
        ;   XREF to: 00409d20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getInteractionInfo_FUN_00409d20(CDemonActor * this_ptr, SInteractionInfo * out_info)
    ADD ESP,0x8                         ; 00506630
    MOV EAX,dword ptr [ESP + 0x8]       ; 00506633
    MOV dword ptr [EBX],0x1             ; 00506637
    MOV EAX,dword ptr [EAX + 0x2d4]     ; 0050663d
    MOV dword ptr [EBX + 0x10],0x40c90fdb ; 00506643
    MOV dword ptr [EBX + 0x14],0xc0c90fdb ; 0050664a
    MOV dword ptr [EBX + 0x8],0xbf800000 ; 00506651
    MOV dword ptr [EBX + 0xc],0x0       ; 00506658
    MOV dword ptr [EBX + 0x4],EAX       ; 0050665f
    POP EBX                             ; 00506662
    RET                                 ; 00506663


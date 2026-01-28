; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030 (CDemonActor *this_ptr,SInteractionInfo *out_info)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; SInteractionInfo * Stack[0x8]:4   out_info
;
; XREF[2]:
;   core_manpuz.cpp_CMirrorHack_getInteractionInfo_FUN_0050b2f0 at 0050b2fb
;   core_turret.cpp_CTurret_FUN_005e3440 at 005e344c
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_006139d1
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a030
        ;   Label: core_actor.cpp_CDemonActor_getInteractionInfo_FUN_0040a030
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040a031
    PUSH 0x58c                          ; 0040a035
    PUSH 0x6139d1                       ; 0040a03a | = "..\\core\\actor.cpp"
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040a03f
    PUSH EDX                            ; 0040a043
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 0040a044
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    MOV dword ptr [EBX],0x0             ; 0040a049
    MOV dword ptr [EBX + 0x4],0x0       ; 0040a04f
    MOV dword ptr [EBX + 0x10],0x0      ; 0040a056
    MOV dword ptr [EBX + 0x14],0x0      ; 0040a05d
    MOV dword ptr [EBX + 0x18],0x0      ; 0040a064
    MOV dword ptr [EBX + 0x1c],0x0      ; 0040a06b
    MOV dword ptr [EBX + 0x8],0xc0000000 ; 0040a072
    ADD ESP,0xc                         ; 0040a079
    MOV dword ptr [EBX + 0xc],0x40800000 ; 0040a07c
    POP EBX                             ; 0040a083
    RET                                 ; 0040a084


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_memory_c___arrinit_FUN_005b7f5f(int param_1,uint param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[86]:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790 at 004087b1
;   core_actor.cpp_CDemonActor_renderTargetPoints_FUN_00409af0 at 00409b0d
;   core_baron.cpp_CBaron_performLightningAttack_FUN_00410170 at 0041031f
;   core_bodypart.cpp_CBodyPart_ctor_FUN_004156e0 at 004156fa
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_004182d0 at 004182f0
;   core_box.cpp_CBox_ctor_FUN_005b1bc0 at 005b1bd1
;   core_boxactor.cpp_staticInit_FUN_0041bc90 at 0041bcbf
;   core_bugs.cpp_CBugs_ctor_FUN_0041ef50 at 0041ef70
;   core_chain.cpp_CChain_ctor_FUN_005b4720 at 005b473c
;   core_charactr.cpp_CCharacter_ctor_FUN_00422340 at 00422383
;   ... and 76 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b7f5f
        ;   Label: crt_memory.c___arrinit_FUN_005b7f5f
    PUSH ESI                            ; 005b7f60
    PUSH EDI                            ; 005b7f61
    PUSH EBP                            ; 005b7f62
    SUB ESP,0xc                         ; 005b7f63
    MOV EBX,dword ptr [ESP + 0x20]      ; 005b7f66
    MOV EBP,dword ptr [ESP + 0x24]      ; 005b7f6a
    MOV EDI,dword ptr [ESP + 0x28]      ; 005b7f6e
    MOV dword ptr [ESP + 0x4],EDI       ; 005b7f72
    MOV dword ptr [ESP + 0x8],EBX       ; 005b7f76
    XOR EDX,EDX                         ; 005b7f7a
    MOV ESI,dword ptr [EDI + 0x4]       ; 005b7f7c
    MOV dword ptr [ESP],EDX             ; 005b7f7f
    MOV EDI,dword ptr [EDI + 0x10]      ; 005b7f82
    CMP EBP,dword ptr [ESP]             ; 005b7f85
        ;   Label: LAB_005b7f85
    JA 0x005b7f96                       ; 005b7f88
        ;   XREF to: 005b7f96 (CONDITIONAL_JUMP)  ; LAB_005b7f96
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b7f8a
    ADD ESP,0xc                         ; 005b7f8e
    POP EBP                             ; 005b7f91
    POP EDI                             ; 005b7f92
    POP ESI                             ; 005b7f93
    POP EBX                             ; 005b7f94
    RET                                 ; 005b7f95
    PUSH EBX                            ; 005b7f96
        ;   Label: LAB_005b7f96
    CALL ESI                            ; 005b7f97
    ADD ESP,0x4                         ; 005b7f99
    MOV EAX,dword ptr [ESP]             ; 005b7f9c
    INC EAX                             ; 005b7f9f
    ADD EBX,EDI                         ; 005b7fa0
    MOV dword ptr [ESP],EAX             ; 005b7fa2
    JMP 0x005b7f85                      ; 005b7fa5
        ;   XREF to: 005b7f85 (UNCONDITIONAL_JUMP)  ; LAB_005b7f85


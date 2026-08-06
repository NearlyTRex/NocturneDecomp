; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dest_cpp_CActorDestination_acceptsActor_FUN_0044bab0(CActorDestination *this_ptr,CDemonActor *actor)
;
; Parameters:
; CActorDestination * Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[3]:
;   core_dest.cpp_CActorDestination_process_FUN_0044b850 at 0044b8e5
;   core_hero.cpp_CHero_findItemUseTarget_FUN_004b5950 at 004b59f0
;   core_stranger.cpp_CStranger_FUN_0053c800 at 0053c9a7
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044bab0
        ;   Label: core_dest.cpp_CActorDestination_acceptsActor_FUN_0044bab0
    PUSH ESI                            ; 0044bab1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0044bab2
    MOV ESI,dword ptr [ESP + 0x10]      ; 0044bab6
    CMP dword ptr [EBX + 0x17c],0x0     ; 0044baba
    JNZ 0x0044badc                      ; 0044bac1
        ;   XREF to: 0044badc (CONDITIONAL_JUMP)  ; LAB_0044badc
    CMP byte ptr [EBX + 0x154],0x0      ; 0044bac3
    JNZ 0x0044bae1                      ; 0044baca
        ;   XREF to: 0044bae1 (CONDITIONAL_JUMP)  ; LAB_0044bae1
    CMP ESI,dword ptr [EBX + 0x150]     ; 0044bacc
    JNZ 0x0044badc                      ; 0044bad2
        ;   XREF to: 0044badc (CONDITIONAL_JUMP)  ; LAB_0044badc
    MOV EAX,0x1                         ; 0044bad4
    POP ESI                             ; 0044bad9
    POP EBX                             ; 0044bada
    RET                                 ; 0044badb
    XOR EAX,EAX                         ; 0044badc
        ;   Label: LAB_0044badc
    POP ESI                             ; 0044bade
    POP EBX                             ; 0044badf
    RET                                 ; 0044bae0
    LEA EAX,[EBX + 0x154]               ; 0044bae1
        ;   Label: LAB_0044bae1
    PUSH EAX                            ; 0044bae7
    PUSH ESI                            ; 0044bae8
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 0044bae9
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0044baee
    TEST EAX,EAX                        ; 0044baf1
    JZ 0x0044badc                       ; 0044baf3
        ;   XREF to: 0044badc (CONDITIONAL_JUMP)  ; LAB_0044badc
    MOV EAX,0x1                         ; 0044baf5
    MOV dword ptr [EBX + 0x150],ESI     ; 0044bafa
    POP ESI                             ; 0044bb00
    POP EBX                             ; 0044bb01
    RET                                 ; 0044bb02


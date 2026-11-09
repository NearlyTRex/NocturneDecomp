; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dest_cpp_CActorDestination_acceptsActor_FUN_0045d550(CActorDestination *this_ptr,CDemonActor *actor)
;
; Parameters:
; CActorDestination * Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[4]:
;   core_dest.cpp_FUN_0045d2a0 at 0045d36b
;   core_doc.cpp_FUN_004712b0 at 004713c1
;   core_hero.cpp_CHero_findItemUseTarget_FUN_004ebeb0 at 004ebf30
;   core_stranger.cpp_FUN_0058d910 at 0058dad2
;
; Called Functions:
;   core_actor.cpp_FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d550
        ;   Label: core_dest.cpp_CActorDestination_acceptsActor_FUN_0045d550
    PUSH ESI                            ; 0045d551
    MOV EBX,dword ptr [ESP + 0xc]       ; 0045d552
    MOV ESI,dword ptr [ESP + 0x10]      ; 0045d556
    CMP dword ptr [EBX + 0x184],0x0     ; 0045d55a
    JNZ 0x0045d57c                      ; 0045d561
        ;   XREF to: 0045d57c (CONDITIONAL_JUMP)  ; LAB_0045d57c
    CMP byte ptr [EBX + 0x15c],0x0      ; 0045d563
    JNZ 0x0045d581                      ; 0045d56a
        ;   XREF to: 0045d581 (CONDITIONAL_JUMP)  ; LAB_0045d581
    CMP ESI,dword ptr [EBX + 0x158]     ; 0045d56c
    JNZ 0x0045d57c                      ; 0045d572
        ;   XREF to: 0045d57c (CONDITIONAL_JUMP)  ; LAB_0045d57c
    MOV EAX,0x1                         ; 0045d574
    POP ESI                             ; 0045d579
    POP EBX                             ; 0045d57a
    RET                                 ; 0045d57b
    XOR EAX,EAX                         ; 0045d57c
        ;   Label: LAB_0045d57c
    POP ESI                             ; 0045d57e
    POP EBX                             ; 0045d57f
    RET                                 ; 0045d580
    LEA EAX,[EBX + 0x15c]               ; 0045d581
        ;   Label: LAB_0045d581
    PUSH EAX                            ; 0045d587
    PUSH ESI                            ; 0045d588
    CALL core_actor.cpp_FUN_0040c550    ; 0045d589
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0045d58e
    TEST EAX,EAX                        ; 0045d591
    JZ 0x0045d57c                       ; 0045d593
        ;   XREF to: 0045d57c (CONDITIONAL_JUMP)  ; LAB_0045d57c
    MOV EAX,0x1                         ; 0045d595
    MOV dword ptr [EBX + 0x158],ESI     ; 0045d59a
    POP ESI                             ; 0045d5a0
    POP EBX                             ; 0045d5a1
    RET                                 ; 0045d5a2


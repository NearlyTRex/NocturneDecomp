; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dest_cpp_CActorDestination_acceptsActor_FUN_004473f0(CActorDestination *this_ptr,CDemonActor *actor)
;
; Parameters:
; CActorDestination * Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[3]:
;   core_dest.cpp_CActorDestination_process_FUN_00447140 at 0044720b
;   core_hero.cpp_CHero_findItemUseTarget_FUN_004cfb00 at 004cfb87
;   core_stranger.cpp_CStranger_tryPlaceObject_FUN_0056acd0 at 0056ae92
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004473f0
        ;   Label: core_dest.cpp_CActorDestination_acceptsActor_FUN_004473f0
    PUSH ESI                            ; 004473f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004473f2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004473f6
    CMP dword ptr [EBX + 0x2e0],0x0     ; 004473fa
    JNZ 0x0044741c                      ; 00447401
        ;   XREF to: 0044741c (CONDITIONAL_JUMP)  ; LAB_0044741c
    CMP byte ptr [EBX + 0x2b8],0x0      ; 00447403
    JNZ 0x00447421                      ; 0044740a
        ;   XREF to: 00447421 (CONDITIONAL_JUMP)  ; LAB_00447421
    CMP ESI,dword ptr [EBX + 0x2b4]     ; 0044740c
    JNZ 0x0044741c                      ; 00447412
        ;   XREF to: 0044741c (CONDITIONAL_JUMP)  ; LAB_0044741c
    MOV EAX,0x1                         ; 00447414
    POP ESI                             ; 00447419
    POP EBX                             ; 0044741a
    RET                                 ; 0044741b
    XOR EAX,EAX                         ; 0044741c
        ;   Label: LAB_0044741c
    POP ESI                             ; 0044741e
    POP EBX                             ; 0044741f
    RET                                 ; 00447420
    LEA EAX,[EBX + 0x2b8]               ; 00447421
        ;   Label: LAB_00447421
    PUSH EAX                            ; 00447427
    PUSH ESI                            ; 00447428
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 00447429
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0044742e
    TEST EAX,EAX                        ; 00447431
    JZ 0x0044741c                       ; 00447433
        ;   XREF to: 0044741c (CONDITIONAL_JUMP)  ; LAB_0044741c
    MOV EAX,0x1                         ; 00447435
    MOV dword ptr [EBX + 0x2b4],ESI     ; 0044743a
    POP ESI                             ; 00447440
    POP EBX                             ; 00447441
    RET                                 ; 00447442


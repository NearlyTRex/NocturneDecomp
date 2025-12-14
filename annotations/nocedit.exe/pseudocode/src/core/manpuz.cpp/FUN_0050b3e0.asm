; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_manpuz.cpp_FUN_0050b3e0()
;
;
; Referenced Globals:
;   TerminatedCString s_Panel_model_00635945
;   TerminatedCString s_Gem_model_00635951
;   TerminatedCString s_Slew_mode_00635990
;   void* PTR_s_Normal_0067d0ac = 0063595b
;   undefined4 DAT_02f0cb1c
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
;   core_actor.cpp_CActorPropertyList_FUN_0040e640
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b3e0
        ;   Label: core_manpuz.cpp_FUN_0050b3e0
    PUSH ESI                            ; 0050b3e1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0050b3e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0050b3e6
    PUSH EBX                            ; 0050b3ea
    PUSH ESI                            ; 0050b3eb
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 0050b3ec
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 0050b3f1
    PUSH 0x0                            ; 0050b3f4
    LEA EAX,[ESI + 0x158]               ; 0050b3f6
    PUSH EAX                            ; 0050b3fc
    PUSH 0x635945                       ; 0050b3fd | = "Panel model"
    PUSH EBX                            ; 0050b402
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0 ; 0050b403
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e3b0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 0050b408
    PUSH 0x0                            ; 0050b40b
    ADD ESI,0x2d4                       ; 0050b40d
    PUSH ESI                            ; 0050b413
    PUSH 0x635951                       ; 0050b414 | = "Gem model"
    PUSH EBX                            ; 0050b419
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0 ; 0050b41a
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e3b0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 0050b41f
    PUSH 0x2f0cb1c                      ; 0050b422 | DAT_02f0cb1c
    PUSH 0x67d0ac                       ; 0050b427 | PTR_s_Normal_0067d0ac
    PUSH 0x5                            ; 0050b42c
    PUSH 0x635990                       ; 0050b42e | = "Slew mode"
    PUSH EBX                            ; 0050b433
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e640 ; 0050b434
        ;   XREF to: 0040e640 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e640(CActorPropertyList * this_ptr)
    ADD ESP,0x14                        ; 0050b439
    POP ESI                             ; 0050b43c
    POP EBX                             ; 0050b43d
    RET                                 ; 0050b43e


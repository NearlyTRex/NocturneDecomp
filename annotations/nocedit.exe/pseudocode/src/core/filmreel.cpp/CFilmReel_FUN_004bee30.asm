; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_filmreel.cpp_CFilmReel_FUN_004bee30()
;
;
; Referenced Globals:
;   TerminatedCString s_CFilmReel_00629bde
;   TerminatedCString s_Key_reel_00629be8
;   TerminatedCString s_Key_event_00629bf1
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e350
;   core_actor.cpp_CActorPropertyList_FUN_0040e460
;   core_dest.cpp_FUN_0046fe80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bee30
        ;   Label: core_filmreel.cpp_CFilmReel_FUN_004bee30
    PUSH ESI                            ; 004bee31
    MOV EBX,dword ptr [ESP + 0xc]       ; 004bee32
    MOV ESI,dword ptr [ESP + 0x10]      ; 004bee36
    PUSH ESI                            ; 004bee3a
    PUSH EBX                            ; 004bee3b
    CALL core_dest.cpp_FUN_0046fe80     ; 004bee3c | undefined core_dest.cpp_FUN_0046fe80()
        ;   XREF to: 0046fe80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004bee41
    PUSH 0x0                            ; 004bee44
    PUSH 0x629bde                       ; 004bee46 | = "CFilmReel" | s_CFilmReel_00629bde = CFilmReel
    PUSH 0x1                            ; 004bee4b
    LEA EAX,[EBX + 0x370]               ; 004bee4d
    PUSH EAX                            ; 004bee53
    PUSH 0x629be8                       ; 004bee54 | = "Key reel" | s_Key_reel_00629be8 = Key reel
    PUSH ESI                            ; 004bee59
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e350 ; 004bee5a | int core_actor.cpp_CActorPropertyList_FUN_0040e350(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 004bee5f
    LEA EAX,[EBX + 0x374]               ; 004bee62
    PUSH EAX                            ; 004bee68
    PUSH 0x629bf1                       ; 004bee69 | = "Key event" | s_Key_event_00629bf1 = Key event
    PUSH ESI                            ; 004bee6e
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e460 ; 004bee6f | void core_actor.cpp_CActorPropertyList_FUN_0040e460(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004bee74
    POP ESI                             ; 004bee77
    POP EBX                             ; 004bee78
    RET                                 ; 004bee79


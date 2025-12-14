; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_filmreel.cpp_FUN_004be960()
;
;
; Referenced Globals:
;   TerminatedCString s_Model_file_kfm_00629aff
;   TerminatedCString s_Movie_name_00629b11
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e290
;   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004be960
        ;   Label: core_filmreel.cpp_FUN_004be960
    PUSH ESI                            ; 004be961
    MOV EBX,dword ptr [ESP + 0xc]       ; 004be962
    MOV ESI,dword ptr [ESP + 0x10]      ; 004be966
    PUSH ESI                            ; 004be96a
    PUSH EBX                            ; 004be96b
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 004be96c
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 004be971
    PUSH 0x0                            ; 004be974
    LEA EAX,[EBX + 0x158]               ; 004be976
    PUSH EAX                            ; 004be97c
    PUSH 0x629aff                       ; 004be97d | = "Model file (.kfm)"
    PUSH ESI                            ; 004be982
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0 ; 004be983
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e3b0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 004be988
    PUSH 0x0                            ; 004be98b
    PUSH 0x1f                           ; 004be98d
    LEA EAX,[EBX + 0x2d8]               ; 004be98f
    PUSH EAX                            ; 004be995
    PUSH 0x629b11                       ; 004be996 | = "Movie name"
    PUSH ESI                            ; 004be99b
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e290 ; 004be99c
        ;   XREF to: 0040e290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e290(CActorPropertyList * this_ptr)
    ADD ESP,0x14                        ; 004be9a1
    POP ESI                             ; 004be9a4
    POP EBX                             ; 004be9a5
    RET                                 ; 004be9a6


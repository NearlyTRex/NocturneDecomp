; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_bat_cpp_CBat_getPropertyList_FUN_00414dc0(CBat *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
; Local Variables:
; undefined1       Stack[-0x6c]:1  local_6c
;
; Referenced Globals:
;   TerminatedCString s_pth_0061538e
;   TerminatedCString s_data_00615394
;   TerminatedCString s_Course_file_00615399
;   TerminatedCString s_Parameter_0_d_006153a5
;   TerminatedCString s_Model_file_kfm_006153b7
;   TerminatedCString s_Course_Speed_006153c9
;   TerminatedCString s_Flap_speed_mult_006153d6
;   TerminatedCString s_Periodic_sound_006153e6
;   TerminatedCString s_Sound_period_min_006153f5
;   TerminatedCString s_Sound_period_max_00615406
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_FUN_0040e2d0
;   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
;   core_actor.cpp_CActorPropertyList_FUN_0040e3e0
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;   crt_stdio.c_sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414dc0
        ;   Label: core_bat.cpp_CBat_getPropertyList_FUN_00414dc0
    PUSH ESI                            ; 00414dc1
    SUB ESP,0x64                        ; 00414dc2
    MOV EBX,dword ptr [ESP + 0x70]      ; 00414dc5
    MOV ESI,dword ptr [ESP + 0x74]      ; 00414dc9
    PUSH ESI                            ; 00414dcd
    PUSH EBX                            ; 00414dce
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 00414dcf
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 00414dd4
    PUSH 0x0                            ; 00414dd7
    PUSH 0x61538e                       ; 00414dd9 | = "*.pth"
    PUSH 0x615394                       ; 00414dde | = "data"
    LEA EAX,[EBX + 0x158]               ; 00414de3
    PUSH EAX                            ; 00414de9
    PUSH 0x615399                       ; 00414dea | = "Course file"
    PUSH ESI                            ; 00414def
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e3e0 ; 00414df0
        ;   XREF to: 0040e3e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CActorPropertyList_FUN_0040e3e0(CActorPropertyList * this_ptr)
    LEA EAX,[EBX + 0x178]               ; 00414df5
    ADD ESP,0x18                        ; 00414dfb
    MOV EAX,dword ptr [EAX]             ; 00414dfe
    PUSH EAX                            ; 00414e00
    PUSH 0x6153a5                       ; 00414e01 | = "Parameter (0..%d)"
    LEA EAX,[ESP + 0x8]                 ; 00414e06
    PUSH EAX                            ; 00414e0a
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00414e0b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00414e10
    PUSH 0x0                            ; 00414e13
    LEA EAX,[EBX + 0x304]               ; 00414e15
    PUSH EAX                            ; 00414e1b
    LEA EAX,[ESP + 0x8]                 ; 00414e1c
    PUSH EAX                            ; 00414e20
    PUSH ESI                            ; 00414e21
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 00414e22
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00414e27
    PUSH 0x0                            ; 00414e2a
    MOV dword ptr [EAX + 0x58],0x1      ; 00414e2c
    LEA EAX,[EBX + 0x188]               ; 00414e33
    PUSH EAX                            ; 00414e39
    PUSH 0x6153b7                       ; 00414e3a | = "Model file (.kfm)"
    PUSH ESI                            ; 00414e3f
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0 ; 00414e40
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e3b0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00414e45
    PUSH 0x0                            ; 00414e48
    LEA EAX,[EBX + 0x308]               ; 00414e4a
    PUSH EAX                            ; 00414e50
    PUSH 0x6153c9                       ; 00414e51 | = "Course Speed"
    PUSH ESI                            ; 00414e56
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 00414e57
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00414e5c
    PUSH 0x0                            ; 00414e5f
    LEA EAX,[EBX + 0x30c]               ; 00414e61
    PUSH EAX                            ; 00414e67
    PUSH 0x6153d6                       ; 00414e68 | = "Flap speed mult"
    PUSH ESI                            ; 00414e6d
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 00414e6e
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00414e73
    LEA EAX,[EBX + 0x314]               ; 00414e76
    PUSH EAX                            ; 00414e7c
    PUSH 0x6153e6                       ; 00414e7d | = "Periodic sound"
    PUSH ESI                            ; 00414e82
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0 ; 00414e83
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e2d0(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 00414e88
    PUSH 0x0                            ; 00414e8b
    LEA EAX,[EBX + 0x378]               ; 00414e8d
    PUSH EAX                            ; 00414e93
    PUSH 0x6153f5                       ; 00414e94 | = "Sound period min"
    PUSH ESI                            ; 00414e99
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 00414e9a
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00414e9f
    PUSH 0x0                            ; 00414ea2
    ADD EBX,0x37c                       ; 00414ea4
    PUSH EBX                            ; 00414eaa
    PUSH 0x615406                       ; 00414eab | = "Sound period max"
    PUSH ESI                            ; 00414eb0
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 00414eb1
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00414eb6
    ADD ESP,0x64                        ; 00414eb9
    POP ESI                             ; 00414ebc
    POP EBX                             ; 00414ebd
    RET                                 ; 00414ebe


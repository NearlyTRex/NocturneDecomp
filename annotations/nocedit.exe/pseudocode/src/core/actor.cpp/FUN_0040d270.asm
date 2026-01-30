; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_FUN_0040d270(void)
;
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 at 0040d29b
;
; Referenced Globals:
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonMission g_CDemonMissionInstance
;
; Called Functions:
;   core_msnedit.cpp_CDemonMission_FUN_0053d220
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d270
        ;   Label: core_actor.cpp_FUN_0040d270
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040d271
    PUSH EDX                            ; 0040d275
    MOV ECX,dword ptr [ESP + 0xc]       ; 0040d276
    PUSH ECX                            ; 0040d27a
    MOV EBX,dword ptr [0x0067d550]      ; 0040d27b | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH EBX                            ; 0040d281 | g_CDemonMissionInstance
    CALL core_msnedit.cpp_CDemonMission_FUN_0053d220 ; 0040d282
        ;   XREF to: 0053d220 (UNCONDITIONAL_CALL)  ; int core_msnedit.cpp_CDemonMission_FUN_0053d220(CDemonMission * this_ptr)
    ADD ESP,0xc                         ; 0040d287
    POP EBX                             ; 0040d28a
    RET                                 ; 0040d28b


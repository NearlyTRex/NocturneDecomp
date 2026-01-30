; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_frankgen_cpp_FUN_004d2500(void)
;
; Local Variables:
; undefined8       Stack[-0x70]:8  local_70
; undefined1       Stack[-0x68]:1  local_68
;
; Referenced Globals:
;   TerminatedCString s_Master_frame_0_g_0062abdf
;   float FLOAT_0065e670 = 2300
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e160
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;   core_frankgen.cpp_CFrankenstienMachine_findLeader_FUN_004d2330
;   crt_stdio.c_sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2500
        ;   Label: core_frankgen.cpp_FUN_004d2500
    SUB ESP,0x64                        ; 004d2501
    MOV EDX,dword ptr [ESP + 0x70]      ; 004d2504
    PUSH EDX                            ; 004d2508
    MOV ECX,dword ptr [ESP + 0x70]      ; 004d2509
    PUSH ECX                            ; 004d250d
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 004d250e
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 004d2513
    SUB ESP,0x8                         ; 004d2516
    FLD float ptr [0x0065e670]          ; 004d2519 | FLOAT_0065e670
    FSTP double ptr [ESP]               ; 004d251f
    PUSH 0x62abdf                       ; 004d2522 | = "Master frame (%0..%g)"
    LEA EAX,[ESP + 0xc]                 ; 004d2527
    PUSH EAX                            ; 004d252b
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d252c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d2531
    PUSH 0x0                            ; 004d2534
    CALL core_frankgen.cpp_CFrankenstienMachine_findLeader_FUN_004d2330 ; 004d2536
        ;   XREF to: 004d2330 (UNCONDITIONAL_CALL)  ; CDemonActor * core_frankgen.cpp_CFrankenstienMachine_findLeader_FUN_004d2330()
    ADD EAX,0x15c                       ; 004d253b
    PUSH EAX                            ; 004d2540
    LEA EAX,[ESP + 0x8]                 ; 004d2541
    PUSH EAX                            ; 004d2545
    MOV EBX,dword ptr [ESP + 0x7c]      ; 004d2546
    PUSH EBX                            ; 004d254a
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 004d254b
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 004d2550
    ADD ESP,0x64                        ; 004d2553
    POP EBX                             ; 004d2556
    RET                                 ; 004d2557


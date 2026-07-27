; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0050fa30(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[6]:
;   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00429730 at 00429ac9
;   core_gabriela.cpp_FUN_00499b00 at 00499c48
;   core_sound.cpp_FUN_0052d790 at 0052d875
;   core_sound.cpp_FUN_0052dff0 at 0052e36b
;   core_stranger.cpp_CStranger_autoAimAtThreat_FUN_0053d910 at 0053e099
;   core_zombie.cpp_FUN_0055ef50 at 0055f1f6
;
; Referenced Globals:
;   undefined4 DAT_01fba938
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_004680b0
;   core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050fa30
        ;   Label: core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0050fa30
    PUSH ESI                            ; 0050fa31
    PUSH EDI                            ; 0050fa32
    PUSH EBP                            ; 0050fa33
    MOV EBP,ESP                         ; 0050fa34
    SUB ESP,0xc                         ; 0050fa36
    AND ESP,0xfffffff8                  ; 0050fa39
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0050fa3c
    PUSH EDX                            ; 0050fa3f
    MOV ECX,dword ptr [EBP + 0x18]      ; 0050fa40
    PUSH ECX                            ; 0050fa43
    PUSH 0x1fba938                      ; 0050fa44 | DAT_01fba938
    CALL core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_004680b0 ; 0050fa49
        ;   XREF to: 004680b0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_004680b0()
    ADD ESP,0xc                         ; 0050fa4e
    TEST EAX,EAX                        ; 0050fa51
    JZ 0x0050fa61                       ; 0050fa53
        ;   XREF to: 0050fa61 (CONDITIONAL_JUMP)  ; LAB_0050fa61
    MOV EAX,0x1                         ; 0050fa55
        ;   Label: LAB_0050fa55
    MOV ESP,EBP                         ; 0050fa5a
    POP EBP                             ; 0050fa5c
    POP EDI                             ; 0050fa5d
    POP ESI                             ; 0050fa5e
    POP EBX                             ; 0050fa5f
    RET                                 ; 0050fa60
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0050fa61
        ;   Label: LAB_0050fa61
    PUSH 0x3f8147ae                     ; 0050fa64
    PUSH EBX                            ; 0050fa69
    MOV ESI,dword ptr [EBP + 0x18]      ; 0050fa6a
    PUSH ESI                            ; 0050fa6d
    MOV EDI,dword ptr [EBP + 0x14]      ; 0050fa6e
    PUSH 0xbf800000                     ; 0050fa71
    PUSH EDI                            ; 0050fa76
    CALL core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0 ; 0050fa77
        ;   XREF to: 0050ffe0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0()
    MOV dword ptr [ESP + 0x1c],EAX      ; 0050fa7c
    FLD float ptr [ESP + 0x1c]          ; 0050fa80
    ADD ESP,0x14                        ; 0050fa84
    FLDZ                                ; 0050fa87
    FXCH                                ; 0050fa89
    FSTP double ptr [ESP]               ; 0050fa8b
    FCOMP double ptr [ESP]              ; 0050fa8e
    FNSTSW AX                           ; 0050fa91
    SAHF                                ; 0050fa93
    JA 0x0050faa0                       ; 0050fa94
        ;   XREF to: 0050faa0 (CONDITIONAL_JUMP)  ; LAB_0050faa0
    FLD1                                ; 0050fa96
    FCOMP double ptr [ESP]              ; 0050fa98
    FNSTSW AX                           ; 0050fa9b
    SAHF                                ; 0050fa9d
    JNC 0x0050fa55                      ; 0050fa9e
        ;   XREF to: 0050fa55 (CONDITIONAL_JUMP)  ; LAB_0050fa55
    XOR EAX,EAX                         ; 0050faa0
        ;   Label: LAB_0050faa0
    MOV ESP,EBP                         ; 0050faa2
    POP EBP                             ; 0050faa4
    POP EDI                             ; 0050faa5
    POP ESI                             ; 0050faa6
    POP EBX                             ; 0050faa7
    RET                                 ; 0050faa8


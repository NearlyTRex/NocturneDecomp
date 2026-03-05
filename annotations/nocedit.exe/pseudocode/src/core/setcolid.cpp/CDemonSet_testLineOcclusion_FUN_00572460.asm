; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_pos
; CVector3f *      Stack[0xc]:4   end_pos
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[6]:
;   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0 at 0042d939
;   core_gabriela.cpp_CGabriella_binarySearchClavicleBlend_FUN_004d6f80 at 004d70c8
;   core_sound.cpp_CSound_process_FUN_005b2fd0 at 005b334b
;   core_sound.cpp_processTrainSounds_FUN_005b2770 at 005b2855
;   core_stranger.cpp_CStranger_autoAimAtThreat_FUN_005c3960 at 005c40e9
;   core_zombie.cpp_CZombie_process_FUN_005f9470 at 005f9716
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220
;   core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572460
        ;   Label: core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460
    PUSH ESI                            ; 00572461
    PUSH EDI                            ; 00572462
    PUSH EBP                            ; 00572463
    MOV EBP,ESP                         ; 00572464
    SUB ESP,0xc                         ; 00572466
    AND ESP,0xfffffff8                  ; 00572469
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0057246c
    PUSH EDX                            ; 0057246f
    MOV ECX,dword ptr [EBP + 0x18]      ; 00572470
    PUSH ECX                            ; 00572473
    PUSH 0x3277d14                      ; 00572474 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220 ; 00572479
        ;   XREF to: 00496220 (UNCONDITIONAL_CALL)  ; int core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220(CDemonRaytrace * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 0057247e
    TEST EAX,EAX                        ; 00572481
    JZ 0x00572491                       ; 00572483
        ;   XREF to: 00572491 (CONDITIONAL_JUMP)  ; LAB_00572491
    MOV EAX,0x1                         ; 00572485
        ;   Label: LAB_00572485
    MOV ESP,EBP                         ; 0057248a
    POP EBP                             ; 0057248c
    POP EDI                             ; 0057248d
    POP ESI                             ; 0057248e
    POP EBX                             ; 0057248f
    RET                                 ; 00572490
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00572491
        ;   Label: LAB_00572491
    PUSH 0x3f8147ae                     ; 00572494
    PUSH EBX                            ; 00572499
    MOV ESI,dword ptr [EBP + 0x18]      ; 0057249a
    PUSH ESI                            ; 0057249d
    MOV EDI,dword ptr [EBP + 0x14]      ; 0057249e
    PUSH 0xbf800000                     ; 005724a1
    PUSH EDI                            ; 005724a6
    CALL core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10 ; 005724a7
        ;   XREF to: 00572a10 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10(CDemonSet * this_ptr, float min_t, CVector3f * ray_origin, CVector3f * ray_target, ...)
    MOV dword ptr [ESP + 0x1c],EAX      ; 005724ac
    FLD float ptr [ESP + 0x1c]          ; 005724b0
    ADD ESP,0x14                        ; 005724b4
    FLDZ                                ; 005724b7
    FXCH                                ; 005724b9
    FSTP double ptr [ESP]               ; 005724bb
    FCOMP double ptr [ESP]              ; 005724be
    FNSTSW AX                           ; 005724c1
    SAHF                                ; 005724c3
    JA 0x005724d0                       ; 005724c4
        ;   XREF to: 005724d0 (CONDITIONAL_JUMP)  ; LAB_005724d0
    FLD1                                ; 005724c6
    FCOMP double ptr [ESP]              ; 005724c8
    FNSTSW AX                           ; 005724cb
    SAHF                                ; 005724cd
    JNC 0x00572485                      ; 005724ce
        ;   XREF to: 00572485 (CONDITIONAL_JUMP)  ; LAB_00572485
    XOR EAX,EAX                         ; 005724d0
        ;   Label: LAB_005724d0
    MOV ESP,EBP                         ; 005724d2
    POP EBP                             ; 005724d4
    POP EDI                             ; 005724d5
    POP ESI                             ; 005724d6
    POP EBX                             ; 005724d7
    RET                                 ; 005724d8


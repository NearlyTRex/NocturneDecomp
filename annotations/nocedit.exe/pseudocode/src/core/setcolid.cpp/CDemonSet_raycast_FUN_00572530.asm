; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl core_setcolid_cpp_CDemonSet_raycast_FUN_00572530 (CDemonSet *this_ptr,CVector3f *ray_origin,CVector3f *ray_target)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   ray_origin
; CVector3f *      Stack[0xc]:4   ray_target
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[15]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 at 0040a742
;   core_crossbow.cpp_CCrossbow_FUN_00448f20 at 004490c8
;   core_fire.cpp_CFireEffect_FUN_004c8230 at 004c8313
;   core_gabriela.cpp_FUN_004d4190 at 004d4651
;   core_gabriela.cpp_FUN_004d6260 at 004d64c4
;   core_gun.cpp_FUN_004f0350 at 004f050e
;   core_lightgun.cpp_FUN_00505b70 at 00505c07
;   core_lightgun.cpp_FUN_00505c70 at 0050606b
;   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 at 0053e7d1
;   core_scat.cpp_FUN_00558cf0 at 00558f54
;   ... and 5 more
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
;   core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572530
        ;   Label: core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
    PUSH ESI                            ; 00572531
    PUSH EDI                            ; 00572532
    PUSH EBP                            ; 00572533
    SUB ESP,0x28                        ; 00572534
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00572537
    MOV ESI,dword ptr [ESP + 0x40]      ; 0057253b
    MOV EDI,dword ptr [ESP + 0x44]      ; 0057253f
    LEA EAX,[EBX + 0x14d110]            ; 00572543
    CMP EAX,ESI                         ; 00572549
    JNZ 0x00572689                      ; 0057254b
        ;   XREF to: 00572689 (CONDITIONAL_JUMP)  ; LAB_00572689
    LEA EAX,[EBX + 0x14d11c]            ; 00572551
        ;   Label: LAB_00572551
    CMP EAX,EDI                         ; 00572557
    JZ 0x0057256b                       ; 00572559
        ;   XREF to: 0057256b (CONDITIONAL_JUMP)  ; LAB_0057256b
    MOV EDX,dword ptr [EDI]             ; 0057255b
    MOV dword ptr [EAX],EDX             ; 0057255d
    MOV EDX,dword ptr [EDI + 0x4]       ; 0057255f
    MOV dword ptr [EAX + 0x4],EDX       ; 00572562
    MOV EDX,dword ptr [EDI + 0x8]       ; 00572565
    MOV dword ptr [EAX + 0x8],EDX       ; 00572568
    LEA EAX,[EBX + 0x15f6d8]            ; 0057256b
        ;   Label: LAB_0057256b
    PUSH EAX                            ; 00572571
    LEA EBP,[EBX + 0x15f6cc]            ; 00572572
    PUSH EBP                            ; 00572578
    PUSH EDI                            ; 00572579
    PUSH ESI                            ; 0057257a
    PUSH 0x3277d14                      ; 0057257b | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70 ; 00572580
        ;   XREF to: 00495b70 (UNCONDITIONAL_CALL)  ; float core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70(CDemonRaytrace * this_ptr, CVector3f * ray_start, CVector3f * ray_end, CVector3f * out_intersection_point, ...)
    MOV dword ptr [ESP + 0x38],EAX      ; 00572585
    FLD float ptr [ESP + 0x38]          ; 00572589
    LEA EAX,[EBX + 0x14d128]            ; 0057258d
    FSTP float ptr [EBX + 0x15f6c8]     ; 00572593
    ADD ESP,0x14                        ; 00572599
    CMP EAX,EBP                         ; 0057259c
    JZ 0x005725b1                       ; 0057259e
        ;   XREF to: 005725b1 (CONDITIONAL_JUMP)  ; LAB_005725b1
    MOV EDX,dword ptr [EBP]             ; 005725a0
    MOV dword ptr [EAX],EDX             ; 005725a3
    MOV EDX,dword ptr [EBP + 0x4]       ; 005725a5
    MOV dword ptr [EAX + 0x4],EDX       ; 005725a8
    MOV EDX,dword ptr [EBP + 0x8]       ; 005725ab
    MOV dword ptr [EAX + 0x8],EDX       ; 005725ae
    FLD float ptr [EBX + 0x15f6c8]      ; 005725b1
        ;   Label: LAB_005725b1
    MOV EAX,dword ptr [EBX + 0x15f6d8]  ; 005725b7
    FLDZ                                ; 005725bd
    MOV dword ptr [EBX + 0x14d134],EAX  ; 005725bf
    FCOMPP                              ; 005725c5
    FNSTSW AX                           ; 005725c7
    SAHF                                ; 005725c9
    JBE 0x005725d6                      ; 005725ca
        ;   XREF to: 005725d6 (CONDITIONAL_JUMP)  ; LAB_005725d6
    MOV dword ptr [EBX + 0x15f6c8],0x3f8147ae ; 005725cc
    PUSH dword ptr [EBX + 0x15f6c8]     ; 005725d6
        ;   Label: LAB_005725d6
    PUSH EDI                            ; 005725dc
    PUSH ESI                            ; 005725dd
    PUSH 0xbf800000                     ; 005725de
    PUSH EBX                            ; 005725e3
    CALL core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10 ; 005725e4
        ;   XREF to: 00572a10 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10(CDemonSet * this_ptr, float min_t, CVector3f * ray_origin, CVector3f * ray_target, ...)
    MOV dword ptr [ESP + 0x38],EAX      ; 005725e9
    MOV EAX,dword ptr [ESP + 0x38]      ; 005725ed
    MOV dword ptr [EBX + 0x15f6c4],EAX  ; 005725f1
    ADD ESP,0x14                        ; 005725f7
    FLD float ptr [EBX + 0x15f6c4]      ; 005725fa
    FLD1                                ; 00572600
    FCOMPP                              ; 00572602
    FNSTSW AX                           ; 00572604
    SAHF                                ; 00572606
    JC 0x0057267b                       ; 00572607
        ;   XREF to: 0057267b (CONDITIONAL_JUMP)  ; LAB_0057267b
    FLD float ptr [EDI]                 ; 00572609
    FSUB float ptr [ESI]                ; 0057260b
    FSTP float ptr [ESP + 0xc]          ; 0057260d
    FLD float ptr [EDI + 0x4]           ; 00572611
    FSUB float ptr [ESI + 0x4]          ; 00572614
    LEA EAX,[EBX + 0x15f6c4]            ; 00572617
    FSTP float ptr [ESP + 0x10]         ; 0057261d
    FLD float ptr [EDI + 0x8]           ; 00572621
    FSUB float ptr [ESI + 0x8]          ; 00572624
    FLD float ptr [ESP + 0xc]           ; 00572627
    FXCH                                ; 0057262b
    FSTP float ptr [ESP + 0x14]         ; 0057262d
    FMUL float ptr [EAX]                ; 00572631
    FLD float ptr [ESP + 0x10]          ; 00572633
    FXCH                                ; 00572637
    FSTP float ptr [ESP]                ; 00572639
    FMUL float ptr [EAX]                ; 0057263c
    FLD float ptr [ESP + 0x14]          ; 0057263e
    FXCH                                ; 00572642
    FSTP float ptr [ESP + 0x4]          ; 00572644
    FMUL float ptr [EAX]                ; 00572648
    FSTP float ptr [ESP + 0x8]          ; 0057264a
    FLD float ptr [ESI]                 ; 0057264e
    FADD float ptr [ESP]                ; 00572650
    FSTP float ptr [ESP + 0x18]         ; 00572653
    FLD float ptr [ESI + 0x4]           ; 00572657
    FADD float ptr [ESP + 0x4]          ; 0057265a
    LEA EAX,[ESP + 0x18]                ; 0057265e
    FSTP float ptr [ESP + 0x1c]         ; 00572662
    FLD float ptr [ESI + 0x8]           ; 00572666
    FADD float ptr [ESP + 0x8]          ; 00572669
    LEA ESI,[EBX + 0x14d138]            ; 0057266d
    FSTP float ptr [ESP + 0x20]         ; 00572673
    CMP ESI,EAX                         ; 00572677
    JNZ 0x0057269e                      ; 00572679
        ;   XREF to: 0057269e (CONDITIONAL_JUMP)  ; LAB_0057269e
    MOV EAX,dword ptr [EBX + 0x15f6c4]  ; 0057267b
        ;   Label: LAB_0057267b
    ADD ESP,0x28                        ; 00572681
    POP EBP                             ; 00572684
    POP EDI                             ; 00572685
    POP ESI                             ; 00572686
    POP EBX                             ; 00572687
    RET                                 ; 00572688
    MOV EDX,dword ptr [ESI]             ; 00572689
        ;   Label: LAB_00572689
    MOV dword ptr [EAX],EDX             ; 0057268b
    MOV EDX,dword ptr [ESI + 0x4]       ; 0057268d
    MOV dword ptr [EAX + 0x4],EDX       ; 00572690
    MOV EDX,dword ptr [ESI + 0x8]       ; 00572693
    MOV dword ptr [EAX + 0x8],EDX       ; 00572696
    JMP 0x00572551                      ; 00572699
        ;   XREF to: 00572551 (UNCONDITIONAL_JUMP)  ; LAB_00572551
    MOV EAX,dword ptr [ESP + 0x18]      ; 0057269e
        ;   Label: LAB_0057269e
    MOV dword ptr [ESI],EAX             ; 005726a2
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005726a4
    MOV dword ptr [ESI + 0x4],EAX       ; 005726a8
    MOV EAX,dword ptr [ESP + 0x20]      ; 005726ab
    MOV dword ptr [ESI + 0x8],EAX       ; 005726af
    MOV EAX,dword ptr [EBX + 0x15f6c4]  ; 005726b2
    ADD ESP,0x28                        ; 005726b8
    POP EBP                             ; 005726bb
    POP EDI                             ; 005726bc
    POP ESI                             ; 005726bd
    POP EBX                             ; 005726be
    RET                                 ; 005726bf


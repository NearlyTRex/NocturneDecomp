; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl core_setcolid_cpp_CDemonSet_rayVoxelHeightQuery_FUN_00572340(CDemonSet *this_ptr,CVector3f *position)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_sound.cpp_updateListeners_FUN_005b1870 at 005b1e4f
;
; Referenced Globals:
;   float g_RayOffsetForStart = -1
;   float g_RayOffsetForEnd = 150
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
;   core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572340
        ;   Label: core_setcolid.cpp_CDemonSet_rayVoxelHeightQuery_FUN_00572340
    PUSH EBP                            ; 00572341
    MOV EBP,ESP                         ; 00572342
    SUB ESP,0x24                        ; 00572344
    AND ESP,0xfffffff8                  ; 00572347
    MOV EBX,dword ptr [EBP + 0xc]       ; 0057234a
    MOV EDX,dword ptr [EBP + 0x10]      ; 0057234d
    LEA EAX,[ESP + 0x10]                ; 00572350
    CMP EAX,EDX                         ; 00572354
    JNZ 0x0057243f                      ; 00572356
        ;   XREF to: 0057243f (CONDITIONAL_JUMP)  ; LAB_0057243f
    LEA EAX,[ESP + 0x4]                 ; 0057235c
        ;   Label: LAB_0057235c
    CMP EAX,EDX                         ; 00572360
    JZ 0x00572378                       ; 00572362
        ;   XREF to: 00572378 (CONDITIONAL_JUMP)  ; LAB_00572378
    MOV EAX,dword ptr [EDX]             ; 00572364
    MOV dword ptr [ESP + 0x4],EAX       ; 00572366
    MOV EAX,dword ptr [EDX + 0x4]       ; 0057236a
    MOV dword ptr [ESP + 0x8],EAX       ; 0057236d
    MOV EAX,dword ptr [EDX + 0x8]       ; 00572371
    MOV dword ptr [ESP + 0xc],EAX       ; 00572374
    LEA EAX,[EBX + 0x14d134]            ; 00572378
        ;   Label: LAB_00572378
    FLD float ptr [ESP + 0x14]          ; 0057237e
    PUSH EAX                            ; 00572382
    LEA EAX,[EBX + 0x14d128]            ; 00572383
    FLD float ptr [ESP + 0xc]           ; 00572389
    PUSH EAX                            ; 0057238d
    LEA EAX,[ESP + 0xc]                 ; 0057238e
    FXCH                                ; 00572392
    FADD float ptr [0x0064624e]         ; 00572394 | g_RayOffsetForStart
    PUSH EAX                            ; 0057239a
    LEA EAX,[ESP + 0x1c]                ; 0057239b
    FXCH                                ; 0057239f
    FADD float ptr [0x00646252]         ; 005723a1 | g_RayOffsetForEnd
    PUSH EAX                            ; 005723a7
    FXCH                                ; 005723a8
    FSTP float ptr [ESP + 0x24]         ; 005723aa
    PUSH 0x3277d14                      ; 005723ae | g_CDemonRaytraceInstance
    FSTP float ptr [ESP + 0x1c]         ; 005723b3
    CALL core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70 ; 005723b7
        ;   XREF to: 00495b70 (UNCONDITIONAL_CALL)  ; float core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70(CDemonRaytrace * this_ptr, CVector3f * ray_start, CVector3f * ray_end, CVector3f * out_intersection_point, ...)
    MOV dword ptr [ESP + 0x34],EAX      ; 005723bc
    FLD float ptr [ESP + 0x34]          ; 005723c0
    ADD ESP,0x14                        ; 005723c4
    FST float ptr [ESP]                 ; 005723c7
    FLDZ                                ; 005723ca
    FCOMPP                              ; 005723cc
    FNSTSW AX                           ; 005723ce
    SAHF                                ; 005723d0
    JBE 0x005723da                      ; 005723d1
        ;   XREF to: 005723da (CONDITIONAL_JUMP)  ; LAB_005723da
    MOV dword ptr [ESP],0x3f8147ae      ; 005723d3
    FLD float ptr [ESP]                 ; 005723da
        ;   Label: LAB_005723da
    FLD1                                ; 005723dd
    FCOMPP                              ; 005723df
    FNSTSW AX                           ; 005723e1
    SAHF                                ; 005723e3
    JBE 0x005723fb                      ; 005723e4
        ;   XREF to: 005723fb (CONDITIONAL_JUMP)  ; LAB_005723fb
    CMP dword ptr [EBX + 0x14d134],0x0  ; 005723e6
    JNZ 0x005723fb                      ; 005723ed
        ;   XREF to: 005723fb (CONDITIONAL_JUMP)  ; LAB_005723fb
    MOV EAX,dword ptr [EBX + 0x15f67c]  ; 005723ef
    MOV dword ptr [EBX + 0x14d134],EAX  ; 005723f5
    LEA EAX,[ESP + 0x4]                 ; 005723fb
        ;   Label: LAB_005723fb
    PUSH dword ptr [ESP]                ; 005723ff
    PUSH EAX                            ; 00572402
    LEA EAX,[ESP + 0x18]                ; 00572403
    PUSH EAX                            ; 00572407
    PUSH 0xbf800000                     ; 00572408
    PUSH EBX                            ; 0057240d
    CALL core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10 ; 0057240e
        ;   XREF to: 00572a10 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10(CDemonSet * this_ptr, float min_t, CVector3f * ray_origin, CVector3f * ray_target, ...)
    MOV dword ptr [ESP + 0x34],EAX      ; 00572413
    FLD float ptr [ESP + 0x34]          ; 00572417
    ADD ESP,0x14                        ; 0057241b
    FLD float ptr [ESP + 0x8]           ; 0057241e
    FSUB float ptr [ESP + 0x14]         ; 00572422
    FXCH                                ; 00572426
    FSTP float ptr [ESP]                ; 00572428
    FMUL float ptr [ESP]                ; 0057242b
    FADD float ptr [ESP + 0x14]         ; 0057242e
    FSTP float ptr [ESP + 0x1c]         ; 00572432
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00572436
    MOV ESP,EBP                         ; 0057243a
    POP EBP                             ; 0057243c
    POP EBX                             ; 0057243d
    RET                                 ; 0057243e
    MOV EAX,dword ptr [EDX]             ; 0057243f
        ;   Label: LAB_0057243f
    MOV dword ptr [ESP + 0x10],EAX      ; 00572441
    MOV EAX,dword ptr [EDX + 0x4]       ; 00572445
    MOV dword ptr [ESP + 0x14],EAX      ; 00572448
    MOV EAX,dword ptr [EDX + 0x8]       ; 0057244c
    MOV dword ptr [ESP + 0x18],EAX      ; 0057244f
    JMP 0x0057235c                      ; 00572453
        ;   XREF to: 0057235c (UNCONDITIONAL_JUMP)  ; LAB_0057235c


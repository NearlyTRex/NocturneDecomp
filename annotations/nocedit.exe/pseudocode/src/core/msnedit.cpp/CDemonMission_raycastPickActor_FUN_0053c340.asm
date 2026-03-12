; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_msnedit_cpp_CDemonMission_raycastPickActor_FUN_0053c340(CDemonMission *this_ptr,int screen_x,int screen_y)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   screen_x
; int              Stack[0xc]:4   screen_y
; Local Variables:
; CBoundingBox3D   Stack[-0x64]:24  local_64
; CVector3f        Stack[-0x4c]:12  local_4c
; CVector3f        Stack[-0x40]:12  CStack_40
; CVector3f        Stack[-0x34]:12  CStack_34
; CVector3f        Stack[-0x28]:12  local_28
; float            Stack[-0x1c]:4  fStack_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 0053a3e1
;
; Referenced Globals:
;   TerminatedCString s_CBarrier_0063c862
;   double DOUBLE_0063c86c = 1000
;   int g_DisableMouseHitOnBarrier
;   CDemonCamera g_CDemonCameraInstance
;   undefined4 DAT_032758e8
;   undefined4 g_CDemonCameraInstance.base.position+4
;   undefined4 g_CDemonCameraInstance.base.position+8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
;   core_dcamera.cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053c340
        ;   Label: core_msnedit.cpp_CDemonMission_raycastPickActor_FUN_0053c340
    PUSH ESI                            ; 0053c341
    PUSH EDI                            ; 0053c342
    PUSH EBP                            ; 0053c343
    MOV EBP,ESP                         ; 0053c344
    SUB ESP,0x60                        ; 0053c346
    AND ESP,0xfffffff8                  ; 0053c349
    MOV ESI,dword ptr [EBP + 0x14]      ; 0053c34c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0053c34f
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0053c352
    CMP EBX,dword ptr [ESI + 0x14]      ; 0053c355
    JLE 0x0053c36f                      ; 0053c358
        ;   XREF to: 0053c36f (CONDITIONAL_JUMP)  ; LAB_0053c36f
    CMP EDX,dword ptr [ESI + 0x18]      ; 0053c35a
    JLE 0x0053c36f                      ; 0053c35d
        ;   XREF to: 0053c36f (CONDITIONAL_JUMP)  ; LAB_0053c36f
    MOV EAX,dword ptr [ESI + 0x1c]      ; 0053c35f
    DEC EAX                             ; 0053c362
    CMP EBX,EAX                         ; 0053c363
    JGE 0x0053c36f                      ; 0053c365
        ;   XREF to: 0053c36f (CONDITIONAL_JUMP)  ; LAB_0053c36f
    MOV EAX,dword ptr [ESI + 0x20]      ; 0053c367
    DEC EAX                             ; 0053c36a
    CMP EDX,EAX                         ; 0053c36b
    JL 0x0053c378                       ; 0053c36d
        ;   XREF to: 0053c378 (CONDITIONAL_JUMP)  ; LAB_0053c378
    XOR EAX,EAX                         ; 0053c36f
        ;   Label: LAB_0053c36f
    MOV ESP,EBP                         ; 0053c371
    POP EBP                             ; 0053c373
    POP EDI                             ; 0053c374
    POP ESI                             ; 0053c375
    POP EBX                             ; 0053c376
    RET                                 ; 0053c377
    MOV EAX,[0x032758e8]                ; 0053c378 | DAT_032758e8
        ;   Label: LAB_0053c378
    MOV dword ptr [ESP + 0x48],EAX      ; 0053c37d
    MOV EAX,0x32758e8                   ; 0053c381 | DAT_032758e8
    MOV EAX,dword ptr [EAX + 0x4]       ; 0053c386 | g_CDemonCameraInstance.base.position+4
    MOV dword ptr [ESP + 0x4c],EAX      ; 0053c389
    MOV EAX,0x32758e8                   ; 0053c38d | DAT_032758e8
    PUSH EDX                            ; 0053c392
    MOV EAX,dword ptr [EAX + 0x8]       ; 0053c393 | g_CDemonCameraInstance.base.position+8
    PUSH EBX                            ; 0053c396
    MOV dword ptr [ESP + 0x58],EAX      ; 0053c397
    LEA EAX,[ESP + 0x2c]                ; 0053c39b
    PUSH EAX                            ; 0053c39f
    PUSH 0x32758e4                      ; 0053c3a0 | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480 ; 0053c3a5
        ;   XREF to: 0044d480 (UNCONDITIONAL_CALL)  ; CVector3f * core_dcamera.cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480(CDemonCamera * this_ptr, CVector3f * output_ptr, int screen_x, int screen_y)
    ADD ESP,0x10                        ; 0053c3aa
    FLD float ptr [ESP + 0x28]          ; 0053c3ad
    FMUL ST0                            ; 0053c3b1
    FLD float ptr [ESP + 0x24]          ; 0053c3b3
    FMUL ST0                            ; 0053c3b7
    FADDP                               ; 0053c3b9
    FLD float ptr [ESP + 0x2c]          ; 0053c3bb
    FMUL ST0                            ; 0053c3bf
    FADDP                               ; 0053c3c1
    FSQRT                               ; 0053c3c3
    FDIVR double ptr [0x0063c86c]       ; 0053c3c5 | DOUBLE_0063c86c
    FLD float ptr [ESP + 0x24]          ; 0053c3cb
    FXCH                                ; 0053c3cf
    FSTP float ptr [ESP + 0x58]         ; 0053c3d1
    FMUL float ptr [ESP + 0x58]         ; 0053c3d5
    FLD float ptr [ESP + 0x28]          ; 0053c3d9
    FMUL float ptr [ESP + 0x58]         ; 0053c3dd
    FLD float ptr [ESP + 0x2c]          ; 0053c3e1
    FMUL float ptr [ESP + 0x58]         ; 0053c3e5
    XOR EDI,EDI                         ; 0053c3e9
    MOV EAX,0x3f8147ae                  ; 0053c3eb
    FXCH ST2                            ; 0053c3f0
    FSTP float ptr [ESP + 0x24]         ; 0053c3f2
    FSTP float ptr [ESP + 0x28]         ; 0053c3f6
    FSTP float ptr [ESP + 0x2c]         ; 0053c3fa
    MOV EBX,dword ptr [ESI + 0x548]     ; 0053c3fe
    MOV dword ptr [ESP + 0x5c],EAX      ; 0053c404
    TEST EBX,EBX                        ; 0053c408
    JZ 0x0053c41d                       ; 0053c40a
        ;   XREF to: 0053c41d (CONDITIONAL_JUMP)  ; LAB_0053c41d
    MOV EDX,dword ptr [ESI]             ; 0053c40c
        ;   Label: LAB_0053c40c
    CMP EDX,dword ptr [EBX + 0x2c]      ; 0053c40e
    JZ 0x0053c426                       ; 0053c411
        ;   XREF to: 0053c426 (CONDITIONAL_JUMP)  ; LAB_0053c426
    MOV EBX,dword ptr [EBX + 0x14c]     ; 0053c413
        ;   Label: LAB_0053c413
    TEST EBX,EBX                        ; 0053c419
    JNZ 0x0053c40c                      ; 0053c41b
        ;   XREF to: 0053c40c (CONDITIONAL_JUMP)  ; LAB_0053c40c
    MOV EAX,EDI                         ; 0053c41d
        ;   Label: LAB_0053c41d
    MOV ESP,EBP                         ; 0053c41f
    POP EBP                             ; 0053c421
    POP EDI                             ; 0053c422
    POP ESI                             ; 0053c423
    POP EBX                             ; 0053c424
    RET                                 ; 0053c425
    CMP dword ptr [EBX + 0x148],0x0     ; 0053c426
        ;   Label: LAB_0053c426
    JNZ 0x0053c413                      ; 0053c42d
        ;   XREF to: 0053c413 (CONDITIONAL_JUMP)  ; LAB_0053c413
    CMP dword ptr [0x02f7a020],0x0      ; 0053c42f | g_DisableMouseHitOnBarrier
    JZ 0x0053c44a                       ; 0053c436
        ;   XREF to: 0053c44a (CONDITIONAL_JUMP)  ; LAB_0053c44a
    PUSH 0x63c862                       ; 0053c438 | = "CBarrier"
    PUSH EBX                            ; 0053c43d
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 0053c43e
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0053c443
    TEST EAX,EAX                        ; 0053c446
    JNZ 0x0053c413                      ; 0053c448
        ;   XREF to: 0053c413 (CONDITIONAL_JUMP)  ; LAB_0053c413
    LEA EAX,[ESP + 0xc]                 ; 0053c44a
        ;   Label: LAB_0053c44a
    PUSH EAX                            ; 0053c44e
    MOV EDX,dword ptr [EBX + 0x154]     ; 0053c44f
    PUSH EBX                            ; 0053c455
    CALL dword ptr [EDX + 0x14]         ; 0053c456
    ADD ESP,0x8                         ; 0053c459
    LEA EAX,[ESP + 0x48]                ; 0053c45c
    PUSH EAX                            ; 0053c460
    LEA EAX,[ESP + 0x34]                ; 0053c461
    PUSH EAX                            ; 0053c465
    PUSH EBX                            ; 0053c466
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 0053c467
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 0053c46c
    LEA EAX,[ESP + 0x24]                ; 0053c46f
    PUSH EAX                            ; 0053c473
    LEA EAX,[ESP + 0x40]                ; 0053c474
    PUSH EAX                            ; 0053c478
    PUSH EBX                            ; 0053c479
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0 ; 0053c47a
        ;   XREF to: 00408ea0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    ADD ESP,0xc                         ; 0053c47f
    PUSH 0x0                            ; 0053c482
    LEA EAX,[ESP + 0x40]                ; 0053c484
    PUSH EAX                            ; 0053c488
    LEA EAX,[ESP + 0x38]                ; 0053c489
    PUSH EAX                            ; 0053c48d
    LEA EAX,[ESP + 0x18]                ; 0053c48e
    PUSH EAX                            ; 0053c492
    CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940 ; 0053c493
        ;   XREF to: 00420940 (UNCONDITIONAL_CALL)  ; float core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940(CBoundingBox3D * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_normal)
    MOV dword ptr [ESP + 0x64],EAX      ; 0053c498
    FLD float ptr [ESP + 0x64]          ; 0053c49c
    ADD ESP,0x10                        ; 0053c4a0
    FLDZ                                ; 0053c4a3
    FXCH                                ; 0053c4a5
    FST float ptr [ESP + 0x8]           ; 0053c4a7
    FSTP double ptr [ESP]               ; 0053c4ab
    FCOMP double ptr [ESP]              ; 0053c4ae
    FNSTSW AX                           ; 0053c4b1
    SAHF                                ; 0053c4b3
    JNC 0x0053c413                      ; 0053c4b4
        ;   XREF to: 0053c413 (CONDITIONAL_JUMP)  ; LAB_0053c413
    FLD float ptr [ESP + 0x8]           ; 0053c4ba
    FCOMP float ptr [ESP + 0x5c]        ; 0053c4be
    FNSTSW AX                           ; 0053c4c2
    SAHF                                ; 0053c4c4
    JA 0x0053c413                       ; 0053c4c5
        ;   XREF to: 0053c413 (CONDITIONAL_JUMP)  ; LAB_0053c413
    FLD1                                ; 0053c4cb
    FCOMP double ptr [ESP]              ; 0053c4cd
    FNSTSW AX                           ; 0053c4d0
    SAHF                                ; 0053c4d2
    JC 0x0053c413                       ; 0053c4d3
        ;   XREF to: 0053c413 (CONDITIONAL_JUMP)  ; LAB_0053c413
    MOV EAX,dword ptr [ESP + 0x8]       ; 0053c4d9
    MOV EDI,EBX                         ; 0053c4dd
    MOV dword ptr [ESP + 0x5c],EAX      ; 0053c4df
    JMP 0x0053c413                      ; 0053c4e3
        ;   XREF to: 0053c413 (UNCONDITIONAL_JUMP)  ; LAB_0053c413


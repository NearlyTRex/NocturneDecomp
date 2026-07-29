; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_platfrm_cpp_FUN_004f7360(CPlatform *this_ptr,CDemonActor *actor)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; Local Variables:
; undefined4       Stack[-0x88]:4  local_88
;
; XREF[1]:
;   core_platfrm.cpp_FUN_004f6170 at 004f6a0e
;
; Referenced Globals:
;   double DOUBLE_0058d965 = 0.0100000000000000
;   float FLOAT_0058d96d = -1
;
; Called Functions:
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_00453990
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7360
        ;   Label: core_platfrm.cpp_FUN_004f7360
    PUSH ESI                            ; 004f7361
    PUSH EDI                            ; 004f7362
    PUSH EBP                            ; 004f7363
    MOV EBP,ESP                         ; 004f7364
    SUB ESP,0x7c                        ; 004f7366
    AND ESP,0xfffffff8                  ; 004f7369
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f736c
    MOV ESI,dword ptr [EBP + 0x18]      ; 004f736f
    TEST ESI,ESI                        ; 004f7372
    JNZ 0x004f737f                      ; 004f7374
        ;   XREF to: 004f737f (CONDITIONAL_JUMP)  ; LAB_004f737f
    XOR EAX,EAX                         ; 004f7376
        ;   Label: LAB_004f7376
    MOV ESP,EBP                         ; 004f7378
    POP EBP                             ; 004f737a
    POP EDI                             ; 004f737b
    POP ESI                             ; 004f737c
    POP EBX                             ; 004f737d
    RET                                 ; 004f737e
    LEA EAX,[ESP + 0x8]                 ; 004f737f
        ;   Label: LAB_004f737f
    PUSH EAX                            ; 004f7383
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990 ; 004f7384
        ;   XREF to: 00511990 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 004f7389
    LEA EAX,[ESP + 0x8]                 ; 004f738c
    XOR EDX,EDX                         ; 004f7390
    PUSH EAX                            ; 004f7392
    MOV dword ptr [ESP + 0xc],EDX       ; 004f7393
    PUSH ESI                            ; 004f7397
    MOV EDX,dword ptr [ESI + 0x14c]     ; 004f7398
    CALL dword ptr [EDX + 0x34]         ; 004f739e
    ADD ESP,0x8                         ; 004f73a1
    CMP EAX,0x2                         ; 004f73a4
    JNZ 0x004f7376                      ; 004f73a7
        ;   XREF to: 004f7376 (CONDITIONAL_JUMP)  ; LAB_004f7376
    PUSH dword ptr [EBX + 0x30]         ; 004f73a9
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004f73ac
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0x7c],EAX      ; 004f73b1
    FLD float ptr [ESP + 0x7c]          ; 004f73b5
    ADD ESP,0x4                         ; 004f73b9
    PUSH dword ptr [EBX + 0x38]         ; 004f73bc
    FSTP float ptr [EBX + 0x30]         ; 004f73bf
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004f73c2
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    FLD float ptr [EBX + 0x30]          ; 004f73c7
    MOV dword ptr [ESP + 0x7c],EAX      ; 004f73ca
    FABS                                ; 004f73ce
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004f73d0
    MOV dword ptr [EBX + 0x38],EAX      ; 004f73d4
    ADD ESP,0x4                         ; 004f73d7
    FCOMP double ptr [0x0058d965]       ; 004f73da | DOUBLE_0058d965
    FNSTSW AX                           ; 004f73e0
    SAHF                                ; 004f73e2
    JA 0x004f7376                       ; 004f73e3
        ;   XREF to: 004f7376 (CONDITIONAL_JUMP)  ; LAB_004f7376
    FLD float ptr [EBX + 0x38]          ; 004f73e5
    FABS                                ; 004f73e8
    FCOMP double ptr [0x0058d965]       ; 004f73ea | DOUBLE_0058d965
    FNSTSW AX                           ; 004f73f0
    SAHF                                ; 004f73f2
    JA 0x004f7376                       ; 004f73f3
        ;   XREF to: 004f7376 (CONDITIONAL_JUMP)  ; LAB_004f7376
    LEA EAX,[ESP + 0x30]                ; 004f73f5
    PUSH EAX                            ; 004f73f9
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004f73fa
    PUSH EBX                            ; 004f7400
    CALL dword ptr [EDX + 0x14]         ; 004f7401
    ADD ESP,0x8                         ; 004f7404
    ADD ESI,0x20                        ; 004f7407
    PUSH ESI                            ; 004f740a
    LEA EAX,[ESP + 0x70]                ; 004f740b
    PUSH EAX                            ; 004f740f
    PUSH EBX                            ; 004f7410
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 004f7411
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 004f7416
    FLD float ptr [ESP + 0x6c]          ; 004f7419
    FADD float ptr [ESP + 0x24]         ; 004f741d
    FCOMP float ptr [ESP + 0x30]        ; 004f7421
    FNSTSW AX                           ; 004f7425
    SAHF                                ; 004f7427
    JC 0x004f7376                       ; 004f7428
        ;   XREF to: 004f7376 (CONDITIONAL_JUMP)  ; LAB_004f7376
    FLD float ptr [ESP + 0x6c]          ; 004f742e
    FSUB float ptr [ESP + 0x24]         ; 004f7432
    FCOMP float ptr [ESP + 0x3c]        ; 004f7436
    FNSTSW AX                           ; 004f743a
    SAHF                                ; 004f743c
    JA 0x004f7376                       ; 004f743d
        ;   XREF to: 004f7376 (CONDITIONAL_JUMP)  ; LAB_004f7376
    FLD float ptr [ESP + 0x74]          ; 004f7443
    FADD float ptr [ESP + 0x24]         ; 004f7447
    FCOMP float ptr [ESP + 0x38]        ; 004f744b
    FNSTSW AX                           ; 004f744f
    SAHF                                ; 004f7451
    JC 0x004f7376                       ; 004f7452
        ;   XREF to: 004f7376 (CONDITIONAL_JUMP)  ; LAB_004f7376
    FLD float ptr [ESP + 0x74]          ; 004f7458
    FSUB float ptr [ESP + 0x24]         ; 004f745c
    FCOMP float ptr [ESP + 0x44]        ; 004f7460
    FNSTSW AX                           ; 004f7464
    SAHF                                ; 004f7466
    JA 0x004f7376                       ; 004f7467
        ;   XREF to: 004f7376 (CONDITIONAL_JUMP)  ; LAB_004f7376
    FLD float ptr [ESP + 0x70]          ; 004f746d
    FADD float ptr [ESP + 0x20]         ; 004f7471
    FCOMP float ptr [ESP + 0x34]        ; 004f7475
    FNSTSW AX                           ; 004f7479
    SAHF                                ; 004f747b
    JC 0x004f7376                       ; 004f747c
        ;   XREF to: 004f7376 (CONDITIONAL_JUMP)  ; LAB_004f7376
    FLD float ptr [ESP + 0x70]          ; 004f7482
    FADD float ptr [ESP + 0x1c]         ; 004f7486
    FCOMP float ptr [ESP + 0x40]        ; 004f748a
    FNSTSW AX                           ; 004f748e
    SAHF                                ; 004f7490
    JA 0x004f7376                       ; 004f7491
        ;   XREF to: 004f7376 (CONDITIONAL_JUMP)  ; LAB_004f7376
    LEA EAX,[EBX + 0x150]               ; 004f7497
    PUSH EAX                            ; 004f749d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004f749e
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV ECX,dword ptr [EAX + 0x358]     ; 004f74a3
    ADD ESP,0x4                         ; 004f74a9
    TEST ECX,ECX                        ; 004f74ac
    JNZ 0x004f74bc                      ; 004f74ae
        ;   XREF to: 004f74bc (CONDITIONAL_JUMP)  ; LAB_004f74bc
    MOV EAX,0x1                         ; 004f74b0
        ;   Label: LAB_004f74b0
    MOV ESP,EBP                         ; 004f74b5
    POP EBP                             ; 004f74b7
    POP EDI                             ; 004f74b8
    POP ESI                             ; 004f74b9
    POP EBX                             ; 004f74ba
    RET                                 ; 004f74bb
    FLD float ptr [ESP + 0x20]          ; 004f74bc
        ;   Label: LAB_004f74bc
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004f74c0
    MOV EDI,0x3f800000                  ; 004f74c4
    MOV dword ptr [ESP + 0x48],EAX      ; 004f74c9
    MOV EAX,dword ptr [ESP + 0x70]      ; 004f74cd
    ADD EBX,0x150                       ; 004f74d1
    MOV dword ptr [ESP + 0x4c],EAX      ; 004f74d7
    MOV EAX,dword ptr [ESP + 0x74]      ; 004f74db
    XOR ESI,ESI                         ; 004f74df
    MOV dword ptr [ESP + 0x50],EAX      ; 004f74e1
    LEA EAX,[ESP + 0x54]                ; 004f74e5
    MOV dword ptr [ESP + 0x60],ESI      ; 004f74e9
    PUSH EAX                            ; 004f74ed
    LEA EAX,[ESP + 0x64]                ; 004f74ee
    MOV dword ptr [ESP + 0x68],EDI      ; 004f74f2
    PUSH EAX                            ; 004f74f6
    LEA EAX,[ESP + 0x50]                ; 004f74f7
    MOV dword ptr [ESP + 0x70],ESI      ; 004f74fb
    PUSH EAX                            ; 004f74ff
    FADD float ptr [0x0058d96d]         ; 004f7500 | FLOAT_0058d96d
    PUSH ESI                            ; 004f7506
    FADD float ptr [ESP + 0x5c]         ; 004f7507
    PUSH EBX                            ; 004f750b
    FSTP float ptr [ESP + 0x60]         ; 004f750c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004f7510
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f7515
    PUSH EAX                            ; 004f7518
    CALL core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_00453990 ; 004f7519
        ;   XREF to: 00453990 (UNCONDITIONAL_CALL)  ; float core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_00453990(CKeyFramedModel * this_ptr, int frame_index, CVector3f * ray_origin, CVector3f * ray_direction, ...)
    MOV dword ptr [ESP + 0x8c],EAX      ; 004f751e
    FLD float ptr [ESP + 0x8c]          ; 004f7525
    ADD ESP,0x14                        ; 004f752c
    FLDZ                                ; 004f752f
    FXCH                                ; 004f7531
    FSTP double ptr [ESP]               ; 004f7533
    FCOMP double ptr [ESP]              ; 004f7536
    FNSTSW AX                           ; 004f7539
    SAHF                                ; 004f753b
    JA 0x004f7376                       ; 004f753c
        ;   XREF to: 004f7376 (CONDITIONAL_JUMP)  ; LAB_004f7376
    FLD1                                ; 004f7542
    FCOMP double ptr [ESP]              ; 004f7544
    FNSTSW AX                           ; 004f7547
    SAHF                                ; 004f7549
    JNC 0x004f74b0                      ; 004f754a
        ;   XREF to: 004f74b0 (CONDITIONAL_JUMP)  ; LAB_004f74b0
    XOR EAX,EAX                         ; 004f7550
    MOV ESP,EBP                         ; 004f7552
    POP EBP                             ; 004f7554
    POP EDI                             ; 004f7555
    POP ESI                             ; 004f7556
    POP EBX                             ; 004f7557
    RET                                 ; 004f7558


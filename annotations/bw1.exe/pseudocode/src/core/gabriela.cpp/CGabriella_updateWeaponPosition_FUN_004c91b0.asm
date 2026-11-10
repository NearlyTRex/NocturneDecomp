; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004c91b0(CGabriella *this_ptr,float delta_time)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0x3e0]:1  local_3e0
; undefined        Stack[-0x3b0]:1  local_3b0
; undefined        Stack[-0x380]:1  local_380
; undefined        Stack[-0x350]:1  local_350
; undefined        Stack[-0x320]:1  local_320
; undefined        Stack[-0x2f0]:1  local_2f0
; undefined        Stack[-0x2c0]:1  local_2c0
; undefined        Stack[-0x290]:1  local_290
; undefined        Stack[-0x260]:1  local_260
; undefined        Stack[-0x230]:1  local_230
; undefined        Stack[-0x200]:1  local_200
; undefined        Stack[-0x1d0]:1  local_1d0
; undefined        Stack[-0x1a0]:1  local_1a0
; undefined        Stack[-0x170]:1  local_170
; undefined        Stack[-0x140]:1  local_140
; undefined        Stack[-0x110]:1  local_110
; undefined        Stack[-0xe0]:1  local_e0
; undefined        Stack[-0xb0]:1  local_b0
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_process_FUN_004c65f0 at 004c6de6
;
; Referenced Globals:
;   undefined4 s_CCrossbow_005e10e3+1
;   undefined4 DAT_00600d54
;   undefined4 DAT_01cc9130
;   undefined4 DAT_01cc914c
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_actor.cpp_isOfClass_FUN_0040c550
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_004328f0
;   core_xform.cpp_buildRotationX_FUN_005b6d90
;   core_xform.cpp_buildRotationY_FUN_005b6e10
;   core_xform.cpp_FUN_005b5760
;   core_xform.cpp_FUN_005b6270
;   core_xform.cpp_matrixToEulerAngles_FUN_005b5930
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c91b0
        ;   Label: core_gabriela.cpp_CGabriella_updateWeaponPosition_FUN_004c91b0
    PUSH ESI                            ; 004c91b1
    PUSH EDI                            ; 004c91b2
    PUSH EBP                            ; 004c91b3
    MOV EBP,ESP                         ; 004c91b4
    SUB ESP,0x3d0                       ; 004c91b6
    SUB EBP,0x82                        ; 004c91bc
    MOV EBX,dword ptr [EBP + 0x96]      ; 004c91c2
    PUSH dword ptr [EBP + 0x9a]         ; 004c91c8
    PUSH EBX                            ; 004c91ce
    CALL core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_004328f0 ; 004c91cf
        ;   XREF to: 004328f0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_004328f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004c91d4
    LEA EAX,[EBX + 0x30]                ; 004c91d7
    PUSH EAX                            ; 004c91da
    LEA EAX,[EBX + 0x20]                ; 004c91db
    PUSH EAX                            ; 004c91de
    LEA EAX,[EBP + 0xfffffd12]          ; 004c91df
    PUSH EAX                            ; 004c91e5
    LEA ESI,[EBX + 0xfd8]               ; 004c91e6
    CALL core_xform.cpp_FUN_005b5760    ; 004c91ec
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    FLD float ptr [EBX + 0x1ffb4]       ; 004c91f1
    LEA EAX,[EBX + 0x1fae8]             ; 004c91f7
    ADD ESP,0xc                         ; 004c91fd
    MOV dword ptr [EBP + 0x7e],EAX      ; 004c9200
    FCOMP float ptr [0x00600d54]        ; 004c9203 | DAT_00600d54
    FNSTSW AX                           ; 004c9209
    SAHF                                ; 004c920b
    JC 0x004c9469                       ; 004c920c
        ;   XREF to: 004c9469 (CONDITIONAL_JUMP)  ; LAB_004c9469
    MOV EAX,dword ptr [EBP + 0x7e]      ; 004c9212
    PUSH 0x2                            ; 004c9215
    MOV EAX,dword ptr [EAX + 0x338]     ; 004c9217
    PUSH EAX                            ; 004c921d
    MOV EDX,dword ptr [EAX + 0x154]     ; 004c921e
    CALL dword ptr [EDX + 0xdc]         ; 004c9224
    ADD ESP,0x8                         ; 004c922a
    PUSH 0x2c8af28                      ; 004c922d | DAT_02c8af28
    PUSH 0x1cc90d4                      ; 004c9232
    LEA EAX,[EBP + 0xfffffd72]          ; 004c9237
    PUSH EAX                            ; 004c923d
    CALL core_xform.cpp_FUN_005b5760    ; 004c923e
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV EDX,dword ptr [0x01cc914c]      ; 004c9243 | DAT_01cc914c
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c9249
    SUB EAX,EDX                         ; 004c9250
    SHL EAX,0x4                         ; 004c9252
    ADD ESP,0xc                         ; 004c9255
    ADD EAX,ESI                         ; 004c9258
    PUSH EAX                            ; 004c925a
    LEA EAX,[EBP + 0xfffffd72]          ; 004c925b
    PUSH EAX                            ; 004c9261
    LEA ESI,[EBP + 0xffffff22]          ; 004c9262
    PUSH 0x3fc90fdb                     ; 004c9268
    LEA EDI,[EBP + 0xfffffe02]          ; 004c926d
    CALL core_xform.cpp_buildRotationX_FUN_005b6d90 ; 004c9273
        ;   XREF to: 005b6d90 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildRotationX_FUN_005b6d90()
    MOV ECX,0xc                         ; 004c9278
    ADD ESP,0x4                         ; 004c927d
    LEA EAX,[EBP + 0xfffffe02]          ; 004c9280
    LEA ESI,[EBP + 0xffffff22]          ; 004c9286
    PUSH EAX                            ; 004c928c
    MOVSD.REP ES:EDI,ESI                ; 004c928d
    PUSH 0x3fc90fdb                     ; 004c928f
    LEA ESI,[EBP + 0xfffffef2]          ; 004c9294
    LEA EDI,[EBP + 0xfffffdd2]          ; 004c929a
    CALL core_xform.cpp_buildRotationY_FUN_005b6e10 ; 004c92a0
        ;   XREF to: 005b6e10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildRotationY_FUN_005b6e10()
    MOV ECX,0xc                         ; 004c92a5
    LEA ESI,[EBP + 0xfffffef2]          ; 004c92aa
    LEA EAX,[EBP + 0xfffffdd2]          ; 004c92b0
    ADD ESP,0x4                         ; 004c92b6
    MOVSD.REP ES:EDI,ESI                ; 004c92b9
    PUSH EAX                            ; 004c92bb
    LEA ESI,[EBP + 0xfffffcb2]          ; 004c92bc
    LEA EDI,[EBP + 0xfffffe32]          ; 004c92c2
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 004c92c8
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 004c92cd
    LEA ESI,[EBP + 0xfffffcb2]          ; 004c92d2
    LEA EAX,[EBP + 0xfffffe32]          ; 004c92d8
    ADD ESP,0x8                         ; 004c92de
    MOVSD.REP ES:EDI,ESI                ; 004c92e1
    PUSH EAX                            ; 004c92e3
    LEA ESI,[EBP + 0xfffffce2]          ; 004c92e4
    LEA EDI,[EBP + 0xfffffe62]          ; 004c92ea
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 004c92f0
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 004c92f5
    LEA ESI,[EBP + 0xfffffce2]          ; 004c92fa
    LEA EAX,[EBP + 0xfffffe62]          ; 004c9300
    ADD ESP,0x8                         ; 004c9306
    MOVSD.REP ES:EDI,ESI                ; 004c9309
    PUSH EAX                            ; 004c930b
    LEA ESI,[EBP + -0x4e]               ; 004c930c
    LEA EDI,[EBP + 0xfffffda2]          ; 004c930f
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 004c9315
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 004c931a
    LEA ESI,[EBP + -0x4e]               ; 004c931f
    MOV EAX,dword ptr [EBP + 0x7e]      ; 004c9322
    ADD ESP,0x8                         ; 004c9325
    MOVSD.REP ES:EDI,ESI                ; 004c9328
    PUSH 0x5e10e4                       ; 004c932a | s_CCrossbow_005e10e3+1
    MOV EAX,dword ptr [EAX + 0x338]     ; 004c932f
    PUSH EAX                            ; 004c9335
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004c9336
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004c933b
    TEST EAX,EAX                        ; 004c933e
    JZ 0x004c93a5                       ; 004c9340
        ;   XREF to: 004c93a5 (CONDITIONAL_JUMP)  ; LAB_004c93a5
    LEA EAX,[EBP + 0xfffffda2]          ; 004c9342
    PUSH EAX                            ; 004c9348
    LEA ESI,[EBP + 0x5a]                ; 004c9349
    LEA EDI,[EBP + 0x2a]                ; 004c934c
    CALL core_xform.cpp_FUN_005b6270    ; 004c934f
        ;   XREF to: 005b6270 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b6270()
    LEA ESI,[EBP + 0x5a]                ; 004c9354
    LEA EAX,[EBP + 0xfffffda2]          ; 004c9357
    ADD ESP,0x4                         ; 004c935d
    MOVSD ES:EDI,ESI                    ; 004c9360
    MOVSD ES:EDI,ESI                    ; 004c9361
    MOVSD ES:EDI,ESI                    ; 004c9362
    PUSH EAX                            ; 004c9363
    LEA ESI,[EBP + 0x36]                ; 004c9364
    LEA EDI,[EBP + 0x42]                ; 004c9367
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005b5930 ; 004c936a
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_005b5930()
    LEA ESI,[EBP + 0x36]                ; 004c936f
    LEA EAX,[EBP + 0x42]                ; 004c9372
    ADD ESP,0x4                         ; 004c9375
    MOVSD ES:EDI,ESI                    ; 004c9378
    MOVSD ES:EDI,ESI                    ; 004c9379
    MOVSD ES:EDI,ESI                    ; 004c937a
    PUSH EAX                            ; 004c937b
    FLD float ptr [EBX + 0x1ffe8]       ; 004c937c
    FLD1                                ; 004c9382
    LEA EAX,[EBP + 0x2a]                ; 004c9384
    FSUBRP                              ; 004c9387
    PUSH EAX                            ; 004c9389
    FLD float ptr [EBP + 0x4a]          ; 004c938a
    LEA EAX,[EBP + 0xfffffda2]          ; 004c938d
    FXCH                                ; 004c9393
    FMUL ST1                            ; 004c9395
    PUSH EAX                            ; 004c9397
    FSTP ST1                            ; 004c9398
    FSTP float ptr [EBP + 0x4a]         ; 004c939a
    CALL core_xform.cpp_FUN_005b5760    ; 004c939d
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 004c93a2
    LEA EAX,[EBP + 0xfffffd12]          ; 004c93a5
        ;   Label: LAB_004c93a5
    PUSH EAX                            ; 004c93ab
    LEA EAX,[EBP + 0xfffffda2]          ; 004c93ac
    PUSH EAX                            ; 004c93b2
    LEA ESI,[EBP + 0xffffff52]          ; 004c93b3
    LEA EDI,[EBP + 0xfffffd42]          ; 004c93b9
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 004c93bf
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 004c93c4
    LEA ESI,[EBP + 0xffffff52]          ; 004c93c9
    ADD ESP,0x8                         ; 004c93cf
        ;   Label: LAB_004c93cf
    MOVSD.REP ES:EDI,ESI                ; 004c93d2
    LEA EAX,[EBP + 0xfffffd42]          ; 004c93d4
    PUSH EAX                            ; 004c93da
    LEA ESI,[EBP + 0x1e]                ; 004c93db
    LEA EDI,[EBP + 0x4e]                ; 004c93de
    CALL core_xform.cpp_FUN_005b6270    ; 004c93e1
        ;   XREF to: 005b6270 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b6270()
    LEA ESI,[EBP + 0x1e]                ; 004c93e6
    LEA EAX,[EBX + 0x1fae8]             ; 004c93e9
    MOVSD ES:EDI,ESI                    ; 004c93ef
    MOVSD ES:EDI,ESI                    ; 004c93f0
    MOVSD ES:EDI,ESI                    ; 004c93f1
    MOV EDX,dword ptr [EAX + 0x338]     ; 004c93f2
    MOV dword ptr [EBP + 0x7a],EAX      ; 004c93f8
    MOV EAX,dword ptr [EBP + 0x4e]      ; 004c93fb
    MOV dword ptr [EDX + 0x20],EAX      ; 004c93fe
    MOV EAX,dword ptr [EBP + 0x52]      ; 004c9401
    MOV dword ptr [EDX + 0x24],EAX      ; 004c9404
    MOV EAX,dword ptr [EBP + 0x56]      ; 004c9407
    ADD ESP,0x4                         ; 004c940a
    MOV dword ptr [EDX + 0x28],EAX      ; 004c940d
    LEA EAX,[EBP + 0xfffffd42]          ; 004c9410
    PUSH EAX                            ; 004c9416
    LEA ESI,[EBP + 0x66]                ; 004c9417
    LEA EDI,[EBP + 0x12]                ; 004c941a
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005b5930 ; 004c941d
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_005b5930()
    LEA ESI,[EBP + 0x66]                ; 004c9422
    MOV EDX,dword ptr [EBP + 0x7a]      ; 004c9425
    MOVSD ES:EDI,ESI                    ; 004c9428
    MOVSD ES:EDI,ESI                    ; 004c9429
    MOVSD ES:EDI,ESI                    ; 004c942a
    MOV EDX,dword ptr [EDX + 0x338]     ; 004c942b
    LEA EAX,[EBP + 0x12]                ; 004c9431
    ADD EDX,0x30                        ; 004c9434
    ADD ESP,0x4                         ; 004c9437
    CMP EDX,EAX                         ; 004c943a
    JZ 0x004c944f                       ; 004c943c
        ;   XREF to: 004c944f (CONDITIONAL_JUMP)  ; LAB_004c944f
    MOV EAX,dword ptr [EBP + 0x12]      ; 004c943e
    MOV dword ptr [EDX],EAX             ; 004c9441
    MOV EAX,dword ptr [EBP + 0x16]      ; 004c9443
    MOV dword ptr [EDX + 0x4],EAX       ; 004c9446
    MOV EAX,dword ptr [EBP + 0x1a]      ; 004c9449
    MOV dword ptr [EDX + 0x8],EAX       ; 004c944c
    MOV EAX,dword ptr [EBX + 0x1fe20]   ; 004c944f
        ;   Label: LAB_004c944f
    PUSH EAX                            ; 004c9455
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 004c9456
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c945b
    LEA ESP,[EBP + 0x82]                ; 004c945e
    POP EBP                             ; 004c9464
    POP EDI                             ; 004c9465
    POP ESI                             ; 004c9466
    POP EBX                             ; 004c9467
    RET                                 ; 004c9468
    MOV EAX,dword ptr [EBP + 0x7e]      ; 004c9469
        ;   Label: LAB_004c9469
    PUSH 0x1                            ; 004c946c
    MOV EAX,dword ptr [EAX + 0x338]     ; 004c946e
    PUSH EAX                            ; 004c9474
    MOV EDX,dword ptr [EAX + 0x154]     ; 004c9475
    CALL dword ptr [EDX + 0xdc]         ; 004c947b
    ADD ESP,0x8                         ; 004c9481
    PUSH 0x1cc90ec                      ; 004c9484
    PUSH 0x1cc90e0                      ; 004c9489
    LEA EAX,[EBP + 0xfffffe92]          ; 004c948e
    PUSH EAX                            ; 004c9494
    CALL core_xform.cpp_FUN_005b5760    ; 004c9495
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 004c949a
    LEA EAX,[EBP + 0xfffffd12]          ; 004c949d
    MOV EDX,dword ptr [0x01cc9130]      ; 004c94a3 | DAT_01cc9130
    PUSH EAX                            ; 004c94a9
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c94aa
    SUB EAX,EDX                         ; 004c94b1
    SHL EAX,0x4                         ; 004c94b3
    ADD EAX,ESI                         ; 004c94b6
    PUSH EAX                            ; 004c94b8
    LEA EAX,[EBP + 0xfffffe92]          ; 004c94b9
    PUSH EAX                            ; 004c94bf
    LEA ESI,[EBP + -0x7e]               ; 004c94c0
    LEA EDI,[EBP + 0xfffffec2]          ; 004c94c3
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 004c94c9
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 004c94ce
    LEA ESI,[EBP + -0x7e]               ; 004c94d3
    LEA EAX,[EBP + 0xfffffec2]          ; 004c94d6
    ADD ESP,0x8                         ; 004c94dc
    MOVSD.REP ES:EDI,ESI                ; 004c94df
    PUSH EAX                            ; 004c94e1
    LEA ESI,[EBP + -0x1e]               ; 004c94e2
    LEA EDI,[EBP + 0xfffffd42]          ; 004c94e5
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 004c94eb
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 004c94f0
    LEA ESI,[EBP + -0x1e]               ; 004c94f5
    JMP 0x004c93cf                      ; 004c94f8
        ;   XREF to: 004c93cf (UNCONDITIONAL_JUMP)  ; LAB_004c93cf


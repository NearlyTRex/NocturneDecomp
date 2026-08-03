; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_ladder_cpp_CLadder_getBoundingBox_FUN_004c43f0(CLadder *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   double DOUBLE_0058773c = 0.5
;   double DOUBLE_00587744 = 0.100000000000000
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c43f0
        ;   Label: core_ladder.cpp_CLadder_getBoundingBox_FUN_004c43f0
    PUSH ESI                            ; 004c43f1
    SUB ESP,0x18                        ; 004c43f2
    MOV EBX,dword ptr [ESP + 0x24]      ; 004c43f5
    MOV ESI,dword ptr [ESP + 0x28]      ; 004c43f9
    LEA EAX,[EBX + 0x150]               ; 004c43fd
    PUSH EAX                            ; 004c4403
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004c4404
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x110]     ; 004c4409
    ADD ESP,0x4                         ; 004c440f
    CMP EDX,0x1                         ; 004c4412
    JGE 0x004c449f                      ; 004c4415
        ;   XREF to: 004c449f (CONDITIONAL_JUMP)  ; LAB_004c449f
    FLD float ptr [EBX + 0x2cc]         ; 004c441b
    MOV ECX,0xbdcccccd                  ; 004c4421
    FCHS                                ; 004c4426
    FLD double ptr [0x0058773c]         ; 004c4428 | DOUBLE_0058773c
    FXCH                                ; 004c442e
    FMUL ST1                            ; 004c4430
    MOV dword ptr [ESP + 0x4],ECX       ; 004c4432
    FSTP float ptr [ESP]                ; 004c4436
    FLD float ptr [EBX + 0x2d4]         ; 004c4439
    FCHS                                ; 004c443f
    FMUL ST1                            ; 004c4441
    FSTP float ptr [ESP + 0x8]          ; 004c4443
    FLD float ptr [EBX + 0x2cc]         ; 004c4447
    FMUL ST1                            ; 004c444d
    FSTP float ptr [ESP + 0xc]          ; 004c444f
    FLD float ptr [EBX + 0x2d0]         ; 004c4453
    FADD double ptr [0x00587744]        ; 004c4459 | DOUBLE_00587744
    FSTP float ptr [ESP + 0x10]         ; 004c445f
    FMUL float ptr [EBX + 0x2d4]        ; 004c4463
    MOV EAX,dword ptr [ESP]             ; 004c4469
    FSTP float ptr [ESP + 0x14]         ; 004c446c
    MOV dword ptr [ESI],EAX             ; 004c4470
    LEA EBX,[ESI + 0x4]                 ; 004c4472
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c4475
    MOV dword ptr [EBX],EAX             ; 004c4479
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c447b
    MOV dword ptr [EBX + 0x4],EAX       ; 004c447f
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c4482
    MOV dword ptr [EBX + 0x8],EAX       ; 004c4486
    MOV EAX,dword ptr [ESP + 0x10]      ; 004c4489
    MOV dword ptr [EBX + 0xc],EAX       ; 004c448d
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c4490
    MOV dword ptr [EBX + 0x10],EAX      ; 004c4494
    MOV EAX,ESI                         ; 004c4497
    ADD ESP,0x18                        ; 004c4499
    POP ESI                             ; 004c449c
    POP EBX                             ; 004c449d
    RET                                 ; 004c449e
    ADD EBX,0x150                       ; 004c449f
        ;   Label: LAB_004c449f
    PUSH EBX                            ; 004c44a5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004c44a6
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x338]     ; 004c44ab
    ADD EAX,0x338                       ; 004c44b1
    MOV dword ptr [ESI],EDX             ; 004c44b6
    LEA EDX,[EAX + 0x4]                 ; 004c44b8
    LEA EBX,[ESI + 0x4]                 ; 004c44bb
    MOV EDX,dword ptr [EDX]             ; 004c44be
    MOV dword ptr [EBX],EDX             ; 004c44c0
    LEA EDX,[EAX + 0x8]                 ; 004c44c2
    MOV EDX,dword ptr [EDX]             ; 004c44c5
    MOV dword ptr [EBX + 0x4],EDX       ; 004c44c7
    MOV EDX,dword ptr [EAX + 0xc]       ; 004c44ca
    ADD EAX,0xc                         ; 004c44cd
    MOV dword ptr [EBX + 0x8],EDX       ; 004c44d0
    LEA EDX,[EAX + 0x4]                 ; 004c44d3
    MOV EDX,dword ptr [EDX]             ; 004c44d6
    MOV dword ptr [EBX + 0xc],EDX       ; 004c44d8
    MOV EAX,dword ptr [EAX + 0x8]       ; 004c44db
    ADD ESP,0x4                         ; 004c44de
    MOV dword ptr [EBX + 0x10],EAX      ; 004c44e1
    MOV EAX,ESI                         ; 004c44e4
    ADD ESP,0x18                        ; 004c44e6
    POP ESI                             ; 004c44e9
    POP EBX                             ; 004c44ea
    RET                                 ; 004c44eb


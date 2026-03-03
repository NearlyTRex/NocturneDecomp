; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CBoxActor_FUN_00422390(CBoxActor *this_ptr,CVector3f *param_2,CVector3f *param_3)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   param_2
; CVector3f *      Stack[0xc]:4   param_3
; Local Variables:
; undefined1       Stack[-0x60]:1  local_60
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[2]:
;   core_gabriela.cpp_CGabriella_process_FUN_004d2ea0 at 004d35e4
;   core_stranger.cpp_CStranger_processFrame_FUN_005bb960 at 005bc4cc
;
; Referenced Globals:
;   double DOUBLE_00616797 = 1.01000000000000
;
; Called Functions:
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
;   core_boxactor.cpp_CBoxActor_FUN_004218d0
;   core_boxactor.cpp_CBoxActor_FUN_00422590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422390
        ;   Label: core_boxactor.cpp_CBoxActor_FUN_00422390
    PUSH ESI                            ; 00422391
    PUSH EBP                            ; 00422392
    MOV EBP,ESP                         ; 00422393
    SUB ESP,0x58                        ; 00422395
    AND ESP,0xfffffff8                  ; 00422398
    MOV EBX,dword ptr [EBP + 0x10]      ; 0042239b
    MOV ESI,dword ptr [EBP + 0x18]      ; 0042239e
    MOV EDX,dword ptr [EBP + 0x14]      ; 004223a1
    PUSH EDX                            ; 004223a4
    LEA EAX,[ESP + 0x24]                ; 004223a5
    PUSH EAX                            ; 004223a9
    PUSH EBX                            ; 004223aa
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004223ab
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 004223b0
    PUSH ESI                            ; 004223b3
    LEA EAX,[ESP + 0x48]                ; 004223b4
    PUSH EAX                            ; 004223b8
    PUSH EBX                            ; 004223b9
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0 ; 004223ba
        ;   XREF to: 00408ea0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    ADD ESP,0xc                         ; 004223bf
    FLD float ptr [ESP + 0x48]          ; 004223c2
    FMUL float ptr [ESP + 0x24]         ; 004223c6
    FLD float ptr [ESP + 0x44]          ; 004223ca
    FMUL float ptr [ESP + 0x20]         ; 004223ce
    FADDP                               ; 004223d2
    FLD float ptr [ESP + 0x4c]          ; 004223d4
    FMUL float ptr [ESP + 0x28]         ; 004223d8
    FADDP                               ; 004223dc
    FLDZ                                ; 004223de
    FCOMPP                              ; 004223e0
    FNSTSW AX                           ; 004223e2
    SAHF                                ; 004223e4
    JA 0x004223ed                       ; 004223e5
        ;   XREF to: 004223ed (CONDITIONAL_JUMP)  ; LAB_004223ed
    MOV ESP,EBP                         ; 004223e7
        ;   Label: LAB_004223e7
    POP EBP                             ; 004223e9
    POP ESI                             ; 004223ea
    POP EBX                             ; 004223eb
    RET                                 ; 004223ec
    LEA EAX,[ESP + 0x8]                 ; 004223ed
        ;   Label: LAB_004223ed
    PUSH EAX                            ; 004223f1
    MOV EDX,dword ptr [EBX + 0x154]     ; 004223f2
    PUSH EBX                            ; 004223f8
    CALL dword ptr [EDX + 0x14]         ; 004223f9
    ADD ESP,0x8                         ; 004223fc
    LEA EAX,[ESP + 0x2c]                ; 004223ff
    PUSH EAX                            ; 00422403
    LEA EAX,[ESP + 0x48]                ; 00422404
    PUSH EAX                            ; 00422408
    LEA EAX,[ESP + 0x28]                ; 00422409
    PUSH EAX                            ; 0042240d
    LEA EAX,[ESP + 0x14]                ; 0042240e
    PUSH EAX                            ; 00422412
    CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940 ; 00422413
        ;   XREF to: 00420940 (UNCONDITIONAL_CALL)  ; float core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940(CBoundingBox3D * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_normal)
    MOV dword ptr [ESP + 0x64],EAX      ; 00422418
    FLD float ptr [ESP + 0x64]          ; 0042241c
    ADD ESP,0x10                        ; 00422420
    FLDZ                                ; 00422423
    FXCH                                ; 00422425
    FSTP double ptr [ESP]               ; 00422427
    FCOMP double ptr [ESP]              ; 0042242a
    FNSTSW AX                           ; 0042242d
    SAHF                                ; 0042242f
    JA 0x004223e7                       ; 00422430
        ;   XREF to: 004223e7 (CONDITIONAL_JUMP)  ; LAB_004223e7
    FLD1                                ; 00422432
    FCOMP double ptr [ESP]              ; 00422434
    FNSTSW AX                           ; 00422437
    SAHF                                ; 00422439
    JBE 0x004223e7                      ; 0042243a
        ;   XREF to: 004223e7 (CONDITIONAL_JUMP)  ; LAB_004223e7
    FLD double ptr [0x00616797]         ; 0042243c | DOUBLE_00616797
    FSUB double ptr [ESP]               ; 00422442
    FLD float ptr [ESI]                 ; 00422445
    FXCH                                ; 00422447
    FSTP float ptr [ESP + 0x50]         ; 00422449
    FMUL float ptr [ESP + 0x50]         ; 0042244d
    FSTP float ptr [ESP + 0x38]         ; 00422451
    FLD float ptr [ESI + 0x4]           ; 00422455
    FMUL float ptr [ESP + 0x50]         ; 00422458
    FSTP float ptr [ESP + 0x3c]         ; 0042245c
    FLD float ptr [ESI + 0x8]           ; 00422460
    FMUL float ptr [ESP + 0x50]         ; 00422463
    LEA EAX,[EBX + 0x20]                ; 00422467
    FSTP float ptr [ESP + 0x40]         ; 0042246a
    FLD float ptr [EAX]                 ; 0042246e
    FADD float ptr [ESP + 0x38]         ; 00422470
    FLD float ptr [EAX + 0x4]           ; 00422474
    FXCH                                ; 00422477
    FSTP float ptr [EAX]                ; 00422479
    FADD float ptr [ESP + 0x3c]         ; 0042247b
    FLD float ptr [EAX + 0x8]           ; 0042247f
    FXCH                                ; 00422482
    FSTP float ptr [EAX + 0x4]          ; 00422484
    FADD float ptr [ESP + 0x40]         ; 00422487
    PUSH EBX                            ; 0042248b
    FSTP float ptr [EAX + 0x8]          ; 0042248c
    CALL core_boxactor.cpp_CBoxActor_FUN_004218d0 ; 0042248f
        ;   XREF to: 004218d0 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_FUN_004218d0(CBoxActor * this_ptr)
    ADD ESP,0x4                         ; 00422494
    PUSH EBX                            ; 00422497
    CALL core_boxactor.cpp_CBoxActor_FUN_00422590 ; 00422498
        ;   XREF to: 00422590 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_FUN_00422590(CBoxActor * this_ptr)
    ADD ESP,0x4                         ; 0042249d
    MOV ESP,EBP                         ; 004224a0
    POP EBP                             ; 004224a2
    POP ESI                             ; 004224a3
    POP EBX                             ; 004224a4
    RET                                 ; 004224a5


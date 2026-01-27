; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_ghoul.cpp_FUN_004e82d0()
;
; Local Variables:
; undefined1       Stack[-0x94]:1  local_94
; undefined1       Stack[-0x88]:1  local_88
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined1       Stack[-0x4c]:1  local_4c
; undefined1       Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined1       Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   float FLOAT_0062de5a = 0.5
;   int INT_02d83300
;   int INT_02d83304
;   int INT_02d83308
;   int INT_02d8330c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e82d0
        ;   Label: core_ghoul.cpp_FUN_004e82d0
    PUSH EDI                            ; 004e82d1
    PUSH EBP                            ; 004e82d2
    SUB ESP,0x88                        ; 004e82d3
    MOV EDI,dword ptr [ESP + 0x9c]      ; 004e82d9
    MOV EBX,dword ptr [ESP + 0x98]      ; 004e82e0
    PUSH 0xb                            ; 004e82e7
    ADD EBX,0x158                       ; 004e82e9
    PUSH EBX                            ; 004e82ef
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 004e82f0
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x8c],EAX      ; 004e82f5
    FLD float ptr [ESP + 0x8c]          ; 004e82fc
    FLDZ                                ; 004e8303
    ADD ESP,0x8                         ; 004e8305
    FCOMPP                              ; 004e8308
    FNSTSW AX                           ; 004e830a
    SAHF                                ; 004e830c
    JC 0x004e831b                       ; 004e830d
        ;   XREF to: 004e831b (CONDITIONAL_JUMP)  ; LAB_004e831b
    XOR EAX,EAX                         ; 004e830f
    ADD ESP,0x88                        ; 004e8311
    POP EBP                             ; 004e8317
    POP EDI                             ; 004e8318
    POP EBX                             ; 004e8319
    RET                                 ; 004e831a
    PUSH ESI                            ; 004e831b
        ;   Label: LAB_004e831b
    MOV EDX,dword ptr [0x02d83300]      ; 004e831c | INT_02d83300
    PUSH EDX                            ; 004e8322
    LEA EAX,[ESP + 0x5c]                ; 004e8323
    PUSH EAX                            ; 004e8327
    PUSH EBX                            ; 004e8328
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004e8329
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004e832e
    MOV ECX,dword ptr [0x02d83308]      ; 004e8331 | INT_02d83308
    PUSH ECX                            ; 004e8337
    MOV ESI,EAX                         ; 004e8338
    LEA EAX,[ESP + 0x14]                ; 004e833a
    PUSH EAX                            ; 004e833e
    PUSH EBX                            ; 004e833f
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004e8340
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    FLD float ptr [EAX]                 ; 004e8345
    FADD float ptr [ESI]                ; 004e8347
    ADD ESP,0xc                         ; 004e8349
    FST float ptr [ESP + 0x64]          ; 004e834c
    FLD float ptr [EAX + 0x4]           ; 004e8350
    FADD float ptr [ESI + 0x4]          ; 004e8353
    FXCH                                ; 004e8356
    FMUL float ptr [0x0062de5a]         ; 004e8358 | FLOAT_0062de5a
    FXCH                                ; 004e835e
    FST float ptr [ESP + 0x68]          ; 004e8360
    FLD float ptr [EAX + 0x8]           ; 004e8364
    FADD float ptr [ESI + 0x8]          ; 004e8367
    FXCH                                ; 004e836a
    FMUL float ptr [0x0062de5a]         ; 004e836c | FLOAT_0062de5a
    FXCH                                ; 004e8372
    FST float ptr [ESP + 0x6c]          ; 004e8374
    FMUL float ptr [0x0062de5a]         ; 004e8378 | FLOAT_0062de5a
    MOV ESI,dword ptr [0x02d83304]      ; 004e837e | INT_02d83304
    LEA EAX,[ESP + 0x4]                 ; 004e8384
    PUSH ESI                            ; 004e8388
    FXCH ST2                            ; 004e8389
    FSTP float ptr [ESP + 0x44]         ; 004e838b
    PUSH EAX                            ; 004e838f
    FSTP float ptr [ESP + 0x4c]         ; 004e8390
    PUSH EBX                            ; 004e8394
    FSTP float ptr [ESP + 0x54]         ; 004e8395
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004e8399
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004e839e
    MOV EBP,dword ptr [0x02d8330c]      ; 004e83a1 | INT_02d8330c
    PUSH EBP                            ; 004e83a7
    MOV ESI,EAX                         ; 004e83a8
    LEA EAX,[ESP + 0x50]                ; 004e83aa
    PUSH EAX                            ; 004e83ae
    PUSH EBX                            ; 004e83af
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004e83b0
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    FLD float ptr [EAX]                 ; 004e83b5
    FADD float ptr [ESI]                ; 004e83b7
    ADD ESP,0xc                         ; 004e83b9
    FST float ptr [ESP + 0x1c]          ; 004e83bc
    FLD float ptr [EAX + 0x4]           ; 004e83c0
    FADD float ptr [ESI + 0x4]          ; 004e83c3
    FXCH                                ; 004e83c6
    FMUL float ptr [0x0062de5a]         ; 004e83c8 | FLOAT_0062de5a
    FXCH                                ; 004e83ce
    FST float ptr [ESP + 0x20]          ; 004e83d0
    FMUL float ptr [0x0062de5a]         ; 004e83d4 | FLOAT_0062de5a
    FLD float ptr [EAX + 0x8]           ; 004e83da
    FADD float ptr [ESI + 0x8]          ; 004e83dd
    FLD float ptr [ESP + 0x40]          ; 004e83e0
    FXCH                                ; 004e83e4
    FSTP float ptr [ESP + 0x24]         ; 004e83e6
    FXCH ST2                            ; 004e83ea
    FSTP float ptr [ESP + 0x34]         ; 004e83ec
    FLD float ptr [ESP + 0x24]          ; 004e83f0
    FXCH ST2                            ; 004e83f4
    FADD float ptr [ESP + 0x34]         ; 004e83f6
    FXCH ST2                            ; 004e83fa
    FMUL float ptr [0x0062de5a]         ; 004e83fc | FLOAT_0062de5a
    FXCH ST2                            ; 004e8402
    FST float ptr [ESP + 0x70]          ; 004e8404
    FMUL float ptr [0x0062de5a]         ; 004e8408 | FLOAT_0062de5a
    FLD float ptr [ESP + 0x44]          ; 004e840e
    FXCH ST2                            ; 004e8412
    FSTP float ptr [ESP + 0x38]         ; 004e8414
    FXCH                                ; 004e8418
    FADD float ptr [ESP + 0x38]         ; 004e841a
    LEA EAX,[ESP + 0x28]                ; 004e841e
    FST float ptr [ESP + 0x74]          ; 004e8422
    FMUL float ptr [0x0062de5a]         ; 004e8426 | FLOAT_0062de5a
    PUSH EAX                            ; 004e842c
    LEA EAX,[ESP + 0x80]                ; 004e842d
    FLD float ptr [ESP + 0x4c]          ; 004e8434
    PUSH EAX                            ; 004e8438
    FXCH ST3                            ; 004e8439
    FSTP float ptr [ESP + 0x44]         ; 004e843b
    FXCH ST2                            ; 004e843f
    FADD float ptr [ESP + 0x44]         ; 004e8441
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004e8445
    FST float ptr [ESP + 0x80]          ; 004e844c
    FMUL float ptr [0x0062de5a]         ; 004e8453 | FLOAT_0062de5a
    PUSH EAX                            ; 004e8459
    FXCH                                ; 004e845a
    FSTP float ptr [ESP + 0x34]         ; 004e845c
    FXCH                                ; 004e8460
    FSTP float ptr [ESP + 0x38]         ; 004e8462
    FSTP float ptr [ESP + 0x3c]         ; 004e8466
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004e846a
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004e846f
    CMP EDI,EAX                         ; 004e8472
    JZ 0x004e8486                       ; 004e8474
        ;   XREF to: 004e8486 (CONDITIONAL_JUMP)  ; LAB_004e8486
    MOV EDX,dword ptr [EAX]             ; 004e8476
    MOV dword ptr [EDI],EDX             ; 004e8478
    MOV EDX,dword ptr [EAX + 0x4]       ; 004e847a
    MOV dword ptr [EDI + 0x4],EDX       ; 004e847d
    MOV EDX,dword ptr [EAX + 0x8]       ; 004e8480
    MOV dword ptr [EDI + 0x8],EDX       ; 004e8483
    MOV EAX,0x1                         ; 004e8486
        ;   Label: LAB_004e8486
    POP ESI                             ; 004e848b
    ADD ESP,0x88                        ; 004e848c
    POP EBP                             ; 004e8492
    POP EDI                             ; 004e8493
    POP EBX                             ; 004e8494
    RET                                 ; 004e8495


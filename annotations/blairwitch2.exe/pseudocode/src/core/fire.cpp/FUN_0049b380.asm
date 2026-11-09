; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_FUN_0049b380(CTrail *this_ptr)
;
; Parameters:
; CTrail *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x80]:4  local_80
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
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_fire.cpp_FUN_0049c780 at 0049cab2
;
; Referenced Globals:
;   undefined4 DAT_005f64e4
;   undefined4 DAT_0060b280
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_00622034
;   undefined4 DAT_00622038
;   undefined4 DAT_0062203c
;   undefined4 DAT_0062205c
;   undefined4 DAT_00622060
;   undefined4 DAT_00622064
;   undefined4 DAT_00622068
;   undefined4 DAT_0062206c
;   undefined4 DAT_0062208c
;   undefined4 DAT_00622090
;   undefined4 DAT_00622094
;   ... and 8 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_drender.cpp_FUN_0046b8f0
;   engine_matrix.c_FUN_0046b670
;   engine_matrix.c_pop_FUN_0046b4a0
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049b380
        ;   Label: core_fire.cpp_FUN_0049b380
    PUSH EBP                            ; 0049b381
    SUB ESP,0x7c                        ; 0049b382
    MOV EBX,dword ptr [ESP + 0x88]      ; 0049b385
    FLD float ptr [EBX + 0x10]          ; 0049b38c
    FLDZ                                ; 0049b38f
    FCOMPP                              ; 0049b391
    FNSTSW AX                           ; 0049b393
    SAHF                                ; 0049b395
    JC 0x0049b39e                       ; 0049b396
        ;   XREF to: 0049b39e (CONDITIONAL_JUMP)  ; LAB_0049b39e
    ADD ESP,0x7c                        ; 0049b398
    POP EBP                             ; 0049b39b
    POP EBX                             ; 0049b39c
    RET                                 ; 0049b39d
    PUSH EDI                            ; 0049b39e
        ;   Label: LAB_0049b39e
    PUSH ESI                            ; 0049b39f
    MOV EDX,dword ptr [EBX + 0x20]      ; 0049b3a0
    PUSH EDX                            ; 0049b3a3
    MOV ECX,dword ptr [0x0060b280]      ; 0049b3a4 | DAT_0060b280
    PUSH ECX                            ; 0049b3aa | DAT_01ba5c50
    MOV ESI,0x4                         ; 0049b3ab
    MOV EBP,0x3                         ; 0049b3b0
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0049b3b5
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0049b3ba
    XOR EDI,EDI                         ; 0049b3bd
    MOV dword ptr [ESP + 0xc],ESI       ; 0049b3bf
    MOV dword ptr [ESP + 0x1c],EDI      ; 0049b3c3
    MOV dword ptr [ESP + 0x18],EDI      ; 0049b3c7
    MOV dword ptr [ESP + 0x14],EDI      ; 0049b3cb
    MOV dword ptr [ESP + 0x10],EDI      ; 0049b3cf
    MOV dword ptr [ESP + 0x20],EDI      ; 0049b3d3
    MOV dword ptr [ESP + 0x2c],EBP      ; 0049b3d7
    MOV ESI,0x1                         ; 0049b3db
    MOV EDI,0x2                         ; 0049b3e0
    MOV dword ptr [ESP + 0x24],ESI      ; 0049b3e5
    MOV dword ptr [ESP + 0x28],EDI      ; 0049b3e9
    MOV EAX,[0x0060b280]                ; 0049b3ed | DAT_0060b280
    PUSH dword ptr [EBX + 0x14]         ; 0049b3f2
    PUSH EAX                            ; 0049b3f5 | DAT_01ba5c50
    CALL engine_drender.cpp_FUN_0046b8f0 ; 0049b3f6
        ;   XREF to: 0046b8f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_FUN_0046b8f0(CDemonRenderer * this_ptr, float render_alpha)
    ADD ESP,0x8                         ; 0049b3fb
    PUSH ESI                            ; 0049b3fe
    MOV EDX,dword ptr [0x0060b280]      ; 0049b3ff | DAT_0060b280
    PUSH EDX                            ; 0049b405 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0049b406
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0049b40b
    PUSH EBX                            ; 0049b40e
    MOV ECX,dword ptr [0x0060b280]      ; 0049b40f | DAT_0060b280
    PUSH ECX                            ; 0049b415 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 0049b416
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0049b41b
    MOV ESI,dword ptr [0x0060b280]      ; 0049b41e | DAT_0060b280
    PUSH ESI                            ; 0049b424 | DAT_01ba5c50
    LEA ESI,[ESP + 0x4c]                ; 0049b425
    LEA EDI,[ESP + 0x58]                ; 0049b429
    CALL engine_matrix.c_FUN_0046b670   ; 0049b42d
        ;   XREF to: 0046b670 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046b670()
    ADD ESP,0x4                         ; 0049b432
    LEA ESI,[ESP + 0x48]                ; 0049b435
    LEA EAX,[ESP + 0x54]                ; 0049b439
    PUSH 0x0                            ; 0049b43d
    MOVSD ES:EDI,ESI                    ; 0049b43f
    MOVSD ES:EDI,ESI                    ; 0049b440
    MOVSD ES:EDI,ESI                    ; 0049b441
    PUSH EAX                            ; 0049b442
    MOV EDI,dword ptr [0x0060b280]      ; 0049b443 | DAT_0060b280
    PUSH EDI                            ; 0049b449 | DAT_01ba5c50
    XOR EBP,EBP                         ; 0049b44a
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0049b44c
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0049b451
    MOV dword ptr [ESP + 0x3c],EBP      ; 0049b454
    MOV dword ptr [ESP + 0x40],EBP      ; 0049b458
    MOV dword ptr [ESP + 0x44],EBP      ; 0049b45c
    FLD float ptr [EBX + 0xc]           ; 0049b460
    FMUL float ptr [EBX + 0x14]         ; 0049b463
    FSTP float ptr [ESP + 0x3c]         ; 0049b466
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0049b46a
    LEA EBX,[ESP + 0x60]                ; 0049b46e
    MOV dword ptr [ESP + 0x40],EAX      ; 0049b472
    LEA EAX,[ESP + 0x3c]                ; 0049b476
    MOV ESI,dword ptr [0x0060b280]      ; 0049b47a | DAT_0060b280
    FLD float ptr [EAX]                 ; 0049b480
    FMUL float ptr [0x005f64e4]         ; 0049b482 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049b488
    FLD float ptr [EAX + 0x4]           ; 0049b48a
    FMUL float ptr [0x005f64e4]         ; 0049b48d | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049b493
    FLD float ptr [EAX + 0x8]           ; 0049b496
    FMUL float ptr [0x005f64e4]         ; 0049b499 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049b49f
    LEA EAX,[ESP + 0x60]                ; 0049b4a2
    PUSH EAX                            ; 0049b4a6
    MOV EAX,dword ptr [ESI]             ; 0049b4a7 | DAT_01ba5c50
    PUSH EAX                            ; 0049b4a9
    CALL engine_special.cpp_FUN_0055d723 ; 0049b4aa
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049b4af
    MOV AH,byte ptr [ESP + 0x3f]        ; 0049b4b2
    XOR AH,0x80                         ; 0049b4b6
    MOV ESI,dword ptr [0x0060b280]      ; 0049b4b9 | DAT_0060b280
    MOV byte ptr [ESP + 0x3f],AH        ; 0049b4bf
    LEA EBX,[ESP + 0x6c]                ; 0049b4c3
    LEA EAX,[ESP + 0x3c]                ; 0049b4c7
    FLD float ptr [EAX]                 ; 0049b4cb
    FMUL float ptr [0x005f64e4]         ; 0049b4cd | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049b4d3
    FLD float ptr [EAX + 0x4]           ; 0049b4d5
    FMUL float ptr [0x005f64e4]         ; 0049b4d8 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049b4de
    FLD float ptr [EAX + 0x8]           ; 0049b4e1
    FMUL float ptr [0x005f64e4]         ; 0049b4e4 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049b4ea
    LEA EAX,[ESP + 0x6c]                ; 0049b4ed
    PUSH EAX                            ; 0049b4f1
    MOV EAX,dword ptr [ESI]             ; 0049b4f2 | DAT_01ba5c50
    ADD EAX,0x30                        ; 0049b4f4
    PUSH EAX                            ; 0049b4f7
    CALL engine_special.cpp_FUN_0055d723 ; 0049b4f8
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049b4fd
    LEA EBX,[ESP + 0x78]                ; 0049b500
    MOV DL,byte ptr [ESP + 0x43]        ; 0049b504
    LEA EAX,[ESP + 0x3c]                ; 0049b508
    XOR DL,0x80                         ; 0049b50c
    MOV ESI,dword ptr [0x0060b280]      ; 0049b50f | DAT_0060b280
    MOV byte ptr [ESP + 0x43],DL        ; 0049b515
    FLD float ptr [EAX]                 ; 0049b519
    FMUL float ptr [0x005f64e4]         ; 0049b51b | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049b521
    FLD float ptr [EAX + 0x4]           ; 0049b523
    FMUL float ptr [0x005f64e4]         ; 0049b526 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049b52c
    FLD float ptr [EAX + 0x8]           ; 0049b52f
    FMUL float ptr [0x005f64e4]         ; 0049b532 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049b538
    LEA EAX,[ESP + 0x78]                ; 0049b53b
    PUSH EAX                            ; 0049b53f
    MOV EAX,dword ptr [ESI]             ; 0049b540 | DAT_01ba5c50
    ADD EAX,0x60                        ; 0049b542
    PUSH EAX                            ; 0049b545
    CALL engine_special.cpp_FUN_0055d723 ; 0049b546
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049b54b
    LEA EBX,[ESP + 0x30]                ; 0049b54e
    MOV DH,byte ptr [ESP + 0x3f]        ; 0049b552
    LEA EAX,[ESP + 0x3c]                ; 0049b556
    XOR DH,0x80                         ; 0049b55a
    MOV ESI,dword ptr [0x0060b280]      ; 0049b55d | DAT_0060b280
    MOV byte ptr [ESP + 0x3f],DH        ; 0049b563
    FLD float ptr [EAX]                 ; 0049b567
    FMUL float ptr [0x005f64e4]         ; 0049b569 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049b56f
    FLD float ptr [EAX + 0x4]           ; 0049b571
    FMUL float ptr [0x005f64e4]         ; 0049b574 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049b57a
    FLD float ptr [EAX + 0x8]           ; 0049b57d
    FMUL float ptr [0x005f64e4]         ; 0049b580 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049b586
    LEA EAX,[ESP + 0x30]                ; 0049b589
    PUSH EAX                            ; 0049b58d
    MOV EAX,dword ptr [ESI]             ; 0049b58e | DAT_01ba5c50
    ADD EAX,0x90                        ; 0049b590
    PUSH EAX                            ; 0049b595
    CALL engine_special.cpp_FUN_0055d723 ; 0049b596
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0x80000                     ; 0049b59b
    MOV EBX,0xf80000                    ; 0049b5a0
    LEA EAX,[ESP + 0x10]                ; 0049b5a5
    MOV EDX,dword ptr [0x0060b280]      ; 0049b5a9 | DAT_0060b280
    ADD ESP,0x8                         ; 0049b5af
    MOV dword ptr [0x0062202c],ECX      ; 0049b5b2 | DAT_0062202c
    MOV dword ptr [0x00622030],EBX      ; 0049b5b8 | DAT_00622030
    MOV dword ptr [0x0062205c],EBX      ; 0049b5be | DAT_0062205c
    MOV dword ptr [0x00622060],EBX      ; 0049b5c4 | DAT_00622060
    MOV dword ptr [0x0062208c],EBX      ; 0049b5ca | DAT_0062208c
    MOV dword ptr [0x00622090],ECX      ; 0049b5d0 | DAT_00622090
    MOV dword ptr [0x006220bc],ECX      ; 0049b5d6 | DAT_006220bc
    PUSH EAX                            ; 0049b5dc
    MOV dword ptr [0x006220c0],ECX      ; 0049b5dd | DAT_006220c0
    MOV EBX,0xffff                      ; 0049b5e3
    PUSH EDX                            ; 0049b5e8 | DAT_01ba5c50
    MOV dword ptr [0x00622034],EBX      ; 0049b5e9 | DAT_00622034
    MOV dword ptr [0x00622038],EBX      ; 0049b5ef | DAT_00622038
    MOV dword ptr [0x0062203c],EBX      ; 0049b5f5 | DAT_0062203c
    MOV dword ptr [0x00622064],EBX      ; 0049b5fb | DAT_00622064
    MOV dword ptr [0x00622068],EBX      ; 0049b601 | DAT_00622068
    MOV dword ptr [0x0062206c],EBX      ; 0049b607 | DAT_0062206c
    MOV dword ptr [0x00622094],EBX      ; 0049b60d | DAT_00622094
    MOV dword ptr [0x00622098],EBX      ; 0049b613 | DAT_00622098
    MOV dword ptr [0x0062209c],EBX      ; 0049b619 | DAT_0062209c
    MOV dword ptr [0x006220c4],EBX      ; 0049b61f | DAT_006220c4
    MOV dword ptr [0x006220c8],EBX      ; 0049b625 | DAT_006220c8
    MOV dword ptr [0x006220cc],EBX      ; 0049b62b | DAT_006220cc
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50 ; 0049b631
        ;   XREF to: 0046ab50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0049b636
    MOV ECX,dword ptr [0x0060b280]      ; 0049b639 | DAT_0060b280
    PUSH ECX                            ; 0049b63f | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 0049b640
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0049b645
    PUSH EBP                            ; 0049b648
    MOV EBX,dword ptr [0x0060b280]      ; 0049b649 | DAT_0060b280
    PUSH EBX                            ; 0049b64f | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0049b650
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0049b655
    POP ESI                             ; 0049b658
    POP EDI                             ; 0049b659
    ADD ESP,0x7c                        ; 0049b65a
    POP EBP                             ; 0049b65d
    POP EBX                             ; 0049b65e
    RET                                 ; 0049b65f


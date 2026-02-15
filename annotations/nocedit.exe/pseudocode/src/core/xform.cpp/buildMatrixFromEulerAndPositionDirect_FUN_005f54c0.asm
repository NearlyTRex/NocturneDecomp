; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f *output_matrix,CVector3f *position,CVector3f *euler_angles)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   output_matrix
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   euler_angles
; Local Variables:
; undefined8       Stack[-0x34]:8  local_34
; undefined8       Stack[-0x2c]:8  local_2c
; undefined8       Stack[-0x24]:8  local_24
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
;
; XREF[35]:
;   core_bodypart.cpp_CBodyPart_FUN_0041a630 at 0041a9ba
;   core_boneguy.cpp_CBoneGuy_getCarryObjToBodyXForm_FUN_0041ca40 at 0041ca9b
;   core_boxactor.cpp_CLightActor_process_FUN_00422a50 at 00422be1
;   core_bugs.cpp_CBugs_FUN_00425fe0 at 004260cb
;   core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80 at 0042cede
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_0042d090 at 0042d181
;   core_fire.cpp_CBulletHole_init_FUN_004bf7f0 at 004bf917
;   core_gabriela.cpp_CGabriella_FUN_004d5550 at 004d5724
;   core_gabriela.cpp_CGabriella_getCarryObjToBodyXForm_FUN_004d7120 at 004d722f
;   core_hostage.cpp_CHostage_getCarryObjToBodyXForm_FUN_004f6550 at 004f6728
;   ... and 25 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f54c0
        ;   Label: core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
    SUB ESP,0x38                        ; 005f54c1
    MOV EDX,dword ptr [ESP + 0x40]      ; 005f54c4
    MOV ECX,dword ptr [ESP + 0x44]      ; 005f54c8
    MOV EBX,dword ptr [ESP + 0x48]      ; 005f54cc
    FLD float ptr [EBX]                 ; 005f54d0
    FLD ST0                             ; 005f54d2
    FSIN                                ; 005f54d4
    FXCH                                ; 005f54d6
    FCOS                                ; 005f54d8
    FLD float ptr [EBX + 0x8]           ; 005f54da
    FLD ST0                             ; 005f54dd
    FSIN                                ; 005f54df
    FXCH                                ; 005f54e1
    FCOS                                ; 005f54e3
    FLD float ptr [EBX + 0x4]           ; 005f54e5
    FLD ST0                             ; 005f54e8
    FSIN                                ; 005f54ea
    FXCH                                ; 005f54ec
    FCOS                                ; 005f54ee
    FXCH                                ; 005f54f0
    FST double ptr [ESP + 0x20]         ; 005f54f2
    FMUL ST5                            ; 005f54f6
    FLD double ptr [ESP + 0x20]         ; 005f54f8
    FXCH ST5                            ; 005f54fc
    FSTP double ptr [ESP + 0x8]         ; 005f54fe
    FXCH ST4                            ; 005f5502
    FMUL double ptr [ESP + 0x8]         ; 005f5504
    FXCH ST3                            ; 005f5508
    FST double ptr [ESP + 0x10]         ; 005f550a
    FMUL double ptr [ESP + 0x8]         ; 005f550e
    FXCH ST2                            ; 005f5512
    FST double ptr [ESP + 0x18]         ; 005f5514
    FMUL double ptr [ESP + 0x8]         ; 005f5518
    FXCH                                ; 005f551c
    FST double ptr [ESP + 0x28]         ; 005f551e
    FMUL ST5                            ; 005f5522
    FLD ST4                             ; 005f5524
    FMUL double ptr [ESP + 0x10]        ; 005f5526
    FXCH ST5                            ; 005f552a
    FMUL double ptr [ESP + 0x18]        ; 005f552c
    FXCH ST6                            ; 005f5530
    FCHS                                ; 005f5532
    FSTP float ptr [EDX + 0x18]         ; 005f5534
    FLD ST0                             ; 005f5537
    FMUL double ptr [ESP + 0x10]        ; 005f5539
    FXCH ST4                            ; 005f553d
    FSTP float ptr [EDX + 0x8]          ; 005f553f
    FMUL double ptr [ESP + 0x18]        ; 005f5542
    FXCH ST2                            ; 005f5546
    FSTP float ptr [EDX + 0x10]         ; 005f5548
    FLD double ptr [ESP + 0x28]         ; 005f554b
    FMUL double ptr [ESP + 0x18]        ; 005f554f
    FXCH                                ; 005f5553
    FSTP float ptr [EDX + 0x14]         ; 005f5555
    FLD double ptr [ESP + 0x10]         ; 005f5558
    FMUL double ptr [ESP + 0x20]        ; 005f555c
    FXCH                                ; 005f5560
    FADDP ST4,ST0                       ; 005f5562
    FLD double ptr [ESP + 0x28]         ; 005f5564
    FCHS                                ; 005f5568
    FMUL double ptr [ESP + 0x10]        ; 005f556a
    FLD double ptr [ESP + 0x20]         ; 005f556e
    FCHS                                ; 005f5572
    FMUL double ptr [ESP + 0x18]        ; 005f5574
    FXCH ST2                            ; 005f5578
    FADDP ST3,ST0                       ; 005f557a
    FLD double ptr [ESP + 0x28]         ; 005f557c
    FMUL double ptr [ESP + 0x8]         ; 005f5580
    FSTP float ptr [EDX + 0x28]         ; 005f5584
    FADDP ST5,ST0                       ; 005f5587
    FADDP ST2,ST0                       ; 005f5589
    FXCH ST2                            ; 005f558b
    FSTP float ptr [EDX]                ; 005f558d
    FXCH                                ; 005f558f
    FSTP float ptr [EDX + 0x24]         ; 005f5591
    FXCH                                ; 005f5594
    FSTP float ptr [EDX + 0x4]          ; 005f5596
    FSTP float ptr [EDX + 0x20]         ; 005f5599
    MOV EAX,dword ptr [ECX]             ; 005f559c
    MOV dword ptr [EDX + 0xc],EAX       ; 005f559e
    MOV EAX,dword ptr [ECX + 0x4]       ; 005f55a1
    MOV dword ptr [EDX + 0x1c],EAX      ; 005f55a4
    MOV EAX,dword ptr [ECX + 0x8]       ; 005f55a7
    MOV dword ptr [EDX + 0x2c],EAX      ; 005f55aa
    ADD ESP,0x38                        ; 005f55ad
    POP EBX                             ; 005f55b0
    RET                                 ; 005f55b1


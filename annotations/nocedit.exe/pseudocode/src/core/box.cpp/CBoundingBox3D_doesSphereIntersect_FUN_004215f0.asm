; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0(CBoundingBox3D * this_ptr, CVector3f * sphere_center, float radius)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   sphere_center
; float            Stack[0xc]:4   radius
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 at 0040a664
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_clampPoint_FUN_00421550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004215f0
        ;   Label: core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
    SUB ESP,0x1c                        ; 004215f1
    MOV EBX,dword ptr [ESP + 0x28]      ; 004215f4
    PUSH EBX                            ; 004215f8
    LEA EAX,[ESP + 0x4]                 ; 004215f9
    PUSH EAX                            ; 004215fd
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004215fe
    PUSH EDX                            ; 00421602
    CALL core_box.cpp_CBoundingBox3D_clampPoint_FUN_00421550 ; 00421603
        ;   XREF to: 00421550 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_clampPoint_FUN_00421550(CBoundingBox3D * this_ptr, CVector3f * out_point, CVector3f * in_point)
    ADD ESP,0xc                         ; 00421608
    FLD float ptr [ESP]                 ; 0042160b
    FSUB float ptr [EBX]                ; 0042160e
    FMUL ST0                            ; 00421610
    FLD float ptr [ESP + 0x4]           ; 00421612
    FSUB float ptr [EBX + 0x4]          ; 00421616
    FMUL ST0                            ; 00421619
    FLD float ptr [ESP + 0x8]           ; 0042161b
    FXCH                                ; 0042161f
    FADDP ST2,ST0                       ; 00421621
    FSUB float ptr [EBX + 0x8]          ; 00421623
    FMUL ST0                            ; 00421626
    FLD float ptr [ESP + 0x2c]          ; 00421628
    FLD ST0                             ; 0042162c
    FXCH ST2                            ; 0042162e
    FADDP ST3,ST0                       ; 00421630
    FMULP                               ; 00421632
    FXCH                                ; 00421634
    FCOMPP                              ; 00421636
    FNSTSW AX                           ; 00421638
    SAHF                                ; 0042163a
    SETBE AL                            ; 0042163b
    AND EAX,0xff                        ; 0042163e
    ADD ESP,0x1c                        ; 00421643
    POP EBX                             ; 00421646
    RET                                 ; 00421647


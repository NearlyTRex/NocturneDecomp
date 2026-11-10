; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_00591530(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[76]:
;   core_ammo.cpp_CAmmo_process_FUN_0040ded0 at 0040e042
;   core_baron.cpp_CBaron_performLightningAttack_FUN_00410170 at 0041047a
;   core_baron.cpp_CBaron_process_FUN_0040f950 at 0040fc9c
;   core_basicene.cpp_CBasicEnemy_processBurnState_FUN_005a0380 at 005a04f1
;   core_batcreat.cpp_CBatCreature_process_FUN_00411a10 at 00411db9
;   core_batman.cpp_CBatman_process_FUN_00412f40 at 004137ad
;   core_boneguy.cpp_CBoneGuy_getCarryObjToBodyXForm_FUN_004192a0 at 00419403
;   core_boneguy.cpp_CBoneGuy_process_FUN_004186c0 at 00418e3a
;   core_bride.cpp_CBride_getTargetPoint_FUN_0041ede0 at 0041ee35
;   core_bride.cpp_CBride_process_FUN_0041dbe0 at 0041e147
;   ... and 66 more
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00591530
        ;   Label: core_xform.cpp_FUN_00591530
    SUB ESP,0xc                         ; 00591531
    MOV EDX,dword ptr [ESP + 0x14]      ; 00591534
    MOV EAX,dword ptr [ESP + 0x18]      ; 00591538
    MOV ECX,ESI                         ; 0059153c
    FLD float ptr [EDX + 0x4]           ; 0059153e
    FMUL float ptr [EAX + 0x4]          ; 00591541
    FLD float ptr [EDX + 0x4]           ; 00591544
    FMUL float ptr [EAX + 0x14]         ; 00591547
    FLD float ptr [EDX + 0x4]           ; 0059154a
    FMUL float ptr [EAX + 0x24]         ; 0059154d
    FLD float ptr [EDX]                 ; 00591550
    FMUL float ptr [EAX]                ; 00591552
    FLD float ptr [EDX]                 ; 00591554
    FMUL float ptr [EAX + 0x10]         ; 00591556
    FLD float ptr [EDX]                 ; 00591559
    FXCH ST2                            ; 0059155b
    FADDP ST5,ST0                       ; 0059155d
    FXCH                                ; 0059155f
    FMUL float ptr [EAX + 0x20]         ; 00591561
    FLD float ptr [EDX + 0x8]           ; 00591564
    FMUL float ptr [EAX + 0x8]          ; 00591567
    FXCH ST2                            ; 0059156a
    FADDP ST4,ST0                       ; 0059156c
    FADDP ST2,ST0                       ; 0059156e
    FLD float ptr [EDX + 0x8]           ; 00591570
    FMUL float ptr [EAX + 0x18]         ; 00591573
    FLD float ptr [EDX + 0x8]           ; 00591576
    FMUL float ptr [EAX + 0x28]         ; 00591579
    MOV EDI,ESI                         ; 0059157c
    MOV ESI,ESP                         ; 0059157e
    FXCH ST2                            ; 00591580
    FADDP ST5,ST0                       ; 00591582
    FADDP ST3,ST0                       ; 00591584
    FADDP                               ; 00591586
    FXCH ST2                            ; 00591588
    FADD float ptr [EAX + 0xc]          ; 0059158a
    FXCH                                ; 0059158d
    FADD float ptr [EAX + 0x1c]         ; 0059158f
    FXCH ST2                            ; 00591592
    FADD float ptr [EAX + 0x2c]         ; 00591594
    FXCH ST2                            ; 00591597
    FSTP float ptr [ESP + 0x4]          ; 00591599
    FXCH                                ; 0059159d
    FSTP float ptr [ESP + 0x8]          ; 0059159f
    FSTP float ptr [ESP]                ; 005915a3
    MOVSD ES:EDI,ESI                    ; 005915a6
    MOVSD ES:EDI,ESI                    ; 005915a7
    MOVSD ES:EDI,ESI                    ; 005915a8
    MOV EAX,ECX                         ; 005915a9
    ADD ESP,0xc                         ; 005915ab
    POP EDI                             ; 005915ae
    RET                                 ; 005915af


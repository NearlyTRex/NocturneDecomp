; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_00583260(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[51]:
;   core_baal.cpp_CBaal_process_FUN_005968a0 at 005975ea
;   core_boneguy.cpp_CBaalSkel_process_FUN_00419b40 at 0041a2c1
;   core_boneguy.cpp_CBoneGuy_getCarryObjToBodyXForm_FUN_004186b0 at 00418813
;   core_boneguy.cpp_CBoneGuy_process_FUN_004179b0 at 0041816d
;   core_bugs.cpp_FUN_00423050 at 0042329b
;   core_carved.cpp_CCarved_getCarryObjToBodyXForm_FUN_00427780 at 00427954
;   core_chain.cpp_FUN_00429420 at 0042945a
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590 at 00430781
;   core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042e4b0 at 0042e7a1
;   core_charactr.cpp_FUN_0042e8c0 at 0042eb3f
;   ... and 41 more
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00583260
        ;   Label: core_xform.cpp_FUN_00583260
    SUB ESP,0xc                         ; 00583261
    MOV EDX,dword ptr [ESP + 0x14]      ; 00583264
    MOV EAX,dword ptr [ESP + 0x18]      ; 00583268
    MOV ECX,ESI                         ; 0058326c
    FLD float ptr [EDX + 0x4]           ; 0058326e
    FMUL float ptr [EAX + 0x4]          ; 00583271
    FLD float ptr [EDX + 0x4]           ; 00583274
    FMUL float ptr [EAX + 0x14]         ; 00583277
    FLD float ptr [EDX + 0x4]           ; 0058327a
    FMUL float ptr [EAX + 0x24]         ; 0058327d
    FLD float ptr [EDX]                 ; 00583280
    FMUL float ptr [EAX]                ; 00583282
    FLD float ptr [EDX]                 ; 00583284
    FMUL float ptr [EAX + 0x10]         ; 00583286
    FLD float ptr [EDX]                 ; 00583289
    FXCH ST2                            ; 0058328b
    FADDP ST5,ST0                       ; 0058328d
    FXCH                                ; 0058328f
    FMUL float ptr [EAX + 0x20]         ; 00583291
    FLD float ptr [EDX + 0x8]           ; 00583294
    FMUL float ptr [EAX + 0x8]          ; 00583297
    FXCH ST2                            ; 0058329a
    FADDP ST4,ST0                       ; 0058329c
    FADDP ST2,ST0                       ; 0058329e
    FLD float ptr [EDX + 0x8]           ; 005832a0
    FMUL float ptr [EAX + 0x18]         ; 005832a3
    FLD float ptr [EDX + 0x8]           ; 005832a6
    FMUL float ptr [EAX + 0x28]         ; 005832a9
    MOV EDI,ESI                         ; 005832ac
    MOV ESI,ESP                         ; 005832ae
    FXCH ST2                            ; 005832b0
    FADDP ST5,ST0                       ; 005832b2
    FADDP ST3,ST0                       ; 005832b4
    FADDP                               ; 005832b6
    FXCH ST2                            ; 005832b8
    FADD float ptr [EAX + 0xc]          ; 005832ba
    FXCH                                ; 005832bd
    FADD float ptr [EAX + 0x1c]         ; 005832bf
    FXCH ST2                            ; 005832c2
    FADD float ptr [EAX + 0x2c]         ; 005832c4
    FXCH ST2                            ; 005832c7
    FSTP float ptr [ESP + 0x4]          ; 005832c9
    FXCH                                ; 005832cd
    FSTP float ptr [ESP + 0x8]          ; 005832cf
    FSTP float ptr [ESP]                ; 005832d3
    MOVSD ES:EDI,ESI                    ; 005832d6
    MOVSD ES:EDI,ESI                    ; 005832d7
    MOVSD ES:EDI,ESI                    ; 005832d8
    MOV EAX,ECX                         ; 005832d9
    ADD ESP,0xc                         ; 005832db
    POP EDI                             ; 005832de
    RET                                 ; 005832df


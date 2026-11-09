; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBox_setupCorners_FUN_0041ae00(CBox *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *extents,float volume)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   orientation
; CVector3f *      Stack[0x10]:4   extents
; float            Stack[0x14]:4   volume
;
; XREF[7]:
;   core_bodypart.cpp_FUN_00416970 at 00416b05
;   core_box.cpp_FUN_0041d480 at 0041d57b
;   core_boxactor.cpp_FUN_0041f1e0 at 0041f346
;   core_fire.cpp_CStake_spawn_FUN_00497ac0 at 00497d12
;   core_fire.cpp_FUN_0049cee0 at 0049cfc3
;   core_simbox.cpp_FUN_00547280 at 00547342
;   core_weapon.cpp_FUN_0057ba10 at 0057bb4d
;
; Referenced Globals:
;   undefined4 DAT_005b7331
;
; Called Functions:
;   core_box.cpp_FUN_0041b1d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041ae00
        ;   Label: core_box.cpp_CBox_setupCorners_FUN_0041ae00
    MOV ECX,dword ptr [ESP + 0x10]      ; 0041ae04
    LEA EDX,[EAX + 0xa4]                ; 0041ae08
    CMP EDX,ECX                         ; 0041ae0e
    JZ 0x0041ae24                       ; 0041ae10
        ;   XREF to: 0041ae24 (CONDITIONAL_JUMP)  ; LAB_0041ae24
    PUSH EBX                            ; 0041ae12
    MOV EBX,dword ptr [ECX]             ; 0041ae13
    MOV dword ptr [EDX],EBX             ; 0041ae15
    MOV EBX,dword ptr [ECX + 0x4]       ; 0041ae17
    MOV dword ptr [EDX + 0x4],EBX       ; 0041ae1a
    MOV EBX,dword ptr [ECX + 0x8]       ; 0041ae1d
    MOV dword ptr [EDX + 0x8],EBX       ; 0041ae20
    POP EBX                             ; 0041ae23
    FLD float ptr [EAX + 0xa4]          ; 0041ae24
        ;   Label: LAB_0041ae24
    FMUL double ptr [0x005b7331]        ; 0041ae2a | DAT_005b7331
    FLD float ptr [EAX + 0xac]          ; 0041ae30
    FMUL double ptr [0x005b7331]        ; 0041ae36 | DAT_005b7331
    FLD float ptr [EAX + 0xac]          ; 0041ae3c
    FMUL double ptr [0x005b7331]        ; 0041ae42 | DAT_005b7331
    FLD float ptr [EAX + 0xa4]          ; 0041ae48
    FMUL double ptr [0x005b7331]        ; 0041ae4e | DAT_005b7331
    FLD float ptr [EAX + 0xa4]          ; 0041ae54
    FMUL double ptr [0x005b7331]        ; 0041ae5a | DAT_005b7331
    FLD float ptr [EAX + 0xa8]          ; 0041ae60
    FMUL double ptr [0x005b7331]        ; 0041ae66 | DAT_005b7331
    FLD float ptr [EAX + 0xa8]          ; 0041ae6c
    FCHS                                ; 0041ae72
    MOV dword ptr [EAX + 0xb0],0x8      ; 0041ae74
    FMUL double ptr [0x005b7331]        ; 0041ae7e | DAT_005b7331
    FXCH ST6                            ; 0041ae84
    FSTP float ptr [EAX + 0xb4]         ; 0041ae86
    FLD float ptr [EAX + 0xac]          ; 0041ae8c
    FMUL double ptr [0x005b7331]        ; 0041ae92 | DAT_005b7331
    FXCH ST6                            ; 0041ae98
    FSTP float ptr [EAX + 0xb8]         ; 0041ae9a
    FLD float ptr [EAX + 0xa4]          ; 0041aea0
    FCHS                                ; 0041aea6
    FMUL double ptr [0x005b7331]        ; 0041aea8 | DAT_005b7331
    FXCH ST5                            ; 0041aeae
    FSTP float ptr [EAX + 0xbc]         ; 0041aeb0
    FLD float ptr [EAX + 0xa8]          ; 0041aeb6
    FCHS                                ; 0041aebc
    FMUL double ptr [0x005b7331]        ; 0041aebe | DAT_005b7331
    FXCH ST5                            ; 0041aec4
    FSTP float ptr [EAX + 0xe8]         ; 0041aec6
    FLD float ptr [EAX + 0xa8]          ; 0041aecc
    FMUL double ptr [0x005b7331]        ; 0041aed2 | DAT_005b7331
    FXCH ST5                            ; 0041aed8
    FSTP float ptr [EAX + 0xec]         ; 0041aeda
    FLD float ptr [EAX + 0xa4]          ; 0041aee0
    FCHS                                ; 0041aee6
    FMUL double ptr [0x005b7331]        ; 0041aee8 | DAT_005b7331
    FXCH ST4                            ; 0041aeee
    FSTP float ptr [EAX + 0xf0]         ; 0041aef0
    FLD float ptr [EAX + 0xa8]          ; 0041aef6
    FCHS                                ; 0041aefc
    FMUL double ptr [0x005b7331]        ; 0041aefe | DAT_005b7331
    FXCH ST4                            ; 0041af04
    FSTP float ptr [EAX + 0x11c]        ; 0041af06
    FLD float ptr [EAX + 0xac]          ; 0041af0c
    FCHS                                ; 0041af12
    FMUL double ptr [0x005b7331]        ; 0041af14 | DAT_005b7331
    FXCH ST4                            ; 0041af1a
    FSTP float ptr [EAX + 0x120]        ; 0041af1c
    FLD float ptr [EAX + 0xa8]          ; 0041af22
    FCHS                                ; 0041af28
    FMUL double ptr [0x005b7331]        ; 0041af2a | DAT_005b7331
    FXCH ST3                            ; 0041af30
    FSTP float ptr [EAX + 0x150]        ; 0041af32
    FLD float ptr [EAX + 0xac]          ; 0041af38
    FCHS                                ; 0041af3e
    FMUL double ptr [0x005b7331]        ; 0041af40 | DAT_005b7331
    FXCH ST2                            ; 0041af46
    FSTP float ptr [EAX + 0x184]        ; 0041af48
    FLD float ptr [EAX + 0xac]          ; 0041af4e
    FMUL double ptr [0x005b7331]        ; 0041af54 | DAT_005b7331
    FXCH                                ; 0041af5a
    FSTP float ptr [EAX + 0x188]        ; 0041af5c
    FLD float ptr [EAX + 0xa8]          ; 0041af62
    FMUL double ptr [0x005b7331]        ; 0041af68 | DAT_005b7331
    FXCH ST6                            ; 0041af6e
    FSTP float ptr [EAX + 0x18c]        ; 0041af70
    FLD float ptr [EAX + 0xa4]          ; 0041af76
    FCHS                                ; 0041af7c
    FMUL double ptr [0x005b7331]        ; 0041af7e | DAT_005b7331
    FXCH ST5                            ; 0041af84
    FSTP float ptr [EAX + 0x1bc]        ; 0041af86
    FLD float ptr [EAX + 0xa4]          ; 0041af8c
    FCHS                                ; 0041af92
    FMUL double ptr [0x005b7331]        ; 0041af94 | DAT_005b7331
    FXCH                                ; 0041af9a
    FSTP float ptr [EAX + 0x1c0]        ; 0041af9c
    FLD float ptr [EAX + 0xac]          ; 0041afa2
    FCHS                                ; 0041afa8
    FMUL double ptr [0x005b7331]        ; 0041afaa | DAT_005b7331
    FXCH ST6                            ; 0041afb0
    FSTP float ptr [EAX + 0x1f0]        ; 0041afb2
    FXCH ST3                            ; 0041afb8
    FSTP float ptr [EAX + 0x124]        ; 0041afba
    FXCH                                ; 0041afc0
    FSTP float ptr [EAX + 0x154]        ; 0041afc2
    FSTP float ptr [EAX + 0x158]        ; 0041afc8
    FXCH                                ; 0041afce
    FSTP float ptr [EAX + 0x1b8]        ; 0041afd0
    FSTP float ptr [EAX + 0x1ec]        ; 0041afd6
    FSTP float ptr [EAX + 0x1f4]        ; 0041afdc
    FLD double ptr [0x005b7331]         ; 0041afe2 | DAT_005b7331
    FLD float ptr [EAX + 0xa4]          ; 0041afe8
    FMUL ST1                            ; 0041afee
    FLD float ptr [EAX + 0xa8]          ; 0041aff0
    FMUL ST2                            ; 0041aff6
    FLD float ptr [EAX + 0xac]          ; 0041aff8
    FCHS                                ; 0041affe
    FMULP ST3                           ; 0041b000
    PUSH dword ptr [ESP + 0x14]         ; 0041b002
    MOV EDX,dword ptr [ESP + 0x10]      ; 0041b006
    MOV ECX,dword ptr [ESP + 0xc]       ; 0041b00a
    PUSH EDX                            ; 0041b00e
    FXCH                                ; 0041b00f
    FSTP float ptr [EAX + 0x220]        ; 0041b011
    PUSH ECX                            ; 0041b017
    FSTP float ptr [EAX + 0x224]        ; 0041b018
    PUSH EAX                            ; 0041b01e
    FSTP float ptr [EAX + 0x228]        ; 0041b01f
    CALL core_box.cpp_FUN_0041b1d0      ; 0041b025
        ;   XREF to: 0041b1d0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_FUN_0041b1d0(CBox * this_ptr, CVector3f * new_position, CVector3f * new_orientation, float speed)
    ADD ESP,0x10                        ; 0041b02a
    RET                                 ; 0041b02d


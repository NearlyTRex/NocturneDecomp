; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_box.cpp_CBox_setupCorners_FUN_0041dd20(CBox * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * extents, float volume)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   orientation
; CVector3f *      Stack[0x10]:4   extents
; float            Stack[0x14]:4   volume
;
; XREF[6]:
;   core_bodypart.cpp_CBodyPart_FUN_0041b070 at 0041b19d
;   core_box.cpp_CBox_loadFromFile_FUN_0041fe90 at 0041ff8b
;   core_boxactor.cpp_FUN_004218d0 at 004219ca
;   core_fire.cpp_CStake_spawn_FUN_004bfe90 at 004c009e
;   core_fire.cpp_CToss_create_FUN_004c3ee0 at 004c3fab
;   core_weapon.cpp_FUN_005ee740 at 005ee817
;
; Referenced Globals:
;   double g_BoxHalfExtentMultiplier = 0.5
;
; Called Functions:
;   core_box.cpp_CBox_updateTransform_FUN_0041e0e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041dd20
        ;   Label: core_box.cpp_CBox_setupCorners_FUN_0041dd20
    MOV ECX,dword ptr [ESP + 0x10]      ; 0041dd24
    LEA EDX,[EAX + 0xa4]                ; 0041dd28
    CMP EDX,ECX                         ; 0041dd2e
    JZ 0x0041dd44                       ; 0041dd30 | LAB_0041dd44
        ;   XREF to: 0041dd44 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0041dd32
    MOV EBX,dword ptr [ECX]             ; 0041dd33
    MOV dword ptr [EDX],EBX             ; 0041dd35
    MOV EBX,dword ptr [ECX + 0x4]       ; 0041dd37
    MOV dword ptr [EDX + 0x4],EBX       ; 0041dd3a
    MOV EBX,dword ptr [ECX + 0x8]       ; 0041dd3d
    MOV dword ptr [EDX + 0x8],EBX       ; 0041dd40
    POP EBX                             ; 0041dd43
    FLD float ptr [EAX + 0xa4]          ; 0041dd44
        ;   Label: LAB_0041dd44
    FMUL double ptr [0x0061646f]        ; 0041dd4a | double g_BoxHalfExtentMultiplier
    FLD float ptr [EAX + 0xac]          ; 0041dd50
    FMUL double ptr [0x0061646f]        ; 0041dd56 | double g_BoxHalfExtentMultiplier
    FLD float ptr [EAX + 0xac]          ; 0041dd5c
    FMUL double ptr [0x0061646f]        ; 0041dd62 | double g_BoxHalfExtentMultiplier
    FLD float ptr [EAX + 0xa4]          ; 0041dd68
    FMUL double ptr [0x0061646f]        ; 0041dd6e | double g_BoxHalfExtentMultiplier
    FLD float ptr [EAX + 0xa4]          ; 0041dd74
    FMUL double ptr [0x0061646f]        ; 0041dd7a | double g_BoxHalfExtentMultiplier
    FLD float ptr [EAX + 0xa8]          ; 0041dd80
    FMUL double ptr [0x0061646f]        ; 0041dd86 | double g_BoxHalfExtentMultiplier
    FLD float ptr [EAX + 0xa8]          ; 0041dd8c
    FCHS                                ; 0041dd92
    MOV dword ptr [EAX + 0xb0],0x8      ; 0041dd94
    FMUL double ptr [0x0061646f]        ; 0041dd9e | double g_BoxHalfExtentMultiplier
    FXCH ST6                            ; 0041dda4
    FSTP float ptr [EAX + 0xb4]         ; 0041dda6
    FLD float ptr [EAX + 0xac]          ; 0041ddac
    FMUL double ptr [0x0061646f]        ; 0041ddb2 | double g_BoxHalfExtentMultiplier
    FXCH ST6                            ; 0041ddb8
    FSTP float ptr [EAX + 0xb8]         ; 0041ddba
    FLD float ptr [EAX + 0xa4]          ; 0041ddc0
    FCHS                                ; 0041ddc6
    FMUL double ptr [0x0061646f]        ; 0041ddc8 | double g_BoxHalfExtentMultiplier
    FXCH ST5                            ; 0041ddce
    FSTP float ptr [EAX + 0xbc]         ; 0041ddd0
    FLD float ptr [EAX + 0xa8]          ; 0041ddd6
    FCHS                                ; 0041dddc
    FMUL double ptr [0x0061646f]        ; 0041ddde | double g_BoxHalfExtentMultiplier
    FXCH ST5                            ; 0041dde4
    FSTP float ptr [EAX + 0xe8]         ; 0041dde6
    FLD float ptr [EAX + 0xa8]          ; 0041ddec
    FMUL double ptr [0x0061646f]        ; 0041ddf2 | double g_BoxHalfExtentMultiplier
    FXCH ST5                            ; 0041ddf8
    FSTP float ptr [EAX + 0xec]         ; 0041ddfa
    FLD float ptr [EAX + 0xa4]          ; 0041de00
    FCHS                                ; 0041de06
    FMUL double ptr [0x0061646f]        ; 0041de08 | double g_BoxHalfExtentMultiplier
    FXCH ST4                            ; 0041de0e
    FSTP float ptr [EAX + 0xf0]         ; 0041de10
    FLD float ptr [EAX + 0xa8]          ; 0041de16
    FCHS                                ; 0041de1c
    FMUL double ptr [0x0061646f]        ; 0041de1e | double g_BoxHalfExtentMultiplier
    FXCH ST4                            ; 0041de24
    FSTP float ptr [EAX + 0x11c]        ; 0041de26
    FLD float ptr [EAX + 0xac]          ; 0041de2c
    FCHS                                ; 0041de32
    FMUL double ptr [0x0061646f]        ; 0041de34 | double g_BoxHalfExtentMultiplier
    FXCH ST4                            ; 0041de3a
    FSTP float ptr [EAX + 0x120]        ; 0041de3c
    FLD float ptr [EAX + 0xa8]          ; 0041de42
    FCHS                                ; 0041de48
    FMUL double ptr [0x0061646f]        ; 0041de4a | double g_BoxHalfExtentMultiplier
    FXCH ST3                            ; 0041de50
    FSTP float ptr [EAX + 0x150]        ; 0041de52
    FLD float ptr [EAX + 0xac]          ; 0041de58
    FCHS                                ; 0041de5e
    FMUL double ptr [0x0061646f]        ; 0041de60 | double g_BoxHalfExtentMultiplier
    FXCH ST2                            ; 0041de66
    FSTP float ptr [EAX + 0x184]        ; 0041de68
    FLD float ptr [EAX + 0xac]          ; 0041de6e
    FMUL double ptr [0x0061646f]        ; 0041de74 | double g_BoxHalfExtentMultiplier
    FXCH                                ; 0041de7a
    FSTP float ptr [EAX + 0x188]        ; 0041de7c
    FLD float ptr [EAX + 0xa8]          ; 0041de82
    FMUL double ptr [0x0061646f]        ; 0041de88 | double g_BoxHalfExtentMultiplier
    FXCH ST6                            ; 0041de8e
    FSTP float ptr [EAX + 0x18c]        ; 0041de90
    FLD float ptr [EAX + 0xa4]          ; 0041de96
    FCHS                                ; 0041de9c
    FMUL double ptr [0x0061646f]        ; 0041de9e | double g_BoxHalfExtentMultiplier
    FXCH ST5                            ; 0041dea4
    FSTP float ptr [EAX + 0x1bc]        ; 0041dea6
    FLD float ptr [EAX + 0xa4]          ; 0041deac
    FCHS                                ; 0041deb2
    FMUL double ptr [0x0061646f]        ; 0041deb4 | double g_BoxHalfExtentMultiplier
    FXCH                                ; 0041deba
    FSTP float ptr [EAX + 0x1c0]        ; 0041debc
    FLD float ptr [EAX + 0xac]          ; 0041dec2
    FCHS                                ; 0041dec8
    FMUL double ptr [0x0061646f]        ; 0041deca | double g_BoxHalfExtentMultiplier
    FXCH ST6                            ; 0041ded0
    FSTP float ptr [EAX + 0x1f0]        ; 0041ded2
    FXCH ST3                            ; 0041ded8
    FSTP float ptr [EAX + 0x124]        ; 0041deda
    FXCH                                ; 0041dee0
    FSTP float ptr [EAX + 0x154]        ; 0041dee2
    FSTP float ptr [EAX + 0x158]        ; 0041dee8
    FXCH                                ; 0041deee
    FSTP float ptr [EAX + 0x1b8]        ; 0041def0
    FSTP float ptr [EAX + 0x1ec]        ; 0041def6
    FSTP float ptr [EAX + 0x1f4]        ; 0041defc
    FLD double ptr [0x0061646f]         ; 0041df02 | double g_BoxHalfExtentMultiplier
    FLD float ptr [EAX + 0xa4]          ; 0041df08
    FMUL ST1                            ; 0041df0e
    FLD float ptr [EAX + 0xa8]          ; 0041df10
    FMUL ST2                            ; 0041df16
    FLD float ptr [EAX + 0xac]          ; 0041df18
    FCHS                                ; 0041df1e
    FMULP ST3                           ; 0041df20
    PUSH dword ptr [ESP + 0x14]         ; 0041df22
    MOV EDX,dword ptr [ESP + 0x10]      ; 0041df26
    MOV ECX,dword ptr [ESP + 0xc]       ; 0041df2a
    PUSH EDX                            ; 0041df2e
    FXCH                                ; 0041df2f
    FSTP float ptr [EAX + 0x220]        ; 0041df31
    PUSH ECX                            ; 0041df37
    FSTP float ptr [EAX + 0x224]        ; 0041df38
    PUSH EAX                            ; 0041df3e
    FSTP float ptr [EAX + 0x228]        ; 0041df3f
    CALL core_box.cpp_CBox_updateTransform_FUN_0041e0e0 ; 0041df45 | void core_box.cpp_CBox_updateTransform_FUN_0041e0e0(CBox * this_ptr, CVector3f * new_position, CVector3f * new_orientation, float speed)
        ;   XREF to: 0041e0e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0041df4a
    RET                                 ; 0041df4d


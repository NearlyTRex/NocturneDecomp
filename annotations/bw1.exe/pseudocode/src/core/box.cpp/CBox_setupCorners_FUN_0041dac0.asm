; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBox_setupCorners_FUN_0041dac0(CBox *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *extents,float volume)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   orientation
; CVector3f *      Stack[0x10]:4   extents
; float            Stack[0x14]:4   volume
;
; XREF[7]:
;   core_bodypart.cpp_FUN_0041ad40 at 0041aed5
;   core_box.cpp_CBox_loadFromFile_FUN_00420140 at 0042023b
;   core_boxactor.cpp_FUN_00421e80 at 00421fe6
;   core_fire.cpp_CStake_spawn_FUN_004acb60 at 004acdb2
;   core_fire.cpp_FUN_004b1c50 at 004b1d2c
;   core_simbox.cpp_CSimBox_setup_FUN_00562660 at 00562722
;   core_weapon.cpp_FUN_005ade40 at 005adf7d
;
; Referenced Globals:
;   undefined4 DAT_005d4a48
;
; Called Functions:
;   core_box.cpp_FUN_0041de90
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041dac0
        ;   Label: core_box.cpp_CBox_setupCorners_FUN_0041dac0
    MOV ECX,dword ptr [ESP + 0x10]      ; 0041dac4
    LEA EDX,[EAX + 0xa4]                ; 0041dac8
    CMP EDX,ECX                         ; 0041dace
    JZ 0x0041dae4                       ; 0041dad0
        ;   XREF to: 0041dae4 (CONDITIONAL_JUMP)  ; LAB_0041dae4
    PUSH EBX                            ; 0041dad2
    MOV EBX,dword ptr [ECX]             ; 0041dad3
    MOV dword ptr [EDX],EBX             ; 0041dad5
    MOV EBX,dword ptr [ECX + 0x4]       ; 0041dad7
    MOV dword ptr [EDX + 0x4],EBX       ; 0041dada
    MOV EBX,dword ptr [ECX + 0x8]       ; 0041dadd
    MOV dword ptr [EDX + 0x8],EBX       ; 0041dae0
    POP EBX                             ; 0041dae3
    FLD float ptr [EAX + 0xa4]          ; 0041dae4
        ;   Label: LAB_0041dae4
    FMUL double ptr [0x005d4a48]        ; 0041daea | DAT_005d4a48
    FLD float ptr [EAX + 0xac]          ; 0041daf0
    FMUL double ptr [0x005d4a48]        ; 0041daf6 | DAT_005d4a48
    FLD float ptr [EAX + 0xac]          ; 0041dafc
    FMUL double ptr [0x005d4a48]        ; 0041db02 | DAT_005d4a48
    FLD float ptr [EAX + 0xa4]          ; 0041db08
    FMUL double ptr [0x005d4a48]        ; 0041db0e | DAT_005d4a48
    FLD float ptr [EAX + 0xa4]          ; 0041db14
    FMUL double ptr [0x005d4a48]        ; 0041db1a | DAT_005d4a48
    FLD float ptr [EAX + 0xa8]          ; 0041db20
    FMUL double ptr [0x005d4a48]        ; 0041db26 | DAT_005d4a48
    FLD float ptr [EAX + 0xa8]          ; 0041db2c
    FCHS                                ; 0041db32
    MOV dword ptr [EAX + 0xb0],0x8      ; 0041db34
    FMUL double ptr [0x005d4a48]        ; 0041db3e | DAT_005d4a48
    FXCH ST6                            ; 0041db44
    FSTP float ptr [EAX + 0xb4]         ; 0041db46
    FLD float ptr [EAX + 0xac]          ; 0041db4c
    FMUL double ptr [0x005d4a48]        ; 0041db52 | DAT_005d4a48
    FXCH ST6                            ; 0041db58
    FSTP float ptr [EAX + 0xb8]         ; 0041db5a
    FLD float ptr [EAX + 0xa4]          ; 0041db60
    FCHS                                ; 0041db66
    FMUL double ptr [0x005d4a48]        ; 0041db68 | DAT_005d4a48
    FXCH ST5                            ; 0041db6e
    FSTP float ptr [EAX + 0xbc]         ; 0041db70
    FLD float ptr [EAX + 0xa8]          ; 0041db76
    FCHS                                ; 0041db7c
    FMUL double ptr [0x005d4a48]        ; 0041db7e | DAT_005d4a48
    FXCH ST5                            ; 0041db84
    FSTP float ptr [EAX + 0xe8]         ; 0041db86
    FLD float ptr [EAX + 0xa8]          ; 0041db8c
    FMUL double ptr [0x005d4a48]        ; 0041db92 | DAT_005d4a48
    FXCH ST5                            ; 0041db98
    FSTP float ptr [EAX + 0xec]         ; 0041db9a
    FLD float ptr [EAX + 0xa4]          ; 0041dba0
    FCHS                                ; 0041dba6
    FMUL double ptr [0x005d4a48]        ; 0041dba8 | DAT_005d4a48
    FXCH ST4                            ; 0041dbae
    FSTP float ptr [EAX + 0xf0]         ; 0041dbb0
    FLD float ptr [EAX + 0xa8]          ; 0041dbb6
    FCHS                                ; 0041dbbc
    FMUL double ptr [0x005d4a48]        ; 0041dbbe | DAT_005d4a48
    FXCH ST4                            ; 0041dbc4
    FSTP float ptr [EAX + 0x11c]        ; 0041dbc6
    FLD float ptr [EAX + 0xac]          ; 0041dbcc
    FCHS                                ; 0041dbd2
    FMUL double ptr [0x005d4a48]        ; 0041dbd4 | DAT_005d4a48
    FXCH ST4                            ; 0041dbda
    FSTP float ptr [EAX + 0x120]        ; 0041dbdc
    FLD float ptr [EAX + 0xa8]          ; 0041dbe2
    FCHS                                ; 0041dbe8
    FMUL double ptr [0x005d4a48]        ; 0041dbea | DAT_005d4a48
    FXCH ST3                            ; 0041dbf0
    FSTP float ptr [EAX + 0x150]        ; 0041dbf2
    FLD float ptr [EAX + 0xac]          ; 0041dbf8
    FCHS                                ; 0041dbfe
    FMUL double ptr [0x005d4a48]        ; 0041dc00 | DAT_005d4a48
    FXCH ST2                            ; 0041dc06
    FSTP float ptr [EAX + 0x184]        ; 0041dc08
    FLD float ptr [EAX + 0xac]          ; 0041dc0e
    FMUL double ptr [0x005d4a48]        ; 0041dc14 | DAT_005d4a48
    FXCH                                ; 0041dc1a
    FSTP float ptr [EAX + 0x188]        ; 0041dc1c
    FLD float ptr [EAX + 0xa8]          ; 0041dc22
    FMUL double ptr [0x005d4a48]        ; 0041dc28 | DAT_005d4a48
    FXCH ST6                            ; 0041dc2e
    FSTP float ptr [EAX + 0x18c]        ; 0041dc30
    FLD float ptr [EAX + 0xa4]          ; 0041dc36
    FCHS                                ; 0041dc3c
    FMUL double ptr [0x005d4a48]        ; 0041dc3e | DAT_005d4a48
    FXCH ST5                            ; 0041dc44
    FSTP float ptr [EAX + 0x1bc]        ; 0041dc46
    FLD float ptr [EAX + 0xa4]          ; 0041dc4c
    FCHS                                ; 0041dc52
    FMUL double ptr [0x005d4a48]        ; 0041dc54 | DAT_005d4a48
    FXCH                                ; 0041dc5a
    FSTP float ptr [EAX + 0x1c0]        ; 0041dc5c
    FLD float ptr [EAX + 0xac]          ; 0041dc62
    FCHS                                ; 0041dc68
    FMUL double ptr [0x005d4a48]        ; 0041dc6a | DAT_005d4a48
    FXCH ST6                            ; 0041dc70
    FSTP float ptr [EAX + 0x1f0]        ; 0041dc72
    FXCH ST3                            ; 0041dc78
    FSTP float ptr [EAX + 0x124]        ; 0041dc7a
    FXCH                                ; 0041dc80
    FSTP float ptr [EAX + 0x154]        ; 0041dc82
    FSTP float ptr [EAX + 0x158]        ; 0041dc88
    FXCH                                ; 0041dc8e
    FSTP float ptr [EAX + 0x1b8]        ; 0041dc90
    FSTP float ptr [EAX + 0x1ec]        ; 0041dc96
    FSTP float ptr [EAX + 0x1f4]        ; 0041dc9c
    FLD double ptr [0x005d4a48]         ; 0041dca2 | DAT_005d4a48
    FLD float ptr [EAX + 0xa4]          ; 0041dca8
    FMUL ST1                            ; 0041dcae
    FLD float ptr [EAX + 0xa8]          ; 0041dcb0
    FMUL ST2                            ; 0041dcb6
    FLD float ptr [EAX + 0xac]          ; 0041dcb8
    FCHS                                ; 0041dcbe
    FMULP ST3                           ; 0041dcc0
    PUSH dword ptr [ESP + 0x14]         ; 0041dcc2
    MOV EDX,dword ptr [ESP + 0x10]      ; 0041dcc6
    MOV ECX,dword ptr [ESP + 0xc]       ; 0041dcca
    PUSH EDX                            ; 0041dcce
    FXCH                                ; 0041dccf
    FSTP float ptr [EAX + 0x220]        ; 0041dcd1
    PUSH ECX                            ; 0041dcd7
    FSTP float ptr [EAX + 0x224]        ; 0041dcd8
    PUSH EAX                            ; 0041dcde
    FSTP float ptr [EAX + 0x228]        ; 0041dcdf
    CALL core_box.cpp_FUN_0041de90      ; 0041dce5
        ;   XREF to: 0041de90 (UNCONDITIONAL_CALL)  ; void core_box.cpp_FUN_0041de90(CBox * this_ptr, CVector3f * new_position, CVector3f * new_orientation, float speed)
    ADD ESP,0x10                        ; 0041dcea
    RET                                 ; 0041dced


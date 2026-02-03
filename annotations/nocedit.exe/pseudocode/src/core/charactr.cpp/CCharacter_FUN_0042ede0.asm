; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_charactr_cpp_CCharacter_FUN_0042ede0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x114]:4  local_114
; undefined1       Stack[-0xbc]:1  local_bc
; undefined1       Stack[-0xa4]:1  local_a4
; undefined1       Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x24]:4  local_24
;
; XREF[4]:
;   core_hostage.cpp_CHostage_process_FUN_004f4bd0 at 004f566f
;   core_icepick.cpp_CIcePick_FUN_004f8c70 at 004f9302
;   core_moloch.cpp_CMoloch_FUN_005293b0 at 005296e5
;   core_svetlana.cpp_FUN_005d9260 at 005d974c
;
; Referenced Globals:
;   TerminatedCString s_s_was_in_the_way_but_cou_00617626
;   double DOUBLE_00617662 = 0.785398163375000
;   double DOUBLE_0061766a = 1.5
;   double DOUBLE_00617672 = 4
;   double DOUBLE_0061767a = 0.523598775583333
;   double DOUBLE_00617682 = 4.5
;   double DOUBLE_0061768a = 1.75
;   double DOUBLE_00617692 = 1.57079632675000
;   double DOUBLE_0061769a = 0.25
;   double DOUBLE_006176a2 = 2.40000000000000
;   float FLOAT_006176aa = -1
;   undefined4 DAT_0066e740
;   CConsole* g_CConsolePtr = 0083b1a4
;   CConsole g_ConsolePtr
;   CVector3f g_ZeroVector
;
; Called Functions:
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_hero.cpp_closestHeroToPoint_FUN_004f2170
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   engine_console.cpp_CConsole_printf_FUN_00441890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042ede0
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042ede0
    PUSH ESI                            ; 0042ede1
    PUSH EDI                            ; 0042ede2
    PUSH EBP                            ; 0042ede3
    MOV EBP,ESP                         ; 0042ede4
    SUB ESP,0x108                       ; 0042ede6
    AND ESP,0xfffffff8                  ; 0042edec
    MOV EDI,dword ptr [EBP + 0x14]      ; 0042edef
    FLD float ptr [EDI + 0x2dc4]        ; 0042edf2
    FLDZ                                ; 0042edf8
    FCOMPP                              ; 0042edfa
    FNSTSW AX                           ; 0042edfc
    SAHF                                ; 0042edfe
    JBE 0x0042ee63                      ; 0042edff
        ;   XREF to: 0042ee63 (CONDITIONAL_JUMP)  ; LAB_0042ee63
    FLD float ptr [EDI + 0x2dc4]        ; 0042ee01
    FADD float ptr [EBP + 0x18]         ; 0042ee07
    FST float ptr [EDI + 0x2dc4]        ; 0042ee0a
    FLDZ                                ; 0042ee10
    FCOMPP                              ; 0042ee12
    FNSTSW AX                           ; 0042ee14
    SAHF                                ; 0042ee16
    JBE 0x0042ee2a                      ; 0042ee17
        ;   XREF to: 0042ee2a (CONDITIONAL_JUMP)  ; LAB_0042ee2a
    FLD float ptr [EDI + 0x2dd4]        ; 0042ee19
    FCOMP double ptr [0x0061766a]       ; 0042ee1f | DOUBLE_0061766a
    FNSTSW AX                           ; 0042ee25
    SAHF                                ; 0042ee27
    JBE 0x0042ee3d                      ; 0042ee28
        ;   XREF to: 0042ee3d (CONDITIONAL_JUMP)  ; LAB_0042ee3d
    MOV dword ptr [EDI + 0x2dc4],0x0    ; 0042ee2a
        ;   Label: LAB_0042ee2a
    XOR EAX,EAX                         ; 0042ee34
        ;   Label: LAB_0042ee34
    MOV ESP,EBP                         ; 0042ee36
        ;   Label: LAB_0042ee36
    POP EBP                             ; 0042ee38
    POP EDI                             ; 0042ee39
    POP ESI                             ; 0042ee3a
    POP EBX                             ; 0042ee3b
    RET                                 ; 0042ee3c
    PUSH 0x0                            ; 0042ee3d
        ;   Label: LAB_0042ee3d
    PUSH 0x0                            ; 0042ee3f
    PUSH 0x3f87558                      ; 0042ee41 | g_ZeroVector
    PUSH 0x0                            ; 0042ee46
    LEA EAX,[EDI + 0x2dc8]              ; 0042ee48
    PUSH EAX                            ; 0042ee4e
    PUSH EDI                            ; 0042ee4f
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 0042ee50
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr)
    ADD ESP,0x18                        ; 0042ee55
    TEST EAX,EAX                        ; 0042ee58
    JNZ 0x0042ee2a                      ; 0042ee5a
        ;   XREF to: 0042ee2a (CONDITIONAL_JUMP)  ; LAB_0042ee2a
    MOV EAX,0x1                         ; 0042ee5c
    JMP 0x0042ee36                      ; 0042ee61
        ;   XREF to: 0042ee36 (UNCONDITIONAL_JUMP)  ; LAB_0042ee36
    LEA ESI,[EDI + 0x20]                ; 0042ee63
        ;   Label: LAB_0042ee63
    PUSH ESI                            ; 0042ee66
    CALL core_hero.cpp_closestHeroToPoint_FUN_004f2170 ; 0042ee67
        ;   XREF to: 004f2170 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_closestHeroToPoint_FUN_004f2170(CLocation * location)
    ADD ESP,0x4                         ; 0042ee6c
    MOV EBX,EAX                         ; 0042ee6f
    PUSH ESI                            ; 0042ee71
    MOV dword ptr [ESP + 0xf0],EAX      ; 0042ee72
    LEA EAX,[ESP + 0x78]                ; 0042ee79
    PUSH EAX                            ; 0042ee7d
    PUSH EBX                            ; 0042ee7e
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 0042ee7f
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 0042ee84
    LEA EAX,[ESP + 0x74]                ; 0042ee87
    PUSH EAX                            ; 0042ee8b
    LEA EAX,[ESP + 0x60]                ; 0042ee8c
    PUSH EAX                            ; 0042ee90
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 0042ee91
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EAX + 0x4]           ; 0042ee96
    FABS                                ; 0042ee99
    LEA EAX,[EBX + 0x20]                ; 0042ee9b
    FLD float ptr [ESI]                 ; 0042ee9e
    FSUB float ptr [EAX]                ; 0042eea0
    ADD ESP,0x8                         ; 0042eea2
    FSTP float ptr [ESP + 0xd4]         ; 0042eea5
    FLD float ptr [ESI + 0x4]           ; 0042eeac
    FSUB float ptr [EAX + 0x4]          ; 0042eeaf
    FSTP float ptr [ESP + 0xd8]         ; 0042eeb2
    FLD float ptr [ESI + 0x8]           ; 0042eeb9
    FSUB float ptr [EAX + 0x8]          ; 0042eebc
    LEA EAX,[ESP + 0xd4]                ; 0042eebf
    PUSH EAX                            ; 0042eec6
    LEA EAX,[ESP + 0x90]                ; 0042eec7
    FXCH                                ; 0042eece
    FSTP float ptr [ESP + 0x8]          ; 0042eed0
    PUSH EAX                            ; 0042eed4
    FSTP float ptr [ESP + 0xe4]         ; 0042eed5
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 0042eedc
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 0042eee1
    MOV EAX,dword ptr [EAX + 0x4]       ; 0042eee4
    PUSH EBX                            ; 0042eee7
    MOV dword ptr [ESP + 0xf8],EAX      ; 0042eee8
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042eeef
    CALL dword ptr [EAX + 0x15c]        ; 0042eef5
    ADD ESP,0x4                         ; 0042eefb
    TEST EAX,EAX                        ; 0042eefe
    JZ 0x0042f09e                       ; 0042ef00
        ;   XREF to: 0042f09e (CONDITIONAL_JUMP)  ; LAB_0042f09e
    FLD float ptr [ESP + 0x4]           ; 0042ef06
    FCOMP double ptr [0x00617662]       ; 0042ef0a | DOUBLE_00617662
    FNSTSW AX                           ; 0042ef10
    SAHF                                ; 0042ef12
    JNC 0x0042f09e                      ; 0042ef13
        ;   XREF to: 0042f09e (CONDITIONAL_JUMP)  ; LAB_0042f09e
    FLD float ptr [ESP + 0x74]          ; 0042ef19
    FLDZ                                ; 0042ef1d
    FCOMPP                              ; 0042ef1f
    FNSTSW AX                           ; 0042ef21
    SAHF                                ; 0042ef23
    JBE 0x0042f07f                      ; 0042ef24
        ;   XREF to: 0042f07f (CONDITIONAL_JUMP)  ; LAB_0042f07f
    MOV EAX,0x1                         ; 0042ef2a
    MOV ESI,dword ptr [ESP + 0xec]      ; 0042ef2f
        ;   Label: LAB_0042ef2f
    MOV dword ptr [ESP + 0xf0],EAX      ; 0042ef36
    XOR EDX,EDX                         ; 0042ef3d
    LEA EBX,[EDI + 0x2dc8]              ; 0042ef3f
    MOV dword ptr [ESP + 0xfc],EDX      ; 0042ef45
    ADD ESI,0x20                        ; 0042ef4c
    MOV ECX,dword ptr [ESP + 0xf0]      ; 0042ef4f
        ;   Label: LAB_0042ef4f
    MOV EAX,dword ptr [ESP + 0xfc]      ; 0042ef56
    TEST ECX,ECX                        ; 0042ef5d
    JNZ 0x0042f203                      ; 0042ef5f
        ;   XREF to: 0042f203 (CONDITIONAL_JUMP)  ; LAB_0042f203
    FLD float ptr [ESP + 0xf4]          ; 0042ef65
        ;   Label: LAB_0042ef65
    FADD float ptr [EAX*0x4 + 0x66e740] ; 0042ef6c | DAT_0066e740
    XOR EAX,EAX                         ; 0042ef73
    FSTP float ptr [ESP + 0x104]        ; 0042ef75
    MOV dword ptr [ESP + 0x98],EAX      ; 0042ef7c
    MOV dword ptr [ESP + 0xa0],EAX      ; 0042ef83
    MOV EAX,dword ptr [ESP + 0x104]     ; 0042ef8a
    MOV dword ptr [ESP + 0x9c],EAX      ; 0042ef91
    LEA EAX,[ESP + 0x98]                ; 0042ef98
    PUSH EAX                            ; 0042ef9f
    LEA EAX,[ESP + 0x10]                ; 0042efa0
    PUSH EAX                            ; 0042efa4
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 0042efa5
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV ECX,0x40d00000                  ; 0042efaa
    ADD ESP,0x8                         ; 0042efaf
    MOV dword ptr [ESP + 0x8],ECX       ; 0042efb2
    FLD float ptr [ESP + 0x8]           ; 0042efb6
        ;   Label: LAB_0042efb6
    FCOMP double ptr [0x006176a2]       ; 0042efba | DOUBLE_006176a2
    FNSTSW AX                           ; 0042efc0
    SAHF                                ; 0042efc2
    JBE 0x0042f086                      ; 0042efc3
        ;   XREF to: 0042f086 (CONDITIONAL_JUMP)  ; LAB_0042f086
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042efc9
    MOV dword ptr [ESP + 0x70],EAX      ; 0042efcd
    LEA EAX,[ESP + 0x68]                ; 0042efd1
    PUSH EAX                            ; 0042efd5
    LEA EAX,[ESP + 0xa8]                ; 0042efd6
    PUSH EAX                            ; 0042efdd
    LEA EAX,[ESP + 0x14]                ; 0042efde
    XOR ECX,ECX                         ; 0042efe2
    PUSH EAX                            ; 0042efe4
    MOV dword ptr [ESP + 0x74],ECX      ; 0042efe5
    MOV dword ptr [ESP + 0x78],ECX      ; 0042efe9
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 0042efed
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [ESI]                 ; 0042eff2
    FADD float ptr [EAX]                ; 0042eff4
    ADD ESP,0xc                         ; 0042eff6
    FSTP float ptr [ESP + 0xb0]         ; 0042eff9
    FLD float ptr [ESI + 0x4]           ; 0042f000
    FADD float ptr [EAX + 0x4]          ; 0042f003
    FSTP float ptr [ESP + 0xb4]         ; 0042f006
    FLD float ptr [ESI + 0x8]           ; 0042f00d
    FADD float ptr [EAX + 0x8]          ; 0042f010
    LEA EAX,[ESP + 0xb0]                ; 0042f013
    FSTP float ptr [ESP + 0xb8]         ; 0042f01a
    CMP EBX,EAX                         ; 0042f021
    JZ 0x0042f042                       ; 0042f023
        ;   XREF to: 0042f042 (CONDITIONAL_JUMP)  ; LAB_0042f042
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0042f025
    MOV dword ptr [EBX],EAX             ; 0042f02c
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0042f02e
    MOV dword ptr [EBX + 0x4],EAX       ; 0042f035
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0042f038
    MOV dword ptr [EBX + 0x8],EAX       ; 0042f03f
    PUSH 0x0                            ; 0042f042
        ;   Label: LAB_0042f042
    PUSH 0x0                            ; 0042f044
    PUSH 0x3f87558                      ; 0042f046 | g_ZeroVector
    PUSH 0x0                            ; 0042f04b
    PUSH EBX                            ; 0042f04d
    PUSH EDI                            ; 0042f04e
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 0042f04f
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr)
    ADD ESP,0x18                        ; 0042f054
    TEST EAX,EAX                        ; 0042f057
    JL 0x0042f20a                       ; 0042f059
        ;   XREF to: 0042f20a (CONDITIONAL_JUMP)  ; LAB_0042f20a
    MOV dword ptr [EDI + 0x2dd4],0x0    ; 0042f05f
    MOV EAX,0x2                         ; 0042f069
    MOV dword ptr [EDI + 0x2dc4],0xc0800000 ; 0042f06e
    MOV ESP,EBP                         ; 0042f078
    POP EBP                             ; 0042f07a
    POP EDI                             ; 0042f07b
    POP ESI                             ; 0042f07c
    POP EBX                             ; 0042f07d
    RET                                 ; 0042f07e
    XOR EAX,EAX                         ; 0042f07f
        ;   Label: LAB_0042f07f
    JMP 0x0042ef2f                      ; 0042f081
        ;   XREF to: 0042ef2f (UNCONDITIONAL_JUMP)  ; LAB_0042ef2f
    MOV EAX,dword ptr [ESP + 0xfc]      ; 0042f086
        ;   Label: LAB_0042f086
    INC EAX                             ; 0042f08d
    MOV dword ptr [ESP + 0xfc],EAX      ; 0042f08e
    CMP EAX,0x6                         ; 0042f095
    JL 0x0042ef4f                       ; 0042f098
        ;   XREF to: 0042ef4f (CONDITIONAL_JUMP)  ; LAB_0042ef4f
    FLD float ptr [ESP + 0x78]          ; 0042f09e
        ;   Label: LAB_0042f09e
    FABS                                ; 0042f0a2
    FCOMP double ptr [0x00617672]       ; 0042f0a4 | DOUBLE_00617672
    FNSTSW AX                           ; 0042f0aa
    SAHF                                ; 0042f0ac
    JA 0x0042ee2a                       ; 0042f0ad
        ;   XREF to: 0042ee2a (CONDITIONAL_JUMP)  ; LAB_0042ee2a
    FLD float ptr [ESP + 0x4]           ; 0042f0b3
    FCOMP double ptr [0x0061767a]       ; 0042f0b7 | DOUBLE_0061767a
    FNSTSW AX                           ; 0042f0bd
    SAHF                                ; 0042f0bf
    JA 0x0042ee2a                       ; 0042f0c0
        ;   XREF to: 0042ee2a (CONDITIONAL_JUMP)  ; LAB_0042ee2a
    FLD float ptr [ESP + 0x78]          ; 0042f0c6
    FMUL ST0                            ; 0042f0ca
    FLD float ptr [ESP + 0x74]          ; 0042f0cc
    FMUL ST0                            ; 0042f0d0
    FADDP                               ; 0042f0d2
    FLD float ptr [ESP + 0x7c]          ; 0042f0d4
    FMUL ST0                            ; 0042f0d8
    FADDP                               ; 0042f0da
    FSQRT                               ; 0042f0dc
    FCOMP double ptr [0x00617682]       ; 0042f0de | DOUBLE_00617682
    FNSTSW AX                           ; 0042f0e4
    SAHF                                ; 0042f0e6
    JA 0x0042ee2a                       ; 0042f0e7
        ;   XREF to: 0042ee2a (CONDITIONAL_JUMP)  ; LAB_0042ee2a
    FLD float ptr [EDI + 0x2dc4]        ; 0042f0ed
    FADD float ptr [EBP + 0x18]         ; 0042f0f3
    FST float ptr [EDI + 0x2dc4]        ; 0042f0f6
    FCOMP double ptr [0x0061768a]       ; 0042f0fc | DOUBLE_0061768a
    FNSTSW AX                           ; 0042f102
    SAHF                                ; 0042f104
    JC 0x0042ee34                       ; 0042f105
        ;   XREF to: 0042ee34 (CONDITIONAL_JUMP)  ; LAB_0042ee34
    MOV ESI,dword ptr [ESP + 0xec]      ; 0042f10b
    XOR EDX,EDX                         ; 0042f112
    LEA EBX,[EDI + 0x2dc8]              ; 0042f114
    MOV dword ptr [ESP + 0x100],EDX     ; 0042f11a
    ADD ESI,0x20                        ; 0042f121
    MOV EAX,dword ptr [ESP + 0x100]     ; 0042f124
        ;   Label: LAB_0042f124
    MOV EDX,EAX                         ; 0042f12b
    SAR EDX,0x1f                        ; 0042f12d
    SUB EAX,EDX                         ; 0042f130
    SAR EAX,0x1                         ; 0042f132
    MOV dword ptr [ESP + 0x104],EAX     ; 0042f134
    FILD dword ptr [ESP + 0x104]        ; 0042f13b
    FMUL double ptr [0x00617692]        ; 0042f142 | DOUBLE_00617692
    FMUL double ptr [0x0061769a]        ; 0042f148 | DOUBLE_0061769a
    MOV AH,byte ptr [ESP + 0x100]       ; 0042f14e
    FSTP float ptr [ESP + 0xf8]         ; 0042f155
    TEST AH,0x1                         ; 0042f15c
    JNZ 0x0042f21d                      ; 0042f15f
        ;   XREF to: 0042f21d (CONDITIONAL_JUMP)  ; LAB_0042f21d
    FLD float ptr [ESP + 0xf4]          ; 0042f165
        ;   Label: LAB_0042f165
    FADD float ptr [ESP + 0xf8]         ; 0042f16c
    FSTP float ptr [ESP + 0x104]        ; 0042f173
    MOV EAX,dword ptr [ESP + 0x104]     ; 0042f17a
    MOV dword ptr [ESP + 0xc0],EAX      ; 0042f181
    LEA EAX,[ESP + 0xbc]                ; 0042f188
    PUSH EAX                            ; 0042f18f
    LEA EAX,[ESP + 0x38]                ; 0042f190
    XOR ECX,ECX                         ; 0042f194
    PUSH EAX                            ; 0042f196
    MOV dword ptr [ESP + 0xc4],ECX      ; 0042f197
    MOV dword ptr [ESP + 0xcc],ECX      ; 0042f19e
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 0042f1a5
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV EDX,0x40900000                  ; 0042f1aa
    ADD ESP,0x8                         ; 0042f1af
    MOV dword ptr [ESP],EDX             ; 0042f1b2
    FLD float ptr [ESP]                 ; 0042f1b5
        ;   Label: LAB_0042f1b5
    FCOMP double ptr [0x006176a2]       ; 0042f1b8 | DOUBLE_006176a2
    FNSTSW AX                           ; 0042f1be
    SAHF                                ; 0042f1c0
    JA 0x0042f23b                       ; 0042f1c1
        ;   XREF to: 0042f23b (CONDITIONAL_JUMP)  ; LAB_0042f23b
    MOV ECX,dword ptr [ESP + 0x100]     ; 0042f1c3
    INC ECX                             ; 0042f1ca
    MOV dword ptr [ESP + 0x100],ECX     ; 0042f1cb
    CMP ECX,0x8                         ; 0042f1d2
    JLE 0x0042f124                      ; 0042f1d5
        ;   XREF to: 0042f124 (CONDITIONAL_JUMP)  ; LAB_0042f124
    PUSH EDI                            ; 0042f1db
    PUSH 0x617626                       ; 0042f1dc | = "%s was in the way, but couldn't figur..."
    MOV EDX,dword ptr [0x0066e8e0]      ; 0042f1e1 | g_ConsolePtr | g_CConsolePtr
    PUSH EDX                            ; 0042f1e7 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0042f1e8
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0042f1ed
    MOV dword ptr [EDI + 0x2dc4],0x0    ; 0042f1f0
    XOR EAX,EAX                         ; 0042f1fa
    MOV ESP,EBP                         ; 0042f1fc
    POP EBP                             ; 0042f1fe
    POP EDI                             ; 0042f1ff
    POP ESI                             ; 0042f200
    POP EBX                             ; 0042f201
    RET                                 ; 0042f202
    XOR AL,0x1                          ; 0042f203
        ;   Label: LAB_0042f203
    JMP 0x0042ef65                      ; 0042f205
        ;   XREF to: 0042ef65 (UNCONDITIONAL_JUMP)  ; LAB_0042ef65
    FLD float ptr [ESP + 0x8]           ; 0042f20a
        ;   Label: LAB_0042f20a
    FADD float ptr [0x006176aa]         ; 0042f20e | FLOAT_006176aa
    FSTP float ptr [ESP + 0x8]          ; 0042f214
    JMP 0x0042efb6                      ; 0042f218
        ;   XREF to: 0042efb6 (UNCONDITIONAL_JUMP)  ; LAB_0042efb6
    XOR byte ptr [ESP + 0xfb],0x80      ; 0042f21d
        ;   Label: LAB_0042f21d
    JMP 0x0042f165                      ; 0042f225
        ;   XREF to: 0042f165 (UNCONDITIONAL_JUMP)  ; LAB_0042f165
    FLD float ptr [ESP]                 ; 0042f22a
        ;   Label: LAB_0042f22a
    FADD float ptr [0x006176aa]         ; 0042f22d | FLOAT_006176aa
    FSTP float ptr [ESP]                ; 0042f233
    JMP 0x0042f1b5                      ; 0042f236
        ;   XREF to: 0042f1b5 (UNCONDITIONAL_JUMP)  ; LAB_0042f1b5
    MOV EAX,dword ptr [ESP]             ; 0042f23b
        ;   Label: LAB_0042f23b
    MOV dword ptr [ESP + 0xe8],EAX      ; 0042f23e
    LEA EAX,[ESP + 0xe0]                ; 0042f245
    PUSH EAX                            ; 0042f24c
    LEA EAX,[ESP + 0xcc]                ; 0042f24d
    PUSH EAX                            ; 0042f254
    LEA EAX,[ESP + 0x3c]                ; 0042f255
    XOR ECX,ECX                         ; 0042f259
    PUSH EAX                            ; 0042f25b
    MOV dword ptr [ESP + 0xec],ECX      ; 0042f25c
    MOV dword ptr [ESP + 0xf0],ECX      ; 0042f263
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 0042f26a
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [ESI]                 ; 0042f26f
    FADD float ptr [EAX]                ; 0042f271
    ADD ESP,0xc                         ; 0042f273
    FSTP float ptr [ESP + 0x80]         ; 0042f276
    FLD float ptr [ESI + 0x4]           ; 0042f27d
    FADD float ptr [EAX + 0x4]          ; 0042f280
    FSTP float ptr [ESP + 0x84]         ; 0042f283
    FLD float ptr [ESI + 0x8]           ; 0042f28a
    FADD float ptr [EAX + 0x8]          ; 0042f28d
    LEA EAX,[ESP + 0x80]                ; 0042f290
    FSTP float ptr [ESP + 0x88]         ; 0042f297
    CMP EBX,EAX                         ; 0042f29e
    JZ 0x0042f2bf                       ; 0042f2a0
        ;   XREF to: 0042f2bf (CONDITIONAL_JUMP)  ; LAB_0042f2bf
    MOV EAX,dword ptr [ESP + 0x80]      ; 0042f2a2
    MOV dword ptr [EBX],EAX             ; 0042f2a9
    MOV EAX,dword ptr [ESP + 0x84]      ; 0042f2ab
    MOV dword ptr [EBX + 0x4],EAX       ; 0042f2b2
    MOV EAX,dword ptr [ESP + 0x88]      ; 0042f2b5
    MOV dword ptr [EBX + 0x8],EAX       ; 0042f2bc
    PUSH 0x0                            ; 0042f2bf
        ;   Label: LAB_0042f2bf
    PUSH 0x0                            ; 0042f2c1
    PUSH 0x3f87558                      ; 0042f2c3 | g_ZeroVector
    PUSH 0x0                            ; 0042f2c8
    PUSH EBX                            ; 0042f2ca
    PUSH EDI                            ; 0042f2cb
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 0042f2cc
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr)
    ADD ESP,0x18                        ; 0042f2d1
    TEST EAX,EAX                        ; 0042f2d4
    JL 0x0042f22a                       ; 0042f2d6
        ;   XREF to: 0042f22a (CONDITIONAL_JUMP)  ; LAB_0042f22a
    MOV dword ptr [EDI + 0x2dd4],0x0    ; 0042f2dc
    MOV EAX,0x1                         ; 0042f2e6
    MOV dword ptr [EDI + 0x2dc4],0xc0a00000 ; 0042f2eb
    MOV ESP,EBP                         ; 0042f2f5
    POP EBP                             ; 0042f2f7
    POP EDI                             ; 0042f2f8
    POP ESI                             ; 0042f2f9
    POP EBX                             ; 0042f2fa
    RET                                 ; 0042f2fb


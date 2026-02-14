; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_cloth_cpp_CCloth_step_FUN_0043abb0(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   euler
; float            Stack[0x10]:4   delta_time
; float            Stack[0x14]:4   floor_y
; CDeformableModelInstance * Stack[0x18]:4   model_ptr
; Local Variables:
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined4       Stack[-0x1dc]:4  local_1dc
; undefined1       Stack[-0x1d8]:1  local_1d8
; undefined4       Stack[-0x1d0]:4  local_1d0
; undefined4       Stack[-0x1c4]:4  local_1c4
; undefined4       Stack[-0x1b8]:4  local_1b8
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined4       Stack[-0x1a8]:4  local_1a8
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined1       Stack[-0xcc]:1  local_cc
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined1       Stack[-0xa8]:1  local_a8
; undefined1       Stack[-0x9c]:1  local_9c
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
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
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_cloth.cpp_CCloth_process_FUN_0043ab80 at 0043ab9e
;
; Referenced Globals:
;   double DOUBLE_006184a2 = 9999
;   double DOUBLE_006184aa = 0.0100000000000000
;   double DOUBLE_006184b2 = -1
;   float FLOAT_0065bb3c = 256
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 DAT_0326eed8
;   undefined4 DAT_0326eedc
;   undefined4 DAT_0326eee0
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_cloth.cpp_CCloth_applyConstraints_FUN_0043a420
;   core_cloth.cpp_CCloth_computeBoneTransform_FUN_0043a2b0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043abb0
        ;   Label: core_cloth.cpp_CCloth_step_FUN_0043abb0
    PUSH ESI                            ; 0043abb1
    PUSH EDI                            ; 0043abb2
    PUSH EBP                            ; 0043abb3
    MOV EBP,ESP                         ; 0043abb4
    SUB ESP,0x1d0                       ; 0043abb6
    AND ESP,0xfffffff8                  ; 0043abbc
    MOV EDI,dword ptr [EBP + 0x14]      ; 0043abbf
    FLD float ptr [EBP + 0x24]          ; 0043abc2
    FCOMP double ptr [0x006184a2]       ; 0043abc5 | DOUBLE_006184a2
    FNSTSW AX                           ; 0043abcb
    SAHF                                ; 0043abcd
    JNC 0x0043b4d7                      ; 0043abce
        ;   XREF to: 0043b4d7 (CONDITIONAL_JUMP)  ; LAB_0043b4d7
    FLD float ptr [EBP + 0x20]          ; 0043abd4
        ;   Label: LAB_0043abd4
    FCOMP double ptr [0x006184aa]       ; 0043abd7 | DOUBLE_006184aa
    FNSTSW AX                           ; 0043abdd
    SAHF                                ; 0043abdf
    JNC 0x0043abe9                      ; 0043abe0
        ;   XREF to: 0043abe9 (CONDITIONAL_JUMP)  ; LAB_0043abe9
    MOV dword ptr [EBP + 0x20],0x3c23d70a ; 0043abe2
    FLD float ptr [EBP + 0x20]          ; 0043abe9
        ;   Label: LAB_0043abe9
    FLD1                                ; 0043abec
    FDIVRP                              ; 0043abee
    MOV EAX,dword ptr [EBP + 0x18]      ; 0043abf0
    FSTP float ptr [EDI + 0x3fe40]      ; 0043abf3
    FLD float ptr [EAX + 0x4]           ; 0043abf9
    FSUBR float ptr [EBP + 0x24]        ; 0043abfc
    MOV EBX,dword ptr [EBP + 0x28]      ; 0043abff
    FSTP float ptr [EDI + 0x3fe44]      ; 0043ac02
    TEST EBX,EBX                        ; 0043ac08
    JZ 0x0043ada0                       ; 0043ac0a
        ;   XREF to: 0043ada0 (CONDITIONAL_JUMP)  ; LAB_0043ada0
    XOR ESI,ESI                         ; 0043ac10
    MOV EAX,dword ptr [EDI + 0x3f028]   ; 0043ac12
    MOV dword ptr [ESP + 0x1a0],ESI     ; 0043ac18
    TEST EAX,EAX                        ; 0043ac1f
    JLE 0x0043ad7b                      ; 0043ac21
        ;   XREF to: 0043ad7b (CONDITIONAL_JUMP)  ; LAB_0043ad7b
    LEA EAX,[EBX + 0xe80]               ; 0043ac27
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0043ac2d
    LEA EAX,[EDI + 0x56d8]              ; 0043ac34
    MOV dword ptr [ESP + 0x1c4],EAX     ; 0043ac3a
    MOV dword ptr [ESP + 0x198],EDI     ; 0043ac41
    MOV EAX,dword ptr [ESP + 0x198]     ; 0043ac48
        ;   Label: LAB_0043ac48
    IMUL EBX,dword ptr [EAX + 0x3f02c],0x11c ; 0043ac4f
    ADD EBX,dword ptr [ESP + 0x1c4]     ; 0043ac59
    XOR ESI,ESI                         ; 0043ac60
    MOV dword ptr [EBX + 0x8],0x0       ; 0043ac62
    MOV dword ptr [ESP + 0x1b4],ESI     ; 0043ac69
    MOV EAX,dword ptr [EBX + 0xdc]      ; 0043ac70
    MOV EDX,dword ptr [EBX + 0x8]       ; 0043ac76
    MOV dword ptr [EBX + 0x4],EDX       ; 0043ac79
    MOV EDX,dword ptr [EBX + 0x4]       ; 0043ac7c
    MOV dword ptr [EBX],EDX             ; 0043ac7f
    TEST EAX,EAX                        ; 0043ac81
    JLE 0x0043ad4d                      ; 0043ac83
        ;   XREF to: 0043ad4d (CONDITIONAL_JUMP)  ; LAB_0043ad4d
    LEA ESI,[EBX + 0x110]               ; 0043ac89
    LEA EAX,[EBX + 0xec]                ; 0043ac8f
    MOV dword ptr [ESP + 0x1b8],EAX     ; 0043ac95
    MOV dword ptr [ESP + 0x1b0],EBX     ; 0043ac9c
    MOV EAX,dword ptr [ESP + 0x1b0]     ; 0043aca3
        ;   Label: LAB_0043aca3
    IMUL EAX,dword ptr [EAX + 0xe0],0x30 ; 0043acaa
    ADD EAX,dword ptr [ESP + 0x1a8]     ; 0043acb1
    PUSH EAX                            ; 0043acb8
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 0043acb9
    PUSH EAX                            ; 0043acc0
    LEA EAX,[ESP + 0x14c]               ; 0043acc1
    PUSH EAX                            ; 0043acc8
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0043acc9
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    FLD float ptr [EAX]                 ; 0043acce
    FMUL float ptr [ESI]                ; 0043acd0
    ADD ESP,0xc                         ; 0043acd2
    FSTP float ptr [ESP + 0x6c]         ; 0043acd5
    FLD float ptr [EAX + 0x4]           ; 0043acd9
    FMUL float ptr [ESI]                ; 0043acdc
    FSTP float ptr [ESP + 0x70]         ; 0043acde
    FLD float ptr [EAX + 0x8]           ; 0043ace2
    FMUL float ptr [ESI]                ; 0043ace5
    ADD ESI,0x4                         ; 0043ace7
    MOV EDX,dword ptr [ESP + 0x1b8]     ; 0043acea
    MOV ECX,dword ptr [ESP + 0x1b0]     ; 0043acf1
    ADD EDX,0xc                         ; 0043acf8
    ADD ECX,0x4                         ; 0043acfb
    MOV dword ptr [ESP + 0x1b8],EDX     ; 0043acfe
    MOV dword ptr [ESP + 0x1b0],ECX     ; 0043ad05
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 0043ad0c
    FSTP float ptr [ESP + 0x74]         ; 0043ad13
    INC EAX                             ; 0043ad17
    FLD float ptr [EBX + 0x4]           ; 0043ad18
    FLD float ptr [EBX]                 ; 0043ad1b
    FADD float ptr [ESP + 0x6c]         ; 0043ad1d
    FLD float ptr [EBX + 0x8]           ; 0043ad21
    FXCH                                ; 0043ad24
    FSTP float ptr [EBX]                ; 0043ad26
    FXCH                                ; 0043ad28
    FADD float ptr [ESP + 0x70]         ; 0043ad2a
    MOV dword ptr [ESP + 0x1b4],EAX     ; 0043ad2e
    FSTP float ptr [EBX + 0x4]          ; 0043ad35
    FADD float ptr [ESP + 0x74]         ; 0043ad38
    MOV EDX,dword ptr [EBX + 0xdc]      ; 0043ad3c
    FSTP float ptr [EBX + 0x8]          ; 0043ad42
    CMP EAX,EDX                         ; 0043ad45
    JL 0x0043aca3                       ; 0043ad47
        ;   XREF to: 0043aca3 (CONDITIONAL_JUMP)  ; LAB_0043aca3
    MOV EDX,dword ptr [ESP + 0x198]     ; 0043ad4d
        ;   Label: LAB_0043ad4d
    MOV ECX,dword ptr [ESP + 0x1a0]     ; 0043ad54
    MOV EBX,dword ptr [EDI + 0x3f028]   ; 0043ad5b
    ADD EDX,0x4                         ; 0043ad61
    INC ECX                             ; 0043ad64
    MOV dword ptr [ESP + 0x198],EDX     ; 0043ad65
    MOV dword ptr [ESP + 0x1a0],ECX     ; 0043ad6c
    CMP ECX,EBX                         ; 0043ad73
    JL 0x0043ac48                       ; 0043ad75
        ;   XREF to: 0043ac48 (CONDITIONAL_JUMP)  ; LAB_0043ac48
    MOV ESI,dword ptr [EDI + 0x3ce8c]   ; 0043ad7b
        ;   Label: LAB_0043ad7b
    XOR EBX,EBX                         ; 0043ad81
    TEST ESI,ESI                        ; 0043ad83
    JLE 0x0043ada0                      ; 0043ad85
        ;   XREF to: 0043ada0 (CONDITIONAL_JUMP)  ; LAB_0043ada0
    MOV EDX,dword ptr [EBP + 0x28]      ; 0043ad87
        ;   Label: LAB_0043ad87
    PUSH EDX                            ; 0043ad8a
    PUSH EBX                            ; 0043ad8b
    PUSH EDI                            ; 0043ad8c
    CALL core_cloth.cpp_CCloth_computeBoneTransform_FUN_0043a2b0 ; 0043ad8d
        ;   XREF to: 0043a2b0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_computeBoneTransform_FUN_0043a2b0(CCloth * this_ptr, int bone_index, CDeformableModelInstance * model_ptr)
    INC EBX                             ; 0043ad92
    MOV ECX,dword ptr [EDI + 0x3ce8c]   ; 0043ad93
    ADD ESP,0xc                         ; 0043ad99
    CMP EBX,ECX                         ; 0043ad9c
    JL 0x0043ad87                       ; 0043ad9e
        ;   XREF to: 0043ad87 (CONDITIONAL_JUMP)  ; LAB_0043ad87
    MOV ECX,dword ptr [EDI + 0x104]     ; 0043ada0
        ;   Label: LAB_0043ada0
    XOR ESI,ESI                         ; 0043ada6
    TEST ECX,ECX                        ; 0043ada8
    JLE 0x0043aeb3                      ; 0043adaa
        ;   XREF to: 0043aeb3 (CONDITIONAL_JUMP)  ; LAB_0043aeb3
    LEA EAX,[EDI + 0x3ce90]             ; 0043adb0
    MOV dword ptr [ESP + 0x1bc],EAX     ; 0043adb6
    LEA EAX,[EDI + 0x56d8]              ; 0043adbd
    MOV dword ptr [ESP + 0x1c0],EAX     ; 0043adc3
    MOV dword ptr [ESP + 0x15c],EDI     ; 0043adca
    IMUL EAX,ESI,0x11c                  ; 0043add1
        ;   Label: LAB_0043add1
    MOV dword ptr [ESP + 0x17c],EAX     ; 0043add7
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0043adde
    MOV EAX,dword ptr [EAX + 0x57b0]    ; 0043ade5
    CMP EAX,-0x1                        ; 0043adeb
    JZ 0x0043ae90                       ; 0043adee
        ;   XREF to: 0043ae90 (CONDITIONAL_JUMP)  ; LAB_0043ae90
    IMUL EAX,EAX,0xac                   ; 0043adf4
    MOV EBX,dword ptr [ESP + 0x1bc]     ; 0043adfa
    ADD EBX,EAX                         ; 0043ae01
    MOV EAX,dword ptr [EBX + 0x44]      ; 0043ae03
    MOV dword ptr [ESP + 0x160],EAX     ; 0043ae06
    XOR EAX,EAX                         ; 0043ae0d
    MOV dword ptr [ESP + 0x78],EAX      ; 0043ae0f
    MOV dword ptr [ESP + 0x7c],EAX      ; 0043ae13
    MOV EAX,dword ptr [ESP + 0x160]     ; 0043ae17
    MOV dword ptr [ESP + 0x80],EAX      ; 0043ae1e
    LEA EAX,[ESP + 0x78]                ; 0043ae25
    PUSH EAX                            ; 0043ae29
    LEA EAX,[ESP + 0x118]               ; 0043ae2a
    PUSH EAX                            ; 0043ae31
    LEA EAX,[EBX + 0x78]                ; 0043ae32
    PUSH EAX                            ; 0043ae35
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 0043ae36
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [EBX + 0xa0]          ; 0043ae3b
    FADD float ptr [EAX]                ; 0043ae41
    ADD ESP,0xc                         ; 0043ae43
    FSTP float ptr [ESP + 0x54]         ; 0043ae46
    FLD float ptr [EBX + 0xa4]          ; 0043ae4a
    FADD float ptr [EAX + 0x4]          ; 0043ae50
    MOV ECX,dword ptr [ESP + 0x17c]     ; 0043ae53
    FSTP float ptr [ESP + 0x58]         ; 0043ae5a
    FLD float ptr [EBX + 0xa8]          ; 0043ae5e
    MOV EBX,dword ptr [ESP + 0x1c0]     ; 0043ae64
    FADD float ptr [EAX + 0x8]          ; 0043ae6b
    ADD EBX,ECX                         ; 0043ae6e
    LEA EAX,[ESP + 0x54]                ; 0043ae70
    FSTP float ptr [ESP + 0x5c]         ; 0043ae74
    CMP EBX,EAX                         ; 0043ae78
    JZ 0x0043ae90                       ; 0043ae7a
        ;   XREF to: 0043ae90 (CONDITIONAL_JUMP)  ; LAB_0043ae90
    MOV EAX,dword ptr [ESP + 0x54]      ; 0043ae7c
    MOV dword ptr [EBX],EAX             ; 0043ae80
    MOV EAX,dword ptr [ESP + 0x58]      ; 0043ae82
    MOV dword ptr [EBX + 0x4],EAX       ; 0043ae86
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0043ae89
    MOV dword ptr [EBX + 0x8],EAX       ; 0043ae8d
    MOV EBX,dword ptr [ESP + 0x15c]     ; 0043ae90
        ;   Label: LAB_0043ae90
    INC ESI                             ; 0043ae97
    ADD EBX,0x11c                       ; 0043ae98
    MOV EAX,dword ptr [EDI + 0x104]     ; 0043ae9e
    MOV dword ptr [ESP + 0x15c],EBX     ; 0043aea4
    CMP ESI,EAX                         ; 0043aeab
    JL 0x0043add1                       ; 0043aead
        ;   XREF to: 0043add1 (CONDITIONAL_JUMP)  ; LAB_0043add1
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0043aeb3
        ;   Label: LAB_0043aeb3
    PUSH EDX                            ; 0043aeb6
    LEA EAX,[ESP + 0xc]                 ; 0043aeb7
    PUSH EAX                            ; 0043aebb
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 0043aebc
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0043aec1
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043aec4
    MOV dword ptr [ESP + 0xcc],EAX      ; 0043aec8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0043aecf
    MOV dword ptr [ESP + 0xd0],EAX      ; 0043aed3
    MOV EAX,dword ptr [ESP + 0x28]      ; 0043aeda
    MOV EDX,dword ptr [0x006810c8]      ; 0043aede | g_CDemonSetPtr
    MOV dword ptr [ESP + 0xd4],EAX      ; 0043aee4
    MOV EAX,dword ptr [EDX + 0x15ac60]  ; 0043aeeb | DAT_0326eed8
    ADD EDX,0x15ac60                    ; 0043aef1 | DAT_0326eed8
    MOV dword ptr [ESP + 0x150],EAX     ; 0043aef7
    LEA EAX,[EDX + 0x4]                 ; 0043aefe | DAT_0326eedc
    MOV EAX,dword ptr [EAX]             ; 0043af01 | DAT_0326eedc
    MOV dword ptr [ESP + 0x154],EAX     ; 0043af03
    FLD float ptr [ESP + 0x154]         ; 0043af0a
    FMUL ST0                            ; 0043af11
    LEA EAX,[EDX + 0x8]                 ; 0043af13 | DAT_0326eee0
    FLD float ptr [ESP + 0x150]         ; 0043af16
    FMUL ST0                            ; 0043af1d
    MOV EAX,dword ptr [EAX]             ; 0043af1f | DAT_0326eee0
    FADDP                               ; 0043af21
    MOV dword ptr [ESP + 0x158],EAX     ; 0043af23
    FLD float ptr [ESP + 0x158]         ; 0043af2a
    FMUL ST0                            ; 0043af31
    FADDP                               ; 0043af33
    FSQRT                               ; 0043af35
    FST float ptr [ESP + 0x4]           ; 0043af37
    FLDZ                                ; 0043af3b
    FCOMPP                              ; 0043af3d
    FNSTSW AX                           ; 0043af3f
    SAHF                                ; 0043af41
    JNC 0x0043b4e3                      ; 0043af42
        ;   XREF to: 0043b4e3 (CONDITIONAL_JUMP)  ; LAB_0043b4e3
    FLD1                                ; 0043af48
    FLD float ptr [ESP + 0x150]         ; 0043af4a
    FXCH                                ; 0043af51
    FDIV float ptr [ESP + 0x4]          ; 0043af53
    FXCH                                ; 0043af57
    FMUL ST1                            ; 0043af59
    FLD float ptr [ESP + 0x154]         ; 0043af5b
    FMUL ST2                            ; 0043af62
    FLD float ptr [ESP + 0x158]         ; 0043af64
    FMULP ST3                           ; 0043af6b
    FXCH                                ; 0043af6d
    FSTP float ptr [ESP + 0x150]        ; 0043af6f
    FSTP float ptr [ESP + 0x154]        ; 0043af76
    FSTP float ptr [ESP + 0x158]        ; 0043af7d
    FLD float ptr [ESP + 0x154]         ; 0043af84
        ;   Label: LAB_0043af84
    FMUL float ptr [ESP + 0xd0]         ; 0043af8b
    FLD float ptr [ESP + 0x150]         ; 0043af92
    FMUL float ptr [ESP + 0xcc]         ; 0043af99
    FADDP                               ; 0043afa0
    FLD float ptr [ESP + 0x158]         ; 0043afa2
    FMUL float ptr [ESP + 0xd4]         ; 0043afa9
    FADDP                               ; 0043afb0
    FST float ptr [ESP + 0x1c8]         ; 0043afb2
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 0043afb9
    FLDZ                                ; 0043afc0
    MOV dword ptr [ESP],EAX             ; 0043afc2
    FCOMPP                              ; 0043afc5
    FNSTSW AX                           ; 0043afc7
    SAHF                                ; 0043afc9
    JNC 0x0043afd1                      ; 0043afca
        ;   XREF to: 0043afd1 (CONDITIONAL_JUMP)  ; LAB_0043afd1
    XOR EAX,EAX                         ; 0043afcc
    MOV dword ptr [ESP],EAX             ; 0043afce
    FLD float ptr [ESP]                 ; 0043afd1
        ;   Label: LAB_0043afd1
    MOV EAX,[0x006810c8]                ; 0043afd4 | g_CDemonSetPtr
    FMUL double ptr [0x006184b2]        ; 0043afd9 | DOUBLE_006184b2
    FLD float ptr [EAX + 0x15ac60]      ; 0043afdf | DAT_0326eed8
    FXCH                                ; 0043afe5
    FSTP float ptr [ESP]                ; 0043afe7
    FMUL float ptr [ESP]                ; 0043afea
    FSTP float ptr [ESP + 0x108]        ; 0043afed
    FLD float ptr [EAX + 0x15ac64]      ; 0043aff4 | DAT_0326eedc
    FMUL float ptr [ESP]                ; 0043affa
    FSTP float ptr [ESP + 0x10c]        ; 0043affd
    FLD float ptr [EAX + 0x15ac68]      ; 0043b004 | DAT_0326eee0
    LEA EAX,[ESP + 0x108]               ; 0043b00a
    FMUL float ptr [ESP]                ; 0043b011
    PUSH EAX                            ; 0043b014
    LEA EAX,[ESP + 0x13c]               ; 0043b015
    PUSH EAX                            ; 0043b01c
    LEA EAX,[ESP + 0x10]                ; 0043b01d
    LEA EBX,[EDI + 0x3fe64]             ; 0043b021
    PUSH EAX                            ; 0043b027
    FSTP float ptr [ESP + 0x11c]        ; 0043b028
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 0043b02f
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [EAX]                 ; 0043b034
    FADD float ptr [EBX]                ; 0043b036
    ADD ESP,0xc                         ; 0043b038
    FSTP float ptr [ESP + 0x48]         ; 0043b03b
    FLD float ptr [EAX + 0x4]           ; 0043b03f
    FADD float ptr [EBX + 0x4]          ; 0043b042
    FSTP float ptr [ESP + 0x4c]         ; 0043b045
    FLD float ptr [EAX + 0x8]           ; 0043b049
    FADD float ptr [EBX + 0x8]          ; 0043b04c
    MOV EDX,dword ptr [EBP + 0x18]      ; 0043b04f
    FSTP float ptr [ESP + 0x50]         ; 0043b052
    MOV dword ptr [EBX + 0x8],0x0       ; 0043b056
    LEA EAX,[EDI + 0x3fe48]             ; 0043b05d
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043b063
    MOV dword ptr [EBX + 0x4],ECX       ; 0043b066
    MOV ECX,dword ptr [EBX + 0x4]       ; 0043b069
    MOV dword ptr [EBX],ECX             ; 0043b06c
    FLD float ptr [EDX]                 ; 0043b06e
    FSUB float ptr [EAX]                ; 0043b070
    FSTP float ptr [ESP + 0x90]         ; 0043b072
    FLD float ptr [EDX + 0x4]           ; 0043b079
    FSUB float ptr [EAX + 0x4]          ; 0043b07c
    FSTP float ptr [ESP + 0x94]         ; 0043b07f
    FLD float ptr [EDX + 0x8]           ; 0043b086
    FSUB float ptr [EAX + 0x8]          ; 0043b089
    FSTP float ptr [ESP + 0x98]         ; 0043b08c
    CMP EAX,EDX                         ; 0043b093
    JZ 0x0043b0a7                       ; 0043b095
        ;   XREF to: 0043b0a7 (CONDITIONAL_JUMP)  ; LAB_0043b0a7
    MOV ECX,dword ptr [EDX]             ; 0043b097
    MOV dword ptr [EAX],ECX             ; 0043b099
    MOV ECX,dword ptr [EDX + 0x4]       ; 0043b09b
    MOV dword ptr [EAX + 0x4],ECX       ; 0043b09e
    MOV ECX,dword ptr [EDX + 0x8]       ; 0043b0a1
    MOV dword ptr [EAX + 0x8],ECX       ; 0043b0a4
    LEA EAX,[ESP + 0x90]                ; 0043b0a7
        ;   Label: LAB_0043b0a7
    PUSH EAX                            ; 0043b0ae
    LEA EAX,[ESP + 0x88]                ; 0043b0af
    PUSH EAX                            ; 0043b0b6
    LEA EAX,[ESP + 0x10]                ; 0043b0b7
    PUSH EAX                            ; 0043b0bb
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 0043b0bc
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0043b0c1
    FLD1                                ; 0043b0c4
    FLD float ptr [ESP + 0x84]          ; 0043b0c6
    FXCH                                ; 0043b0cd
    FDIV float ptr [EBP + 0x20]         ; 0043b0cf
    FXCH                                ; 0043b0d2
    FMUL ST1                            ; 0043b0d4
    FLD float ptr [ESP + 0x88]          ; 0043b0d6
    FMUL ST2                            ; 0043b0dd
    FLD float ptr [ESP + 0x8c]          ; 0043b0df
    FXCH ST2                            ; 0043b0e6
    FST float ptr [ESP + 0x12c]         ; 0043b0e8
    FSUB float ptr [ESP + 0x48]         ; 0043b0ef
    FXCH ST2                            ; 0043b0f3
    FMUL ST3                            ; 0043b0f5
    FXCH ST2                            ; 0043b0f7
    FST float ptr [ESP + 0x60]          ; 0043b0f9
    FMUL ST3                            ; 0043b0fd
    FXCH                                ; 0043b0ff
    FSTP float ptr [ESP + 0x130]        ; 0043b101
    FXCH                                ; 0043b108
    FST float ptr [ESP + 0x134]         ; 0043b10a
    FLD float ptr [ESP + 0x130]         ; 0043b111
    FSUB float ptr [ESP + 0x4c]         ; 0043b118
    FXCH                                ; 0043b11c
    FSUB float ptr [ESP + 0x50]         ; 0043b11e
    FXCH                                ; 0043b122
    FST float ptr [ESP + 0x64]          ; 0043b124
    FMUL ST3                            ; 0043b128
    FXCH                                ; 0043b12a
    FST float ptr [ESP + 0x68]          ; 0043b12c
    FMULP ST3                           ; 0043b130
    LEA EAX,[EDI + 0x3fe54]             ; 0043b132
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0043b138
    FXCH                                ; 0043b13b
    FSTP float ptr [ESP + 0xd8]         ; 0043b13d
    FSTP float ptr [ESP + 0xdc]         ; 0043b144
    FSTP float ptr [ESP + 0xe0]         ; 0043b14b
    FLD float ptr [EDX]                 ; 0043b152
    FSUB float ptr [EAX]                ; 0043b154
    FSTP float ptr [ESP + 0xfc]         ; 0043b156
    FLD float ptr [EDX + 0x4]           ; 0043b15d
    FSUB float ptr [EAX + 0x4]          ; 0043b160
    FSTP float ptr [ESP + 0x100]        ; 0043b163
    FLD float ptr [EDX + 0x8]           ; 0043b16a
    FSUB float ptr [EAX + 0x8]          ; 0043b16d
    FSTP float ptr [ESP + 0x104]        ; 0043b170
    CMP EAX,EDX                         ; 0043b177
    JZ 0x0043b18b                       ; 0043b179
        ;   XREF to: 0043b18b (CONDITIONAL_JUMP)  ; LAB_0043b18b
    MOV ECX,dword ptr [EDX]             ; 0043b17b
    MOV dword ptr [EAX],ECX             ; 0043b17d
    MOV ECX,dword ptr [EDX + 0x4]       ; 0043b17f
    MOV dword ptr [EAX + 0x4],ECX       ; 0043b182
    MOV ECX,dword ptr [EDX + 0x8]       ; 0043b185
    MOV dword ptr [EAX + 0x8],ECX       ; 0043b188
    PUSH dword ptr [ESP + 0x100]        ; 0043b18b
        ;   Label: LAB_0043b18b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 0043b192
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x1d0],EAX     ; 0043b197
    FLD float ptr [ESP + 0x1d0]         ; 0043b19e
    ADD ESP,0x4                         ; 0043b1a5
    FLD1                                ; 0043b1a8
    FDIV float ptr [EBP + 0x20]         ; 0043b1aa
    FXCH                                ; 0043b1ad
    FMUL ST1                            ; 0043b1af
    FMULP                               ; 0043b1b1
    MOV EBX,dword ptr [EDI + 0x104]     ; 0043b1b3
    XOR EDX,EDX                         ; 0043b1b9
    FSTP float ptr [ESP + 0x168]        ; 0043b1bb
    TEST EBX,EBX                        ; 0043b1c2
    JLE 0x0043b271                      ; 0043b1c4
        ;   XREF to: 0043b271 (CONDITIONAL_JUMP)  ; LAB_0043b271
    LEA EAX,[EDI + 0x56d8]              ; 0043b1ca
    MOV dword ptr [ESP + 0x174],EAX     ; 0043b1d0
    LEA EAX,[EDI + 0x57a4]              ; 0043b1d7
    MOV dword ptr [ESP + 0x194],EAX     ; 0043b1dd
    MOV ESI,EDI                         ; 0043b1e4
    LEA EAX,[EDI + 0x56e4]              ; 0043b1e6
    IMUL EBX,EDX,0x11c                  ; 0043b1ec
        ;   Label: LAB_0043b1ec
    MOV dword ptr [EAX + 0x8],0x0       ; 0043b1f2
    MOV ECX,dword ptr [ESP + 0x174]     ; 0043b1f9
    FLD float ptr [EAX + 0x8]           ; 0043b200
    FST float ptr [EAX + 0x4]           ; 0043b203
    FSTP float ptr [EAX]                ; 0043b206
    MOV dword ptr [ESI + 0x5790],0x0    ; 0043b208
    ADD EBX,ECX                         ; 0043b212
    MOV ECX,dword ptr [ESP + 0x194]     ; 0043b214
    MOV dword ptr [ESI + 0x5794],0x0    ; 0043b21b
    CMP EBX,ECX                         ; 0043b225
    JZ 0x0043b243                       ; 0043b227
        ;   XREF to: 0043b243 (CONDITIONAL_JUMP)  ; LAB_0043b243
    MOV ECX,dword ptr [EBX]             ; 0043b229
    MOV dword ptr [EAX + 0xc0],ECX      ; 0043b22b
    MOV ECX,dword ptr [EBX + 0x4]       ; 0043b231
    MOV dword ptr [EAX + 0xc4],ECX      ; 0043b234
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043b23a
    MOV dword ptr [EAX + 0xc8],ECX      ; 0043b23d
    MOV EBX,dword ptr [ESP + 0x194]     ; 0043b243
        ;   Label: LAB_0043b243
    ADD ESI,0x11c                       ; 0043b24a
    ADD EAX,0x11c                       ; 0043b250
    INC EDX                             ; 0043b255
    ADD EBX,0x11c                       ; 0043b256
    MOV ECX,dword ptr [EDI + 0x104]     ; 0043b25c
    MOV dword ptr [ESP + 0x194],EBX     ; 0043b262
    CMP EDX,ECX                         ; 0043b269
    JL 0x0043b1ec                       ; 0043b26b
        ;   XREF to: 0043b1ec (CONDITIONAL_JUMP)  ; LAB_0043b1ec
    FLD float ptr [EDI + 0x3ce58]       ; 0043b271
        ;   Label: LAB_0043b271
    FCHS                                ; 0043b277
    FSTP float ptr [ESP + 0x1cc]        ; 0043b279
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 0043b280
    MOV dword ptr [ESP + 0xac],EAX      ; 0043b287
    LEA EAX,[ESP + 0xa8]                ; 0043b28e
    PUSH EAX                            ; 0043b295
    LEA EAX,[ESP + 0xa0]                ; 0043b296
    PUSH EAX                            ; 0043b29d
    LEA EAX,[ESP + 0x10]                ; 0043b29e
    XOR EBX,EBX                         ; 0043b2a2
    PUSH EAX                            ; 0043b2a4
    MOV dword ptr [ESP + 0xb4],EBX      ; 0043b2a5
    MOV dword ptr [ESP + 0xbc],EBX      ; 0043b2ac
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 0043b2b3
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [EDI + 0x3ce58]       ; 0043b2b8
    FDIV float ptr [EDI + 0x3ce5c]      ; 0043b2be
    ADD ESP,0xc                         ; 0043b2c4
    MOV EDX,dword ptr [EDI + 0x104]     ; 0043b2c7
    MOV dword ptr [ESP + 0x19c],EBX     ; 0043b2cd
    FSTP float ptr [ESP + 0x1a4]        ; 0043b2d4
    TEST EDX,EDX                        ; 0043b2db
    JLE 0x0043b377                      ; 0043b2dd
        ;   XREF to: 0043b377 (CONDITIONAL_JUMP)  ; LAB_0043b377
    FLD float ptr [ESP + 0x168]         ; 0043b2e3
    LEA EAX,[EDI + 0x3ce60]             ; 0043b2ea
    FMUL float ptr [ESP + 0x1a4]        ; 0043b2f0
    MOV dword ptr [ESP + 0x184],EAX     ; 0043b2f7
    LEA EAX,[EDI + 0x3ce70]             ; 0043b2fe
    MOV dword ptr [ESP + 0x188],EBX     ; 0043b304
    MOV dword ptr [ESP + 0x18c],EAX     ; 0043b30b
    LEA EAX,[EDI + 0x56d8]              ; 0043b312
    FSTP float ptr [ESP + 0x178]        ; 0043b318
    MOV dword ptr [ESP + 0x16c],EAX     ; 0043b31f
    MOV ESI,dword ptr [ESP + 0x188]     ; 0043b326
        ;   Label: LAB_0043b326
    MOV EAX,dword ptr [EDI + 0x3fe3c]   ; 0043b32d
    ADD EAX,ESI                         ; 0043b333
    IMUL EBX,dword ptr [EAX],0x11c      ; 0043b335
    ADD EBX,dword ptr [ESP + 0x16c]     ; 0043b33b
    MOV ESI,dword ptr [EBX + 0x74]      ; 0043b342
    TEST ESI,ESI                        ; 0043b345
    JZ 0x0043b4ff                       ; 0043b347
        ;   XREF to: 0043b4ff (CONDITIONAL_JUMP)  ; LAB_0043b4ff
    MOV EBX,dword ptr [ESP + 0x188]     ; 0043b34d
        ;   Label: LAB_0043b34d
    MOV ESI,dword ptr [ESP + 0x19c]     ; 0043b354
    MOV EDX,dword ptr [EDI + 0x104]     ; 0043b35b
    ADD EBX,0x4                         ; 0043b361
    INC ESI                             ; 0043b364
    MOV dword ptr [ESP + 0x188],EBX     ; 0043b365
    MOV dword ptr [ESP + 0x19c],ESI     ; 0043b36c
    CMP ESI,EDX                         ; 0043b373
    JL 0x0043b326                       ; 0043b375
        ;   XREF to: 0043b326 (CONDITIONAL_JUMP)  ; LAB_0043b326
    LEA EAX,[EDI + 0x56d8]              ; 0043b377
        ;   Label: LAB_0043b377
    XOR ECX,ECX                         ; 0043b37d
    MOV dword ptr [ESP + 0x1ac],EAX     ; 0043b37f
    MOV dword ptr [ESP + 0x190],ECX     ; 0043b386
    MOV EBX,dword ptr [EDI + 0x104]     ; 0043b38d
        ;   Label: LAB_0043b38d
    XOR ESI,ESI                         ; 0043b393
    TEST EBX,EBX                        ; 0043b395
    JLE 0x0043b3c7                      ; 0043b397
        ;   XREF to: 0043b3c7 (CONDITIONAL_JUMP)  ; LAB_0043b3c7
    XOR EBX,EBX                         ; 0043b399
    MOV EAX,dword ptr [EDI + 0x3fe3c]   ; 0043b39b
        ;   Label: LAB_0043b39b
    IMUL EAX,dword ptr [EBX + EAX*0x1],0x11c ; 0043b3a1
    ADD EAX,dword ptr [ESP + 0x1ac]     ; 0043b3a8
    CMP dword ptr [EAX + 0x74],0x0      ; 0043b3af
    JZ 0x0043b77b                       ; 0043b3b3
        ;   XREF to: 0043b77b (CONDITIONAL_JUMP)  ; LAB_0043b77b
    INC ESI                             ; 0043b3b9
        ;   Label: LAB_0043b3b9
    MOV EAX,dword ptr [EDI + 0x104]     ; 0043b3ba
    ADD EBX,0x4                         ; 0043b3c0
    CMP ESI,EAX                         ; 0043b3c3
    JL 0x0043b39b                       ; 0043b3c5
        ;   XREF to: 0043b39b (CONDITIONAL_JUMP)  ; LAB_0043b39b
    MOV EDX,dword ptr [ESP + 0x190]     ; 0043b3c7
        ;   Label: LAB_0043b3c7
    INC EDX                             ; 0043b3ce
    MOV dword ptr [ESP + 0x190],EDX     ; 0043b3cf
    CMP EDX,0x5                         ; 0043b3d6
    JL 0x0043b38d                       ; 0043b3d9
        ;   XREF to: 0043b38d (CONDITIONAL_JUMP)  ; LAB_0043b38d
    MOV EBX,dword ptr [EDI + 0x104]     ; 0043b3db
    XOR ECX,ECX                         ; 0043b3e1
    TEST EBX,EBX                        ; 0043b3e3
    JLE 0x0043b47c                      ; 0043b3e5
        ;   XREF to: 0043b47c (CONDITIONAL_JUMP)  ; LAB_0043b47c
    LEA EAX,[EDI + 0x3ce6c]             ; 0043b3eb
    LEA EDX,[EDI + 0x3ce68]             ; 0043b3f1
    MOV dword ptr [ESP + 0x180],EAX     ; 0043b3f7
    LEA EAX,[EDI + 0x56d8]              ; 0043b3fe
    XOR ESI,ESI                         ; 0043b404
    MOV dword ptr [ESP + 0x170],EAX     ; 0043b406
    MOV EAX,dword ptr [EDI + 0x3fe3c]   ; 0043b40d
        ;   Label: LAB_0043b40d
    IMUL EAX,dword ptr [ESI + EAX*0x1],0x11c ; 0043b413
    MOV EBX,dword ptr [ESP + 0x170]     ; 0043b41a
    ADD EBX,EAX                         ; 0043b421
    CMP dword ptr [EBX + 0xb8],0x0      ; 0043b423
    JZ 0x0043b445                       ; 0043b42a
        ;   XREF to: 0043b445 (CONDITIONAL_JUMP)  ; LAB_0043b445
    LEA EAX,[EBX + 0x24]                ; 0043b42c
    FLD float ptr [EDX]                 ; 0043b42f
    FMUL float ptr [EAX]                ; 0043b431
    FSTP float ptr [EAX]                ; 0043b433
    FLD float ptr [EDX]                 ; 0043b435
    FMUL float ptr [EAX + 0x4]          ; 0043b437
    FSTP float ptr [EAX + 0x4]          ; 0043b43a
    FLD float ptr [EDX]                 ; 0043b43d
    FMUL float ptr [EAX + 0x8]          ; 0043b43f
    FSTP float ptr [EAX + 0x8]          ; 0043b442
    CMP dword ptr [EBX + 0xbc],0x0      ; 0043b445
        ;   Label: LAB_0043b445
    JZ 0x0043b46e                       ; 0043b44c
        ;   XREF to: 0043b46e (CONDITIONAL_JUMP)  ; LAB_0043b46e
    LEA EAX,[EBX + 0x24]                ; 0043b44e
    MOV EBX,dword ptr [ESP + 0x180]     ; 0043b451
    FLD float ptr [EBX]                 ; 0043b458
    FMUL float ptr [EAX]                ; 0043b45a
    FSTP float ptr [EAX]                ; 0043b45c
    FLD float ptr [EBX]                 ; 0043b45e
    FMUL float ptr [EAX + 0x4]          ; 0043b460
    FSTP float ptr [EAX + 0x4]          ; 0043b463
    FLD float ptr [EBX]                 ; 0043b466
    FMUL float ptr [EAX + 0x8]          ; 0043b468
    FSTP float ptr [EAX + 0x8]          ; 0043b46b
    INC ECX                             ; 0043b46e
        ;   Label: LAB_0043b46e
    MOV EBX,dword ptr [EDI + 0x104]     ; 0043b46f
    ADD ESI,0x4                         ; 0043b475
    CMP ECX,EBX                         ; 0043b478
    JL 0x0043b40d                       ; 0043b47a
        ;   XREF to: 0043b40d (CONDITIONAL_JUMP)  ; LAB_0043b40d
    MOV ESI,dword ptr [EDI + 0x104]     ; 0043b47c
        ;   Label: LAB_0043b47c
    XOR ECX,ECX                         ; 0043b482
    TEST ESI,ESI                        ; 0043b484
    JLE 0x0043b4d0                      ; 0043b486
        ;   XREF to: 0043b4d0 (CONDITIONAL_JUMP)  ; LAB_0043b4d0
    LEA ESI,[EDI + 0x56d8]              ; 0043b488
    XOR EDX,EDX                         ; 0043b48e
    MOV EBX,dword ptr [EDI + 0x10c]     ; 0043b490
        ;   Label: LAB_0043b490
    MOV EAX,ESI                         ; 0043b496
    ADD EBX,EDX                         ; 0043b498
    INC ECX                             ; 0043b49a
    FLD float ptr [EAX]                 ; 0043b49b
    FMUL float ptr [0x0065bb3c]         ; 0043b49d | FLOAT_0065bb3c
    FISTP dword ptr [EBX]               ; 0043b4a3
    FLD float ptr [EAX + 0x4]           ; 0043b4a5
    FMUL float ptr [0x0065bb3c]         ; 0043b4a8 | FLOAT_0065bb3c
    FISTP dword ptr [EBX + 0x4]         ; 0043b4ae
    FLD float ptr [EAX + 0x8]           ; 0043b4b1
    FMUL float ptr [0x0065bb3c]         ; 0043b4b4 | FLOAT_0065bb3c
    FISTP dword ptr [EBX + 0x8]         ; 0043b4ba
    ADD ESI,0x11c                       ; 0043b4bd
    MOV EBX,dword ptr [EDI + 0x104]     ; 0043b4c3
    ADD EDX,0xc                         ; 0043b4c9
    CMP ECX,EBX                         ; 0043b4cc
    JL 0x0043b490                       ; 0043b4ce
        ;   XREF to: 0043b490 (CONDITIONAL_JUMP)  ; LAB_0043b490
    MOV ESP,EBP                         ; 0043b4d0
        ;   Label: LAB_0043b4d0
    POP EBP                             ; 0043b4d2
    POP EDI                             ; 0043b4d3
    POP ESI                             ; 0043b4d4
    POP EBX                             ; 0043b4d5
    RET                                 ; 0043b4d6
    MOV dword ptr [EBP + 0x24],0xc61c3c00 ; 0043b4d7
        ;   Label: LAB_0043b4d7
    JMP 0x0043abd4                      ; 0043b4de
        ;   XREF to: 0043abd4 (UNCONDITIONAL_JUMP)  ; LAB_0043abd4
    XOR ECX,ECX                         ; 0043b4e3
        ;   Label: LAB_0043b4e3
    MOV dword ptr [ESP + 0x154],ECX     ; 0043b4e5
    MOV dword ptr [ESP + 0x150],ECX     ; 0043b4ec
    MOV dword ptr [ESP + 0x158],ECX     ; 0043b4f3
    JMP 0x0043af84                      ; 0043b4fa
        ;   XREF to: 0043af84 (UNCONDITIONAL_JUMP)  ; LAB_0043af84
    MOV EDX,dword ptr [ESP + 0x184]     ; 0043b4ff
        ;   Label: LAB_0043b4ff
    LEA EAX,[EBX + 0x24]                ; 0043b506
    FLD float ptr [EDX]                 ; 0043b509
    FMUL float ptr [EAX]                ; 0043b50b
    FSTP float ptr [EAX]                ; 0043b50d
    FLD float ptr [EDX]                 ; 0043b50f
    FMUL float ptr [EAX + 0x4]          ; 0043b511
    FSTP float ptr [EAX + 0x4]          ; 0043b514
    FLD float ptr [EDX]                 ; 0043b517
    FMUL float ptr [EAX + 0x8]          ; 0043b519
    FSTP float ptr [EAX + 0x8]          ; 0043b51c
    FLD float ptr [ESP + 0x1a4]         ; 0043b51f
    FLD float ptr [ESP + 0xd8]          ; 0043b526
    FMUL ST1                            ; 0043b52d
    FLD float ptr [ESP + 0xdc]          ; 0043b52f
    FMUL ST2                            ; 0043b536
    FLD float ptr [ESP + 0xe0]          ; 0043b538
    FMUL ST3                            ; 0043b53f
    MOV EAX,dword ptr [ESP + 0x18c]     ; 0043b541
    FXCH ST2                            ; 0043b548
    FSTP float ptr [ESP + 0x120]        ; 0043b54a
    FSTP float ptr [ESP + 0x124]        ; 0043b551
    FSTP float ptr [ESP + 0x128]        ; 0043b558
    FLD float ptr [ESP + 0x120]         ; 0043b55f
    FMUL float ptr [EAX]                ; 0043b566
    FLD float ptr [ESP + 0x124]         ; 0043b568
    FXCH                                ; 0043b56f
    FSTP float ptr [ESP + 0x30]         ; 0043b571
    FMUL float ptr [EAX]                ; 0043b575
    FLD float ptr [ESP + 0x128]         ; 0043b577
    FXCH                                ; 0043b57e
    FSTP float ptr [ESP + 0x34]         ; 0043b580
    FMUL float ptr [EAX]                ; 0043b584
    LEA EAX,[EBX + 0xc]                 ; 0043b586
    FSTP float ptr [ESP + 0x38]         ; 0043b589
    FLD float ptr [EAX]                 ; 0043b58d
    FSUB float ptr [ESP + 0x30]         ; 0043b58f
    FLD float ptr [EAX + 0x4]           ; 0043b593
    FXCH                                ; 0043b596
    FSTP float ptr [EAX]                ; 0043b598
    FSUB float ptr [ESP + 0x34]         ; 0043b59a
    FLD float ptr [EAX + 0x8]           ; 0043b59e
    FXCH                                ; 0043b5a1
    FSTP float ptr [EAX + 0x4]          ; 0043b5a3
    FSUB float ptr [ESP + 0x38]         ; 0043b5a6
    FLD float ptr [EAX]                 ; 0043b5aa
    FXCH                                ; 0043b5ac
    FSTP float ptr [EAX + 0x8]          ; 0043b5ae
    FADD float ptr [ESP + 0x9c]         ; 0043b5b1
    FLD float ptr [EAX + 0x4]           ; 0043b5b8
    FXCH                                ; 0043b5bb
    FSTP float ptr [EAX]                ; 0043b5bd
    FADD float ptr [ESP + 0xa0]         ; 0043b5bf
    FLD float ptr [EAX + 0x8]           ; 0043b5c6
    FXCH                                ; 0043b5c9
    FSTP float ptr [EAX + 0x4]          ; 0043b5cb
    FADD float ptr [ESP + 0xa4]         ; 0043b5ce
    FLD float ptr [ESP + 0x178]         ; 0043b5d5
    FXCH                                ; 0043b5dc
    FSTP float ptr [EAX + 0x8]          ; 0043b5de
    FMUL float ptr [EDI + 0x3ce74]      ; 0043b5e1
    FLD1                                ; 0043b5e7
    FDIVRP ST2,ST0                      ; 0043b5e9
    FSTP float ptr [ESP + 0x164]        ; 0043b5eb
    MOV dword ptr [ESP + 0x3c],ESI      ; 0043b5f2
    MOV EDX,dword ptr [ESP + 0x164]     ; 0043b5f6
    MOV dword ptr [ESP + 0x44],ESI      ; 0043b5fd
    MOV dword ptr [ESP + 0x40],EDX      ; 0043b601
    FLDZ                                ; 0043b605
    FMUL float ptr [EBX + 0x4]          ; 0043b607
    FLD float ptr [EBX + 0x8]           ; 0043b60a
    FMUL float ptr [ESP + 0x164]        ; 0043b60d
    FSUBP                               ; 0043b614
    FLDZ                                ; 0043b616
    FXCH                                ; 0043b618
    FSTP float ptr [ESP + 0xf0]         ; 0043b61a
    FMUL float ptr [EBX + 0x8]          ; 0043b621
    FLDZ                                ; 0043b624
    FMUL float ptr [EBX]                ; 0043b626
    FSUBP                               ; 0043b628
    FSTP float ptr [ESP + 0xf4]         ; 0043b62a
    FLD float ptr [EBX]                 ; 0043b631
    FMUL float ptr [ESP + 0x164]        ; 0043b633
    FLDZ                                ; 0043b63a
    FMUL float ptr [EBX + 0x4]          ; 0043b63c
    FSUBP                               ; 0043b63f
    FSTP float ptr [ESP + 0xf8]         ; 0043b641
    FLD float ptr [EAX + 0x4]           ; 0043b648
    FLD float ptr [EAX]                 ; 0043b64b
    FADD float ptr [ESP + 0xf0]         ; 0043b64d
    FLD float ptr [EAX + 0x8]           ; 0043b654
    FXCH                                ; 0043b657
    FSTP float ptr [EAX]                ; 0043b659
    FXCH                                ; 0043b65b
    FADD float ptr [ESP + 0xf4]         ; 0043b65d
    FLD float ptr [EAX]                 ; 0043b664
    FXCH                                ; 0043b666
    FSTP float ptr [EAX + 0x4]          ; 0043b668
    FXCH                                ; 0043b66b
    FADD float ptr [ESP + 0xf8]         ; 0043b66d
    FXCH                                ; 0043b674
    FMUL ST2                            ; 0043b676
    FXCH                                ; 0043b678
    FSTP float ptr [EAX + 0x8]          ; 0043b67a
    FSTP float ptr [ESP + 0xb4]         ; 0043b67d
    FLD float ptr [EAX + 0x4]           ; 0043b684
    FMUL ST1                            ; 0043b687
    FSTP float ptr [ESP + 0xb8]         ; 0043b689
    FMUL float ptr [EAX + 0x8]          ; 0043b690
    LEA ESI,[EBX + 0x18]                ; 0043b693
    LEA EAX,[ESP + 0xb4]                ; 0043b696
    FSTP float ptr [ESP + 0xbc]         ; 0043b69d
    CMP ESI,EAX                         ; 0043b6a4
    JZ 0x0043b6c5                       ; 0043b6a6
        ;   XREF to: 0043b6c5 (CONDITIONAL_JUMP)  ; LAB_0043b6c5
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0043b6a8
    MOV dword ptr [ESI],EAX             ; 0043b6af
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0043b6b1
    MOV dword ptr [ESI + 0x4],EAX       ; 0043b6b8
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0043b6bb
    MOV dword ptr [ESI + 0x8],EAX       ; 0043b6c2
    LEA EAX,[EBX + 0x18]                ; 0043b6c5
        ;   Label: LAB_0043b6c5
    FLD float ptr [EBP + 0x20]          ; 0043b6c8
    FLD float ptr [EAX]                 ; 0043b6cb
    FMUL ST1                            ; 0043b6cd
    FSTP float ptr [ESP + 0xe4]         ; 0043b6cf
    FLD float ptr [EAX + 0x4]           ; 0043b6d6
    FMUL ST1                            ; 0043b6d9
    FSTP float ptr [ESP + 0xe8]         ; 0043b6db
    FLD float ptr [EAX + 0x8]           ; 0043b6e2
    FMUL ST1                            ; 0043b6e5
    LEA EAX,[EBX + 0x24]                ; 0043b6e7
    FSTP float ptr [ESP + 0xec]         ; 0043b6ea
    FLD float ptr [EAX + 0x4]           ; 0043b6f1
    FLD float ptr [EAX]                 ; 0043b6f4
    FADD float ptr [ESP + 0xe4]         ; 0043b6f6
    FLD float ptr [EAX + 0x8]           ; 0043b6fd
    FXCH                                ; 0043b700
    FSTP float ptr [EAX]                ; 0043b702
    FXCH                                ; 0043b704
    FADD float ptr [ESP + 0xe8]         ; 0043b706
    FLD float ptr [EAX]                 ; 0043b70d
    FXCH                                ; 0043b70f
    FSTP float ptr [EAX + 0x4]          ; 0043b711
    FXCH                                ; 0043b714
    FADD float ptr [ESP + 0xec]         ; 0043b716
    FXCH                                ; 0043b71d
    FMUL ST2                            ; 0043b71f
    FXCH                                ; 0043b721
    FSTP float ptr [EAX + 0x8]          ; 0043b723
    FSTP float ptr [ESP + 0xc0]         ; 0043b726
    FLD float ptr [EAX + 0x4]           ; 0043b72d
    FMUL ST1                            ; 0043b730
    FSTP float ptr [ESP + 0xc4]         ; 0043b732
    FMUL float ptr [EAX + 0x8]          ; 0043b739
    PUSH EBX                            ; 0043b73c
    FSTP float ptr [ESP + 0xcc]         ; 0043b73d
    FLD float ptr [EBX]                 ; 0043b744
    FADD float ptr [ESP + 0xc4]         ; 0043b746
    FLD float ptr [EBX + 0x4]           ; 0043b74d
    FXCH                                ; 0043b750
    FSTP float ptr [EBX]                ; 0043b752
    FADD float ptr [ESP + 0xc8]         ; 0043b754
    FLD float ptr [EBX + 0x8]           ; 0043b75b
    FXCH                                ; 0043b75e
    FSTP float ptr [EBX + 0x4]          ; 0043b760
    FADD float ptr [ESP + 0xcc]         ; 0043b763
    PUSH EDI                            ; 0043b76a
    FSTP float ptr [EBX + 0x8]          ; 0043b76b
    CALL core_cloth.cpp_CCloth_applyConstraints_FUN_0043a420 ; 0043b76e
        ;   XREF to: 0043a420 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_applyConstraints_FUN_0043a420(CCloth * this_ptr, SClothVertex * vertex)
    ADD ESP,0x8                         ; 0043b773
    JMP 0x0043b34d                      ; 0043b776
        ;   XREF to: 0043b34d (UNCONDITIONAL_JUMP)  ; LAB_0043b34d
    PUSH EAX                            ; 0043b77b
        ;   Label: LAB_0043b77b
    PUSH EDI                            ; 0043b77c
    CALL core_cloth.cpp_CCloth_applyConstraints_FUN_0043a420 ; 0043b77d
        ;   XREF to: 0043a420 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_applyConstraints_FUN_0043a420(CCloth * this_ptr, SClothVertex * vertex)
    ADD ESP,0x8                         ; 0043b782
    JMP 0x0043b3b9                      ; 0043b785
        ;   XREF to: 0043b3b9 (UNCONDITIONAL_JUMP)  ; LAB_0043b3b9


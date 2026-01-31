; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_scat_cpp_FUN_00556f90(void)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_0064124b
;   string s_Bip01_L_Clavicle_00641256
;   TerminatedCString s_Bip01_R_Clavicle_00641267
;   TerminatedCString s_Bip01_L_UpperArm_00641278
;   string s_Bip01_R_UpperArm_00641289
;   TerminatedCString s_Bip01_L_ForeArm_0064129a
;   TerminatedCString s_Bip01_R_ForeArm_006412aa
;   TerminatedCString s_Bip01_L_Foot_006412ba
;   TerminatedCString s_Bip01_R_Foot_006412c7
;   TerminatedCString s_Bip01_L_Thigh_006412d4
;   TerminatedCString s_Bip01_R_Thigh_006412e2
;   TerminatedCString s_Bip01_L_Calf_006412f0
;   TerminatedCString s_Bip01_R_Calf_006412fd
;   TerminatedCString s_Bip01_L_Hand_0064130a
;   TerminatedCString s_Bip01_R_Hand_00641317
;   ... and 22 more
;
; Called Functions:
;   core_hero.cpp_CHero_setup_FUN_004f2540
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00556f90
        ;   Label: core_scat.cpp_FUN_00556f90
    PUSH ESI                            ; 00556f91
    MOV ESI,dword ptr [ESP + 0xc]       ; 00556f92
    PUSH ESI                            ; 00556f96
    CALL core_hero.cpp_CHero_setup_FUN_004f2540 ; 00556f97
        ;   XREF to: 004f2540 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_setup_FUN_004f2540(CHero * this_ptr)
    ADD ESP,0x4                         ; 00556f9c
    LEA EAX,[ESI + 0x158]               ; 00556f9f
    PUSH EAX                            ; 00556fa5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 00556fa6
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00556fab
    PUSH 0x1                            ; 00556fae
    PUSH 0x64124b                       ; 00556fb0 | = "Bip01 head"
    PUSH EAX                            ; 00556fb5
    MOV EBX,EAX                         ; 00556fb6
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00556fb8
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00556fbd
    PUSH 0x1                            ; 00556fc0
    PUSH 0x641256                       ; 00556fc2 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 00556fc7
    MOV [0x0310615c],EAX                ; 00556fc8 | INT_0310615c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00556fcd
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00556fd2
    PUSH 0x1                            ; 00556fd5
    PUSH 0x641267                       ; 00556fd7 | = "Bip01 R Clavicle"
    PUSH EBX                            ; 00556fdc
    MOV [0x03106160],EAX                ; 00556fdd | INT_03106160
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00556fe2
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00556fe7
    PUSH 0x1                            ; 00556fea
    PUSH 0x641278                       ; 00556fec | = "Bip01 L UpperArm"
    PUSH EBX                            ; 00556ff1
    MOV [0x03106164],EAX                ; 00556ff2 | INT_03106164
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00556ff7
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00556ffc
    PUSH 0x1                            ; 00556fff
    PUSH 0x641289                       ; 00557001 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 00557006
    MOV [0x03106168],EAX                ; 00557007 | INT_03106168
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0055700c
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00557011
    PUSH 0x1                            ; 00557014
    PUSH 0x64129a                       ; 00557016 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 0055701b
    MOV [0x0310616c],EAX                ; 0055701c | INT_0310616c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00557021
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00557026
    PUSH 0x1                            ; 00557029
    PUSH 0x6412aa                       ; 0055702b | = "Bip01 R ForeArm"
    PUSH EBX                            ; 00557030
    MOV [0x03106170],EAX                ; 00557031 | INT_03106170
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00557036
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0055703b
    PUSH 0x1                            ; 0055703e
    PUSH 0x6412ba                       ; 00557040 | = "Bip01 L Foot"
    PUSH EBX                            ; 00557045
    MOV [0x03106174],EAX                ; 00557046 | INT_03106174
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0055704b
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00557050
    PUSH 0x1                            ; 00557053
    PUSH 0x6412c7                       ; 00557055 | = "Bip01 R Foot"
    PUSH EBX                            ; 0055705a
    MOV [0x03106178],EAX                ; 0055705b | INT_03106178
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00557060
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00557065
    MOV [0x0310617c],EAX                ; 00557068 | INT_0310617c
    PUSH 0x1                            ; 0055706d
    PUSH 0x6412d4                       ; 0055706f | = "Bip01 L Thigh"
    PUSH EBX                            ; 00557074
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00557075
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0055707a
    PUSH 0x1                            ; 0055707d
    PUSH 0x6412e2                       ; 0055707f | = "Bip01 R Thigh"
    PUSH EBX                            ; 00557084
    MOV [0x03106180],EAX                ; 00557085 | INT_03106180
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0055708a
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0055708f
    PUSH 0x1                            ; 00557092
    PUSH 0x6412f0                       ; 00557094 | = "Bip01 L Calf"
    PUSH EBX                            ; 00557099
    MOV [0x03106184],EAX                ; 0055709a | INT_03106184
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0055709f
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005570a4
    PUSH 0x1                            ; 005570a7
    PUSH 0x6412fd                       ; 005570a9 | = "Bip01 R Calf"
    PUSH EBX                            ; 005570ae
    MOV [0x03106188],EAX                ; 005570af | INT_03106188
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005570b4
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005570b9
    PUSH 0x1                            ; 005570bc
    PUSH 0x64130a                       ; 005570be | = "Bip01 L Hand"
    PUSH EBX                            ; 005570c3
    MOV [0x0310618c],EAX                ; 005570c4 | INT_0310618c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005570c9
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005570ce
    PUSH 0x1                            ; 005570d1
    PUSH 0x641317                       ; 005570d3 | = "Bip01 R Hand"
    PUSH EBX                            ; 005570d8
    MOV [0x03106190],EAX                ; 005570d9 | INT_03106190
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005570de
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005570e3
    PUSH 0x1                            ; 005570e6
    PUSH 0x641324                       ; 005570e8 | = "Bip01 Spine2"
    PUSH EBX                            ; 005570ed
    MOV [0x03106194],EAX                ; 005570ee | INT_03106194
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005570f3
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005570f8
    PUSH 0x1                            ; 005570fb
    PUSH 0x641331                       ; 005570fd | = "Bip01 Spine"
    PUSH EBX                            ; 00557102
    MOV [0x03106198],EAX                ; 00557103 | INT_03106198
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00557108
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0055710d
    PUSH 0x1                            ; 00557110
    PUSH 0x64133d                       ; 00557112 | = "Bip01 Spine1"
    PUSH EBX                            ; 00557117
    MOV [0x031061a0],EAX                ; 00557118 | INT_031061a0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0055711d
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00557122
    PUSH 0x1                            ; 00557125
    PUSH 0x64134a                       ; 00557127 | = "Bip01 Spine1"
    PUSH EBX                            ; 0055712c
    MOV [0x0310619c],EAX                ; 0055712d | INT_0310619c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00557132
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    MOV dword ptr [ESI + 0x1fbd4],0x0   ; 00557137
    ADD ESP,0xc                         ; 00557141
    MOV dword ptr [ESI + 0x25c4],EAX    ; 00557144
    POP ESI                             ; 0055714a
    POP EBX                             ; 0055714b
    RET                                 ; 0055714c


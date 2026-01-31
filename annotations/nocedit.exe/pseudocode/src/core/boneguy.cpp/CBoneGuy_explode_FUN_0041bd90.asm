; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_boneguy_cpp_CBoneGuy_explode_FUN_0041bd90(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_00615f99
;   TerminatedCString s_Bip01_L_ForeArm_00615fa4
;   TerminatedCString s_Bip01_R_ForeArm_00615fb4
;   TerminatedCString s_Bip01_L_UpperArm_00615fc4
;   TerminatedCString s_Bip01_R_UpperArm_00615fd5
;   TerminatedCString s_Bip01_L_Foot_00615fe6
;   TerminatedCString s_Bip01_R_Foot_00615ff3
;   TerminatedCString s_Bip01_L_Hand_00616000
;   TerminatedCString s_Bip01_R_Hand_0061600d
;   TerminatedCString s_Bip01_Spine_0061601a
;   TerminatedCString s_Bip01_Spine2_00616026
;   TerminatedCString s_Bip01_Head_00616033
;   TerminatedCString s_Bip01_L_UpperArm_0061603e
;   TerminatedCString s_Bip01_R_UpperArm_0061604f
;   TerminatedCString s_Bip01_Spine_00616060
;   ... and 16 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004a9650
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041bd90
        ;   Label: core_boneguy.cpp_CBoneGuy_explode_FUN_0041bd90
    PUSH ESI                            ; 0041bd91
    PUSH EDI                            ; 0041bd92
    MOV ESI,dword ptr [ESP + 0x10]      ; 0041bd93
    LEA EDI,[ESI + 0x158]               ; 0041bd97
    PUSH EDI                            ; 0041bd9d
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 0041bd9e
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041bda3
    PUSH EDI                            ; 0041bda6
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0041bda7
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041bdac
    PUSH 0x1                            ; 0041bdaf
    PUSH 0x615f99                       ; 0041bdb1 | = "Bip01 Head"
    PUSH EAX                            ; 0041bdb6
    MOV EBX,EAX                         ; 0041bdb7
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0041bdb9
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0041bdbe
    PUSH 0x1                            ; 0041bdc1
    PUSH 0x615fa4                       ; 0041bdc3 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 0041bdc8
    MOV [0x00822944],EAX                ; 0041bdc9 | DAT_00822944
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0041bdce
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0041bdd3
    PUSH 0x1                            ; 0041bdd6
    PUSH 0x615fb4                       ; 0041bdd8 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 0041bddd
    MOV [0x00822950],EAX                ; 0041bdde | INT_00822950
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0041bde3
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0041bde8
    PUSH 0x1                            ; 0041bdeb
    PUSH 0x615fc4                       ; 0041bded | = "Bip01 L UpperArm"
    PUSH EBX                            ; 0041bdf2
    MOV [0x00822954],EAX                ; 0041bdf3 | INT_00822954
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0041bdf8
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0041bdfd
    PUSH 0x1                            ; 0041be00
    PUSH 0x615fd5                       ; 0041be02 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 0041be07
    MOV [0x00822958],EAX                ; 0041be08 | INT_00822958
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0041be0d
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0041be12
    PUSH 0x1                            ; 0041be15
    PUSH 0x615fe6                       ; 0041be17 | = "Bip01 L Foot"
    PUSH EBX                            ; 0041be1c
    MOV [0x0082295c],EAX                ; 0041be1d | INT_0082295c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0041be22
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0041be27
    PUSH 0x1                            ; 0041be2a
    PUSH 0x615ff3                       ; 0041be2c | = "Bip01 R Foot"
    PUSH EBX                            ; 0041be31
    MOV [0x00822960],EAX                ; 0041be32 | INT_00822960
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0041be37
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0041be3c
    PUSH 0x1                            ; 0041be3f
    PUSH 0x616000                       ; 0041be41 | = "Bip01 L Hand"
    PUSH EBX                            ; 0041be46
    MOV [0x00822964],EAX                ; 0041be47 | INT_00822964
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0041be4c
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0041be51
    PUSH 0x1                            ; 0041be54
    PUSH 0x61600d                       ; 0041be56 | = "Bip01 R Hand"
    PUSH EBX                            ; 0041be5b
    MOV [0x00822948],EAX                ; 0041be5c | DAT_00822948
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0041be61
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0041be66
    MOV [0x0082294c],EAX                ; 0041be69 | DAT_0082294c
    PUSH 0x1                            ; 0041be6e
    PUSH 0x61601a                       ; 0041be70 | = "Bip01 Spine"
    PUSH EBX                            ; 0041be75
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0041be76
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0041be7b
    PUSH 0x1                            ; 0041be7e
    PUSH 0x616026                       ; 0041be80 | = "Bip01 Spine2"
    PUSH EBX                            ; 0041be85
    MOV [0x00822968],EAX                ; 0041be86 | DAT_00822968
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0041be8b
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0041be90
    PUSH 0x1                            ; 0041be93
    PUSH 0x616033                       ; 0041be95 | = "Bip01 Head"
    PUSH EBX                            ; 0041be9a
    MOV [0x0082296c],EAX                ; 0041be9b | DAT_0082296c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0041bea0
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0041bea5
    PUSH 0x1                            ; 0041bea8
    PUSH 0x61603e                       ; 0041beaa | = "Bip01 L UpperArm"
    PUSH EBX                            ; 0041beaf
    MOV [0x00822944],EAX                ; 0041beb0 | DAT_00822944
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0041beb5
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0041beba
    PUSH 0x1                            ; 0041bebd
    PUSH 0x61604f                       ; 0041bebf | = "Bip01 R UpperArm"
    PUSH EBX                            ; 0041bec4
    MOV [0x00822958],EAX                ; 0041bec5 | INT_00822958
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0041beca
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0041becf
    PUSH 0x1                            ; 0041bed2
    PUSH 0x616060                       ; 0041bed4 | = "Bip01 Spine"
    PUSH EBX                            ; 0041bed9
    MOV [0x0082295c],EAX                ; 0041beda | INT_0082295c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0041bedf
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0041bee4
    PUSH 0x1                            ; 0041bee7
    PUSH 0x61606c                       ; 0041bee9 | = "Bip01 Spine2"
    PUSH EBX                            ; 0041beee
    MOV [0x00822968],EAX                ; 0041beef | DAT_00822968
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0041bef4
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0041bef9
    PUSH EDI                            ; 0041befc
    MOV [0x0082296c],EAX                ; 0041befd | DAT_0082296c
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 0041bf02
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x7140]    ; 0041bf07
    ADD ESP,0x4                         ; 0041bf0d
    MOV dword ptr [ESI + 0xbf38],EAX    ; 0041bf10
    CMP EAX,0x14                        ; 0041bf16
    JG 0x0041bf48                       ; 0041bf19
        ;   XREF to: 0041bf48 (CONDITIONAL_JUMP)  ; LAB_0041bf48
    MOV EAX,[0x00822948]                ; 0041bf1b | DAT_00822948
        ;   Label: LAB_0041bf1b
    MOV dword ptr [ESI + 0x24ac],EAX    ; 0041bf20
    MOV EAX,[0x0082294c]                ; 0041bf26 | DAT_0082294c
    PUSH ESI                            ; 0041bf2b
    MOV dword ptr [ESI + 0x24f0],EAX    ; 0041bf2c
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a9650 ; 0041bf32
        ;   XREF to: 004a9650 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a9650(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0041bf37
    MOV dword ptr [ESI + 0xbecc],0x0    ; 0041bf3a
    POP EDI                             ; 0041bf44
    POP ESI                             ; 0041bf45
    POP EBX                             ; 0041bf46
    RET                                 ; 0041bf47
    MOV ECX,0x616079                    ; 0041bf48 | = "..\\core\\boneguy.cpp"
        ;   Label: LAB_0041bf48
    MOV EBX,0x12f                       ; 0041bf4d
    PUSH 0x61608d                       ; 0041bf52 | = "CBoneGuy::explode - Not enough contai..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0041bf57 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0041bf5d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0041bf63
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0041bf68
    JMP 0x0041bf1b                      ; 0041bf6b
        ;   XREF to: 0041bf1b (UNCONDITIONAL_JUMP)  ; LAB_0041bf1b


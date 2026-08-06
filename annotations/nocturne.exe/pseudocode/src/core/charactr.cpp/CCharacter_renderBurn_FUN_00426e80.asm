; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_renderBurn_FUN_00426e80(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20 at 00425c4d
;
; Referenced Globals:
;   double DOUBLE_0057a002 = 65535
;   float FLOAT_0059b090 = 3
;   undefined4 DAT_005ad1fc
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_00765aa0
;   undefined4 DAT_00765aa4
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00426e80
        ;   Label: core_charactr.cpp_CCharacter_renderBurn_FUN_00426e80
    PUSH ESI                            ; 00426e81
    PUSH EDI                            ; 00426e82
    PUSH EBP                            ; 00426e83
    MOV EBP,ESP                         ; 00426e84
    SUB ESP,0x20                        ; 00426e86
    AND ESP,0xfffffff8                  ; 00426e89
    MOV EAX,dword ptr [EBP + 0x14]      ; 00426e8c
    CMP dword ptr [EAX + 0x2f08],0x0    ; 00426e8f
    JNZ 0x00426e9f                      ; 00426e96
        ;   XREF to: 00426e9f (CONDITIONAL_JUMP)  ; LAB_00426e9f
    MOV ESP,EBP                         ; 00426e98
    POP EBP                             ; 00426e9a
    POP EDI                             ; 00426e9b
    POP ESI                             ; 00426e9c
    POP EBX                             ; 00426e9d
    RET                                 ; 00426e9e
    PUSH 0x5ad1fc                       ; 00426e9f | DAT_005ad1fc
        ;   Label: LAB_00426e9f
    MOV ECX,dword ptr [0x005ae704]      ; 00426ea4 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 00426eaa | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00426eab
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00426eb0
    MOV EAX,dword ptr [EBP + 0x14]      ; 00426eb3
    MOV EDI,dword ptr [EBP + 0x14]      ; 00426eb6
    MOV EBX,dword ptr [EAX + 0xb640]    ; 00426eb9
    ADD EDI,0x150                       ; 00426ebf
    TEST EBX,EBX                        ; 00426ec5
    JNZ 0x00427034                      ; 00426ec7
        ;   XREF to: 00427034 (CONDITIONAL_JUMP)  ; LAB_00427034
    PUSH EDI                            ; 00426ecd
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 00426ece
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00426ed3
    PUSH EDI                            ; 00426ed6
    MOV ESI,EAX                         ; 00426ed7
    MOV EBX,EAX                         ; 00426ed9
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 00426edb
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00426ee0
    MOV dword ptr [ESP + 0x10],EAX      ; 00426ee3
    MOV EAX,dword ptr [EBP + 0x14]      ; 00426ee7
    MOV EAX,dword ptr [EAX + 0x2380]    ; 00426eea
    MOV EDI,dword ptr [ESI + 0x28558]   ; 00426ef0
    MOV dword ptr [ESP + 0x8],EAX       ; 00426ef6
    XOR EAX,EAX                         ; 00426efa
    TEST EDI,EDI                        ; 00426efc
    JLE 0x00426f20                      ; 00426efe
        ;   XREF to: 00426f20 (CONDITIONAL_JUMP)  ; LAB_00426f20
    XOR EDX,EDX                         ; 00426f00
    XOR ECX,ECX                         ; 00426f02
        ;   Label: LAB_00426f02
    MOV dword ptr [EDX + 0x765aa0],ECX  ; 00426f04 | DAT_00765aa0 | DAT_00765aa4
    INC EAX                             ; 00426f0a
    MOV ESI,dword ptr [EBX + 0x28558]   ; 00426f0b
    ADD EDX,0x4                         ; 00426f11
    CMP EAX,ESI                         ; 00426f14
    JL 0x00426f02                       ; 00426f16
        ;   XREF to: 00426f02 (CONDITIONAL_JUMP)  ; LAB_00426f02
    LEA EAX,[EAX]                       ; 00426f18
    MOV EDX,EDX                         ; 00426f1e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00426f20
        ;   Label: LAB_00426f20
    MOV EDI,dword ptr [EAX + 0x2f08]    ; 00426f23
    XOR ECX,ECX                         ; 00426f29
    TEST EDI,EDI                        ; 00426f2b
    JLE 0x00426f74                      ; 00426f2d
        ;   XREF to: 00426f74 (CONDITIONAL_JUMP)  ; LAB_00426f74
    FLD float ptr [0x0059b090]          ; 00426f2f | FLOAT_0059b090
    FLD double ptr [0x0057a002]         ; 00426f35 | DOUBLE_0057a002
    MOV EDX,EAX                         ; 00426f3b
    FLD float ptr [EDX + 0x2f28]        ; 00426f3d
        ;   Label: LAB_00426f3d
    MOV EAX,dword ptr [EDX + 0x2f18]    ; 00426f43
    FMUL ST1                            ; 00426f49
    FLD float ptr [EAX*0x4 + 0x765aa0]  ; 00426f4b | DAT_00765aa0
    FLD ST3                             ; 00426f52
    FDIVP ST2,ST0                       ; 00426f54
    FADDP                               ; 00426f56
    FSTP float ptr [EAX*0x4 + 0x765aa0] ; 00426f58 | DAT_00765aa0
    MOV EAX,dword ptr [EBP + 0x14]      ; 00426f5f
    INC ECX                             ; 00426f62
    MOV ESI,dword ptr [EAX + 0x2f08]    ; 00426f63
    ADD EDX,0x18                        ; 00426f69
    CMP ECX,ESI                         ; 00426f6c
    JL 0x00426f3d                       ; 00426f6e
        ;   XREF to: 00426f3d (CONDITIONAL_JUMP)  ; LAB_00426f3d
    FSTP ST0                            ; 00426f70
    FSTP ST0                            ; 00426f72
    MOV EDI,dword ptr [EBX + 0x28558]   ; 00426f74
        ;   Label: LAB_00426f74
    XOR ECX,ECX                         ; 00426f7a
    XOR EDX,EDX                         ; 00426f7c
    TEST EDI,EDI                        ; 00426f7e
    JLE 0x00426fb1                      ; 00426f80
        ;   XREF to: 00426fb1 (CONDITIONAL_JUMP)  ; LAB_00426fb1
    MOV EDI,dword ptr [ESP + 0x10]      ; 00426f82
    FLD float ptr [ECX*0x4 + 0x765aa0]  ; 00426f86 | DAT_00765aa0 | DAT_00765aa4
        ;   Label: LAB_00426f86
    FCOMP double ptr [0x0057a002]       ; 00426f8d | DOUBLE_0057a002
    FNSTSW AX                           ; 00426f93
    SAHF                                ; 00426f95
    JC 0x00426f99                       ; 00426f96
        ;   XREF to: 00426f99 (CONDITIONAL_JUMP)  ; LAB_00426f99
    INC EDX                             ; 00426f98
    CMP dword ptr [EDI + 0x288c],-0x1   ; 00426f99
        ;   Label: LAB_00426f99
    JNZ 0x00426fa3                      ; 00426fa0
        ;   XREF to: 00426fa3 (CONDITIONAL_JUMP)  ; LAB_00426fa3
    INC EDX                             ; 00426fa2
    INC ECX                             ; 00426fa3
        ;   Label: LAB_00426fa3
    MOV EAX,dword ptr [EBX + 0x28558]   ; 00426fa4
    ADD EDI,0x4                         ; 00426faa
    CMP ECX,EAX                         ; 00426fad
    JL 0x00426f86                       ; 00426faf
        ;   XREF to: 00426f86 (CONDITIONAL_JUMP)  ; LAB_00426f86
    CMP EDX,dword ptr [EBX + 0x28558]   ; 00426fb1
        ;   Label: LAB_00426fb1
    JZ 0x0042704f                       ; 00426fb7
        ;   XREF to: 0042704f (CONDITIONAL_JUMP)  ; LAB_0042704f
    MOV EAX,dword ptr [ESP + 0x8]       ; 00426fbd
        ;   Label: LAB_00426fbd
    XOR EDI,EDI                         ; 00426fc1
    SHL EAX,0x2                         ; 00426fc3
    MOV dword ptr [ESP + 0x14],EDI      ; 00426fc6
    MOV dword ptr [ESP + 0x18],EDI      ; 00426fca
    MOV dword ptr [ESP + 0xc],EAX       ; 00426fce
    MOV EAX,dword ptr [ESP + 0x10]      ; 00426fd2
        ;   Label: LAB_00426fd2
    ADD EAX,dword ptr [ESP + 0xc]       ; 00426fd6
    CMP EDI,dword ptr [EAX + 0x2c]      ; 00426fda
    JGE 0x004270b8                      ; 00426fdd
        ;   XREF to: 004270b8 (CONDITIONAL_JUMP)  ; LAB_004270b8
    MOV ESI,dword ptr [EAX + 0x40]      ; 00426fe3
    XOR EBX,EBX                         ; 00426fe6
    MOV EAX,dword ptr [ESP + 0x14]      ; 00426fe8
    XOR EDX,EDX                         ; 00426fec
    ADD ESI,EAX                         ; 00426fee
    MOV dword ptr [ESP],EBX             ; 00426ff0
    MOV ECX,ESI                         ; 00426ff3
    MOV EBX,ESI                         ; 00426ff5
    XOR EAX,EAX                         ; 00426ff7
        ;   Label: LAB_00426ff7
    MOV AL,byte ptr [ESI]               ; 00426ff9
    CMP EDX,EAX                         ; 00426ffb
    JGE 0x0042706b                      ; 00426ffd
        ;   XREF to: 0042706b (CONDITIONAL_JUMP)  ; LAB_0042706b
    XOR EAX,EAX                         ; 00427003
    MOV AL,byte ptr [EBX + 0x1]         ; 00427005
    FLD float ptr [ECX + 0x4]           ; 00427008
    FMUL float ptr [EAX*0x4 + 0x765aa0] ; 0042700b | DAT_00765aa0
    CALL crt_math.c_round_FUN_00563a30  ; 00427012
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x1c]        ; 00427017
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0042701b
    ADD ECX,0x4                         ; 0042701f
    MOV dword ptr [ESP + 0x1c],EAX      ; 00427022
    INC EBX                             ; 00427026
    FILD dword ptr [ESP + 0x1c]         ; 00427027
    FADD float ptr [ESP]                ; 0042702b
    INC EDX                             ; 0042702e
    FSTP float ptr [ESP]                ; 0042702f
    JMP 0x00426ff7                      ; 00427032
        ;   XREF to: 00426ff7 (UNCONDITIONAL_JUMP)  ; LAB_00426ff7
    PUSH 0x1                            ; 00427034
        ;   Label: LAB_00427034
    PUSH 0x0                            ; 00427036
    PUSH 0xc9                           ; 00427038
    PUSH -0x1                           ; 0042703d
    PUSH EDI                            ; 0042703f
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0 ; 00427040
        ;   XREF to: 0051d9d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 00427045
    MOV ESP,EBP                         ; 00427048
    POP EBP                             ; 0042704a
    POP EDI                             ; 0042704b
    POP ESI                             ; 0042704c
    POP EBX                             ; 0042704d
    RET                                 ; 0042704e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042704f
        ;   Label: LAB_0042704f
    MOV dword ptr [EAX + 0xb644],0x3f800000 ; 00427052
    MOV dword ptr [EAX + 0xb640],0x1    ; 0042705c
    JMP 0x00426fbd                      ; 00427066
        ;   XREF to: 00426fbd (UNCONDITIONAL_JUMP)  ; LAB_00426fbd
    FLD float ptr [ESP]                 ; 0042706b
        ;   Label: LAB_0042706b
    FCOMP double ptr [0x0057a002]       ; 0042706e | DOUBLE_0057a002
    FNSTSW AX                           ; 00427074
    SAHF                                ; 00427076
    JBE 0x00427080                      ; 00427077
        ;   XREF to: 00427080 (CONDITIONAL_JUMP)  ; LAB_00427080
    MOV dword ptr [ESP],0x477fff00      ; 00427079
    FLD float ptr [ESP]                 ; 00427080
        ;   Label: LAB_00427080
    MOV ECX,dword ptr [ESP + 0x18]      ; 00427083
    MOV EBX,dword ptr [ESP + 0x14]      ; 00427087
    MOV EAX,[0x005ae704]                ; 0042708b | g_CDemonRenderer_PTR_005ae704
    CALL crt_math.c_round_FUN_00563a30  ; 00427090
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    INC EDI                             ; 00427095
    FISTP dword ptr [ESP + 0x1c]        ; 00427096
    ADD EBX,0x34                        ; 0042709a
    MOV EDX,dword ptr [EAX]             ; 0042709d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0042709f
    ADD EDX,ECX                         ; 004270a3
    MOV dword ptr [ESP + 0x14],EBX      ; 004270a5
    LEA ESI,[ECX + 0x30]                ; 004270a9
    MOV dword ptr [EDX + 0x2c],EAX      ; 004270ac
    MOV dword ptr [ESP + 0x18],ESI      ; 004270af
    JMP 0x00426fd2                      ; 004270b3
        ;   XREF to: 00426fd2 (UNCONDITIONAL_JUMP)  ; LAB_00426fd2
    PUSH 0x1                            ; 004270b8
        ;   Label: LAB_004270b8
    PUSH 0x0                            ; 004270ba
    PUSH 0x163                          ; 004270bc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004270c1
    PUSH -0x1                           ; 004270c4
    ADD EAX,0x150                       ; 004270c6
    PUSH EAX                            ; 004270cb
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0 ; 004270cc
        ;   XREF to: 0051d9d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 004270d1
    MOV ESP,EBP                         ; 004270d4
    POP EBP                             ; 004270d6
    POP EDI                             ; 004270d7
    POP ESI                             ; 004270d8
    POP EBX                             ; 004270d9
    RET                                 ; 004270da


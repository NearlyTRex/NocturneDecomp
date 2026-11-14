; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_renderBurn_FUN_0042fe00(CCharacter *this_ptr)
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
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960 at 0042e98c
;
; Referenced Globals:
;   undefined4 DAT_005d5a27
;   undefined4 DAT_005fd610
;   undefined4 DAT_00610cdc
;   undefined4 DAT_00612560
;   undefined4 DAT_007c6384
;   undefined4 DAT_007c6388
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042fe00
        ;   Label: core_charactr.cpp_CCharacter_renderBurn_FUN_0042fe00
    PUSH ESI                            ; 0042fe01
    PUSH EDI                            ; 0042fe02
    PUSH EBP                            ; 0042fe03
    MOV EBP,ESP                         ; 0042fe04
    SUB ESP,0x20                        ; 0042fe06
    AND ESP,0xfffffff8                  ; 0042fe09
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042fe0c
    CMP dword ptr [EAX + 0x3120],0x0    ; 0042fe0f
    JNZ 0x0042fe1f                      ; 0042fe16
        ;   XREF to: 0042fe1f (CONDITIONAL_JUMP)  ; LAB_0042fe1f
    MOV ESP,EBP                         ; 0042fe18
    POP EBP                             ; 0042fe1a
    POP EDI                             ; 0042fe1b
    POP ESI                             ; 0042fe1c
    POP EBX                             ; 0042fe1d
    RET                                 ; 0042fe1e
    PUSH 0x610cdc                       ; 0042fe1f | DAT_00610cdc
        ;   Label: LAB_0042fe1f
    MOV ECX,dword ptr [0x00612560]      ; 0042fe24 | DAT_00612560
    PUSH ECX                            ; 0042fe2a | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 0042fe2b
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0042fe30
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042fe33
    MOV EDI,dword ptr [EBP + 0x14]      ; 0042fe36
    MOV EBX,dword ptr [EAX + 0xb9e8]    ; 0042fe39
    ADD EDI,0x158                       ; 0042fe3f
    TEST EBX,EBX                        ; 0042fe45
    JNZ 0x0042ffb4                      ; 0042fe47
        ;   XREF to: 0042ffb4 (CONDITIONAL_JUMP)  ; LAB_0042ffb4
    PUSH EDI                            ; 0042fe4d
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0042fe4e
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042fe53
    PUSH EDI                            ; 0042fe56
    MOV ESI,EAX                         ; 0042fe57
    MOV EBX,EAX                         ; 0042fe59
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 0042fe5b
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042fe60
    MOV dword ptr [ESP + 0x10],EAX      ; 0042fe63
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042fe67
    MOV EAX,dword ptr [EAX + 0x2478]    ; 0042fe6a
    MOV EDI,dword ptr [ESI + 0x1de78]   ; 0042fe70
    MOV dword ptr [ESP + 0x8],EAX       ; 0042fe76
    XOR EAX,EAX                         ; 0042fe7a
    TEST EDI,EDI                        ; 0042fe7c
    JLE 0x0042fea0                      ; 0042fe7e
        ;   XREF to: 0042fea0 (CONDITIONAL_JUMP)  ; LAB_0042fea0
    XOR EDX,EDX                         ; 0042fe80
    XOR ECX,ECX                         ; 0042fe82
        ;   Label: LAB_0042fe82
    MOV dword ptr [EDX + 0x7c6384],ECX  ; 0042fe84 | DAT_007c6384 | DAT_007c6388
    INC EAX                             ; 0042fe8a
    MOV ESI,dword ptr [EBX + 0x1de78]   ; 0042fe8b
    ADD EDX,0x4                         ; 0042fe91
    CMP EAX,ESI                         ; 0042fe94
    JL 0x0042fe82                       ; 0042fe96
        ;   XREF to: 0042fe82 (CONDITIONAL_JUMP)  ; LAB_0042fe82
    LEA EAX,[EAX]                       ; 0042fe98
    MOV EDX,EDX                         ; 0042fe9e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042fea0
        ;   Label: LAB_0042fea0
    MOV EDI,dword ptr [EAX + 0x3120]    ; 0042fea3
    XOR ECX,ECX                         ; 0042fea9
    TEST EDI,EDI                        ; 0042feab
    JLE 0x0042fef4                      ; 0042fead
        ;   XREF to: 0042fef4 (CONDITIONAL_JUMP)  ; LAB_0042fef4
    FLD float ptr [0x005fd610]          ; 0042feaf | DAT_005fd610
    FLD double ptr [0x005d5a27]         ; 0042feb5 | DAT_005d5a27
    MOV EDX,EAX                         ; 0042febb
    FLD float ptr [EDX + 0x3140]        ; 0042febd
        ;   Label: LAB_0042febd
    MOV EAX,dword ptr [EDX + 0x3130]    ; 0042fec3
    FMUL ST1                            ; 0042fec9
    FLD float ptr [EAX*0x4 + 0x7c6384]  ; 0042fecb | DAT_007c6384
    FLD ST3                             ; 0042fed2
    FDIVP ST2,ST0                       ; 0042fed4
    FADDP                               ; 0042fed6
    FSTP float ptr [EAX*0x4 + 0x7c6384] ; 0042fed8 | DAT_007c6384
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042fedf
    INC ECX                             ; 0042fee2
    MOV ESI,dword ptr [EAX + 0x3120]    ; 0042fee3
    ADD EDX,0x18                        ; 0042fee9
    CMP ECX,ESI                         ; 0042feec
    JL 0x0042febd                       ; 0042feee
        ;   XREF to: 0042febd (CONDITIONAL_JUMP)  ; LAB_0042febd
    FSTP ST0                            ; 0042fef0
    FSTP ST0                            ; 0042fef2
    MOV EDI,dword ptr [EBX + 0x1de78]   ; 0042fef4
        ;   Label: LAB_0042fef4
    XOR ECX,ECX                         ; 0042fefa
    XOR EDX,EDX                         ; 0042fefc
    TEST EDI,EDI                        ; 0042fefe
    JLE 0x0042ff31                      ; 0042ff00
        ;   XREF to: 0042ff31 (CONDITIONAL_JUMP)  ; LAB_0042ff31
    MOV EDI,dword ptr [ESP + 0x10]      ; 0042ff02
    FLD float ptr [ECX*0x4 + 0x7c6384]  ; 0042ff06 | DAT_007c6384 | DAT_007c6388
        ;   Label: LAB_0042ff06
    FCOMP double ptr [0x005d5a27]       ; 0042ff0d | DAT_005d5a27
    FNSTSW AX                           ; 0042ff13
    SAHF                                ; 0042ff15
    JC 0x0042ff19                       ; 0042ff16
        ;   XREF to: 0042ff19 (CONDITIONAL_JUMP)  ; LAB_0042ff19
    INC EDX                             ; 0042ff18
    CMP dword ptr [EDI + 0x33cc],-0x1   ; 0042ff19
        ;   Label: LAB_0042ff19
    JNZ 0x0042ff23                      ; 0042ff20
        ;   XREF to: 0042ff23 (CONDITIONAL_JUMP)  ; LAB_0042ff23
    INC EDX                             ; 0042ff22
    INC ECX                             ; 0042ff23
        ;   Label: LAB_0042ff23
    MOV EAX,dword ptr [EBX + 0x1de78]   ; 0042ff24
    ADD EDI,0x4                         ; 0042ff2a
    CMP ECX,EAX                         ; 0042ff2d
    JL 0x0042ff06                       ; 0042ff2f
        ;   XREF to: 0042ff06 (CONDITIONAL_JUMP)  ; LAB_0042ff06
    CMP EDX,dword ptr [EBX + 0x1de78]   ; 0042ff31
        ;   Label: LAB_0042ff31
    JZ 0x0042ffcf                       ; 0042ff37
        ;   XREF to: 0042ffcf (CONDITIONAL_JUMP)  ; LAB_0042ffcf
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042ff3d
        ;   Label: LAB_0042ff3d
    XOR EDI,EDI                         ; 0042ff41
    SHL EAX,0x2                         ; 0042ff43
    MOV dword ptr [ESP + 0x14],EDI      ; 0042ff46
    MOV dword ptr [ESP + 0x18],EDI      ; 0042ff4a
    MOV dword ptr [ESP + 0xc],EAX       ; 0042ff4e
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042ff52
        ;   Label: LAB_0042ff52
    ADD EAX,dword ptr [ESP + 0xc]       ; 0042ff56
    CMP EDI,dword ptr [EAX + 0x2c]      ; 0042ff5a
    JGE 0x00430038                      ; 0042ff5d
        ;   XREF to: 00430038 (CONDITIONAL_JUMP)  ; LAB_00430038
    MOV ESI,dword ptr [EAX + 0x40]      ; 0042ff63
    XOR EBX,EBX                         ; 0042ff66
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042ff68
    XOR EDX,EDX                         ; 0042ff6c
    ADD ESI,EAX                         ; 0042ff6e
    MOV dword ptr [ESP],EBX             ; 0042ff70
    MOV ECX,ESI                         ; 0042ff73
    MOV EBX,ESI                         ; 0042ff75
    XOR EAX,EAX                         ; 0042ff77
        ;   Label: LAB_0042ff77
    MOV AL,byte ptr [ESI]               ; 0042ff79
    CMP EDX,EAX                         ; 0042ff7b
    JGE 0x0042ffeb                      ; 0042ff7d
        ;   XREF to: 0042ffeb (CONDITIONAL_JUMP)  ; LAB_0042ffeb
    XOR EAX,EAX                         ; 0042ff83
    MOV AL,byte ptr [EBX + 0x1]         ; 0042ff85
    FLD float ptr [ECX + 0x4]           ; 0042ff88
    FMUL float ptr [EAX*0x4 + 0x7c6384] ; 0042ff8b | DAT_007c6384
    CALL crt_math.c_round_FUN_005c03a0  ; 0042ff92
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x1c]        ; 0042ff97
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0042ff9b
    ADD ECX,0x4                         ; 0042ff9f
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042ffa2
    INC EBX                             ; 0042ffa6
    FILD dword ptr [ESP + 0x1c]         ; 0042ffa7
    FADD float ptr [ESP]                ; 0042ffab
    INC EDX                             ; 0042ffae
    FSTP float ptr [ESP]                ; 0042ffaf
    JMP 0x0042ff77                      ; 0042ffb2
        ;   XREF to: 0042ff77 (UNCONDITIONAL_JUMP)  ; LAB_0042ff77
    PUSH 0x1                            ; 0042ffb4
        ;   Label: LAB_0042ffb4
    PUSH 0x0                            ; 0042ffb6
    PUSH 0xc9                           ; 0042ffb8
    PUSH -0x1                           ; 0042ffbd
    PUSH EDI                            ; 0042ffbf
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810 ; 0042ffc0
        ;   XREF to: 00569810 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 0042ffc5
    MOV ESP,EBP                         ; 0042ffc8
    POP EBP                             ; 0042ffca
    POP EDI                             ; 0042ffcb
    POP ESI                             ; 0042ffcc
    POP EBX                             ; 0042ffcd
    RET                                 ; 0042ffce
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042ffcf
        ;   Label: LAB_0042ffcf
    MOV dword ptr [EAX + 0xb9ec],0x3f800000 ; 0042ffd2
    MOV dword ptr [EAX + 0xb9e8],0x1    ; 0042ffdc
    JMP 0x0042ff3d                      ; 0042ffe6
        ;   XREF to: 0042ff3d (UNCONDITIONAL_JUMP)  ; LAB_0042ff3d
    FLD float ptr [ESP]                 ; 0042ffeb
        ;   Label: LAB_0042ffeb
    FCOMP double ptr [0x005d5a27]       ; 0042ffee | DAT_005d5a27
    FNSTSW AX                           ; 0042fff4
    SAHF                                ; 0042fff6
    JBE 0x00430000                      ; 0042fff7
        ;   XREF to: 00430000 (CONDITIONAL_JUMP)  ; LAB_00430000
    MOV dword ptr [ESP],0x477fff00      ; 0042fff9
    FLD float ptr [ESP]                 ; 00430000
        ;   Label: LAB_00430000
    MOV ECX,dword ptr [ESP + 0x18]      ; 00430003
    MOV EBX,dword ptr [ESP + 0x14]      ; 00430007
    MOV EAX,[0x00612560]                ; 0043000b | DAT_00612560
    CALL crt_math.c_round_FUN_005c03a0  ; 00430010
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    INC EDI                             ; 00430015
    FISTP dword ptr [ESP + 0x1c]        ; 00430016
    ADD EBX,0x34                        ; 0043001a
    MOV EDX,dword ptr [EAX]             ; 0043001d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0043001f
    ADD EDX,ECX                         ; 00430023
    MOV dword ptr [ESP + 0x14],EBX      ; 00430025
    LEA ESI,[ECX + 0x30]                ; 00430029
    MOV dword ptr [EDX + 0x2c],EAX      ; 0043002c
    MOV dword ptr [ESP + 0x18],ESI      ; 0043002f
    JMP 0x0042ff52                      ; 00430033
        ;   XREF to: 0042ff52 (UNCONDITIONAL_JUMP)  ; LAB_0042ff52
    PUSH 0x1                            ; 00430038
        ;   Label: LAB_00430038
    PUSH 0x0                            ; 0043003a
    PUSH 0x163                          ; 0043003c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00430041
    PUSH -0x1                           ; 00430044
    ADD EAX,0x158                       ; 00430046
    PUSH EAX                            ; 0043004b
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810 ; 0043004c
        ;   XREF to: 00569810 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 00430051
    MOV ESP,EBP                         ; 00430054
    POP EBP                             ; 00430056
    POP EDI                             ; 00430057
    POP ESI                             ; 00430058
    POP EBX                             ; 00430059
    RET                                 ; 0043005a


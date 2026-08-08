; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_glass_cpp_CGlass_onLaserHit_FUN_004add80(CGlass *this_ptr,SLaserInfo *laser_info)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; SLaserInfo *     Stack[0x8]:4   laser_info
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   double DOUBLE_00585070 = 0.0000152590218966964
;   double DOUBLE_00585078 = 0.5
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   int g_CurrentTextureDimension = 0x100
;   undefined4 DAT_01b4d738
;   uchar* g_CurrentTextureData
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onLaserHit_FUN_0040ab10
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004add80
        ;   Label: core_glass.cpp_CGlass_onLaserHit_FUN_004add80
    PUSH ESI                            ; 004add81
    PUSH EDI                            ; 004add82
    PUSH EBP                            ; 004add83
    SUB ESP,0x14                        ; 004add84
    MOV EBX,dword ptr [ESP + 0x28]      ; 004add87
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004add8b
    PUSH ESI                            ; 004add8f
    PUSH EBX                            ; 004add90
    CALL core_actor.cpp_CDemonActor_onLaserHit_FUN_0040ab10 ; 004add91
        ;   XREF to: 0040ab10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_onLaserHit_FUN_0040ab10(CDemonActor * this_ptr, SLaserInfo * laser_info)
    MOV EDX,dword ptr [EBX + 0x1e0]     ; 004add96
    ADD ESP,0x8                         ; 004add9c
    TEST EDX,EDX                        ; 004add9f
    JZ 0x004ade9b                       ; 004adda1
        ;   XREF to: 004ade9b (CONDITIONAL_JUMP)  ; LAB_004ade9b
    CMP dword ptr [EBX + 0x178],0x0     ; 004adda7
    JNZ 0x004addbf                      ; 004addae
        ;   XREF to: 004addbf (CONDITIONAL_JUMP)  ; LAB_004addbf
    MOV dword ptr [ESI + 0x50],0x3f800000 ; 004addb0
    ADD ESP,0x14                        ; 004addb7
        ;   Label: LAB_004addb7
    POP EBP                             ; 004addba
    POP EDI                             ; 004addbb
    POP ESI                             ; 004addbc
    POP EBX                             ; 004addbd
    RET                                 ; 004addbe
    FLD float ptr [ESI + 0x30]          ; 004addbf
        ;   Label: LAB_004addbf
    FDIV float ptr [EBX + 0x154]        ; 004addc2
    FLD float ptr [ESI + 0x2c]          ; 004addc8
    FDIV float ptr [EBX + 0x150]        ; 004addcb
    ADD EBX,0x36c                       ; 004addd1
    PUSH EBX                            ; 004addd7
    FLD1                                ; 004addd8
    FXCH                                ; 004addda
    FADD double ptr [0x00585078]        ; 004adddc | DOUBLE_00585078
    MOV EBX,dword ptr [0x005ae704]      ; 004adde2 | g_CDemonRenderer_PTR_005ae704
    FSTP float ptr [ESP + 0x8]          ; 004adde8
    FSUBRP                              ; 004addec
    PUSH EBX                            ; 004addee | DAT_01b4d738
    FSTP float ptr [ESP + 0x10]         ; 004addef
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004addf3
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004addf8
    FILD dword ptr [0x005b762c]         ; 004addfb | g_CurrentTextureDimension
    FLD float ptr [ESP + 0x4]           ; 004ade01
    FMUL ST1                            ; 004ade05
    FLD float ptr [ESP + 0x8]           ; 004ade07
    FMULP ST2                           ; 004ade0b
    CALL crt_math.c_round_FUN_00563a30  ; 004ade0d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 004ade12
    CALL crt_math.c_round_FUN_00563a30  ; 004ade14
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 004ade19
    FISTP dword ptr [ESP + 0xc]         ; 004ade1b
    MOV EDI,dword ptr [ESP + 0xc]       ; 004ade1f
    FISTP dword ptr [ESP + 0x10]        ; 004ade23
    TEST EDI,EDI                        ; 004ade27
    JL 0x004ade8b                       ; 004ade29
        ;   XREF to: 004ade8b (CONDITIONAL_JUMP)  ; LAB_004ade8b
    MOV EAX,dword ptr [ESP + 0xc]       ; 004ade2b
        ;   Label: LAB_004ade2b
    MOV EDX,dword ptr [0x005b762c]      ; 004ade2f | g_CurrentTextureDimension
    CMP EAX,EDX                         ; 004ade35
    JL 0x004ade40                       ; 004ade37
        ;   XREF to: 004ade40 (CONDITIONAL_JUMP)  ; LAB_004ade40
    LEA EAX,[EDX + -0x1]                ; 004ade39
    MOV dword ptr [ESP + 0xc],EAX       ; 004ade3c
    CMP dword ptr [ESP + 0x10],0x0      ; 004ade40
        ;   Label: LAB_004ade40
    JL 0x004ade93                       ; 004ade45
        ;   XREF to: 004ade93 (CONDITIONAL_JUMP)  ; LAB_004ade93
    MOV EAX,dword ptr [ESP + 0x10]      ; 004ade47
        ;   Label: LAB_004ade47
    MOV EDI,dword ptr [0x005b762c]      ; 004ade4b | g_CurrentTextureDimension
    CMP EAX,EDI                         ; 004ade51
    JL 0x004ade5c                       ; 004ade53
        ;   XREF to: 004ade5c (CONDITIONAL_JUMP)  ; LAB_004ade5c
    LEA EAX,[EDI + -0x1]                ; 004ade55
    MOV dword ptr [ESP + 0x10],EAX      ; 004ade58
    MOV EAX,dword ptr [ESP + 0x10]      ; 004ade5c
        ;   Label: LAB_004ade5c
    IMUL EAX,dword ptr [0x005b762c]     ; 004ade60 | g_CurrentTextureDimension
    MOV EBX,dword ptr [ESP + 0xc]       ; 004ade67
    ADD EBX,EAX                         ; 004ade6b
    MOV EAX,[0x01c02580]                ; 004ade6d | g_CurrentTextureData
    CMP byte ptr [EBX + EAX*0x1],0x0    ; 004ade72
    JNZ 0x004addb7                      ; 004ade76
        ;   XREF to: 004addb7 (CONDITIONAL_JUMP)  ; LAB_004addb7
    MOV dword ptr [ESI + 0x50],0x3f800000 ; 004ade7c
    ADD ESP,0x14                        ; 004ade83
    POP EBP                             ; 004ade86
    POP EDI                             ; 004ade87
    POP ESI                             ; 004ade88
    POP EBX                             ; 004ade89
    RET                                 ; 004ade8a
    XOR EBP,EBP                         ; 004ade8b
        ;   Label: LAB_004ade8b
    MOV dword ptr [ESP + 0xc],EBP       ; 004ade8d
    JMP 0x004ade2b                      ; 004ade91
        ;   XREF to: 004ade2b (UNCONDITIONAL_JUMP)  ; LAB_004ade2b
    XOR EBX,EBX                         ; 004ade93
        ;   Label: LAB_004ade93
    MOV dword ptr [ESP + 0x10],EBX      ; 004ade95
    JMP 0x004ade47                      ; 004ade99
        ;   XREF to: 004ade47 (UNCONDITIONAL_JUMP)  ; LAB_004ade47
    FILD dword ptr [EBX + 0x174]        ; 004ade9b
        ;   Label: LAB_004ade9b
    FMUL double ptr [0x00585070]        ; 004adea1 | DOUBLE_00585070
    FLD1                                ; 004adea7
    FSUBRP                              ; 004adea9
    FSTP float ptr [ESI + 0x48]         ; 004adeab
    ADD ESP,0x14                        ; 004adeae
    POP EBP                             ; 004adeb1
    POP EDI                             ; 004adeb2
    POP ESI                             ; 004adeb3
    POP EBX                             ; 004adeb4
    RET                                 ; 004adeb5


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_charactr_cpp_CCharacter_FUN_0042ad00(CCharacter *this_ptr)
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
;   core_charactr.cpp_CCharacter_FUN_00429aa0 at 00429acd
;
; Referenced Globals:
;   double DOUBLE_00617132 = 65535
;   float FLOAT_0065b830 = 3
;   SMRGLTextureBasic DAT_0066e784
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   undefined4 DAT_00823c54
;   undefined4 DAT_00823c58
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042ad00
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042ad00
    PUSH ESI                            ; 0042ad01
    PUSH EDI                            ; 0042ad02
    PUSH EBP                            ; 0042ad03
    MOV EBP,ESP                         ; 0042ad04
    SUB ESP,0x20                        ; 0042ad06
    AND ESP,0xfffffff8                  ; 0042ad09
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042ad0c
    CMP dword ptr [EAX + 0x2f10],0x0    ; 0042ad0f
    JNZ 0x0042ad1f                      ; 0042ad16
        ;   XREF to: 0042ad1f (CONDITIONAL_JUMP)  ; LAB_0042ad1f
    MOV ESP,EBP                         ; 0042ad18
    POP EBP                             ; 0042ad1a
    POP EDI                             ; 0042ad1b
    POP ESI                             ; 0042ad1c
    POP EBX                             ; 0042ad1d
    RET                                 ; 0042ad1e
    PUSH 0x66e784                       ; 0042ad1f | DAT_0066e784
        ;   Label: LAB_0042ad1f
    MOV ECX,dword ptr [0x006703ec]      ; 0042ad24 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 0042ad2a | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 0042ad2b
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0042ad30
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042ad33
    MOV EDI,dword ptr [EBP + 0x14]      ; 0042ad36
    MOV EBX,dword ptr [EAX + 0xb7d8]    ; 0042ad39
    ADD EDI,0x158                       ; 0042ad3f
    TEST EBX,EBX                        ; 0042ad45
    JNZ 0x0042aeb4                      ; 0042ad47
        ;   XREF to: 0042aeb4 (CONDITIONAL_JUMP)  ; LAB_0042aeb4
    PUSH EDI                            ; 0042ad4d
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0042ad4e
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042ad53
    PUSH EDI                            ; 0042ad56
    MOV ESI,EAX                         ; 0042ad57
    MOV EBX,EAX                         ; 0042ad59
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 0042ad5b
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042ad60
    MOV dword ptr [ESP + 0x10],EAX      ; 0042ad63
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042ad67
    MOV EAX,dword ptr [EAX + 0x2388]    ; 0042ad6a
    MOV EDI,dword ptr [ESI + 0x28558]   ; 0042ad70
    MOV dword ptr [ESP + 0x8],EAX       ; 0042ad76
    XOR EAX,EAX                         ; 0042ad7a
    TEST EDI,EDI                        ; 0042ad7c
    JLE 0x0042ada0                      ; 0042ad7e
        ;   XREF to: 0042ada0 (CONDITIONAL_JUMP)  ; LAB_0042ada0
    XOR EDX,EDX                         ; 0042ad80
    XOR ECX,ECX                         ; 0042ad82
        ;   Label: LAB_0042ad82
    MOV dword ptr [EDX + 0x823c54],ECX  ; 0042ad84 | DAT_00823c54 | DAT_00823c58
    INC EAX                             ; 0042ad8a
    MOV ESI,dword ptr [EBX + 0x28558]   ; 0042ad8b
    ADD EDX,0x4                         ; 0042ad91
    CMP EAX,ESI                         ; 0042ad94
    JL 0x0042ad82                       ; 0042ad96
        ;   XREF to: 0042ad82 (CONDITIONAL_JUMP)  ; LAB_0042ad82
    LEA EAX,[EAX]                       ; 0042ad98
    MOV EDX,EDX                         ; 0042ad9e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042ada0
        ;   Label: LAB_0042ada0
    MOV EDI,dword ptr [EAX + 0x2f10]    ; 0042ada3
    XOR ECX,ECX                         ; 0042ada9
    TEST EDI,EDI                        ; 0042adab
    JLE 0x0042adf4                      ; 0042adad
        ;   XREF to: 0042adf4 (CONDITIONAL_JUMP)  ; LAB_0042adf4
    FLD float ptr [0x0065b830]          ; 0042adaf | FLOAT_0065b830
    FLD double ptr [0x00617132]         ; 0042adb5 | DOUBLE_00617132
    MOV EDX,EAX                         ; 0042adbb
    FLD float ptr [EDX + 0x2f30]        ; 0042adbd
        ;   Label: LAB_0042adbd
    MOV EAX,dword ptr [EDX + 0x2f20]    ; 0042adc3
    FMUL ST1                            ; 0042adc9
    FLD float ptr [EAX*0x4 + 0x823c54]  ; 0042adcb | DAT_00823c54
    FLD ST3                             ; 0042add2
    FDIVP ST2,ST0                       ; 0042add4
    FADDP                               ; 0042add6
    FSTP float ptr [EAX*0x4 + 0x823c54] ; 0042add8 | DAT_00823c54
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042addf
    INC ECX                             ; 0042ade2
    MOV ESI,dword ptr [EAX + 0x2f10]    ; 0042ade3
    ADD EDX,0x18                        ; 0042ade9
    CMP ECX,ESI                         ; 0042adec
    JL 0x0042adbd                       ; 0042adee
        ;   XREF to: 0042adbd (CONDITIONAL_JUMP)  ; LAB_0042adbd
    FSTP ST0                            ; 0042adf0
    FSTP ST0                            ; 0042adf2
    MOV EDI,dword ptr [EBX + 0x28558]   ; 0042adf4
        ;   Label: LAB_0042adf4
    XOR ECX,ECX                         ; 0042adfa
    XOR EDX,EDX                         ; 0042adfc
    TEST EDI,EDI                        ; 0042adfe
    JLE 0x0042ae31                      ; 0042ae00
        ;   XREF to: 0042ae31 (CONDITIONAL_JUMP)  ; LAB_0042ae31
    MOV EDI,dword ptr [ESP + 0x10]      ; 0042ae02
    FLD float ptr [ECX*0x4 + 0x823c54]  ; 0042ae06 | DAT_00823c54 | DAT_00823c58
        ;   Label: LAB_0042ae06
    FCOMP double ptr [0x00617132]       ; 0042ae0d | DOUBLE_00617132
    FNSTSW AX                           ; 0042ae13
    SAHF                                ; 0042ae15
    JC 0x0042ae19                       ; 0042ae16
        ;   XREF to: 0042ae19 (CONDITIONAL_JUMP)  ; LAB_0042ae19
    INC EDX                             ; 0042ae18
    CMP dword ptr [EDI + 0x8dcc],-0x1   ; 0042ae19
        ;   Label: LAB_0042ae19
    JNZ 0x0042ae23                      ; 0042ae20
        ;   XREF to: 0042ae23 (CONDITIONAL_JUMP)  ; LAB_0042ae23
    INC EDX                             ; 0042ae22
    INC ECX                             ; 0042ae23
        ;   Label: LAB_0042ae23
    MOV EAX,dword ptr [EBX + 0x28558]   ; 0042ae24
    ADD EDI,0x4                         ; 0042ae2a
    CMP ECX,EAX                         ; 0042ae2d
    JL 0x0042ae06                       ; 0042ae2f
        ;   XREF to: 0042ae06 (CONDITIONAL_JUMP)  ; LAB_0042ae06
    CMP EDX,dword ptr [EBX + 0x28558]   ; 0042ae31
        ;   Label: LAB_0042ae31
    JZ 0x0042aecf                       ; 0042ae37
        ;   XREF to: 0042aecf (CONDITIONAL_JUMP)  ; LAB_0042aecf
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042ae3d
        ;   Label: LAB_0042ae3d
    XOR EDI,EDI                         ; 0042ae41
    SHL EAX,0x2                         ; 0042ae43
    MOV dword ptr [ESP + 0x14],EDI      ; 0042ae46
    MOV dword ptr [ESP + 0x18],EDI      ; 0042ae4a
    MOV dword ptr [ESP + 0xc],EAX       ; 0042ae4e
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042ae52
        ;   Label: LAB_0042ae52
    ADD EAX,dword ptr [ESP + 0xc]       ; 0042ae56
    CMP EDI,dword ptr [EAX + 0x2c]      ; 0042ae5a
    JGE 0x0042af38                      ; 0042ae5d
        ;   XREF to: 0042af38 (CONDITIONAL_JUMP)  ; LAB_0042af38
    MOV ESI,dword ptr [EAX + 0x40]      ; 0042ae63
    XOR EBX,EBX                         ; 0042ae66
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042ae68
    XOR EDX,EDX                         ; 0042ae6c
    ADD ESI,EAX                         ; 0042ae6e
    MOV dword ptr [ESP],EBX             ; 0042ae70
    MOV ECX,ESI                         ; 0042ae73
    MOV EBX,ESI                         ; 0042ae75
    XOR EAX,EAX                         ; 0042ae77
        ;   Label: LAB_0042ae77
    MOV AL,byte ptr [ESI]               ; 0042ae79
    CMP EDX,EAX                         ; 0042ae7b
    JGE 0x0042aeeb                      ; 0042ae7d
        ;   XREF to: 0042aeeb (CONDITIONAL_JUMP)  ; LAB_0042aeeb
    XOR EAX,EAX                         ; 0042ae83
    MOV AL,byte ptr [EBX + 0x1]         ; 0042ae85
    FLD float ptr [ECX + 0x4]           ; 0042ae88
    FMUL float ptr [EAX*0x4 + 0x823c54] ; 0042ae8b | DAT_00823c54
    CALL crt_math.c_round_FUN_005fe6b0  ; 0042ae92
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x1c]        ; 0042ae97
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0042ae9b
    ADD ECX,0x4                         ; 0042ae9f
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042aea2
    INC EBX                             ; 0042aea6
    FILD dword ptr [ESP + 0x1c]         ; 0042aea7
    FADD float ptr [ESP]                ; 0042aeab
    INC EDX                             ; 0042aeae
    FSTP float ptr [ESP]                ; 0042aeaf
    JMP 0x0042ae77                      ; 0042aeb2
        ;   XREF to: 0042ae77 (UNCONDITIONAL_JUMP)  ; LAB_0042ae77
    PUSH 0x1                            ; 0042aeb4
        ;   Label: LAB_0042aeb4
    PUSH 0x0                            ; 0042aeb6
    PUSH 0xc9                           ; 0042aeb8
    PUSH -0x1                           ; 0042aebd
    PUSH EDI                            ; 0042aebf
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150 ; 0042aec0
        ;   XREF to: 005a0150 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 0042aec5
    MOV ESP,EBP                         ; 0042aec8
    POP EBP                             ; 0042aeca
    POP EDI                             ; 0042aecb
    POP ESI                             ; 0042aecc
    POP EBX                             ; 0042aecd
    RET                                 ; 0042aece
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042aecf
        ;   Label: LAB_0042aecf
    MOV dword ptr [EAX + 0xb7dc],0x3f800000 ; 0042aed2
    MOV dword ptr [EAX + 0xb7d8],0x1    ; 0042aedc
    JMP 0x0042ae3d                      ; 0042aee6
        ;   XREF to: 0042ae3d (UNCONDITIONAL_JUMP)  ; LAB_0042ae3d
    FLD float ptr [ESP]                 ; 0042aeeb
        ;   Label: LAB_0042aeeb
    FCOMP double ptr [0x00617132]       ; 0042aeee | DOUBLE_00617132
    FNSTSW AX                           ; 0042aef4
    SAHF                                ; 0042aef6
    JBE 0x0042af00                      ; 0042aef7
        ;   XREF to: 0042af00 (CONDITIONAL_JUMP)  ; LAB_0042af00
    MOV dword ptr [ESP],0x477fff00      ; 0042aef9
    FLD float ptr [ESP]                 ; 0042af00
        ;   Label: LAB_0042af00
    MOV ECX,dword ptr [ESP + 0x18]      ; 0042af03
    MOV EBX,dword ptr [ESP + 0x14]      ; 0042af07
    MOV EAX,[0x006703ec]                ; 0042af0b | g_CDemonRendererInstance | g_CDemonRendererPtr2
    CALL crt_math.c_round_FUN_005fe6b0  ; 0042af10
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    INC EDI                             ; 0042af15
    FISTP dword ptr [ESP + 0x1c]        ; 0042af16
    ADD EBX,0x34                        ; 0042af1a
    MOV EDX,dword ptr [EAX]             ; 0042af1d | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0042af1f
    ADD EDX,ECX                         ; 0042af23
    MOV dword ptr [ESP + 0x14],EBX      ; 0042af25
    LEA ESI,[ECX + 0x30]                ; 0042af29
    MOV dword ptr [EDX + 0x2c],EAX      ; 0042af2c
    MOV dword ptr [ESP + 0x18],ESI      ; 0042af2f
    JMP 0x0042ae52                      ; 0042af33
        ;   XREF to: 0042ae52 (UNCONDITIONAL_JUMP)  ; LAB_0042ae52
    PUSH 0x1                            ; 0042af38
        ;   Label: LAB_0042af38
    PUSH 0x0                            ; 0042af3a
    PUSH 0x163                          ; 0042af3c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042af41
    PUSH -0x1                           ; 0042af44
    ADD EAX,0x158                       ; 0042af46
    PUSH EAX                            ; 0042af4b
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150 ; 0042af4c
        ;   XREF to: 005a0150 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 0042af51
    MOV ESP,EBP                         ; 0042af54
    POP EBP                             ; 0042af56
    POP EDI                             ; 0042af57
    POP ESI                             ; 0042af58
    POP EBX                             ; 0042af59
    RET                                 ; 0042af5a


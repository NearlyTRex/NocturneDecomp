; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_renderFaces_FUN_004dfea0(CMorphModel *this_ptr,float morph_t)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   morph_t
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_morph.cpp_CMorphModel_render_FUN_004dfc70 at 004dfca0
;
; Referenced Globals:
;   double DOUBLE_0058ad6c = 65535
;   float FLOAT_0058ad74 = 2
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c038f4
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0
;   engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dfea0
        ;   Label: core_morph.cpp_CMorphModel_renderFaces_FUN_004dfea0
    PUSH ESI                            ; 004dfea1
    PUSH EDI                            ; 004dfea2
    PUSH EBP                            ; 004dfea3
    SUB ESP,0xc                         ; 004dfea4
    MOV EDI,dword ptr [ESP + 0x20]      ; 004dfea7
    PUSH 0x0                            ; 004dfeab
    MOV EDX,dword ptr [0x005ae704]      ; 004dfead | DAT_005ae704
    PUSH EDX                            ; 004dfeb3 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0 ; 004dfeb4
        ;   XREF to: 004619f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 004dfeb9
    PUSH 0x1                            ; 004dfebc
    MOV ECX,dword ptr [0x005ae704]      ; 004dfebe | DAT_005ae704
    PUSH ECX                            ; 004dfec4 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 004dfec5
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 004dfeca
    FLD float ptr [ESP + 0x24]          ; 004dfecd
    FLD ST0                             ; 004dfed1
    FMUL double ptr [0x0058ad6c]        ; 004dfed3 | DOUBLE_0058ad6c
    MOV EAX,0xffff                      ; 004dfed9
    FLD float ptr [0x0058ad74]          ; 004dfede | FLOAT_0058ad74
    FSUBRP ST2,ST0                      ; 004dfee4
    MOV EBX,dword ptr [0x01c038f4]      ; 004dfee6 | DAT_01c038f4
    FMULP                               ; 004dfeec
    SUB EAX,EBX                         ; 004dfeee
    CALL crt_math.c_round_FUN_00563a30  ; 004dfef0
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP]               ; 004dfef5
    MOV EDX,dword ptr [ESP]             ; 004dfef8
    IMUL EDX                            ; 004dfefb
    SHRD EAX,EDX,0x10                   ; 004dfefd
    PUSH EAX                            ; 004dff01
    MOV ESI,dword ptr [0x005ae704]      ; 004dff02 | DAT_005ae704
    PUSH ESI                            ; 004dff08 | DAT_01b4d738
    MOV EBP,0xffffffff                  ; 004dff09
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 004dff0e
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004dff13
    MOV EAX,dword ptr [EDI + 0x5c]      ; 004dff16
    MOV dword ptr [ESP + 0x8],EBP       ; 004dff19
    XOR EBP,EBP                         ; 004dff1d
    TEST EAX,EAX                        ; 004dff1f
    JLE 0x004dff78                      ; 004dff21
        ;   XREF to: 004dff78 (CONDITIONAL_JUMP)  ; LAB_004dff78
    LEA EAX,[EDI + 0x68]                ; 004dff23
    XOR EBX,EBX                         ; 004dff26
    MOV dword ptr [ESP + 0x4],EAX       ; 004dff28
    MOV EAX,dword ptr [EDI + 0x60]      ; 004dff2c
        ;   Label: LAB_004dff2c
    MOV ESI,dword ptr [EBX + EAX*0x1]   ; 004dff2f
    CMP ESI,dword ptr [ESP + 0x8]       ; 004dff32
    JZ 0x004dff53                       ; 004dff36
        ;   XREF to: 004dff53 (CONDITIONAL_JUMP)  ; LAB_004dff53
    IMUL EAX,ESI,0x48                   ; 004dff38
    ADD EAX,dword ptr [ESP + 0x4]       ; 004dff3b
    PUSH EAX                            ; 004dff3f
    MOV ECX,dword ptr [0x005ae704]      ; 004dff40 | DAT_005ae704
    PUSH ECX                            ; 004dff46 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004dff47
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004dff4c
    MOV dword ptr [ESP + 0x8],ESI       ; 004dff4f
    MOV ESI,dword ptr [EDI + 0x60]      ; 004dff53
        ;   Label: LAB_004dff53
    PUSH 0x267                          ; 004dff56
    ADD ESI,EBX                         ; 004dff5b
    PUSH ESI                            ; 004dff5d
    MOV EDX,dword ptr [0x005ae704]      ; 004dff5e | DAT_005ae704
    PUSH EDX                            ; 004dff64 | DAT_01b4d738
    INC EBP                             ; 004dff65
    ADD EBX,0x3c                        ; 004dff66
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460 ; 004dff69
        ;   XREF to: 0045f460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly, int render_flags)
    MOV ECX,dword ptr [EDI + 0x5c]      ; 004dff6e
    ADD ESP,0xc                         ; 004dff71
    CMP EBP,ECX                         ; 004dff74
    JL 0x004dff2c                       ; 004dff76
        ;   XREF to: 004dff2c (CONDITIONAL_JUMP)  ; LAB_004dff2c
    MOV EBX,dword ptr [0x005ae704]      ; 004dff78 | DAT_005ae704
        ;   Label: LAB_004dff78
    PUSH EBX                            ; 004dff7e | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0 ; 004dff7f
        ;   XREF to: 00461db0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004dff84
    PUSH 0x0                            ; 004dff87
    MOV ESI,dword ptr [0x005ae704]      ; 004dff89 | DAT_005ae704
    PUSH ESI                            ; 004dff8f | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 004dff90
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 004dff95
    PUSH 0x1                            ; 004dff98
    MOV EDI,dword ptr [0x005ae704]      ; 004dff9a | DAT_005ae704
    PUSH EDI                            ; 004dffa0 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 004dffa1
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 004dffa6
    ADD ESP,0xc                         ; 004dffa9
    POP EBP                             ; 004dffac
    POP EDI                             ; 004dffad
    POP ESI                             ; 004dffae
    POP EBX                             ; 004dffaf
    RET                                 ; 004dffb0


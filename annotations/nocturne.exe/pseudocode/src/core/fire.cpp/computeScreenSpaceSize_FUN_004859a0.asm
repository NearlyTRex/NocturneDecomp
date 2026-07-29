; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_fire_cpp_computeScreenSpaceSize_FUN_004859a0(float depth,float min_size)
;
; Parameters:
; float            Stack[0x4]:4   depth
; float            Stack[0x8]:4   min_size
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_fire.cpp_CLaserBeam_render_FUN_00485a90 at 004862ed
;
; Referenced Globals:
;   double DOUBLE_0058116c = 0.00390625
;   double DOUBLE_00581174 = 0.0000152587890625
;   double DOUBLE_0058117c = 5.16407569540752E-315
;   float FLOAT_0059d1f8 = 256
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b7648
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c00c48
;   undefined4 DAT_01c00c4c
;
; Called Functions:
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004859a0
        ;   Label: core_fire.cpp_computeScreenSpaceSize_FUN_004859a0
    SUB ESP,0x30                        ; 004859a1
    MOV EAX,dword ptr [ESP + 0x38]      ; 004859a4
    XOR EDX,EDX                         ; 004859a8
    MOV EBX,ESP                         ; 004859aa
    MOV dword ptr [ESP + 0xc],EDX       ; 004859ac
    MOV dword ptr [ESP + 0x10],EDX      ; 004859b0
    MOV dword ptr [ESP + 0x14],EAX      ; 004859b4
    LEA EAX,[ESP + 0xc]                 ; 004859b8
    MOV EDX,dword ptr [0x005ae704]      ; 004859bc | DAT_005ae704
    FLD float ptr [EAX]                 ; 004859c2
    FMUL float ptr [0x0059d1f8]         ; 004859c4 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 004859ca
    FLD float ptr [EAX + 0x4]           ; 004859cc
    FMUL float ptr [0x0059d1f8]         ; 004859cf | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 004859d5
    FLD float ptr [EAX + 0x8]           ; 004859d8
    FMUL float ptr [0x0059d1f8]         ; 004859db | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 004859e1
    MOV EAX,ESP                         ; 004859e4
    PUSH EAX                            ; 004859e6
    MOV EAX,dword ptr [EDX]             ; 004859e7 | DAT_01b4d738
    PUSH EAX                            ; 004859e9
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004859ea
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005ae704]                ; 004859ef | DAT_005ae704
    MOV EAX,dword ptr [EAX]             ; 004859f4 | DAT_01b4d738
    FILD dword ptr [EAX + 0x8]          ; 004859f6
    FMUL double ptr [0x0058116c]        ; 004859f9 | DOUBLE_0058116c
    FLD double ptr [0x00581174]         ; 004859ff | DOUBLE_00581174
    FILD dword ptr [0x005b7648]         ; 00485a05 | DAT_005b7648
    FMUL ST1                            ; 00485a0b
    FDIVP ST2,ST0                       ; 00485a0d
    FILD dword ptr [0x01c00c48]         ; 00485a0f | DAT_01c00c48
    FMUL ST1                            ; 00485a15
    ADD ESP,0x8                         ; 00485a17
    FXCH ST2                            ; 00485a1a
    FMUL float ptr [0x0058117c]         ; 00485a1c | DOUBLE_0058117c
    FXCH ST2                            ; 00485a22
    FDIVR ST0,ST2                       ; 00485a24
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00485a26
    MOV dword ptr [ESP + 0x2c],EAX      ; 00485a2a
    FABS                                ; 00485a2e
    FILD dword ptr [0x01c00c4c]         ; 00485a30 | DAT_01c00c4c
    FMULP ST2                           ; 00485a36
    FXCH                                ; 00485a38
    FDIVP ST2,ST0                       ; 00485a3a
    FXCH                                ; 00485a3c
    FABS                                ; 00485a3e
    FLD float ptr [ESP + 0x3c]          ; 00485a40
    FXCH ST2                            ; 00485a44
    FSTP float ptr [ESP + 0x28]         ; 00485a46
    FSTP float ptr [ESP + 0x24]         ; 00485a4a
    FCOMP float ptr [ESP + 0x28]        ; 00485a4e
    FNSTSW AX                           ; 00485a52
    SAHF                                ; 00485a54
    JC 0x00485a6d                       ; 00485a55
        ;   XREF to: 00485a6d (CONDITIONAL_JUMP)  ; LAB_00485a6d
    FLD float ptr [ESP + 0x2c]          ; 00485a57
        ;   Label: LAB_00485a57
    FCOMP float ptr [ESP + 0x24]        ; 00485a5b
    FNSTSW AX                           ; 00485a5f
    SAHF                                ; 00485a61
    JC 0x00485a77                       ; 00485a62
        ;   XREF to: 00485a77 (CONDITIONAL_JUMP)  ; LAB_00485a77
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00485a64
    ADD ESP,0x30                        ; 00485a68
    POP EBX                             ; 00485a6b
    RET                                 ; 00485a6c
    MOV EAX,dword ptr [ESP + 0x28]      ; 00485a6d
        ;   Label: LAB_00485a6d
    MOV dword ptr [ESP + 0x2c],EAX      ; 00485a71
    JMP 0x00485a57                      ; 00485a75
        ;   XREF to: 00485a57 (UNCONDITIONAL_JUMP)  ; LAB_00485a57
    MOV EAX,dword ptr [ESP + 0x24]      ; 00485a77
        ;   Label: LAB_00485a77
    MOV dword ptr [ESP + 0x2c],EAX      ; 00485a7b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00485a7f
    ADD ESP,0x30                        ; 00485a83
    POP EBX                             ; 00485a86
    RET                                 ; 00485a87


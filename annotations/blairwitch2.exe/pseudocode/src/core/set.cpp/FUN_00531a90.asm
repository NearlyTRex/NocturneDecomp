; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_FUN_00531a90(CDemonSet *this_ptr,CVector3f *vertex_position,CVector3f *position_offset,int vertex_index)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   vertex_position
; CVector3f *      Stack[0xc]:4   position_offset
; int              Stack[0x10]:4   vertex_index
; Local Variables:
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
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_water.cpp_CWater_render_FUN_005862e0 at 005865fb
;   core_wateract.cpp_CWaterActor_renderTransparent_FUN_00587400 at 00587551
;
; Referenced Globals:
;   undefined4 DAT_005e59e2
;   undefined4 DAT_00622014
;   undefined4 DAT_00622034
;   undefined4 DAT_00622038
;   undefined4 DAT_0062203c
;   undefined4 DAT_01caf5b4
;   undefined4 DAT_01fc9cd4
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00531a90
        ;   Label: core_set.cpp_FUN_00531a90
    PUSH ESI                            ; 00531a91
    PUSH EDI                            ; 00531a92
    PUSH EBP                            ; 00531a93
    MOV EBP,ESP                         ; 00531a94
    SUB ESP,0x4c                        ; 00531a96
    AND ESP,0xfffffff8                  ; 00531a99
    MOV EDX,dword ptr [EBP + 0x18]      ; 00531a9c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00531a9f
    FLD float ptr [EDX]                 ; 00531aa2
    FLD float ptr [EDX + 0x4]           ; 00531aa4
    FLD float ptr [EDX + 0x8]           ; 00531aa7
    LEA EDI,[ESP + 0x18]                ; 00531aaa
    XOR ECX,ECX                         ; 00531aae
    LEA ESI,[ESP + 0x24]                ; 00531ab0
    MOV dword ptr [ESP],ECX             ; 00531ab4
    FXCH ST2                            ; 00531ab7
    FADD float ptr [EAX]                ; 00531ab9
    FXCH                                ; 00531abb
    FADD float ptr [EAX + 0x4]          ; 00531abd
    FXCH ST2                            ; 00531ac0
    FADD float ptr [EAX + 0x8]          ; 00531ac2
    FXCH                                ; 00531ac5
    FSTP float ptr [ESP + 0x24]         ; 00531ac7
    FXCH                                ; 00531acb
    FSTP float ptr [ESP + 0x28]         ; 00531acd
    FSTP float ptr [ESP + 0x2c]         ; 00531ad1
    MOVSD ES:EDI,ESI                    ; 00531ad5
    MOVSD ES:EDI,ESI                    ; 00531ad6
    MOVSD ES:EDI,ESI                    ; 00531ad7
    MOV dword ptr [ESP + 0x8],ECX       ; 00531ad8
    MOV EDI,dword ptr [0x01fc9cd4]      ; 00531adc | DAT_01fc9cd4
    MOV dword ptr [ESP + 0x4],ECX       ; 00531ae2
    TEST EDI,EDI                        ; 00531ae6
    JLE 0x00531b0e                      ; 00531ae8
        ;   XREF to: 00531b0e (CONDITIONAL_JUMP)  ; LAB_00531b0e
    LEA EBX,[EDI*0x4 + 0x0]             ; 00531aea
    MOV EDX,dword ptr [ECX + 0x1fc9cd8] ; 00531af1
        ;   Label: LAB_00531af1
    TEST dword ptr [EDX + 0x11d4],0x7fffffff ; 00531af7
    JNZ 0x00531bc9                      ; 00531b01
        ;   XREF to: 00531bc9 (CONDITIONAL_JUMP)  ; LAB_00531bc9
    ADD ECX,0x4                         ; 00531b07
        ;   Label: LAB_00531b07
    CMP ECX,EBX                         ; 00531b0a
    JL 0x00531af1                       ; 00531b0c
        ;   XREF to: 00531af1 (CONDITIONAL_JUMP)  ; LAB_00531af1
    CMP dword ptr [0x01fc9cd4],0x0      ; 00531b0e | DAT_01fc9cd4
        ;   Label: LAB_00531b0e
    JNZ 0x00531b27                      ; 00531b15
        ;   XREF to: 00531b27 (CONDITIONAL_JUMP)  ; LAB_00531b27
    MOV EDX,0x43000000                  ; 00531b17
    MOV dword ptr [ESP],EDX             ; 00531b1c
    MOV dword ptr [ESP + 0x8],EDX       ; 00531b1f
    MOV dword ptr [ESP + 0x4],EDX       ; 00531b23
    MOV EDX,dword ptr [EBP + 0x20]      ; 00531b27
        ;   Label: LAB_00531b27
    LEA EAX,[EDX*0x4 + 0x0]             ; 00531b2a
    SUB EAX,EDX                         ; 00531b31
    MOV EBX,0x622014                    ; 00531b33 | DAT_00622014
    SHL EAX,0x4                         ; 00531b38
    FLD float ptr [ESP + 0x4]           ; 00531b3b
    ADD EBX,EAX                         ; 00531b3f
    FCOMP double ptr [0x005e59e2]       ; 00531b41 | DAT_005e59e2
    FNSTSW AX                           ; 00531b47
    SAHF                                ; 00531b49
    JBE 0x00531b54                      ; 00531b4a
        ;   XREF to: 00531b54 (CONDITIONAL_JUMP)  ; LAB_00531b54
    MOV dword ptr [ESP + 0x4],0x437f0000 ; 00531b4c
    FLD float ptr [ESP]                 ; 00531b54
        ;   Label: LAB_00531b54
    FCOMP double ptr [0x005e59e2]       ; 00531b57 | DAT_005e59e2
    FNSTSW AX                           ; 00531b5d
    SAHF                                ; 00531b5f
    JBE 0x00531b69                      ; 00531b60
        ;   XREF to: 00531b69 (CONDITIONAL_JUMP)  ; LAB_00531b69
    MOV dword ptr [ESP],0x437f0000      ; 00531b62
    FLD float ptr [ESP + 0x8]           ; 00531b69
        ;   Label: LAB_00531b69
    FCOMP double ptr [0x005e59e2]       ; 00531b6d | DAT_005e59e2
    FNSTSW AX                           ; 00531b73
    SAHF                                ; 00531b75
    JA 0x00531c8e                       ; 00531b76
        ;   XREF to: 00531c8e (CONDITIONAL_JUMP)  ; LAB_00531c8e
    FLD float ptr [ESP + 0x4]           ; 00531b7c
        ;   Label: LAB_00531b7c
    FLD float ptr [ESP]                 ; 00531b80
    FLD float ptr [ESP + 0x8]           ; 00531b83
    FXCH ST2                            ; 00531b87
    CALL crt_math.c_round_FUN_005b7ff0  ; 00531b89
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x40]        ; 00531b8e
    MOV EAX,dword ptr [ESP + 0x40]      ; 00531b92
    CALL crt_math.c_round_FUN_005b7ff0  ; 00531b96
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    SHL EAX,0x8                         ; 00531b9b
    FISTP dword ptr [ESP + 0x40]        ; 00531b9e
    MOV dword ptr [EBX + 0x20],EAX      ; 00531ba2 | DAT_00622034
    MOV EAX,dword ptr [ESP + 0x40]      ; 00531ba5
    CALL crt_math.c_round_FUN_005b7ff0  ; 00531ba9
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    SHL EAX,0x8                         ; 00531bae
    FISTP dword ptr [ESP + 0x40]        ; 00531bb1
    MOV dword ptr [EBX + 0x24],EAX      ; 00531bb5 | DAT_00622038
    MOV EAX,dword ptr [ESP + 0x40]      ; 00531bb8
    SHL EAX,0x8                         ; 00531bbc
    MOV dword ptr [EBX + 0x28],EAX      ; 00531bbf | DAT_0062203c
    MOV ESP,EBP                         ; 00531bc2
    POP EBP                             ; 00531bc4
    POP EDI                             ; 00531bc5
    POP ESI                             ; 00531bc6
    POP EBX                             ; 00531bc7
    RET                                 ; 00531bc8
    LEA EAX,[EDX + 0x104]               ; 00531bc9
        ;   Label: LAB_00531bc9
    LEA EDI,[ESP + 0xc]                 ; 00531bcf
    LEA ESI,[ESP + 0x30]                ; 00531bd3
    FLD float ptr [EAX]                 ; 00531bd7
    FLD float ptr [EAX + 0x4]           ; 00531bd9
    FLD float ptr [EAX + 0x8]           ; 00531bdc
    FXCH ST2                            ; 00531bdf
    FSUB float ptr [ESP + 0x18]         ; 00531be1
    FXCH                                ; 00531be5
    FSUB float ptr [ESP + 0x1c]         ; 00531be7
    FXCH ST2                            ; 00531beb
    FSUB float ptr [ESP + 0x20]         ; 00531bed
    FXCH                                ; 00531bf1
    FSTP float ptr [ESP + 0x30]         ; 00531bf3
    FXCH                                ; 00531bf7
    FSTP float ptr [ESP + 0x34]         ; 00531bf9
    FSTP float ptr [ESP + 0x38]         ; 00531bfd
    MOVSD ES:EDI,ESI                    ; 00531c01
    MOVSD ES:EDI,ESI                    ; 00531c02
    MOVSD ES:EDI,ESI                    ; 00531c03
    FLD float ptr [ESP + 0x10]          ; 00531c04
    FMUL ST0                            ; 00531c08
    FLD float ptr [ESP + 0xc]           ; 00531c0a
    FMUL ST0                            ; 00531c0e
    FADDP                               ; 00531c10
    FLD float ptr [ESP + 0x14]          ; 00531c12
    FMUL ST0                            ; 00531c16
    FADDP                               ; 00531c18
    FSTP float ptr [ESP + 0x48]         ; 00531c1a
    MOV EAX,dword ptr [ESP + 0x48]      ; 00531c1e
    MOV EDI,dword ptr [0x01caf5b4]      ; 00531c22 | DAT_01caf5b4
    SAR EAX,0x1                         ; 00531c28
    ADD EAX,EDI                         ; 00531c2a
    MOV dword ptr [ESP + 0x44],EAX      ; 00531c2c
    FLD float ptr [ESP + 0x44]          ; 00531c30
    FCOMP float ptr [EDX + 0x11d4]      ; 00531c34
    FNSTSW AX                           ; 00531c3a
    SAHF                                ; 00531c3c
    JA 0x00531b07                       ; 00531c3d
        ;   XREF to: 00531b07 (CONDITIONAL_JUMP)  ; LAB_00531b07
    FLD float ptr [ESP + 0x44]          ; 00531c43
    FDIV float ptr [EDX + 0x11d4]       ; 00531c47
    FLD float ptr [EDX + 0x11c4]        ; 00531c4d
    FLD1                                ; 00531c53
    FSUBRP ST2,ST0                      ; 00531c55
    FMUL ST1                            ; 00531c57
    FLD float ptr [EDX + 0x11c8]        ; 00531c59
    FMUL ST2                            ; 00531c5f
    FLD float ptr [EDX + 0x11cc]        ; 00531c61
    FMULP ST3                           ; 00531c67
    FXCH                                ; 00531c69
    FADD float ptr [ESP + 0x4]          ; 00531c6b
    FXCH                                ; 00531c6f
    FADD float ptr [ESP]                ; 00531c71
    FXCH ST2                            ; 00531c74
    FADD float ptr [ESP + 0x8]          ; 00531c76
    FXCH                                ; 00531c7a
    FSTP float ptr [ESP + 0x4]          ; 00531c7c
    FXCH                                ; 00531c80
    FSTP float ptr [ESP]                ; 00531c82
    FSTP float ptr [ESP + 0x8]          ; 00531c85
    JMP 0x00531b07                      ; 00531c89
        ;   XREF to: 00531b07 (UNCONDITIONAL_JUMP)  ; LAB_00531b07
    MOV dword ptr [ESP + 0x8],0x437f0000 ; 00531c8e
        ;   Label: LAB_00531c8e
    JMP 0x00531b7c                      ; 00531c96
        ;   XREF to: 00531b7c (UNCONDITIONAL_JUMP)  ; LAB_00531b7c


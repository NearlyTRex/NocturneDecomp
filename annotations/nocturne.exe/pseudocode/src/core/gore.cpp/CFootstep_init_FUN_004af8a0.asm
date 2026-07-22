; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CFootstep_init_FUN_004af8a0(undefined4 *param_1,float *param_2,int param_3,undefined4 param_4,undefined4 param_5 ,undefined4 param_6)
;
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_gore.cpp_CGore_createFootstep_FUN_004b06b0 at 004b0710
;
; Referenced Globals:
;   double DOUBLE_00585180 = 0.5
;   double DOUBLE_00585188 = 4
;   float FLOAT_00585190 = -3
;   float FLOAT_00585194 = 0.08333334
;   undefined4 DAT_005ba82c
;   undefined4 DAT_005ba830
;   undefined4 DAT_005ba83c
;   undefined4 DAT_01fba938
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af8a0
        ;   Label: core_gore.cpp_CFootstep_init_FUN_004af8a0
    PUSH ESI                            ; 004af8a1
    PUSH EDI                            ; 004af8a2
    PUSH EBP                            ; 004af8a3
    MOV EBP,ESP                         ; 004af8a4
    SUB ESP,0x2c                        ; 004af8a6
    AND ESP,0xfffffff8                  ; 004af8a9
    MOV EDI,dword ptr [EBP + 0x18]      ; 004af8ac
    MOV ESI,dword ptr [EBP + 0x14]      ; 004af8af
    XOR EBX,EBX                         ; 004af8b2
    ADD ESI,0x8                         ; 004af8b4
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004af8b7
        ;   Label: LAB_004af8b7
    FLD float ptr [EAX + 0x4]           ; 004af8ba
    FLD ST0                             ; 004af8bd
    FSIN                                ; 004af8bf
    FXCH                                ; 004af8c1
    FCOS                                ; 004af8c3
    FXCH                                ; 004af8c5
    FLD double ptr [0x00585180]         ; 004af8c7 | DOUBLE_00585180
    FXCH                                ; 004af8cd
    FMUL ST1                            ; 004af8cf
    FXCH ST2                            ; 004af8d1
    FMULP                               ; 004af8d3
    FLD ST1                             ; 004af8d5
    FMUL float ptr [EBX + 0x5ba82c]     ; 004af8d7 | DAT_005ba82c | DAT_005ba830
    FLD ST1                             ; 004af8dd
    FCHS                                ; 004af8df
    FMUL float ptr [EBX + 0x5ba82c]     ; 004af8e1 | DAT_005ba82c | DAT_005ba830
    FXCH ST2                            ; 004af8e7
    FMUL float ptr [EBX + 0x5ba83c]     ; 004af8e9 | DAT_005ba83c
    XOR EDX,EDX                         ; 004af8ef
    FXCH ST3                            ; 004af8f1
    FMUL float ptr [EBX + 0x5ba83c]     ; 004af8f3 | DAT_005ba83c
    MOV dword ptr [ESP + 0x4],EDX       ; 004af8f9
    FXCH ST3                            ; 004af8fd
    FADDP                               ; 004af8ff
    FXCH ST2                            ; 004af901
    FADDP                               ; 004af903
    FXCH                                ; 004af905
    FSTP float ptr [ESP + 0x8]          ; 004af907
    FST float ptr [ESP]                 ; 004af90b
    FADD float ptr [EDI]                ; 004af90e
    FSTP float ptr [ESP]                ; 004af910
    MOV EAX,dword ptr [EDI + 0x4]       ; 004af913
    LEA EDX,[ESP + 0xc]                 ; 004af916
    MOV dword ptr [ESP + 0x4],EAX       ; 004af91a
    FLD float ptr [ESP + 0x8]           ; 004af91e
    FADD float ptr [EDI + 0x8]          ; 004af922
    MOV EAX,ESP                         ; 004af925
    FSTP float ptr [ESP + 0x8]          ; 004af927
    CMP EDX,EAX                         ; 004af92b
    JZ 0x004af946                       ; 004af92d
        ;   XREF to: 004af946 (CONDITIONAL_JUMP)  ; LAB_004af946
    MOV EAX,dword ptr [ESP]             ; 004af92f
    MOV dword ptr [ESP + 0xc],EAX       ; 004af932
    MOV EAX,dword ptr [ESP + 0x4]       ; 004af936
    MOV dword ptr [ESP + 0x10],EAX      ; 004af93a
    MOV EAX,dword ptr [ESP + 0x8]       ; 004af93e
    MOV dword ptr [ESP + 0x14],EAX      ; 004af942
    FLD1                                ; 004af946
        ;   Label: LAB_004af946
    PUSH 0x0                            ; 004af948
    FLD float ptr [ESP + 0x14]          ; 004af94a
    LEA EAX,[ESP + 0x10]                ; 004af94e
    PUSH 0x0                            ; 004af952
    FXCH                                ; 004af954
    FADD float ptr [ESP + 0xc]          ; 004af956
    PUSH EAX                            ; 004af95a
    LEA EAX,[ESP + 0xc]                 ; 004af95b
    FXCH                                ; 004af95f
    FADD float ptr [0x00585190]         ; 004af961 | FLOAT_00585190
    PUSH EAX                            ; 004af967
    FXCH                                ; 004af968
    FSTP float ptr [ESP + 0x14]         ; 004af96a
    PUSH 0x1fba938                      ; 004af96e | DAT_01fba938
    FSTP float ptr [ESP + 0x24]         ; 004af973
    CALL core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00 ; 004af977
        ;   XREF to: 00467a00 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00()
    MOV dword ptr [ESP + 0x3c],EAX      ; 004af97c
    FLD float ptr [ESP + 0x3c]          ; 004af980
    FMUL double ptr [0x00585188]        ; 004af984 | DOUBLE_00585188
    ADD ESP,0x14                        ; 004af98a
    FSUBR float ptr [ESP + 0x4]         ; 004af98d
    FADD float ptr [0x00585194]         ; 004af991 | FLOAT_00585194
    MOV EAX,ESP                         ; 004af997
    FSTP float ptr [ESP + 0x4]          ; 004af999
    CMP ESI,EAX                         ; 004af99d
    JZ 0x004af9b4                       ; 004af99f
        ;   XREF to: 004af9b4 (CONDITIONAL_JUMP)  ; LAB_004af9b4
    MOV EAX,dword ptr [ESP]             ; 004af9a1
    MOV dword ptr [ESI],EAX             ; 004af9a4
    MOV EAX,dword ptr [ESP + 0x4]       ; 004af9a6
    MOV dword ptr [ESI + 0x4],EAX       ; 004af9aa
    MOV EAX,dword ptr [ESP + 0x8]       ; 004af9ad
    MOV dword ptr [ESI + 0x8],EAX       ; 004af9b1
    ADD EBX,0x4                         ; 004af9b4
        ;   Label: LAB_004af9b4
    ADD ESI,0xc                         ; 004af9b7
    CMP EBX,0x10                        ; 004af9ba
    JNZ 0x004af8b7                      ; 004af9bd
        ;   XREF to: 004af8b7 (CONDITIONAL_JUMP)  ; LAB_004af8b7
    MOV EBX,dword ptr [EBP + 0x14]      ; 004af9c3
    MOV EDX,dword ptr [EBP + 0x14]      ; 004af9c6
    ADD EBX,0xc                         ; 004af9c9
    ADD EDX,0x30                        ; 004af9cc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004af9cf
        ;   Label: LAB_004af9cf
    FLD float ptr [EAX + 0xc]           ; 004af9d2
    FSUB float ptr [EBX + 0xc]          ; 004af9d5
    FABS                                ; 004af9d8
    FCOMP double ptr [0x00585180]       ; 004af9da | DOUBLE_00585180
    FNSTSW AX                           ; 004af9e0
    SAHF                                ; 004af9e2
    JBE 0x004af9ee                      ; 004af9e3
        ;   XREF to: 004af9ee (CONDITIONAL_JUMP)  ; LAB_004af9ee
    MOV EAX,dword ptr [EBP + 0x14]      ; 004af9e5
    MOV ECX,dword ptr [EAX + 0xc]       ; 004af9e8
    MOV dword ptr [EBX + 0xc],ECX       ; 004af9eb
    ADD EBX,0xc                         ; 004af9ee
        ;   Label: LAB_004af9ee
    CMP EBX,EDX                         ; 004af9f1
    JNZ 0x004af9cf                      ; 004af9f3
        ;   XREF to: 004af9cf (CONDITIONAL_JUMP)  ; LAB_004af9cf
    MOV EAX,dword ptr [EBP + 0x14]      ; 004af9f5
    MOV EDX,dword ptr [EBP + 0x24]      ; 004af9f8
    MOV dword ptr [EAX],0x0             ; 004af9fb
    MOV dword ptr [EAX + 0x38],EDX      ; 004afa01
    MOV EDX,dword ptr [EBP + 0x20]      ; 004afa04
    MOV dword ptr [EAX + 0x3c],EDX      ; 004afa07
    MOV EDX,dword ptr [EBP + 0x28]      ; 004afa0a
    MOV dword ptr [EAX + 0x4],EDX       ; 004afa0d
    MOV ESP,EBP                         ; 004afa10
    POP EBP                             ; 004afa12
    POP EDI                             ; 004afa13
    POP ESI                             ; 004afa14
    POP EBX                             ; 004afa15
    RET                                 ; 004afa16


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_004687e0(int param_1,float *param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x64]:4  local_64
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
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80 at 0050ef24
;
; Referenced Globals:
;   float FLOAT_0057e1ea = 2
;   double DOUBLE_0057e1ee = 131072.094299316
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_testCylinderGroundCollision_FUN_0044b500
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004687e0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_004687e0
    PUSH ESI                            ; 004687e1
    PUSH EDI                            ; 004687e2
    PUSH EBP                            ; 004687e3
    SUB ESP,0x54                        ; 004687e4
    MOV EBP,dword ptr [ESP + 0x68]      ; 004687e7
    MOV ESI,dword ptr [ESP + 0x6c]      ; 004687eb
    MOV EAX,dword ptr [ESI]             ; 004687ef
    LEA EBX,[ESI + 0x4]                 ; 004687f1
    MOV dword ptr [ESP + 0x18],EAX      ; 004687f4
    MOV EAX,dword ptr [EBX]             ; 004687f8
    LEA EDX,[ESI + 0x8]                 ; 004687fa
    MOV dword ptr [ESP + 0x1c],EAX      ; 004687fd
    MOV EAX,dword ptr [EDX]             ; 00468801
    MOV dword ptr [ESP + 0x20],EAX      ; 00468803
    MOV EAX,dword ptr [ESI]             ; 00468807
    MOV dword ptr [ESP],EAX             ; 00468809
    MOV EAX,dword ptr [EBX]             ; 0046880c
    FLD float ptr [ESP + 0x1c]          ; 0046880e
    MOV dword ptr [ESP + 0x4],EAX       ; 00468812
    FADD float ptr [0x0057e1ea]         ; 00468816 | FLOAT_0057e1ea
    FLD float ptr [ESP + 0x4]           ; 0046881c
    MOV EAX,dword ptr [EDX]             ; 00468820
    FXCH                                ; 00468822
    FST float ptr [ESP + 0x1c]          ; 00468824
    FXCH                                ; 00468828
    FADD float ptr [0x0057e1ee]         ; 0046882a | DOUBLE_0057e1ee
    MOV dword ptr [ESP + 0x8],EAX       ; 00468830
    FSTP float ptr [ESP + 0x4]          ; 00468834
    FSUB float ptr [EBP + 0x14]         ; 00468838
    FLD1                                ; 0046883b
    FDIV float ptr [EBP + 0x2c]         ; 0046883d
    FLD float ptr [ESP + 0x18]          ; 00468840
    FSUB float ptr [EBP + 0x10]         ; 00468844
    FST float ptr [ESP + 0x2c]          ; 00468847
    FSUB float ptr [ESP + 0x70]         ; 0046884b
    FLD1                                ; 0046884f
    FDIV float ptr [EBP + 0x28]         ; 00468851
    FLD float ptr [ESP + 0x20]          ; 00468854
    FSUB float ptr [EBP + 0x18]         ; 00468858
    FST float ptr [ESP + 0x30]          ; 0046885b
    FSUB float ptr [ESP + 0x70]         ; 0046885f
    FLD1                                ; 00468863
    FDIV float ptr [EBP + 0x30]         ; 00468865
    FLD float ptr [ESP + 0x4]           ; 00468868
    FSUB float ptr [EBP + 0x14]         ; 0046886c
    FXCH ST5                            ; 0046886f
    FSTP float ptr [ESP + 0x38]         ; 00468871
    FXCH ST5                            ; 00468875
    FMUL float ptr [ESP + 0x38]         ; 00468877
    FXCH ST4                            ; 0046887b
    FMUL float ptr [ESP + 0x38]         ; 0046887d
    FXCH ST3                            ; 00468881
    FMUL ST2                            ; 00468883
    FXCH ST5                            ; 00468885
    FSTP float ptr [ESP + 0x38]         ; 00468887
    FMUL float ptr [ESP + 0x38]         ; 0046888b
    FLD float ptr [ESP + 0x2c]          ; 0046888f
    FADD float ptr [ESP + 0x70]         ; 00468893
    FLD float ptr [ESP + 0x30]          ; 00468897
    FADD float ptr [ESP + 0x70]         ; 0046889b
    FXCH                                ; 0046889f
    FMULP ST3                           ; 004688a1
    FMUL float ptr [ESP + 0x38]         ; 004688a3
    XOR EDI,EDI                         ; 004688a7
    MOV EDX,0xf149f2ca                  ; 004688a9
    FXCH ST4                            ; 004688ae
    CALL crt_math.c_round_FUN_00563a30  ; 004688b0
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST3                            ; 004688b5
    CALL crt_math.c_round_FUN_00563a30  ; 004688b7
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST3                            ; 004688bc
    FISTP dword ptr [ESP + 0x4c]        ; 004688be
    FXCH ST2                            ; 004688c2
    FISTP dword ptr [ESP + 0x40]        ; 004688c4
    MOV dword ptr [ESP + 0x28],EDX      ; 004688c8
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004688cc
    MOV ECX,dword ptr [ESP + 0x40]      ; 004688d0
    FXCH ST3                            ; 004688d4
    CALL crt_math.c_round_FUN_00563a30  ; 004688d6
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH                                ; 004688db
    CALL crt_math.c_round_FUN_00563a30  ; 004688dd
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST3                            ; 004688e2
    CALL crt_math.c_round_FUN_00563a30  ; 004688e4
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST2                            ; 004688e9
    CALL crt_math.c_round_FUN_00563a30  ; 004688eb
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH                                ; 004688f0
    FISTP dword ptr [ESP + 0x24]        ; 004688f2
    FXCH ST2                            ; 004688f6
    FISTP dword ptr [ESP + 0x48]        ; 004688f8
    FISTP dword ptr [ESP + 0x44]        ; 004688fc
    FISTP dword ptr [ESP + 0x50]        ; 00468900
    CMP EAX,ECX                         ; 00468904
    JL 0x004689d3                       ; 00468906
        ;   XREF to: 004689d3 (CONDITIONAL_JUMP)  ; LAB_004689d3
    MOV EDX,dword ptr [ESP + 0x44]      ; 0046890c
        ;   Label: LAB_0046890c
    MOV ESI,dword ptr [ESP + 0x24]      ; 00468910
    CMP ESI,EDX                         ; 00468914
    JG 0x00468974                       ; 00468916
        ;   XREF to: 00468974 (CONDITIONAL_JUMP)  ; LAB_00468974
    MOV EDX,dword ptr [ESP + 0x50]      ; 00468918
        ;   Label: LAB_00468918
    MOV EBX,dword ptr [ESP + 0x48]      ; 0046891c
    CMP EBX,EDX                         ; 00468920
    JG 0x0046896b                       ; 00468922
        ;   XREF to: 0046896b (CONDITIONAL_JUMP)  ; LAB_0046896b
    PUSH EBX                            ; 00468924
        ;   Label: LAB_00468924
    MOV EAX,dword ptr [ESP + 0x50]      ; 00468925
    PUSH EAX                            ; 00468929
    PUSH ESI                            ; 0046892a
    PUSH EBP                            ; 0046892b
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0 ; 0046892c
        ;   XREF to: 004678d0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0()
    ADD ESP,0x10                        ; 00468931
    TEST EAX,EAX                        ; 00468934
    JZ 0x00468962                       ; 00468936
        ;   XREF to: 00468962 (CONDITIONAL_JUMP)  ; LAB_00468962
    LEA EDX,[ESP + 0x34]                ; 00468938
    PUSH EDX                            ; 0046893c
    LEA EDX,[ESP + 0x10]                ; 0046893d
    PUSH EDX                            ; 00468941
    LEA EDX,[ESP + 0x30]                ; 00468942
    PUSH EDX                            ; 00468946
    LEA EDX,[ESP + 0x24]                ; 00468947
    PUSH dword ptr [ESP + 0x7c]         ; 0046894b
    PUSH EDX                            ; 0046894f
    PUSH EAX                            ; 00468950
    CALL core_dcube.cpp_CDemonCube_testCylinderGroundCollision_FUN_0044b500 ; 00468951
        ;   XREF to: 0044b500 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_CDemonCube_testCylinderGroundCollision_FUN_0044b500()
    ADD ESP,0x18                        ; 00468956
    TEST EAX,EAX                        ; 00468959
    JZ 0x00468962                       ; 0046895b
        ;   XREF to: 00468962 (CONDITIONAL_JUMP)  ; LAB_00468962
    MOV EDI,0x1                         ; 0046895d
    MOV ECX,dword ptr [ESP + 0x50]      ; 00468962
        ;   Label: LAB_00468962
    INC EBX                             ; 00468966
    CMP EBX,ECX                         ; 00468967
    JLE 0x00468924                      ; 00468969
        ;   XREF to: 00468924 (CONDITIONAL_JUMP)  ; LAB_00468924
    MOV ECX,dword ptr [ESP + 0x44]      ; 0046896b
        ;   Label: LAB_0046896b
    INC ESI                             ; 0046896f
    CMP ESI,ECX                         ; 00468970
    JLE 0x00468918                      ; 00468972
        ;   XREF to: 00468918 (CONDITIONAL_JUMP)  ; LAB_00468918
    TEST EDI,EDI                        ; 00468974
        ;   Label: LAB_00468974
    JZ 0x004689be                       ; 00468976
        ;   XREF to: 004689be (CONDITIONAL_JUMP)  ; LAB_004689be
    MOV EBX,dword ptr [ESP + 0x78]      ; 00468978
    TEST EBX,EBX                        ; 0046897c
    JZ 0x0046899c                       ; 0046897e
        ;   XREF to: 0046899c (CONDITIONAL_JUMP)  ; LAB_0046899c
    LEA EAX,[ESP + 0xc]                 ; 00468980
    CMP EAX,EBX                         ; 00468984
    JZ 0x0046899c                       ; 00468986
        ;   XREF to: 0046899c (CONDITIONAL_JUMP)  ; LAB_0046899c
    MOV EAX,dword ptr [ESP + 0xc]       ; 00468988
    MOV dword ptr [EBX],EAX             ; 0046898c
    MOV EAX,dword ptr [ESP + 0x10]      ; 0046898e
    MOV dword ptr [EBX + 0x4],EAX       ; 00468992
    MOV EAX,dword ptr [ESP + 0x14]      ; 00468995
    MOV dword ptr [EBX + 0x8],EAX       ; 00468999
    MOV EDI,dword ptr [ESP + 0x74]      ; 0046899c
        ;   Label: LAB_0046899c
    TEST EDI,EDI                        ; 004689a0
    JZ 0x004689aa                       ; 004689a2
        ;   XREF to: 004689aa (CONDITIONAL_JUMP)  ; LAB_004689aa
    MOV EAX,dword ptr [ESP + 0x34]      ; 004689a4
    MOV dword ptr [EDI],EAX             ; 004689a8
    MOV EAX,dword ptr [ESP + 0x28]      ; 004689aa
        ;   Label: LAB_004689aa
    MOV dword ptr [ESP + 0x3c],EAX      ; 004689ae
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004689b2
    ADD ESP,0x54                        ; 004689b6
    POP EBP                             ; 004689b9
    POP EDI                             ; 004689ba
    POP ESI                             ; 004689bb
    POP EBX                             ; 004689bc
    RET                                 ; 004689bd
    MOV EBX,dword ptr [ESP + 0x4c]      ; 004689be
        ;   Label: LAB_004689be
    DEC EBX                             ; 004689c2
    MOV ESI,dword ptr [ESP + 0x40]      ; 004689c3
    MOV dword ptr [ESP + 0x4c],EBX      ; 004689c7
    CMP EBX,ESI                         ; 004689cb
    JGE 0x0046890c                      ; 004689cd
        ;   XREF to: 0046890c (CONDITIONAL_JUMP)  ; LAB_0046890c
    MOV EDI,dword ptr [ESP + 0x74]      ; 004689d3
        ;   Label: LAB_004689d3
    TEST EDI,EDI                        ; 004689d7
    JZ 0x004689e1                       ; 004689d9
        ;   XREF to: 004689e1 (CONDITIONAL_JUMP)  ; LAB_004689e1
    MOV dword ptr [EDI],0x1             ; 004689db
    MOV EBP,dword ptr [ESP + 0x78]      ; 004689e1
        ;   Label: LAB_004689e1
    TEST EBP,EBP                        ; 004689e5
    JZ 0x004689fe                       ; 004689e7
        ;   XREF to: 004689fe (CONDITIONAL_JUMP)  ; LAB_004689fe
    MOV dword ptr [EBP + 0x4],0x3f800000 ; 004689e9
    MOV dword ptr [EBP + 0x8],0x0       ; 004689f0
    MOV dword ptr [EBP],0x0             ; 004689f7
    MOV EAX,dword ptr [ESP + 0x4]       ; 004689fe
        ;   Label: LAB_004689fe
    MOV dword ptr [ESP + 0x3c],EAX      ; 00468a02
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00468a06
    ADD ESP,0x54                        ; 00468a0a
    POP EBP                             ; 00468a0d
    POP EDI                             ; 00468a0e
    POP ESI                             ; 00468a0f
    POP EBX                             ; 00468a10
    RET                                 ; 00468a11


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_charactr_cpp_CCharacter_FUN_0042c010(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x44]:1  local_44
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
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   double DOUBLE_0061718a = 5
;   CGame* g_CGamePtr = 02d81a9c
;   undefined4 g_CGameInstance.delta_time_float
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042c010
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042c010
    PUSH EBP                            ; 0042c011
    MOV EBP,ESP                         ; 0042c012
    SUB ESP,0x3c                        ; 0042c014
    MOV ECX,dword ptr [EBP + 0xc]       ; 0042c017
    MOV EBX,dword ptr [EBP + 0x10]      ; 0042c01a
    TEST EBX,EBX                        ; 0042c01d
    JNZ 0x0042c028                      ; 0042c01f
        ;   XREF to: 0042c028 (CONDITIONAL_JUMP)  ; LAB_0042c028
    XOR EAX,EAX                         ; 0042c021
    MOV ESP,EBP                         ; 0042c023
        ;   Label: LAB_0042c023
    POP EBP                             ; 0042c025
    POP EBX                             ; 0042c026
    RET                                 ; 0042c027
    LEA EAX,[EBP + -0x18]               ; 0042c028
        ;   Label: LAB_0042c028
    PUSH EAX                            ; 0042c02b
    MOV EDX,dword ptr [ECX + 0x154]     ; 0042c02c
    PUSH ECX                            ; 0042c032
    CALL dword ptr [EDX + 0x128]        ; 0042c033
    ADD ESP,0x8                         ; 0042c039
    TEST EAX,EAX                        ; 0042c03c
    JZ 0x0042c023                       ; 0042c03e
        ;   XREF to: 0042c023 (CONDITIONAL_JUMP)  ; LAB_0042c023
    MOV EDX,dword ptr [EBP + 0x14]      ; 0042c040
    PUSH EDX                            ; 0042c043
    LEA EAX,[EBP + -0x3c]               ; 0042c044
    PUSH EAX                            ; 0042c047
    PUSH EBX                            ; 0042c048
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0042c049
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    FLD float ptr [EBP + -0x14]         ; 0042c04e
    FLD float ptr [EBP + -0x18]         ; 0042c051
    FSUB float ptr [EAX]                ; 0042c054
    FLD float ptr [EBP + -0x10]         ; 0042c056
    FXCH                                ; 0042c059
    FSTP float ptr [EBP + -0x24]        ; 0042c05b
    FXCH                                ; 0042c05e
    FSUB float ptr [EAX + 0x4]          ; 0042c060
    FLD float ptr [EBP + -0x24]         ; 0042c063
    FXCH                                ; 0042c066
    FSTP float ptr [EBP + -0x20]        ; 0042c068
    FXCH                                ; 0042c06b
    FSUB float ptr [EAX + 0x8]          ; 0042c06d
    FXCH                                ; 0042c070
    FMUL float ptr [EBP + -0x24]        ; 0042c072
    FXCH                                ; 0042c075
    FST float ptr [EBP + -0x1c]         ; 0042c077
    FMUL float ptr [EBP + -0x1c]        ; 0042c07a
    XOR ECX,ECX                         ; 0042c07d
    MOV EAX,[0x0067b654]                ; 0042c07f | g_CGamePtr
    MOV dword ptr [EBP + -0x20],ECX     ; 0042c084
    FADDP                               ; 0042c087
    FLD float ptr [EAX + 0x264]         ; 0042c089 | g_CGameInstance.delta_time_float
    FXCH                                ; 0042c08f
    FSQRT                               ; 0042c091
    FXCH                                ; 0042c093
    FMUL double ptr [0x0061718a]        ; 0042c095 | DOUBLE_0061718a
    ADD ESP,0xc                         ; 0042c09b
    FSTP float ptr [EBP + -0xc]         ; 0042c09e
    FST float ptr [EBP + -0x8]          ; 0042c0a1
    FCOMP float ptr [EBP + -0xc]        ; 0042c0a4
    FNSTSW AX                           ; 0042c0a7
    SAHF                                ; 0042c0a9
    JBE 0x0042c0d3                      ; 0042c0aa
        ;   XREF to: 0042c0d3 (CONDITIONAL_JUMP)  ; LAB_0042c0d3
    FLD float ptr [EBP + -0xc]          ; 0042c0ac
    FDIV float ptr [EBP + -0x8]         ; 0042c0af
    FLD float ptr [EBP + -0x24]         ; 0042c0b2
    FXCH                                ; 0042c0b5
    FSTP float ptr [EBP + -0x4]         ; 0042c0b7
    FMUL float ptr [EBP + -0x4]         ; 0042c0ba
    FLDZ                                ; 0042c0bd
    FMUL float ptr [EBP + -0x4]         ; 0042c0bf
    FLD float ptr [EBP + -0x1c]         ; 0042c0c2
    FMUL float ptr [EBP + -0x4]         ; 0042c0c5
    FXCH ST2                            ; 0042c0c8
    FSTP float ptr [EBP + -0x24]        ; 0042c0ca
    FSTP float ptr [EBP + -0x20]        ; 0042c0cd
    FSTP float ptr [EBP + -0x1c]        ; 0042c0d0
    LEA EAX,[EBX + 0x30]                ; 0042c0d3
        ;   Label: LAB_0042c0d3
    PUSH EAX                            ; 0042c0d6
    LEA EAX,[EBX + 0x20]                ; 0042c0d7
    FLD float ptr [EAX]                 ; 0042c0da
    FADD float ptr [EBP + -0x24]        ; 0042c0dc
    MOV EDX,dword ptr [EBX + 0x154]     ; 0042c0df
    FSTP float ptr [EBP + -0x30]        ; 0042c0e5
    FLD float ptr [EAX + 0x4]           ; 0042c0e8
    FADD float ptr [EBP + -0x20]        ; 0042c0eb
    FSTP float ptr [EBP + -0x2c]        ; 0042c0ee
    FLD float ptr [EAX + 0x8]           ; 0042c0f1
    LEA EAX,[EBP + -0x30]               ; 0042c0f4
    PUSH EAX                            ; 0042c0f7
    FADD float ptr [EBP + -0x1c]        ; 0042c0f8
    PUSH EBX                            ; 0042c0fb
    FSTP float ptr [EBP + -0x28]        ; 0042c0fc
    CALL dword ptr [EDX + 0x60]         ; 0042c0ff
    MOV EAX,0x1                         ; 0042c102
    ADD ESP,0xc                         ; 0042c107
    MOV ESP,EBP                         ; 0042c10a
    POP EBP                             ; 0042c10c
    POP EBX                             ; 0042c10d
    RET                                 ; 0042c10e


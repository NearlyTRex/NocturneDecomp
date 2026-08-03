; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vehicle_cpp_CVehicle_setup_FUN_0054e7f0(CVehicle *this_ptr)
;
; Parameters:
; CVehicle *       Stack[0x4]:4   this_ptr
; Local Variables:
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
; Referenced Globals:
;   double DOUBLE_00597310 = 0.03125
;   double DOUBLE_00597318 = 0.0833333333333333
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_course.cpp_CCourse_load_FUN_0043b690
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e7f0
        ;   Label: core_vehicle.cpp_CVehicle_setup_FUN_0054e7f0
    PUSH ESI                            ; 0054e7f1
    PUSH EDI                            ; 0054e7f2
    PUSH EBP                            ; 0054e7f3
    SUB ESP,0x24                        ; 0054e7f4
    MOV EBX,dword ptr [ESP + 0x38]      ; 0054e7f7
    PUSH EBX                            ; 0054e7fb
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 0054e7fc
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00409fc0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0054e801
    LEA EAX,[EBX + 0x150]               ; 0054e804
    PUSH EAX                            ; 0054e80a
    XOR EDI,EDI                         ; 0054e80b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 0054e80d
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EBX + 0x930]     ; 0054e812
    ADD ESP,0x4                         ; 0054e818
    TEST EDX,EDX                        ; 0054e81b
    JLE 0x0054e840                      ; 0054e81d
        ;   XREF to: 0054e840 (CONDITIONAL_JUMP)  ; LAB_0054e840
    LEA ESI,[EBX + 0x948]               ; 0054e81f
    PUSH ESI                            ; 0054e825
        ;   Label: LAB_0054e825
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 0054e826
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    INC EDI                             ; 0054e82b
    ADD ESP,0x4                         ; 0054e82c
    MOV ECX,dword ptr [EBX + 0x930]     ; 0054e82f
    ADD ESI,0x1b4                       ; 0054e835
    CMP EDI,ECX                         ; 0054e83b
    JL 0x0054e825                       ; 0054e83d
        ;   XREF to: 0054e825 (CONDITIONAL_JUMP)  ; LAB_0054e825
    NOP                                 ; 0054e83f
    LEA EAX,[EBX + 0x150]               ; 0054e840
        ;   Label: LAB_0054e840
    PUSH EAX                            ; 0054e846
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 0054e847
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x350]     ; 0054e84c
    ADD ESP,0x4                         ; 0054e852
    MOV EAX,dword ptr [EDX]             ; 0054e855
    MOV dword ptr [ESP],EAX             ; 0054e857
    LEA EAX,[EDX + 0x4]                 ; 0054e85a
    MOV EAX,dword ptr [EAX]             ; 0054e85d
    MOV dword ptr [ESP + 0x4],EAX       ; 0054e85f
    LEA EAX,[EDX + 0x8]                 ; 0054e863
    MOV EAX,dword ptr [EAX]             ; 0054e866
    MOV dword ptr [ESP + 0x8],EAX       ; 0054e868
    MOV EAX,dword ptr [EDX + 0xc]       ; 0054e86c
    ADD EDX,0xc                         ; 0054e86f
    MOV dword ptr [ESP + 0xc],EAX       ; 0054e872
    LEA EAX,[EDX + 0x4]                 ; 0054e876
    MOV EAX,dword ptr [EAX]             ; 0054e879
    FLD float ptr [ESP + 0xc]           ; 0054e87b
    MOV dword ptr [ESP + 0x10],EAX      ; 0054e87f
    FSUB float ptr [ESP]                ; 0054e883
    FLD float ptr [ESP + 0x10]          ; 0054e886
    LEA EAX,[EDX + 0x8]                 ; 0054e88a
    FSUB float ptr [ESP + 0x4]          ; 0054e88d
    LEA EDX,[EBX + 0x924]               ; 0054e891
    MOV EAX,dword ptr [EAX]             ; 0054e897
    FXCH                                ; 0054e899
    FSTP float ptr [ESP + 0x18]         ; 0054e89b
    MOV dword ptr [ESP + 0x14],EAX      ; 0054e89f
    FSTP float ptr [ESP + 0x1c]         ; 0054e8a3
    FLD float ptr [ESP + 0x14]          ; 0054e8a7
    FSUB float ptr [ESP + 0x8]          ; 0054e8ab
    LEA EAX,[ESP + 0x18]                ; 0054e8af
    FSTP float ptr [ESP + 0x20]         ; 0054e8b3
    CMP EDX,EAX                         ; 0054e8b7
    JZ 0x0054e8cf                       ; 0054e8b9
        ;   XREF to: 0054e8cf (CONDITIONAL_JUMP)  ; LAB_0054e8cf
    MOV EAX,dword ptr [ESP + 0x18]      ; 0054e8bb
    MOV dword ptr [EDX],EAX             ; 0054e8bf
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0054e8c1
    MOV dword ptr [EDX + 0x4],EAX       ; 0054e8c5
    MOV EAX,dword ptr [ESP + 0x20]      ; 0054e8c8
    MOV dword ptr [EDX + 0x8],EAX       ; 0054e8cc
    FLD float ptr [EBX + 0x910]         ; 0054e8cf
        ;   Label: LAB_0054e8cf
    FMUL double ptr [0x00597310]        ; 0054e8d5 | DOUBLE_00597310
    FLD float ptr [EBX + 0x928]         ; 0054e8db
    FMUL ST0                            ; 0054e8e1
    FLD float ptr [EBX + 0x924]         ; 0054e8e3
    FMUL ST0                            ; 0054e8e9
    FLD float ptr [EBX + 0x924]         ; 0054e8eb
    FMUL ST0                            ; 0054e8f1
    FLD float ptr [EBX + 0x92c]         ; 0054e8f3
    FMUL ST0                            ; 0054e8f9
    FLD float ptr [EBX + 0x92c]         ; 0054e8fb
    FMUL ST0                            ; 0054e901
    FLD float ptr [EBX + 0x928]         ; 0054e903
    FMUL ST0                            ; 0054e909
    FXCH ST2                            ; 0054e90b
    FADDP ST5,ST0                       ; 0054e90d
    FXCH ST5                            ; 0054e90f
    FST float ptr [EBX + 0x914]         ; 0054e911
    FLD double ptr [0x00597318]         ; 0054e917 | DOUBLE_00597318
    FXCH                                ; 0054e91d
    FMUL ST1                            ; 0054e91f
    FXCH ST6                            ; 0054e921
    FADDP ST4,ST0                       ; 0054e923
    FXCH                                ; 0054e925
    FADDP ST2,ST0                       ; 0054e927
    FLD float ptr [EBX + 0x914]         ; 0054e929
    FMUL ST1                            ; 0054e92f
    FLD float ptr [EBX + 0x914]         ; 0054e931
    FMULP ST2                           ; 0054e937
    FXCH ST5                            ; 0054e939
    FMULP ST4                           ; 0054e93b
    FXCH ST4                            ; 0054e93d
    FMULP ST2                           ; 0054e93f
    FMULP ST3                           ; 0054e941
    LEA EAX,[EBX + 0x8e0]               ; 0054e943
    FXCH                                ; 0054e949
    FSTP float ptr [EBX + 0x918]        ; 0054e94b
    FSTP float ptr [EBX + 0x91c]        ; 0054e951
    FSTP float ptr [EBX + 0x920]        ; 0054e957
    MOV dword ptr [EAX + 0x8],0x0       ; 0054e95d
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054e964
    MOV dword ptr [EAX + 0x4],EDX       ; 0054e967
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054e96a
    MOV dword ptr [EAX],EDX             ; 0054e96d
    LEA EAX,[EBX + 0x904]               ; 0054e96f
    MOV dword ptr [EAX + 0x8],0x0       ; 0054e975
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054e97c
    MOV dword ptr [EAX + 0x4],EDX       ; 0054e97f
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054e982
    MOV dword ptr [EAX],EDX             ; 0054e985
    LEA EAX,[EBX + 0x8c8]               ; 0054e987
    MOV dword ptr [EAX + 0x8],0x0       ; 0054e98d
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054e994
    MOV dword ptr [EAX + 0x4],EDX       ; 0054e997
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054e99a
    MOV dword ptr [EAX],EDX             ; 0054e99d
    LEA EAX,[EBX + 0x8ec]               ; 0054e99f
    MOV dword ptr [EAX + 0x8],0x0       ; 0054e9a5
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054e9ac
    MOV dword ptr [EAX + 0x4],EDX       ; 0054e9af
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054e9b2
    MOV dword ptr [EAX],EDX             ; 0054e9b5
    LEA EAX,[EBX + 0x8d4]               ; 0054e9b7
    MOV dword ptr [EAX + 0x8],0x0       ; 0054e9bd
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054e9c4
    MOV dword ptr [EAX + 0x4],EDX       ; 0054e9c7
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054e9ca
    MOV dword ptr [EAX],EDX             ; 0054e9cd
    LEA EAX,[EBX + 0x8f8]               ; 0054e9cf
    MOV dword ptr [EAX + 0x8],0x0       ; 0054e9d5
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054e9dc
    MOV dword ptr [EAX + 0x4],EDX       ; 0054e9df
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054e9e2
    MOV dword ptr [EAX],EDX             ; 0054e9e5
    LEA EAX,[EBX + 0x8bc]               ; 0054e9e7
    MOV dword ptr [EAX + 0x8],0x0       ; 0054e9ed
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054e9f4
    MOV dword ptr [EAX + 0x4],EDX       ; 0054e9f7
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054e9fa
    MOV dword ptr [EAX],EDX             ; 0054e9fd
    MOV EDI,dword ptr [EBX + 0x930]     ; 0054e9ff
    XOR ESI,ESI                         ; 0054ea05
    TEST EDI,EDI                        ; 0054ea07
    JLE 0x0054ea71                      ; 0054ea09
        ;   XREF to: 0054ea71 (CONDITIONAL_JUMP)  ; LAB_0054ea71
    LEA EDI,[EBX + 0x934]               ; 0054ea0b
    LEA EDX,[EDI + 0x19c]               ; 0054ea11
    LEA EAX,[EDI + 0x190]               ; 0054ea17
    IMUL ECX,ESI,0x1b4                  ; 0054ea1d
        ;   Label: LAB_0054ea1d
    ADD ECX,EDI                         ; 0054ea23
    CMP EDX,ECX                         ; 0054ea25
    JZ 0x0054ea39                       ; 0054ea27
        ;   XREF to: 0054ea39 (CONDITIONAL_JUMP)  ; LAB_0054ea39
    MOV EBP,dword ptr [ECX]             ; 0054ea29
    MOV dword ptr [EDX],EBP             ; 0054ea2b
    MOV EBP,dword ptr [ECX + 0x4]       ; 0054ea2d
    MOV dword ptr [EDX + 0x4],EBP       ; 0054ea30
    MOV EBP,dword ptr [ECX + 0x8]       ; 0054ea33
    MOV dword ptr [EDX + 0x8],EBP       ; 0054ea36
    MOV dword ptr [EAX + 0x8],0x0       ; 0054ea39
        ;   Label: LAB_0054ea39
    ADD EDX,0x1b4                       ; 0054ea40
    MOV dword ptr [EAX + 0x20],0x0      ; 0054ea46
    INC ESI                             ; 0054ea4d
    FLD float ptr [EAX + 0x20]          ; 0054ea4e
    MOV ECX,dword ptr [EAX + 0x8]       ; 0054ea51
    MOV dword ptr [EAX + 0x4],ECX       ; 0054ea54
    FST float ptr [EAX + 0x1c]          ; 0054ea57
    MOV ECX,dword ptr [EAX + 0x4]       ; 0054ea5a
    MOV dword ptr [EAX],ECX             ; 0054ea5d
    FSTP float ptr [EAX + 0x18]         ; 0054ea5f
    MOV EBP,dword ptr [EBX + 0x930]     ; 0054ea62
    ADD EAX,0x1b4                       ; 0054ea68
    CMP ESI,EBP                         ; 0054ea6d
    JL 0x0054ea1d                       ; 0054ea6f
        ;   XREF to: 0054ea1d (CONDITIONAL_JUMP)  ; LAB_0054ea1d
    MOV dword ptr [EBX + 0x1004],0x0    ; 0054ea71
        ;   Label: LAB_0054ea71
    LEA EAX,[EBX + 0x102c]              ; 0054ea7b
    MOV dword ptr [EBX + 0x1008],0x3f800000 ; 0054ea81
    PUSH EAX                            ; 0054ea8b
    LEA EAX,[EBX + 0x1018]              ; 0054ea8c
    MOV dword ptr [EBX + 0x100c],0x0    ; 0054ea92
    PUSH EAX                            ; 0054ea9c
    MOV dword ptr [EBX + 0x1010],0x0    ; 0054ea9d
    CALL core_course.cpp_CCourse_load_FUN_0043b690 ; 0054eaa7
        ;   XREF to: 0043b690 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_load_FUN_0043b690(CCourse * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x1064],0x1    ; 0054eaac
    MOV dword ptr [EBX + 0x104c],0x0    ; 0054eab6
    MOV dword ptr [EBX + 0x1050],0x0    ; 0054eac0
    ADD ESP,0x8                         ; 0054eaca
    MOV dword ptr [EBX + 0x1054],0x0    ; 0054eacd
    ADD ESP,0x24                        ; 0054ead7
    POP EBP                             ; 0054eada
    POP EDI                             ; 0054eadb
    POP ESI                             ; 0054eadc
    POP EBX                             ; 0054eadd
    RET                                 ; 0054eade


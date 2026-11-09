; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_keyactor_cpp_FUN_004df1c0(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005dbbba
;   undefined4 DAT_005dbbbe
;   undefined4 DAT_005dbbc6
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;
; Called Functions:
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810
;   core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005306b0
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df1c0
        ;   Label: core_keyactor.cpp_FUN_004df1c0
    PUSH ESI                            ; 004df1c1
    SUB ESP,0x4                         ; 004df1c2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004df1c5
    FLD float ptr [ESP + 0x14]          ; 004df1c9
    LEA EAX,[ESI + 0x20]                ; 004df1cd
    FMUL float ptr [0x005dbbba]         ; 004df1d0 | DAT_005dbbba
    PUSH EAX                            ; 004df1d6
    LEA EBX,[ESI + 0x438]               ; 004df1d7
    FADD float ptr [ESI + 0x434]        ; 004df1dd
    PUSH EBX                            ; 004df1e3
    FSTP float ptr [ESI + 0x434]        ; 004df1e4
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810 ; 004df1ea
        ;   XREF to: 00448810 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810(CDemonGlobe * this_ptr, CVector3f * position)
    FLD float ptr [ESI + 0x434]         ; 004df1ef
    FSIN                                ; 004df1f5
    FMUL double ptr [0x005dbbbe]        ; 004df1f7 | DAT_005dbbbe
    FADD double ptr [0x005dbbc6]        ; 004df1fd | DAT_005dbbc6
    ADD ESP,0x8                         ; 004df203
    CALL crt_math.c_round_FUN_005b7ff0  ; 004df206
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP]               ; 004df20b
    MOV EAX,dword ptr [ESP]             ; 004df20e
    MOV EDX,EAX                         ; 004df211
    SAR EDX,0x1f                        ; 004df213
    MOV dword ptr [EBX + 0x3c],EAX      ; 004df216
    SHL EDX,0x8                         ; 004df219
    SBB EAX,EDX                         ; 004df21c
    SAR EAX,0x8                         ; 004df21e
    MOV EDX,EAX                         ; 004df221
    SAR EDX,0x1f                        ; 004df223
    SHL EDX,0x2                         ; 004df226
    SBB EAX,EDX                         ; 004df229
    SAR EAX,0x2                         ; 004df22b
    PUSH 0x3f800000                     ; 004df22e
    PUSH EBX                            ; 004df233
    MOV byte ptr [EBX + 0x1c],AL        ; 004df234
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860 ; 004df237
        ;   XREF to: 00448860 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 004df23c
    PUSH EBX                            ; 004df23f
    MOV EDX,dword ptr [0x0061b5a8]      ; 004df240 | g_CDemonSetPtr
    PUSH EDX                            ; 004df246
    MOV dword ptr [EBX + 0x20],0x0      ; 004df247
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005306b0 ; 004df24e
        ;   XREF to: 005306b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005306b0(CDemonSet * this_ptr, CDemonGlobe * globe)
    ADD ESP,0x8                         ; 004df253
    ADD ESP,0x4                         ; 004df256
    POP ESI                             ; 004df259
    POP EBX                             ; 004df25a
    RET                                 ; 004df25b


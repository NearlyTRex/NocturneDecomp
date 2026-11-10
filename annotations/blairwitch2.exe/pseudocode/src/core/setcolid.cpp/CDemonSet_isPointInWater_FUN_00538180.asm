; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setcolid_cpp_CDemonSet_isPointInWater_FUN_00538180(CDemonSet *this_ptr,CVector3f *point)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   point
; Local Variables:
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x2c]:1  local_2c
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_actor.cpp_CDemonActor_handleFootstep_FUN_0040cb60 at 0040cbcf
;   core_charactr.cpp_CCharacter_processSmoking_FUN_0042a7a0 at 0042a9ca
;
; Referenced Globals:
;   undefined4 DAT_005e5f59
;   CWater* g_CWaterPtr = 02653790
;   undefined4 g_CWaterInstance.water_level_y
;   undefined4 g_CWaterActorClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408de0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538180
        ;   Label: core_setcolid.cpp_CDemonSet_isPointInWater_FUN_00538180
    PUSH ESI                            ; 00538181
    PUSH EDI                            ; 00538182
    PUSH EBP                            ; 00538183
    SUB ESP,0x4c                        ; 00538184
    MOV EAX,[0x0061e520]                ; 00538187 | g_CWaterPtr
    TEST dword ptr [EAX + 0x4],0x7fffffff ; 0053818c | g_CWaterInstance.water_level_y
    JZ 0x005381a4                       ; 00538193
        ;   XREF to: 005381a4 (CONDITIONAL_JUMP)  ; LAB_005381a4
    MOV EBX,dword ptr [ESP + 0x64]      ; 00538195
    FLD float ptr [EBX + 0x4]           ; 00538199
    FCOMP float ptr [EAX + 0x4]         ; 0053819c | g_CWaterInstance.water_level_y
    FNSTSW AX                           ; 0053819f
    SAHF                                ; 005381a1
    JC 0x005381fb                       ; 005381a2
        ;   XREF to: 005381fb (CONDITIONAL_JUMP)  ; LAB_005381fb
    MOV EAX,dword ptr [ESP + 0x60]      ; 005381a4
        ;   Label: LAB_005381a4
    XOR ECX,ECX                         ; 005381a8
    MOV EBX,dword ptr [EAX + 0x14d164]  ; 005381aa
    MOV dword ptr [ESP + 0x48],ECX      ; 005381b0
    TEST EBX,EBX                        ; 005381b4
    JLE 0x005381ef                      ; 005381b6
        ;   XREF to: 005381ef (CONDITIONAL_JUMP)  ; LAB_005381ef
    MOV EBP,EAX                         ; 005381b8
    MOV EAX,[0x0265fb60]                ; 005381ba | g_CWaterActorClassInfo.name_hash
        ;   Label: LAB_005381ba
    PUSH EAX                            ; 005381bf
    MOV EDX,dword ptr [EBP + 0x14d168]  ; 005381c0
    PUSH EDX                            ; 005381c6
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 005381c7
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV EBX,EAX                         ; 005381cc
    ADD ESP,0x8                         ; 005381ce
    TEST EAX,EAX                        ; 005381d1
    JNZ 0x00538202                      ; 005381d3
        ;   XREF to: 00538202 (CONDITIONAL_JUMP)  ; LAB_00538202
    MOV ESI,dword ptr [ESP + 0x48]      ; 005381d5
        ;   Label: LAB_005381d5
    MOV EBX,dword ptr [ESP + 0x60]      ; 005381d9
    ADD EBP,0x4                         ; 005381dd
    INC ESI                             ; 005381e0
    MOV EDI,dword ptr [EBX + 0x14d164]  ; 005381e1
    MOV dword ptr [ESP + 0x48],ESI      ; 005381e7
    CMP ESI,EDI                         ; 005381eb
    JL 0x005381ba                       ; 005381ed
        ;   XREF to: 005381ba (CONDITIONAL_JUMP)  ; LAB_005381ba
    XOR ESI,ESI                         ; 005381ef
        ;   Label: LAB_005381ef
    MOV EAX,ESI                         ; 005381f1
        ;   Label: LAB_005381f1
    ADD ESP,0x4c                        ; 005381f3
    POP EBP                             ; 005381f6
    POP EDI                             ; 005381f7
    POP ESI                             ; 005381f8
    POP EBX                             ; 005381f9
    RET                                 ; 005381fa
    MOV ESI,0x1                         ; 005381fb
        ;   Label: LAB_005381fb
    JMP 0x005381f1                      ; 00538200
        ;   XREF to: 005381f1 (UNCONDITIONAL_JUMP)  ; LAB_005381f1
    MOV ECX,dword ptr [ESP + 0x64]      ; 00538202
        ;   Label: LAB_00538202
    PUSH ECX                            ; 00538206
    PUSH EAX                            ; 00538207
    LEA ESI,[ESP + 0x44]                ; 00538208
    LEA EDI,[ESP + 0x38]                ; 0053820c
    CALL core_actor.cpp_FUN_00408de0    ; 00538210
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x44]                ; 00538215
    ADD ESP,0x8                         ; 00538219
    MOVSD ES:EDI,ESI                    ; 0053821c
    MOVSD ES:EDI,ESI                    ; 0053821d
    MOVSD ES:EDI,ESI                    ; 0053821e
    PUSH EBX                            ; 0053821f
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00538220
    LEA ESI,[ESP + 0x4]                 ; 00538226
    LEA EDI,[ESP + 0x1c]                ; 0053822a
    CALL dword ptr [EAX + 0x24]         ; 0053822e
    MOV ECX,0x6                         ; 00538231
    LEA ESI,[ESP + 0x4]                 ; 00538236
    ADD ESP,0x4                         ; 0053823a
    MOVSD.REP ES:EDI,ESI                ; 0053823d
    FLD float ptr [ESP + 0x1c]          ; 0053823f
    FADD float ptr [0x005e5f59]         ; 00538243 | DAT_005e5f59
    FLD float ptr [ESP + 0x18]          ; 00538249
    FXCH                                ; 0053824d
    FSTP float ptr [ESP + 0x1c]         ; 0053824f
    FCOMP float ptr [ESP + 0x30]        ; 00538253
    FNSTSW AX                           ; 00538257
    SAHF                                ; 00538259
    JA 0x005381d5                       ; 0053825a
        ;   XREF to: 005381d5 (CONDITIONAL_JUMP)  ; LAB_005381d5
    FLD float ptr [ESP + 0x1c]          ; 00538260
    FCOMP float ptr [ESP + 0x34]        ; 00538264
    FNSTSW AX                           ; 00538268
    SAHF                                ; 0053826a
    JA 0x005381d5                       ; 0053826b
        ;   XREF to: 005381d5 (CONDITIONAL_JUMP)  ; LAB_005381d5
    FLD float ptr [ESP + 0x20]          ; 00538271
    FCOMP float ptr [ESP + 0x38]        ; 00538275
    FNSTSW AX                           ; 00538279
    SAHF                                ; 0053827b
    JA 0x005381d5                       ; 0053827c
        ;   XREF to: 005381d5 (CONDITIONAL_JUMP)  ; LAB_005381d5
    FLD float ptr [ESP + 0x24]          ; 00538282
    FCOMP float ptr [ESP + 0x30]        ; 00538286
    FNSTSW AX                           ; 0053828a
    SAHF                                ; 0053828c
    JC 0x005381d5                       ; 0053828d
        ;   XREF to: 005381d5 (CONDITIONAL_JUMP)  ; LAB_005381d5
    FLD float ptr [ESP + 0x28]          ; 00538293
    FCOMP float ptr [ESP + 0x34]        ; 00538297
    FNSTSW AX                           ; 0053829b
    SAHF                                ; 0053829d
    JC 0x005381d5                       ; 0053829e
        ;   XREF to: 005381d5 (CONDITIONAL_JUMP)  ; LAB_005381d5
    FLD float ptr [ESP + 0x2c]          ; 005382a4
    FCOMP float ptr [ESP + 0x38]        ; 005382a8
    FNSTSW AX                           ; 005382ac
    SAHF                                ; 005382ae
    JC 0x005381d5                       ; 005382af
        ;   XREF to: 005381d5 (CONDITIONAL_JUMP)  ; LAB_005381d5
    MOV ESI,0x1                         ; 005382b5
    MOV EAX,ESI                         ; 005382ba
    ADD ESP,0x4c                        ; 005382bc
    POP EBP                             ; 005382bf
    POP EDI                             ; 005382c0
    POP ESI                             ; 005382c1
    POP EBX                             ; 005382c2
    RET                                 ; 005382c3


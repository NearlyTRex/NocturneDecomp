; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CToss_process_FUN_004874d0(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined        Stack[-0x18]:1  local_18
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_0048a390 at 0048a537
;
; Referenced Globals:
;   undefined4 DAT_005b80f0
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c77850
;   undefined4 DAT_02dd1184
;   undefined4 DAT_02dd1188
;   undefined4 DAT_02dd118c
;
; Called Functions:
;   core_box.cpp_CBox_process_FUN_0041acb0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90
;   FUN_0048c0d0
;   sound_sndmain.cpp_killSfx_FUN_00527230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004874d0
        ;   Label: core_fire.cpp_CToss_process_FUN_004874d0
    PUSH ESI                            ; 004874d1
    SUB ESP,0x28                        ; 004874d2
    MOV EBX,dword ptr [ESP + 0x34]      ; 004874d5
    FLD float ptr [EBX + 0x3dc]         ; 004874d9
    FLDZ                                ; 004874df
    FCOMPP                              ; 004874e1
    FNSTSW AX                           ; 004874e3
    SAHF                                ; 004874e5
    JNC 0x00487520                      ; 004874e6
        ;   XREF to: 00487520 (CONDITIONAL_JUMP)  ; LAB_00487520
    MOV EAX,[0x005b9354]                ; 004874e8 | DAT_005b9354
    MOV EAX,dword ptr [EAX + 0x264]     ; 004874ed | DAT_01c77850
    MOV dword ptr [ESP + 0x24],EAX      ; 004874f3
    FLD float ptr [EBX + 0x3dc]         ; 004874f7
    FSUB float ptr [ESP + 0x24]         ; 004874fd
    LEA ESI,[EBX + 0x180]               ; 00487501
    FST float ptr [EBX + 0x3dc]         ; 00487507
    FLDZ                                ; 0048750d
    FCOMPP                              ; 0048750f
    FNSTSW AX                           ; 00487511
    SAHF                                ; 00487513
    JC 0x0048760f                       ; 00487514
        ;   XREF to: 0048760f (CONDITIONAL_JUMP)  ; LAB_0048760f
    MOV EAX,dword ptr [EBX]             ; 0048751a
    TEST EAX,EAX                        ; 0048751c
    JZ 0x00487526                       ; 0048751e
        ;   XREF to: 00487526 (CONDITIONAL_JUMP)  ; LAB_00487526
    ADD ESP,0x28                        ; 00487520
        ;   Label: LAB_00487520
    POP ESI                             ; 00487523
    POP EBX                             ; 00487524
    RET                                 ; 00487525
    PUSH 0x40800000                     ; 00487526
        ;   Label: LAB_00487526
    PUSH 0x42c80000                     ; 0048752b
    PUSH 0x41800000                     ; 00487530
    PUSH ESI                            ; 00487535
    MOV ECX,dword ptr [0x005b80f0]      ; 00487536 | DAT_005b80f0
    PUSH ECX                            ; 0048753c
    CALL FUN_0048c0d0                   ; 0048753d
        ;   XREF to: 0048c0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048c0d0()
    ADD ESP,0x14                        ; 00487542
    MOV ESI,dword ptr [EBX + 0x3e0]     ; 00487545
    PUSH ESI                            ; 0048754b
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 0048754c
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 00487551
    ADD ESP,0x28                        ; 00487554
    POP ESI                             ; 00487557
    POP EBX                             ; 00487558
    RET                                 ; 00487559
    MOV EAX,[0x02dd1184]                ; 0048755a | DAT_02dd1184
        ;   Label: LAB_0048755a
    MOV dword ptr [ESP],EAX             ; 0048755f
    MOV EAX,[0x02dd1188]                ; 00487562 | DAT_02dd1188
    MOV dword ptr [ESP + 0x4],EAX       ; 00487567
    MOV EAX,[0x02dd118c]                ; 0048756b | DAT_02dd118c
    MOV dword ptr [ESP + 0x8],EAX       ; 00487570
    LEA EAX,[EBX + 0x4]                 ; 00487574
    PUSH EAX                            ; 00487577
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 00487578
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    ADD ESP,0x4                         ; 0048757d
    FLD float ptr [ESP + 0x8]           ; 00487580
    FADD float ptr [EAX + 0x34c]        ; 00487584
    MOV EAX,ESP                         ; 0048758a
    PUSH EAX                            ; 0048758c
    LEA EAX,[ESP + 0x1c]                ; 0048758d
    PUSH EAX                            ; 00487591
    ADD EBX,0x198                       ; 00487592
    PUSH EBX                            ; 00487598
    FSTP float ptr [ESP + 0x14]         ; 00487599
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 0048759d
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    FLD float ptr [ESI]                 ; 004875a2
    FADD float ptr [EAX]                ; 004875a4
    ADD ESP,0xc                         ; 004875a6
    FSTP float ptr [ESP + 0xc]          ; 004875a9
    FLD float ptr [ESI + 0x4]           ; 004875ad
    FADD float ptr [EAX + 0x4]          ; 004875b0
    MOV EBX,ESP                         ; 004875b3
    FSTP float ptr [ESP + 0x10]         ; 004875b5
    FLD float ptr [ESI + 0x8]           ; 004875b9
    FADD float ptr [EAX + 0x8]          ; 004875bc
    LEA EAX,[ESP + 0xc]                 ; 004875bf
    FSTP float ptr [ESP + 0x14]         ; 004875c3
    CMP EBX,EAX                         ; 004875c7
    JZ 0x004875e2                       ; 004875c9
        ;   XREF to: 004875e2 (CONDITIONAL_JUMP)  ; LAB_004875e2
    MOV EAX,dword ptr [ESP + 0xc]       ; 004875cb
    MOV dword ptr [ESP],EAX             ; 004875cf
    MOV EAX,dword ptr [ESP + 0x10]      ; 004875d2
    MOV dword ptr [ESP + 0x4],EAX       ; 004875d6
    MOV EAX,dword ptr [ESP + 0x14]      ; 004875da
    MOV dword ptr [ESP + 0x8],EAX       ; 004875de
    PUSH 0xffff                         ; 004875e2
        ;   Label: LAB_004875e2
    PUSH 0x0                            ; 004875e7
    PUSH 0x10000                        ; 004875e9
    PUSH 0x20000                        ; 004875ee
    PUSH 0x0                            ; 004875f3
    LEA EAX,[ESP + 0x14]                ; 004875f5
    PUSH EAX                            ; 004875f9
    MOV EDX,dword ptr [0x005b80f0]      ; 004875fa | DAT_005b80f0
    PUSH EDX                            ; 00487600
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90 ; 00487601
        ;   XREF to: 0048ae90 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90()
    ADD ESP,0x1c                        ; 00487606
    ADD ESP,0x28                        ; 00487609
    POP ESI                             ; 0048760c
    POP EBX                             ; 0048760d
    RET                                 ; 0048760e
    PUSH dword ptr [ESP + 0x24]         ; 0048760f
        ;   Label: LAB_0048760f
    PUSH ESI                            ; 00487613
    CALL core_box.cpp_CBox_process_FUN_0041acb0 ; 00487614
        ;   XREF to: 0041acb0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBox_process_FUN_0041acb0()
    MOV EAX,dword ptr [EBX]             ; 00487619
    ADD ESP,0x8                         ; 0048761b
    TEST EAX,EAX                        ; 0048761e
    JZ 0x0048755a                       ; 00487620
        ;   XREF to: 0048755a (CONDITIONAL_JUMP)  ; LAB_0048755a
    ADD ESP,0x28                        ; 00487626
    POP ESI                             ; 00487629
    POP EBX                             ; 0048762a
    RET                                 ; 0048762b


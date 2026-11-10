; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CLightActor_process_FUN_00420420(CLightActor *this_ptr,float delta_time)
;
; Parameters:
; CLightActor *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_boxactor.cpp_CBoxActor_process_FUN_0041f360
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_0045db40
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0045fab0
;   core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0
;   core_set.cpp_CDemonSet_addDynamicLight_FUN_00537270
;   core_xform.cpp_FUN_00583940
;   core_xform.cpp_matrixToEulerAngles_FUN_00583b10
;   core_xform.cpp_multiplyMatrix3x4_FUN_005833e0
;   crt_math.c_round_FUN_005a3120
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00420420
        ;   Label: core_boxactor.cpp_CLightActor_process_FUN_00420420
    PUSH ESI                            ; 00420421
    PUSH EDI                            ; 00420422
    PUSH EBP                            ; 00420423
    SUB ESP,0x108                       ; 00420424
    MOV EBX,dword ptr [ESP + 0x11c]     ; 0042042a
    PUSH dword ptr [ESP + 0x120]        ; 00420431
    PUSH EBX                            ; 00420438
    CALL core_boxactor.cpp_CBoxActor_process_FUN_0041f360 ; 00420439
        ;   XREF to: 0041f360 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_process_FUN_0041f360(CBoxActor * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBX + 0x6e8]     ; 0042043e
    ADD ESP,0x8                         ; 00420444
    CMP EDX,0x2                         ; 00420447
    JZ 0x00420471                       ; 0042044a
        ;   XREF to: 00420471 (CONDITIONAL_JUMP)  ; LAB_00420471
    CMP dword ptr [EBX + 0x6e8],0x3     ; 0042044c
        ;   Label: LAB_0042044c
    JZ 0x004204eb                       ; 00420453
        ;   XREF to: 004204eb (CONDITIONAL_JUMP)  ; LAB_004204eb
    CMP dword ptr [EBX + 0x23a0],0x0    ; 00420459
    JNZ 0x0042055b                      ; 00420460
        ;   XREF to: 0042055b (CONDITIONAL_JUMP)  ; LAB_0042055b
    ADD ESP,0x108                       ; 00420466
        ;   Label: LAB_00420466
    POP EBP                             ; 0042046c
    POP EDI                             ; 0042046d
    POP ESI                             ; 0042046e
    POP EBX                             ; 0042046f
    RET                                 ; 00420470
    FLD float ptr [EBX + 0x36b0]        ; 00420471
        ;   Label: LAB_00420471
    FSUB float ptr [ESP + 0x120]        ; 00420477
    FST float ptr [EBX + 0x36b0]        ; 0042047e
    FLDZ                                ; 00420484
    FCOMPP                              ; 00420486
    FNSTSW AX                           ; 00420488
    SAHF                                ; 0042048a
    JC 0x0042044c                       ; 0042048b
        ;   XREF to: 0042044c (CONDITIONAL_JUMP)  ; LAB_0042044c
    PUSH 0x0                            ; 0042048d
    PUSH 0x0                            ; 0042048f
    PUSH 0x0                            ; 00420491
    PUSH 0x7                            ; 00420493
    PUSH 0x0                            ; 00420495
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00420497
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    MOV EDX,EAX                         ; 0042049c
    SHL EAX,0x2                         ; 0042049e
    ADD EAX,EDX                         ; 004204a1
    SHL EAX,0x2                         ; 004204a3
    SUB EAX,EDX                         ; 004204a6
    SHL EAX,0x2                         ; 004204a8
    ADD ESP,0x8                         ; 004204ab
    ADD EAX,0x7e17b8                    ; 004204ae
    PUSH EAX                            ; 004204b3
    LEA EAX,[EBX + 0x6ec]               ; 004204b4
    PUSH EAX                            ; 004204ba
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_0045db40 ; 004204bb
        ;   XREF to: 0045db40 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_0045db40(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 004204c0
    PUSH 0x3e19999a                     ; 004204c3
    PUSH 0x0                            ; 004204c8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004204ca
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x10c],EAX     ; 004204cf
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004204d6
    MOV dword ptr [EBX + 0x36b0],EAX    ; 004204dd
    ADD ESP,0x8                         ; 004204e3
    JMP 0x0042044c                      ; 004204e6
        ;   XREF to: 0042044c (UNCONDITIONAL_JUMP)  ; LAB_0042044c
    LEA EAX,[EBX + 0x20]                ; 004204eb
        ;   Label: LAB_004204eb
    PUSH EAX                            ; 004204ee
    ADD EBX,0x36b4                      ; 004204ef
    PUSH EBX                            ; 004204f5
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0 ; 004204f6
        ;   XREF to: 0045aae0 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 004204fb
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 004204fe
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
    MOV EDX,EAX                         ; 00420503
    AND EDX,0x7fff                      ; 00420505
    MOV EAX,EDX                         ; 0042050b
    MOV dword ptr [EBX + 0x3c],EDX      ; 0042050d
    SAR EDX,0x1f                        ; 00420510
    SHL EDX,0x8                         ; 00420513
    SBB EAX,EDX                         ; 00420516
    SAR EAX,0x8                         ; 00420518
    MOV EDX,EAX                         ; 0042051b
    SAR EDX,0x1f                        ; 0042051d
    SHL EDX,0x2                         ; 00420520
    SBB EAX,EDX                         ; 00420523
    SAR EAX,0x2                         ; 00420525
    PUSH 0x40000000                     ; 00420528
    PUSH EBX                            ; 0042052d
    MOV byte ptr [EBX + 0x1c],AL        ; 0042052e
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30 ; 00420531
        ;   XREF to: 0045ab30 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 00420536
    PUSH EBX                            ; 00420539
    MOV EDX,dword ptr [0x00603b28]      ; 0042053a | g_CDemonSetPtr
    PUSH EDX                            ; 00420540
    MOV dword ptr [EBX + 0x20],0x0      ; 00420541
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0 ; 00420548
        ;   XREF to: 005372f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(CDemonSet * this_ptr, CDemonGlobe * globe)
    ADD ESP,0x8                         ; 0042054d
    ADD ESP,0x108                       ; 00420550
    POP EBP                             ; 00420556
    POP EDI                             ; 00420557
    POP ESI                             ; 00420558
    POP EBX                             ; 00420559
    RET                                 ; 0042055a
    LEA EAX,[EBX + 0x3698]              ; 0042055b
        ;   Label: LAB_0042055b
    PUSH EAX                            ; 00420561
    PUSH EBX                            ; 00420562
    LEA ESI,[ESP + 0xe0]                ; 00420563
    LEA EDI,[ESP + 0xc8]                ; 0042056a
    CALL core_actor.cpp_FUN_00408b80    ; 00420571
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0xe0]                ; 00420576
    LEA EAX,[ESP + 0xc8]                ; 0042057d
    ADD ESP,0x8                         ; 00420584
    LEA EDX,[EBX + 0x6f0]               ; 00420587
    MOVSD ES:EDI,ESI                    ; 0042058d
    MOVSD ES:EDI,ESI                    ; 0042058e
    MOVSD ES:EDI,ESI                    ; 0042058f
    CMP EDX,EAX                         ; 00420590
    JZ 0x004205b1                       ; 00420592
        ;   XREF to: 004205b1 (CONDITIONAL_JUMP)  ; LAB_004205b1
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00420594
    MOV dword ptr [EDX],EAX             ; 0042059b
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0042059d
    MOV dword ptr [EDX + 0x4],EAX       ; 004205a4
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004205a7
    MOV dword ptr [EDX + 0x8],EAX       ; 004205ae
    LEA EAX,[EBX + 0x36a4]              ; 004205b1
        ;   Label: LAB_004205b1
    PUSH EAX                            ; 004205b7
    PUSH 0x2cfd900                      ; 004205b8
    LEA EAX,[ESP + 0x8]                 ; 004205bd
    PUSH EAX                            ; 004205c1
    CALL core_xform.cpp_FUN_00583940    ; 004205c2
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    ADD ESP,0xc                         ; 004205c7
    LEA EAX,[EBX + 0x30]                ; 004205ca
    PUSH EAX                            ; 004205cd
    PUSH 0x2cfd900                      ; 004205ce
    LEA EAX,[ESP + 0x38]                ; 004205d3
    PUSH EAX                            ; 004205d7
    CALL core_xform.cpp_FUN_00583940    ; 004205d8
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    ADD ESP,0xc                         ; 004205dd
    LEA EAX,[ESP + 0x30]                ; 004205e0
    PUSH EAX                            ; 004205e4
    LEA EAX,[ESP + 0x4]                 ; 004205e5
    PUSH EAX                            ; 004205e9
    LEA ESI,[ESP + 0x98]                ; 004205ea
    LEA EDI,[ESP + 0x68]                ; 004205f1
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 004205f5
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005833e0()
    MOV ECX,0xc                         ; 004205fa
    LEA ESI,[ESP + 0x98]                ; 004205ff
    ADD ESP,0x8                         ; 00420606
    LEA EAX,[ESP + 0x60]                ; 00420609
    MOVSD.REP ES:EDI,ESI                ; 0042060d
    PUSH EAX                            ; 0042060f
    LEA ESI,[ESP + 0xe8]                ; 00420610
    LEA EDI,[ESP + 0xd0]                ; 00420617
    CALL core_xform.cpp_matrixToEulerAngles_FUN_00583b10 ; 0042061e
        ;   XREF to: 00583b10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_00583b10()
    LEA ESI,[ESP + 0xe8]                ; 00420623
    ADD ESP,0x4                         ; 0042062a
    MOVSD ES:EDI,ESI                    ; 0042062d
    MOVSD ES:EDI,ESI                    ; 0042062e
    MOVSD ES:EDI,ESI                    ; 0042062f
    LEA EAX,[ESP + 0xcc]                ; 00420630
    LEA ESI,[EBX + 0x6ec]               ; 00420637
    PUSH EAX                            ; 0042063d
    LEA EAX,[EBX + 0x6fc]               ; 0042063e
    PUSH EAX                            ; 00420644
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 00420645
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV EDI,dword ptr [EBX + 0x6e8]     ; 0042064a
    ADD ESP,0x8                         ; 00420650
    CMP EDI,0x2                         ; 00420653
    JNZ 0x00420466                      ; 00420656
        ;   XREF to: 00420466 (CONDITIONAL_JUMP)  ; LAB_00420466
    PUSH 0x0                            ; 0042065c
    PUSH ESI                            ; 0042065e
    MOV dword ptr [EBX + 0x82c],0x0     ; 0042065f
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0045fab0 ; 00420669
        ;   XREF to: 0045fab0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0045fab0(CDemonLight * this_ptr, float intensity)
    ADD ESP,0x8                         ; 0042066e
    PUSH ESI                            ; 00420671
    MOV EBP,dword ptr [0x00603b28]      ; 00420672 | g_CDemonSetPtr
    PUSH EBP                            ; 00420678
    CALL core_set.cpp_CDemonSet_addDynamicLight_FUN_00537270 ; 00420679
        ;   XREF to: 00537270 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addDynamicLight_FUN_00537270(CDemonSet * this_ptr, CDemonLight * light)
    ADD ESP,0x8                         ; 0042067e
    PUSH 0x3e800000                     ; 00420681
    PUSH 0xbe800000                     ; 00420686
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0042068b
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xf8],EAX      ; 00420690
    ADD ESP,0x8                         ; 00420697
    PUSH 0x3e800000                     ; 0042069a
    PUSH 0xbe800000                     ; 0042069f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004206a4
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xfc],EAX      ; 004206a9
    ADD ESP,0x8                         ; 004206b0
    PUSH 0x3e800000                     ; 004206b3
    PUSH 0xbe800000                     ; 004206b8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004206bd
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x10c],EAX     ; 004206c2
    FLD float ptr [ESP + 0x10c]         ; 004206c9
    ADD ESP,0x8                         ; 004206d0
    ADD EBX,0x36b4                      ; 004206d3
    FLD float ptr [ESP + 0xc0]          ; 004206d9
    FLD float ptr [ESP + 0xc4]          ; 004206e0
    FLD float ptr [ESP + 0xc8]          ; 004206e7
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004206ee
    FXCH ST2                            ; 004206f5
    FADDP ST3,ST0                       ; 004206f7
    MOV dword ptr [ESP + 0xfc],EAX      ; 004206f9
    FXCH ST2                            ; 00420700
    FSTP float ptr [ESP + 0xc0]         ; 00420702
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00420709
    FXCH                                ; 00420710
    FADD float ptr [ESP + 0xfc]         ; 00420712
    MOV dword ptr [ESP + 0x100],EAX     ; 00420719
    LEA EAX,[ESP + 0xc0]                ; 00420720
    FSTP float ptr [ESP + 0xc4]         ; 00420727
    PUSH EAX                            ; 0042072e
    FADD float ptr [ESP + 0x104]        ; 0042072f
    PUSH EBX                            ; 00420736
    FSTP float ptr [ESP + 0xd0]         ; 00420737
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0 ; 0042073e
        ;   XREF to: 0045aae0 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 00420743
    PUSH 0x477de800                     ; 00420746
    PUSH 0x476a6000                     ; 0042074b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00420750
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x10c],EAX     ; 00420755
    FLD float ptr [ESP + 0x10c]         ; 0042075c
    ADD ESP,0x8                         ; 00420763
    CALL crt_math.c_round_FUN_005a3120  ; 00420766
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x104]       ; 0042076b
    MOV EAX,dword ptr [ESP + 0x104]     ; 00420772
    MOV EDX,EAX                         ; 00420779
    SAR EDX,0x1f                        ; 0042077b
    MOV dword ptr [EBX + 0x3c],EAX      ; 0042077e
    SHL EDX,0x8                         ; 00420781
    SBB EAX,EDX                         ; 00420784
    SAR EAX,0x8                         ; 00420786
    MOV EDX,EAX                         ; 00420789
    SAR EDX,0x1f                        ; 0042078b
    SHL EDX,0x2                         ; 0042078e
    SBB EAX,EDX                         ; 00420791
    SAR EAX,0x2                         ; 00420793
    PUSH 0x41740000                     ; 00420796
    PUSH 0x416c0000                     ; 0042079b
    MOV byte ptr [EBX + 0x1c],AL        ; 004207a0
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004207a3
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x10c],EAX     ; 004207a8
    FLD float ptr [ESP + 0x10c]         ; 004207af
    ADD ESP,0x8                         ; 004207b6
    SUB ESP,0x4                         ; 004207b9
    FSTP float ptr [ESP]                ; 004207bc
    PUSH EBX                            ; 004207bf
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30 ; 004207c0
        ;   XREF to: 0045ab30 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 004207c5
    PUSH EBX                            ; 004207c8
    MOV EAX,[0x00603b28]                ; 004207c9 | g_CDemonSetPtr
    PUSH EAX                            ; 004207ce
    MOV dword ptr [EBX + 0x20],0x1      ; 004207cf
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0 ; 004207d6
        ;   XREF to: 005372f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(CDemonSet * this_ptr, CDemonGlobe * globe)
    ADD ESP,0x8                         ; 004207db
    ADD ESP,0x108                       ; 004207de
    POP EBP                             ; 004207e4
    POP EDI                             ; 004207e5
    POP ESI                             ; 004207e6
    POP EBX                             ; 004207e7
    RET                                 ; 004207e8


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_doc_cpp_FUN_00459555(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005d0417
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CCrateClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;   core_setcolid.cpp_FUN_00534ea0
;   core_setcolid.cpp_FUN_00537030
;
; *****************************************************************************

section .text

    CMP EAX,0x68a5a5a5                  ; 00459555
        ;   Label: core_doc.cpp_FUN_00459555
    ADD byte ptr [EAX],AL               ; 0045955a
    CMP byte ptr [EDI],0xff             ; 0045955c
    MOV AH,0x24                         ; 0045955f
    OR AL,0x1                           ; 00459561
    ADD byte ptr [EAX],AL               ; 00459563
    PUSH dword ptr [ESP + 0x108]        ; 00459565
    PUSH dword ptr [ESP + 0x78]         ; 0045956c
    MOV ESI,dword ptr [0x0061b5a8]      ; 00459570 | g_CDemonSetPtr
    PUSH dword ptr [ESP + 0x74]         ; 00459576
    PUSH ESI                            ; 0045957a
    CALL core_setcolid.cpp_FUN_00537030 ; 0045957b
        ;   XREF to: 00537030 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00537030()
    MOV dword ptr [ESP + 0x1a4],EAX     ; 00459580
    FLD float ptr [ESP + 0x1a4]         ; 00459587
    FLD1                                ; 0045958e
    ADD ESP,0x20                        ; 00459590
    FCOMPP                              ; 00459593
    FNSTSW AX                           ; 00459595
    SAHF                                ; 00459597
    JA 0x004596a2                       ; 00459598
        ;   XREF to: 004596a2 (CONDITIONAL_JUMP)  ; LAB_004596a2
    FLD float ptr [ESP + 0x5c]          ; 0045959e
    FLD float ptr [ESP + 0x60]          ; 004595a2
    FLD float ptr [ESP + 0x64]          ; 004595a6
    PUSH 0x3f000000                     ; 004595aa
    LEA EDI,[ESP + 0xf0]                ; 004595af
    LEA ESI,[ESP + 0xb4]                ; 004595b6
    LEA EAX,[ESP + 0xf0]                ; 004595bd
    FXCH ST2                            ; 004595c4
    FADD float ptr [ESP + 0xfc]         ; 004595c6
    FXCH                                ; 004595cd
    FADD float ptr [ESP + 0x100]        ; 004595cf
    FXCH ST2                            ; 004595d6
    FADD float ptr [ESP + 0x104]        ; 004595d8
    FXCH                                ; 004595df
    FSTP float ptr [ESP + 0xb4]         ; 004595e1
    FXCH                                ; 004595e8
    FSTP float ptr [ESP + 0xb8]         ; 004595ea
    FSTP float ptr [ESP + 0xbc]         ; 004595f1
    MOVSD ES:EDI,ESI                    ; 004595f8
    MOVSD ES:EDI,ESI                    ; 004595f9
    MOVSD ES:EDI,ESI                    ; 004595fa
    PUSH EAX                            ; 004595fb
    MOV EDI,dword ptr [0x0061b5a8]      ; 004595fc | g_CDemonSetPtr
    PUSH EDI                            ; 00459602
    CALL core_setcolid.cpp_FUN_00534ea0 ; 00459603
        ;   XREF to: 00534ea0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00534ea0()
    MOV dword ptr [ESP + 0x190],EAX     ; 00459608
    FLD float ptr [ESP + 0x190]         ; 0045960f
    ADD ESP,0xc                         ; 00459616
    MOV EAX,[0x0061b5a8]                ; 00459619 | g_CDemonSetPtr
    PUSH EAX                            ; 0045961e
    FSTP float ptr [ESP + 0x154]        ; 0045961f
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 00459626
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0045962b
    FLD float ptr [ESP + 0x150]         ; 0045962e
    FSUB float ptr [EBX + 0x24]         ; 00459635
    FABS                                ; 00459638
    FLD1                                ; 0045963a
    FCOMPP                              ; 0045963c
    FNSTSW AX                           ; 0045963e
    SAHF                                ; 00459640
    JC 0x00459767                       ; 00459641
        ;   XREF to: 00459767 (CONDITIONAL_JUMP)  ; LAB_00459767
    XOR EDX,EDX                         ; 00459647
    MOV dword ptr [ESP + 0x16c],EDX     ; 00459649
    MOV dword ptr [ESP + 0x178],EDX     ; 00459650
    MOV EAX,[0x0061b5a8]                ; 00459657 | g_CDemonSetPtr
        ;   Label: LAB_00459657
    MOV ESI,dword ptr [ESP + 0x16c]     ; 0045965c
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 00459663
    JL 0x004596db                       ; 00459669
        ;   XREF to: 004596db (CONDITIONAL_JUMP)  ; LAB_004596db
    MOV EAX,dword ptr [EBX + 0x2698]    ; 0045966b
    MOV dword ptr [EBX + 0x256a4],0x6   ; 00459671
    TEST EAX,EAX                        ; 0045967b
    JNZ 0x00459770                      ; 0045967d
        ;   XREF to: 00459770 (CONDITIONAL_JUMP)  ; LAB_00459770
    PUSH 0x1                            ; 00459683
        ;   Label: LAB_00459683
    PUSH 0x14                           ; 00459685
    ADD EBX,0x2b4                       ; 00459687
        ;   Label: LAB_00459687
    PUSH EBX                            ; 0045968d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0045968e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00459693
    MOV EAX,0x1                         ; 00459696
    MOV ESP,EBP                         ; 0045969b
    POP EBP                             ; 0045969d
    POP EDI                             ; 0045969e
    POP ESI                             ; 0045969f
    POP EBX                             ; 004596a0
    RET                                 ; 004596a1
    MOV EBX,dword ptr [0x0061b5a8]      ; 004596a2 | g_CDemonSetPtr
        ;   Label: LAB_004596a2
    PUSH EBX                            ; 004596a8
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 004596a9
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004596ae
    JMP 0x00459767                      ; 004596b1
        ;   XREF to: 00459767 (UNCONDITIONAL_JUMP)  ; LAB_00459767
    MOV EAX,dword ptr [ESP + 0x16c]     ; 004596b6
        ;   Label: LAB_004596b6
    MOV EDI,dword ptr [ESP + 0x178]     ; 004596bd
    INC EAX                             ; 004596c4
    ADD EDI,0x4                         ; 004596c5
    MOV dword ptr [ESP + 0x16c],EAX     ; 004596c8
    MOV dword ptr [ESP + 0x178],EDI     ; 004596cf
    JMP 0x00459657                      ; 004596d6
        ;   XREF to: 00459657 (UNCONDITIONAL_JUMP)  ; LAB_00459657
    MOV ECX,dword ptr [ESP + 0x178]     ; 004596db
        ;   Label: LAB_004596db
    MOV EDX,dword ptr [0x007c2670]      ; 004596e2 | g_CCrateClassInfo.name_hash
    ADD EAX,ECX                         ; 004596e8
    PUSH EDX                            ; 004596ea
    MOV ESI,dword ptr [EAX + 0x14d168]  ; 004596eb
    PUSH ESI                            ; 004596f1
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004596f2
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004596f7
    TEST EAX,EAX                        ; 004596fa
    JZ 0x004596b6                       ; 004596fc
        ;   XREF to: 004596b6 (CONDITIONAL_JUMP)  ; LAB_004596b6
    FLD float ptr [EAX + 0x20]          ; 004596fe
    FLD float ptr [EAX + 0x24]          ; 00459701
    FLD float ptr [EAX + 0x28]          ; 00459704
    LEA EDI,[ESP + 0x74]                ; 00459707
    LEA ESI,[ESP + 0xc8]                ; 0045970b
    FXCH ST2                            ; 00459712
    FSUB float ptr [ESP + 0x5c]         ; 00459714
    FXCH                                ; 00459718
    FSUB float ptr [ESP + 0x60]         ; 0045971a
    FXCH ST2                            ; 0045971e
    FSUB float ptr [ESP + 0x64]         ; 00459720
    FXCH                                ; 00459724
    FSTP float ptr [ESP + 0xc8]         ; 00459726
    FXCH                                ; 0045972d
    FSTP float ptr [ESP + 0xcc]         ; 0045972f
    FSTP float ptr [ESP + 0xd0]         ; 00459736
    MOVSD ES:EDI,ESI                    ; 0045973d
    MOVSD ES:EDI,ESI                    ; 0045973e
    MOVSD ES:EDI,ESI                    ; 0045973f
    FLD float ptr [ESP + 0x78]          ; 00459740
    FMUL ST0                            ; 00459744
    FLD float ptr [ESP + 0x74]          ; 00459746
    FMUL ST0                            ; 0045974a
    FADDP                               ; 0045974c
    FLD float ptr [ESP + 0x7c]          ; 0045974e
    FMUL ST0                            ; 00459752
    FADDP                               ; 00459754
    FSQRT                               ; 00459756
    FCOMP double ptr [0x005d0417]       ; 00459758 | DAT_005d0417
    FNSTSW AX                           ; 0045975e
    SAHF                                ; 00459760
    JNC 0x004596b6                      ; 00459761
        ;   XREF to: 004596b6 (CONDITIONAL_JUMP)  ; LAB_004596b6
    XOR EAX,EAX                         ; 00459767
        ;   Label: LAB_00459767
    MOV ESP,EBP                         ; 00459769
    POP EBP                             ; 0045976b
    POP EDI                             ; 0045976c
    POP ESI                             ; 0045976d
    POP EBX                             ; 0045976e
    RET                                 ; 0045976f
    PUSH EBX                            ; 00459770
        ;   Label: LAB_00459770
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 00459771
    PUSH EAX                            ; 00459777
    CALL dword ptr [ESI + 0x8c]         ; 00459778
    ADD ESP,0x8                         ; 0045977e
    CMP EAX,0x4                         ; 00459781
    SETZ AL                             ; 00459784
    AND EAX,0xff                        ; 00459787
    JZ 0x00459683                       ; 0045978c
        ;   XREF to: 00459683 (CONDITIONAL_JUMP)  ; LAB_00459683
    PUSH 0x1                            ; 00459792
    PUSH 0x19                           ; 00459794
    JMP 0x00459687                      ; 00459796
        ;   XREF to: 00459687 (UNCONDITIONAL_JUMP)  ; LAB_00459687


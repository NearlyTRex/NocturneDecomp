; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gabriela_cpp_FUN_004c65f0(CGabriella *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_004c65dc = 004c78cd
;   TerminatedCString s_s_confused_while_walking_005e0f85
;   TerminatedCString s_flashlit_wav_005e0faf
;   TerminatedCString s_draw_f_wav_1_5_005e0fbc
;   TerminatedCString s_undraw_s_wav_7_005e0fcd
;   undefined4 DAT_005e0fe0
;   undefined4 DAT_005e0fe4
;   undefined4 DAT_005e0fec
;   undefined4 DAT_005e0ff4
;   undefined4 DAT_005e0ffc
;   undefined4 DAT_005e1000
;   undefined4 DAT_005e1004
;   undefined4 DAT_005e1008
;   undefined4 DAT_005e100c
;   undefined4 DAT_005e1014
;   ... and 22 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_FUN_0040cd60
;   core_ammobox.cpp_FUN_0040e1a0
;   core_boxactor.cpp_FUN_00422ab0
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_FUN_0042e160
;   core_charactr.cpp_FUN_00432240
;   core_charactr.cpp_FUN_00433e80
;   ... and 34 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c65f0
        ;   Label: core_gabriela.cpp_FUN_004c65f0
    PUSH ESI                            ; 004c65f1
    PUSH EDI                            ; 004c65f2
    PUSH EBP                            ; 004c65f3
    MOV EBP,ESP                         ; 004c65f4
    SUB ESP,0x2f4                       ; 004c65f6
    SUB EBP,0x7a                        ; 004c65fc
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004c65ff
    PUSH dword ptr [EBP + 0x92]         ; 004c6605
    PUSH EBX                            ; 004c660b
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 004c660c
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004c6611
    TEST EAX,EAX                        ; 004c6614
    JZ 0x004c6ef3                       ; 004c6616
        ;   XREF to: 004c6ef3 (CONDITIONAL_JUMP)  ; LAB_004c6ef3
    CMP dword ptr [EBX + 0xc1d4],0x2    ; 004c661c
    JZ 0x004c6efb                       ; 004c6623
        ;   XREF to: 004c6efb (CONDITIONAL_JUMP)  ; LAB_004c6efb
    FLD float ptr [EBX + 0xc1d0]        ; 004c6629
        ;   Label: LAB_004c6629
    FSUB float ptr [EBP + 0x92]         ; 004c662f
    FST float ptr [EBX + 0xc1d0]        ; 004c6635
    FLDZ                                ; 004c663b
    FCOMPP                              ; 004c663d
    FNSTSW AX                           ; 004c663f
    SAHF                                ; 004c6641
    JBE 0x004c664e                      ; 004c6642
        ;   XREF to: 004c664e (CONDITIONAL_JUMP)  ; LAB_004c664e
    MOV dword ptr [EBX + 0xc1d0],0x0    ; 004c6644
    PUSH EBX                            ; 004c664e
        ;   Label: LAB_004c664e
    LEA ESI,[EBP + 0xfffffe26]          ; 004c664f
    LEA EDI,[EBP + 0xffffff52]          ; 004c6655
    CALL core_gabriela.cpp_FUN_004c8900 ; 004c665b
        ;   XREF to: 004c8900 (UNCONDITIONAL_CALL)  ; undefined core_gabriela.cpp_FUN_004c8900()
    ADD ESP,0x4                         ; 004c6660
    LEA EAX,[EBP + 0xffffff52]          ; 004c6663
    LEA ESI,[EBP + 0xfffffe26]          ; 004c6669
    PUSH EAX                            ; 004c666f
    MOVSD ES:EDI,ESI                    ; 004c6670
    MOVSD ES:EDI,ESI                    ; 004c6671
    MOVSD ES:EDI,ESI                    ; 004c6672
    PUSH EBX                            ; 004c6673
    LEA ESI,[EBP + 0xfffffe62]          ; 004c6674
    LEA EDI,[EBP + 0xfffffe0e]          ; 004c667a
    CALL core_actor.cpp_FUN_00408b40    ; 004c6680
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + 0xfffffe62]          ; 004c6685
    ADD ESP,0x8                         ; 004c668b
    LEA EAX,[EBX + 0x249c]              ; 004c668e
    MOVSD ES:EDI,ESI                    ; 004c6694
    MOVSD ES:EDI,ESI                    ; 004c6695
    MOVSD ES:EDI,ESI                    ; 004c6696
    PUSH dword ptr [EBP + 0x92]         ; 004c6697
    MOV dword ptr [EAX + 0x8],0x0       ; 004c669d
    PUSH EBX                            ; 004c66a4
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c66a5
    MOV dword ptr [EAX + 0x4],EDX       ; 004c66a8
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c66ab
    MOV dword ptr [EAX],EDX             ; 004c66ae
    CALL core_gabriela.cpp_FUN_004c83b0 ; 004c66b0
        ;   XREF to: 004c83b0 (UNCONDITIONAL_CALL)  ; undefined core_gabriela.cpp_FUN_004c83b0()
    FLD float ptr [EBX + 0x2538]        ; 004c66b5
    FLDZ                                ; 004c66bb
    XOR ECX,ECX                         ; 004c66bd
    ADD ESP,0x8                         ; 004c66bf
    MOV dword ptr [EBP + 0x6e],ECX      ; 004c66c2
    FCOMPP                              ; 004c66c5
    FNSTSW AX                           ; 004c66c7
    SAHF                                ; 004c66c9
    JC 0x004c66d3                       ; 004c66ca
        ;   XREF to: 004c66d3 (CONDITIONAL_JUMP)  ; LAB_004c66d3
    MOV dword ptr [EBP + 0x6e],0x1      ; 004c66cc
    CMP dword ptr [EBX + 0x26fc],0x0    ; 004c66d3
        ;   Label: LAB_004c66d3
    JZ 0x004c66e3                       ; 004c66da
        ;   XREF to: 004c66e3 (CONDITIONAL_JUMP)  ; LAB_004c66e3
    MOV dword ptr [EBP + 0x6e],0x1      ; 004c66dc
    CMP dword ptr [EBX + 0x1ff7c],0x0   ; 004c66e3
        ;   Label: LAB_004c66e3
    JZ 0x004c66f3                       ; 004c66ea
        ;   XREF to: 004c66f3 (CONDITIONAL_JUMP)  ; LAB_004c66f3
    MOV dword ptr [EBP + 0x6e],0x1      ; 004c66ec
    CMP dword ptr [EBX + 0x1ff84],0x0   ; 004c66f3
        ;   Label: LAB_004c66f3
    JZ 0x004c6703                       ; 004c66fa
        ;   XREF to: 004c6703 (CONDITIONAL_JUMP)  ; LAB_004c6703
    MOV dword ptr [EBP + 0x6e],0x1      ; 004c66fc
    PUSH 0x8                            ; 004c6703
        ;   Label: LAB_004c6703
    LEA EAX,[EBX + 0x158]               ; 004c6705
    PUSH EAX                            ; 004c670b
    CALL core_motion.cpp_FUN_00524a40   ; 004c670c
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [EBP + 0x76],EAX      ; 004c6711
    ADD ESP,0x8                         ; 004c6714
    FLD float ptr [EBP + 0x76]          ; 004c6717
    FLDZ                                ; 004c671a
    FCOMPP                              ; 004c671c
    FNSTSW AX                           ; 004c671e
    SAHF                                ; 004c6720
    JNC 0x004c672a                      ; 004c6721
        ;   XREF to: 004c672a (CONDITIONAL_JUMP)  ; LAB_004c672a
    MOV dword ptr [EBP + 0x6e],0x1      ; 004c6723
    PUSH 0xb                            ; 004c672a
        ;   Label: LAB_004c672a
    LEA EAX,[EBX + 0x158]               ; 004c672c
    PUSH EAX                            ; 004c6732
    CALL core_motion.cpp_FUN_00524a40   ; 004c6733
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [EBP + 0x76],EAX      ; 004c6738
    ADD ESP,0x8                         ; 004c673b
    FLD float ptr [EBP + 0x76]          ; 004c673e
    FLDZ                                ; 004c6741
    FCOMPP                              ; 004c6743
    FNSTSW AX                           ; 004c6745
    SAHF                                ; 004c6747
    JNC 0x004c6751                      ; 004c6748
        ;   XREF to: 004c6751 (CONDITIONAL_JUMP)  ; LAB_004c6751
    MOV dword ptr [EBP + 0x6e],0x1      ; 004c674a
    PUSH 0xc                            ; 004c6751
        ;   Label: LAB_004c6751
    LEA EAX,[EBX + 0x158]               ; 004c6753
    PUSH EAX                            ; 004c6759
    CALL core_motion.cpp_FUN_00524a40   ; 004c675a
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [EBP + 0x76],EAX      ; 004c675f
    ADD ESP,0x8                         ; 004c6762
    FLD float ptr [EBP + 0x76]          ; 004c6765
    FLDZ                                ; 004c6768
    FCOMPP                              ; 004c676a
    FNSTSW AX                           ; 004c676c
    SAHF                                ; 004c676e
    JNC 0x004c6778                      ; 004c676f
        ;   XREF to: 004c6778 (CONDITIONAL_JUMP)  ; LAB_004c6778
    MOV dword ptr [EBP + 0x6e],0x1      ; 004c6771
    PUSH 0x12                           ; 004c6778
        ;   Label: LAB_004c6778
    LEA EAX,[EBX + 0x158]               ; 004c677a
    PUSH EAX                            ; 004c6780
    CALL core_motion.cpp_FUN_00524a40   ; 004c6781
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [EBP + 0x76],EAX      ; 004c6786
    ADD ESP,0x8                         ; 004c6789
    FLD float ptr [EBP + 0x76]          ; 004c678c
    FLDZ                                ; 004c678f
    FCOMPP                              ; 004c6791
    FNSTSW AX                           ; 004c6793
    SAHF                                ; 004c6795
    JNC 0x004c679f                      ; 004c6796
        ;   XREF to: 004c679f (CONDITIONAL_JUMP)  ; LAB_004c679f
    MOV dword ptr [EBP + 0x6e],0x1      ; 004c6798
    MOV dword ptr [EBX + 0x2528],0x0    ; 004c679f
        ;   Label: LAB_004c679f
    MOV EAX,dword ptr [EBX + 0x2500]    ; 004c67a9
    XOR EDI,EDI                         ; 004c67af
    MOV dword ptr [EBX + 0x2524],0x0    ; 004c67b1
    MOV dword ptr [EBP + 0x66],EDI      ; 004c67bb
    TEST EAX,EAX                        ; 004c67be
    JZ 0x004c687f                       ; 004c67c0
        ;   XREF to: 004c687f (CONDITIONAL_JUMP)  ; LAB_004c687f
    PUSH 0x1                            ; 004c67c6
    LEA ESI,[EBX + 0x158]               ; 004c67c8
    PUSH ESI                            ; 004c67ce
    CALL core_motion.cpp_FUN_00524a40   ; 004c67cf
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [EBP + 0x76],EAX      ; 004c67d4
    ADD ESP,0x8                         ; 004c67d7
    FLD float ptr [EBP + 0x76]          ; 004c67da
    FMUL float ptr [0x01cc90c8]         ; 004c67dd | DAT_01cc90c8
    PUSH 0x2                            ; 004c67e3
    FADD float ptr [EBX + 0x2524]       ; 004c67e5
    PUSH ESI                            ; 004c67eb
    FSTP float ptr [EBX + 0x2524]       ; 004c67ec
    CALL core_motion.cpp_FUN_00524a40   ; 004c67f2
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [EBP + 0x76],EAX      ; 004c67f7
    ADD ESP,0x8                         ; 004c67fa
    FLD float ptr [EBP + 0x76]          ; 004c67fd
    FMUL float ptr [0x01cc90cc]         ; 004c6800 | DAT_01cc90cc
    PUSH 0x3                            ; 004c6806
    FADD float ptr [EBX + 0x2524]       ; 004c6808
    PUSH ESI                            ; 004c680e
    FSTP float ptr [EBX + 0x2524]       ; 004c680f
    CALL core_motion.cpp_FUN_00524a40   ; 004c6815
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [EBP + 0x76],EAX      ; 004c681a
    ADD ESP,0x8                         ; 004c681d
    FLD float ptr [EBP + 0x76]          ; 004c6820
    FMUL float ptr [0x01cc90d0]         ; 004c6823 | DAT_01cc90d0
    PUSH 0x14                           ; 004c6829
    FSUBR float ptr [EBX + 0x2524]      ; 004c682b
    PUSH ESI                            ; 004c6831
    FSTP float ptr [EBX + 0x2524]       ; 004c6832
    CALL core_motion.cpp_FUN_00524a40   ; 004c6838
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [EBP + 0x76],EAX      ; 004c683d
    ADD ESP,0x8                         ; 004c6840
    FLD float ptr [EBP + 0x76]          ; 004c6843
    FMUL float ptr [0x00600d88]         ; 004c6846 | DAT_00600d88
    PUSH 0x15                           ; 004c684c
    FLDZ                                ; 004c684e
    FSUBRP                              ; 004c6850
    PUSH ESI                            ; 004c6852
    FSTP float ptr [EBP + 0x66]         ; 004c6853
    CALL core_motion.cpp_FUN_00524a40   ; 004c6856
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [EBP + 0x76],EAX      ; 004c685b
    ADD ESP,0x8                         ; 004c685e
    FLD float ptr [EBP + 0x76]          ; 004c6861
    FMUL float ptr [0x00600d88]         ; 004c6864 | DAT_00600d88
    PUSH dword ptr [EBP + 0x92]         ; 004c686a
    FADD float ptr [EBP + 0x66]         ; 004c6870
    PUSH EBX                            ; 004c6873
    FSTP float ptr [EBP + 0x66]         ; 004c6874
    CALL core_charactr.cpp_FUN_00435320 ; 004c6877
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 004c687c
    FLD float ptr [EBP + 0x92]          ; 004c687f
        ;   Label: LAB_004c687f
    FLD float ptr [EBX + 0x2524]        ; 004c6885
    FMUL ST1                            ; 004c688b
    FLD float ptr [EBP + 0x66]          ; 004c688d
    FMULP ST2                           ; 004c6890
    MOV EDX,dword ptr [EBX + 0x1ff84]   ; 004c6892
    FXCH                                ; 004c6898
    FSTP float ptr [EBP + 0x66]         ; 004c689a
    FSTP float ptr [EBX + 0x2524]       ; 004c689d
    TEST EDX,EDX                        ; 004c68a3
    JZ 0x004c6f16                       ; 004c68a5
        ;   XREF to: 004c6f16 (CONDITIONAL_JUMP)  ; LAB_004c6f16
    LEA EAX,[EDX + 0x2d4]               ; 004c68ab
    PUSH EAX                            ; 004c68b1
    PUSH EDX                            ; 004c68b2
    LEA ESI,[EBP + 0xffffff3a]          ; 004c68b3
    LEA EDI,[EBP + 0xffffff76]          ; 004c68b9
    CALL core_actor.cpp_FUN_00408b40    ; 004c68bf
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + 0xffffff3a]          ; 004c68c4
    MOVSD ES:EDI,ESI                    ; 004c68ca
    MOVSD ES:EDI,ESI                    ; 004c68cb
    MOVSD ES:EDI,ESI                    ; 004c68cc
    ADD ESP,0x8                         ; 004c68cd
    FLD float ptr [EBX + 0x24]          ; 004c68d0
    FCOMP float ptr [EBP + 0xffffff7a]  ; 004c68d3
    FNSTSW AX                           ; 004c68d9
    SAHF                                ; 004c68db
    JBE 0x004c6997                      ; 004c68dc
        ;   XREF to: 004c6997 (CONDITIONAL_JUMP)  ; LAB_004c6997
    MOV ECX,0x3f000000                  ; 004c68e2
    MOV ESI,0x40800000                  ; 004c68e7
    LEA EAX,[EBP + -0x4e]               ; 004c68ec
    LEA EDI,[EBP + 0xfffffe6e]          ; 004c68ef
    XOR EDX,EDX                         ; 004c68f5
    MOV dword ptr [EBX + 0x1ff84],0x0   ; 004c68f7
    PUSH EAX                            ; 004c6901
    MOV dword ptr [EBP + -0x4e],EDX     ; 004c6902
    MOV dword ptr [EBP + -0x46],ESI     ; 004c6905
    PUSH EBX                            ; 004c6908
    LEA ESI,[EBP + -0x36]               ; 004c6909
    MOV dword ptr [EBP + -0x4a],ECX     ; 004c690c
    CALL core_actor.cpp_FUN_00408ac0    ; 004c690f
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[EBP + -0x36]               ; 004c6914
    MOVSD ES:EDI,ESI                    ; 004c6917
    MOVSD ES:EDI,ESI                    ; 004c6918
    MOVSD ES:EDI,ESI                    ; 004c6919
    LEA ESI,[EBP + 0xfffffe6e]          ; 004c691a
    LEA EAX,[EBX + 0x20]                ; 004c6920
    FLD float ptr [ESI]                 ; 004c6923
    FADD float ptr [EAX]                ; 004c6925
    FSTP float ptr [EAX]                ; 004c6927
    FLD float ptr [ESI + 0x4]           ; 004c6929
    FADD float ptr [EAX + 0x4]          ; 004c692c
    ADD ESP,0x8                         ; 004c692f
    FSTP float ptr [EAX + 0x4]          ; 004c6932
    FLD float ptr [ESI + 0x8]           ; 004c6935
    FADD float ptr [EAX + 0x8]          ; 004c6938
    PUSH 0x0                            ; 004c693b
    FSTP float ptr [EAX + 0x8]          ; 004c693d
    PUSH dword ptr [EBX + 0x2fec]       ; 004c6940
    MOV ESI,dword ptr [EBX + 0x154]     ; 004c6946
    PUSH EBX                            ; 004c694c
    CALL dword ptr [ESI + 0x40]         ; 004c694d
    MOV dword ptr [EBP + 0x76],EAX      ; 004c6950
    MOV EAX,dword ptr [EBP + 0x76]      ; 004c6953
    MOV dword ptr [EBX + 0x2504],EAX    ; 004c6956
    FLD float ptr [EBX + 0x2504]        ; 004c695c
    FADD double ptr [0x005e100c]        ; 004c6962 | DAT_005e100c
    ADD ESP,0xc                         ; 004c6968
    FLD float ptr [EBX + 0x24]          ; 004c696b
    FCOMPP                              ; 004c696e
    FNSTSW AX                           ; 004c6970
    SAHF                                ; 004c6972
    JNC 0x004c6f0f                      ; 004c6973
        ;   XREF to: 004c6f0f (CONDITIONAL_JUMP)  ; LAB_004c6f0f
    MOV EAX,0x1                         ; 004c6979
    PUSH 0x1                            ; 004c697e
        ;   Label: LAB_004c697e
    PUSH 0x0                            ; 004c6980
    MOV dword ptr [EBX + 0x2500],EAX    ; 004c6982
    LEA EAX,[EBX + 0x158]               ; 004c6988
        ;   Label: LAB_004c6988
    PUSH EAX                            ; 004c698e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004c698f
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004c698f
    ADD ESP,0xc                         ; 004c6994
        ;   Label: LAB_004c6994
    CMP dword ptr [EBX + 0x1ff84],0x0   ; 004c6997
        ;   Label: LAB_004c6997
    JZ 0x004c752c                       ; 004c699e
        ;   XREF to: 004c752c (CONDITIONAL_JUMP)  ; LAB_004c752c
    LEA EAX,[EBX + 0x249c]              ; 004c69a4
    PUSH EAX                            ; 004c69aa
    LEA ESI,[EBP + 0xfffffeda]          ; 004c69ab
    PUSH EBX                            ; 004c69b1
    LEA EDI,[EBP + 0xfffffeaa]          ; 004c69b2
    MOV dword ptr [EBP + 0x76],EAX      ; 004c69b8
    CALL core_actor.cpp_FUN_00408ac0    ; 004c69bb
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[EBP + 0xfffffeda]          ; 004c69c0
    LEA EAX,[EBX + 0x20]                ; 004c69c6
    MOVSD ES:EDI,ESI                    ; 004c69c9
    MOVSD ES:EDI,ESI                    ; 004c69ca
    MOVSD ES:EDI,ESI                    ; 004c69cb
    FLD float ptr [EAX]                 ; 004c69cc
    FLD float ptr [EAX + 0x4]           ; 004c69ce
    FLD float ptr [EAX + 0x8]           ; 004c69d1
    FXCH ST2                            ; 004c69d4
    FADD float ptr [EBP + 0xfffffeaa]   ; 004c69d6
    FXCH                                ; 004c69dc
    FADD float ptr [EBP + 0xfffffeae]   ; 004c69de
    FXCH ST2                            ; 004c69e4
    FADD float ptr [EBP + 0xfffffeb2]   ; 004c69e6
    FXCH                                ; 004c69ec
    FSTP float ptr [EAX]                ; 004c69ee
    FXCH                                ; 004c69f0
    FSTP float ptr [EAX + 0x4]          ; 004c69f2
    FSTP float ptr [EAX + 0x8]          ; 004c69f5
    MOV EAX,dword ptr [EBP + 0x76]      ; 004c69f8
    MOV dword ptr [EAX + 0x8],0x0       ; 004c69fb
    ADD ESP,0x8                         ; 004c6a02
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c6a05
    MOV dword ptr [EAX + 0x4],EDX       ; 004c6a08
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c6a0b
    MOV dword ptr [EAX],EDX             ; 004c6a0e
    PUSH EBX                            ; 004c6a10
        ;   Label: LAB_004c6a10
    MOV ESI,dword ptr [EBP + 0x6e]      ; 004c6a11
    CALL core_charactr.cpp_FUN_0042e160 ; 004c6a14
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004c6a19
    TEST ESI,ESI                        ; 004c6a1c
    JZ 0x004c7699                       ; 004c6a1e
        ;   XREF to: 004c7699 (CONDITIONAL_JUMP)  ; LAB_004c7699
    MOV EAX,[0x007c5330]                ; 004c6a24 | DAT_007c5330
        ;   Label: LAB_004c6a24
    PUSH EAX                            ; 004c6a29
    MOV EDX,dword ptr [EBX + 0x25b0]    ; 004c6a2a
    PUSH EDX                            ; 004c6a30
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004c6a31
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004c6a36
    MOV ESI,EAX                         ; 004c6a39
    TEST EAX,EAX                        ; 004c6a3b
    JZ 0x004c6adf                       ; 004c6a3d
        ;   XREF to: 004c6adf (CONDITIONAL_JUMP)  ; LAB_004c6adf
    CMP dword ptr [EBX + 0xc1ec],0x0    ; 004c6a43
    JZ 0x004c6a56                       ; 004c6a4a
        ;   XREF to: 004c6a56 (CONDITIONAL_JUMP)  ; LAB_004c6a56
    CMP dword ptr [EBP + 0x6e],0x0      ; 004c6a4c
    JZ 0x004c76e5                       ; 004c6a50
        ;   XREF to: 004c76e5 (CONDITIONAL_JUMP)  ; LAB_004c76e5
    CMP dword ptr [ESI + 0x2330],0x0    ; 004c6a56
        ;   Label: LAB_004c6a56
    JZ 0x004c6adf                       ; 004c6a5d
        ;   XREF to: 004c6adf (CONDITIONAL_JUMP)  ; LAB_004c6adf
    FLD float ptr [EBX + 0xc204]        ; 004c6a63
    FMUL float ptr [0x005e0ffc]         ; 004c6a69 | DAT_005e0ffc
    FMUL double ptr [0x005e1014]        ; 004c6a6f | DAT_005e1014
    FMUL float ptr [EBP + 0x92]         ; 004c6a75
    FLD float ptr [EBX + 0x1ffc0]       ; 004c6a7b
    FXCH                                ; 004c6a81
    FADD ST0,ST1                        ; 004c6a83
    PUSH EBX                            ; 004c6a85
    FSTP ST1                            ; 004c6a86
    FSTP float ptr [EBX + 0x1ffc0]      ; 004c6a88
    CALL core_gabriela.cpp_FUN_004c88a0 ; 004c6a8e
        ;   XREF to: 004c88a0 (UNCONDITIONAL_CALL)  ; undefined core_gabriela.cpp_FUN_004c88a0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004c6a93
    ADD ESP,0x4                         ; 004c6a96
    FLD float ptr [EBP + 0x76]          ; 004c6a99
    PUSH EBX                            ; 004c6a9c
    FSTP float ptr [EBP + 0x4e]         ; 004c6a9d
    CALL core_gabriela.cpp_FUN_004c88f0 ; 004c6aa0
        ;   XREF to: 004c88f0 (UNCONDITIONAL_CALL)  ; undefined core_gabriela.cpp_FUN_004c88f0()
    FLD float ptr [EBX + 0x1ffc0]       ; 004c6aa5
    MOV dword ptr [EBP + 0x76],EAX      ; 004c6aab
    ADD ESP,0x4                         ; 004c6aae
    MOV EAX,dword ptr [EBP + 0x76]      ; 004c6ab1
    MOV dword ptr [EBP + 0x42],EAX      ; 004c6ab4
    FCOMP float ptr [EBP + 0x4e]        ; 004c6ab7
    FNSTSW AX                           ; 004c6aba
    SAHF                                ; 004c6abc
    JNC 0x004c6ac8                      ; 004c6abd
        ;   XREF to: 004c6ac8 (CONDITIONAL_JUMP)  ; LAB_004c6ac8
    MOV EAX,dword ptr [EBP + 0x4e]      ; 004c6abf
    MOV dword ptr [EBX + 0x1ffc0],EAX   ; 004c6ac2
    FLD float ptr [EBX + 0x1ffc0]       ; 004c6ac8
        ;   Label: LAB_004c6ac8
    FCOMP float ptr [EBP + 0x42]        ; 004c6ace
    FNSTSW AX                           ; 004c6ad1
    SAHF                                ; 004c6ad3
    JBE 0x004c6adf                      ; 004c6ad4
        ;   XREF to: 004c6adf (CONDITIONAL_JUMP)  ; LAB_004c6adf
    MOV EAX,dword ptr [EBP + 0x42]      ; 004c6ad6
    MOV dword ptr [EBX + 0x1ffc0],EAX   ; 004c6ad9
    TEST byte ptr [EBX + 0x1ffac],0x1   ; 004c6adf
        ;   Label: LAB_004c6adf
    JZ 0x004c7720                       ; 004c6ae6
        ;   XREF to: 004c7720 (CONDITIONAL_JUMP)  ; LAB_004c7720
    FLD float ptr [EBP + 0x92]          ; 004c6aec
    FDIV float ptr [0x00600d48]         ; 004c6af2 | DAT_00600d48
    FADD float ptr [EBX + 0x1ffb0]      ; 004c6af8
    FST float ptr [EBX + 0x1ffb0]       ; 004c6afe
    FLD1                                ; 004c6b04
    FCOMPP                              ; 004c6b06
    FNSTSW AX                           ; 004c6b08
    SAHF                                ; 004c6b0a
    JNC 0x004c6b17                      ; 004c6b0b
        ;   XREF to: 004c6b17 (CONDITIONAL_JUMP)  ; LAB_004c6b17
    MOV dword ptr [EBX + 0x1ffb0],0x3f800000 ; 004c6b0d
    TEST byte ptr [EBX + 0x1ffac],0x2   ; 004c6b17
        ;   Label: LAB_004c6b17
    JZ 0x004c7754                       ; 004c6b1e
        ;   XREF to: 004c7754 (CONDITIONAL_JUMP)  ; LAB_004c7754
    FLD float ptr [EBP + 0x92]          ; 004c6b24
    FDIV float ptr [0x00600d48]         ; 004c6b2a | DAT_00600d48
    MOV EAX,dword ptr [EBX + 0x1ffb4]   ; 004c6b30
    MOV dword ptr [EBP + 0x4a],EAX      ; 004c6b36
    FADD float ptr [EBP + 0x4a]         ; 004c6b39
    FST float ptr [EBX + 0x1ffb4]       ; 004c6b3c
    FLD1                                ; 004c6b42
    FCOMPP                              ; 004c6b44
    FNSTSW AX                           ; 004c6b46
    SAHF                                ; 004c6b48
    JNC 0x004c6b55                      ; 004c6b49
        ;   XREF to: 004c6b55 (CONDITIONAL_JUMP)  ; LAB_004c6b55
    MOV dword ptr [EBX + 0x1ffb4],0x3f800000 ; 004c6b4b
    FLD float ptr [0x00600d54]          ; 004c6b55 | DAT_00600d54
        ;   Label: LAB_004c6b55
    FADD double ptr [0x005e1024]        ; 004c6b5b | DAT_005e1024
    FLD float ptr [EBP + 0x4a]          ; 004c6b61
    FXCH                                ; 004c6b64
    FSTP float ptr [EBP + 0x3a]         ; 004c6b66
    FCOMP float ptr [EBP + 0x3a]        ; 004c6b69
    FNSTSW AX                           ; 004c6b6c
    SAHF                                ; 004c6b6e
    JA 0x004c6b9f                       ; 004c6b6f
        ;   XREF to: 004c6b9f (CONDITIONAL_JUMP)  ; LAB_004c6b9f
    FLD float ptr [EBX + 0x1ffb4]       ; 004c6b71
    FCOMP float ptr [EBP + 0x3a]        ; 004c6b77
    FNSTSW AX                           ; 004c6b7a
    SAHF                                ; 004c6b7c
    JBE 0x004c6b9f                      ; 004c6b7d
        ;   XREF to: 004c6b9f (CONDITIONAL_JUMP)  ; LAB_004c6b9f
    MOV EAX,[0x0061d95c]                ; 004c6b7f | g_CGamePtr
    PUSH EAX                            ; 004c6b84 | g_CGameInstance
    CALL core_game.cpp_FUN_004d6300     ; 004c6b85
        ;   XREF to: 004d6300 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004d6300(CGame * this_ptr)
    ADD ESP,0x4                         ; 004c6b8a
    PUSH 0x5e0fbc                       ; 004c6b8d | = "draw-f.wav @ 1.5"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c6b92
        ;   Label: LAB_004c6b92
    PUSH EBX                            ; 004c6b98
    CALL dword ptr [EAX + 0x2c]         ; 004c6b99
    ADD ESP,0x8                         ; 004c6b9c
    TEST byte ptr [EBX + 0x1ffac],0x3   ; 004c6b9f
        ;   Label: LAB_004c6b9f
    JZ 0x004c77c1                       ; 004c6ba6
        ;   XREF to: 004c77c1 (CONDITIONAL_JUMP)  ; LAB_004c77c1
    FLD float ptr [EBP + 0x92]          ; 004c6bac
    FDIV float ptr [0x00600d48]         ; 004c6bb2 | DAT_00600d48
    FADD float ptr [EBX + 0x1ffb8]      ; 004c6bb8
    FST float ptr [EBX + 0x1ffb8]       ; 004c6bbe
    FLD1                                ; 004c6bc4
    FCOMPP                              ; 004c6bc6
    FNSTSW AX                           ; 004c6bc8
    SAHF                                ; 004c6bca
    JNC 0x004c6bd7                      ; 004c6bcb
        ;   XREF to: 004c6bd7 (CONDITIONAL_JUMP)  ; LAB_004c6bd7
    MOV dword ptr [EBX + 0x1ffb8],0x3f800000 ; 004c6bcd
    CMP dword ptr [EBP + 0x6e],0x0      ; 004c6bd7
        ;   Label: LAB_004c6bd7
    JZ 0x004c77f5                       ; 004c6bdb
        ;   XREF to: 004c77f5 (CONDITIONAL_JUMP)  ; LAB_004c77f5
    FLD float ptr [EBP + 0x92]          ; 004c6be1
    FDIV float ptr [0x00600d4c]         ; 004c6be7 | DAT_00600d4c
    FMUL double ptr [0x005e0fe4]        ; 004c6bed | DAT_005e0fe4
    FSUBR float ptr [EBX + 0x1ffbc]     ; 004c6bf3
        ;   Label: LAB_004c6bf3
    FSTP float ptr [EBX + 0x1ffbc]      ; 004c6bf9
        ;   Label: LAB_004c6bf9
    FLD float ptr [EBX + 0x1ffbc]       ; 004c6bff
    FLDZ                                ; 004c6c05
    FCOMPP                              ; 004c6c07
    FNSTSW AX                           ; 004c6c09
    SAHF                                ; 004c6c0b
    JBE 0x004c6c18                      ; 004c6c0c
        ;   XREF to: 004c6c18 (CONDITIONAL_JUMP)  ; LAB_004c6c18
    MOV dword ptr [EBX + 0x1ffbc],0x0   ; 004c6c0e
    FLD float ptr [EBX + 0x1ffbc]       ; 004c6c18
        ;   Label: LAB_004c6c18
    FCOMP double ptr [0x005e102c]       ; 004c6c1e | DAT_005e102c
    FNSTSW AX                           ; 004c6c24
    SAHF                                ; 004c6c26
    JBE 0x004c6c33                      ; 004c6c27
        ;   XREF to: 004c6c33 (CONDITIONAL_JUMP)  ; LAB_004c6c33
    MOV dword ptr [EBX + 0x1ffbc],0x3f666666 ; 004c6c29
    MOV ESI,dword ptr [EBP + 0x6e]      ; 004c6c33
        ;   Label: LAB_004c6c33
    PUSH ESI                            ; 004c6c36
    PUSH dword ptr [EBP + 0x92]         ; 004c6c37
    PUSH EBX                            ; 004c6c3d
    CALL core_gabriela.cpp_FUN_004ca450 ; 004c6c3e
        ;   XREF to: 004ca450 (UNCONDITIONAL_CALL)  ; void core_gabriela.cpp_FUN_004ca450(CGabriella * this_ptr, float delta_time, int is_holstering)
    FLD float ptr [EBP + 0x92]          ; 004c6c43
    FDIV float ptr [0x00600d5c]         ; 004c6c49 | DAT_00600d5c
    FSUBR float ptr [EBX + 0x1ffe4]     ; 004c6c4f
    ADD ESP,0xc                         ; 004c6c55
    FST float ptr [EBX + 0x1ffe4]       ; 004c6c58
    FLDZ                                ; 004c6c5e
    FCOMPP                              ; 004c6c60
    FNSTSW AX                           ; 004c6c62
    SAHF                                ; 004c6c64
    JC 0x004c6c79                       ; 004c6c65
        ;   XREF to: 004c6c79 (CONDITIONAL_JUMP)  ; LAB_004c6c79
    MOV dword ptr [EBX + 0x1ffe4],0x0   ; 004c6c67
    TEST ESI,ESI                        ; 004c6c71
    JZ 0x004c7841                       ; 004c6c73
        ;   XREF to: 004c7841 (CONDITIONAL_JUMP)  ; LAB_004c7841
    PUSH EBX                            ; 004c6c79
        ;   Label: LAB_004c6c79
    MOV ESI,dword ptr [EBP + 0x6e]      ; 004c6c7a
    CALL core_gabriela.cpp_FUN_004c89c0 ; 004c6c7d
        ;   XREF to: 004c89c0 (UNCONDITIONAL_CALL)  ; void core_gabriela.cpp_FUN_004c89c0(CGabriella * this_ptr)
    ADD ESP,0x4                         ; 004c6c82
    TEST ESI,ESI                        ; 004c6c85
    SETZ AL                             ; 004c6c87
    AND EAX,0xff                        ; 004c6c8a
    PUSH EAX                            ; 004c6c8f
    PUSH dword ptr [EBP + 0x92]         ; 004c6c90
    PUSH EBX                            ; 004c6c96
    CALL core_gabriela.cpp_FUN_004cad20 ; 004c6c97
        ;   XREF to: 004cad20 (UNCONDITIONAL_CALL)  ; void core_gabriela.cpp_FUN_004cad20(CGabriella * this_ptr, float delta_time, int has_carried_objects)
    ADD ESP,0xc                         ; 004c6c9c
    PUSH dword ptr [EBP + 0x92]         ; 004c6c9f
    PUSH EBX                            ; 004c6ca5
    CALL core_charactr.cpp_FUN_00433e80 ; 004c6ca6
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004c6cab
    PUSH 0xd                            ; 004c6cae
    LEA ESI,[EBX + 0x158]               ; 004c6cb0
    PUSH ESI                            ; 004c6cb6
    CALL core_motion.cpp_FUN_00524a40   ; 004c6cb7
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [EBP + 0x76],EAX      ; 004c6cbc
    ADD ESP,0x8                         ; 004c6cbf
    FLD float ptr [EBP + 0x76]          ; 004c6cc2
    FLDZ                                ; 004c6cc5
    FCOMPP                              ; 004c6cc7
    FNSTSW AX                           ; 004c6cc9
    SAHF                                ; 004c6ccb
    JNC 0x004c7934                      ; 004c6ccc
        ;   XREF to: 004c7934 (CONDITIONAL_JUMP)  ; LAB_004c7934
    PUSH ESI                            ; 004c6cd2
    CALL core_motion.cpp_FUN_00525020   ; 004c6cd3
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c6cd8
    ADD ESP,0x4                         ; 004c6cdb
    FLD float ptr [EBP + 0x76]          ; 004c6cde
    FLD1                                ; 004c6ce1
    FCOMPP                              ; 004c6ce3
    FNSTSW AX                           ; 004c6ce5
    SAHF                                ; 004c6ce7
    JNC 0x004c6ddf                      ; 004c6ce8
        ;   XREF to: 004c6ddf (CONDITIONAL_JUMP)  ; LAB_004c6ddf
    MOV EDI,dword ptr [0x007c5094]      ; 004c6cee | g_CBoxActorClassInfo.name_hash
    PUSH EDI                            ; 004c6cf4
    MOV EAX,dword ptr [EBX + 0x1ff7c]   ; 004c6cf5
    PUSH EAX                            ; 004c6cfb
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004c6cfc
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV dword ptr [EBP + 0x3e],EAX      ; 004c6d01
    ADD ESP,0x8                         ; 004c6d04
    TEST EAX,EAX                        ; 004c6d07
    JZ 0x004c6ddf                       ; 004c6d09
        ;   XREF to: 004c6ddf (CONDITIONAL_JUMP)  ; LAB_004c6ddf
    PUSH EBX                            ; 004c6d0f
    LEA ESI,[EBP + -0x7e]               ; 004c6d10
    LEA EDI,[EBP + 0xffffff46]          ; 004c6d13
    CALL core_gabriela.cpp_FUN_004c8900 ; 004c6d19
        ;   XREF to: 004c8900 (UNCONDITIONAL_CALL)  ; undefined core_gabriela.cpp_FUN_004c8900()
    ADD ESP,0x4                         ; 004c6d1e
    LEA EAX,[EBP + 0xffffff46]          ; 004c6d21
    LEA ESI,[EBP + -0x7e]               ; 004c6d27
    PUSH EAX                            ; 004c6d2a
    MOVSD ES:EDI,ESI                    ; 004c6d2b
    MOVSD ES:EDI,ESI                    ; 004c6d2c
    MOVSD ES:EDI,ESI                    ; 004c6d2d
    PUSH EBX                            ; 004c6d2e
    LEA ESI,[EBP + 0xfffffe3e]          ; 004c6d2f
    LEA EDI,[EBP + 0xfffffe56]          ; 004c6d35
    CALL core_actor.cpp_FUN_00408b40    ; 004c6d3b
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + 0xfffffe3e]          ; 004c6d40
    LEA EAX,[EBP + -0x12]               ; 004c6d46
    ADD ESP,0x8                         ; 004c6d49
    XOR ECX,ECX                         ; 004c6d4c
    MOVSD ES:EDI,ESI                    ; 004c6d4e
    MOVSD ES:EDI,ESI                    ; 004c6d4f
    MOVSD ES:EDI,ESI                    ; 004c6d50
    PUSH EAX                            ; 004c6d51
    FLD float ptr [EBP + 0xfffffe56]    ; 004c6d52
    FLD float ptr [EBP + 0xfffffe5a]    ; 004c6d58
    FLD float ptr [EBP + 0xfffffe5e]    ; 004c6d5e
    LEA EDI,[EBP + -0x12]               ; 004c6d64
    LEA ESI,[EBP + 0xfffffdde]          ; 004c6d67
    FXCH ST2                            ; 004c6d6d
    FSUB float ptr [EBP + 0xfffffe0e]   ; 004c6d6f
    FXCH                                ; 004c6d75
    FSUB float ptr [EBP + 0xfffffe12]   ; 004c6d77
    FXCH ST2                            ; 004c6d7d
    FSUB float ptr [EBP + 0xfffffe16]   ; 004c6d7f
    FXCH                                ; 004c6d85
    FSTP float ptr [EBP + 0xfffffdde]   ; 004c6d87
    FXCH                                ; 004c6d8d
    FSTP float ptr [EBP + 0xfffffde2]   ; 004c6d8f
    FSTP float ptr [EBP + 0xfffffde6]   ; 004c6d95
    MOVSD ES:EDI,ESI                    ; 004c6d9b
    MOVSD ES:EDI,ESI                    ; 004c6d9c
    MOVSD ES:EDI,ESI                    ; 004c6d9d
    PUSH EBX                            ; 004c6d9e
    LEA ESI,[EBP + 0xffffff2e]          ; 004c6d9f
    LEA EDI,[EBP + -0x42]               ; 004c6da5
    MOV dword ptr [EBP + -0xe],ECX      ; 004c6da8
    CALL core_actor.cpp_FUN_00408b00    ; 004c6dab
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[EBP + 0xffffff2e]          ; 004c6db0
    MOVSD ES:EDI,ESI                    ; 004c6db6
    MOVSD ES:EDI,ESI                    ; 004c6db7
    MOVSD ES:EDI,ESI                    ; 004c6db8
    ADD ESP,0x8                         ; 004c6db9
    FLD float ptr [EBP + -0x3a]         ; 004c6dbc
    FLDZ                                ; 004c6dbf
    FCOMPP                              ; 004c6dc1
    FNSTSW AX                           ; 004c6dc3
    SAHF                                ; 004c6dc5
    JNC 0x004c6ddf                      ; 004c6dc6
        ;   XREF to: 004c6ddf (CONDITIONAL_JUMP)  ; LAB_004c6ddf
    LEA EAX,[EBP + -0x12]               ; 004c6dc8
    PUSH EAX                            ; 004c6dcb
    LEA EAX,[EBP + 0xfffffe0e]          ; 004c6dcc
    PUSH EAX                            ; 004c6dd2
    MOV ESI,dword ptr [EBP + 0x3e]      ; 004c6dd3
    PUSH ESI                            ; 004c6dd6
    CALL core_boxactor.cpp_FUN_00422ab0 ; 004c6dd7
        ;   XREF to: 00422ab0 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_FUN_00422ab0(CBoxActor * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction)
    ADD ESP,0xc                         ; 004c6ddc
    PUSH dword ptr [EBP + 0x92]         ; 004c6ddf
        ;   Label: LAB_004c6ddf
    PUSH EBX                            ; 004c6de5
    CALL core_gabriela.cpp_FUN_004c91b0 ; 004c6de6
        ;   XREF to: 004c91b0 (UNCONDITIONAL_CALL)  ; void core_gabriela.cpp_FUN_004c91b0(CGabriella * this_ptr, float delta_time)
    MOV EDI,dword ptr [EBX + 0x1ffc4]   ; 004c6deb
    ADD ESP,0x8                         ; 004c6df1
    CMP EDI,0x3                         ; 004c6df4
    JNZ 0x004c7a4b                      ; 004c6df7
        ;   XREF to: 004c7a4b (CONDITIONAL_JUMP)  ; LAB_004c7a4b
    MOV EAX,[0x01c3db94]                ; 004c6dfd | g_CDynamiteClassInfo.name_hash
    PUSH EAX                            ; 004c6e02
    LEA EAX,[EBX + 0x1fae8]             ; 004c6e03
    MOV EAX,dword ptr [EAX + 0x338]     ; 004c6e09
    PUSH EAX                            ; 004c6e0f
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004c6e10
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004c6e15
    MOV dword ptr [EBP + 0x32],EAX      ; 004c6e18
    TEST EAX,EAX                        ; 004c6e1b
    JNZ 0x004c7942                      ; 004c6e1d
        ;   XREF to: 004c7942 (CONDITIONAL_JUMP)  ; LAB_004c7942
    MOV dword ptr [EBX + 0x1ffc4],0x2   ; 004c6e23
    FLD float ptr [0x00600d8c]          ; 004c6e2d | DAT_00600d8c
        ;   Label: LAB_004c6e2d
    PUSH EBX                            ; 004c6e33
    FSTP float ptr [EBX + 0x5ab1c]      ; 004c6e34
    CALL core_gabriela.cpp_FUN_004c9dd0 ; 004c6e3a
        ;   XREF to: 004c9dd0 (UNCONDITIONAL_CALL)  ; int core_gabriela.cpp_FUN_004c9dd0(CGabriella * this_ptr)
    ADD ESP,0x4                         ; 004c6e3f
    TEST EAX,EAX                        ; 004c6e42
    JZ 0x004c7a58                       ; 004c6e44
        ;   XREF to: 004c7a58 (CONDITIONAL_JUMP)  ; LAB_004c7a58
    MOV dword ptr [EBX + 0x1ffc4],0x1   ; 004c6e4a
    PUSH EBX                            ; 004c6e54
        ;   Label: LAB_004c6e54
    MOV dword ptr [EBX + 0x1ffc4],0x0   ; 004c6e55
    CALL core_gabriela.cpp_FUN_004c9e40 ; 004c6e5f
        ;   XREF to: 004c9e40 (UNCONDITIONAL_CALL)  ; undefined core_gabriela.cpp_FUN_004c9e40()
    LEA EAX,[EBX + 0x1fae8]             ; 004c6e64
    MOV EAX,dword ptr [EAX + 0x338]     ; 004c6e6a
    MOV ESI,dword ptr [EAX + 0x2ec]     ; 004c6e70
    ADD ESP,0x4                         ; 004c6e76
    TEST ESI,ESI                        ; 004c6e79
    JZ 0x004c7a79                       ; 004c6e7b
        ;   XREF to: 004c7a79 (CONDITIONAL_JUMP)  ; LAB_004c7a79
    PUSH EBX                            ; 004c6e81
        ;   Label: LAB_004c6e81
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c6e82
    CALL dword ptr [EAX + 0x10c]        ; 004c6e88
    ADD ESP,0x4                         ; 004c6e8e
    CMP EAX,0x2                         ; 004c6e91
    JZ 0x004c6ec0                       ; 004c6e94
        ;   XREF to: 004c6ec0 (CONDITIONAL_JUMP)  ; LAB_004c6ec0
    LEA EAX,[EBX + 0x158]               ; 004c6e96
    PUSH EAX                            ; 004c6e9c
    PUSH dword ptr [EBX + 0x2504]       ; 004c6e9d
    LEA EAX,[EBX + 0x30]                ; 004c6ea3
    PUSH dword ptr [EBP + 0x92]         ; 004c6ea6
    PUSH EAX                            ; 004c6eac
    LEA EAX,[EBX + 0x20]                ; 004c6ead
    PUSH EAX                            ; 004c6eb0
    LEA EAX,[EBX + 0x1ffec]             ; 004c6eb1
    PUSH EAX                            ; 004c6eb7
    CALL core_cloth.cpp_CCloth_process_FUN_00440610 ; 004c6eb8
        ;   XREF to: 00440610 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_00440610(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 004c6ebd
    LEA ESI,[EBX + 0x1fae8]             ; 004c6ec0
        ;   Label: LAB_004c6ec0
    MOV EAX,dword ptr [ESI + 0x338]     ; 004c6ec6
    PUSH dword ptr [EBP + 0x92]         ; 004c6ecc
    PUSH EAX                            ; 004c6ed2
    MOV EDI,dword ptr [EAX + 0x154]     ; 004c6ed3
    CALL dword ptr [EDI + 0xc]          ; 004c6ed9
    MOV EAX,dword ptr [ESI + 0x338]     ; 004c6edc
    MOV EDI,dword ptr [EAX + 0xfc]      ; 004c6ee2
    ADD ESP,0x8                         ; 004c6ee8
    TEST EDI,EDI                        ; 004c6eeb
    JNZ 0x004c7a84                      ; 004c6eed
        ;   XREF to: 004c7a84 (CONDITIONAL_JUMP)  ; LAB_004c7a84
    LEA ESP,[EBP + 0x7a]                ; 004c6ef3
        ;   Label: LAB_004c6ef3
    POP EBP                             ; 004c6ef6
    POP EDI                             ; 004c6ef7
    POP ESI                             ; 004c6ef8
    POP EBX                             ; 004c6ef9
    RET                                 ; 004c6efa
    PUSH dword ptr [EBP + 0x92]         ; 004c6efb
        ;   Label: LAB_004c6efb
    PUSH EBX                            ; 004c6f01
    CALL core_gabriela.cpp_FUN_004c7aa0 ; 004c6f02
        ;   XREF to: 004c7aa0 (UNCONDITIONAL_CALL)  ; undefined core_gabriela.cpp_FUN_004c7aa0()
    ADD ESP,0x8                         ; 004c6f07
    JMP 0x004c6629                      ; 004c6f0a
        ;   XREF to: 004c6629 (UNCONDITIONAL_JUMP)  ; LAB_004c6629
    XOR EAX,EAX                         ; 004c6f0f
        ;   Label: LAB_004c6f0f
    JMP 0x004c697e                      ; 004c6f11
        ;   XREF to: 004c697e (UNCONDITIONAL_JUMP)  ; LAB_004c697e
    MOV ECX,dword ptr [EBX + 0x26fc]    ; 004c6f16
        ;   Label: LAB_004c6f16
    TEST ECX,ECX                        ; 004c6f1c
    JZ 0x004c708f                       ; 004c6f1e
        ;   XREF to: 004c708f (CONDITIONAL_JUMP)  ; LAB_004c708f
    CMP dword ptr [EBX + 0x2700],0x0    ; 004c6f24
    JNZ 0x004c700c                      ; 004c6f2b
        ;   XREF to: 004c700c (CONDITIONAL_JUMP)  ; LAB_004c700c
    LEA EAX,[ECX + 0x20]                ; 004c6f31
    PUSH EAX                            ; 004c6f34
    PUSH EBX                            ; 004c6f35
    LEA ESI,[EBP + 0xfffffe4a]          ; 004c6f36
    LEA EDI,[EBP + 0xfffffe32]          ; 004c6f3c
    CALL core_actor.cpp_FUN_00408bb0    ; 004c6f42
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[EBP + 0xfffffe4a]          ; 004c6f47
    LEA EAX,[EBP + 0xfffffe32]          ; 004c6f4d
    ADD ESP,0x8                         ; 004c6f53
    MOVSD ES:EDI,ESI                    ; 004c6f56
    MOVSD ES:EDI,ESI                    ; 004c6f57
    MOVSD ES:EDI,ESI                    ; 004c6f58
    PUSH EAX                            ; 004c6f59
    LEA ESI,[EBP + 0xffffff16]          ; 004c6f5a
    LEA EDI,[EBP + 0xfffffe1a]          ; 004c6f60
    CALL core_vecdir.cpp_FUN_005a7520   ; 004c6f66
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005a7520()
    LEA ESI,[EBP + 0xffffff16]          ; 004c6f6b
    ADD ESP,0x4                         ; 004c6f71
    MOVSD ES:EDI,ESI                    ; 004c6f74
    MOVSD ES:EDI,ESI                    ; 004c6f75
    MOVSD ES:EDI,ESI                    ; 004c6f76
    PUSH dword ptr [EBP + 0xfffffe1e]   ; 004c6f77
    CALL core_actor.cpp_FUN_0040cd60    ; 004c6f7d
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cd60()
    MOV dword ptr [EBP + 0x76],EAX      ; 004c6f82
    ADD ESP,0x4                         ; 004c6f85
    MOV EAX,dword ptr [EBP + 0x76]      ; 004c6f88
    MOV dword ptr [EBP + 0x6a],EAX      ; 004c6f8b
    FLD float ptr [EBP + 0x6a]          ; 004c6f8e
    FCOMP float ptr [0x005e1000]        ; 004c6f91 | DAT_005e1000
    FNSTSW AX                           ; 004c6f97
    SAHF                                ; 004c6f99
    JNC 0x004c6fa8                      ; 004c6f9a
        ;   XREF to: 004c6fa8 (CONDITIONAL_JUMP)  ; LAB_004c6fa8
    FLD float ptr [EBP + 0x6a]          ; 004c6f9c
    FADD float ptr [0x005e0ffc]         ; 004c6f9f | DAT_005e0ffc
    FSTP float ptr [EBP + 0x6a]         ; 004c6fa5
    FLD float ptr [EBP + 0x6a]          ; 004c6fa8
        ;   Label: LAB_004c6fa8
    FCOMP float ptr [0x005e1004]        ; 004c6fab | DAT_005e1004
    FNSTSW AX                           ; 004c6fb1
    SAHF                                ; 004c6fb3
    JBE 0x004c6fc2                      ; 004c6fb4
        ;   XREF to: 004c6fc2 (CONDITIONAL_JUMP)  ; LAB_004c6fc2
    FLD float ptr [EBP + 0x6a]          ; 004c6fb6
    FADD float ptr [0x005e1008]         ; 004c6fb9 | DAT_005e1008
    FSTP float ptr [EBP + 0x6a]         ; 004c6fbf
    FLD float ptr [EBP + 0x92]          ; 004c6fc2
        ;   Label: LAB_004c6fc2
    FMUL float ptr [0x005e0ffc]         ; 004c6fc8 | DAT_005e0ffc
    FLD float ptr [EBP + 0x6a]          ; 004c6fce
    FXCH                                ; 004c6fd1
    FST float ptr [EBP + 0x5a]          ; 004c6fd3
    FCHS                                ; 004c6fd6
    FSTP float ptr [EBP + 0x46]         ; 004c6fd8
    FCOMP float ptr [EBP + 0x46]        ; 004c6fdb
    FNSTSW AX                           ; 004c6fde
    SAHF                                ; 004c6fe0
    JNC 0x004c6fe9                      ; 004c6fe1
        ;   XREF to: 004c6fe9 (CONDITIONAL_JUMP)  ; LAB_004c6fe9
    MOV EAX,dword ptr [EBP + 0x46]      ; 004c6fe3
    MOV dword ptr [EBP + 0x6a],EAX      ; 004c6fe6
    FLD float ptr [EBP + 0x6a]          ; 004c6fe9
        ;   Label: LAB_004c6fe9
    FCOMP float ptr [EBP + 0x5a]        ; 004c6fec
    FNSTSW AX                           ; 004c6fef
    SAHF                                ; 004c6ff1
    JBE 0x004c6ffa                      ; 004c6ff2
        ;   XREF to: 004c6ffa (CONDITIONAL_JUMP)  ; LAB_004c6ffa
    MOV EAX,dword ptr [EBP + 0x5a]      ; 004c6ff4
    MOV dword ptr [EBP + 0x6a],EAX      ; 004c6ff7
    FLD float ptr [EBX + 0x34]          ; 004c6ffa
        ;   Label: LAB_004c6ffa
    FADD float ptr [EBP + 0x6a]         ; 004c6ffd
    PUSH EBX                            ; 004c7000
    FSTP float ptr [EBX + 0x34]         ; 004c7001
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 004c7004
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c7009
    MOV EAX,dword ptr [EBX + 0x26fc]    ; 004c700c
        ;   Label: LAB_004c700c
    MOV dword ptr [EBP + 0x2e],EAX      ; 004c7012
    MOV EAX,dword ptr [EAX + 0x154]     ; 004c7015
    PUSH 0x0                            ; 004c701b
    MOV dword ptr [EBP + 0x76],EAX      ; 004c701d
    LEA EAX,[EBX + 0x158]               ; 004c7020
    PUSH EAX                            ; 004c7026
    LEA ESI,[EBP + -0x2a]               ; 004c7027
    MOV dword ptr [EBP + 0x56],EAX      ; 004c702a
    CALL core_skeleton.cpp_FUN_00569130 ; 004c702d
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    ADD ESP,0x8                         ; 004c7032
    LEA EAX,[EBP + 0xfffffdf6]          ; 004c7035
    PUSH EAX                            ; 004c703b
    LEA EDI,[EBP + 0xfffffdf6]          ; 004c703c
    LEA ESI,[EBP + -0x2a]               ; 004c7042
    PUSH EBX                            ; 004c7045
    MOV EDX,dword ptr [EBP + 0x2e]      ; 004c7046
    MOV EAX,dword ptr [EBP + 0x76]      ; 004c7049
    PUSH EDX                            ; 004c704c
    MOVSD ES:EDI,ESI                    ; 004c704d
    MOVSD ES:EDI,ESI                    ; 004c704e
    MOVSD ES:EDI,ESI                    ; 004c704f
    CALL dword ptr [EAX + 0x110]        ; 004c7050
    ADD ESP,0xc                         ; 004c7056
    TEST EAX,EAX                        ; 004c7059
    JZ 0x004c7080                       ; 004c705b
        ;   XREF to: 004c7080 (CONDITIONAL_JUMP)  ; LAB_004c7080
    CMP dword ptr [EBX + 0x26fc],0x0    ; 004c705d
    JZ 0x004c7086                       ; 004c7064
        ;   XREF to: 004c7086 (CONDITIONAL_JUMP)  ; LAB_004c7086
    CMP dword ptr [EBX + 0xc1e4],0x0    ; 004c7066
    JZ 0x004c6997                       ; 004c706d
        ;   XREF to: 004c6997 (CONDITIONAL_JUMP)  ; LAB_004c6997
    PUSH 0x1                            ; 004c7073
    PUSH 0x7                            ; 004c7075
    MOV EDI,dword ptr [EBP + 0x56]      ; 004c7077
    PUSH EDI                            ; 004c707a
    JMP 0x004c698f                      ; 004c707b
        ;   XREF to: 004c698f (UNCONDITIONAL_JUMP)  ; LAB_004c698f
    MOV dword ptr [EBX + 0x26fc],EAX    ; 004c7080
        ;   Label: LAB_004c7080
    PUSH 0x1                            ; 004c7086
        ;   Label: LAB_004c7086
    PUSH 0x0                            ; 004c7088
    JMP 0x004c6988                      ; 004c708a
        ;   XREF to: 004c6988 (UNCONDITIONAL_JUMP)  ; LAB_004c6988
    MOV ESI,dword ptr [EBX + 0x1ff7c]   ; 004c708f
        ;   Label: LAB_004c708f
    TEST ESI,ESI                        ; 004c7095
    JZ 0x004c7328                       ; 004c7097
        ;   XREF to: 004c7328 (CONDITIONAL_JUMP)  ; LAB_004c7328
    MOV EAX,dword ptr [EBX + 0xc1e4]    ; 004c709d
    MOV dword ptr [EBP + 0x36],EDX      ; 004c70a3
    TEST EAX,EAX                        ; 004c70a6
    JNZ 0x004c70d5                      ; 004c70a8
        ;   XREF to: 004c70d5 (CONDITIONAL_JUMP)  ; LAB_004c70d5
    MOV ESI,dword ptr [EBP + 0x36]      ; 004c70aa
        ;   Label: LAB_004c70aa
    TEST ESI,ESI                        ; 004c70ad
    JNZ 0x004c6997                      ; 004c70af
        ;   XREF to: 004c6997 (CONDITIONAL_JUMP)  ; LAB_004c6997
    PUSH 0x1                            ; 004c70b5
    PUSH ESI                            ; 004c70b7
    LEA EAX,[EBX + 0x158]               ; 004c70b8
    PUSH EAX                            ; 004c70be
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004c70bf
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c70c4
    PUSH EBX                            ; 004c70c7
    CALL core_hero.cpp_FUN_004ebbe0     ; 004c70c8
        ;   XREF to: 004ebbe0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_FUN_004ebbe0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004c70cd
    JMP 0x004c6997                      ; 004c70d0
        ;   XREF to: 004c6997 (UNCONDITIONAL_JUMP)  ; LAB_004c6997
    PUSH ESI                            ; 004c70d5
        ;   Label: LAB_004c70d5
    MOV EDI,dword ptr [ESI + 0x154]     ; 004c70d6
    LEA ESI,[EBP + 0xfffffdc6]          ; 004c70dc
    CALL dword ptr [EDI + 0x1c]         ; 004c70e2
    MOV ECX,0x6                         ; 004c70e5
    LEA EDI,[EBP + 0xfffffdae]          ; 004c70ea
    LEA ESI,[EBP + 0xfffffdc6]          ; 004c70f0
    MOVSD.REP ES:EDI,ESI                ; 004c70f6
    FLD float ptr [EBP + 0xfffffdae]    ; 004c70f8
    FLD float ptr [EBP + 0xfffffdb2]    ; 004c70fe
    FLD float ptr [EBP + 0xfffffdb6]    ; 004c7104
    LEA EDI,[EBP + -0x5a]               ; 004c710a
    LEA ESI,[EBP + -0x66]               ; 004c710d
    FXCH ST2                            ; 004c7110
    FADD float ptr [EBP + 0xfffffdba]   ; 004c7112
    FXCH                                ; 004c7118
    FADD float ptr [EBP + 0xfffffdbe]   ; 004c711a
    FXCH ST2                            ; 004c7120
    FADD float ptr [EBP + 0xfffffdc2]   ; 004c7122
    FXCH                                ; 004c7128
    FSTP float ptr [EBP + -0x66]        ; 004c712a
    FXCH                                ; 004c712d
    FSTP float ptr [EBP + -0x62]        ; 004c712f
    FSTP float ptr [EBP + -0x5e]        ; 004c7132
    MOVSD ES:EDI,ESI                    ; 004c7135
    MOVSD ES:EDI,ESI                    ; 004c7136
    MOVSD ES:EDI,ESI                    ; 004c7137
    FLD float ptr [EBP + -0x5a]         ; 004c7138
    FMUL float ptr [0x005e0fe0]         ; 004c713b | DAT_005e0fe0
    FLD float ptr [EBP + -0x56]         ; 004c7141
    FMUL float ptr [0x005e0fe0]         ; 004c7144 | DAT_005e0fe0
    FLD float ptr [EBP + -0x52]         ; 004c714a
    FMUL float ptr [0x005e0fe0]         ; 004c714d | DAT_005e0fe0
    LEA EAX,[EBP + 0xfffffec2]          ; 004c7153
    ADD ESP,0x4                         ; 004c7159
    LEA EDI,[EBP + 0xfffffec2]          ; 004c715c
    LEA ESI,[EBP + 0xfffffe92]          ; 004c7162
    FXCH ST2                            ; 004c7168
    FSTP float ptr [EBP + 0xfffffe92]   ; 004c716a
    FSTP float ptr [EBP + 0xfffffe96]   ; 004c7170
    FSTP float ptr [EBP + 0xfffffe9a]   ; 004c7176
    MOVSD ES:EDI,ESI                    ; 004c717c
    MOVSD ES:EDI,ESI                    ; 004c717d
    MOVSD ES:EDI,ESI                    ; 004c717e
    PUSH EAX                            ; 004c717f
    MOV EDX,dword ptr [EBX + 0x1ff7c]   ; 004c7180
    PUSH EDX                            ; 004c7186
    LEA ESI,[EBP + 0xffffff22]          ; 004c7187
    LEA EDI,[EBP + 0xfffffeb6]          ; 004c718d
    CALL core_actor.cpp_FUN_00408b40    ; 004c7193
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004c7198
    LEA EAX,[EBP + 0xfffffeb6]          ; 004c719b
    LEA ESI,[EBP + 0xffffff22]          ; 004c71a1
    PUSH EAX                            ; 004c71a7
    MOVSD ES:EDI,ESI                    ; 004c71a8
    MOVSD ES:EDI,ESI                    ; 004c71a9
    MOVSD ES:EDI,ESI                    ; 004c71aa
    PUSH EBX                            ; 004c71ab
    LEA ESI,[EBP + 0xfffffe7a]          ; 004c71ac
    LEA EDI,[EBP + 0xfffffee6]          ; 004c71b2
    CALL core_actor.cpp_FUN_00408bb0    ; 004c71b8
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[EBP + 0xfffffe7a]          ; 004c71bd
    LEA EAX,[EBP + 0xfffffee6]          ; 004c71c3
    ADD ESP,0x8                         ; 004c71c9
    MOVSD ES:EDI,ESI                    ; 004c71cc
    MOVSD ES:EDI,ESI                    ; 004c71cd
    MOVSD ES:EDI,ESI                    ; 004c71ce
    PUSH EAX                            ; 004c71cf
    LEA ESI,[EBP + 0xfffffe86]          ; 004c71d0
    LEA EDI,[EBP + 0xfffffefe]          ; 004c71d6
    CALL core_vecdir.cpp_FUN_005a7520   ; 004c71dc
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005a7520()
    LEA ESI,[EBP + 0xfffffe86]          ; 004c71e1
    ADD ESP,0x4                         ; 004c71e7
    MOVSD ES:EDI,ESI                    ; 004c71ea
    MOVSD ES:EDI,ESI                    ; 004c71eb
    MOVSD ES:EDI,ESI                    ; 004c71ec
    PUSH dword ptr [EBP + 0xffffff02]   ; 004c71ed
    CALL core_actor.cpp_FUN_0040cd60    ; 004c71f3
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cd60()
    FLD float ptr [EBP + 0xfffffdba]    ; 004c71f8
    FLD float ptr [EBP + 0xfffffdbe]    ; 004c71fe
    FLD float ptr [EBP + 0xfffffdc2]    ; 004c7204
    LEA EDI,[EBP + -0x6]                ; 004c720a
    LEA ESI,[EBP + -0x1e]               ; 004c720d
    FXCH ST2                            ; 004c7210
    FSUB float ptr [EBP + 0xfffffdae]   ; 004c7212
    FXCH                                ; 004c7218
    FSUB float ptr [EBP + 0xfffffdb2]   ; 004c721a
    FXCH ST2                            ; 004c7220
    FSUB float ptr [EBP + 0xfffffdb6]   ; 004c7222
    FXCH                                ; 004c7228
    FSTP float ptr [EBP + -0x1e]        ; 004c722a
    FXCH                                ; 004c722d
    FSTP float ptr [EBP + -0x1a]        ; 004c722f
    FSTP float ptr [EBP + -0x16]        ; 004c7232
    MOVSD ES:EDI,ESI                    ; 004c7235
    MOVSD ES:EDI,ESI                    ; 004c7236
    MOVSD ES:EDI,ESI                    ; 004c7237
    FLD float ptr [EBP + -0x6]          ; 004c7238
    FMUL float ptr [0x005e0fe0]         ; 004c723b | DAT_005e0fe0
    FLD float ptr [EBP + -0x2]          ; 004c7241
    FMUL float ptr [0x005e0fe0]         ; 004c7244 | DAT_005e0fe0
    FLD float ptr [EBP + 0x2]           ; 004c724a
    FMUL float ptr [0x005e0fe0]         ; 004c724d | DAT_005e0fe0
    LEA EDI,[EBP + -0x72]               ; 004c7253
    LEA ESI,[EBP + 0xffffff6a]          ; 004c7256
    FXCH ST2                            ; 004c725c
    FSTP float ptr [EBP + 0xffffff6a]   ; 004c725e
    FSTP float ptr [EBP + 0xffffff6e]   ; 004c7264
    FSTP float ptr [EBP + 0xffffff72]   ; 004c726a
    MOVSD ES:EDI,ESI                    ; 004c7270
    MOVSD ES:EDI,ESI                    ; 004c7271
    MOVSD ES:EDI,ESI                    ; 004c7272
    FLD float ptr [EBP + -0x72]         ; 004c7273
    FMUL ST0                            ; 004c7276
    FLD float ptr [EBP + -0x6a]         ; 004c7278
    FMUL ST0                            ; 004c727b
    FADDP                               ; 004c727d
    MOV dword ptr [EBP + 0x76],EAX      ; 004c727f
    FSQRT                               ; 004c7282
    ADD ESP,0x4                         ; 004c7284
    XOR ECX,ECX                         ; 004c7287
    MOV EAX,dword ptr [EBP + 0x76]      ; 004c7289
    MOV dword ptr [EBP + 0x62],EAX      ; 004c728c
    FSUBR float ptr [EBP + 0xfffffeee]  ; 004c728f
    MOV dword ptr [EBP + -0x6e],ECX     ; 004c7295
    FCOMP double ptr [0x005e0fe4]       ; 004c7298 | DAT_005e0fe4
    FNSTSW AX                           ; 004c729e
    SAHF                                ; 004c72a0
    JNC 0x004c70aa                      ; 004c72a1
        ;   XREF to: 004c70aa (CONDITIONAL_JUMP)  ; LAB_004c70aa
    FLD float ptr [EBP + 0xfffffeea]    ; 004c72a7
    FLD1                                ; 004c72ad
    FXCH                                ; 004c72af
    FSTP double ptr [EBP + 0x1e]        ; 004c72b1
    FCOMP double ptr [EBP + 0x1e]       ; 004c72b4
    FNSTSW AX                           ; 004c72b7
    SAHF                                ; 004c72b9
    JNC 0x004c70aa                      ; 004c72ba
        ;   XREF to: 004c70aa (CONDITIONAL_JUMP)  ; LAB_004c70aa
    FLD double ptr [EBP + 0x1e]         ; 004c72c0
    FCOMP double ptr [0x005e0fec]       ; 004c72c3 | DAT_005e0fec
    FNSTSW AX                           ; 004c72c9
    SAHF                                ; 004c72cb
    JNC 0x004c70aa                      ; 004c72cc
        ;   XREF to: 004c70aa (CONDITIONAL_JUMP)  ; LAB_004c70aa
    FLD float ptr [EBP + 0x62]          ; 004c72d2
    FABS                                ; 004c72d5
    FCOMP double ptr [0x005e0ff4]       ; 004c72d7 | DAT_005e0ff4
    FNSTSW AX                           ; 004c72dd
    SAHF                                ; 004c72df
    JNC 0x004c70aa                      ; 004c72e0
        ;   XREF to: 004c70aa (CONDITIONAL_JUMP)  ; LAB_004c70aa
    FLD float ptr [EBP + 0x92]          ; 004c72e6
    FMUL float ptr [0x005e0ffc]         ; 004c72ec | DAT_005e0ffc
    FST float ptr [EBP + 0x5e]          ; 004c72f2
    FCHS                                ; 004c72f5
    FCOMP float ptr [EBP + 0x62]        ; 004c72f7
    FNSTSW AX                           ; 004c72fa
    SAHF                                ; 004c72fc
    JA 0x004c731e                       ; 004c72fd
        ;   XREF to: 004c731e (CONDITIONAL_JUMP)  ; LAB_004c731e
    FLD float ptr [EBP + 0x62]          ; 004c72ff
        ;   Label: LAB_004c72ff
    FCOMP float ptr [EBP + 0x5e]        ; 004c7302
    FNSTSW AX                           ; 004c7305
    SAHF                                ; 004c7307
    JBE 0x004c7310                      ; 004c7308
        ;   XREF to: 004c7310 (CONDITIONAL_JUMP)  ; LAB_004c7310
    MOV EAX,dword ptr [EBP + 0x5e]      ; 004c730a
    MOV dword ptr [EBP + 0x62],EAX      ; 004c730d
    FLD float ptr [EBX + 0x34]          ; 004c7310
        ;   Label: LAB_004c7310
    FADD float ptr [EBP + 0x62]         ; 004c7313
    FSTP float ptr [EBX + 0x34]         ; 004c7316
    JMP 0x004c6997                      ; 004c7319
        ;   XREF to: 004c6997 (UNCONDITIONAL_JUMP)  ; LAB_004c6997
    FLD float ptr [EBP + 0x5e]          ; 004c731e
        ;   Label: LAB_004c731e
    FCHS                                ; 004c7321
    FSTP float ptr [EBP + 0x62]         ; 004c7323
    JMP 0x004c72ff                      ; 004c7326
        ;   XREF to: 004c72ff (UNCONDITIONAL_JUMP)  ; LAB_004c72ff
    PUSH dword ptr [EBP + 0x92]         ; 004c7328
        ;   Label: LAB_004c7328
    PUSH EBX                            ; 004c732e
    CALL core_charactr.cpp_FUN_00432240 ; 004c732f
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004c7334
    LEA ESI,[EBX + 0x158]               ; 004c7337
    TEST EAX,EAX                        ; 004c733d
    JZ 0x004c739b                       ; 004c733f
        ;   XREF to: 004c739b (CONDITIONAL_JUMP)  ; LAB_004c739b
    MOV EAX,dword ptr [EBX + 0x273c]    ; 004c7341
    CMP EAX,0x2                         ; 004c7347
    JNC 0x004c738b                      ; 004c734a
        ;   XREF to: 004c738b (CONDITIONAL_JUMP)  ; LAB_004c738b
    CMP EAX,0x1                         ; 004c734c
    JNZ 0x004c7086                      ; 004c734f
        ;   XREF to: 004c7086 (CONDITIONAL_JUMP)  ; LAB_004c7086
    PUSH EAX                            ; 004c7355
    PUSH EAX                            ; 004c7356
    PUSH ESI                            ; 004c7357
    JMP 0x004c698f                      ; 004c7358
        ;   XREF to: 004c698f (UNCONDITIONAL_JUMP)  ; LAB_004c698f
    PUSH 0x1                            ; 004c735d
        ;   Label: LAB_004c735d
    PUSH 0x0                            ; 004c735f
    PUSH ESI                            ; 004c7361
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004c7362
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c7367
    PUSH EBX                            ; 004c736a
    PUSH 0x5e0f85                       ; 004c736b | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x00611100]      ; 004c7370 | g_CConsolePtr
    PUSH ESI                            ; 004c7376 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004c7377
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    JMP 0x004c6994                      ; 004c737c
        ;   XREF to: 004c6994 (UNCONDITIONAL_JUMP)  ; LAB_004c6994
    PUSH 0x1                            ; 004c7381
        ;   Label: LAB_004c7381
    PUSH 0x2                            ; 004c7383
    PUSH ESI                            ; 004c7385
    JMP 0x004c698f                      ; 004c7386
        ;   XREF to: 004c698f (UNCONDITIONAL_JUMP)  ; LAB_004c698f
    JBE 0x004c7381                      ; 004c738b
        ;   XREF to: 004c7381 (CONDITIONAL_JUMP)  ; LAB_004c7381
        ;   Label: LAB_004c738b
    CMP EAX,0x3                         ; 004c738d
    JZ 0x004c735d                       ; 004c7390
        ;   XREF to: 004c735d (CONDITIONAL_JUMP)  ; LAB_004c735d
    PUSH 0x1                            ; 004c7392
    PUSH 0x0                            ; 004c7394
    JMP 0x004c6988                      ; 004c7396
        ;   XREF to: 004c6988 (UNCONDITIONAL_JUMP)  ; LAB_004c6988
    CMP dword ptr [EBP + 0x6e],0x0      ; 004c739b
        ;   Label: LAB_004c739b
    JNZ 0x004c6997                      ; 004c739f
        ;   XREF to: 004c6997 (CONDITIONAL_JUMP)  ; LAB_004c6997
    PUSH ESI                            ; 004c73a5
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004c73a6
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c73ab
    ADD ESP,0x4                         ; 004c73ae
    CMP EAX,0xe                         ; 004c73b1
    JNC 0x004c74d7                      ; 004c73b4
        ;   XREF to: 004c74d7 (CONDITIONAL_JUMP)  ; LAB_004c74d7
    CMP EAX,0x1                         ; 004c73ba
    JNC 0x004c750f                      ; 004c73bd
        ;   XREF to: 004c750f (CONDITIONAL_JUMP)  ; LAB_004c750f
    TEST EAX,EAX                        ; 004c73c3
    JNZ 0x004c6997                      ; 004c73c5
        ;   XREF to: 004c6997 (CONDITIONAL_JUMP)  ; LAB_004c6997
    CMP dword ptr [EBX + 0x2500],0x0    ; 004c73cb
        ;   Label: LAB_004c73cb
    JZ 0x004c6997                       ; 004c73d2
        ;   XREF to: 004c6997 (CONDITIONAL_JUMP)  ; LAB_004c6997
    MOV EDI,dword ptr [EBX + 0xc1d8]    ; 004c73d8
    XOR ESI,ESI                         ; 004c73de
    TEST EDI,EDI                        ; 004c73e0
    JZ 0x004c73f6                       ; 004c73e2
        ;   XREF to: 004c73f6 (CONDITIONAL_JUMP)  ; LAB_004c73f6
    CMP dword ptr [EBX + 0xc1e0],0x0    ; 004c73e4
    JZ 0x004c748b                       ; 004c73eb
        ;   XREF to: 004c748b (CONDITIONAL_JUMP)  ; LAB_004c748b
    MOV ESI,0x2                         ; 004c73f1
    CMP dword ptr [EBX + 0xc1dc],0x0    ; 004c73f6
        ;   Label: LAB_004c73f6
    JZ 0x004c7404                       ; 004c73fd
        ;   XREF to: 004c7404 (CONDITIONAL_JUMP)  ; LAB_004c7404
    MOV ESI,0x3                         ; 004c73ff
    FLD float ptr [EBX + 0xc200]        ; 004c7404
        ;   Label: LAB_004c7404
    FMUL float ptr [EBX + 0x2528]       ; 004c740a
    FLD float ptr [EBX + 0x2524]        ; 004c7410
    FLD float ptr [EBX + 0x250c]        ; 004c7416
    LEA EDI,[EBX + 0x158]               ; 004c741c
    FADD float ptr [EBP + 0x66]         ; 004c7422
    PUSH EDI                            ; 004c7425
    FXCH                                ; 004c7426
    FADD float ptr [EBX + 0x2514]       ; 004c7428
    FXCH ST2                            ; 004c742e
    FSTP float ptr [EBX + 0x2508]       ; 004c7430
    FXCH                                ; 004c7436
    FSTP float ptr [EBX + 0x2514]       ; 004c7438
    FSTP float ptr [EBX + 0x250c]       ; 004c743e
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004c7444
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c7449
    ADD ESP,0x4                         ; 004c744c
    CMP ESI,EAX                         ; 004c744f
    JZ 0x004c745f                       ; 004c7451
        ;   XREF to: 004c745f (CONDITIONAL_JUMP)  ; LAB_004c745f
    PUSH 0x1                            ; 004c7453
    PUSH ESI                            ; 004c7455
    PUSH EDI                            ; 004c7456
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004c7457
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c745c
    CMP dword ptr [EBX + 0xc1e8],0x0    ; 004c745f
        ;   Label: LAB_004c745f
    JZ 0x004c6997                       ; 004c7466
        ;   XREF to: 004c6997 (CONDITIONAL_JUMP)  ; LAB_004c6997
    PUSH EBX                            ; 004c746c
    CALL core_gabriela.cpp_FUN_004c9500 ; 004c746d
        ;   XREF to: 004c9500 (UNCONDITIONAL_CALL)  ; int core_gabriela.cpp_FUN_004c9500(CGabriella * this_ptr)
    ADD ESP,0x4                         ; 004c7472
    TEST EAX,EAX                        ; 004c7475
    JNZ 0x004c6997                      ; 004c7477
        ;   XREF to: 004c6997 (CONDITIONAL_JUMP)  ; LAB_004c6997
    PUSH EBX                            ; 004c747d
    CALL core_gabriela.cpp_FUN_004c9eb0 ; 004c747e
        ;   XREF to: 004c9eb0 (UNCONDITIONAL_CALL)  ; int core_gabriela.cpp_FUN_004c9eb0(CGabriella * this_ptr)
    ADD ESP,0x4                         ; 004c7483
    JMP 0x004c6997                      ; 004c7486
        ;   XREF to: 004c6997 (UNCONDITIONAL_JUMP)  ; LAB_004c6997
    MOV ESI,0x1                         ; 004c748b
        ;   Label: LAB_004c748b
    JMP 0x004c73f6                      ; 004c7490
        ;   XREF to: 004c73f6 (UNCONDITIONAL_JUMP)  ; LAB_004c73f6
    MOV EAX,[0x007c33e0]                ; 004c7495 | g_CAmmoBoxClassInfo.name_hash
        ;   Label: LAB_004c7495
    PUSH EAX                            ; 004c749a
    MOV EDX,dword ptr [EBX + 0x1ff78]   ; 004c749b
    PUSH EDX                            ; 004c74a1
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004c74a2
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV EDI,EAX                         ; 004c74a7
    ADD ESP,0x8                         ; 004c74a9
    TEST EAX,EAX                        ; 004c74ac
    JZ 0x004c6997                       ; 004c74ae
        ;   XREF to: 004c6997 (CONDITIONAL_JUMP)  ; LAB_004c6997
    PUSH ESI                            ; 004c74b4
    CALL core_motion.cpp_FUN_00525020   ; 004c74b5
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004c74ba
    MOV dword ptr [EBP + 0x76],EAX      ; 004c74bd
    SUB ESP,0x4                         ; 004c74c0
    MOV EAX,dword ptr [EBP + 0x76]      ; 004c74c3
    MOV dword ptr [ESP],EAX             ; 004c74c6
    PUSH EDI                            ; 004c74c9
    CALL core_ammobox.cpp_FUN_0040e1a0  ; 004c74ca
        ;   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)  ; void core_ammobox.cpp_FUN_0040e1a0(CAmmoBox * this_ptr, float open_pct)
    ADD ESP,0x8                         ; 004c74cf
    JMP 0x004c6997                      ; 004c74d2
        ;   XREF to: 004c6997 (UNCONDITIONAL_JUMP)  ; LAB_004c6997
    JBE 0x004c7495                      ; 004c74d7
        ;   XREF to: 004c7495 (CONDITIONAL_JUMP)  ; LAB_004c7495
        ;   Label: LAB_004c74d7
    CMP EAX,0x11                        ; 004c74d9
    JNC 0x004c74ec                      ; 004c74dc
        ;   XREF to: 004c74ec (CONDITIONAL_JUMP)  ; LAB_004c74ec
    CMP EAX,0x10                        ; 004c74de
    JZ 0x004c73cb                       ; 004c74e1
        ;   XREF to: 004c73cb (CONDITIONAL_JUMP)  ; LAB_004c73cb
    JMP 0x004c6997                      ; 004c74e7
        ;   XREF to: 004c6997 (UNCONDITIONAL_JUMP)  ; LAB_004c6997
    JBE 0x004c73cb                      ; 004c74ec
        ;   XREF to: 004c73cb (CONDITIONAL_JUMP)  ; LAB_004c73cb
        ;   Label: LAB_004c74ec
    CMP EAX,0x14                        ; 004c74f2
    JC 0x004c6997                       ; 004c74f5
        ;   XREF to: 004c6997 (CONDITIONAL_JUMP)  ; LAB_004c6997
    JBE 0x004c73cb                      ; 004c74fb
        ;   XREF to: 004c73cb (CONDITIONAL_JUMP)  ; LAB_004c73cb
    CMP EAX,0x15                        ; 004c7501
    JZ 0x004c73cb                       ; 004c7504
        ;   XREF to: 004c73cb (CONDITIONAL_JUMP)  ; LAB_004c73cb
    JMP 0x004c6997                      ; 004c750a
        ;   XREF to: 004c6997 (UNCONDITIONAL_JUMP)  ; LAB_004c6997
    JBE 0x004c73cb                      ; 004c750f
        ;   XREF to: 004c73cb (CONDITIONAL_JUMP)  ; LAB_004c73cb
        ;   Label: LAB_004c750f
    CMP EAX,0x2                         ; 004c7515
    JBE 0x004c73cb                      ; 004c7518
        ;   XREF to: 004c73cb (CONDITIONAL_JUMP)  ; LAB_004c73cb
    CMP EAX,0x3                         ; 004c751e
    JZ 0x004c73cb                       ; 004c7521
        ;   XREF to: 004c73cb (CONDITIONAL_JUMP)  ; LAB_004c73cb
    JMP 0x004c6997                      ; 004c7527
        ;   XREF to: 004c6997 (UNCONDITIONAL_JUMP)  ; LAB_004c6997
    CMP dword ptr [EBP + 0x6e],0x0      ; 004c752c
        ;   Label: LAB_004c752c
    JNZ 0x004c763c                      ; 004c7530
        ;   XREF to: 004c763c (CONDITIONAL_JUMP)  ; LAB_004c763c
    LEA EDI,[EBP + 0xfffffdea]          ; 004c7536
        ;   Label: LAB_004c7536
    LEA EAX,[EBX + 0x158]               ; 004c753c
    LEA ESI,[EBX + 0x250c]              ; 004c7542
    PUSH EAX                            ; 004c7548
    MOVSD ES:EDI,ESI                    ; 004c7549
    MOVSD ES:EDI,ESI                    ; 004c754a
    MOVSD ES:EDI,ESI                    ; 004c754b
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004c754c
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c7551
    ADD ESP,0x4                         ; 004c7554
    CMP EAX,0x3                         ; 004c7557
    JNC 0x004c7669                      ; 004c755a
        ;   XREF to: 004c7669 (CONDITIONAL_JUMP)  ; LAB_004c7669
    CMP EAX,0x1                         ; 004c7560
    JNC 0x004c759f                      ; 004c7563
        ;   XREF to: 004c759f (CONDITIONAL_JUMP)  ; LAB_004c759f
    TEST EAX,EAX                        ; 004c7565
    JZ 0x004c759f                       ; 004c7567
        ;   XREF to: 004c759f (CONDITIONAL_JUMP)  ; LAB_004c759f
        ;   Label: LAB_004c7567
    LEA EAX,[EBX + 0x249c]              ; 004c7569
        ;   Label: LAB_004c7569
    FLD float ptr [EBP + 0xfffffdea]    ; 004c756f
    FADD float ptr [EAX]                ; 004c7575
    FLD float ptr [EBP + 0xfffffdee]    ; 004c7577
    FXCH                                ; 004c757d
    FSTP float ptr [EBP + 0xfffffdea]   ; 004c757f
    FADD float ptr [EAX + 0x4]          ; 004c7585
    FLD float ptr [EBP + 0xfffffdf2]    ; 004c7588
    FXCH                                ; 004c758e
    FSTP float ptr [EBP + 0xfffffdee]   ; 004c7590
    FADD float ptr [EAX + 0x8]          ; 004c7596
    FSTP float ptr [EBP + 0xfffffdf2]   ; 004c7599
    PUSH dword ptr [EBP + 0x92]         ; 004c759f
        ;   Label: LAB_004c759f
    PUSH EBX                            ; 004c75a5
    CALL core_charactr.cpp_FUN_0042d700 ; 004c75a6
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    LEA EAX,[EBX + 0x2518]              ; 004c75ab
    FLD float ptr [EAX]                 ; 004c75b1
    FMUL float ptr [EBP + 0x92]         ; 004c75b3
    FLD float ptr [EAX + 0x4]           ; 004c75b9
    FMUL float ptr [EBP + 0x92]         ; 004c75bc
    FLD float ptr [EAX + 0x8]           ; 004c75c2
    FMUL float ptr [EBP + 0x92]         ; 004c75c5
    LEA EDI,[EBP + 0x12]                ; 004c75cb
    LEA ESI,[EBP + 0xfffffe02]          ; 004c75ce
    FLD float ptr [EBP + 0xfffffdea]    ; 004c75d4
    FLD float ptr [EBP + 0xfffffdee]    ; 004c75da
    FLD float ptr [EBP + 0xfffffdf2]    ; 004c75e0
    ADD ESP,0x8                         ; 004c75e6
    LEA EAX,[EBP + 0xfffffdea]          ; 004c75e9
    FXCH ST5                            ; 004c75ef
    FSTP float ptr [EBP + 0xfffffe02]   ; 004c75f1
    FXCH ST3                            ; 004c75f7
    FSTP float ptr [EBP + 0xfffffe06]   ; 004c75f9
    FXCH                                ; 004c75ff
    FSTP float ptr [EBP + 0xfffffe0a]   ; 004c7601
    PUSH EAX                            ; 004c7607
    MOVSD ES:EDI,ESI                    ; 004c7608
    MOVSD ES:EDI,ESI                    ; 004c7609
    MOVSD ES:EDI,ESI                    ; 004c760a
    PUSH EBX                            ; 004c760b
    FADD float ptr [EBP + 0x12]         ; 004c760c
    FXCH                                ; 004c760f
    FADD float ptr [EBP + 0x16]         ; 004c7611
    FXCH ST2                            ; 004c7614
    FADD float ptr [EBP + 0x1a]         ; 004c7616
    FXCH                                ; 004c7619
    FSTP float ptr [EBP + 0xfffffdea]   ; 004c761b
    FXCH                                ; 004c7621
    FSTP float ptr [EBP + 0xfffffdee]   ; 004c7623
    FSTP float ptr [EBP + 0xfffffdf2]   ; 004c7629
    CALL core_charactr.cpp_FUN_0042d750 ; 004c762f
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004c7634
    JMP 0x004c6a10                      ; 004c7637
        ;   XREF to: 004c6a10 (UNCONDITIONAL_JUMP)  ; LAB_004c6a10
    LEA EAX,[EBX + 0x158]               ; 004c763c
        ;   Label: LAB_004c763c
    PUSH EAX                            ; 004c7642
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004c7643
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c7648
    ADD ESP,0x4                         ; 004c764b
    CMP EAX,0xd                         ; 004c764e
    JZ 0x004c7536                       ; 004c7651
        ;   XREF to: 004c7536 (CONDITIONAL_JUMP)  ; LAB_004c7536
    CMP dword ptr [EBX + 0xdc],0x0      ; 004c7657
    JNZ 0x004c7536                      ; 004c765e
        ;   XREF to: 004c7536 (CONDITIONAL_JUMP)  ; LAB_004c7536
    JMP 0x004c6a10                      ; 004c7664
        ;   XREF to: 004c6a10 (UNCONDITIONAL_JUMP)  ; LAB_004c6a10
    JBE 0x004c759f                      ; 004c7669
        ;   XREF to: 004c759f (CONDITIONAL_JUMP)  ; LAB_004c759f
        ;   Label: LAB_004c7669
    CMP EAX,0x11                        ; 004c766f
    JNC 0x004c767c                      ; 004c7672
        ;   XREF to: 004c767c (CONDITIONAL_JUMP)  ; LAB_004c767c
    CMP EAX,0x10                        ; 004c7674
    JMP 0x004c7567                      ; 004c7677
        ;   XREF to: 004c7567 (UNCONDITIONAL_JUMP)  ; LAB_004c7567
    JBE 0x004c759f                      ; 004c767c
        ;   XREF to: 004c759f (CONDITIONAL_JUMP)  ; LAB_004c759f
        ;   Label: LAB_004c767c
    CMP EAX,0x14                        ; 004c7682
    JC 0x004c7569                       ; 004c7685
        ;   XREF to: 004c7569 (CONDITIONAL_JUMP)  ; LAB_004c7569
    JBE 0x004c759f                      ; 004c768b
        ;   XREF to: 004c759f (CONDITIONAL_JUMP)  ; LAB_004c759f
    CMP EAX,0x15                        ; 004c7691
    JMP 0x004c7567                      ; 004c7694
        ;   XREF to: 004c7567 (UNCONDITIONAL_JUMP)  ; LAB_004c7567
    CMP dword ptr [EBX + 0xc1f0],0x0    ; 004c7699
        ;   Label: LAB_004c7699
    JZ 0x004c6a24                       ; 004c76a0
        ;   XREF to: 004c6a24 (CONDITIONAL_JUMP)  ; LAB_004c6a24
    LEA EAX,[EBX + 0x1fae8]             ; 004c76a6
    MOV EAX,dword ptr [EAX + 0x338]     ; 004c76ac
    TEST EAX,EAX                        ; 004c76b2
    JZ 0x004c6a24                       ; 004c76b4
        ;   XREF to: 004c6a24 (CONDITIONAL_JUMP)  ; LAB_004c6a24
    MOV AH,byte ptr [EBX + 0x1ffac]     ; 004c76ba
    TEST AH,0x3                         ; 004c76c0
    JZ 0x004c76d5                       ; 004c76c3
        ;   XREF to: 004c76d5 (CONDITIONAL_JUMP)  ; LAB_004c76d5
    MOV DH,AH                           ; 004c76c5
    AND DH,0xfc                         ; 004c76c7
    MOV byte ptr [EBX + 0x1ffac],DH     ; 004c76ca
    JMP 0x004c6a24                      ; 004c76d0
        ;   XREF to: 004c6a24 (UNCONDITIONAL_JUMP)  ; LAB_004c6a24
    MOV DL,AH                           ; 004c76d5
        ;   Label: LAB_004c76d5
    OR DL,0x2                           ; 004c76d7
    MOV byte ptr [EBX + 0x1ffac],DL     ; 004c76da
    JMP 0x004c6a24                      ; 004c76e0
        ;   XREF to: 004c6a24 (UNCONDITIONAL_JUMP)  ; LAB_004c6a24
    CMP dword ptr [EAX + 0x2330],0x0    ; 004c76e5
        ;   Label: LAB_004c76e5
    SETZ AL                             ; 004c76ec
    AND EAX,0xff                        ; 004c76ef
    MOV ECX,dword ptr [ESI + 0x678]     ; 004c76f4
    MOV dword ptr [ESI + 0x2330],EAX    ; 004c76fa
    CMP ECX,0x1                         ; 004c7700
    JNZ 0x004c6a56                      ; 004c7703
        ;   XREF to: 004c6a56 (CONDITIONAL_JUMP)  ; LAB_004c6a56
    PUSH 0x5e0faf                       ; 004c7709 | = "flashlit.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c770e
    PUSH EBX                            ; 004c7714
    CALL dword ptr [EAX + 0x2c]         ; 004c7715
    ADD ESP,0x8                         ; 004c7718
    JMP 0x004c6a56                      ; 004c771b
        ;   XREF to: 004c6a56 (UNCONDITIONAL_JUMP)  ; LAB_004c6a56
    FLD float ptr [EBP + 0x92]          ; 004c7720
        ;   Label: LAB_004c7720
    FDIV float ptr [0x00600d4c]         ; 004c7726 | DAT_00600d4c
    FSUBR float ptr [EBX + 0x1ffb0]     ; 004c772c
    FST float ptr [EBX + 0x1ffb0]       ; 004c7732
    FLDZ                                ; 004c7738
    FCOMPP                              ; 004c773a
    FNSTSW AX                           ; 004c773c
    SAHF                                ; 004c773e
    JBE 0x004c6b17                      ; 004c773f
        ;   XREF to: 004c6b17 (CONDITIONAL_JUMP)  ; LAB_004c6b17
    MOV dword ptr [EBX + 0x1ffb0],0x0   ; 004c7745
    JMP 0x004c6b17                      ; 004c774f
        ;   XREF to: 004c6b17 (UNCONDITIONAL_JUMP)  ; LAB_004c6b17
    FLD float ptr [EBP + 0x92]          ; 004c7754
        ;   Label: LAB_004c7754
    FDIV float ptr [0x00600d4c]         ; 004c775a | DAT_00600d4c
    MOV EAX,dword ptr [EBX + 0x1ffb4]   ; 004c7760
    MOV dword ptr [EBP + 0x52],EAX      ; 004c7766
    FSUBR float ptr [EBP + 0x52]        ; 004c7769
    FST float ptr [EBX + 0x1ffb4]       ; 004c776c
    FLDZ                                ; 004c7772
    FCOMPP                              ; 004c7774
    FNSTSW AX                           ; 004c7776
    SAHF                                ; 004c7778
    JBE 0x004c7785                      ; 004c7779
        ;   XREF to: 004c7785 (CONDITIONAL_JUMP)  ; LAB_004c7785
    MOV dword ptr [EBX + 0x1ffb4],0x0   ; 004c777b
    FLD float ptr [0x00600d54]          ; 004c7785 | DAT_00600d54
        ;   Label: LAB_004c7785
    FADD double ptr [0x005e101c]        ; 004c778b | DAT_005e101c
    FLD float ptr [EBP + 0x52]          ; 004c7791
    FXCH                                ; 004c7794
    FSTP float ptr [EBP + 0x72]         ; 004c7796
    FCOMP float ptr [EBP + 0x72]        ; 004c7799
    FNSTSW AX                           ; 004c779c
    SAHF                                ; 004c779e
    JC 0x004c6b9f                       ; 004c779f
        ;   XREF to: 004c6b9f (CONDITIONAL_JUMP)  ; LAB_004c6b9f
    FLD float ptr [EBX + 0x1ffb4]       ; 004c77a5
    FCOMP float ptr [EBP + 0x72]        ; 004c77ab
    FNSTSW AX                           ; 004c77ae
    SAHF                                ; 004c77b0
    JNC 0x004c6b9f                      ; 004c77b1
        ;   XREF to: 004c6b9f (CONDITIONAL_JUMP)  ; LAB_004c6b9f
    PUSH 0x5e0fcd                       ; 004c77b7 | = "undraw-s.wav @ .7"
    JMP 0x004c6b92                      ; 004c77bc
        ;   XREF to: 004c6b92 (UNCONDITIONAL_JUMP)  ; LAB_004c6b92
    FLD float ptr [EBP + 0x92]          ; 004c77c1
        ;   Label: LAB_004c77c1
    FDIV float ptr [0x00600d4c]         ; 004c77c7 | DAT_00600d4c
    FSUBR float ptr [EBX + 0x1ffb8]     ; 004c77cd
    FST float ptr [EBX + 0x1ffb8]       ; 004c77d3
    FLDZ                                ; 004c77d9
    FCOMPP                              ; 004c77db
    FNSTSW AX                           ; 004c77dd
    SAHF                                ; 004c77df
    JBE 0x004c6bd7                      ; 004c77e0
        ;   XREF to: 004c6bd7 (CONDITIONAL_JUMP)  ; LAB_004c6bd7
    MOV dword ptr [EBX + 0x1ffb8],0x0   ; 004c77e6
    JMP 0x004c6bd7                      ; 004c77f0
        ;   XREF to: 004c6bd7 (UNCONDITIONAL_JUMP)  ; LAB_004c6bd7
    TEST ESI,ESI                        ; 004c77f5
        ;   Label: LAB_004c77f5
    JZ 0x004c7830                       ; 004c77f7
        ;   XREF to: 004c7830 (CONDITIONAL_JUMP)  ; LAB_004c7830
    CMP dword ptr [ESI + 0x2330],0x0    ; 004c77f9
    JZ 0x004c7830                       ; 004c7800
        ;   XREF to: 004c7830 (CONDITIONAL_JUMP)  ; LAB_004c7830
    LEA EAX,[EBX + 0x158]               ; 004c7802
    PUSH EAX                            ; 004c7808
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004c7809
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c780e
    ADD ESP,0x4                         ; 004c7811
    CMP EAX,0x5                         ; 004c7814
    JZ 0x004c7830                       ; 004c7817
        ;   XREF to: 004c7830 (CONDITIONAL_JUMP)  ; LAB_004c7830
    FLD float ptr [EBP + 0x92]          ; 004c7819
    FDIV float ptr [0x00600d48]         ; 004c781f | DAT_00600d48
    FADD float ptr [EBX + 0x1ffbc]      ; 004c7825
    JMP 0x004c6bf9                      ; 004c782b
        ;   XREF to: 004c6bf9 (UNCONDITIONAL_JUMP)  ; LAB_004c6bf9
    FLD float ptr [EBP + 0x92]          ; 004c7830
        ;   Label: LAB_004c7830
    FDIV float ptr [0x00600d4c]         ; 004c7836 | DAT_00600d4c
    JMP 0x004c6bf3                      ; 004c783c
        ;   XREF to: 004c6bf3 (UNCONDITIONAL_JUMP)  ; LAB_004c6bf3
    CMP dword ptr [EBX + 0xc1e4],0x0    ; 004c7841
        ;   Label: LAB_004c7841
    JZ 0x004c6c79                       ; 004c7848
        ;   XREF to: 004c6c79 (CONDITIONAL_JUMP)  ; LAB_004c6c79
    CMP dword ptr [EBX + 0x1ffc4],0x0   ; 004c784e
    JNZ 0x004c6c79                      ; 004c7855
        ;   XREF to: 004c6c79 (CONDITIONAL_JUMP)  ; LAB_004c6c79
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 004c785b
    JZ 0x004c7873                       ; 004c7862
        ;   XREF to: 004c7873 (CONDITIONAL_JUMP)  ; LAB_004c7873
    MOV dword ptr [EBX + 0x1ffc4],0x3   ; 004c7864
    JMP 0x004c6c79                      ; 004c786e
        ;   XREF to: 004c6c79 (UNCONDITIONAL_JUMP)  ; LAB_004c6c79
    FLD float ptr [EBX + 0x1ffb4]       ; 004c7873
        ;   Label: LAB_004c7873
    FLDZ                                ; 004c7879
    FCOMPP                              ; 004c787b
    FNSTSW AX                           ; 004c787d
    SAHF                                ; 004c787f
    JC 0x004c6c79                       ; 004c7880
        ;   XREF to: 004c6c79 (CONDITIONAL_JUMP)  ; LAB_004c6c79
    PUSH EBX                            ; 004c7886
    CALL core_hero.cpp_CHero_tryInteract_FUN_004eb090 ; 004c7887
        ;   XREF to: 004eb090 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryInteract_FUN_004eb090(CHero * this_ptr)
    ADD ESP,0x4                         ; 004c788c
    TEST EAX,EAX                        ; 004c788f
    JNZ 0x004c6c79                      ; 004c7891
        ;   XREF to: 004c6c79 (CONDITIONAL_JUMP)  ; LAB_004c6c79
    PUSH ESI                            ; 004c7897
    PUSH EBX                            ; 004c7898
    CALL core_hero.cpp_FUN_004eb3e0     ; 004c7899
        ;   XREF to: 004eb3e0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb3e0()
    ADD ESP,0x8                         ; 004c789e
    MOV ESI,EAX                         ; 004c78a1
    CMP EAX,0x3                         ; 004c78a3
    JA 0x004c78c4                       ; 004c78a6
        ;   XREF to: 004c78c4 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4c65dc]  ; 004c78a8 | caseD_1 | caseD_3 | switchdataD_004c65dc
        ;   Label: switchD
    PUSH 0x1                            ; 004c78af
        ;   Label: caseD_2
    PUSH 0x12                           ; 004c78b1
    LEA EAX,[EBX + 0x158]               ; 004c78b3
    PUSH EAX                            ; 004c78b9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004c78ba
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c78bf
    JMP 0x004c78cd                      ; 004c78c2
        ;   XREF to: 004c78cd (UNCONDITIONAL_JUMP)  ; caseD_1
    PUSH EBX                            ; 004c78c4
        ;   Label: default
    CALL core_hero.cpp_FUN_004eb5e0     ; 004c78c5
        ;   XREF to: 004eb5e0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_FUN_004eb5e0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004c78ca
    TEST ESI,ESI                        ; 004c78cd
        ;   Label: caseD_0
    JNZ 0x004c6c79                      ; 004c78cf
        ;   XREF to: 004c6c79 (CONDITIONAL_JUMP)  ; LAB_004c6c79
    PUSH EBX                            ; 004c78d5
    CALL core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240 ; 004c78d6
        ;   XREF to: 004eb240 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240(CHero * this_ptr)
    ADD ESP,0x4                         ; 004c78db
    TEST EAX,EAX                        ; 004c78de
    JNZ 0x004c6c79                      ; 004c78e0
        ;   XREF to: 004c6c79 (CONDITIONAL_JUMP)  ; LAB_004c6c79
    PUSH EBX                            ; 004c78e6
    CALL core_hero.cpp_FUN_004eb890     ; 004c78e7
        ;   XREF to: 004eb890 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb890()
    ADD ESP,0x4                         ; 004c78ec
    TEST EAX,EAX                        ; 004c78ef
    JNZ 0x004c790e                      ; 004c78f1
        ;   XREF to: 004c790e (CONDITIONAL_JUMP)  ; LAB_004c790e
    PUSH EBX                            ; 004c78f3
    CALL core_hero.cpp_FUN_004eb660     ; 004c78f4
        ;   XREF to: 004eb660 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_FUN_004eb660(CHero * this_ptr)
    ADD ESP,0x4                         ; 004c78f9
    TEST EAX,EAX                        ; 004c78fc
    JZ 0x004c7926                       ; 004c78fe
        ;   XREF to: 004c7926 (CONDITIONAL_JUMP)  ; LAB_004c7926
    PUSH EBX                            ; 004c7900
    CALL core_hero.cpp_FUN_004eb7f0     ; 004c7901
        ;   XREF to: 004eb7f0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb7f0()
    ADD ESP,0x4                         ; 004c7906
    JMP 0x004c6c79                      ; 004c7909
        ;   XREF to: 004c6c79 (UNCONDITIONAL_JUMP)  ; LAB_004c6c79
    PUSH 0x1                            ; 004c790e
        ;   Label: LAB_004c790e
    PUSH 0xd                            ; 004c7910
    LEA EAX,[EBX + 0x158]               ; 004c7912
    PUSH EAX                            ; 004c7918
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004c7919
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c791e
    JMP 0x004c6c79                      ; 004c7921
        ;   XREF to: 004c6c79 (UNCONDITIONAL_JUMP)  ; LAB_004c6c79
    PUSH EBX                            ; 004c7926
        ;   Label: LAB_004c7926
    CALL core_gabriela.cpp_FUN_004c99e0 ; 004c7927
        ;   XREF to: 004c99e0 (UNCONDITIONAL_CALL)  ; int core_gabriela.cpp_FUN_004c99e0(CGabriella * this_ptr)
    ADD ESP,0x4                         ; 004c792c
    JMP 0x004c6c79                      ; 004c792f
        ;   XREF to: 004c6c79 (UNCONDITIONAL_JUMP)  ; LAB_004c6c79
    PUSH EBX                            ; 004c7934
        ;   Label: LAB_004c7934
    CALL core_hero.cpp_FUN_004ebbe0     ; 004c7935
        ;   XREF to: 004ebbe0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_FUN_004ebbe0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004c793a
    JMP 0x004c6ddf                      ; 004c793d
        ;   XREF to: 004c6ddf (UNCONDITIONAL_JUMP)  ; LAB_004c6ddf
    CMP dword ptr [EBX + 0xc1e4],0x0    ; 004c7942
        ;   Label: LAB_004c7942
    JZ 0x004c7a6a                       ; 004c7949
        ;   XREF to: 004c7a6a (CONDITIONAL_JUMP)  ; LAB_004c7a6a
    FLD float ptr [EBP + 0x92]          ; 004c794f
    FMUL double ptr [0x005e1034]        ; 004c7955 | DAT_005e1034
    FADD float ptr [EBX + 0x5ab1c]      ; 004c795b
    FST float ptr [EBX + 0x5ab1c]       ; 004c7961
    FCOMP float ptr [0x00600d90]        ; 004c7967 | DAT_00600d90
    FNSTSW AX                           ; 004c796d
    SAHF                                ; 004c796f
    JBE 0x004c7991                      ; 004c7970
        ;   XREF to: 004c7991 (CONDITIONAL_JUMP)  ; LAB_004c7991
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 004c7972
    MOV dword ptr [EBX + 0x1ffc4],0x2   ; 004c797c
    MOV EAX,[0x00600d90]                ; 004c7986 | DAT_00600d90
    MOV dword ptr [EBX + 0x5ab1c],EAX   ; 004c798b
    MOV EAX,dword ptr [EBX + 0x1ffdc]   ; 004c7991
        ;   Label: LAB_004c7991
    XOR ECX,ECX                         ; 004c7997
    MOV dword ptr [EBP + 0xfffffe9e],EAX ; 004c7999
    LEA EAX,[EBP + 0xfffffe9e]          ; 004c799f
    XOR ESI,ESI                         ; 004c79a5
    PUSH EAX                            ; 004c79a7
    LEA EAX,[EBP + 0xfffffd86]          ; 004c79a8
    XOR EDI,EDI                         ; 004c79ae
    PUSH EAX                            ; 004c79b0
    MOV dword ptr [EBP + 0xfffffea6],ECX ; 004c79b1
    MOV dword ptr [EBP + 0xfffffea2],ECX ; 004c79b7
    CALL core_dirmat.cpp_FUN_0045f3e0   ; 004c79bd
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV EAX,dword ptr [EBX + 0x5ab1c]   ; 004c79c2
    ADD ESP,0x8                         ; 004c79c8
    MOV dword ptr [EBP + 0xfffffed6],EAX ; 004c79cb
    LEA EAX,[EBP + 0xfffffece]          ; 004c79d1
    MOV dword ptr [EBP + 0xfffffece],EDI ; 004c79d7
    PUSH EAX                            ; 004c79dd
    LEA EAX,[EBP + 0xfffffd86]          ; 004c79de
    MOV dword ptr [EBP + 0xfffffed2],ESI ; 004c79e4
    PUSH EAX                            ; 004c79ea
    LEA ESI,[EBP + 0xffffff5e]          ; 004c79eb
    LEA EDI,[EBP + 0xfffffef2]          ; 004c79f1
    CALL core_dirmat.cpp_FUN_0045f690   ; 004c79f7
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    ADD ESP,0x8                         ; 004c79fc
    LEA EAX,[EBP + 0xfffffef2]          ; 004c79ff
    LEA ESI,[EBP + 0xffffff5e]          ; 004c7a05
    PUSH EAX                            ; 004c7a0b
    MOVSD ES:EDI,ESI                    ; 004c7a0c
    MOVSD ES:EDI,ESI                    ; 004c7a0d
    MOVSD ES:EDI,ESI                    ; 004c7a0e
    PUSH EBX                            ; 004c7a0f
    LEA ESI,[EBP + 0xffffff0a]          ; 004c7a10
    LEA EDI,[EBP + 0x6]                 ; 004c7a16
    CALL core_actor.cpp_FUN_00408ac0    ; 004c7a19
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[EBP + 0xffffff0a]          ; 004c7a1e
    MOVSD ES:EDI,ESI                    ; 004c7a24
    MOVSD ES:EDI,ESI                    ; 004c7a25
    MOVSD ES:EDI,ESI                    ; 004c7a26
    MOV ESI,dword ptr [EBP + 0x32]      ; 004c7a27
    LEA EAX,[EBP + 0x6]                 ; 004c7a2a
    ADD ESI,0x57c                       ; 004c7a2d
    ADD ESP,0x8                         ; 004c7a33
    CMP ESI,EAX                         ; 004c7a36
    JZ 0x004c7a4b                       ; 004c7a38
        ;   XREF to: 004c7a4b (CONDITIONAL_JUMP)  ; LAB_004c7a4b
    MOV EAX,dword ptr [EBP + 0x6]       ; 004c7a3a
    MOV dword ptr [ESI],EAX             ; 004c7a3d
    MOV EAX,dword ptr [EBP + 0xa]       ; 004c7a3f
    MOV dword ptr [ESI + 0x4],EAX       ; 004c7a42
    MOV EAX,dword ptr [EBP + 0xe]       ; 004c7a45
    MOV dword ptr [ESI + 0x8],EAX       ; 004c7a48
    CMP dword ptr [EBX + 0x1ffc4],0x2   ; 004c7a4b
        ;   Label: LAB_004c7a4b
    JZ 0x004c6e2d                       ; 004c7a52
        ;   XREF to: 004c6e2d (CONDITIONAL_JUMP)  ; LAB_004c6e2d
    CMP dword ptr [EBX + 0x1ffc4],0x1   ; 004c7a58
        ;   Label: LAB_004c7a58
    JZ 0x004c6e54                       ; 004c7a5f
        ;   XREF to: 004c6e54 (CONDITIONAL_JUMP)  ; LAB_004c6e54
    JMP 0x004c6e81                      ; 004c7a65
        ;   XREF to: 004c6e81 (UNCONDITIONAL_JUMP)  ; LAB_004c6e81
    MOV dword ptr [EBX + 0x1ffc4],0x2   ; 004c7a6a
        ;   Label: LAB_004c7a6a
    JMP 0x004c7991                      ; 004c7a74
        ;   XREF to: 004c7991 (UNCONDITIONAL_JUMP)  ; LAB_004c7991
    MOV dword ptr [EBX + 0xc1e4],ESI    ; 004c7a79
        ;   Label: LAB_004c7a79
    JMP 0x004c6e81                      ; 004c7a7f
        ;   XREF to: 004c6e81 (UNCONDITIONAL_JUMP)  ; LAB_004c6e81
    MOV dword ptr [EBX + 0xfc],0x1      ; 004c7a84
        ;   Label: LAB_004c7a84
    LEA ESP,[EBP + 0x7a]                ; 004c7a8e
    POP EBP                             ; 004c7a91
    POP EDI                             ; 004c7a92
    POP ESI                             ; 004c7a93
    POP EBX                             ; 004c7a94
    RET                                 ; 004c7a95


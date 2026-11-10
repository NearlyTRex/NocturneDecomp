; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gabriela_cpp_CGabriella_findAndPickupNearbyObject_FUN_004b05b0(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x100]:1  local_100
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined        Stack[-0xac]:1  local_ac
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined        Stack[-0x64]:1  local_64
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_process_FUN_004ad640 at 004ae4eb
;
; Referenced Globals:
;   TerminatedCString s_core_gabriela_cpp_005d7075
;   TerminatedCString s_Hell_froze_invalid_pickU_005d708a
;   undefined4 DAT_005d70b3
;   undefined4 DAT_005d70bb
;   WatcomTypeInfo g_CVectorTypeInfo
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_main.c_FUN_004e4500
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b05b0
        ;   Label: core_gabriela.cpp_CGabriella_findAndPickupNearbyObject_FUN_004b05b0
    PUSH ESI                            ; 004b05b1
    PUSH EDI                            ; 004b05b2
    PUSH EBP                            ; 004b05b3
    MOV EBP,ESP                         ; 004b05b4
    SUB ESP,0xf0                        ; 004b05b6
    AND ESP,0xfffffff8                  ; 004b05bc
    PUSH 0x5f22b0                       ; 004b05bf | g_CVectorTypeInfo
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b05c4
    PUSH 0x4                            ; 004b05c7
    MOV dword ptr [EAX + 0x25608],0x0   ; 004b05c9
    LEA EAX,[ESP + 0x8]                 ; 004b05d3
    PUSH EAX                            ; 004b05d7
    MOV EBX,0x3ff5c28f                  ; 004b05d8
    LEA EDI,[ESP + 0xcc]                ; 004b05dd
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 004b05e4
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    MOV EDX,0xbda3d70a                  ; 004b05e9
    MOV ECX,0x3ee147ae                  ; 004b05ee
    ADD ESP,0xc                         ; 004b05f3
    LEA EAX,[ESP + 0x60]                ; 004b05f6
    MOV ESI,dword ptr [EBP + 0x14]      ; 004b05fa
    PUSH EAX                            ; 004b05fd
    MOV dword ptr [ESP + 0x64],EDX      ; 004b05fe
    MOV dword ptr [ESP + 0x68],ECX      ; 004b0602
    PUSH ESI                            ; 004b0606
    LEA ESI,[ESP + 0x5c]                ; 004b0607
    MOV dword ptr [ESP + 0x70],EBX      ; 004b060b
    CALL core_actor.cpp_FUN_00408d70    ; 004b060f
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x5c]                ; 004b0614
    LEA EDX,[ESP + 0xc8]                ; 004b0618
    ADD ESP,0x8                         ; 004b061f
    LEA EAX,[ESP + 0xc]                 ; 004b0622
    MOVSD ES:EDI,ESI                    ; 004b0626
    MOVSD ES:EDI,ESI                    ; 004b0627
    MOVSD ES:EDI,ESI                    ; 004b0628
    CMP EAX,EDX                         ; 004b0629
    JZ 0x004b064e                       ; 004b062b
        ;   XREF to: 004b064e (CONDITIONAL_JUMP)  ; LAB_004b064e
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004b062d
    MOV dword ptr [ESP + 0xc],EAX       ; 004b0634
    MOV EAX,dword ptr [ESP + 0xc4]      ; 004b0638
    MOV dword ptr [ESP + 0x10],EAX      ; 004b063f
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004b0643
    MOV dword ptr [ESP + 0x14],EAX      ; 004b064a
    MOV EDI,0xbf266666                  ; 004b064e
        ;   Label: LAB_004b064e
    XOR EAX,EAX                         ; 004b0653
    MOV EDX,0x4007ae14                  ; 004b0655
    MOV dword ptr [ESP + 0xac],EAX      ; 004b065a
    LEA EAX,[ESP + 0xa8]                ; 004b0661
    MOV ECX,dword ptr [EBP + 0x14]      ; 004b0668
    PUSH EAX                            ; 004b066b
    LEA ESI,[ESP + 0xb8]                ; 004b066c
    MOV dword ptr [ESP + 0xac],EDI      ; 004b0673
    PUSH ECX                            ; 004b067a
    MOV dword ptr [ESP + 0xb8],EDX      ; 004b067b
    LEA EDI,[ESP + 0x38]                ; 004b0682
    CALL core_actor.cpp_FUN_00408d70    ; 004b0686
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0xbc]                ; 004b068b
    LEA EAX,[ESP + 0x38]                ; 004b0692
    ADD ESP,0x8                         ; 004b0696
    LEA EDX,[ESP + 0x18]                ; 004b0699
    MOVSD ES:EDI,ESI                    ; 004b069d
    MOVSD ES:EDI,ESI                    ; 004b069e
    MOVSD ES:EDI,ESI                    ; 004b069f
    CMP EDX,EAX                         ; 004b06a0
    JZ 0x004b06bc                       ; 004b06a2
        ;   XREF to: 004b06bc (CONDITIONAL_JUMP)  ; LAB_004b06bc
    MOV EAX,dword ptr [ESP + 0x30]      ; 004b06a4
    MOV dword ptr [ESP + 0x18],EAX      ; 004b06a8
    MOV EAX,dword ptr [ESP + 0x34]      ; 004b06ac
    MOV dword ptr [ESP + 0x1c],EAX      ; 004b06b0
    MOV EAX,dword ptr [ESP + 0x38]      ; 004b06b4
    MOV dword ptr [ESP + 0x20],EAX      ; 004b06b8
    MOV EDI,0x40000000                  ; 004b06bc
        ;   Label: LAB_004b06bc
    LEA EAX,[ESP + 0x90]                ; 004b06c1
    XOR EBX,EBX                         ; 004b06c8
    LEA ESI,[ESP + 0x9c]                ; 004b06ca
    MOV dword ptr [ESP + 0x90],EBX      ; 004b06d1
    PUSH EAX                            ; 004b06d8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b06d9
    MOV dword ptr [ESP + 0x98],EBX      ; 004b06dc
    PUSH EAX                            ; 004b06e3
    MOV dword ptr [ESP + 0xa0],EDI      ; 004b06e4
    LEA EDI,[ESP + 0x44]                ; 004b06eb
    CALL core_actor.cpp_FUN_00408d70    ; 004b06ef
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0xa4]                ; 004b06f4
    LEA EAX,[ESP + 0x44]                ; 004b06fb
    ADD ESP,0x8                         ; 004b06ff
    LEA EDX,[ESP + 0x24]                ; 004b0702
    MOVSD ES:EDI,ESI                    ; 004b0706
    MOVSD ES:EDI,ESI                    ; 004b0707
    MOVSD ES:EDI,ESI                    ; 004b0708
    CMP EDX,EAX                         ; 004b0709
    JNZ 0x004b0799                      ; 004b070b
        ;   XREF to: 004b0799 (CONDITIONAL_JUMP)  ; LAB_004b0799
    MOV EDX,0x40800000                  ; 004b0711
        ;   Label: LAB_004b0711
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b0716
    XOR ECX,ECX                         ; 004b0719
    MOV dword ptr [ESP + 0xd8],EDX      ; 004b071b
    MOV dword ptr [ESP + 0xe8],ECX      ; 004b0722
    ADD EAX,0x20                        ; 004b0729
    MOV dword ptr [ESP + 0xec],ECX      ; 004b072c
    MOV dword ptr [ESP + 0xd4],EAX      ; 004b0733
    MOV EAX,[0x0061b5a8]                ; 004b073a | g_CDemonSetPtr
        ;   Label: LAB_004b073a
    MOV EDX,dword ptr [ESP + 0xe8]      ; 004b073f
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 004b0746 | g_CDemonSetInstance.actor_count
    JGE 0x004b097e                      ; 004b074c
        ;   XREF to: 004b097e (CONDITIONAL_JUMP)  ; LAB_004b097e
    ADD EAX,dword ptr [ESP + 0xec]      ; 004b0752
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 004b0759 | g_CDemonSetInstance.actors[0]
    PUSH EBX                            ; 004b075f
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004b0760
    CALL dword ptr [EAX + 0x9c]         ; 004b0766
    ADD ESP,0x4                         ; 004b076c
    TEST EAX,EAX                        ; 004b076f
    JZ 0x004b093c                       ; 004b0771
        ;   XREF to: 004b093c (CONDITIONAL_JUMP)  ; LAB_004b093c
    MOV ESI,dword ptr [ESP + 0xe8]      ; 004b0777
        ;   Label: LAB_004b0777
    MOV EBX,dword ptr [ESP + 0xec]      ; 004b077e
    INC ESI                             ; 004b0785
    ADD EBX,0x4                         ; 004b0786
    MOV dword ptr [ESP + 0xe8],ESI      ; 004b0789
    MOV dword ptr [ESP + 0xec],EBX      ; 004b0790
    JMP 0x004b073a                      ; 004b0797
        ;   XREF to: 004b073a (UNCONDITIONAL_JUMP)  ; LAB_004b073a
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004b0799
        ;   Label: LAB_004b0799
    MOV dword ptr [ESP + 0x24],EAX      ; 004b079d
    MOV EAX,dword ptr [ESP + 0x40]      ; 004b07a1
    MOV dword ptr [ESP + 0x28],EAX      ; 004b07a5
    MOV EAX,dword ptr [ESP + 0x44]      ; 004b07a9
    MOV dword ptr [ESP + 0x2c],EAX      ; 004b07ad
    JMP 0x004b0711                      ; 004b07b1
        ;   XREF to: 004b0711 (UNCONDITIONAL_JUMP)  ; LAB_004b0711
    CMP dword ptr [ESI + 0x2620],0x0    ; 004b07b6
        ;   Label: LAB_004b07b6
    JNZ 0x004b0777                      ; 004b07bd
        ;   XREF to: 004b0777 (CONDITIONAL_JUMP)  ; LAB_004b0777
    MOV ECX,dword ptr [ESP + 0xe0]      ; 004b07bf
        ;   Label: LAB_004b07bf
    IMUL EDX,ECX,0xc                    ; 004b07c6
    MOV EAX,ESP                         ; 004b07c9
    ADD EAX,EDX                         ; 004b07cb
    LEA EDX,[EBX + 0x20]                ; 004b07cd
    LEA EDI,[ESP + 0x78]                ; 004b07d0
    LEA ESI,[ESP + 0x6c]                ; 004b07d4
    FLD float ptr [EDX]                 ; 004b07d8
    FLD float ptr [EDX + 0x4]           ; 004b07da
    FLD float ptr [EDX + 0x8]           ; 004b07dd
    FXCH ST2                            ; 004b07e0
    FSUB float ptr [EAX]                ; 004b07e2
    FXCH                                ; 004b07e4
    FSUB float ptr [EAX + 0x4]          ; 004b07e6
    FXCH ST2                            ; 004b07e9
    FSUB float ptr [EAX + 0x8]          ; 004b07eb
    FXCH                                ; 004b07ee
    FSTP float ptr [ESP + 0x6c]         ; 004b07f0
    FXCH                                ; 004b07f4
    FSTP float ptr [ESP + 0x70]         ; 004b07f6
    FSTP float ptr [ESP + 0x74]         ; 004b07fa
    MOVSD ES:EDI,ESI                    ; 004b07fe
    MOVSD ES:EDI,ESI                    ; 004b07ff
    MOVSD ES:EDI,ESI                    ; 004b0800
    FLD float ptr [ESP + 0x7c]          ; 004b0801
    FABS                                ; 004b0805
    FCOMP double ptr [0x005d70bb]       ; 004b0807 | DAT_005d70bb
    FNSTSW AX                           ; 004b080d
    SAHF                                ; 004b080f
    JA 0x004b0777                       ; 004b0810
        ;   XREF to: 004b0777 (CONDITIONAL_JUMP)  ; LAB_004b0777
    FLD float ptr [ESP + 0x80]          ; 004b0816
    FMUL ST0                            ; 004b081d
    FLD float ptr [ESP + 0x78]          ; 004b081f
    FMUL ST0                            ; 004b0823
    FADDP                               ; 004b0825
    FST float ptr [ESP + 0xdc]          ; 004b0827
    FCOMP float ptr [ESP + 0xd8]        ; 004b082e
    FNSTSW AX                           ; 004b0835
    SAHF                                ; 004b0837
    JA 0x004b0777                       ; 004b0838
        ;   XREF to: 004b0777 (CONDITIONAL_JUMP)  ; LAB_004b0777
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b083e
    MOV dword ptr [EAX + 0x25608],EBX   ; 004b0841
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004b0847
    MOV dword ptr [ESP + 0xcc],ECX      ; 004b084e
    MOV dword ptr [ESP + 0xd8],EAX      ; 004b0855
    JMP 0x004b0777                      ; 004b085c
        ;   XREF to: 004b0777 (UNCONDITIONAL_JUMP)  ; LAB_004b0777
    CMP dword ptr [ESI + 0x2620],0x0    ; 004b0861
        ;   Label: LAB_004b0861
    JNZ 0x004b0777                      ; 004b0868
        ;   XREF to: 004b0777 (CONDITIONAL_JUMP)  ; LAB_004b0777
    MOV ESI,dword ptr [ESP + 0xd4]      ; 004b086e
    PUSH ESI                            ; 004b0875
    PUSH EBX                            ; 004b0876
    LEA ESI,[ESP + 0x50]                ; 004b0877
    LEA EDI,[ESP + 0x8c]                ; 004b087b
    CALL core_actor.cpp_FUN_00408de0    ; 004b0882
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x50]                ; 004b0887
    ADD ESP,0x8                         ; 004b088b
    MOVSD ES:EDI,ESI                    ; 004b088e
    MOVSD ES:EDI,ESI                    ; 004b088f
    MOVSD ES:EDI,ESI                    ; 004b0890
    FLD float ptr [ESP + 0x88]          ; 004b0891
    FMUL ST0                            ; 004b0898
    FLD float ptr [ESP + 0x84]          ; 004b089a
    FMUL ST0                            ; 004b08a1
    FADDP                               ; 004b08a3
    FLD float ptr [ESP + 0x8c]          ; 004b08a5
    FMUL ST0                            ; 004b08ac
    FADDP                               ; 004b08ae
    FSQRT                               ; 004b08b0
    FLDZ                                ; 004b08b2
    FXCH                                ; 004b08b4
    FSTP float ptr [ESP + 0xe4]         ; 004b08b6
    FCOMP float ptr [ESP + 0xe4]        ; 004b08bd
    FNSTSW AX                           ; 004b08c4
    SAHF                                ; 004b08c6
    JNC 0x004b0923                      ; 004b08c7
        ;   XREF to: 004b0923 (CONDITIONAL_JUMP)  ; LAB_004b0923
    FLD1                                ; 004b08c9
    FLD float ptr [ESP + 0x84]          ; 004b08cb
    FXCH                                ; 004b08d2
    FDIV float ptr [ESP + 0xe4]         ; 004b08d4
    FXCH                                ; 004b08db
    FMUL ST1                            ; 004b08dd
    FLD float ptr [ESP + 0x88]          ; 004b08df
    FMUL ST2                            ; 004b08e6
    FLD float ptr [ESP + 0x8c]          ; 004b08e8
    FMULP ST3                           ; 004b08ef
    FXCH                                ; 004b08f1
    FSTP float ptr [ESP + 0x84]         ; 004b08f3
    FSTP float ptr [ESP + 0x88]         ; 004b08fa
    FSTP float ptr [ESP + 0x8c]         ; 004b0901
    FLD float ptr [ESP + 0x8c]          ; 004b0908
        ;   Label: LAB_004b0908
    FCOMP double ptr [0x005d70b3]       ; 004b090f | DAT_005d70b3
    FNSTSW AX                           ; 004b0915
    SAHF                                ; 004b0917
    JA 0x004b0777                       ; 004b0918
        ;   XREF to: 004b0777 (CONDITIONAL_JUMP)  ; LAB_004b0777
    JMP 0x004b07bf                      ; 004b091e
        ;   XREF to: 004b07bf (UNCONDITIONAL_JUMP)  ; LAB_004b07bf
    XOR EDI,EDI                         ; 004b0923
        ;   Label: LAB_004b0923
    MOV dword ptr [ESP + 0x88],EDI      ; 004b0925
    MOV dword ptr [ESP + 0x84],EDI      ; 004b092c
    MOV dword ptr [ESP + 0x8c],EDI      ; 004b0933
    JMP 0x004b0908                      ; 004b093a
        ;   XREF to: 004b0908 (UNCONDITIONAL_JUMP)  ; LAB_004b0908
    MOV ESI,dword ptr [EBP + 0x14]      ; 004b093c
        ;   Label: LAB_004b093c
    PUSH ESI                            ; 004b093f
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004b0940
    PUSH EBX                            ; 004b0946
    CALL dword ptr [EAX + 0x8c]         ; 004b0947
    ADD ESP,0x8                         ; 004b094d
    MOV dword ptr [ESP + 0xe0],EAX      ; 004b0950
    CMP EAX,0x2                         ; 004b0957
    JNC 0x004b096a                      ; 004b095a
        ;   XREF to: 004b096a (CONDITIONAL_JUMP)  ; LAB_004b096a
    CMP EAX,0x1                         ; 004b095c
    JZ 0x004b0861                       ; 004b095f
        ;   XREF to: 004b0861 (CONDITIONAL_JUMP)  ; LAB_004b0861
    JMP 0x004b0777                      ; 004b0965
        ;   XREF to: 004b0777 (UNCONDITIONAL_JUMP)  ; LAB_004b0777
    JBE 0x004b07b6                      ; 004b096a
        ;   XREF to: 004b07b6 (CONDITIONAL_JUMP)  ; LAB_004b07b6
        ;   Label: LAB_004b096a
    CMP EAX,0x3                         ; 004b0970
    JZ 0x004b07b6                       ; 004b0973
        ;   XREF to: 004b07b6 (CONDITIONAL_JUMP)  ; LAB_004b07b6
    JMP 0x004b0777                      ; 004b0979
        ;   XREF to: 004b0777 (UNCONDITIONAL_JUMP)  ; LAB_004b0777
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b097e
        ;   Label: LAB_004b097e
    MOV EDI,dword ptr [EAX + 0x25608]   ; 004b0981
    TEST EDI,EDI                        ; 004b0987
    JZ 0x004b09f6                       ; 004b0989
        ;   XREF to: 004b09f6 (CONDITIONAL_JUMP)  ; LAB_004b09f6
    MOV EDX,dword ptr [ESP + 0xcc]      ; 004b098b
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b0992
    MOV EBX,EDI                         ; 004b0999
    SUB EAX,EDX                         ; 004b099b
    FLD float ptr [EBX + 0x20]          ; 004b099d
    FSUB float ptr [ESP + EAX*0x4]      ; 004b09a0
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b09a3
    FADD float ptr [EDX + 0x20]         ; 004b09a6
    FSTP float ptr [EDX + 0x20]         ; 004b09a9
    MOV EDX,dword ptr [EDX + 0x25608]   ; 004b09ac
    FLD float ptr [EDX + 0x28]          ; 004b09b2
    FSUB float ptr [ESP + EAX*0x4 + 0x8] ; 004b09b5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b09b9
    ADD EAX,0x2b4                       ; 004b09bc
    FADD float ptr [EAX + 0xfffffd74]   ; 004b09c1
    MOV EDX,dword ptr [ESP + 0xcc]      ; 004b09c7
    FSTP float ptr [EAX + 0xfffffd74]   ; 004b09ce
    CMP EDX,0x2                         ; 004b09d4
    JNC 0x004b0a32                      ; 004b09d7
        ;   XREF to: 004b0a32 (CONDITIONAL_JUMP)  ; LAB_004b0a32
    CMP EDX,0x1                         ; 004b09d9
    JNZ 0x004b0a06                      ; 004b09dc
        ;   XREF to: 004b0a06 (CONDITIONAL_JUMP)  ; LAB_004b0a06
    PUSH EDX                            ; 004b09de
    PUSH 0xe                            ; 004b09df
    PUSH EAX                            ; 004b09e1
        ;   Label: LAB_004b09e1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004b09e2
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b09e7
    MOV EAX,0x1                         ; 004b09ea
        ;   Label: LAB_004b09ea
    MOV ESP,EBP                         ; 004b09ef
        ;   Label: LAB_004b09ef
    POP EBP                             ; 004b09f1
    POP EDI                             ; 004b09f2
    POP ESI                             ; 004b09f3
    POP EBX                             ; 004b09f4
    RET                                 ; 004b09f5
    XOR EAX,EAX                         ; 004b09f6
        ;   Label: LAB_004b09f6
    JMP 0x004b09ef                      ; 004b09f8
        ;   XREF to: 004b09ef (UNCONDITIONAL_JUMP)  ; LAB_004b09ef
    PUSH 0x1                            ; 004b09fa
        ;   Label: LAB_004b09fa
    PUSH 0xf                            ; 004b09fc
    JMP 0x004b09e1                      ; 004b09fe
        ;   XREF to: 004b09e1 (UNCONDITIONAL_JUMP)  ; LAB_004b09e1
    PUSH 0x1                            ; 004b0a00
        ;   Label: LAB_004b0a00
    PUSH 0x4                            ; 004b0a02
    JMP 0x004b09e1                      ; 004b0a04
        ;   XREF to: 004b09e1 (UNCONDITIONAL_JUMP)  ; LAB_004b09e1
    MOV EDX,dword ptr [ESP + 0xcc]      ; 004b0a06
        ;   Label: LAB_004b0a06
    PUSH EDX                            ; 004b0a0d
    MOV EDI,0x5d7075                    ; 004b0a0e | = "..\\core\\gabriela.cpp"
    MOV EAX,0x637                       ; 004b0a13
    PUSH 0x5d708a                       ; 004b0a18 | = "Hell froze - invalid pickUpType: %d"
    MOV dword ptr [0x01d046a0],EDI      ; 004b0a1d | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004b0a23 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004b0a28
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 004b0a2d
    JMP 0x004b09ea                      ; 004b0a30
        ;   XREF to: 004b09ea (UNCONDITIONAL_JUMP)  ; LAB_004b09ea
    JBE 0x004b09fa                      ; 004b0a32
        ;   XREF to: 004b09fa (CONDITIONAL_JUMP)  ; LAB_004b09fa
        ;   Label: LAB_004b0a32
    CMP EDX,0x3                         ; 004b0a34
    JZ 0x004b0a00                       ; 004b0a37
        ;   XREF to: 004b0a00 (CONDITIONAL_JUMP)  ; LAB_004b0a00
    JMP 0x004b0a06                      ; 004b0a39
        ;   XREF to: 004b0a06 (UNCONDITIONAL_JUMP)  ; LAB_004b0a06


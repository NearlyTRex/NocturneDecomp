; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_FUN_005917b0(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stranger.cpp_FUN_00585b00 at 005866a5
;
; Referenced Globals:
;   undefined4 s_Bip01_L_Forearm_005f70c8+1
;   TerminatedCString s_Bip01_L_Forearm_005f70d9
;   TerminatedCString s_Bip01_L_Forearm_005f70e9
;   TerminatedCString s_Bip01_L_Forearm_005f70f9
;   TerminatedCString s_Bip01_L_Forearm_005f7109
;   TerminatedCString s_Bip01_L_Forearm_005f7119
;   TerminatedCString s_Bip01_R_Forearm_005f7129
;   TerminatedCString s_Bip01_R_Forearm_005f7139
;   TerminatedCString s_Bip01_R_Forearm_005f7149
;   TerminatedCString s_Bip01_R_Forearm_005f7159
;   TerminatedCString s_Bip01_R_Forearm_005f7169
;   TerminatedCString s_Bip01_R_Forearm_005f7179
;   TerminatedCString s_Bip01_L_Forearm_005f7189
;   TerminatedCString s_Bip01_L_Forearm_005f7199
;   undefined4 DAT_005f71a9
;   ... and 5 more
;
; Called Functions:
;   core_cloth.cpp_CCloth_grabCloth_FUN_00442100
;   core_cloth.cpp_FUN_004421a0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005917b0
        ;   Label: core_stranger.cpp_FUN_005917b0
    PUSH ESI                            ; 005917b1
    PUSH EDI                            ; 005917b2
    PUSH EBP                            ; 005917b3
    MOV EBP,ESP                         ; 005917b4
    SUB ESP,0x20                        ; 005917b6
    AND ESP,0xfffffff8                  ; 005917b9
    MOV ESI,dword ptr [EBP + 0x14]      ; 005917bc
    CMP dword ptr [ESI + 0x2ca0],0x1    ; 005917bf
    JGE 0x005917cf                      ; 005917c6
        ;   XREF to: 005917cf (CONDITIONAL_JUMP)  ; LAB_005917cf
    MOV ESP,EBP                         ; 005917c8
        ;   Label: LAB_005917c8
    POP EBP                             ; 005917ca
    POP EDI                             ; 005917cb
    POP ESI                             ; 005917cc
    POP EBX                             ; 005917cd
    RET                                 ; 005917ce
    PUSH ESI                            ; 005917cf
        ;   Label: LAB_005917cf
    MOV EAX,dword ptr [ESI + 0x154]     ; 005917d0
    XOR EDI,EDI                         ; 005917d6
    CALL dword ptr [EAX + 0x10c]        ; 005917d8
    ADD ESP,0x4                         ; 005917de
    XOR EDX,EDX                         ; 005917e1
    CMP EAX,0x2                         ; 005917e3
    JGE 0x005918f4                      ; 005917e6
        ;   XREF to: 005918f4 (CONDITIONAL_JUMP)  ; LAB_005918f4
    CMP dword ptr [ESI + 0x2c98],0x0    ; 005917ec
    JNZ 0x0059180b                      ; 005917f3
        ;   XREF to: 0059180b (CONDITIONAL_JUMP)  ; LAB_0059180b
    FLD float ptr [ESI + 0x2c9c]        ; 005917f5
    FCOMP double ptr [0x005f71a9]       ; 005917fb | DAT_005f71a9
    FNSTSW AX                           ; 00591801
    SAHF                                ; 00591803
    JBE 0x0059180b                      ; 00591804
        ;   XREF to: 0059180b (CONDITIONAL_JUMP)  ; LAB_0059180b
    MOV EDX,0x1                         ; 00591806
    MOV EBX,dword ptr [ESI + 0x2c98]    ; 0059180b
        ;   Label: LAB_0059180b
    CMP EBX,0x1                         ; 00591811
    JNZ 0x00591829                      ; 00591814
        ;   XREF to: 00591829 (CONDITIONAL_JUMP)  ; LAB_00591829
    FLD float ptr [ESI + 0x2c9c]        ; 00591816
    FCOMP double ptr [0x005f71b1]       ; 0059181c | DAT_005f71b1
    FNSTSW AX                           ; 00591822
    SAHF                                ; 00591824
    JNC 0x00591829                      ; 00591825
        ;   XREF to: 00591829 (CONDITIONAL_JUMP)  ; LAB_00591829
    MOV EDX,EBX                         ; 00591827
    CMP dword ptr [ESI + 0x2c98],0x2    ; 00591829
        ;   Label: LAB_00591829
    JNZ 0x00591848                      ; 00591830
        ;   XREF to: 00591848 (CONDITIONAL_JUMP)  ; LAB_00591848
    FLD float ptr [ESI + 0x2c9c]        ; 00591832
    FCOMP double ptr [0x005f71b9]       ; 00591838 | DAT_005f71b9
    FNSTSW AX                           ; 0059183e
    SAHF                                ; 00591840
    JBE 0x00591848                      ; 00591841
        ;   XREF to: 00591848 (CONDITIONAL_JUMP)  ; LAB_00591848
    MOV EDI,0x1                         ; 00591843
    CMP dword ptr [ESI + 0x2c98],0x3    ; 00591848
        ;   Label: LAB_00591848
    JNZ 0x00591867                      ; 0059184f
        ;   XREF to: 00591867 (CONDITIONAL_JUMP)  ; LAB_00591867
    FLD float ptr [ESI + 0x2c9c]        ; 00591851
    FCOMP double ptr [0x005f71b9]       ; 00591857 | DAT_005f71b9
    FNSTSW AX                           ; 0059185d
    SAHF                                ; 0059185f
    JNC 0x00591867                      ; 00591860
        ;   XREF to: 00591867 (CONDITIONAL_JUMP)  ; LAB_00591867
    MOV EDI,0x1                         ; 00591862
    CMP dword ptr [ESI + 0x2c98],0x4    ; 00591867
        ;   Label: LAB_00591867
    JNZ 0x00591886                      ; 0059186e
        ;   XREF to: 00591886 (CONDITIONAL_JUMP)  ; LAB_00591886
    FLD float ptr [ESI + 0x2c9c]        ; 00591870
    FCOMP double ptr [0x005f71c1]       ; 00591876 | DAT_005f71c1
    FNSTSW AX                           ; 0059187c
    SAHF                                ; 0059187e
    JNC 0x00591886                      ; 0059187f
        ;   XREF to: 00591886 (CONDITIONAL_JUMP)  ; LAB_00591886
    MOV EDI,0x1                         ; 00591881
    CMP dword ptr [ESI + 0x2c98],0x5    ; 00591886
        ;   Label: LAB_00591886
    JNZ 0x005918a5                      ; 0059188d
        ;   XREF to: 005918a5 (CONDITIONAL_JUMP)  ; LAB_005918a5
    FLD float ptr [ESI + 0x2c9c]        ; 0059188f
    FCOMP double ptr [0x005f71c9]       ; 00591895 | DAT_005f71c9
    FNSTSW AX                           ; 0059189b
    SAHF                                ; 0059189d
    JBE 0x005918a5                      ; 0059189e
        ;   XREF to: 005918a5 (CONDITIONAL_JUMP)  ; LAB_005918a5
    MOV EDI,0x1                         ; 005918a0
    CMP dword ptr [ESI + 0x2c98],0x9    ; 005918a5
        ;   Label: LAB_005918a5
    JNZ 0x005918c4                      ; 005918ac
        ;   XREF to: 005918c4 (CONDITIONAL_JUMP)  ; LAB_005918c4
    FLD float ptr [ESI + 0x2c9c]        ; 005918ae
    FCOMP double ptr [0x005f71c1]       ; 005918b4 | DAT_005f71c1
    FNSTSW AX                           ; 005918ba
    SAHF                                ; 005918bc
    JNC 0x005918c4                      ; 005918bd
        ;   XREF to: 005918c4 (CONDITIONAL_JUMP)  ; LAB_005918c4
    MOV EDI,0x1                         ; 005918bf
    CMP dword ptr [ESI + 0x2c98],0xf    ; 005918c4
        ;   Label: LAB_005918c4
    JNZ 0x005918f4                      ; 005918cb
        ;   XREF to: 005918f4 (CONDITIONAL_JUMP)  ; LAB_005918f4
    FLD float ptr [ESI + 0x2c9c]        ; 005918cd
    FST double ptr [ESP]                ; 005918d3
    FCOMP double ptr [0x005f71b1]       ; 005918d6 | DAT_005f71b1
    FNSTSW AX                           ; 005918dc
    SAHF                                ; 005918de
    JBE 0x005918f4                      ; 005918df
        ;   XREF to: 005918f4 (CONDITIONAL_JUMP)  ; LAB_005918f4
    FLD double ptr [ESP]                ; 005918e1
    FCOMP double ptr [0x005f71d1]       ; 005918e4 | DAT_005f71d1
    FNSTSW AX                           ; 005918ea
    SAHF                                ; 005918ec
    JNC 0x005918f4                      ; 005918ed
        ;   XREF to: 005918f4 (CONDITIONAL_JUMP)  ; LAB_005918f4
    MOV EDI,0x1                         ; 005918ef
    MOV EBX,dword ptr [ESI + 0x2e34]    ; 005918f4
        ;   Label: LAB_005918f4
    TEST EDX,EDX                        ; 005918fa
    JZ 0x00591a3d                       ; 005918fc
        ;   XREF to: 00591a3d (CONDITIONAL_JUMP)  ; LAB_00591a3d
    PUSH 0x32                           ; 00591902
    PUSH 0x5f70c9                       ; 00591904 | s_Bip01_L_Forearm_005f70c8+1
    PUSH EBX                            ; 00591909
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_00442100 ; 0059190a
        ;   XREF to: 00442100 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_00442100(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 0059190f
    PUSH 0x33                           ; 00591912
    PUSH 0x5f70d9                       ; 00591914 | = "Bip01 L Forearm"
    PUSH EBX                            ; 00591919
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_00442100 ; 0059191a
        ;   XREF to: 00442100 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_00442100(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 0059191f
    PUSH 0x34                           ; 00591922
    PUSH 0x5f70e9                       ; 00591924 | = "Bip01 L Forearm"
    PUSH EBX                            ; 00591929
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_00442100 ; 0059192a
        ;   XREF to: 00442100 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_00442100(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 0059192f
    PUSH 0x35                           ; 00591932
    PUSH 0x5f70f9                       ; 00591934 | = "Bip01 L Forearm"
    PUSH EBX                            ; 00591939
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_00442100 ; 0059193a
        ;   XREF to: 00442100 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_00442100(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 0059193f
    PUSH 0x36                           ; 00591942
    PUSH 0x5f7109                       ; 00591944 | = "Bip01 L Forearm"
    PUSH EBX                            ; 00591949
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_00442100 ; 0059194a
        ;   XREF to: 00442100 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_00442100(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 0059194f
    PUSH 0x37                           ; 00591952
    PUSH 0x5f7119                       ; 00591954 | = "Bip01 L Forearm"
    PUSH EBX                            ; 00591959
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_00442100 ; 0059195a
        ;   XREF to: 00442100 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_00442100(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 0059195f
    PUSH 0x20                           ; 00591962
    PUSH 0x5f7129                       ; 00591964 | = "Bip01 R Forearm"
    PUSH EBX                            ; 00591969
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_00442100 ; 0059196a
        ;   XREF to: 00442100 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_00442100(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 0059196f
    PUSH 0x21                           ; 00591972
    PUSH 0x5f7139                       ; 00591974 | = "Bip01 R Forearm"
    PUSH EBX                            ; 00591979
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_00442100 ; 0059197a
        ;   XREF to: 00442100 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_00442100(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 0059197f
    PUSH 0x22                           ; 00591982
    PUSH 0x5f7149                       ; 00591984 | = "Bip01 R Forearm"
    PUSH EBX                            ; 00591989
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_00442100 ; 0059198a
        ;   XREF to: 00442100 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_00442100(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 0059198f
    PUSH 0x23                           ; 00591992
    PUSH 0x5f7159                       ; 00591994 | = "Bip01 R Forearm"
    PUSH EBX                            ; 00591999
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_00442100 ; 0059199a
        ;   XREF to: 00442100 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_00442100(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 0059199f
    PUSH 0x24                           ; 005919a2
    PUSH 0x5f7169                       ; 005919a4 | = "Bip01 R Forearm"
    PUSH EBX                            ; 005919a9
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_00442100 ; 005919aa
        ;   XREF to: 00442100 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_00442100(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 005919af
    PUSH 0x25                           ; 005919b2
    PUSH 0x5f7179                       ; 005919b4 | = "Bip01 R Forearm"
    PUSH EBX                            ; 005919b9
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_00442100 ; 005919ba
        ;   XREF to: 00442100 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_00442100(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 005919bf
    TEST EDI,EDI                        ; 005919c2
        ;   Label: LAB_005919c2
    JZ 0x00591ac6                       ; 005919c4
        ;   XREF to: 00591ac6 (CONDITIONAL_JUMP)  ; LAB_00591ac6
    PUSH 0x2f                           ; 005919ca
    PUSH 0x5f7189                       ; 005919cc | = "Bip01 L Forearm"
    PUSH EBX                            ; 005919d1
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_00442100 ; 005919d2
        ;   XREF to: 00442100 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_00442100(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 005919d7
    PUSH 0x32                           ; 005919da
    PUSH 0x5f7199                       ; 005919dc | = "Bip01 L Forearm"
    PUSH EBX                            ; 005919e1
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_00442100 ; 005919e2
        ;   XREF to: 00442100 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_00442100(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 005919e7
    ADD ESI,0x158                       ; 005919ea
        ;   Label: LAB_005919ea
    PUSH ESI                            ; 005919f0
    ADD EBX,0x3ab24                     ; 005919f1
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 005919f7
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005919fc
    ADD ESP,0x4                         ; 005919ff
    CMP EAX,0x37                        ; 00591a02
    JNZ 0x00591ae1                      ; 00591a05
        ;   XREF to: 00591ae1 (CONDITIONAL_JUMP)  ; LAB_00591ae1
    MOV ESI,0xc1a00000                  ; 00591a0b
    XOR EDX,EDX                         ; 00591a10
    LEA EAX,[ESP + 0x8]                 ; 00591a12
    MOV dword ptr [ESP + 0xc],EDX       ; 00591a16
    MOV dword ptr [ESP + 0x10],ESI      ; 00591a1a
    MOV dword ptr [ESP + 0x8],EDX       ; 00591a1e
    CMP EBX,EAX                         ; 00591a22
    JZ 0x005917c8                       ; 00591a24
        ;   XREF to: 005917c8 (CONDITIONAL_JUMP)  ; LAB_005917c8
    MOV dword ptr [EBX + 0x4],EDX       ; 00591a2a
    MOV dword ptr [EBX],EDX             ; 00591a2d
    MOV EAX,dword ptr [ESP + 0x10]      ; 00591a2f
    MOV dword ptr [EBX + 0x8],EAX       ; 00591a33
    MOV ESP,EBP                         ; 00591a36
    POP EBP                             ; 00591a38
    POP EDI                             ; 00591a39
    POP ESI                             ; 00591a3a
    POP EBX                             ; 00591a3b
    RET                                 ; 00591a3c
    PUSH 0x32                           ; 00591a3d
        ;   Label: LAB_00591a3d
    PUSH EBX                            ; 00591a3f
    CALL core_cloth.cpp_FUN_004421a0    ; 00591a40
        ;   XREF to: 004421a0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_004421a0(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 00591a45
    PUSH 0x33                           ; 00591a48
    PUSH EBX                            ; 00591a4a
    CALL core_cloth.cpp_FUN_004421a0    ; 00591a4b
        ;   XREF to: 004421a0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_004421a0(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 00591a50
    PUSH 0x34                           ; 00591a53
    PUSH EBX                            ; 00591a55
    CALL core_cloth.cpp_FUN_004421a0    ; 00591a56
        ;   XREF to: 004421a0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_004421a0(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 00591a5b
    PUSH 0x35                           ; 00591a5e
    PUSH EBX                            ; 00591a60
    CALL core_cloth.cpp_FUN_004421a0    ; 00591a61
        ;   XREF to: 004421a0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_004421a0(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 00591a66
    PUSH 0x36                           ; 00591a69
    PUSH EBX                            ; 00591a6b
    CALL core_cloth.cpp_FUN_004421a0    ; 00591a6c
        ;   XREF to: 004421a0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_004421a0(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 00591a71
    PUSH 0x37                           ; 00591a74
    PUSH EBX                            ; 00591a76
    CALL core_cloth.cpp_FUN_004421a0    ; 00591a77
        ;   XREF to: 004421a0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_004421a0(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 00591a7c
    PUSH 0x20                           ; 00591a7f
    PUSH EBX                            ; 00591a81
    CALL core_cloth.cpp_FUN_004421a0    ; 00591a82
        ;   XREF to: 004421a0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_004421a0(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 00591a87
    PUSH 0x21                           ; 00591a8a
    PUSH EBX                            ; 00591a8c
    CALL core_cloth.cpp_FUN_004421a0    ; 00591a8d
        ;   XREF to: 004421a0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_004421a0(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 00591a92
    PUSH 0x22                           ; 00591a95
    PUSH EBX                            ; 00591a97
    CALL core_cloth.cpp_FUN_004421a0    ; 00591a98
        ;   XREF to: 004421a0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_004421a0(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 00591a9d
    PUSH 0x23                           ; 00591aa0
    PUSH EBX                            ; 00591aa2
    CALL core_cloth.cpp_FUN_004421a0    ; 00591aa3
        ;   XREF to: 004421a0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_004421a0(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 00591aa8
    PUSH 0x24                           ; 00591aab
    PUSH EBX                            ; 00591aad
    CALL core_cloth.cpp_FUN_004421a0    ; 00591aae
        ;   XREF to: 004421a0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_004421a0(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 00591ab3
    PUSH 0x25                           ; 00591ab6
    PUSH EBX                            ; 00591ab8
    CALL core_cloth.cpp_FUN_004421a0    ; 00591ab9
        ;   XREF to: 004421a0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_004421a0(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 00591abe
    JMP 0x005919c2                      ; 00591ac1
        ;   XREF to: 005919c2 (UNCONDITIONAL_JUMP)  ; LAB_005919c2
    PUSH 0x2f                           ; 00591ac6
        ;   Label: LAB_00591ac6
    PUSH EBX                            ; 00591ac8
    CALL core_cloth.cpp_FUN_004421a0    ; 00591ac9
        ;   XREF to: 004421a0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_004421a0(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 00591ace
    PUSH 0x32                           ; 00591ad1
    PUSH EBX                            ; 00591ad3
    CALL core_cloth.cpp_FUN_004421a0    ; 00591ad4
        ;   XREF to: 004421a0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_004421a0(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 00591ad9
    JMP 0x005919ea                      ; 00591adc
        ;   XREF to: 005919ea (UNCONDITIONAL_JUMP)  ; LAB_005919ea
    CMP EAX,0x38                        ; 00591ae1
        ;   Label: LAB_00591ae1
    JNZ 0x005917c8                      ; 00591ae4
        ;   XREF to: 005917c8 (CONDITIONAL_JUMP)  ; LAB_005917c8
    XOR ESI,ESI                         ; 00591aea
    MOV EAX,0x41a00000                  ; 00591aec
    MOV dword ptr [ESP + 0x18],ESI      ; 00591af1
    MOV dword ptr [ESP + 0x1c],EAX      ; 00591af5
    LEA EAX,[ESP + 0x14]                ; 00591af9
    MOV dword ptr [ESP + 0x14],ESI      ; 00591afd
    CMP EBX,EAX                         ; 00591b01
    JZ 0x005917c8                       ; 00591b03
        ;   XREF to: 005917c8 (CONDITIONAL_JUMP)  ; LAB_005917c8
    MOV dword ptr [EBX + 0x4],ESI       ; 00591b09
    MOV dword ptr [EBX],ESI             ; 00591b0c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00591b0e
    MOV dword ptr [EBX + 0x8],EAX       ; 00591b12
    MOV ESP,EBP                         ; 00591b15
    POP EBP                             ; 00591b17
    POP EDI                             ; 00591b18
    POP ESI                             ; 00591b19
    POP EBX                             ; 00591b1a
    RET                                 ; 00591b1b


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_FUN_004d27b0(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0xd4]:1  local_d4
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0xc]:1  local_c
;
; XREF[1]:
;   core_prye.cpp_FUN_00521f40 at 00521f46
;
; Referenced Globals:
;   TerminatedCString s_motion_state_005c4b24
;   TerminatedCString s_partStatus_005c4b31
;   TerminatedCString s_grabbedBy_005c4b3c
;   TerminatedCString s_hitPoints_005c4b46
;   TerminatedCString s_motion_state_005c4b50
;   TerminatedCString s_partStatus_005c4b5d
;   TerminatedCString s_grabbedBy_005c4b68
;   TerminatedCString s_controlType_005c4b72
;   TerminatedCString s_objectToPickUp_005c4b7e
;   TerminatedCString s_doorToOpen_005c4b8d
;   TerminatedCString s_leverToPull_005c4b98
;   TerminatedCString s_ladderToClimb_005c4ba4
;   TerminatedCString s_pushedObject_005c4bb2
;   undefined4 DAT_005c4bbf
;   TerminatedCString s_keyNameList_d_005c4bc4
;   ... and 9 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b930
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;   core_actor.cpp_FUN_0040bab0
;   core_actor.cpp_FUN_0040bba0
;   core_charactr.cpp_FUN_0042b450
;   core_inv.cpp_CInventory_load_FUN_004dc750
;   core_inv.cpp_FUN_004dc560
;   crt_unknown.c_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d27b0
        ;   Label: core_hero.cpp_FUN_004d27b0
    PUSH ESI                            ; 004d27b1
    SUB ESP,0xcc                        ; 004d27b2
    MOV ESI,dword ptr [ESP + 0xd8]      ; 004d27b8
    MOV EDX,dword ptr [0x005fffb8]      ; 004d27bf | g_CHeroClassVersion
    LEA EBX,[ESI + 0x158]               ; 004d27c5
    CMP EDX,0x4                         ; 004d27cb
    JGE 0x004d2842                      ; 004d27ce
        ;   XREF to: 004d2842 (CONDITIONAL_JUMP)  ; LAB_004d2842
    PUSH ESI                            ; 004d27d0
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 004d27d1
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    MOV ECX,dword ptr [0x005fffb8]      ; 004d27d6 | g_CHeroClassVersion
    ADD ESP,0x4                         ; 004d27dc
    CMP ECX,0x2                         ; 004d27df
    JL 0x004d27f2                       ; 004d27e2
        ;   XREF to: 004d27f2 (CONDITIONAL_JUMP)  ; LAB_004d27f2
    PUSH 0x5c4b24                       ; 004d27e4 | = "motion state"
    PUSH EBX                            ; 004d27e9
    CALL core_actor.cpp_FUN_0040bab0    ; 004d27ea
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 004d27ef
    CMP dword ptr [0x005fffb8],0x3      ; 004d27f2 | g_CHeroClassVersion
        ;   Label: LAB_004d27f2
    JGE 0x004d2804                      ; 004d27f9
        ;   XREF to: 004d2804 (CONDITIONAL_JUMP)  ; LAB_004d2804
    ADD ESP,0xcc                        ; 004d27fb
        ;   Label: LAB_004d27fb
    POP ESI                             ; 004d2801
    POP EBX                             ; 004d2802
    RET                                 ; 004d2803
    PUSH 0x5c4b31                       ; 004d2804 | = "partStatus"
        ;   Label: LAB_004d2804
    LEA EAX,[ESI + 0x158]               ; 004d2809
    PUSH EAX                            ; 004d280f
    CALL core_actor.cpp_FUN_0040bba0    ; 004d2810
        ;   XREF to: 0040bba0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040bba0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d2815
    PUSH 0x5c4b3c                       ; 004d2818 | = "grabbedBy"
    LEA EAX,[ESI + 0x26fc]              ; 004d281d
    PUSH EAX                            ; 004d2823
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 004d2824
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 004d2829
    PUSH 0x5c4b46                       ; 004d282c | = "hitPoints"
    ADD ESI,0x2538                      ; 004d2831
    PUSH ESI                            ; 004d2837
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 004d2838
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 004d283d
    JMP 0x004d27fb                      ; 004d2840
        ;   XREF to: 004d27fb (UNCONDITIONAL_JUMP)  ; LAB_004d27fb
    PUSH ESI                            ; 004d2842
        ;   Label: LAB_004d2842
    CALL core_charactr.cpp_FUN_0042b450 ; 004d2843
        ;   XREF to: 0042b450 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b450()
    ADD ESP,0x4                         ; 004d2848
    PUSH 0x5c4b50                       ; 004d284b | = "motion state"
    PUSH EBX                            ; 004d2850
    CALL core_actor.cpp_FUN_0040bab0    ; 004d2851
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 004d2856
    PUSH 0x5c4b5d                       ; 004d2859 | = "partStatus"
    PUSH EBX                            ; 004d285e
    CALL core_actor.cpp_FUN_0040bba0    ; 004d285f
        ;   XREF to: 0040bba0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040bba0(CDeformableModelInstance * model_ptr, char * property_name)
    MOV ECX,dword ptr [0x005fffb8]      ; 004d2864 | g_CHeroClassVersion
    ADD ESP,0x8                         ; 004d286a
    CMP ECX,0x8                         ; 004d286d
    JGE 0x004d2890                      ; 004d2870
        ;   XREF to: 004d2890 (CONDITIONAL_JUMP)  ; LAB_004d2890
    PUSH 0x5c4b68                       ; 004d2872 | = "grabbedBy"
    LEA EAX,[ESI + 0x26fc]              ; 004d2877
    PUSH EAX                            ; 004d287d
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 004d287e
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 004d2883
    MOV dword ptr [ESI + 0x2700],0x0    ; 004d2886
    CMP dword ptr [0x005fffb8],0x5      ; 004d2890 | g_CHeroClassVersion
        ;   Label: LAB_004d2890
    JL 0x004d28ad                       ; 004d2897
        ;   XREF to: 004d28ad (CONDITIONAL_JUMP)  ; LAB_004d28ad
    PUSH 0x5c4b72                       ; 004d2899 | = "controlType"
    LEA EAX,[ESI + 0xcdd0]              ; 004d289e
    PUSH EAX                            ; 004d28a4
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004d28a5
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d28aa
    CMP dword ptr [0x005fffb8],0x7      ; 004d28ad | g_CHeroClassVersion
        ;   Label: LAB_004d28ad
    JL 0x004d291a                       ; 004d28b4
        ;   XREF to: 004d291a (CONDITIONAL_JUMP)  ; LAB_004d291a
    PUSH 0x5c4b7e                       ; 004d28b6 | = "objectToPickUp"
    LEA EAX,[ESI + 0x20b98]             ; 004d28bb
    PUSH EAX                            ; 004d28c1
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 004d28c2
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 004d28c7
    PUSH 0x5c4b8d                       ; 004d28ca | = "doorToOpen"
    LEA EAX,[ESI + 0x20b94]             ; 004d28cf
    PUSH EAX                            ; 004d28d5
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 004d28d6
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 004d28db
    PUSH 0x5c4b98                       ; 004d28de | = "leverToPull"
    LEA EAX,[ESI + 0x20ba0]             ; 004d28e3
    PUSH EAX                            ; 004d28e9
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 004d28ea
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 004d28ef
    PUSH 0x5c4ba4                       ; 004d28f2 | = "ladderToClimb"
    LEA EAX,[ESI + 0x20ba4]             ; 004d28f7
    PUSH EAX                            ; 004d28fd
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 004d28fe
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 004d2903
    PUSH 0x5c4bb2                       ; 004d2906 | = "pushedObject"
    LEA EAX,[ESI + 0x20b9c]             ; 004d290b
    PUSH EAX                            ; 004d2911
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 004d2912
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 004d2917
    CMP dword ptr [0x005fffb8],0xa      ; 004d291a | g_CHeroClassVersion
        ;   Label: LAB_004d291a
    JNZ 0x004d2938                      ; 004d2921
        ;   XREF to: 004d2938 (CONDITIONAL_JUMP)  ; LAB_004d2938
    PUSH 0x5c4bbf                       ; 004d2923 | DAT_005c4bbf
    LEA EAX,[ESP + 0xcc]                ; 004d2928
    PUSH EAX                            ; 004d292f
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004d2930
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d2935
    MOV EAX,[0x005fffb8]                ; 004d2938 | g_CHeroClassVersion
        ;   Label: LAB_004d2938
    CMP EAX,0x8                         ; 004d293d
    JL 0x004d2980                       ; 004d2940
        ;   XREF to: 004d2980 (CONDITIONAL_JUMP)  ; LAB_004d2980
    CMP EAX,0xb                         ; 004d2942
    JGE 0x004d2980                      ; 004d2945
        ;   XREF to: 004d2980 (CONDITIONAL_JUMP)  ; LAB_004d2980
    XOR EBX,EBX                         ; 004d2947
    PUSH EBX                            ; 004d2949
        ;   Label: LAB_004d2949
    PUSH 0x5c4bc4                       ; 004d294a | = "keyNameList[%d]"
    LEA EAX,[ESP + 0x6c]                ; 004d294f
    PUSH EAX                            ; 004d2953
    CALL crt_unknown.c_FUN_005a28c0     ; 004d2954
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 004d2959
    LEA EAX,[ESP + 0x64]                ; 004d295c
    PUSH EAX                            ; 004d2960
    LEA EAX,[ESP + 0x4]                 ; 004d2961
    PUSH EAX                            ; 004d2965
    INC EBX                             ; 004d2966
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 004d2967
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004d296c
    CMP EBX,0x20                        ; 004d296f
    JL 0x004d2949                       ; 004d2972
        ;   XREF to: 004d2949 (CONDITIONAL_JUMP)  ; LAB_004d2949
    LEA EAX,[EAX]                       ; 004d2974
    LEA EDX,[EDX]                       ; 004d297a
    CMP dword ptr [0x005fffb8],0x9      ; 004d2980 | g_CHeroClassVersion
        ;   Label: LAB_004d2980
    JL 0x004d299d                       ; 004d2987
        ;   XREF to: 004d299d (CONDITIONAL_JUMP)  ; LAB_004d299d
    PUSH 0x5c4bd4                       ; 004d2989 | = "AITask"
    LEA EAX,[ESI + 0x20bc8]             ; 004d298e
    PUSH EAX                            ; 004d2994
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004d2995
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d299a
    CMP dword ptr [0x005fffb8],0xc      ; 004d299d | g_CHeroClassVersion
        ;   Label: LAB_004d299d
    JL 0x004d29ba                       ; 004d29a4
        ;   XREF to: 004d29ba (CONDITIONAL_JUMP)  ; LAB_004d29ba
    PUSH 0x5c4bdb                       ; 004d29a6 | = "isWearingGasMask"
    LEA EAX,[ESI + 0x20b58]             ; 004d29ab
    PUSH EAX                            ; 004d29b1
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004d29b2
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d29b7
    CMP dword ptr [0x005fffb8],0xd      ; 004d29ba | g_CHeroClassVersion
        ;   Label: LAB_004d29ba
    JL 0x004d29d7                       ; 004d29c1
        ;   XREF to: 004d29d7 (CONDITIONAL_JUMP)  ; LAB_004d29d7
    PUSH 0x5c4bec                       ; 004d29c3 | = "isWearingGoggles"
    LEA EAX,[ESI + 0x20b5c]             ; 004d29c8
    PUSH EAX                            ; 004d29ce
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004d29cf
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d29d4
    CMP dword ptr [0x005fffb8],0x6      ; 004d29d7 | g_CHeroClassVersion
        ;   Label: LAB_004d29d7
    JL 0x004d2a03                       ; 004d29de
        ;   XREF to: 004d2a03 (CONDITIONAL_JUMP)  ; LAB_004d2a03
    MOV ECX,dword ptr [0x007df9b8]      ; 004d29e0 | DAT_007df9b8
    LEA EAX,[ESI + 0x206e8]             ; 004d29e6
    CMP ECX,0x1                         ; 004d29ec
    JNZ 0x004d2a5e                      ; 004d29ef
        ;   XREF to: 004d2a5e (CONDITIONAL_JUMP)  ; LAB_004d2a5e
    PUSH EDI                            ; 004d29f1
    MOV EDI,dword ptr [0x007df9b4]      ; 004d29f2 | DAT_007df9b4
    PUSH EDI                            ; 004d29f8
    PUSH EAX                            ; 004d29f9
    CALL core_inv.cpp_CInventory_load_FUN_004dc750 ; 004d29fa
        ;   XREF to: 004dc750 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_load_FUN_004dc750(CInventory * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004d29ff
    POP EDI                             ; 004d2a02
    CMP dword ptr [0x005fffb8],0xe      ; 004d2a03 | g_CHeroClassVersion
        ;   Label: LAB_004d2a03
    JL 0x004d2a34                       ; 004d2a0a
        ;   XREF to: 004d2a34 (CONDITIONAL_JUMP)  ; LAB_004d2a34
    PUSH 0x5c4bfd                       ; 004d2a0c | DAT_005c4bfd
    LEA EAX,[ESI + 0x20b80]             ; 004d2a11
    PUSH EAX                            ; 004d2a17
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004d2a18
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d2a1d
    PUSH 0x5c4c02                       ; 004d2a20 | = "bullets"
    LEA EAX,[ESI + 0x20b84]             ; 004d2a25
    PUSH EAX                            ; 004d2a2b
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004d2a2c
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d2a31
    CMP dword ptr [0x005fffb8],0xf      ; 004d2a34 | g_CHeroClassVersion
        ;   Label: LAB_004d2a34
    JL 0x004d27fb                       ; 004d2a3b
        ;   XREF to: 004d27fb (CONDITIONAL_JUMP)  ; LAB_004d27fb
    PUSH 0x5c4c0a                       ; 004d2a41 | = "light_radius"
    ADD ESI,0x20b88                     ; 004d2a46
    PUSH ESI                            ; 004d2a4c
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 004d2a4d
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 004d2a52
    ADD ESP,0xcc                        ; 004d2a55
    POP ESI                             ; 004d2a5b
    POP EBX                             ; 004d2a5c
    RET                                 ; 004d2a5d
    MOV EBX,dword ptr [0x007df9b4]      ; 004d2a5e | DAT_007df9b4
        ;   Label: LAB_004d2a5e
    PUSH EBX                            ; 004d2a64
    PUSH EAX                            ; 004d2a65
    CALL core_inv.cpp_FUN_004dc560      ; 004d2a66
        ;   XREF to: 004dc560 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004dc560(CInventory * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004d2a6b
    JMP 0x004d2a03                      ; 004d2a6e
        ;   XREF to: 004d2a03 (UNCONDITIONAL_JUMP)  ; LAB_004d2a03


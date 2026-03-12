; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_archive_FUN_00419880(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; Local Variables:
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_vertexCount_00615cf9
;   TerminatedCString s_triCount_00615d05
;   TerminatedCString s_textureCount_00615d0e
;   TerminatedCString s_d_d_d_00615d1b
;   TerminatedCString s_d_d_d_d_d_d_d_d_d_d_00615d25
;   TerminatedCString s_anon_00615d49
;   TerminatedCString s_d_d_d_00615d53
;   TerminatedCString s_d_d_d_d_d_d_d_d_d_d_00615d5e
;   TerminatedCString s_s_00615d81
;   TerminatedCString s_simBox_00615d88
;   TerminatedCString s_carriedByActor_00615d8f
;   TerminatedCString s_bloodType_00615d9e
;   TerminatedCString s_dontUseNormals_00615da8
;   TerminatedCString s_transparentGeometryFlag_00615db7
;   TerminatedCString s_renderInBackground_00615dcf
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b870
;   core_actor.cpp_archiveBox_FUN_0040bd70
;   core_actor.cpp_archiveInteger_FUN_0040b7f0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c1c0
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_0041a050
;   core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419880
        ;   Label: core_bodypart.cpp_CBodyPart_archive_FUN_00419880
    PUSH ESI                            ; 00419881
    PUSH EDI                            ; 00419882
    PUSH EBP                            ; 00419883
    SUB ESP,0x8                         ; 00419884
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00419887
    PUSH EBX                            ; 0041988b
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c1c0 ; 0041988c
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00419891
    PUSH 0x615cf9                       ; 00419894 | = "vertexCount"
    LEA EAX,[EBX + 0x174]               ; 00419899
    PUSH EAX                            ; 0041989f
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 004198a0
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004198a5
    PUSH 0x615d05                       ; 004198a8 | = "triCount"
    LEA EAX,[EBX + 0x180]               ; 004198ad
    PUSH EAX                            ; 004198b3
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 004198b4
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004198b9
    PUSH 0x615d0e                       ; 004198bc | = "textureCount"
    LEA EAX,[EBX + 0x18c]               ; 004198c1
    PUSH EAX                            ; 004198c7
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 004198c8
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    MOV EDX,dword ptr [0x00822038]      ; 004198cd | g_ActorReadingMode
    ADD ESP,0x8                         ; 004198d3
    CMP EDX,0x1                         ; 004198d6
    JZ 0x00419a98                       ; 004198d9
        ;   XREF to: 00419a98 (CONDITIONAL_JUMP)  ; LAB_00419a98
    MOV ECX,dword ptr [EBX + 0x174]     ; 004198df
    XOR EBP,EBP                         ; 004198e5
    TEST ECX,ECX                        ; 004198e7
    JLE 0x00419930                      ; 004198e9
        ;   XREF to: 00419930 (CONDITIONAL_JUMP)  ; LAB_00419930
    XOR EDI,EDI                         ; 004198eb
    MOV ESI,dword ptr [EBX + 0x178]     ; 004198ed
        ;   Label: LAB_004198ed
    MOV EAX,dword ptr [EDI + ESI*0x1 + 0x8] ; 004198f3
    PUSH EAX                            ; 004198f7
    MOV EDX,dword ptr [EDI + ESI*0x1 + 0x4] ; 004198f8
    PUSH EDX                            ; 004198fc
    MOV ECX,dword ptr [EDI + ESI*0x1]   ; 004198fd
    PUSH ECX                            ; 00419900
    PUSH 0x615d53                       ; 00419901 | = "\t%d,%d,%d\n"
    MOV ESI,dword ptr [0x00822034]      ; 00419906 | g_ActorDataFile
    PUSH ESI                            ; 0041990c
    ADD EDI,0xc                         ; 0041990d
    INC EBP                             ; 00419910
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00419911
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EAX,dword ptr [EBX + 0x174]     ; 00419916
    ADD ESP,0x14                        ; 0041991c
    CMP EBP,EAX                         ; 0041991f
    JL 0x004198ed                       ; 00419921
        ;   XREF to: 004198ed (CONDITIONAL_JUMP)  ; LAB_004198ed
    LEA EAX,[EAX]                       ; 00419923
    LEA EDX,[EDX]                       ; 00419929
    NOP                                 ; 0041992f
    MOV EDX,dword ptr [EBX + 0x180]     ; 00419930
        ;   Label: LAB_00419930
    XOR EBP,EBP                         ; 00419936
    TEST EDX,EDX                        ; 00419938
    JLE 0x004199b0                      ; 0041993a
        ;   XREF to: 004199b0 (CONDITIONAL_JUMP)  ; LAB_004199b0
    MOV dword ptr [ESP],EBP             ; 0041993c
    XOR EDI,EDI                         ; 0041993f
    MOV ECX,dword ptr [ESP]             ; 00419941
        ;   Label: LAB_00419941
    MOV ESI,dword ptr [EBX + 0x184]     ; 00419944
    ADD ESI,ECX                         ; 0041994a
    MOV EAX,dword ptr [ESI + 0x38]      ; 0041994c
    PUSH EAX                            ; 0041994f
    MOV EDX,dword ptr [ESI + 0x34]      ; 00419950
    PUSH EDX                            ; 00419953
    MOV ECX,dword ptr [ESI + 0x30]      ; 00419954
    PUSH ECX                            ; 00419957
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00419958
    PUSH EAX                            ; 0041995b
    MOV EDX,dword ptr [ESI + 0x28]      ; 0041995c
    PUSH EDX                            ; 0041995f
    MOV ECX,dword ptr [ESI + 0x24]      ; 00419960
    PUSH ECX                            ; 00419963
    MOV EAX,dword ptr [ESI + 0x20]      ; 00419964
    PUSH EAX                            ; 00419967
    MOV EDX,dword ptr [ESI + 0x1c]      ; 00419968
    PUSH EDX                            ; 0041996b
    MOV ECX,dword ptr [ESI + 0x18]      ; 0041996c
    MOV EAX,dword ptr [EBX + 0x188]     ; 0041996f
    PUSH ECX                            ; 00419975
    MOV ESI,dword ptr [EDI + EAX*0x1]   ; 00419976
    PUSH ESI                            ; 00419979
    PUSH 0x615d5e                       ; 0041997a | = "\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n"
    MOV EAX,[0x00822034]                ; 0041997f | g_ActorDataFile
    PUSH EAX                            ; 00419984
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00419985
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x30                        ; 0041998a
    ADD EDI,0x4                         ; 0041998d
    MOV EDX,dword ptr [ESP]             ; 00419990
    INC EBP                             ; 00419993
    ADD EDX,0x3c                        ; 00419994
    MOV ECX,dword ptr [EBX + 0x180]     ; 00419997
    MOV dword ptr [ESP],EDX             ; 0041999d
    CMP EBP,ECX                         ; 004199a0
    JL 0x00419941                       ; 004199a2
        ;   XREF to: 00419941 (CONDITIONAL_JUMP)  ; LAB_00419941
    LEA EAX,[EAX]                       ; 004199a4
    LEA EDX,[EDX]                       ; 004199aa
    MOV ESI,dword ptr [EBX + 0x18c]     ; 004199b0
        ;   Label: LAB_004199b0
    XOR EDI,EDI                         ; 004199b6
    TEST ESI,ESI                        ; 004199b8
    JLE 0x004199f0                      ; 004199ba
        ;   XREF to: 004199f0 (CONDITIONAL_JUMP)  ; LAB_004199f0
    LEA ESI,[EBX + 0x198]               ; 004199bc
    PUSH ESI                            ; 004199c2
        ;   Label: LAB_004199c2
    PUSH 0x615d81                       ; 004199c3 | = "\t\"%s\"\n"
    MOV EDX,dword ptr [0x00822034]      ; 004199c8 | g_ActorDataFile
    PUSH EDX                            ; 004199ce
    INC EDI                             ; 004199cf
    ADD ESI,0x18                        ; 004199d0
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004199d3
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV ECX,dword ptr [EBX + 0x18c]     ; 004199d8
    ADD ESP,0xc                         ; 004199de
    CMP EDI,ECX                         ; 004199e1
    JL 0x004199c2                       ; 004199e3
        ;   XREF to: 004199c2 (CONDITIONAL_JUMP)  ; LAB_004199c2
    LEA EAX,[EAX]                       ; 004199e5
    LEA EDX,[EDX]                       ; 004199eb
    MOV EBX,EBX                         ; 004199ee
    CMP dword ptr [0x0066e52c],0x2      ; 004199f0 | g_CBodyPartClassVersion
        ;   Label: LAB_004199f0
    JL 0x00419a21                       ; 004199f7
        ;   XREF to: 00419a21 (CONDITIONAL_JUMP)  ; LAB_00419a21
    PUSH 0x615d88                       ; 004199f9 | = "simBox"
    LEA EAX,[EBX + 0xccc]               ; 004199fe
    PUSH EAX                            ; 00419a04
    CALL core_actor.cpp_archiveBox_FUN_0040bd70 ; 00419a05
        ;   XREF to: 0040bd70 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveBox_FUN_0040bd70(CBox * box_ptr, char * property_name)
    ADD ESP,0x8                         ; 00419a0a
    PUSH 0x615d8f                       ; 00419a0d | = "carriedByActor"
    LEA EAX,[EBX + 0xf28]               ; 00419a12
    PUSH EAX                            ; 00419a18
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 00419a19
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 00419a1e
    CMP dword ptr [0x0066e52c],0x3      ; 00419a21 | g_CBodyPartClassVersion
        ;   Label: LAB_00419a21
    JL 0x00419a66                       ; 00419a28
        ;   XREF to: 00419a66 (CONDITIONAL_JUMP)  ; LAB_00419a66
    PUSH 0x615d9e                       ; 00419a2a | = "bloodType"
    LEA EAX,[EBX + 0xcb8]               ; 00419a2f
    PUSH EAX                            ; 00419a35
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 00419a36
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00419a3b
    PUSH 0x615da8                       ; 00419a3e | = "dontUseNormals"
    LEA EAX,[EBX + 0xcb0]               ; 00419a43
    PUSH EAX                            ; 00419a49
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 00419a4a
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00419a4f
    PUSH 0x615db7                       ; 00419a52 | = "transparentGeometryFlag"
    LEA EAX,[EBX + 0xcb4]               ; 00419a57
    PUSH EAX                            ; 00419a5d
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 00419a5e
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00419a63
    CMP dword ptr [0x0066e52c],0x4      ; 00419a66 | g_CBodyPartClassVersion
        ;   Label: LAB_00419a66
    JL 0x00419a83                       ; 00419a6d
        ;   XREF to: 00419a83 (CONDITIONAL_JUMP)  ; LAB_00419a83
    PUSH 0x615dcf                       ; 00419a6f | = "renderInBackground"
    LEA EAX,[EBX + 0x158]               ; 00419a74
    PUSH EAX                            ; 00419a7a
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 00419a7b
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00419a80
    CMP dword ptr [0x0066e52c],0x5      ; 00419a83 | g_CBodyPartClassVersion
        ;   Label: LAB_00419a83
    JGE 0x00419bbe                      ; 00419a8a
        ;   XREF to: 00419bbe (CONDITIONAL_JUMP)  ; LAB_00419bbe
    ADD ESP,0x8                         ; 00419a90
    POP EBP                             ; 00419a93
    POP EDI                             ; 00419a94
    POP ESI                             ; 00419a95
    POP EBX                             ; 00419a96
    RET                                 ; 00419a97
    MOV ESI,dword ptr [EBX + 0x180]     ; 00419a98
        ;   Label: LAB_00419a98
    PUSH ESI                            ; 00419a9e
    MOV EDI,dword ptr [EBX + 0x174]     ; 00419a9f
    PUSH EDI                            ; 00419aa5
    PUSH EBX                            ; 00419aa6
    CALL core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0 ; 00419aa7
        ;   XREF to: 004191d0 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0(CBodyPart * this_ptr, int vertex_count, int tri_count)
    XOR EDI,EDI                         ; 00419aac
    MOV EBP,dword ptr [EBX + 0x174]     ; 00419aae
    ADD ESP,0xc                         ; 00419ab4
    TEST EBP,EBP                        ; 00419ab7
    JLE 0x00419af0                      ; 00419ab9
        ;   XREF to: 00419af0 (CONDITIONAL_JUMP)  ; LAB_00419af0
    XOR EBP,EBP                         ; 00419abb
    MOV ESI,dword ptr [EBX + 0x178]     ; 00419abd
        ;   Label: LAB_00419abd
    ADD ESI,EBP                         ; 00419ac3
    LEA EAX,[ESI + 0x8]                 ; 00419ac5
    PUSH EAX                            ; 00419ac8
    LEA EAX,[ESI + 0x4]                 ; 00419ac9
    PUSH EAX                            ; 00419acc
    PUSH ESI                            ; 00419acd
    PUSH 0x615d1b                       ; 00419ace | = "%d,%d,%d\n"
    MOV ESI,dword ptr [0x00822034]      ; 00419ad3 | g_ActorDataFile
    PUSH ESI                            ; 00419ad9
    INC EDI                             ; 00419ada
    ADD EBP,0xc                         ; 00419adb
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00419ade
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV EAX,dword ptr [EBX + 0x174]     ; 00419ae3
    ADD ESP,0x14                        ; 00419ae9
    CMP EDI,EAX                         ; 00419aec
    JL 0x00419abd                       ; 00419aee
        ;   XREF to: 00419abd (CONDITIONAL_JUMP)  ; LAB_00419abd
    XOR EDX,EDX                         ; 00419af0
        ;   Label: LAB_00419af0
    MOV ECX,dword ptr [EBX + 0x180]     ; 00419af2
    MOV dword ptr [ESP + 0x4],EDX       ; 00419af8
    TEST ECX,ECX                        ; 00419afc
    JLE 0x00419b70                      ; 00419afe
        ;   XREF to: 00419b70 (CONDITIONAL_JUMP)  ; LAB_00419b70
    XOR EBP,EBP                         ; 00419b04
    XOR EDI,EDI                         ; 00419b06
    MOV ESI,dword ptr [EBX + 0x184]     ; 00419b08
        ;   Label: LAB_00419b08
    ADD ESI,EBP                         ; 00419b0e
    LEA EAX,[ESI + 0x38]                ; 00419b10
    PUSH EAX                            ; 00419b13
    LEA EAX,[ESI + 0x34]                ; 00419b14
    PUSH EAX                            ; 00419b17
    LEA EAX,[ESI + 0x30]                ; 00419b18
    PUSH EAX                            ; 00419b1b
    LEA EAX,[ESI + 0x2c]                ; 00419b1c
    PUSH EAX                            ; 00419b1f
    LEA EAX,[ESI + 0x28]                ; 00419b20
    PUSH EAX                            ; 00419b23
    LEA EAX,[ESI + 0x24]                ; 00419b24
    PUSH EAX                            ; 00419b27
    LEA EAX,[ESI + 0x20]                ; 00419b28
    PUSH EAX                            ; 00419b2b
    LEA EAX,[ESI + 0x1c]                ; 00419b2c
    PUSH EAX                            ; 00419b2f
    LEA EAX,[ESI + 0x18]                ; 00419b30
    PUSH EAX                            ; 00419b33
    MOV EAX,dword ptr [EBX + 0x188]     ; 00419b34
    ADD EAX,EDI                         ; 00419b3a
    PUSH EAX                            ; 00419b3c
    PUSH 0x615d25                       ; 00419b3d | = "\t\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n"
    MOV EAX,[0x00822034]                ; 00419b42 | g_ActorDataFile
    PUSH EAX                            ; 00419b47
    ADD EBP,0x3c                        ; 00419b48
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00419b4b
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x30                        ; 00419b50
    ADD EDI,0x4                         ; 00419b53
    MOV EDX,dword ptr [ESP + 0x4]       ; 00419b56
    MOV dword ptr [ESI + 0x4],0x3       ; 00419b5a
    INC EDX                             ; 00419b61
    MOV ECX,dword ptr [EBX + 0x180]     ; 00419b62
    MOV dword ptr [ESP + 0x4],EDX       ; 00419b68
    CMP EDX,ECX                         ; 00419b6c
    JL 0x00419b08                       ; 00419b6e
        ;   XREF to: 00419b08 (CONDITIONAL_JUMP)  ; LAB_00419b08
    MOV ESI,dword ptr [EBX + 0x18c]     ; 00419b70
        ;   Label: LAB_00419b70
    XOR EDI,EDI                         ; 00419b76
    TEST ESI,ESI                        ; 00419b78
    JLE 0x00419bb0                      ; 00419b7a
        ;   XREF to: 00419bb0 (CONDITIONAL_JUMP)  ; LAB_00419bb0
    LEA ESI,[EBX + 0x198]               ; 00419b7c
    PUSH ESI                            ; 00419b82
        ;   Label: LAB_00419b82
    PUSH 0x615d49                       ; 00419b83 | = " \"%[^\"]\"\n"
    MOV EBP,dword ptr [0x00822034]      ; 00419b88 | g_ActorDataFile
    PUSH EBP                            ; 00419b8e
    INC EDI                             ; 00419b8f
    ADD ESI,0x18                        ; 00419b90
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00419b93
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV EAX,dword ptr [EBX + 0x18c]     ; 00419b98
    ADD ESP,0xc                         ; 00419b9e
    CMP EDI,EAX                         ; 00419ba1
    JL 0x00419b82                       ; 00419ba3
        ;   XREF to: 00419b82 (CONDITIONAL_JUMP)  ; LAB_00419b82
    LEA EAX,[EAX]                       ; 00419ba5
    LEA EDX,[EDX]                       ; 00419bab
    MOV EBX,EBX                         ; 00419bae
    PUSH EBX                            ; 00419bb0
        ;   Label: LAB_00419bb0
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_0041a050 ; 00419bb1
        ;   XREF to: 0041a050 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_0041a050(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 00419bb6
    JMP 0x004199f0                      ; 00419bb9
        ;   XREF to: 004199f0 (UNCONDITIONAL_JUMP)  ; LAB_004199f0
    PUSH 0x615de2                       ; 00419bbe | = "dontPickMeUp"
        ;   Label: LAB_00419bbe
    ADD EBX,0xcc4                       ; 00419bc3
    PUSH EBX                            ; 00419bc9
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 00419bca
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00419bcf
    ADD ESP,0x8                         ; 00419bd2
    POP EBP                             ; 00419bd5
    POP EDI                             ; 00419bd6
    POP ESI                             ; 00419bd7
    POP EBX                             ; 00419bd8
    RET                                 ; 00419bd9


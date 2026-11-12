; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_archive_FUN_00414fd0(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_vertexCount_005b6b2a
;   TerminatedCString s_triCount_005b6b36
;   TerminatedCString s_textureCount_005b6b3f
;   TerminatedCString s_d_d_d_005b6b4c
;   TerminatedCString s_d_d_d_d_d_d_d_d_d_d_005b6b56
;   TerminatedCString s_anon_005b6b7a
;   TerminatedCString s_d_d_d_005b6b84
;   TerminatedCString s_d_d_d_d_d_d_d_d_d_d_005b6b8f
;   TerminatedCString s_s_005b6bb2
;   TerminatedCString s_simBox_005b6bb9
;   TerminatedCString s_carriedByActor_005b6bc0
;   TerminatedCString s_bloodType_005b6bcf
;   TerminatedCString s_dontUseNormals_005b6bd9
;   TerminatedCString s_transparentGeometryFlag_005b6be8
;   TerminatedCString s_renderInBackground_005b6c00
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b930
;   core_actor.cpp_archiveBox_FUN_0040be30
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0
;   core_bodypart.cpp_FUN_00414910
;   crt_stdio.c_fscanf_FUN_005a3230
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414fd0
        ;   Label: core_bodypart.cpp_CBodyPart_archive_FUN_00414fd0
    PUSH ESI                            ; 00414fd1
    PUSH EDI                            ; 00414fd2
    PUSH EBP                            ; 00414fd3
    SUB ESP,0x8                         ; 00414fd4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00414fd7
    PUSH EBX                            ; 00414fdb
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 00414fdc
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00414fe1
    PUSH 0x5b6b2a                       ; 00414fe4 | = "vertexCount"
    LEA EAX,[EBX + 0x174]               ; 00414fe9
    PUSH EAX                            ; 00414fef
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00414ff0
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00414ff5
    PUSH 0x5b6b36                       ; 00414ff8 | = "triCount"
    LEA EAX,[EBX + 0x180]               ; 00414ffd
    PUSH EAX                            ; 00415003
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00415004
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00415009
    PUSH 0x5b6b3f                       ; 0041500c | = "textureCount"
    LEA EAX,[EBX + 0x18c]               ; 00415011
    PUSH EAX                            ; 00415017
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00415018
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    MOV EDX,dword ptr [0x007df9b8]      ; 0041501d | DAT_007df9b8
    ADD ESP,0x8                         ; 00415023
    CMP EDX,0x1                         ; 00415026
    JZ 0x00415205                       ; 00415029
        ;   XREF to: 00415205 (CONDITIONAL_JUMP)  ; LAB_00415205
    MOV ECX,dword ptr [EBX + 0x174]     ; 0041502f
    XOR EDI,EDI                         ; 00415035
    TEST ECX,ECX                        ; 00415037
    JLE 0x00415080                      ; 00415039
        ;   XREF to: 00415080 (CONDITIONAL_JUMP)  ; LAB_00415080
    XOR EBP,EBP                         ; 0041503b
    MOV ESI,dword ptr [EBX + 0x178]     ; 0041503d
        ;   Label: LAB_0041503d
    MOV EDX,dword ptr [ESI + EBP*0x1 + 0x8] ; 00415043
    PUSH EDX                            ; 00415047
    MOV ECX,dword ptr [ESI + EBP*0x1 + 0x4] ; 00415048
    PUSH ECX                            ; 0041504c
    MOV EAX,dword ptr [ESI + EBP*0x1]   ; 0041504d
    PUSH EAX                            ; 00415050
    PUSH 0x5b6b84                       ; 00415051 | = "\t%d,%d,%d\n"
    MOV EDX,dword ptr [0x007df9b4]      ; 00415056 | DAT_007df9b4
    PUSH EDX                            ; 0041505c
    ADD EBP,0xc                         ; 0041505d
    INC EDI                             ; 00415060
    CALL crt_unknown.c_FUN_005a3140     ; 00415061
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV ECX,dword ptr [EBX + 0x174]     ; 00415066
    ADD ESP,0x14                        ; 0041506c
    CMP EDI,ECX                         ; 0041506f
    JL 0x0041503d                       ; 00415071
        ;   XREF to: 0041503d (CONDITIONAL_JUMP)  ; LAB_0041503d
    LEA EAX,[EAX]                       ; 00415073
    LEA EDX,[EDX]                       ; 00415079
    NOP                                 ; 0041507f
    MOV ESI,dword ptr [EBX + 0x180]     ; 00415080
        ;   Label: LAB_00415080
    XOR EBP,EBP                         ; 00415086
    TEST ESI,ESI                        ; 00415088
    JLE 0x00415100                      ; 0041508a
        ;   XREF to: 00415100 (CONDITIONAL_JUMP)  ; LAB_00415100
    MOV dword ptr [ESP + 0x4],EBP       ; 00415090
    XOR EDI,EDI                         ; 00415094
    MOV EAX,dword ptr [ESP + 0x4]       ; 00415096
        ;   Label: LAB_00415096
    MOV ESI,dword ptr [EBX + 0x184]     ; 0041509a
    ADD ESI,EAX                         ; 004150a0
    MOV EDX,dword ptr [ESI + 0x38]      ; 004150a2
    PUSH EDX                            ; 004150a5
    MOV ECX,dword ptr [ESI + 0x34]      ; 004150a6
    PUSH ECX                            ; 004150a9
    MOV EAX,dword ptr [ESI + 0x30]      ; 004150aa
    PUSH EAX                            ; 004150ad
    MOV EDX,dword ptr [ESI + 0x2c]      ; 004150ae
    PUSH EDX                            ; 004150b1
    MOV ECX,dword ptr [ESI + 0x28]      ; 004150b2
    PUSH ECX                            ; 004150b5
    MOV EAX,dword ptr [ESI + 0x24]      ; 004150b6
    PUSH EAX                            ; 004150b9
    MOV EDX,dword ptr [ESI + 0x20]      ; 004150ba
    PUSH EDX                            ; 004150bd
    MOV ECX,dword ptr [ESI + 0x1c]      ; 004150be
    PUSH ECX                            ; 004150c1
    MOV EAX,dword ptr [ESI + 0x18]      ; 004150c2
    PUSH EAX                            ; 004150c5
    MOV EAX,dword ptr [EBX + 0x188]     ; 004150c6
    MOV EDX,dword ptr [EDI + EAX*0x1]   ; 004150cc
    PUSH EDX                            ; 004150cf
    PUSH 0x5b6b8f                       ; 004150d0 | = "\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n"
    MOV ECX,dword ptr [0x007df9b4]      ; 004150d5 | DAT_007df9b4
    PUSH ECX                            ; 004150db
    CALL crt_unknown.c_FUN_005a3140     ; 004150dc
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x30                        ; 004150e1
    ADD EDI,0x4                         ; 004150e4
    MOV ESI,dword ptr [ESP + 0x4]       ; 004150e7
    INC EBP                             ; 004150eb
    ADD ESI,0x3c                        ; 004150ec
    MOV EAX,dword ptr [EBX + 0x180]     ; 004150ef
    MOV dword ptr [ESP + 0x4],ESI       ; 004150f5
    CMP EBP,EAX                         ; 004150f9
    JL 0x00415096                       ; 004150fb
        ;   XREF to: 00415096 (CONDITIONAL_JUMP)  ; LAB_00415096
    LEA EAX,[EAX]                       ; 004150fd
    MOV EDX,dword ptr [EBX + 0x18c]     ; 00415100
        ;   Label: LAB_00415100
    XOR EDI,EDI                         ; 00415106
    TEST EDX,EDX                        ; 00415108
    JLE 0x00415140                      ; 0041510a
        ;   XREF to: 00415140 (CONDITIONAL_JUMP)  ; LAB_00415140
    LEA ESI,[EBX + 0x198]               ; 0041510c
    PUSH ESI                            ; 00415112
        ;   Label: LAB_00415112
    PUSH 0x5b6bb2                       ; 00415113 | = "\t\"%s\"\n"
    MOV EBP,dword ptr [0x007df9b4]      ; 00415118 | DAT_007df9b4
    PUSH EBP                            ; 0041511e
    INC EDI                             ; 0041511f
    ADD ESI,0x18                        ; 00415120
    CALL crt_unknown.c_FUN_005a3140     ; 00415123
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EAX,dword ptr [EBX + 0x18c]     ; 00415128
    ADD ESP,0xc                         ; 0041512e
    CMP EDI,EAX                         ; 00415131
    JL 0x00415112                       ; 00415133
        ;   XREF to: 00415112 (CONDITIONAL_JUMP)  ; LAB_00415112
    LEA EAX,[EAX]                       ; 00415135
    LEA EDX,[EDX]                       ; 0041513b
    MOV EBX,EBX                         ; 0041513e
    CMP dword ptr [0x005f0d2c],0x2      ; 00415140 | g_CBodyPartClassVersion
        ;   Label: LAB_00415140
    JL 0x00415171                       ; 00415147
        ;   XREF to: 00415171 (CONDITIONAL_JUMP)  ; LAB_00415171
    PUSH 0x5b6bb9                       ; 00415149 | = "simBox"
    LEA EAX,[EBX + 0xcd0]               ; 0041514e
    PUSH EAX                            ; 00415154
    CALL core_actor.cpp_archiveBox_FUN_0040be30 ; 00415155
        ;   XREF to: 0040be30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveBox_FUN_0040be30(CBox * box_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041515a
    PUSH 0x5b6bc0                       ; 0041515d | = "carriedByActor"
    LEA EAX,[EBX + 0xf2c]               ; 00415162
    PUSH EAX                            ; 00415168
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 00415169
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b930(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041516e
    CMP dword ptr [0x005f0d2c],0x3      ; 00415171 | g_CBodyPartClassVersion
        ;   Label: LAB_00415171
    JL 0x004151b6                       ; 00415178
        ;   XREF to: 004151b6 (CONDITIONAL_JUMP)  ; LAB_004151b6
    PUSH 0x5b6bcf                       ; 0041517a | = "bloodType"
    LEA EAX,[EBX + 0xcb8]               ; 0041517f
    PUSH EAX                            ; 00415185
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00415186
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041518b
    PUSH 0x5b6bd9                       ; 0041518e | = "dontUseNormals"
    LEA EAX,[EBX + 0xcb0]               ; 00415193
    PUSH EAX                            ; 00415199
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0041519a
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041519f
    PUSH 0x5b6be8                       ; 004151a2 | = "transparentGeometryFlag"
    LEA EAX,[EBX + 0xcb4]               ; 004151a7
    PUSH EAX                            ; 004151ad
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004151ae
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004151b3
    CMP dword ptr [0x005f0d2c],0x4      ; 004151b6 | g_CBodyPartClassVersion
        ;   Label: LAB_004151b6
    JL 0x004151d3                       ; 004151bd
        ;   XREF to: 004151d3 (CONDITIONAL_JUMP)  ; LAB_004151d3
    PUSH 0x5b6c00                       ; 004151bf | = "renderInBackground"
    LEA EAX,[EBX + 0x158]               ; 004151c4
    PUSH EAX                            ; 004151ca
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004151cb
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004151d0
    CMP dword ptr [0x005f0d2c],0x5      ; 004151d3 | g_CBodyPartClassVersion
        ;   Label: LAB_004151d3
    JL 0x004151f0                       ; 004151da
        ;   XREF to: 004151f0 (CONDITIONAL_JUMP)  ; LAB_004151f0
    PUSH 0x5b6c13                       ; 004151dc | = "dontPickMeUp"
    LEA EAX,[EBX + 0xcc4]               ; 004151e1
    PUSH EAX                            ; 004151e7
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004151e8
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004151ed
    CMP dword ptr [0x005f0d2c],0x6      ; 004151f0 | g_CBodyPartClassVersion
        ;   Label: LAB_004151f0
    JGE 0x0041532e                      ; 004151f7
        ;   XREF to: 0041532e (CONDITIONAL_JUMP)  ; LAB_0041532e
    ADD ESP,0x8                         ; 004151fd
    POP EBP                             ; 00415200
    POP EDI                             ; 00415201
    POP ESI                             ; 00415202
    POP EBX                             ; 00415203
    RET                                 ; 00415204
    MOV ESI,dword ptr [EBX + 0x180]     ; 00415205
        ;   Label: LAB_00415205
    PUSH ESI                            ; 0041520b
    MOV EDI,dword ptr [EBX + 0x174]     ; 0041520c
    PUSH EDI                            ; 00415212
    PUSH EBX                            ; 00415213
    XOR EBP,EBP                         ; 00415214
    CALL core_bodypart.cpp_FUN_00414910 ; 00415216
        ;   XREF to: 00414910 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_00414910()
    MOV EAX,dword ptr [EBX + 0x174]     ; 0041521b
    ADD ESP,0xc                         ; 00415221
    TEST EAX,EAX                        ; 00415224
    JLE 0x00415260                      ; 00415226
        ;   XREF to: 00415260 (CONDITIONAL_JUMP)  ; LAB_00415260
    XOR EDI,EDI                         ; 00415228
    MOV ESI,dword ptr [EBX + 0x178]     ; 0041522a
        ;   Label: LAB_0041522a
    ADD ESI,EDI                         ; 00415230
    LEA EAX,[ESI + 0x8]                 ; 00415232
    PUSH EAX                            ; 00415235
    LEA EAX,[ESI + 0x4]                 ; 00415236
    PUSH EAX                            ; 00415239
    PUSH ESI                            ; 0041523a
    PUSH 0x5b6b4c                       ; 0041523b | = "%d,%d,%d\n"
    MOV EDX,dword ptr [0x007df9b4]      ; 00415240 | DAT_007df9b4
    PUSH EDX                            ; 00415246
    INC EBP                             ; 00415247
    ADD EDI,0xc                         ; 00415248
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0041524b
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    MOV ECX,dword ptr [EBX + 0x174]     ; 00415250
    ADD ESP,0x14                        ; 00415256
    CMP EBP,ECX                         ; 00415259
    JL 0x0041522a                       ; 0041525b
        ;   XREF to: 0041522a (CONDITIONAL_JUMP)  ; LAB_0041522a
    LEA EAX,[EAX]                       ; 0041525d
    MOV ESI,dword ptr [EBX + 0x180]     ; 00415260
        ;   Label: LAB_00415260
    XOR EBP,EBP                         ; 00415266
    TEST ESI,ESI                        ; 00415268
    JLE 0x004152e0                      ; 0041526a
        ;   XREF to: 004152e0 (CONDITIONAL_JUMP)  ; LAB_004152e0
    MOV dword ptr [ESP],EBP             ; 00415270
    XOR EDI,EDI                         ; 00415273
    MOV ESI,dword ptr [EBX + 0x184]     ; 00415275
        ;   Label: LAB_00415275
    ADD ESI,EDI                         ; 0041527b
    LEA EAX,[ESI + 0x38]                ; 0041527d
    PUSH EAX                            ; 00415280
    LEA EAX,[ESI + 0x34]                ; 00415281
    PUSH EAX                            ; 00415284
    LEA EAX,[ESI + 0x30]                ; 00415285
    PUSH EAX                            ; 00415288
    LEA EAX,[ESI + 0x2c]                ; 00415289
    PUSH EAX                            ; 0041528c
    LEA EAX,[ESI + 0x28]                ; 0041528d
    PUSH EAX                            ; 00415290
    LEA EAX,[ESI + 0x24]                ; 00415291
    PUSH EAX                            ; 00415294
    LEA EAX,[ESI + 0x20]                ; 00415295
    PUSH EAX                            ; 00415298
    LEA EAX,[ESI + 0x1c]                ; 00415299
    PUSH EAX                            ; 0041529c
    LEA EAX,[ESI + 0x18]                ; 0041529d
    MOV EDX,dword ptr [ESP + 0x20]      ; 004152a0
    PUSH EAX                            ; 004152a4
    MOV EAX,dword ptr [EBX + 0x188]     ; 004152a5
    ADD EAX,EDX                         ; 004152ab
    PUSH EAX                            ; 004152ad
    PUSH 0x5b6b56                       ; 004152ae | = "\t\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n"
    MOV ECX,dword ptr [0x007df9b4]      ; 004152b3 | DAT_007df9b4
    PUSH ECX                            ; 004152b9
    INC EBP                             ; 004152ba
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004152bb
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0x30                        ; 004152c0
    MOV dword ptr [ESI + 0x4],0x3       ; 004152c3
    MOV ESI,dword ptr [ESP]             ; 004152ca
    ADD EDI,0x3c                        ; 004152cd
    ADD ESI,0x4                         ; 004152d0
    MOV EAX,dword ptr [EBX + 0x180]     ; 004152d3
    MOV dword ptr [ESP],ESI             ; 004152d9
    CMP EBP,EAX                         ; 004152dc
    JL 0x00415275                       ; 004152de
        ;   XREF to: 00415275 (CONDITIONAL_JUMP)  ; LAB_00415275
    MOV EDX,dword ptr [EBX + 0x18c]     ; 004152e0
        ;   Label: LAB_004152e0
    XOR EDI,EDI                         ; 004152e6
    TEST EDX,EDX                        ; 004152e8
    JLE 0x00415320                      ; 004152ea
        ;   XREF to: 00415320 (CONDITIONAL_JUMP)  ; LAB_00415320
    LEA ESI,[EBX + 0x198]               ; 004152ec
    PUSH ESI                            ; 004152f2
        ;   Label: LAB_004152f2
    PUSH 0x5b6b7a                       ; 004152f3 | = " \"%[^\"]\"\n"
    MOV EBP,dword ptr [0x007df9b4]      ; 004152f8 | DAT_007df9b4
    PUSH EBP                            ; 004152fe
    INC EDI                             ; 004152ff
    ADD ESI,0x18                        ; 00415300
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00415303
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    MOV EAX,dword ptr [EBX + 0x18c]     ; 00415308
    ADD ESP,0xc                         ; 0041530e
    CMP EDI,EAX                         ; 00415311
    JL 0x004152f2                       ; 00415313
        ;   XREF to: 004152f2 (CONDITIONAL_JUMP)  ; LAB_004152f2
    LEA EAX,[EAX]                       ; 00415315
    LEA EDX,[EDX]                       ; 0041531b
    MOV EBX,EBX                         ; 0041531e
    PUSH EBX                            ; 00415320
        ;   Label: LAB_00415320
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0 ; 00415321
        ;   XREF to: 004157c0 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 00415326
    JMP 0x00415140                      ; 00415329
        ;   XREF to: 00415140 (UNCONDITIONAL_JUMP)  ; LAB_00415140
    PUSH 0x5b6c20                       ; 0041532e | = "dontGoIntoBackground"
        ;   Label: LAB_0041532e
    ADD EBX,0xcc8                       ; 00415333
    PUSH EBX                            ; 00415339
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0041533a
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041533f
    ADD ESP,0x8                         ; 00415342
    POP EBP                             ; 00415345
    POP EDI                             ; 00415346
    POP ESI                             ; 00415347
    POP EBX                             ; 00415348
    RET                                 ; 00415349


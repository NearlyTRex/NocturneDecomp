; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0(CLodMesh * this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x3c]:8  local_3c
; undefined8       Stack[-0x34]:8  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_skeledit.cpp_FUN_0058c190 at 0058d376
;   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 at 0051dd6e
;
; Referenced Globals:
;   TerminatedCString s_shape_meshlod_cpp_00637dbd
;   TerminatedCString s_LodMesh_fixupAfterCram_t_00637dd2
;   double DOUBLE_00637e15 = 0.00390625
;   double DOUBLE_00637e1d = 256
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_floor_FUN_005feb90
;   engine_texture.cpp_clearTextureCache_FUN_005dd8e0
;   shape_design.c_findTextureByFilename_FUN_0046dfc0
;   shape_design.c_fixupCramUV_FUN_0046e090
;   shape_design.c_getAtlasMapIndex_FUN_0046e030
;   shape_design.c_getLastTextureProcessIndex_FUN_0046a860
;   shape_design.c_getTextureName_FUN_0046e060
;   shape_meshlod.cpp_CLodMesh_findOrAddSubmesh_FUN_00518790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051bac0
        ;   Label: shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0
    PUSH ESI                            ; 0051bac1
    PUSH EDI                            ; 0051bac2
    PUSH EBP                            ; 0051bac3
    SUB ESP,0x24                        ; 0051bac4
    MOV EAX,dword ptr [ESP + 0x38]      ; 0051bac7
    XOR EDX,EDX                         ; 0051bacb
    MOV ECX,dword ptr [EAX + 0x8]       ; 0051bacd
    MOV dword ptr [ESP + 0x18],EDX      ; 0051bad0
    TEST ECX,ECX                        ; 0051bad4
    JLE 0x0051bb11                      ; 0051bad6 | LAB_0051bb11
        ;   XREF to: 0051bb11 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x14],EDX      ; 0051bad8
    MOV EBP,dword ptr [ESP + 0x38]      ; 0051badc
        ;   Label: LAB_0051badc
    MOV EAX,dword ptr [ESP + 0x14]      ; 0051bae0
    MOV EBP,dword ptr [EBP + 0xc]       ; 0051bae4
    ADD EBP,EAX                         ; 0051bae7
    CMP dword ptr [EBP + 0x40],0x0      ; 0051bae9
    JZ 0x0051bb3c                       ; 0051baed | LAB_0051bb3c
        ;   XREF to: 0051bb3c (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x14]      ; 0051baef
        ;   Label: LAB_0051baef
    ADD EBX,0x8c                        ; 0051baf3
    MOV ESI,dword ptr [ESP + 0x18]      ; 0051baf9
    MOV dword ptr [ESP + 0x14],EBX      ; 0051bafd
    MOV EBX,dword ptr [ESP + 0x38]      ; 0051bb01
    INC ESI                             ; 0051bb05
    MOV EDI,dword ptr [EBX + 0x8]       ; 0051bb06
    MOV dword ptr [ESP + 0x18],ESI      ; 0051bb09
    CMP ESI,EDI                         ; 0051bb0d
    JL 0x0051badc                       ; 0051bb0f | LAB_0051badc
        ;   XREF to: 0051badc (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x38]      ; 0051bb11
        ;   Label: LAB_0051bb11
    MOV ESI,dword ptr [ESP + 0x38]      ; 0051bb15
    XOR EBX,EBX                         ; 0051bb19
    MOV dword ptr [EAX + 0x10],0x0      ; 0051bb1b
    CALL shape_design.c_getLastTextureProcessIndex_FUN_0046a860 ; 0051bb22 | int shape_design.c_getLastTextureProcessIndex_FUN_0046a860()
        ;   Label: LAB_0051bb22
        ;   XREF to: 0046a860 (UNCONDITIONAL_CALL)
    CMP EBX,EAX                         ; 0051bb27
    JL 0x0051bca7                       ; 0051bb29 | LAB_0051bca7
        ;   XREF to: 0051bca7 (CONDITIONAL_JUMP)
    CALL engine_texture.cpp_clearTextureCache_FUN_005dd8e0 ; 0051bb2f | void engine_texture.cpp_clearTextureCache_FUN_005dd8e0()
        ;   XREF to: 005dd8e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x24                        ; 0051bb34
    POP EBP                             ; 0051bb37
    POP EDI                             ; 0051bb38
    POP ESI                             ; 0051bb39
    POP EBX                             ; 0051bb3a
    RET                                 ; 0051bb3b
    MOV ECX,dword ptr [EBP]             ; 0051bb3c
        ;   Label: LAB_0051bb3c
    TEST ECX,ECX                        ; 0051bb3f
    JL 0x0051baef                       ; 0051bb41 | LAB_0051baef
        ;   XREF to: 0051baef (CONDITIONAL_JUMP)
    IMUL EAX,ECX,0x48                   ; 0051bb43
    MOV EBX,dword ptr [ESP + 0x38]      ; 0051bb46
    MOV EBX,dword ptr [EBX + 0x14]      ; 0051bb4a
    ADD EAX,EBX                         ; 0051bb4d
    ADD EAX,0x8                         ; 0051bb4f
    PUSH EAX                            ; 0051bb52
    CALL shape_design.c_findTextureByFilename_FUN_0046dfc0 ; 0051bb53 | int shape_design.c_findTextureByFilename_FUN_0046dfc0(char * filename)
        ;   XREF to: 0046dfc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0051bb58
    MOV ESI,EAX                         ; 0051bb5b
    TEST EAX,EAX                        ; 0051bb5d
    JL 0x0051bc6d                       ; 0051bb5f | LAB_0051bc6d
        ;   XREF to: 0051bc6d (CONDITIONAL_JUMP)
    MOV ECX,0x40800000                  ; 0051bb65
        ;   Label: LAB_0051bb65
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0051bb6a
    LEA EBX,[EBP + 0x8]                 ; 0051bb6d
    MOV dword ptr [ESP + 0x1c],EAX      ; 0051bb70
    LEA EDI,[EBP + 0x18]                ; 0051bb74
    MOV EAX,dword ptr [EBP + 0x20]      ; 0051bb77
    MOV dword ptr [ESP + 0x10],ECX      ; 0051bb7a
    MOV dword ptr [ESP + 0x20],EAX      ; 0051bb7e
    FLD float ptr [EBX + 0x1c]          ; 0051bb82
        ;   Label: LAB_0051bb82
    FCOMP float ptr [ESP + 0x1c]        ; 0051bb85
    FNSTSW AX                           ; 0051bb89
    SAHF                                ; 0051bb8b
    JNC 0x0051bb95                      ; 0051bb8c | LAB_0051bb95
        ;   XREF to: 0051bb95 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0051bb8e
    MOV dword ptr [ESP + 0x1c],EAX      ; 0051bb91
    FLD float ptr [EBX + 0x20]          ; 0051bb95
        ;   Label: LAB_0051bb95
    FCOMP float ptr [ESP + 0x20]        ; 0051bb98
    FNSTSW AX                           ; 0051bb9c
    SAHF                                ; 0051bb9e
    JNC 0x0051bba8                      ; 0051bb9f | LAB_0051bba8
        ;   XREF to: 0051bba8 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x20]      ; 0051bba1
    MOV dword ptr [ESP + 0x20],EAX      ; 0051bba4
    ADD EBX,0x8                         ; 0051bba8
        ;   Label: LAB_0051bba8
    CMP EBX,EDI                         ; 0051bbab
    JNZ 0x0051bb82                      ; 0051bbad | LAB_0051bb82
        ;   XREF to: 0051bb82 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x1c]          ; 0051bbaf
    FADD float ptr [ESP + 0x10]         ; 0051bbb3
    FMUL double ptr [0x00637e15]        ; 0051bbb7 | double DOUBLE_00637e15
    SUB ESP,0x8                         ; 0051bbbd
    FSTP double ptr [ESP]               ; 0051bbc0
    CALL crt_math.c_floor_FUN_005feb90  ; 0051bbc3 | double crt_math.c_floor_FUN_005feb90(double input_value)
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x8],EAX       ; 0051bbc8
    MOV dword ptr [ESP + 0xc],EDX       ; 0051bbcc
    FLD double ptr [ESP + 0x8]          ; 0051bbd0
    ADD ESP,0x8                         ; 0051bbd4
    FLD float ptr [ESP + 0x20]          ; 0051bbd7
    FADD float ptr [ESP + 0x10]         ; 0051bbdb
    FXCH                                ; 0051bbdf
    FMUL double ptr [0x00637e1d]        ; 0051bbe1 | double DOUBLE_00637e1d
    FXCH                                ; 0051bbe7
    FMUL double ptr [0x00637e15]        ; 0051bbe9 | double DOUBLE_00637e15
    FXCH                                ; 0051bbef
    FSTP float ptr [ESP + 0x1c]         ; 0051bbf1
    SUB ESP,0x8                         ; 0051bbf5
    FSTP double ptr [ESP]               ; 0051bbf8
    CALL crt_math.c_floor_FUN_005feb90  ; 0051bbfb | double crt_math.c_floor_FUN_005feb90(double input_value)
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x8],EAX       ; 0051bc00
    MOV dword ptr [ESP + 0xc],EDX       ; 0051bc04
    FLD double ptr [ESP + 0x8]          ; 0051bc08
    FMUL double ptr [0x00637e1d]        ; 0051bc0c | double DOUBLE_00637e1d
    MOV EBX,EBP                         ; 0051bc12
    ADD ESP,0x8                         ; 0051bc14
    LEA EDI,[EBP + 0x18]                ; 0051bc17
    FSTP float ptr [ESP + 0x20]         ; 0051bc1a
    FLD float ptr [EBX + 0x1c]          ; 0051bc1e
        ;   Label: LAB_0051bc1e
    LEA EAX,[ESP + 0xc]                 ; 0051bc21
    FSUB float ptr [ESP + 0x1c]         ; 0051bc25
    PUSH EAX                            ; 0051bc29
    FSTP float ptr [ESP + 0xc]          ; 0051bc2a
    LEA EAX,[ESP + 0xc]                 ; 0051bc2e
    FLD float ptr [EBX + 0x20]          ; 0051bc32
    PUSH EAX                            ; 0051bc35
    FSUB float ptr [ESP + 0x28]         ; 0051bc36
    PUSH ESI                            ; 0051bc3a
    FSTP float ptr [ESP + 0x18]         ; 0051bc3b
    CALL shape_design.c_fixupCramUV_FUN_0046e090 ; 0051bc3f | void shape_design.c_fixupCramUV_FUN_0046e090(int atlas_texture_index, float * u_coord, float * v_coord)
        ;   XREF to: 0046e090 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0051bc44
    MOV EAX,dword ptr [ESP + 0x8]       ; 0051bc47
    MOV dword ptr [EBX + 0x1c],EAX      ; 0051bc4b
    ADD EBX,0x8                         ; 0051bc4e
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051bc51
    MOV dword ptr [EBX + 0x18],EAX      ; 0051bc55
    CMP EBX,EDI                         ; 0051bc58
    JNZ 0x0051bc1e                      ; 0051bc5a | LAB_0051bc1e
        ;   XREF to: 0051bc1e (CONDITIONAL_JUMP)
    PUSH ESI                            ; 0051bc5c
    CALL shape_design.c_getAtlasMapIndex_FUN_0046e030 ; 0051bc5d | int shape_design.c_getAtlasMapIndex_FUN_0046e030(int texture_entry_index)
        ;   XREF to: 0046e030 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0051bc62
    MOV dword ptr [EBP],EAX             ; 0051bc65
    JMP 0x0051baef                      ; 0051bc68 | LAB_0051baef
        ;   XREF to: 0051baef (UNCONDITIONAL_JUMP)
    MOV EAX,0x12c0                      ; 0051bc6d
        ;   Label: LAB_0051bc6d
    MOV EDX,dword ptr [EBP]             ; 0051bc72
    MOV [0x02f0ca4c],EAX                ; 0051bc75 | int g_CurrentLineNumber
    IMUL EAX,EDX,0x48                   ; 0051bc7a
    MOV EBX,dword ptr [ESP + 0x38]      ; 0051bc7d
    MOV EBX,dword ptr [EBX + 0x14]      ; 0051bc81
    ADD EAX,EBX                         ; 0051bc84
    ADD EAX,0x8                         ; 0051bc86
    PUSH EAX                            ; 0051bc89
    MOV EDI,0x637dbd                    ; 0051bc8a | = "..\\shape\\meshlod.cpp" | s_shape_meshlod_cpp_00637dbd = ..\shape\meshlod.cpp
    PUSH 0x637dd2                       ; 0051bc8f | = "LodMesh::fixupAfterCram - texture %s ..." | s_LodMesh_fixupAfterCram_t_00637dd2 = LodMesh::fixupAfterCram - texture %s not found in cram list.
    MOV dword ptr [0x02f0ca48],EDI      ; 0051bc94 | char * g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0051bc9a | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0051bc9f
    JMP 0x0051bb65                      ; 0051bca2 | LAB_0051bb65
        ;   XREF to: 0051bb65 (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 0051bca7
        ;   Label: LAB_0051bca7
    CALL shape_design.c_getTextureName_FUN_0046e060 ; 0051bca8 | char * shape_design.c_getTextureName_FUN_0046e060(int texture_index)
        ;   XREF to: 0046e060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0051bcad
    PUSH EAX                            ; 0051bcb0
    PUSH ESI                            ; 0051bcb1
    INC EBX                             ; 0051bcb2
    CALL shape_meshlod.cpp_CLodMesh_findOrAddSubmesh_FUN_00518790 ; 0051bcb3 | int shape_meshlod.cpp_CLodMesh_findOrAddSubmesh_FUN_00518790(CLodMesh * this_ptr, char * texture_filename)
        ;   XREF to: 00518790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0051bcb8
    JMP 0x0051bb22                      ; 0051bcbb | LAB_0051bb22
        ;   XREF to: 0051bb22 (UNCONDITIONAL_JUMP)


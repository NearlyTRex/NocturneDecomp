; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_sizeModelToXFeet_FUN_00466e40(void)
;
; Local Variables:
; undefined1       Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f74a
;
; Referenced Globals:
;   TerminatedCString s_Enter_X_distance_in_feet_0061c842
;   TerminatedCString s_f_d_d_0061c889
;   TerminatedCString s_Need_distance_and_two_po_0061c892
;   TerminatedCString s_Invalid_point_0061c8b0
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_0060013c
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00466e40
        ;   Label: shape_design.c_sizeModelToXFeet_FUN_00466e40
    PUSH ESI                            ; 00466e41
    PUSH EDI                            ; 00466e42
    PUSH EBP                            ; 00466e43
    MOV EBP,ESP                         ; 00466e44
    SUB ESP,0x6c                        ; 00466e46
    MOV dword ptr [EBP + -0x8],0x497423fe ; 00466e4c
    MOV dword ptr [EBP + -0x4],0xc97423fe ; 00466e53
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00466e5a
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV ECX,0x61c842                    ; 00466e5f | = "Enter X distance in feet (,min,max fo..."
    PUSH ECX                            ; 00466e64 | = "Enter X distance in feet (,min,max fo..."
    PUSH 0x16                           ; 00466e65
    PUSH 0x0                            ; 00466e67
    PUSH 0x14                           ; 00466e69
    LEA ECX,[EBP + -0x6c]               ; 00466e6b
    PUSH ECX                            ; 00466e6e
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00466e6f
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 00466e74
    LEA EDI,[EBP + -0x6c]               ; 00466e77
    SUB ECX,ECX                         ; 00466e7a
    DEC ECX                             ; 00466e7c
    XOR EAX,EAX                         ; 00466e7d
    SCASB.REPNE ES:EDI                  ; 00466e7f
    NOT ECX                             ; 00466e81
    DEC ECX                             ; 00466e83
    TEST ECX,ECX                        ; 00466e84
    JNZ 0x00466e8d                      ; 00466e86
        ;   XREF to: 00466e8d (CONDITIONAL_JUMP)  ; LAB_00466e8d
    JMP 0x00466ffa                      ; 00466e88
        ;   XREF to: 00466ffa (UNCONDITIONAL_JUMP)  ; LAB_00466ffa
    LEA EAX,[EBP + -0x18]               ; 00466e8d
        ;   Label: LAB_00466e8d
    PUSH EAX                            ; 00466e90
    LEA EAX,[EBP + -0x14]               ; 00466e91
    PUSH EAX                            ; 00466e94
    LEA EAX,[EBP + -0x10]               ; 00466e95
    PUSH EAX                            ; 00466e98
    MOV EAX,0x61c889                    ; 00466e99 | = "%f,%d,%d"
    PUSH EAX                            ; 00466e9e | = "%f,%d,%d"
    LEA EAX,[EBP + -0x6c]               ; 00466e9f
    PUSH EAX                            ; 00466ea2
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00466ea3
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 00466ea8
    MOV dword ptr [EBP + -0x1c],EAX     ; 00466eab
    CMP dword ptr [EBP + -0x1c],0x1     ; 00466eae
    JLE 0x00466f42                      ; 00466eb2
        ;   XREF to: 00466f42 (CONDITIONAL_JUMP)  ; LAB_00466f42
    CMP dword ptr [EBP + -0x1c],0x3     ; 00466eb8
    JZ 0x00466edf                       ; 00466ebc
        ;   XREF to: 00466edf (CONDITIONAL_JUMP)  ; LAB_00466edf
    PUSH 0x2c                           ; 00466ebe
    PUSH 0x0                            ; 00466ec0
    MOV EAX,0x61c892                    ; 00466ec2 | = "Need distance and two points."
    PUSH EAX                            ; 00466ec7 | = "Need distance and two points."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00466ec8
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00466ecd
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00466ed0
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00466ed5
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    JMP 0x00466ffa                      ; 00466eda
        ;   XREF to: 00466ffa (UNCONDITIONAL_JUMP)  ; LAB_00466ffa
    CMP dword ptr [EBP + -0x14],0x0     ; 00466edf
        ;   Label: LAB_00466edf
    JL 0x00466eeb                       ; 00466ee3
        ;   XREF to: 00466eeb (CONDITIONAL_JUMP)  ; LAB_00466eeb
    CMP dword ptr [EBP + -0x18],0x0     ; 00466ee5
    JGE 0x00466eed                      ; 00466ee9
        ;   XREF to: 00466eed (CONDITIONAL_JUMP)  ; LAB_00466eed
    JMP 0x00466ef8                      ; 00466eeb
        ;   XREF to: 00466ef8 (UNCONDITIONAL_JUMP)  ; LAB_00466ef8
        ;   Label: LAB_00466eeb
    MOV EAX,[0x01626408]                ; 00466eed | g_VertexCount
        ;   Label: LAB_00466eed
    DEC EAX                             ; 00466ef2
    CMP EAX,dword ptr [EBP + -0x14]     ; 00466ef3
    JGE 0x00466efa                      ; 00466ef6
        ;   XREF to: 00466efa (CONDITIONAL_JUMP)  ; LAB_00466efa
    JMP 0x00466f05                      ; 00466ef8
        ;   XREF to: 00466f05 (UNCONDITIONAL_JUMP)  ; LAB_00466f05
        ;   Label: LAB_00466ef8
    MOV EAX,[0x01626408]                ; 00466efa | g_VertexCount
        ;   Label: LAB_00466efa
    DEC EAX                             ; 00466eff
    CMP EAX,dword ptr [EBP + -0x18]     ; 00466f00
    JGE 0x00466f26                      ; 00466f03
        ;   XREF to: 00466f26 (CONDITIONAL_JUMP)  ; LAB_00466f26
    PUSH 0x2c                           ; 00466f05
        ;   Label: LAB_00466f05
    PUSH 0x0                            ; 00466f07
    MOV EAX,0x61c8b0                    ; 00466f09 | = "Invalid point."
    PUSH EAX                            ; 00466f0e | = "Invalid point."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00466f0f
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00466f14
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00466f17
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00466f1c
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    JMP 0x00466ffa                      ; 00466f21
        ;   XREF to: 00466ffa (UNCONDITIONAL_JUMP)  ; LAB_00466ffa
    IMUL EAX,dword ptr [EBP + -0x18],0x14 ; 00466f26
        ;   Label: LAB_00466f26
    MOV EAX,dword ptr [EAX + 0x162640c] ; 00466f2a | g_LoadedVertices
    MOV dword ptr [EBP + -0x4],EAX      ; 00466f30
    IMUL EAX,dword ptr [EBP + -0x14],0x14 ; 00466f33
    MOV EAX,dword ptr [EAX + 0x162640c] ; 00466f37 | g_LoadedVertices
    MOV dword ptr [EBP + -0x8],EAX      ; 00466f3d
    JMP 0x00466f8d                      ; 00466f40
        ;   XREF to: 00466f8d (UNCONDITIONAL_JUMP)  ; LAB_00466f8d
    MOV dword ptr [EBP + -0x1c],0x0     ; 00466f42
        ;   Label: LAB_00466f42
    JMP 0x00466f51                      ; 00466f49
        ;   XREF to: 00466f51 (UNCONDITIONAL_JUMP)  ; LAB_00466f51
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00466f4b
        ;   Label: LAB_00466f4b
    INC dword ptr [EBP + -0x1c]         ; 00466f4e
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00466f51
        ;   Label: LAB_00466f51
    CMP EAX,dword ptr [0x01626408]      ; 00466f54 | g_VertexCount
    JGE 0x00466f8d                      ; 00466f5a
        ;   XREF to: 00466f8d (CONDITIONAL_JUMP)  ; LAB_00466f8d
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 00466f5c
    MOV EAX,dword ptr [EAX + 0x162640c] ; 00466f60 | g_LoadedVertices
    MOV dword ptr [EBP + -0xc],EAX      ; 00466f66
    FLD float ptr [EBP + -0xc]          ; 00466f69
    FCOMP float ptr [EBP + -0x4]        ; 00466f6c
    FNSTSW AX                           ; 00466f6f
    SAHF                                ; 00466f71
    JBE 0x00466f7a                      ; 00466f72
        ;   XREF to: 00466f7a (CONDITIONAL_JUMP)  ; LAB_00466f7a
    MOV EAX,dword ptr [EBP + -0xc]      ; 00466f74
    MOV dword ptr [EBP + -0x4],EAX      ; 00466f77
    FLD float ptr [EBP + -0xc]          ; 00466f7a
        ;   Label: LAB_00466f7a
    FCOMP float ptr [EBP + -0x8]        ; 00466f7d
    FNSTSW AX                           ; 00466f80
    SAHF                                ; 00466f82
    JNC 0x00466f8b                      ; 00466f83
        ;   XREF to: 00466f8b (CONDITIONAL_JUMP)  ; LAB_00466f8b
    MOV EAX,dword ptr [EBP + -0xc]      ; 00466f85
    MOV dword ptr [EBP + -0x8],EAX      ; 00466f88
    JMP 0x00466f4b                      ; 00466f8b
        ;   XREF to: 00466f4b (UNCONDITIONAL_JUMP)  ; LAB_00466f4b
        ;   Label: LAB_00466f8b
    FLD float ptr [EBP + -0x4]          ; 00466f8d
        ;   Label: LAB_00466f8d
    FSUB float ptr [EBP + -0x8]         ; 00466f90
    FDIVR float ptr [EBP + -0x10]       ; 00466f93
    FSTP float ptr [EBP + -0x10]        ; 00466f96
    MOV dword ptr [EBP + -0x1c],0x0     ; 00466f99
    JMP 0x00466fa8                      ; 00466fa0
        ;   XREF to: 00466fa8 (UNCONDITIONAL_JUMP)  ; LAB_00466fa8
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00466fa2
        ;   Label: LAB_00466fa2
    INC dword ptr [EBP + -0x1c]         ; 00466fa5
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00466fa8
        ;   Label: LAB_00466fa8
    CMP EAX,dword ptr [0x01626408]      ; 00466fab | g_VertexCount
    JGE 0x00466ffa                      ; 00466fb1
        ;   XREF to: 00466ffa (CONDITIONAL_JUMP)  ; LAB_00466ffa
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 00466fb3
    FLD float ptr [EAX + 0x162640c]     ; 00466fb7 | g_LoadedVertices
    FMUL float ptr [EBP + -0x10]        ; 00466fbd
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 00466fc0
    FSTP float ptr [EAX + 0x162640c]    ; 00466fc4 | g_LoadedVertices
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 00466fca
    FLD float ptr [EAX + 0x1626410]     ; 00466fce | DAT_01626410
    FMUL float ptr [EBP + -0x10]        ; 00466fd4
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 00466fd7
    FSTP float ptr [EAX + 0x1626410]    ; 00466fdb | DAT_01626410
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 00466fe1
    FLD float ptr [EAX + 0x1626414]     ; 00466fe5 | g_LoadedVertices[0].vertex.z
    FMUL float ptr [EBP + -0x10]        ; 00466feb
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 00466fee
    FSTP float ptr [EAX + 0x1626414]    ; 00466ff2 | g_LoadedVertices[0].vertex.z
    JMP 0x00466fa2                      ; 00466ff8
        ;   XREF to: 00466fa2 (UNCONDITIONAL_JUMP)  ; LAB_00466fa2
    MOV ESP,EBP                         ; 00466ffa
        ;   Label: LAB_00466ffa
    POP EBP                             ; 00466ffc
    POP EDI                             ; 00466ffd
    POP ESI                             ; 00466ffe
    POP EBX                             ; 00466fff
    RET                                 ; 00467000


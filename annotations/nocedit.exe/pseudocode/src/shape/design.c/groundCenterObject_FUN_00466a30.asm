; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_groundCenterObject_FUN_00466a30(void)
;
; Local Variables:
; undefined8       Stack[-0x64]:8  local_64
; undefined8       Stack[-0x5c]:8  local_5c
; undefined8       Stack[-0x54]:8  local_54
; undefined8       Stack[-0x4c]:8  local_4c
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  uStack_40
; undefined8       Stack[-0x3c]:8  local_3c
; undefined8       Stack[-0x34]:8  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  uStack_28
; undefined8       Stack[-0x24]:8  local_24
; undefined8       Stack[-0x1c]:8  local_1c
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f6e6
;
; Referenced Globals:
;   TerminatedCString s_Object_grounded_Hit_a_ke_0061c7a6
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;
; Called Functions:
;   engine_2d.c_drawText_FUN_00401fd0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00466a30
        ;   Label: shape_design.c_groundCenterObject_FUN_00466a30
    PUSH ESI                            ; 00466a31
    PUSH EDI                            ; 00466a32
    PUSH EBP                            ; 00466a33
    MOV EBP,ESP                         ; 00466a34
    SUB ESP,0x54                        ; 00466a36
    MOV dword ptr [EBP + -0x2c],0xcccccccd ; 00466a3c
    MOV dword ptr [EBP + -0x28],0x412e847f ; 00466a43
    MOV dword ptr [EBP + -0x4c],0xcccccccd ; 00466a4a
    MOV dword ptr [EBP + -0x48],0x412e847f ; 00466a51
    MOV dword ptr [EBP + -0x1c],0xcccccccd ; 00466a58
    MOV dword ptr [EBP + -0x18],0x412e847f ; 00466a5f
    MOV dword ptr [EBP + -0x14],0xcccccccd ; 00466a66
    MOV dword ptr [EBP + -0x10],0xc12e847f ; 00466a6d
    MOV dword ptr [EBP + -0x24],0xcccccccd ; 00466a74
    MOV dword ptr [EBP + -0x20],0xc12e847f ; 00466a7b
    MOV dword ptr [EBP + -0xc],0xcccccccd ; 00466a82
    MOV dword ptr [EBP + -0x8],0xc12e847f ; 00466a89
    MOV dword ptr [EBP + -0x4],0x0      ; 00466a90
    JMP 0x00466a9f                      ; 00466a97
        ;   XREF to: 00466a9f (UNCONDITIONAL_JUMP)  ; LAB_00466a9f
    MOV EAX,dword ptr [EBP + -0x4]      ; 00466a99
        ;   Label: LAB_00466a99
    INC dword ptr [EBP + -0x4]          ; 00466a9c
    MOV EAX,dword ptr [EBP + -0x4]      ; 00466a9f
        ;   Label: LAB_00466a9f
    CMP EAX,dword ptr [0x01626408]      ; 00466aa2 | g_VertexCount
    JGE 0x00466b64                      ; 00466aa8
        ;   XREF to: 00466b64 (CONDITIONAL_JUMP)  ; LAB_00466b64
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 00466aae
    FLD float ptr [EAX + 0x162640c]     ; 00466ab2 | g_LoadedVertices
    FSTP double ptr [EBP + -0x44]       ; 00466ab8
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 00466abb
    FLD float ptr [EAX + 0x1626410]     ; 00466abf | DAT_01626410
    FSTP double ptr [EBP + -0x3c]       ; 00466ac5
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 00466ac8
    FLD float ptr [EAX + 0x1626414]     ; 00466acc | g_LoadedVertices[0].vertex.z
    FSTP double ptr [EBP + -0x34]       ; 00466ad2
    FLD double ptr [EBP + -0x44]        ; 00466ad5
    FCOMP double ptr [EBP + -0x14]      ; 00466ad8
    FNSTSW AX                           ; 00466adb
    SAHF                                ; 00466add
    JBE 0x00466aec                      ; 00466ade
        ;   XREF to: 00466aec (CONDITIONAL_JUMP)  ; LAB_00466aec
    MOV EAX,dword ptr [EBP + -0x44]     ; 00466ae0
    MOV dword ptr [EBP + -0x14],EAX     ; 00466ae3
    MOV EAX,dword ptr [EBP + -0x40]     ; 00466ae6
    MOV dword ptr [EBP + -0x10],EAX     ; 00466ae9
    FLD double ptr [EBP + -0x44]        ; 00466aec
        ;   Label: LAB_00466aec
    FCOMP double ptr [EBP + -0x2c]      ; 00466aef
    FNSTSW AX                           ; 00466af2
    SAHF                                ; 00466af4
    JNC 0x00466b03                      ; 00466af5
        ;   XREF to: 00466b03 (CONDITIONAL_JUMP)  ; LAB_00466b03
    MOV EAX,dword ptr [EBP + -0x44]     ; 00466af7
    MOV dword ptr [EBP + -0x2c],EAX     ; 00466afa
    MOV EAX,dword ptr [EBP + -0x40]     ; 00466afd
    MOV dword ptr [EBP + -0x28],EAX     ; 00466b00
    FLD double ptr [EBP + -0x3c]        ; 00466b03
        ;   Label: LAB_00466b03
    FCOMP double ptr [EBP + -0x24]      ; 00466b06
    FNSTSW AX                           ; 00466b09
    SAHF                                ; 00466b0b
    JBE 0x00466b1a                      ; 00466b0c
        ;   XREF to: 00466b1a (CONDITIONAL_JUMP)  ; LAB_00466b1a
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00466b0e
    MOV dword ptr [EBP + -0x24],EAX     ; 00466b11
    MOV EAX,dword ptr [EBP + -0x38]     ; 00466b14
    MOV dword ptr [EBP + -0x20],EAX     ; 00466b17
    FLD double ptr [EBP + -0x3c]        ; 00466b1a
        ;   Label: LAB_00466b1a
    FCOMP double ptr [EBP + -0x4c]      ; 00466b1d
    FNSTSW AX                           ; 00466b20
    SAHF                                ; 00466b22
    JNC 0x00466b31                      ; 00466b23
        ;   XREF to: 00466b31 (CONDITIONAL_JUMP)  ; LAB_00466b31
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00466b25
    MOV dword ptr [EBP + -0x4c],EAX     ; 00466b28
    MOV EAX,dword ptr [EBP + -0x38]     ; 00466b2b
    MOV dword ptr [EBP + -0x48],EAX     ; 00466b2e
    FLD double ptr [EBP + -0x34]        ; 00466b31
        ;   Label: LAB_00466b31
    FCOMP double ptr [EBP + -0xc]       ; 00466b34
    FNSTSW AX                           ; 00466b37
    SAHF                                ; 00466b39
    JBE 0x00466b48                      ; 00466b3a
        ;   XREF to: 00466b48 (CONDITIONAL_JUMP)  ; LAB_00466b48
    MOV EAX,dword ptr [EBP + -0x34]     ; 00466b3c
    MOV dword ptr [EBP + -0xc],EAX      ; 00466b3f
    MOV EAX,dword ptr [EBP + -0x30]     ; 00466b42
    MOV dword ptr [EBP + -0x8],EAX      ; 00466b45
    FLD double ptr [EBP + -0x34]        ; 00466b48
        ;   Label: LAB_00466b48
    FCOMP double ptr [EBP + -0x1c]      ; 00466b4b
    FNSTSW AX                           ; 00466b4e
    SAHF                                ; 00466b50
    JNC 0x00466b5f                      ; 00466b51
        ;   XREF to: 00466b5f (CONDITIONAL_JUMP)  ; LAB_00466b5f
    MOV EAX,dword ptr [EBP + -0x34]     ; 00466b53
    MOV dword ptr [EBP + -0x1c],EAX     ; 00466b56
    MOV EAX,dword ptr [EBP + -0x30]     ; 00466b59
    MOV dword ptr [EBP + -0x18],EAX     ; 00466b5c
    JMP 0x00466a99                      ; 00466b5f
        ;   XREF to: 00466a99 (UNCONDITIONAL_JUMP)  ; LAB_00466a99
        ;   Label: LAB_00466b5f
    MOV dword ptr [EBP + -0x44],0x0     ; 00466b64
        ;   Label: LAB_00466b64
    MOV dword ptr [EBP + -0x40],0x0     ; 00466b6b
    MOV dword ptr [EBP + -0x3c],0x0     ; 00466b72
    MOV dword ptr [EBP + -0x38],0x0     ; 00466b79
    MOV dword ptr [EBP + -0x34],0x0     ; 00466b80
    MOV dword ptr [EBP + -0x30],0x0     ; 00466b87
    MOV dword ptr [EBP + -0x4],0x0      ; 00466b8e
    JMP 0x00466b9d                      ; 00466b95
        ;   XREF to: 00466b9d (UNCONDITIONAL_JUMP)  ; LAB_00466b9d
    MOV EAX,dword ptr [EBP + -0x4]      ; 00466b97
        ;   Label: LAB_00466b97
    INC dword ptr [EBP + -0x4]          ; 00466b9a
    MOV EAX,dword ptr [EBP + -0x4]      ; 00466b9d
        ;   Label: LAB_00466b9d
    CMP EAX,dword ptr [0x01626408]      ; 00466ba0 | g_VertexCount
    JGE 0x00466bda                      ; 00466ba6
        ;   XREF to: 00466bda (CONDITIONAL_JUMP)  ; LAB_00466bda
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 00466ba8
    FLD float ptr [EAX + 0x162640c]     ; 00466bac | g_LoadedVertices
    FADD double ptr [EBP + -0x44]       ; 00466bb2
    FSTP double ptr [EBP + -0x44]       ; 00466bb5
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 00466bb8
    FLD float ptr [EAX + 0x1626410]     ; 00466bbc | DAT_01626410
    FADD double ptr [EBP + -0x3c]       ; 00466bc2
    FSTP double ptr [EBP + -0x3c]       ; 00466bc5
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 00466bc8
    FLD float ptr [EAX + 0x1626414]     ; 00466bcc | g_LoadedVertices[0].vertex.z
    FADD double ptr [EBP + -0x34]       ; 00466bd2
    FSTP double ptr [EBP + -0x34]       ; 00466bd5
    JMP 0x00466b97                      ; 00466bd8
        ;   XREF to: 00466b97 (UNCONDITIONAL_JUMP)  ; LAB_00466b97
    FILD dword ptr [0x01626408]         ; 00466bda | g_VertexCount
        ;   Label: LAB_00466bda
    FDIVR double ptr [EBP + -0x44]      ; 00466be0
    FSTP double ptr [EBP + -0x44]       ; 00466be3
    FILD dword ptr [0x01626408]         ; 00466be6 | g_VertexCount
    FDIVR double ptr [EBP + -0x3c]      ; 00466bec
    FSTP double ptr [EBP + -0x3c]       ; 00466bef
    FILD dword ptr [0x01626408]         ; 00466bf2 | g_VertexCount
    FDIVR double ptr [EBP + -0x34]      ; 00466bf8
    FSTP double ptr [EBP + -0x34]       ; 00466bfb
    MOV dword ptr [EBP + -0x4],0x0      ; 00466bfe
    JMP 0x00466c0d                      ; 00466c05
        ;   XREF to: 00466c0d (UNCONDITIONAL_JUMP)  ; LAB_00466c0d
    MOV EAX,dword ptr [EBP + -0x4]      ; 00466c07
        ;   Label: LAB_00466c07
    INC dword ptr [EBP + -0x4]          ; 00466c0a
    MOV EAX,dword ptr [EBP + -0x4]      ; 00466c0d
        ;   Label: LAB_00466c0d
    CMP EAX,dword ptr [0x01626408]      ; 00466c10 | g_VertexCount
    JGE 0x00466c39                      ; 00466c16
        ;   XREF to: 00466c39 (CONDITIONAL_JUMP)  ; LAB_00466c39
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 00466c18
    FLD float ptr [EAX + 0x1626410]     ; 00466c1c | DAT_01626410
    FSTP double ptr [EBP + -0x54]       ; 00466c22
    FLD double ptr [EBP + -0x54]        ; 00466c25
    FSUB double ptr [EBP + -0x4c]       ; 00466c28
    FSTP double ptr [EBP + -0x54]       ; 00466c2b
    FLD double ptr [EBP + -0x54]        ; 00466c2e
    FSTP float ptr [EAX + 0x1626410]    ; 00466c31 | DAT_01626410
    JMP 0x00466c07                      ; 00466c37
        ;   XREF to: 00466c07 (UNCONDITIONAL_JUMP)  ; LAB_00466c07
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00466c39
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_00466c39
    PUSH 0x0                            ; 00466c3e
    PUSH 0x0                            ; 00466c40
    MOV EAX,0x61c7a6                    ; 00466c42 | = "Object grounded.  Hit a key..."
    PUSH EAX                            ; 00466c47 | = "Object grounded.  Hit a key..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00466c48
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00466c4d
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00466c50
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00466c55
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    MOV ESP,EBP                         ; 00466c5a
    POP EBP                             ; 00466c5c
    POP EDI                             ; 00466c5d
    POP ESI                             ; 00466c5e
    POP EBX                             ; 00466c5f
    RET                                 ; 00466c60


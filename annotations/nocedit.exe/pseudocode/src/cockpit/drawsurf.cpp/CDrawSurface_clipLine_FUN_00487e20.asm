; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl cockpit_drawsurf_cpp_CDrawSurface_clipLine_FUN_00487e20(CDrawSurface *this_ptr,int *x1,int *y1,int *x2,int *y2,int clip_left,int clip_top,int clip_right,int clip_bottom)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   x1
; int *            Stack[0xc]:4   y1
; int *            Stack[0x10]:4   x2
; int *            Stack[0x14]:4   y2
; int              Stack[0x18]:4   clip_left
; int              Stack[0x1c]:4   clip_top
; int              Stack[0x20]:4   clip_right
; int              Stack[0x24]:4   clip_bottom
; Local Variables:
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawClippedDashedLine_FUN_00487a30 at 00487a91
;   cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00487990 at 004879f1
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_00621d6e
;   TerminatedCString s_s_2d_line_clipping_excee_00621d86
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00487e20
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_00487e20
    PUSH ESI                            ; 00487e21
    PUSH EDI                            ; 00487e22
    PUSH EBP                            ; 00487e23
    SUB ESP,0x48                        ; 00487e24
    MOV EBP,dword ptr [ESP + 0x60]      ; 00487e27
    MOV EDI,dword ptr [ESP + 0x64]      ; 00487e2b
    MOV ECX,dword ptr [ESP + 0x70]      ; 00487e2f
    MOV dword ptr [ESP + 0xc],ECX       ; 00487e33
    MOV ECX,dword ptr [ESP + 0x74]      ; 00487e37
    MOV EBX,dword ptr [EDI]             ; 00487e3b
    MOV dword ptr [ESP + 0x4],ECX       ; 00487e3d
    MOV ECX,dword ptr [ESP + 0x78]      ; 00487e41
    MOV ESI,dword ptr [EBP]             ; 00487e45
    MOV dword ptr [ESP + 0x14],ECX      ; 00487e48
    XOR ECX,ECX                         ; 00487e4c
    CMP EBX,dword ptr [ESP + 0x7c]      ; 00487e4e
    JLE 0x00487e59                      ; 00487e52
        ;   XREF to: 00487e59 (CONDITIONAL_JUMP)  ; LAB_00487e59
    MOV ECX,0x1                         ; 00487e54
    CMP EBX,dword ptr [ESP + 0x4]       ; 00487e59
        ;   Label: LAB_00487e59
    JGE 0x00487e62                      ; 00487e5d
        ;   XREF to: 00487e62 (CONDITIONAL_JUMP)  ; LAB_00487e62
    OR CL,0x2                           ; 00487e5f
    CMP ESI,dword ptr [ESP + 0x14]      ; 00487e62
        ;   Label: LAB_00487e62
    JLE 0x00487e6b                      ; 00487e66
        ;   XREF to: 00487e6b (CONDITIONAL_JUMP)  ; LAB_00487e6b
    OR CL,0x4                           ; 00487e68
    CMP ESI,dword ptr [ESP + 0xc]       ; 00487e6b
        ;   Label: LAB_00487e6b
    JGE 0x00487e74                      ; 00487e6f
        ;   XREF to: 00487e74 (CONDITIONAL_JUMP)  ; LAB_00487e74
    OR CL,0x8                           ; 00487e71
    MOV ESI,dword ptr [ESP + 0x68]      ; 00487e74
        ;   Label: LAB_00487e74
    MOV dword ptr [ESP + 0x44],ECX      ; 00487e78
    MOV ECX,dword ptr [ESP + 0x70]      ; 00487e7c
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00487e80
    MOV dword ptr [ESP + 0x8],ECX       ; 00487e84
    MOV ECX,dword ptr [ESP + 0x74]      ; 00487e88
    MOV ESI,dword ptr [ESI]             ; 00487e8c
    MOV dword ptr [ESP + 0x10],ECX      ; 00487e8e
    MOV ECX,dword ptr [ESP + 0x78]      ; 00487e92
    MOV EBX,dword ptr [EBX]             ; 00487e96
    MOV dword ptr [ESP],ECX             ; 00487e98
    XOR ECX,ECX                         ; 00487e9b
    CMP EBX,dword ptr [ESP + 0x7c]      ; 00487e9d
    JLE 0x00487ea8                      ; 00487ea1
        ;   XREF to: 00487ea8 (CONDITIONAL_JUMP)  ; LAB_00487ea8
    MOV ECX,0x1                         ; 00487ea3
    CMP EBX,dword ptr [ESP + 0x10]      ; 00487ea8
        ;   Label: LAB_00487ea8
    JGE 0x00487eb1                      ; 00487eac
        ;   XREF to: 00487eb1 (CONDITIONAL_JUMP)  ; LAB_00487eb1
    OR CL,0x2                           ; 00487eae
    CMP ESI,dword ptr [ESP]             ; 00487eb1
        ;   Label: LAB_00487eb1
    JLE 0x00487eb9                      ; 00487eb4
        ;   XREF to: 00487eb9 (CONDITIONAL_JUMP)  ; LAB_00487eb9
    OR CL,0x4                           ; 00487eb6
    CMP ESI,dword ptr [ESP + 0x8]       ; 00487eb9
        ;   Label: LAB_00487eb9
    JL 0x00487f0a                       ; 00487ebd
        ;   XREF to: 00487f0a (CONDITIONAL_JUMP)  ; LAB_00487f0a
    XOR ESI,ESI                         ; 00487ebf
        ;   Label: LAB_00487ebf
    MOV dword ptr [ESP + 0x3c],ECX      ; 00487ec1
    MOV dword ptr [ESP + 0x38],ESI      ; 00487ec5
    MOV ECX,dword ptr [ESP + 0x68]      ; 00487ec9
        ;   Label: LAB_00487ec9
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00487ecd
    MOV EBX,dword ptr [EBP]             ; 00487ed1
    MOV ECX,dword ptr [ECX]             ; 00487ed4
    MOV ESI,dword ptr [ESI]             ; 00487ed6
    SUB ECX,EBX                         ; 00487ed8
    SUB ESI,dword ptr [EDI]             ; 00487eda
    CMP dword ptr [ESP + 0x44],0x0      ; 00487edc
    JZ 0x00487f0f                       ; 00487ee1
        ;   XREF to: 00487f0f (CONDITIONAL_JUMP)  ; LAB_00487f0f
    MOV EBX,dword ptr [ESP + 0x44]      ; 00487ee3
        ;   Label: LAB_00487ee3
    TEST dword ptr [ESP + 0x3c],EBX     ; 00487ee7
    JZ 0x00487f20                       ; 00487eeb
        ;   XREF to: 00487f20 (CONDITIONAL_JUMP)  ; LAB_00487f20
    XOR ESI,ESI                         ; 00487eed
    MOV dword ptr [ESP + 0x18],ESI      ; 00487eef
    CMP dword ptr [ESP + 0x38],0x64     ; 00487ef3
        ;   Label: LAB_00487ef3
    JZ 0x004880d3                       ; 00487ef8
        ;   XREF to: 004880d3 (CONDITIONAL_JUMP)  ; LAB_004880d3
    MOV EAX,dword ptr [ESP + 0x18]      ; 00487efe
    ADD ESP,0x48                        ; 00487f02
    POP EBP                             ; 00487f05
    POP EDI                             ; 00487f06
    POP ESI                             ; 00487f07
    POP EBX                             ; 00487f08
    RET                                 ; 00487f09
    OR CL,0x8                           ; 00487f0a
        ;   Label: LAB_00487f0a
    JMP 0x00487ebf                      ; 00487f0d
        ;   XREF to: 00487ebf (UNCONDITIONAL_JUMP)  ; LAB_00487ebf
    CMP dword ptr [ESP + 0x3c],0x0      ; 00487f0f
        ;   Label: LAB_00487f0f
    JNZ 0x00487ee3                      ; 00487f14
        ;   XREF to: 00487ee3 (CONDITIONAL_JUMP)  ; LAB_00487ee3
    MOV dword ptr [ESP + 0x18],0x1      ; 00487f16
    JMP 0x00487ef3                      ; 00487f1e
        ;   XREF to: 00487ef3 (UNCONDITIONAL_JUMP)  ; LAB_00487ef3
    TEST EBX,EBX                        ; 00487f20
        ;   Label: LAB_00487f20
    JZ 0x00487fbf                       ; 00487f22
        ;   XREF to: 00487fbf (CONDITIONAL_JUMP)  ; LAB_00487fbf
    MOV dword ptr [ESP + 0x40],EBX      ; 00487f28
        ;   Label: LAB_00487f28
    MOV BL,byte ptr [ESP + 0x40]        ; 00487f2c
    TEST BL,0x1                         ; 00487f30
    JZ 0x00487fc8                       ; 00487f33
        ;   XREF to: 00487fc8 (CONDITIONAL_JUMP)  ; LAB_00487fc8
    TEST ESI,ESI                        ; 00487f39
    JZ 0x00487f5d                       ; 00487f3b
        ;   XREF to: 00487f5d (CONDITIONAL_JUMP)  ; LAB_00487f5d
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00487f3d
    MOV EBX,dword ptr [EDI]             ; 00487f41
    MOV EDX,0x10000                     ; 00487f43
    SUB EAX,EBX                         ; 00487f48
    MOV EBX,ESI                         ; 00487f4a
    IMUL EDX                            ; 00487f4c
    IDIV EBX                            ; 00487f4e
    MOV EDX,ECX                         ; 00487f50
    IMUL EDX                            ; 00487f52
    SHRD EAX,EDX,0x10                   ; 00487f54
    MOV EDX,dword ptr [EBP]             ; 00487f58
    ADD EDX,EAX                         ; 00487f5b
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00487f5d
        ;   Label: LAB_00487f5d
    CMP dword ptr [ESP + 0x44],0x0      ; 00487f61
        ;   Label: LAB_00487f61
    JZ 0x0048805e                       ; 00487f66
        ;   XREF to: 0048805e (CONDITIONAL_JUMP)  ; LAB_0048805e
    MOV ECX,dword ptr [ESP + 0x70]      ; 00487f6c
    MOV ESI,EAX                         ; 00487f70
    MOV dword ptr [EBP],EDX             ; 00487f72
    MOV dword ptr [ESP + 0x24],ECX      ; 00487f75
    MOV ECX,dword ptr [ESP + 0x74]      ; 00487f79
    MOV dword ptr [EDI],EAX             ; 00487f7d
    MOV dword ptr [ESP + 0x1c],ECX      ; 00487f7f
    MOV ECX,dword ptr [ESP + 0x78]      ; 00487f83
    MOV EBX,dword ptr [EBP]             ; 00487f87
    MOV dword ptr [ESP + 0x2c],ECX      ; 00487f8a
    XOR ECX,ECX                         ; 00487f8e
    CMP EAX,dword ptr [ESP + 0x7c]      ; 00487f90
    JLE 0x00487f9b                      ; 00487f94
        ;   XREF to: 00487f9b (CONDITIONAL_JUMP)  ; LAB_00487f9b
    MOV ECX,0x1                         ; 00487f96
    CMP ESI,dword ptr [ESP + 0x1c]      ; 00487f9b
        ;   Label: LAB_00487f9b
    JGE 0x00487fa4                      ; 00487f9f
        ;   XREF to: 00487fa4 (CONDITIONAL_JUMP)  ; LAB_00487fa4
    OR CL,0x2                           ; 00487fa1
    CMP EBX,dword ptr [ESP + 0x2c]      ; 00487fa4
        ;   Label: LAB_00487fa4
    JLE 0x00487fad                      ; 00487fa8
        ;   XREF to: 00487fad (CONDITIONAL_JUMP)  ; LAB_00487fad
    OR CL,0x4                           ; 00487faa
    CMP EBX,dword ptr [ESP + 0x24]      ; 00487fad
        ;   Label: LAB_00487fad
    JGE 0x00487fb6                      ; 00487fb1
        ;   XREF to: 00487fb6 (CONDITIONAL_JUMP)  ; LAB_00487fb6
    OR CL,0x8                           ; 00487fb3
    MOV dword ptr [ESP + 0x44],ECX      ; 00487fb6
        ;   Label: LAB_00487fb6
    JMP 0x004880bc                      ; 00487fba
        ;   XREF to: 004880bc (UNCONDITIONAL_JUMP)  ; LAB_004880bc
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00487fbf
        ;   Label: LAB_00487fbf
    JMP 0x00487f28                      ; 00487fc3
        ;   XREF to: 00487f28 (UNCONDITIONAL_JUMP)  ; LAB_00487f28
    TEST BL,0x2                         ; 00487fc8
        ;   Label: LAB_00487fc8
    JZ 0x00487ffa                       ; 00487fcb
        ;   XREF to: 00487ffa (CONDITIONAL_JUMP)  ; LAB_00487ffa
    TEST ESI,ESI                        ; 00487fcd
    JZ 0x00487ff1                       ; 00487fcf
        ;   XREF to: 00487ff1 (CONDITIONAL_JUMP)  ; LAB_00487ff1
    MOV EAX,dword ptr [ESP + 0x74]      ; 00487fd1
    MOV EDX,dword ptr [EDI]             ; 00487fd5
    MOV EBX,ESI                         ; 00487fd7
    SUB EAX,EDX                         ; 00487fd9
    MOV EDX,0x10000                     ; 00487fdb
    IMUL EDX                            ; 00487fe0
    IDIV EBX                            ; 00487fe2
    MOV EDX,ECX                         ; 00487fe4
    IMUL EDX                            ; 00487fe6
    SHRD EAX,EDX,0x10                   ; 00487fe8
    MOV EDX,dword ptr [EBP]             ; 00487fec
    ADD EDX,EAX                         ; 00487fef
    MOV EAX,dword ptr [ESP + 0x74]      ; 00487ff1
        ;   Label: LAB_00487ff1
    JMP 0x00487f61                      ; 00487ff5
        ;   XREF to: 00487f61 (UNCONDITIONAL_JUMP)  ; LAB_00487f61
    TEST BL,0x4                         ; 00487ffa
        ;   Label: LAB_00487ffa
    JZ 0x0048802a                       ; 00487ffd
        ;   XREF to: 0048802a (CONDITIONAL_JUMP)  ; LAB_0048802a
    TEST ECX,ECX                        ; 00487fff
    JZ 0x00488021                       ; 00488001
        ;   XREF to: 00488021 (CONDITIONAL_JUMP)  ; LAB_00488021
    MOV EAX,dword ptr [ESP + 0x78]      ; 00488003
    MOV EBX,dword ptr [EBP]             ; 00488007
    MOV EDX,0x10000                     ; 0048800a
    SUB EAX,EBX                         ; 0048800f
    MOV EBX,ECX                         ; 00488011
    IMUL EDX                            ; 00488013
    IDIV EBX                            ; 00488015
    MOV EDX,ESI                         ; 00488017
    IMUL EDX                            ; 00488019
    SHRD EAX,EDX,0x10                   ; 0048801b
    ADD EAX,dword ptr [EDI]             ; 0048801f
    MOV EDX,dword ptr [ESP + 0x78]      ; 00488021
        ;   Label: LAB_00488021
    JMP 0x00487f61                      ; 00488025
        ;   XREF to: 00487f61 (UNCONDITIONAL_JUMP)  ; LAB_00487f61
    TEST BL,0x8                         ; 0048802a
        ;   Label: LAB_0048802a
    JZ 0x00487f61                       ; 0048802d
        ;   XREF to: 00487f61 (CONDITIONAL_JUMP)  ; LAB_00487f61
    TEST ECX,ECX                        ; 00488033
    JZ 0x00488055                       ; 00488035
        ;   XREF to: 00488055 (CONDITIONAL_JUMP)  ; LAB_00488055
    MOV EAX,dword ptr [ESP + 0x70]      ; 00488037
    MOV EDX,dword ptr [EBP]             ; 0048803b
    MOV EBX,ECX                         ; 0048803e
    SUB EAX,EDX                         ; 00488040
    MOV EDX,0x10000                     ; 00488042
    IMUL EDX                            ; 00488047
    IDIV EBX                            ; 00488049
    MOV EDX,ESI                         ; 0048804b
    IMUL EDX                            ; 0048804d
    SHRD EAX,EDX,0x10                   ; 0048804f
    ADD EAX,dword ptr [EDI]             ; 00488053
    MOV EDX,dword ptr [ESP + 0x70]      ; 00488055
        ;   Label: LAB_00488055
    JMP 0x00487f61                      ; 00488059
        ;   XREF to: 00487f61 (UNCONDITIONAL_JUMP)  ; LAB_00487f61
    MOV ECX,dword ptr [ESP + 0x68]      ; 0048805e
        ;   Label: LAB_0048805e
    MOV dword ptr [ECX],EDX             ; 00488062
    MOV ECX,dword ptr [ESP + 0x6c]      ; 00488064
    MOV dword ptr [ECX],EAX             ; 00488068
    MOV ECX,dword ptr [ESP + 0x70]      ; 0048806a
    MOV EBX,dword ptr [ESP + 0x68]      ; 0048806e
    MOV dword ptr [ESP + 0x20],ECX      ; 00488072
    MOV ECX,dword ptr [ESP + 0x74]      ; 00488076
    MOV dword ptr [ESP + 0x34],EAX      ; 0048807a
    MOV dword ptr [ESP + 0x28],ECX      ; 0048807e
    MOV ECX,dword ptr [ESP + 0x78]      ; 00488082
    MOV EBX,dword ptr [EBX]             ; 00488086
    MOV dword ptr [ESP + 0x30],ECX      ; 00488088
    XOR ECX,ECX                         ; 0048808c
    CMP EAX,dword ptr [ESP + 0x7c]      ; 0048808e
    JLE 0x00488099                      ; 00488092
        ;   XREF to: 00488099 (CONDITIONAL_JUMP)  ; LAB_00488099
    MOV ECX,0x1                         ; 00488094
    MOV ESI,dword ptr [ESP + 0x34]      ; 00488099
        ;   Label: LAB_00488099
    CMP ESI,dword ptr [ESP + 0x28]      ; 0048809d
    JGE 0x004880a6                      ; 004880a1
        ;   XREF to: 004880a6 (CONDITIONAL_JUMP)  ; LAB_004880a6
    OR CL,0x2                           ; 004880a3
    CMP EBX,dword ptr [ESP + 0x30]      ; 004880a6
        ;   Label: LAB_004880a6
    JLE 0x004880af                      ; 004880aa
        ;   XREF to: 004880af (CONDITIONAL_JUMP)  ; LAB_004880af
    OR CL,0x4                           ; 004880ac
    CMP EBX,dword ptr [ESP + 0x20]      ; 004880af
        ;   Label: LAB_004880af
    JGE 0x004880b8                      ; 004880b3
        ;   XREF to: 004880b8 (CONDITIONAL_JUMP)  ; LAB_004880b8
    OR CL,0x8                           ; 004880b5
    MOV dword ptr [ESP + 0x3c],ECX      ; 004880b8
        ;   Label: LAB_004880b8
    MOV ECX,dword ptr [ESP + 0x38]      ; 004880bc
        ;   Label: LAB_004880bc
    INC ECX                             ; 004880c0
    MOV dword ptr [ESP + 0x38],ECX      ; 004880c1
    CMP ECX,0x64                        ; 004880c5
    JL 0x00487ec9                       ; 004880c8
        ;   XREF to: 00487ec9 (CONDITIONAL_JUMP)  ; LAB_00487ec9
    JMP 0x00487ef3                      ; 004880ce
        ;   XREF to: 00487ef3 (UNCONDITIONAL_JUMP)  ; LAB_00487ef3
    MOV EBP,0x621d6e                    ; 004880d3 | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_004880d3
    MOV EAX,0x369                       ; 004880d8
    PUSH 0x621d86                       ; 004880dd | = "2d line clipping exceeded max iterations"
    MOV dword ptr [0x02f0ca48],EBP      ; 004880e2 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004880e8 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004880ed
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004880f2
    MOV EAX,dword ptr [ESP + 0x18]      ; 004880f5
    ADD ESP,0x48                        ; 004880f9
    POP EBP                             ; 004880fc
    POP EDI                             ; 004880fd
    POP ESI                             ; 004880fe
    POP EBX                             ; 004880ff
    RET                                 ; 00488100


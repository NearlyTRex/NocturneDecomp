; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_cloth.cpp_FUN_0043c6e0()
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 at 0043cbdc
;   core_cloth.cpp_FUN_0043c820 at 0043c86b
;   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 at 0043d873
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c6e0
        ;   Label: core_cloth.cpp_FUN_0043c6e0
    PUSH ESI                            ; 0043c6e1
    PUSH EDI                            ; 0043c6e2
    PUSH EBP                            ; 0043c6e3
    SUB ESP,0x8                         ; 0043c6e4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0043c6e7
    LEA EBX,[ESI*0x4 + 0x0]             ; 0043c6eb
    SUB EBX,ESI                         ; 0043c6f2
    MOV ESI,dword ptr [0x006703ec]      ; 0043c6f4 | g_CDemonRendererPtr
    SHL EBX,0x4                         ; 0043c6fa
    MOV ESI,dword ptr [ESI]             ; 0043c6fd | g_CDemonRendererInstance
    ADD ESI,EBX                         ; 0043c6ff
    TEST byte ptr [ESI + 0x13],0x80     ; 0043c701
    JNZ 0x0043c78a                      ; 0043c705
        ;   XREF to: 0043c78a (CONDITIONAL_JUMP)  ; LAB_0043c78a
    MOV EAX,dword ptr [ESI + 0x14]      ; 0043c70b
    MOV EBX,dword ptr [ESI + 0x10]      ; 0043c70e
    SAR EAX,0x10                        ; 0043c711
    SAR EBX,0x10                        ; 0043c714
    MOV dword ptr [ESP],EAX             ; 0043c717
    TEST EBX,EBX                        ; 0043c71a
    JL 0x0043c72a                       ; 0043c71c
        ;   XREF to: 0043c72a (CONDITIONAL_JUMP)  ; LAB_0043c72a
    CMP EBX,dword ptr [0x00679394]      ; 0043c71e | g_WindowWidth
    JL 0x0043c792                       ; 0043c724
        ;   XREF to: 0043c792 (CONDITIONAL_JUMP)  ; LAB_0043c792
    MOV ESI,dword ptr [ESP]             ; 0043c72a
        ;   Label: LAB_0043c72a
    MOV EAX,dword ptr [ESP]             ; 0043c72d
    LEA EBP,[EBX + -0x1]                ; 0043c730
    DEC ESI                             ; 0043c733
    LEA EDI,[EBX + 0x1]                 ; 0043c734
    ADD EAX,0x3                         ; 0043c737
    MOV EBX,dword ptr [ESP]             ; 0043c73a
    MOV dword ptr [ESP + 0x4],EAX       ; 0043c73d
    INC EBX                             ; 0043c741
    TEST EBP,EBP                        ; 0043c742
        ;   Label: LAB_0043c742
    JL 0x0043c74e                       ; 0043c744
        ;   XREF to: 0043c74e (CONDITIONAL_JUMP)  ; LAB_0043c74e
    CMP EBP,dword ptr [0x00679394]      ; 0043c746 | g_WindowWidth
    JL 0x0043c7aa                       ; 0043c74c
        ;   XREF to: 0043c7aa (CONDITIONAL_JUMP)  ; LAB_0043c7aa
    TEST EBP,EBP                        ; 0043c74e
        ;   Label: LAB_0043c74e
    JL 0x0043c75e                       ; 0043c750
        ;   XREF to: 0043c75e (CONDITIONAL_JUMP)  ; LAB_0043c75e
    CMP EBP,dword ptr [0x00679394]      ; 0043c752 | g_WindowWidth
    JL 0x0043c7c2                       ; 0043c758
        ;   XREF to: 0043c7c2 (CONDITIONAL_JUMP)  ; LAB_0043c7c2
    TEST EDI,EDI                        ; 0043c75e
        ;   Label: LAB_0043c75e
    JL 0x0043c76e                       ; 0043c760
        ;   XREF to: 0043c76e (CONDITIONAL_JUMP)  ; LAB_0043c76e
    CMP EDI,dword ptr [0x00679394]      ; 0043c762 | g_WindowWidth
    JL 0x0043c7da                       ; 0043c768
        ;   XREF to: 0043c7da (CONDITIONAL_JUMP)  ; LAB_0043c7da
    TEST EDI,EDI                        ; 0043c76e
        ;   Label: LAB_0043c76e
    JL 0x0043c77e                       ; 0043c770
        ;   XREF to: 0043c77e (CONDITIONAL_JUMP)  ; LAB_0043c77e
    CMP EDI,dword ptr [0x00679394]      ; 0043c772 | g_WindowWidth
    JL 0x0043c7f5                       ; 0043c778
        ;   XREF to: 0043c7f5 (CONDITIONAL_JUMP)  ; LAB_0043c7f5
    MOV ECX,dword ptr [ESP + 0x4]       ; 0043c77e
        ;   Label: LAB_0043c77e
    DEC ESI                             ; 0043c782
    INC EDI                             ; 0043c783
    INC EBX                             ; 0043c784
    DEC EBP                             ; 0043c785
    CMP EBX,ECX                         ; 0043c786
    JNZ 0x0043c742                      ; 0043c788
        ;   XREF to: 0043c742 (CONDITIONAL_JUMP)  ; LAB_0043c742
    ADD ESP,0x8                         ; 0043c78a
        ;   Label: LAB_0043c78a
    POP EBP                             ; 0043c78d
    POP EDI                             ; 0043c78e
    POP ESI                             ; 0043c78f
    POP EBX                             ; 0043c790
    RET                                 ; 0043c791
    TEST EAX,EAX                        ; 0043c792
        ;   Label: LAB_0043c792
    JL 0x0043c72a                       ; 0043c794
        ;   XREF to: 0043c72a (CONDITIONAL_JUMP)  ; LAB_0043c72a
    CMP EAX,dword ptr [0x00679398]      ; 0043c796 | g_WindowHeight
    JGE 0x0043c72a                      ; 0043c79c
        ;   XREF to: 0043c72a (CONDITIONAL_JUMP)  ; LAB_0043c72a
    PUSH EAX                            ; 0043c79e
    PUSH EBX                            ; 0043c79f
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 0043c7a0
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 0043c7a5
    JMP 0x0043c72a                      ; 0043c7a8
        ;   XREF to: 0043c72a (UNCONDITIONAL_JUMP)  ; LAB_0043c72a
    TEST ESI,ESI                        ; 0043c7aa
        ;   Label: LAB_0043c7aa
    JL 0x0043c74e                       ; 0043c7ac
        ;   XREF to: 0043c74e (CONDITIONAL_JUMP)  ; LAB_0043c74e
    CMP ESI,dword ptr [0x00679398]      ; 0043c7ae | g_WindowHeight
    JGE 0x0043c74e                      ; 0043c7b4
        ;   XREF to: 0043c74e (CONDITIONAL_JUMP)  ; LAB_0043c74e
    PUSH ESI                            ; 0043c7b6
    PUSH EBP                            ; 0043c7b7
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 0043c7b8
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 0043c7bd
    JMP 0x0043c74e                      ; 0043c7c0
        ;   XREF to: 0043c74e (UNCONDITIONAL_JUMP)  ; LAB_0043c74e
    TEST EBX,EBX                        ; 0043c7c2
        ;   Label: LAB_0043c7c2
    JL 0x0043c75e                       ; 0043c7c4
        ;   XREF to: 0043c75e (CONDITIONAL_JUMP)  ; LAB_0043c75e
    CMP EBX,dword ptr [0x00679398]      ; 0043c7c6 | g_WindowHeight
    JGE 0x0043c75e                      ; 0043c7cc
        ;   XREF to: 0043c75e (CONDITIONAL_JUMP)  ; LAB_0043c75e
    PUSH EBX                            ; 0043c7ce
    PUSH EBP                            ; 0043c7cf
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 0043c7d0
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 0043c7d5
    JMP 0x0043c75e                      ; 0043c7d8
        ;   XREF to: 0043c75e (UNCONDITIONAL_JUMP)  ; LAB_0043c75e
    TEST ESI,ESI                        ; 0043c7da
        ;   Label: LAB_0043c7da
    JL 0x0043c76e                       ; 0043c7dc
        ;   XREF to: 0043c76e (CONDITIONAL_JUMP)  ; LAB_0043c76e
    CMP ESI,dword ptr [0x00679398]      ; 0043c7de | g_WindowHeight
    JGE 0x0043c76e                      ; 0043c7e4
        ;   XREF to: 0043c76e (CONDITIONAL_JUMP)  ; LAB_0043c76e
    PUSH ESI                            ; 0043c7e6
    PUSH EDI                            ; 0043c7e7
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 0043c7e8
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 0043c7ed
    JMP 0x0043c76e                      ; 0043c7f0
        ;   XREF to: 0043c76e (UNCONDITIONAL_JUMP)  ; LAB_0043c76e
    TEST EBX,EBX                        ; 0043c7f5
        ;   Label: LAB_0043c7f5
    JL 0x0043c77e                       ; 0043c7f7
        ;   XREF to: 0043c77e (CONDITIONAL_JUMP)  ; LAB_0043c77e
    CMP EBX,dword ptr [0x00679398]      ; 0043c7f9 | g_WindowHeight
    JGE 0x0043c77e                      ; 0043c7ff
        ;   XREF to: 0043c77e (CONDITIONAL_JUMP)  ; LAB_0043c77e
    PUSH EBX                            ; 0043c805
    PUSH EDI                            ; 0043c806
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 0043c807
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 0043c80c
    JMP 0x0043c77e                      ; 0043c80f
        ;   XREF to: 0043c77e (UNCONDITIONAL_JUMP)  ; LAB_0043c77e


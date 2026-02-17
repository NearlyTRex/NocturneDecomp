; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_drawVertexMarker_FUN_0052bb80(SProjectedVertex *vertex,int radius)
;
; Parameters:
; SProjectedVertex * Stack[0x4]:4   vertex
; int              Stack[0x8]:4   radius
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_morph.cpp_CMorph_editMorph_FUN_0052bcb0 at 0052c2ea
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052bb80
        ;   Label: core_morph.cpp_drawVertexMarker_FUN_0052bb80
    PUSH ESI                            ; 0052bb81
    PUSH EDI                            ; 0052bb82
    PUSH EBP                            ; 0052bb83
    SUB ESP,0x8                         ; 0052bb84
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0052bb87
    TEST byte ptr [ESI + 0x13],0x80     ; 0052bb8b
    JNZ 0x0052bc1e                      ; 0052bb8f
        ;   XREF to: 0052bc1e (CONDITIONAL_JUMP)  ; LAB_0052bc1e
    MOV EAX,dword ptr [ESI + 0x14]      ; 0052bb95
    MOV EBX,dword ptr [ESI + 0x10]      ; 0052bb98
    SAR EAX,0x10                        ; 0052bb9b
    SAR EBX,0x10                        ; 0052bb9e
    MOV dword ptr [ESP],EAX             ; 0052bba1
    TEST EBX,EBX                        ; 0052bba4
    JL 0x0052bbb4                       ; 0052bba6
        ;   XREF to: 0052bbb4 (CONDITIONAL_JUMP)  ; LAB_0052bbb4
    CMP EBX,dword ptr [0x00679394]      ; 0052bba8 | g_WindowWidth
    JL 0x0052bc26                       ; 0052bbae
        ;   XREF to: 0052bc26 (CONDITIONAL_JUMP)  ; LAB_0052bc26
    CMP dword ptr [ESP + 0x20],0x1      ; 0052bbb4
        ;   Label: LAB_0052bbb4
    JL 0x0052bc1e                       ; 0052bbb9
        ;   XREF to: 0052bc1e (CONDITIONAL_JUMP)  ; LAB_0052bc1e
    MOV ESI,dword ptr [ESP]             ; 0052bbbb
    MOV EAX,dword ptr [ESP]             ; 0052bbbe
    MOV EDX,dword ptr [ESP + 0x20]      ; 0052bbc1
    LEA EBP,[EBX + -0x1]                ; 0052bbc5
    DEC ESI                             ; 0052bbc8
    LEA EDI,[EBX + 0x1]                 ; 0052bbc9
    ADD EAX,EDX                         ; 0052bbcc
    MOV EBX,dword ptr [ESP]             ; 0052bbce
    MOV dword ptr [ESP + 0x4],EAX       ; 0052bbd1
    INC EBX                             ; 0052bbd5
    TEST EBP,EBP                        ; 0052bbd6
        ;   Label: LAB_0052bbd6
    JL 0x0052bbe2                       ; 0052bbd8
        ;   XREF to: 0052bbe2 (CONDITIONAL_JUMP)  ; LAB_0052bbe2
    CMP EBP,dword ptr [0x00679394]      ; 0052bbda | g_WindowWidth
    JL 0x0052bc41                       ; 0052bbe0
        ;   XREF to: 0052bc41 (CONDITIONAL_JUMP)  ; LAB_0052bc41
    TEST EBP,EBP                        ; 0052bbe2
        ;   Label: LAB_0052bbe2
    JL 0x0052bbf2                       ; 0052bbe4
        ;   XREF to: 0052bbf2 (CONDITIONAL_JUMP)  ; LAB_0052bbf2
    CMP EBP,dword ptr [0x00679394]      ; 0052bbe6 | g_WindowWidth
    JL 0x0052bc59                       ; 0052bbec
        ;   XREF to: 0052bc59 (CONDITIONAL_JUMP)  ; LAB_0052bc59
    TEST EDI,EDI                        ; 0052bbf2
        ;   Label: LAB_0052bbf2
    JL 0x0052bc02                       ; 0052bbf4
        ;   XREF to: 0052bc02 (CONDITIONAL_JUMP)  ; LAB_0052bc02
    CMP EDI,dword ptr [0x00679394]      ; 0052bbf6 | g_WindowWidth
    JL 0x0052bc71                       ; 0052bbfc
        ;   XREF to: 0052bc71 (CONDITIONAL_JUMP)  ; LAB_0052bc71
    TEST EDI,EDI                        ; 0052bc02
        ;   Label: LAB_0052bc02
    JL 0x0052bc12                       ; 0052bc04
        ;   XREF to: 0052bc12 (CONDITIONAL_JUMP)  ; LAB_0052bc12
    CMP EDI,dword ptr [0x00679394]      ; 0052bc06 | g_WindowWidth
    JL 0x0052bc8c                       ; 0052bc0c
        ;   XREF to: 0052bc8c (CONDITIONAL_JUMP)  ; LAB_0052bc8c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0052bc12
        ;   Label: LAB_0052bc12
    DEC EBP                             ; 0052bc16
    DEC ESI                             ; 0052bc17
    INC EBX                             ; 0052bc18
    INC EDI                             ; 0052bc19
    CMP EBX,EAX                         ; 0052bc1a
    JLE 0x0052bbd6                      ; 0052bc1c
        ;   XREF to: 0052bbd6 (CONDITIONAL_JUMP)  ; LAB_0052bbd6
    ADD ESP,0x8                         ; 0052bc1e
        ;   Label: LAB_0052bc1e
    POP EBP                             ; 0052bc21
    POP EDI                             ; 0052bc22
    POP ESI                             ; 0052bc23
    POP EBX                             ; 0052bc24
    RET                                 ; 0052bc25
    TEST EAX,EAX                        ; 0052bc26
        ;   Label: LAB_0052bc26
    JL 0x0052bbb4                       ; 0052bc28
        ;   XREF to: 0052bbb4 (CONDITIONAL_JUMP)  ; LAB_0052bbb4
    CMP EAX,dword ptr [0x00679398]      ; 0052bc2a | g_WindowHeight
    JGE 0x0052bbb4                      ; 0052bc30
        ;   XREF to: 0052bbb4 (CONDITIONAL_JUMP)  ; LAB_0052bbb4
    PUSH EAX                            ; 0052bc32
    PUSH EBX                            ; 0052bc33
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 0052bc34
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 0052bc39
    JMP 0x0052bbb4                      ; 0052bc3c
        ;   XREF to: 0052bbb4 (UNCONDITIONAL_JUMP)  ; LAB_0052bbb4
    TEST ESI,ESI                        ; 0052bc41
        ;   Label: LAB_0052bc41
    JL 0x0052bbe2                       ; 0052bc43
        ;   XREF to: 0052bbe2 (CONDITIONAL_JUMP)  ; LAB_0052bbe2
    CMP ESI,dword ptr [0x00679398]      ; 0052bc45 | g_WindowHeight
    JGE 0x0052bbe2                      ; 0052bc4b
        ;   XREF to: 0052bbe2 (CONDITIONAL_JUMP)  ; LAB_0052bbe2
    PUSH ESI                            ; 0052bc4d
    PUSH EBP                            ; 0052bc4e
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 0052bc4f
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 0052bc54
    JMP 0x0052bbe2                      ; 0052bc57
        ;   XREF to: 0052bbe2 (UNCONDITIONAL_JUMP)  ; LAB_0052bbe2
    TEST EBX,EBX                        ; 0052bc59
        ;   Label: LAB_0052bc59
    JL 0x0052bbf2                       ; 0052bc5b
        ;   XREF to: 0052bbf2 (CONDITIONAL_JUMP)  ; LAB_0052bbf2
    CMP EBX,dword ptr [0x00679398]      ; 0052bc5d | g_WindowHeight
    JGE 0x0052bbf2                      ; 0052bc63
        ;   XREF to: 0052bbf2 (CONDITIONAL_JUMP)  ; LAB_0052bbf2
    PUSH EBX                            ; 0052bc65
    PUSH EBP                            ; 0052bc66
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 0052bc67
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 0052bc6c
    JMP 0x0052bbf2                      ; 0052bc6f
        ;   XREF to: 0052bbf2 (UNCONDITIONAL_JUMP)  ; LAB_0052bbf2
    TEST ESI,ESI                        ; 0052bc71
        ;   Label: LAB_0052bc71
    JL 0x0052bc02                       ; 0052bc73
        ;   XREF to: 0052bc02 (CONDITIONAL_JUMP)  ; LAB_0052bc02
    CMP ESI,dword ptr [0x00679398]      ; 0052bc75 | g_WindowHeight
    JGE 0x0052bc02                      ; 0052bc7b
        ;   XREF to: 0052bc02 (CONDITIONAL_JUMP)  ; LAB_0052bc02
    PUSH ESI                            ; 0052bc7d
    PUSH EDI                            ; 0052bc7e
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 0052bc7f
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 0052bc84
    JMP 0x0052bc02                      ; 0052bc87
        ;   XREF to: 0052bc02 (UNCONDITIONAL_JUMP)  ; LAB_0052bc02
    TEST EBX,EBX                        ; 0052bc8c
        ;   Label: LAB_0052bc8c
    JL 0x0052bc12                       ; 0052bc8e
        ;   XREF to: 0052bc12 (CONDITIONAL_JUMP)  ; LAB_0052bc12
    CMP EBX,dword ptr [0x00679398]      ; 0052bc90 | g_WindowHeight
    JGE 0x0052bc12                      ; 0052bc96
        ;   XREF to: 0052bc12 (CONDITIONAL_JUMP)  ; LAB_0052bc12
    PUSH EBX                            ; 0052bc9c
    PUSH EDI                            ; 0052bc9d
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 0052bc9e
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 0052bca3
    JMP 0x0052bc12                      ; 0052bca6
        ;   XREF to: 0052bc12 (UNCONDITIONAL_JUMP)  ; LAB_0052bc12


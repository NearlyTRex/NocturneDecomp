; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00492a40(int param_1,int param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_edittool.cpp_CPickList_renderDialog_FUN_0049b830 at 0049bc3f
;   shape_edittool.cpp_FUN_0049d580 at 0049d710
;
; Referenced Globals:
;   undefined4 DAT_01c3f544
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401130
;   engine_mini3d.cpp_FUN_00517f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00492a40
        ;   Label: shape_edittool.cpp_FUN_00492a40
    PUSH ESI                            ; 00492a41
    PUSH EDI                            ; 00492a42
    PUSH EBP                            ; 00492a43
    SUB ESP,0xc                         ; 00492a44
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00492a47
    MOV EDI,dword ptr [ESP + 0x30]      ; 00492a4b
    MOV EDX,dword ptr [ESP + 0x20]      ; 00492a4f
    MOV ECX,dword ptr [ESP + 0x28]      ; 00492a53
    CMP EDX,ECX                         ; 00492a57
    JG 0x00492b82                       ; 00492a59
        ;   XREF to: 00492b82 (CONDITIONAL_JUMP)  ; LAB_00492b82
    MOV EBX,dword ptr [ESP + 0x24]      ; 00492a5f
        ;   Label: LAB_00492a5f
    CMP EBP,EBX                         ; 00492a63
    JGE 0x00492a6d                      ; 00492a65
        ;   XREF to: 00492a6d (CONDITIONAL_JUMP)  ; LAB_00492a6d
    MOV dword ptr [ESP + 0x24],EBP      ; 00492a67
    MOV EBP,EBX                         ; 00492a6b
    MOV ESI,dword ptr [ESP + 0x20]      ; 00492a6d
        ;   Label: LAB_00492a6d
    MOV EAX,dword ptr [ESP + 0x28]      ; 00492a71
    MOV EBX,0x1                         ; 00492a75
    CMP ESI,EAX                         ; 00492a7a
    JGE 0x00492ab9                      ; 00492a7c
        ;   XREF to: 00492ab9 (CONDITIONAL_JUMP)  ; LAB_00492ab9
    LEA EDX,[EDI + EDI*0x1]             ; 00492a7e
    MOV dword ptr [ESP],EDX             ; 00492a81
    MOV ECX,dword ptr [ESP]             ; 00492a84
        ;   Label: LAB_00492a84
    MOV EDX,EBX                         ; 00492a87
    MOV EAX,EBX                         ; 00492a89
    SAR EDX,0x1f                        ; 00492a8b
    IDIV ECX                            ; 00492a8e
    CMP EDX,EDI                         ; 00492a90
    JGE 0x00492aaf                      ; 00492a92
        ;   XREF to: 00492aaf (CONDITIONAL_JUMP)  ; LAB_00492aaf
    CMP dword ptr [0x01c3f544],0x0      ; 00492a94 | DAT_01c3f544
    JZ 0x00492b8f                       ; 00492a9b
        ;   XREF to: 00492b8f (CONDITIONAL_JUMP)  ; LAB_00492b8f
    MOV ECX,dword ptr [ESP + 0x24]      ; 00492aa1
    PUSH ECX                            ; 00492aa5
    PUSH ESI                            ; 00492aa6
    CALL engine_mini3d.cpp_FUN_00517f10 ; 00492aa7
        ;   XREF to: 00517f10 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517f10()
    ADD ESP,0x8                         ; 00492aac
        ;   Label: LAB_00492aac
    MOV EDX,dword ptr [ESP + 0x28]      ; 00492aaf
        ;   Label: LAB_00492aaf
    INC ESI                             ; 00492ab3
    INC EBX                             ; 00492ab4
    CMP ESI,EDX                         ; 00492ab5
    JL 0x00492a84                       ; 00492ab7
        ;   XREF to: 00492a84 (CONDITIONAL_JUMP)  ; LAB_00492a84
    MOV ESI,dword ptr [ESP + 0x24]      ; 00492ab9
        ;   Label: LAB_00492ab9
    CMP EBP,ESI                         ; 00492abd
    JLE 0x00492afa                      ; 00492abf
        ;   XREF to: 00492afa (CONDITIONAL_JUMP)  ; LAB_00492afa
    LEA EDX,[EDI + EDI*0x1]             ; 00492ac1
    MOV dword ptr [ESP + 0x4],EDX       ; 00492ac4
    MOV ECX,dword ptr [ESP + 0x4]       ; 00492ac8
        ;   Label: LAB_00492ac8
    MOV EDX,EBX                         ; 00492acc
    MOV EAX,EBX                         ; 00492ace
    SAR EDX,0x1f                        ; 00492ad0
    IDIV ECX                            ; 00492ad3
    CMP EDX,EDI                         ; 00492ad5
    JGE 0x00492af4                      ; 00492ad7
        ;   XREF to: 00492af4 (CONDITIONAL_JUMP)  ; LAB_00492af4
    CMP dword ptr [0x01c3f544],0x0      ; 00492ad9 | DAT_01c3f544
    JZ 0x00492b9f                       ; 00492ae0
        ;   XREF to: 00492b9f (CONDITIONAL_JUMP)  ; LAB_00492b9f
    PUSH ESI                            ; 00492ae6
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00492ae7
    PUSH ECX                            ; 00492aeb
    CALL engine_mini3d.cpp_FUN_00517f10 ; 00492aec
        ;   XREF to: 00517f10 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517f10()
    ADD ESP,0x8                         ; 00492af1
        ;   Label: LAB_00492af1
    INC ESI                             ; 00492af4
        ;   Label: LAB_00492af4
    INC EBX                             ; 00492af5
    CMP ESI,EBP                         ; 00492af6
    JL 0x00492ac8                       ; 00492af8
        ;   XREF to: 00492ac8 (CONDITIONAL_JUMP)  ; LAB_00492ac8
    MOV EAX,dword ptr [ESP + 0x20]      ; 00492afa
        ;   Label: LAB_00492afa
    MOV ESI,dword ptr [ESP + 0x28]      ; 00492afe
    CMP ESI,EAX                         ; 00492b02
    JLE 0x00492b3f                      ; 00492b04
        ;   XREF to: 00492b3f (CONDITIONAL_JUMP)  ; LAB_00492b3f
    LEA EDX,[EDI + EDI*0x1]             ; 00492b06
    MOV dword ptr [ESP + 0x8],EDX       ; 00492b09
    MOV ECX,dword ptr [ESP + 0x8]       ; 00492b0d
        ;   Label: LAB_00492b0d
    MOV EDX,EBX                         ; 00492b11
    MOV EAX,EBX                         ; 00492b13
    SAR EDX,0x1f                        ; 00492b15
    IDIV ECX                            ; 00492b18
    CMP EDX,EDI                         ; 00492b1a
    JGE 0x00492b35                      ; 00492b1c
        ;   XREF to: 00492b35 (CONDITIONAL_JUMP)  ; LAB_00492b35
    CMP dword ptr [0x01c3f544],0x0      ; 00492b1e | DAT_01c3f544
    JZ 0x00492baf                       ; 00492b25
        ;   XREF to: 00492baf (CONDITIONAL_JUMP)  ; LAB_00492baf
    PUSH EBP                            ; 00492b2b
    PUSH ESI                            ; 00492b2c
    CALL engine_mini3d.cpp_FUN_00517f10 ; 00492b2d
        ;   XREF to: 00517f10 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517f10()
    ADD ESP,0x8                         ; 00492b32
        ;   Label: LAB_00492b32
    MOV EAX,dword ptr [ESP + 0x20]      ; 00492b35
        ;   Label: LAB_00492b35
    DEC ESI                             ; 00492b39
    INC EBX                             ; 00492b3a
    CMP ESI,EAX                         ; 00492b3b
    JG 0x00492b0d                       ; 00492b3d
        ;   XREF to: 00492b0d (CONDITIONAL_JUMP)  ; LAB_00492b0d
    MOV EDX,dword ptr [ESP + 0x24]      ; 00492b3f
        ;   Label: LAB_00492b3f
    MOV ESI,EBP                         ; 00492b43
    CMP EBP,EDX                         ; 00492b45
    JLE 0x00492b7a                      ; 00492b47
        ;   XREF to: 00492b7a (CONDITIONAL_JUMP)  ; LAB_00492b7a
    LEA EBP,[EDI + EDI*0x1]             ; 00492b49
    MOV EDX,EBX                         ; 00492b4c
        ;   Label: LAB_00492b4c
    MOV EAX,EBX                         ; 00492b4e
    SAR EDX,0x1f                        ; 00492b50
    IDIV EBP                            ; 00492b53
    CMP EDX,EDI                         ; 00492b55
    JGE 0x00492b70                      ; 00492b57
        ;   XREF to: 00492b70 (CONDITIONAL_JUMP)  ; LAB_00492b70
    CMP dword ptr [0x01c3f544],0x0      ; 00492b59 | DAT_01c3f544
    JZ 0x00492bbb                       ; 00492b60
        ;   XREF to: 00492bbb (CONDITIONAL_JUMP)  ; LAB_00492bbb
    PUSH ESI                            ; 00492b62
    MOV EDX,dword ptr [ESP + 0x24]      ; 00492b63
    PUSH EDX                            ; 00492b67
    CALL engine_mini3d.cpp_FUN_00517f10 ; 00492b68
        ;   XREF to: 00517f10 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517f10()
    ADD ESP,0x8                         ; 00492b6d
        ;   Label: LAB_00492b6d
    MOV EDX,dword ptr [ESP + 0x24]      ; 00492b70
        ;   Label: LAB_00492b70
    DEC ESI                             ; 00492b74
    INC EBX                             ; 00492b75
    CMP ESI,EDX                         ; 00492b76
    JG 0x00492b4c                       ; 00492b78
        ;   XREF to: 00492b4c (CONDITIONAL_JUMP)  ; LAB_00492b4c
    ADD ESP,0xc                         ; 00492b7a
        ;   Label: LAB_00492b7a
    POP EBP                             ; 00492b7d
    POP EDI                             ; 00492b7e
    POP ESI                             ; 00492b7f
    POP EBX                             ; 00492b80
    RET                                 ; 00492b81
    MOV dword ptr [ESP + 0x20],ECX      ; 00492b82
        ;   Label: LAB_00492b82
    MOV dword ptr [ESP + 0x28],EDX      ; 00492b86
    JMP 0x00492a5f                      ; 00492b8a
        ;   XREF to: 00492a5f (UNCONDITIONAL_JUMP)  ; LAB_00492a5f
    MOV EDX,dword ptr [ESP + 0x24]      ; 00492b8f
        ;   Label: LAB_00492b8f
    PUSH EDX                            ; 00492b93
    PUSH ESI                            ; 00492b94
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00492b95
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    JMP 0x00492aac                      ; 00492b9a
        ;   XREF to: 00492aac (UNCONDITIONAL_JUMP)  ; LAB_00492aac
    PUSH ESI                            ; 00492b9f
        ;   Label: LAB_00492b9f
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00492ba0
    PUSH EDX                            ; 00492ba4
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00492ba5
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    JMP 0x00492af1                      ; 00492baa
        ;   XREF to: 00492af1 (UNCONDITIONAL_JUMP)  ; LAB_00492af1
    PUSH EBP                            ; 00492baf
        ;   Label: LAB_00492baf
    PUSH ESI                            ; 00492bb0
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00492bb1
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    JMP 0x00492b32                      ; 00492bb6
        ;   XREF to: 00492b32 (UNCONDITIONAL_JUMP)  ; LAB_00492b32
    PUSH ESI                            ; 00492bbb
        ;   Label: LAB_00492bbb
    MOV EAX,dword ptr [ESP + 0x24]      ; 00492bbc
    PUSH EAX                            ; 00492bc0
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00492bc1
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    JMP 0x00492b6d                      ; 00492bc6
        ;   XREF to: 00492b6d (UNCONDITIONAL_JUMP)  ; LAB_00492b6d


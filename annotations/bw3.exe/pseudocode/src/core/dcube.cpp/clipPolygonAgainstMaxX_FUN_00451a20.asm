; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_clipPolygonAgainstMaxX_FUN_00451a20(float max_x_plane)
;
; Parameters:
; float            Stack[0x4]:4   max_x_plane
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00451a08 = 00451aca
;   undefined1* PTR_caseD_3_00451a10 = 00451aaf
;   undefined4 DAT_01548784
;   undefined4 DAT_01548848
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_004515b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00451a20
        ;   Label: core_dcube.cpp_clipPolygonAgainstMaxX_FUN_00451a20
    PUSH ESI                            ; 00451a21
    PUSH EDI                            ; 00451a22
    PUSH EBP                            ; 00451a23
    MOV EBP,ESP                         ; 00451a24
    SUB ESP,0x4                         ; 00451a26
    AND ESP,0xfffffff8                  ; 00451a29
    MOV EBX,dword ptr [0x01548848]      ; 00451a2c | DAT_01548848
    MOV EDX,dword ptr [0x01548784]      ; 00451a32 | DAT_01548784
    XOR ESI,ESI                         ; 00451a38
    TEST EDX,EDX                        ; 00451a3a
    JLE 0x00451abd                      ; 00451a3c
        ;   XREF to: 00451abd (CONDITIONAL_JUMP)  ; LAB_00451abd
    MOV EDI,0x1548788                   ; 00451a42
    MOV EAX,[0x01548784]                ; 00451a47 | DAT_01548784
        ;   Label: LAB_00451a47
    LEA ECX,[ESI + 0x1]                 ; 00451a4c
    CMP ECX,EAX                         ; 00451a4f
    JNZ 0x00451a55                      ; 00451a51
        ;   XREF to: 00451a55 (CONDITIONAL_JUMP)  ; LAB_00451a55
    XOR ECX,EAX                         ; 00451a53
    IMUL ECX,ECX,0xc                    ; 00451a55
        ;   Label: LAB_00451a55
    MOV EAX,0x1548788                   ; 00451a58
    FLD float ptr [EDI]                 ; 00451a5d
    ADD EAX,ECX                         ; 00451a5f
    MOV EDX,EDI                         ; 00451a61
    MOV dword ptr [ESP],EAX             ; 00451a63
    XOR ECX,ECX                         ; 00451a66
    FCOMP float ptr [EBP + 0x14]        ; 00451a68
    FNSTSW AX                           ; 00451a6b
    SAHF                                ; 00451a6d
    JBE 0x00451a75                      ; 00451a6e
        ;   XREF to: 00451a75 (CONDITIONAL_JUMP)  ; LAB_00451a75
    MOV ECX,0x1                         ; 00451a70
    MOV EAX,dword ptr [ESP]             ; 00451a75
        ;   Label: LAB_00451a75
    FLD float ptr [EAX]                 ; 00451a78
    FCOMP float ptr [EBP + 0x14]        ; 00451a7a
    FNSTSW AX                           ; 00451a7d
    SAHF                                ; 00451a7f
    JBE 0x00451a85                      ; 00451a80
        ;   XREF to: 00451a85 (CONDITIONAL_JUMP)  ; LAB_00451a85
    OR CL,0x2                           ; 00451a82
    CMP ECX,0x3                         ; 00451a85
        ;   Label: LAB_00451a85
    JA 0x00451aaf                       ; 00451a88
        ;   XREF to: 00451aaf (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x451a04]  ; 00451a8a | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 00451a91
        ;   Label: caseD_0
    ADD ECX,0x154884c                   ; 00451a94
    CMP ECX,EDX                         ; 00451a9a
    JZ 0x00451aae                       ; 00451a9c
        ;   XREF to: 00451aae (CONDITIONAL_JUMP)  ; LAB_00451aae
    MOV EAX,dword ptr [EDX]             ; 00451a9e
    MOV dword ptr [ECX],EAX             ; 00451aa0
    MOV EAX,dword ptr [EDX + 0x4]       ; 00451aa2
    MOV dword ptr [ECX + 0x4],EAX       ; 00451aa5
    MOV EAX,dword ptr [EDX + 0x8]       ; 00451aa8
    MOV dword ptr [ECX + 0x8],EAX       ; 00451aab
    INC EBX                             ; 00451aae
        ;   Label: LAB_00451aae
    MOV ECX,dword ptr [0x01548784]      ; 00451aaf | DAT_01548784
        ;   Label: caseD_3
    INC ESI                             ; 00451ab5
    ADD EDI,0xc                         ; 00451ab6
    CMP ESI,ECX                         ; 00451ab9
    JL 0x00451a47                       ; 00451abb
        ;   XREF to: 00451a47 (CONDITIONAL_JUMP)  ; LAB_00451a47
    MOV dword ptr [0x01548848],EBX      ; 00451abd | DAT_01548848
        ;   Label: LAB_00451abd
    MOV ESP,EBP                         ; 00451ac3
    POP EBP                             ; 00451ac5
    POP EDI                             ; 00451ac6
    POP ESI                             ; 00451ac7
    POP EBX                             ; 00451ac8
    RET                                 ; 00451ac9
    IMUL ECX,EBX,0xc                    ; 00451aca
        ;   Label: caseD_1
    FLD float ptr [EBP + 0x14]          ; 00451acd
    SUB ESP,0x8                         ; 00451ad0
    FCHS                                ; 00451ad3
    FSTP double ptr [ESP]               ; 00451ad5
    PUSH 0x0                            ; 00451ad8
    PUSH 0x0                            ; 00451ada
    PUSH 0x0                            ; 00451adc
    PUSH 0x0                            ; 00451ade
    PUSH 0x3ff00000                     ; 00451ae0
    PUSH 0x0                            ; 00451ae5
    ADD ECX,0x154884c                   ; 00451ae7
    PUSH ECX                            ; 00451aed
    PUSH EDX                            ; 00451aee
    MOV EAX,dword ptr [ESP + 0x28]      ; 00451aef
    PUSH EAX                            ; 00451af3
    MOV dword ptr [0x01548848],EBX      ; 00451af4 | DAT_01548848
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004515b0 ; 00451afa
        ;   XREF to: 004515b0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004515b0()
    MOV EBX,dword ptr [0x01548848]      ; 00451aff | DAT_01548848
    ADD ESP,0x2c                        ; 00451b05
    JMP 0x00451aae                      ; 00451b08
        ;   XREF to: 00451aae (UNCONDITIONAL_JUMP)  ; LAB_00451aae
    IMUL ECX,EBX,0xc                    ; 00451b0a
        ;   Label: caseD_2
    ADD ECX,0x154884c                   ; 00451b0d
    CMP ECX,EDX                         ; 00451b13
    JZ 0x00451b27                       ; 00451b15
        ;   XREF to: 00451b27 (CONDITIONAL_JUMP)  ; LAB_00451b27
    MOV EAX,dword ptr [EDX]             ; 00451b17
    MOV dword ptr [ECX],EAX             ; 00451b19
    MOV EAX,dword ptr [EDX + 0x4]       ; 00451b1b
    MOV dword ptr [ECX + 0x4],EAX       ; 00451b1e
    MOV EAX,dword ptr [EDX + 0x8]       ; 00451b21
    MOV dword ptr [ECX + 0x8],EAX       ; 00451b24
    INC EBX                             ; 00451b27
        ;   Label: LAB_00451b27
    IMUL ECX,EBX,0xc                    ; 00451b28
    FLD float ptr [EBP + 0x14]          ; 00451b2b
    SUB ESP,0x8                         ; 00451b2e
    FCHS                                ; 00451b31
    FSTP double ptr [ESP]               ; 00451b33
    PUSH 0x0                            ; 00451b36
    PUSH 0x0                            ; 00451b38
    PUSH 0x0                            ; 00451b3a
    PUSH 0x0                            ; 00451b3c
    PUSH 0x3ff00000                     ; 00451b3e
    PUSH 0x0                            ; 00451b43
    ADD ECX,0x154884c                   ; 00451b45
    PUSH ECX                            ; 00451b4b
    MOV ECX,dword ptr [ESP + 0x24]      ; 00451b4c
    PUSH ECX                            ; 00451b50
    PUSH EDX                            ; 00451b51
    MOV dword ptr [0x01548848],EBX      ; 00451b52 | DAT_01548848
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004515b0 ; 00451b58
        ;   XREF to: 004515b0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004515b0()
    MOV EBX,dword ptr [0x01548848]      ; 00451b5d | DAT_01548848
    ADD ESP,0x2c                        ; 00451b63
    JMP 0x00451aae                      ; 00451b66
        ;   XREF to: 00451aae (UNCONDITIONAL_JUMP)  ; LAB_00451aae


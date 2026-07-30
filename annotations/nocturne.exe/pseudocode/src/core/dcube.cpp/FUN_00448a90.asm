; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcube_cpp_FUN_00448a90(float param_1)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00448a80 = 00448b42
;   undefined1* PTR_caseD_3_00448a88 = 00448b27
;   undefined4 DAT_014b86d8
;   CVector3f[16] CVector3f_ARRAY_014b86dc
;   undefined4 CVector3f_ARRAY_014b86dc[0].y
;   undefined4 CVector3f_ARRAY_014b86dc[0].z
;   undefined4 CVector3f_ARRAY_014b86dc[1].x
;   undefined4 CVector3f_ARRAY_014b86dc[2].x
;   undefined4 DAT_014b879c
;   CVector3f[16] CVector3f_ARRAY_014b87a0
;   undefined4 CVector3f_ARRAY_014b87a0[0].y
;   undefined4 CVector3f_ARRAY_014b87a0[0].z
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_004484c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448a90
        ;   Label: core_dcube.cpp_FUN_00448a90
    PUSH ESI                            ; 00448a91
    PUSH EDI                            ; 00448a92
    PUSH EBP                            ; 00448a93
    MOV EBP,ESP                         ; 00448a94
    SUB ESP,0x8                         ; 00448a96
    AND ESP,0xfffffff8                  ; 00448a99
    MOV EBX,dword ptr [0x014b879c]      ; 00448a9c | DAT_014b879c
    MOV EDX,dword ptr [EBP + 0x14]      ; 00448aa2
    MOV dword ptr [ESP],EDX             ; 00448aa5
    MOV EDX,dword ptr [0x014b86d8]      ; 00448aa8 | DAT_014b86d8
    XOR EDI,EDI                         ; 00448aae
    TEST EDX,EDX                        ; 00448ab0
    JLE 0x00448b35                      ; 00448ab2
        ;   XREF to: 00448b35 (CONDITIONAL_JUMP)  ; LAB_00448b35
    MOV ESI,0x14b86dc                   ; 00448ab8
    MOV EAX,[0x014b86d8]                ; 00448abd | DAT_014b86d8
        ;   Label: LAB_00448abd
    LEA ECX,[EDI + 0x1]                 ; 00448ac2
    CMP ECX,EAX                         ; 00448ac5
    JNZ 0x00448acb                      ; 00448ac7
        ;   XREF to: 00448acb (CONDITIONAL_JUMP)  ; LAB_00448acb
    XOR ECX,EAX                         ; 00448ac9
    IMUL ECX,ECX,0xc                    ; 00448acb
        ;   Label: LAB_00448acb
    MOV EAX,0x14b86dc                   ; 00448ace
    FLD float ptr [ESI]                 ; 00448ad3 | CVector3f_ARRAY_014b86dc | CVector3f_ARRAY_014b86dc[1].x
    ADD EAX,ECX                         ; 00448ad5
    MOV EDX,ESI                         ; 00448ad7
    MOV dword ptr [ESP + 0x4],EAX       ; 00448ad9 | CVector3f_ARRAY_014b86dc[2].x
    XOR ECX,ECX                         ; 00448add
    FCOMP float ptr [ESP]               ; 00448adf
    FNSTSW AX                           ; 00448ae2
    SAHF                                ; 00448ae4
    JNC 0x00448aec                      ; 00448ae5
        ;   XREF to: 00448aec (CONDITIONAL_JUMP)  ; LAB_00448aec
    MOV ECX,0x1                         ; 00448ae7
    MOV EAX,dword ptr [ESP + 0x4]       ; 00448aec
        ;   Label: LAB_00448aec
    FLD float ptr [EAX]                 ; 00448af0 | CVector3f_ARRAY_014b86dc | CVector3f_ARRAY_014b86dc[2].x
    FCOMP float ptr [ESP]               ; 00448af2
    FNSTSW AX                           ; 00448af5
    SAHF                                ; 00448af7
    JNC 0x00448afd                      ; 00448af8
        ;   XREF to: 00448afd (CONDITIONAL_JUMP)  ; LAB_00448afd
    OR CL,0x2                           ; 00448afa
    CMP ECX,0x3                         ; 00448afd
        ;   Label: LAB_00448afd
    JA 0x00448b27                       ; 00448b00
        ;   XREF to: 00448b27 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x448a7c]  ; 00448b02 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 00448b09
        ;   Label: caseD_0
    ADD ECX,0x14b87a0                   ; 00448b0c
    CMP ECX,EDX                         ; 00448b12
    JZ 0x00448b26                       ; 00448b14
        ;   XREF to: 00448b26 (CONDITIONAL_JUMP)  ; LAB_00448b26
    MOV EAX,dword ptr [EDX]             ; 00448b16 | CVector3f_ARRAY_014b86dc
    MOV dword ptr [ECX],EAX             ; 00448b18 | CVector3f_ARRAY_014b87a0
    MOV EAX,dword ptr [EDX + 0x4]       ; 00448b1a | CVector3f_ARRAY_014b86dc[0].y
    MOV dword ptr [ECX + 0x4],EAX       ; 00448b1d | CVector3f_ARRAY_014b87a0[0].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 00448b20 | CVector3f_ARRAY_014b86dc[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 00448b23 | CVector3f_ARRAY_014b87a0[0].z
    INC EBX                             ; 00448b26
        ;   Label: LAB_00448b26
    MOV ECX,dword ptr [0x014b86d8]      ; 00448b27 | DAT_014b86d8
        ;   Label: caseD_3
    INC EDI                             ; 00448b2d
    ADD ESI,0xc                         ; 00448b2e
    CMP EDI,ECX                         ; 00448b31
    JL 0x00448abd                       ; 00448b33
        ;   XREF to: 00448abd (CONDITIONAL_JUMP)  ; LAB_00448abd
    MOV dword ptr [0x014b879c],EBX      ; 00448b35 | DAT_014b879c
        ;   Label: LAB_00448b35
    MOV ESP,EBP                         ; 00448b3b
    POP EBP                             ; 00448b3d
    POP EDI                             ; 00448b3e
    POP ESI                             ; 00448b3f
    POP EBX                             ; 00448b40
    RET                                 ; 00448b41
    IMUL ECX,EBX,0xc                    ; 00448b42
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 00448b45
    SUB ESP,0x8                         ; 00448b48
    FSTP double ptr [ESP]               ; 00448b4b
    PUSH 0x0                            ; 00448b4e
    PUSH 0x0                            ; 00448b50
    PUSH 0x0                            ; 00448b52
    PUSH 0x0                            ; 00448b54
    PUSH 0xbff00000                     ; 00448b56
    PUSH 0x0                            ; 00448b5b
    ADD ECX,0x14b87a0                   ; 00448b5d
    PUSH ECX                            ; 00448b63
    PUSH EDX                            ; 00448b64 | CVector3f_ARRAY_014b86dc
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00448b65
    PUSH EAX                            ; 00448b69
    MOV dword ptr [0x014b879c],EBX      ; 00448b6a | DAT_014b879c
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004484c0 ; 00448b70
        ;   XREF to: 004484c0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004484c0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x014b879c]      ; 00448b75 | DAT_014b879c
    ADD ESP,0x2c                        ; 00448b7b
    JMP 0x00448b26                      ; 00448b7e
        ;   XREF to: 00448b26 (UNCONDITIONAL_JUMP)  ; LAB_00448b26
    IMUL ECX,EBX,0xc                    ; 00448b80
        ;   Label: caseD_2
    ADD ECX,0x14b87a0                   ; 00448b83
    CMP ECX,EDX                         ; 00448b89
    JZ 0x00448b9d                       ; 00448b8b
        ;   XREF to: 00448b9d (CONDITIONAL_JUMP)  ; LAB_00448b9d
    MOV EAX,dword ptr [EDX]             ; 00448b8d | CVector3f_ARRAY_014b86dc
    MOV dword ptr [ECX],EAX             ; 00448b8f | CVector3f_ARRAY_014b87a0
    MOV EAX,dword ptr [EDX + 0x4]       ; 00448b91 | CVector3f_ARRAY_014b86dc[0].y
    MOV dword ptr [ECX + 0x4],EAX       ; 00448b94 | CVector3f_ARRAY_014b87a0[0].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 00448b97 | CVector3f_ARRAY_014b86dc[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 00448b9a | CVector3f_ARRAY_014b87a0[0].z
    INC EBX                             ; 00448b9d
        ;   Label: LAB_00448b9d
    IMUL ECX,EBX,0xc                    ; 00448b9e
    FLD float ptr [ESP]                 ; 00448ba1
    SUB ESP,0x8                         ; 00448ba4
    FSTP double ptr [ESP]               ; 00448ba7
    PUSH 0x0                            ; 00448baa
    PUSH 0x0                            ; 00448bac
    PUSH 0x0                            ; 00448bae
    PUSH 0x0                            ; 00448bb0
    PUSH 0xbff00000                     ; 00448bb2
    PUSH 0x0                            ; 00448bb7
    ADD ECX,0x14b87a0                   ; 00448bb9
    PUSH ECX                            ; 00448bbf
    MOV ECX,dword ptr [ESP + 0x28]      ; 00448bc0
    PUSH ECX                            ; 00448bc4
    PUSH EDX                            ; 00448bc5 | CVector3f_ARRAY_014b86dc
    MOV dword ptr [0x014b879c],EBX      ; 00448bc6 | DAT_014b879c
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004484c0 ; 00448bcc
        ;   XREF to: 004484c0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004484c0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x014b879c]      ; 00448bd1 | DAT_014b879c
    ADD ESP,0x2c                        ; 00448bd7
    JMP 0x00448b26                      ; 00448bda
        ;   XREF to: 00448b26 (UNCONDITIONAL_JUMP)  ; LAB_00448b26


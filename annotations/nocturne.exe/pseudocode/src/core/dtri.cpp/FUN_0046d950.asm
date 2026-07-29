; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtri_cpp_FUN_0046d950(float param_1)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_0046d938 = 0046d9fa
;   undefined1* PTR_caseD_3_0046d940 = 0046d9df
;   undefined4 DAT_01bc9af4
;   undefined4 DAT_01bc9af8
;   undefined4 DAT_01bc9afc
;   undefined4 DAT_01bc9b00
;   undefined4 DAT_01bc9b04
;   undefined4 DAT_01bc9b10
;   undefined4 DAT_01bc9bb8
;   undefined4 DAT_01bc9bbc
;   undefined4 DAT_01bc9bc0
;   undefined4 DAT_01bc9bc4
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_0046d4e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d950
        ;   Label: core_dtri.cpp_FUN_0046d950
    PUSH ESI                            ; 0046d951
    PUSH EDI                            ; 0046d952
    PUSH EBP                            ; 0046d953
    MOV EBP,ESP                         ; 0046d954
    SUB ESP,0x4                         ; 0046d956
    AND ESP,0xfffffff8                  ; 0046d959
    MOV EBX,dword ptr [0x01bc9bb8]      ; 0046d95c | DAT_01bc9bb8
    MOV EDX,dword ptr [0x01bc9af4]      ; 0046d962 | DAT_01bc9af4
    XOR ESI,ESI                         ; 0046d968
    TEST EDX,EDX                        ; 0046d96a
    JLE 0x0046d9ed                      ; 0046d96c
        ;   XREF to: 0046d9ed (CONDITIONAL_JUMP)  ; LAB_0046d9ed
    MOV EDI,0x1bc9af8                   ; 0046d972
    MOV EAX,[0x01bc9af4]                ; 0046d977 | DAT_01bc9af4
        ;   Label: LAB_0046d977
    LEA ECX,[ESI + 0x1]                 ; 0046d97c
    CMP ECX,EAX                         ; 0046d97f
    JNZ 0x0046d985                      ; 0046d981
        ;   XREF to: 0046d985 (CONDITIONAL_JUMP)  ; LAB_0046d985
    XOR ECX,EAX                         ; 0046d983
    IMUL ECX,ECX,0xc                    ; 0046d985
        ;   Label: LAB_0046d985
    MOV EAX,0x1bc9af8                   ; 0046d988
    FLD float ptr [EDI]                 ; 0046d98d | DAT_01bc9af8 | DAT_01bc9b04
    ADD EAX,ECX                         ; 0046d98f
    MOV EDX,EDI                         ; 0046d991
    MOV dword ptr [ESP],EAX             ; 0046d993 | DAT_01bc9b10
    XOR ECX,ECX                         ; 0046d996
    FCOMP float ptr [EBP + 0x14]        ; 0046d998
    FNSTSW AX                           ; 0046d99b
    SAHF                                ; 0046d99d
    JBE 0x0046d9a5                      ; 0046d99e
        ;   XREF to: 0046d9a5 (CONDITIONAL_JUMP)  ; LAB_0046d9a5
    MOV ECX,0x1                         ; 0046d9a0
    MOV EAX,dword ptr [ESP]             ; 0046d9a5
        ;   Label: LAB_0046d9a5
    FLD float ptr [EAX]                 ; 0046d9a8 | DAT_01bc9af8 | DAT_01bc9b10
    FCOMP float ptr [EBP + 0x14]        ; 0046d9aa
    FNSTSW AX                           ; 0046d9ad
    SAHF                                ; 0046d9af
    JBE 0x0046d9b5                      ; 0046d9b0
        ;   XREF to: 0046d9b5 (CONDITIONAL_JUMP)  ; LAB_0046d9b5
    OR CL,0x2                           ; 0046d9b2
    CMP ECX,0x3                         ; 0046d9b5
        ;   Label: LAB_0046d9b5
    JA 0x0046d9df                       ; 0046d9b8
        ;   XREF to: 0046d9df (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x46d934]  ; 0046d9ba | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 0046d9c1
        ;   Label: caseD_0
    ADD ECX,0x1bc9bbc                   ; 0046d9c4
    CMP ECX,EDX                         ; 0046d9ca
    JZ 0x0046d9de                       ; 0046d9cc
        ;   XREF to: 0046d9de (CONDITIONAL_JUMP)  ; LAB_0046d9de
    MOV EAX,dword ptr [EDX]             ; 0046d9ce | DAT_01bc9af8
    MOV dword ptr [ECX],EAX             ; 0046d9d0 | DAT_01bc9bbc
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046d9d2 | DAT_01bc9afc
    MOV dword ptr [ECX + 0x4],EAX       ; 0046d9d5 | DAT_01bc9bc0
    MOV EAX,dword ptr [EDX + 0x8]       ; 0046d9d8 | DAT_01bc9b00
    MOV dword ptr [ECX + 0x8],EAX       ; 0046d9db | DAT_01bc9bc4
    INC EBX                             ; 0046d9de
        ;   Label: LAB_0046d9de
    MOV ECX,dword ptr [0x01bc9af4]      ; 0046d9df | DAT_01bc9af4
        ;   Label: caseD_3
    INC ESI                             ; 0046d9e5
    ADD EDI,0xc                         ; 0046d9e6
    CMP ESI,ECX                         ; 0046d9e9
    JL 0x0046d977                       ; 0046d9eb
        ;   XREF to: 0046d977 (CONDITIONAL_JUMP)  ; LAB_0046d977
    MOV dword ptr [0x01bc9bb8],EBX      ; 0046d9ed | DAT_01bc9bb8
        ;   Label: LAB_0046d9ed
    MOV ESP,EBP                         ; 0046d9f3
    POP EBP                             ; 0046d9f5
    POP EDI                             ; 0046d9f6
    POP ESI                             ; 0046d9f7
    POP EBX                             ; 0046d9f8
    RET                                 ; 0046d9f9
    IMUL ECX,EBX,0xc                    ; 0046d9fa
        ;   Label: caseD_1
    FLD float ptr [EBP + 0x14]          ; 0046d9fd
    SUB ESP,0x8                         ; 0046da00
    FCHS                                ; 0046da03
    FSTP double ptr [ESP]               ; 0046da05
    PUSH 0x0                            ; 0046da08
    PUSH 0x0                            ; 0046da0a
    PUSH 0x0                            ; 0046da0c
    PUSH 0x0                            ; 0046da0e
    PUSH 0x3ff00000                     ; 0046da10
    PUSH 0x0                            ; 0046da15
    ADD ECX,0x1bc9bbc                   ; 0046da17
    PUSH ECX                            ; 0046da1d
    PUSH EDX                            ; 0046da1e | DAT_01bc9af8
    MOV EAX,dword ptr [ESP + 0x28]      ; 0046da1f
    PUSH EAX                            ; 0046da23
    MOV dword ptr [0x01bc9bb8],EBX      ; 0046da24 | DAT_01bc9bb8
    CALL core_dtri.cpp_clipLineToPlane_FUN_0046d4e0 ; 0046da2a
        ;   XREF to: 0046d4e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0046d4e0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x01bc9bb8]      ; 0046da2f | DAT_01bc9bb8
    ADD ESP,0x2c                        ; 0046da35
    JMP 0x0046d9de                      ; 0046da38
        ;   XREF to: 0046d9de (UNCONDITIONAL_JUMP)  ; LAB_0046d9de
    IMUL ECX,EBX,0xc                    ; 0046da3a
        ;   Label: caseD_2
    ADD ECX,0x1bc9bbc                   ; 0046da3d
    CMP ECX,EDX                         ; 0046da43
    JZ 0x0046da57                       ; 0046da45
        ;   XREF to: 0046da57 (CONDITIONAL_JUMP)  ; LAB_0046da57
    MOV EAX,dword ptr [EDX]             ; 0046da47 | DAT_01bc9af8
    MOV dword ptr [ECX],EAX             ; 0046da49 | DAT_01bc9bbc
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046da4b | DAT_01bc9afc
    MOV dword ptr [ECX + 0x4],EAX       ; 0046da4e | DAT_01bc9bc0
    MOV EAX,dword ptr [EDX + 0x8]       ; 0046da51 | DAT_01bc9b00
    MOV dword ptr [ECX + 0x8],EAX       ; 0046da54 | DAT_01bc9bc4
    INC EBX                             ; 0046da57
        ;   Label: LAB_0046da57
    IMUL ECX,EBX,0xc                    ; 0046da58
    FLD float ptr [EBP + 0x14]          ; 0046da5b
    SUB ESP,0x8                         ; 0046da5e
    FCHS                                ; 0046da61
    FSTP double ptr [ESP]               ; 0046da63
    PUSH 0x0                            ; 0046da66
    PUSH 0x0                            ; 0046da68
    PUSH 0x0                            ; 0046da6a
    PUSH 0x0                            ; 0046da6c
    PUSH 0x3ff00000                     ; 0046da6e
    PUSH 0x0                            ; 0046da73
    ADD ECX,0x1bc9bbc                   ; 0046da75
    PUSH ECX                            ; 0046da7b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0046da7c
    PUSH ECX                            ; 0046da80
    PUSH EDX                            ; 0046da81 | DAT_01bc9af8
    MOV dword ptr [0x01bc9bb8],EBX      ; 0046da82 | DAT_01bc9bb8
    CALL core_dtri.cpp_clipLineToPlane_FUN_0046d4e0 ; 0046da88
        ;   XREF to: 0046d4e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0046d4e0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x01bc9bb8]      ; 0046da8d | DAT_01bc9bb8
    ADD ESP,0x2c                        ; 0046da93
    JMP 0x0046d9de                      ; 0046da96
        ;   XREF to: 0046d9de (UNCONDITIONAL_JUMP)  ; LAB_0046d9de


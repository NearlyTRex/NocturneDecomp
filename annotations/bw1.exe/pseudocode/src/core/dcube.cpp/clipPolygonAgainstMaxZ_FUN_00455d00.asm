; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_clipPolygonAgainstMaxZ_FUN_00455d00(float max_z_plane)
;
; Parameters:
; float            Stack[0x4]:4   max_z_plane
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00455ce8 = 00455db4
;   undefined1* PTR_caseD_3_00455cf0 = 00455d99
;   undefined4 DAT_0152c120
;   undefined4 DAT_0152c1e4
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_00455460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00455d00
        ;   Label: core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00455d00
    PUSH ESI                            ; 00455d01
    PUSH EDI                            ; 00455d02
    PUSH EBP                            ; 00455d03
    MOV EBP,ESP                         ; 00455d04
    SUB ESP,0x8                         ; 00455d06
    AND ESP,0xfffffff8                  ; 00455d09
    MOV EBX,dword ptr [0x0152c1e4]      ; 00455d0c | DAT_0152c1e4
    MOV EDX,dword ptr [EBP + 0x14]      ; 00455d12
    MOV dword ptr [ESP],EDX             ; 00455d15
    MOV EDX,dword ptr [0x0152c120]      ; 00455d18 | DAT_0152c120
    XOR EDI,EDI                         ; 00455d1e
    TEST EDX,EDX                        ; 00455d20
    JLE 0x00455da7                      ; 00455d22
        ;   XREF to: 00455da7 (CONDITIONAL_JUMP)  ; LAB_00455da7
    MOV ESI,0x152c124                   ; 00455d28
    MOV EAX,[0x0152c120]                ; 00455d2d | DAT_0152c120
        ;   Label: LAB_00455d2d
    LEA ECX,[EDI + 0x1]                 ; 00455d32
    CMP ECX,EAX                         ; 00455d35
    JNZ 0x00455d3b                      ; 00455d37
        ;   XREF to: 00455d3b (CONDITIONAL_JUMP)  ; LAB_00455d3b
    XOR ECX,EAX                         ; 00455d39
    IMUL ECX,ECX,0xc                    ; 00455d3b
        ;   Label: LAB_00455d3b
    MOV EAX,0x152c124                   ; 00455d3e
    FLD float ptr [ESI + 0x8]           ; 00455d43
    ADD EAX,ECX                         ; 00455d46
    MOV EDX,ESI                         ; 00455d48
    MOV dword ptr [ESP + 0x4],EAX       ; 00455d4a
    XOR ECX,ECX                         ; 00455d4e
    FCOMP float ptr [ESP]               ; 00455d50
    FNSTSW AX                           ; 00455d53
    SAHF                                ; 00455d55
    JBE 0x00455d5d                      ; 00455d56
        ;   XREF to: 00455d5d (CONDITIONAL_JUMP)  ; LAB_00455d5d
    MOV ECX,0x1                         ; 00455d58
    MOV EAX,dword ptr [ESP + 0x4]       ; 00455d5d
        ;   Label: LAB_00455d5d
    FLD float ptr [EAX + 0x8]           ; 00455d61
    FCOMP float ptr [ESP]               ; 00455d64
    FNSTSW AX                           ; 00455d67
    SAHF                                ; 00455d69
    JBE 0x00455d6f                      ; 00455d6a
        ;   XREF to: 00455d6f (CONDITIONAL_JUMP)  ; LAB_00455d6f
    OR CL,0x2                           ; 00455d6c
    CMP ECX,0x3                         ; 00455d6f
        ;   Label: LAB_00455d6f
    JA 0x00455d99                       ; 00455d72
        ;   XREF to: 00455d99 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x455ce4]  ; 00455d74 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 00455d7b
        ;   Label: caseD_0
    ADD ECX,0x152c1e8                   ; 00455d7e
    CMP ECX,EDX                         ; 00455d84
    JZ 0x00455d98                       ; 00455d86
        ;   XREF to: 00455d98 (CONDITIONAL_JUMP)  ; LAB_00455d98
    MOV EAX,dword ptr [EDX]             ; 00455d88
    MOV dword ptr [ECX],EAX             ; 00455d8a
    MOV EAX,dword ptr [EDX + 0x4]       ; 00455d8c
    MOV dword ptr [ECX + 0x4],EAX       ; 00455d8f
    MOV EAX,dword ptr [EDX + 0x8]       ; 00455d92
    MOV dword ptr [ECX + 0x8],EAX       ; 00455d95
    INC EBX                             ; 00455d98
        ;   Label: LAB_00455d98
    MOV ECX,dword ptr [0x0152c120]      ; 00455d99 | DAT_0152c120
        ;   Label: caseD_3
    INC EDI                             ; 00455d9f
    ADD ESI,0xc                         ; 00455da0
    CMP EDI,ECX                         ; 00455da3
    JL 0x00455d2d                       ; 00455da5
        ;   XREF to: 00455d2d (CONDITIONAL_JUMP)  ; LAB_00455d2d
    MOV dword ptr [0x0152c1e4],EBX      ; 00455da7 | DAT_0152c1e4
        ;   Label: LAB_00455da7
    MOV ESP,EBP                         ; 00455dad
    POP EBP                             ; 00455daf
    POP EDI                             ; 00455db0
    POP ESI                             ; 00455db1
    POP EBX                             ; 00455db2
    RET                                 ; 00455db3
    IMUL ECX,EBX,0xc                    ; 00455db4
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 00455db7
    SUB ESP,0x8                         ; 00455dba
    FSTP double ptr [ESP]               ; 00455dbd
    PUSH 0xbff00000                     ; 00455dc0
    PUSH 0x0                            ; 00455dc5
    PUSH 0x0                            ; 00455dc7
    PUSH 0x0                            ; 00455dc9
    PUSH 0x0                            ; 00455dcb
    PUSH 0x0                            ; 00455dcd
    ADD ECX,0x152c1e8                   ; 00455dcf
    PUSH ECX                            ; 00455dd5
    PUSH EDX                            ; 00455dd6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00455dd7
    PUSH EAX                            ; 00455ddb
    MOV dword ptr [0x0152c1e4],EBX      ; 00455ddc | DAT_0152c1e4
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00455460 ; 00455de2
        ;   XREF to: 00455460 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_00455460(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x0152c1e4]      ; 00455de7 | DAT_0152c1e4
    ADD ESP,0x2c                        ; 00455ded
    JMP 0x00455d98                      ; 00455df0
        ;   XREF to: 00455d98 (UNCONDITIONAL_JUMP)  ; LAB_00455d98
    IMUL ECX,EBX,0xc                    ; 00455df2
        ;   Label: caseD_2
    ADD ECX,0x152c1e8                   ; 00455df5
    CMP ECX,EDX                         ; 00455dfb
    JZ 0x00455e0f                       ; 00455dfd
        ;   XREF to: 00455e0f (CONDITIONAL_JUMP)  ; LAB_00455e0f
    MOV EAX,dword ptr [EDX]             ; 00455dff
    MOV dword ptr [ECX],EAX             ; 00455e01
    MOV EAX,dword ptr [EDX + 0x4]       ; 00455e03
    MOV dword ptr [ECX + 0x4],EAX       ; 00455e06
    MOV EAX,dword ptr [EDX + 0x8]       ; 00455e09
    MOV dword ptr [ECX + 0x8],EAX       ; 00455e0c
    INC EBX                             ; 00455e0f
        ;   Label: LAB_00455e0f
    IMUL ECX,EBX,0xc                    ; 00455e10
    FLD float ptr [ESP]                 ; 00455e13
    SUB ESP,0x8                         ; 00455e16
    FSTP double ptr [ESP]               ; 00455e19
    PUSH 0xbff00000                     ; 00455e1c
    PUSH 0x0                            ; 00455e21
    PUSH 0x0                            ; 00455e23
    PUSH 0x0                            ; 00455e25
    PUSH 0x0                            ; 00455e27
    PUSH 0x0                            ; 00455e29
    ADD ECX,0x152c1e8                   ; 00455e2b
    PUSH ECX                            ; 00455e31
    MOV ECX,dword ptr [ESP + 0x28]      ; 00455e32
    PUSH ECX                            ; 00455e36
    PUSH EDX                            ; 00455e37
    MOV dword ptr [0x0152c1e4],EBX      ; 00455e38 | DAT_0152c1e4
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00455460 ; 00455e3e
        ;   XREF to: 00455460 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_00455460(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x0152c1e4]      ; 00455e43 | DAT_0152c1e4
    ADD ESP,0x2c                        ; 00455e49
    JMP 0x00455d98                      ; 00455e4c
        ;   XREF to: 00455d98 (UNCONDITIONAL_JUMP)  ; LAB_00455d98


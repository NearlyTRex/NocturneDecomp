; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_clipPolygonAgainstMinZ_FUN_00455b90(float min_z_plane)
;
; Parameters:
; float            Stack[0x4]:4   min_z_plane
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00455b84 = 00455c44
;   undefined1* PTR_caseD_3_00455b8c = 00455c29
;   undefined4 DAT_0152c05c
;   undefined4 DAT_0152c120
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_00455460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00455b90
        ;   Label: core_dcube.cpp_clipPolygonAgainstMinZ_FUN_00455b90
    PUSH ESI                            ; 00455b91
    PUSH EDI                            ; 00455b92
    PUSH EBP                            ; 00455b93
    MOV EBP,ESP                         ; 00455b94
    SUB ESP,0x8                         ; 00455b96
    AND ESP,0xfffffff8                  ; 00455b99
    MOV EBX,dword ptr [0x0152c120]      ; 00455b9c | DAT_0152c120
    MOV EDX,dword ptr [EBP + 0x14]      ; 00455ba2
    MOV dword ptr [ESP],EDX             ; 00455ba5
    MOV EDX,dword ptr [0x0152c05c]      ; 00455ba8 | DAT_0152c05c
    XOR EDI,EDI                         ; 00455bae
    TEST EDX,EDX                        ; 00455bb0
    JLE 0x00455c37                      ; 00455bb2
        ;   XREF to: 00455c37 (CONDITIONAL_JUMP)  ; LAB_00455c37
    MOV ESI,0x152c060                   ; 00455bb8
    MOV EAX,[0x0152c05c]                ; 00455bbd | DAT_0152c05c
        ;   Label: LAB_00455bbd
    LEA ECX,[EDI + 0x1]                 ; 00455bc2
    CMP ECX,EAX                         ; 00455bc5
    JNZ 0x00455bcb                      ; 00455bc7
        ;   XREF to: 00455bcb (CONDITIONAL_JUMP)  ; LAB_00455bcb
    XOR ECX,EAX                         ; 00455bc9
    IMUL ECX,ECX,0xc                    ; 00455bcb
        ;   Label: LAB_00455bcb
    MOV EAX,0x152c060                   ; 00455bce
    FLD float ptr [ESI + 0x8]           ; 00455bd3
    ADD EAX,ECX                         ; 00455bd6
    MOV EDX,ESI                         ; 00455bd8
    MOV dword ptr [ESP + 0x4],EAX       ; 00455bda
    XOR ECX,ECX                         ; 00455bde
    FCOMP float ptr [ESP]               ; 00455be0
    FNSTSW AX                           ; 00455be3
    SAHF                                ; 00455be5
    JNC 0x00455bed                      ; 00455be6
        ;   XREF to: 00455bed (CONDITIONAL_JUMP)  ; LAB_00455bed
    MOV ECX,0x1                         ; 00455be8
    MOV EAX,dword ptr [ESP + 0x4]       ; 00455bed
        ;   Label: LAB_00455bed
    FLD float ptr [EAX + 0x8]           ; 00455bf1
    FCOMP float ptr [ESP]               ; 00455bf4
    FNSTSW AX                           ; 00455bf7
    SAHF                                ; 00455bf9
    JNC 0x00455bff                      ; 00455bfa
        ;   XREF to: 00455bff (CONDITIONAL_JUMP)  ; LAB_00455bff
    OR CL,0x2                           ; 00455bfc
    CMP ECX,0x3                         ; 00455bff
        ;   Label: LAB_00455bff
    JA 0x00455c29                       ; 00455c02
        ;   XREF to: 00455c29 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x455b80]  ; 00455c04 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 00455c0b
        ;   Label: caseD_0
    ADD ECX,0x152c124                   ; 00455c0e
    CMP ECX,EDX                         ; 00455c14
    JZ 0x00455c28                       ; 00455c16
        ;   XREF to: 00455c28 (CONDITIONAL_JUMP)  ; LAB_00455c28
    MOV EAX,dword ptr [EDX]             ; 00455c18
    MOV dword ptr [ECX],EAX             ; 00455c1a
    MOV EAX,dword ptr [EDX + 0x4]       ; 00455c1c
    MOV dword ptr [ECX + 0x4],EAX       ; 00455c1f
    MOV EAX,dword ptr [EDX + 0x8]       ; 00455c22
    MOV dword ptr [ECX + 0x8],EAX       ; 00455c25
    INC EBX                             ; 00455c28
        ;   Label: LAB_00455c28
    MOV ECX,dword ptr [0x0152c05c]      ; 00455c29 | DAT_0152c05c
        ;   Label: caseD_3
    INC EDI                             ; 00455c2f
    ADD ESI,0xc                         ; 00455c30
    CMP EDI,ECX                         ; 00455c33
    JL 0x00455bbd                       ; 00455c35
        ;   XREF to: 00455bbd (CONDITIONAL_JUMP)  ; LAB_00455bbd
    MOV dword ptr [0x0152c120],EBX      ; 00455c37 | DAT_0152c120
        ;   Label: LAB_00455c37
    MOV ESP,EBP                         ; 00455c3d
    POP EBP                             ; 00455c3f
    POP EDI                             ; 00455c40
    POP ESI                             ; 00455c41
    POP EBX                             ; 00455c42
    RET                                 ; 00455c43
    IMUL ECX,EBX,0xc                    ; 00455c44
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 00455c47
    SUB ESP,0x8                         ; 00455c4a
    FSTP double ptr [ESP]               ; 00455c4d
    PUSH 0xbff00000                     ; 00455c50
    PUSH 0x0                            ; 00455c55
    PUSH 0x0                            ; 00455c57
    PUSH 0x0                            ; 00455c59
    PUSH 0x0                            ; 00455c5b
    PUSH 0x0                            ; 00455c5d
    ADD ECX,0x152c124                   ; 00455c5f
    PUSH ECX                            ; 00455c65
    PUSH EDX                            ; 00455c66
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00455c67
    PUSH EAX                            ; 00455c6b
    MOV dword ptr [0x0152c120],EBX      ; 00455c6c | DAT_0152c120
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00455460 ; 00455c72
        ;   XREF to: 00455460 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_00455460(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x0152c120]      ; 00455c77 | DAT_0152c120
    ADD ESP,0x2c                        ; 00455c7d
    JMP 0x00455c28                      ; 00455c80
        ;   XREF to: 00455c28 (UNCONDITIONAL_JUMP)  ; LAB_00455c28
    IMUL ECX,EBX,0xc                    ; 00455c82
        ;   Label: caseD_2
    ADD ECX,0x152c124                   ; 00455c85
    CMP ECX,EDX                         ; 00455c8b
    JZ 0x00455c9f                       ; 00455c8d
        ;   XREF to: 00455c9f (CONDITIONAL_JUMP)  ; LAB_00455c9f
    MOV EAX,dword ptr [EDX]             ; 00455c8f
    MOV dword ptr [ECX],EAX             ; 00455c91
    MOV EAX,dword ptr [EDX + 0x4]       ; 00455c93
    MOV dword ptr [ECX + 0x4],EAX       ; 00455c96
    MOV EAX,dword ptr [EDX + 0x8]       ; 00455c99
    MOV dword ptr [ECX + 0x8],EAX       ; 00455c9c
    INC EBX                             ; 00455c9f
        ;   Label: LAB_00455c9f
    IMUL ECX,EBX,0xc                    ; 00455ca0
    FLD float ptr [ESP]                 ; 00455ca3
    SUB ESP,0x8                         ; 00455ca6
    FSTP double ptr [ESP]               ; 00455ca9
    PUSH 0xbff00000                     ; 00455cac
    PUSH 0x0                            ; 00455cb1
    PUSH 0x0                            ; 00455cb3
    PUSH 0x0                            ; 00455cb5
    PUSH 0x0                            ; 00455cb7
    PUSH 0x0                            ; 00455cb9
    ADD ECX,0x152c124                   ; 00455cbb
    PUSH ECX                            ; 00455cc1
    MOV ECX,dword ptr [ESP + 0x28]      ; 00455cc2
    PUSH ECX                            ; 00455cc6
    PUSH EDX                            ; 00455cc7
    MOV dword ptr [0x0152c120],EBX      ; 00455cc8 | DAT_0152c120
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00455460 ; 00455cce
        ;   XREF to: 00455460 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_00455460(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x0152c120]      ; 00455cd3 | DAT_0152c120
    ADD ESP,0x2c                        ; 00455cd9
    JMP 0x00455c28                      ; 00455cdc
        ;   XREF to: 00455c28 (UNCONDITIONAL_JUMP)  ; LAB_00455c28


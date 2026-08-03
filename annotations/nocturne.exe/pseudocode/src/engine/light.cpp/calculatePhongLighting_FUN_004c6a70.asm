; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_light_cpp_calculatePhongLighting_FUN_004c6a70(int world_x,int world_y,int world_z)
;
; Parameters:
; int              Stack[0x4]:4   world_x
; int              Stack[0x8]:4   world_y
; int              Stack[0xc]:4   world_z
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_light.cpp_FUN_004c6d70 at 004c6d80
;   engine_light.cpp_calculateAndStoreVertexLight_FUN_004c6d90 at 004c6da0
;
; Referenced Globals:
;   undefined4 DAT_005bacd0
;   undefined4 DAT_005bacd4
;   undefined4 DAT_005bacd8
;   undefined4 DAT_005bacdc
;   undefined4 DAT_01c039b8
;   undefined4 DAT_01c039bc
;   undefined4 DAT_01c039c0
;   undefined4 DAT_01c039dc
;   undefined4 DAT_01c039e0
;   undefined4 DAT_01c039e4
;   undefined4 DAT_01cc3670
;   undefined4 DAT_01cc3674
;   undefined4 DAT_01cc3678
;   undefined4 DAT_01cc367c
;   undefined4 DAT_01cc3680
;   ... and 1 more
;
; Called Functions:
;   engine_matrix.c_normalizeVector3DFloat_FUN_004cde90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6a70
        ;   Label: engine_light.cpp_calculatePhongLighting_FUN_004c6a70
    PUSH ESI                            ; 004c6a71
    PUSH EDI                            ; 004c6a72
    PUSH EBP                            ; 004c6a73
    SUB ESP,0x14                        ; 004c6a74
    MOV ESI,dword ptr [ESP + 0x28]      ; 004c6a77
    MOV EDI,dword ptr [ESP + 0x30]      ; 004c6a7b
    MOV EDX,dword ptr [0x01c039dc]      ; 004c6a7f | DAT_01c039dc
    MOV EAX,ESI                         ; 004c6a85
    IMUL EDX                            ; 004c6a87
    SHRD EAX,EDX,0x10                   ; 004c6a89
    MOV EDX,dword ptr [0x01c039e0]      ; 004c6a8d | DAT_01c039e0
    MOV ECX,EAX                         ; 004c6a93
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004c6a95
    IMUL EDX                            ; 004c6a99
    SHRD EAX,EDX,0x10                   ; 004c6a9b
    MOV EDX,dword ptr [0x01c039e4]      ; 004c6a9f | DAT_01c039e4
    ADD ECX,EAX                         ; 004c6aa5
    MOV EAX,EDI                         ; 004c6aa7
    IMUL EDX                            ; 004c6aa9
    SHRD EAX,EDX,0x10                   ; 004c6aab
    LEA EBX,[ECX + EAX*0x1]             ; 004c6aaf
    MOV ECX,EBX                         ; 004c6ab2
    NEG EBX                             ; 004c6ab4
    TEST EBX,EBX                        ; 004c6ab6
    JL 0x004c6c52                       ; 004c6ab8
        ;   XREF to: 004c6c52 (CONDITIONAL_JUMP)  ; LAB_004c6c52
    CMP EBX,0xffff                      ; 004c6abe
    JLE 0x004c6acb                      ; 004c6ac4
        ;   XREF to: 004c6acb (CONDITIONAL_JUMP)  ; LAB_004c6acb
    MOV EBX,0xffff                      ; 004c6ac6
    MOV EDX,0xffff                      ; 004c6acb
        ;   Label: LAB_004c6acb
    MOV EBP,dword ptr [0x005bacd0]      ; 004c6ad0 | DAT_005bacd0
    MOV EAX,EBX                         ; 004c6ad6
    SUB EDX,EBP                         ; 004c6ad8
    IMUL EDX                            ; 004c6ada
    SHRD EAX,EDX,0x10                   ; 004c6adc
    MOV EBX,dword ptr [0x005bacd0]      ; 004c6ae0 | DAT_005bacd0
    ADD EBX,EAX                         ; 004c6ae6
    TEST EBX,EBX                        ; 004c6ae8
    JL 0x004c6c59                       ; 004c6aea
        ;   XREF to: 004c6c59 (CONDITIONAL_JUMP)  ; LAB_004c6c59
    CMP EBX,0xffff                      ; 004c6af0
    JLE 0x004c6afd                      ; 004c6af6
        ;   XREF to: 004c6afd (CONDITIONAL_JUMP)  ; LAB_004c6afd
    MOV EBX,0xffff                      ; 004c6af8
    CMP dword ptr [0x005bacd4],0x0      ; 004c6afd | DAT_005bacd4
        ;   Label: LAB_004c6afd
    JZ 0x004c6c60                       ; 004c6b04
        ;   XREF to: 004c6c60 (CONDITIONAL_JUMP)  ; LAB_004c6c60
    MOV EAX,ESI                         ; 004c6b0a
    MOV EDX,ECX                         ; 004c6b0c
    IMUL EDX                            ; 004c6b0e
    SHRD EAX,EDX,0x10                   ; 004c6b10
    LEA EBP,[EAX + EAX*0x1]             ; 004c6b14
    MOV EDX,dword ptr [0x01c039dc]      ; 004c6b17 | DAT_01c039dc
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004c6b1d
    SUB EBP,EDX                         ; 004c6b21
    MOV EDX,ECX                         ; 004c6b23
    IMUL EDX                            ; 004c6b25
    SHRD EAX,EDX,0x10                   ; 004c6b27
    MOV ESI,dword ptr [0x01c039e0]      ; 004c6b2b | DAT_01c039e0
    ADD EAX,EAX                         ; 004c6b31
    SUB EAX,ESI                         ; 004c6b33
    MOV EDX,ECX                         ; 004c6b35
    MOV dword ptr [ESP + 0xc],EAX       ; 004c6b37
    MOV EAX,EDI                         ; 004c6b3b
    IMUL EDX                            ; 004c6b3d
    SHRD EAX,EDX,0x10                   ; 004c6b3f
    MOV EDI,dword ptr [0x01c039e4]      ; 004c6b43 | DAT_01c039e4
    ADD EAX,EAX                         ; 004c6b49
    SUB EAX,EDI                         ; 004c6b4b
    MOV EDX,dword ptr [0x01cc3670]      ; 004c6b4d | DAT_01cc3670
    MOV dword ptr [ESP + 0x10],EAX      ; 004c6b53
    CMP EDX,dword ptr [0x01c039b8]      ; 004c6b57 | DAT_01c039b8
    JZ 0x004c6c71                       ; 004c6b5d
        ;   XREF to: 004c6c71 (CONDITIONAL_JUMP)  ; LAB_004c6c71
    MOV EAX,[0x01c039b8]                ; 004c6b63 | DAT_01c039b8
        ;   Label: LAB_004c6b63
    PUSH 0x1cc3670                      ; 004c6b68 | DAT_01cc3670
    MOV [0x01cc3670],EAX                ; 004c6b6d | DAT_01cc3670
    MOV EAX,[0x01c039bc]                ; 004c6b72 | DAT_01c039bc
    LEA ESI,[ESP + 0x4]                 ; 004c6b77
    MOV [0x01cc3674],EAX                ; 004c6b7b | DAT_01cc3674
    MOV EAX,[0x01c039c0]                ; 004c6b80 | DAT_01c039c0
    MOV EDI,0x1cc367c                   ; 004c6b85
    MOV [0x01cc3678],EAX                ; 004c6b8a | DAT_01cc3678
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_004cde90 ; 004c6b8f
        ;   XREF to: 004cde90 (UNCONDITIONAL_CALL)  ; CVector3i * engine_matrix.c_normalizeVector3DFloat_FUN_004cde90(CVector3i * input_vector, CVector3i * output_vector)
    LEA ESI,[ESP + 0x4]                 ; 004c6b94
    ADD ESP,0x4                         ; 004c6b98
    MOVSD ES:EDI,ESI                    ; 004c6b9b | DAT_01cc367c
    MOVSD ES:EDI,ESI                    ; 004c6b9c | DAT_01cc3680
    MOVSD ES:EDI,ESI                    ; 004c6b9d | DAT_01cc3684
    MOV EDX,dword ptr [0x01cc367c]      ; 004c6b9e | DAT_01cc367c
        ;   Label: LAB_004c6b9e
    MOV EAX,EBP                         ; 004c6ba4
    IMUL EDX                            ; 004c6ba6
    SHRD EAX,EDX,0x10                   ; 004c6ba8
    MOV EDX,dword ptr [0x01cc3680]      ; 004c6bac | DAT_01cc3680
    MOV ECX,EAX                         ; 004c6bb2
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c6bb4
    IMUL EDX                            ; 004c6bb8
    SHRD EAX,EDX,0x10                   ; 004c6bba
    MOV EDX,dword ptr [0x01cc3684]      ; 004c6bbe | DAT_01cc3684
    ADD ECX,EAX                         ; 004c6bc4
    MOV EAX,dword ptr [ESP + 0x10]      ; 004c6bc6
    IMUL EDX                            ; 004c6bca
    SHRD EAX,EDX,0x10                   ; 004c6bcc
    ADD ECX,EAX                         ; 004c6bd0
    NEG ECX                             ; 004c6bd2
    TEST ECX,ECX                        ; 004c6bd4
    JL 0x004c6c9a                       ; 004c6bd6
        ;   XREF to: 004c6c9a (CONDITIONAL_JUMP)  ; LAB_004c6c9a
    CMP ECX,0xffff                      ; 004c6bdc
    JLE 0x004c6c9e                      ; 004c6be2
        ;   XREF to: 004c6c9e (CONDITIONAL_JUMP)  ; LAB_004c6c9e
    MOV ECX,0xffff                      ; 004c6be8
    MOV EAX,ECX                         ; 004c6bed
        ;   Label: LAB_004c6bed
    MOV EDX,ECX                         ; 004c6bef
    IMUL EDX                            ; 004c6bf1
    SHRD EAX,EDX,0x10                   ; 004c6bf3
    MOV EDX,EAX                         ; 004c6bf7
    IMUL EDX                            ; 004c6bf9
    SHRD EAX,EDX,0x10                   ; 004c6bfb
    MOV EDX,EAX                         ; 004c6bff
    IMUL EDX                            ; 004c6c01
    SHRD EAX,EDX,0x10                   ; 004c6c03
    MOV EDX,EAX                         ; 004c6c07
    IMUL EDX                            ; 004c6c09
    SHRD EAX,EDX,0x10                   ; 004c6c0b
    MOV EDX,EAX                         ; 004c6c0f
    IMUL EDX                            ; 004c6c11
    SHRD EAX,EDX,0x10                   ; 004c6c13
    MOV ECX,EAX                         ; 004c6c17
    MOV EAX,[0x005bacd8]                ; 004c6c19 | DAT_005bacd8
        ;   Label: LAB_004c6c19
    MOV EDX,EBX                         ; 004c6c1e
    IMUL EDX                            ; 004c6c20
    SHRD EAX,EDX,0x10                   ; 004c6c22
    MOV EBX,EAX                         ; 004c6c26
    MOV EDX,ECX                         ; 004c6c28
    MOV EAX,[0x005bacdc]                ; 004c6c2a | DAT_005bacdc
    IMUL EDX                            ; 004c6c2f
    SHRD EAX,EDX,0x10                   ; 004c6c31
    LEA EDX,[EBX + EAX*0x1]             ; 004c6c35
    MOV EAX,EDX                         ; 004c6c38
        ;   Label: LAB_004c6c38
    SAR EDX,0x1f                        ; 004c6c3a
    SHL EDX,0x4                         ; 004c6c3d
    SBB EAX,EDX                         ; 004c6c40
    SAR EAX,0x4                         ; 004c6c42
    ADD EAX,0x100                       ; 004c6c45
    ADD ESP,0x14                        ; 004c6c4a
    POP EBP                             ; 004c6c4d
    POP EDI                             ; 004c6c4e
    POP ESI                             ; 004c6c4f
    POP EBX                             ; 004c6c50
    RET                                 ; 004c6c51
    XOR EBX,EBX                         ; 004c6c52
        ;   Label: LAB_004c6c52
    JMP 0x004c6acb                      ; 004c6c54
        ;   XREF to: 004c6acb (UNCONDITIONAL_JUMP)  ; LAB_004c6acb
    XOR EBX,EBX                         ; 004c6c59
        ;   Label: LAB_004c6c59
    JMP 0x004c6afd                      ; 004c6c5b
        ;   XREF to: 004c6afd (UNCONDITIONAL_JUMP)  ; LAB_004c6afd
    MOV EAX,[0x005bacd8]                ; 004c6c60 | DAT_005bacd8
        ;   Label: LAB_004c6c60
    MOV EDX,EBX                         ; 004c6c65
    IMUL EDX                            ; 004c6c67
    SHRD EAX,EDX,0x10                   ; 004c6c69
    MOV EDX,EAX                         ; 004c6c6d
    JMP 0x004c6c38                      ; 004c6c6f
        ;   XREF to: 004c6c38 (UNCONDITIONAL_JUMP)  ; LAB_004c6c38
    MOV ECX,dword ptr [0x01cc3674]      ; 004c6c71 | DAT_01cc3674
        ;   Label: LAB_004c6c71
    CMP ECX,dword ptr [0x01c039bc]      ; 004c6c77 | DAT_01c039bc
    JNZ 0x004c6b63                      ; 004c6c7d
        ;   XREF to: 004c6b63 (CONDITIONAL_JUMP)  ; LAB_004c6b63
    MOV ESI,dword ptr [0x01cc3678]      ; 004c6c83 | DAT_01cc3678
    CMP ESI,dword ptr [0x01c039c0]      ; 004c6c89 | DAT_01c039c0
    JNZ 0x004c6b63                      ; 004c6c8f
        ;   XREF to: 004c6b63 (CONDITIONAL_JUMP)  ; LAB_004c6b63
    JMP 0x004c6b9e                      ; 004c6c95
        ;   XREF to: 004c6b9e (UNCONDITIONAL_JUMP)  ; LAB_004c6b9e
    MOV EDX,EBX                         ; 004c6c9a
        ;   Label: LAB_004c6c9a
    JMP 0x004c6c38                      ; 004c6c9c
        ;   XREF to: 004c6c38 (UNCONDITIONAL_JUMP)  ; LAB_004c6c38
    CMP ECX,0xbb80                      ; 004c6c9e
        ;   Label: LAB_004c6c9e
    JG 0x004c6bed                       ; 004c6ca4
        ;   XREF to: 004c6bed (CONDITIONAL_JUMP)  ; LAB_004c6bed
    XOR ECX,ECX                         ; 004c6caa
    JMP 0x004c6c19                      ; 004c6cac
        ;   XREF to: 004c6c19 (UNCONDITIONAL_JUMP)  ; LAB_004c6c19


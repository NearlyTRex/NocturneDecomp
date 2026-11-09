; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_buildRotationMatrix_FUN_004e8a10(int pitch,int yaw,int roll)
;
; Parameters:
; int              Stack[0x4]:4   pitch
; int              Stack[0x8]:4   yaw
; int              Stack[0xc]:4   roll
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_006141e4
;   undefined4 DAT_01c35e38
;   undefined4 DAT_01c35e3c
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;   undefined4 DAT_01c38b9c
;   undefined4 DAT_01c38ba0
;   undefined4 DAT_01c38ba4
;   undefined4 DAT_01c38ba8
;   undefined4 DAT_01c38bac
;   undefined4 DAT_01c38bb0
;   ... and 4 more
;
; Called Functions:
;   engine_matrix.c_FUN_004e86b0
;   engine_matrix.c_FUN_004e86f0
;   engine_matrix.c_invertTransformMatrix_FUN_004e8730
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e8a10
        ;   Label: engine_matrix.c_buildRotationMatrix_FUN_004e8a10
    PUSH ESI                            ; 004e8a11
    PUSH EBP                            ; 004e8a12
    SUB ESP,0x8                         ; 004e8a13
    MOV EBX,dword ptr [ESP + 0x18]      ; 004e8a16
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004e8a1a
    PUSH EDI                            ; 004e8a1e
    PUSH EBX                            ; 004e8a1f
    CALL engine_matrix.c_FUN_004e86b0   ; 004e8a20
        ;   XREF to: 004e86b0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_FUN_004e86b0(int angle)
    ADD ESP,0x4                         ; 004e8a25
    PUSH EBX                            ; 004e8a28
    MOV EBP,EAX                         ; 004e8a29
    CALL engine_matrix.c_FUN_004e86f0   ; 004e8a2b
        ;   XREF to: 004e86f0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_FUN_004e86f0(int angle)
    MOV dword ptr [ESP + 0xc],EAX       ; 004e8a30
    ADD ESP,0x4                         ; 004e8a34
    PUSH ESI                            ; 004e8a37
    CALL engine_matrix.c_FUN_004e86b0   ; 004e8a38
        ;   XREF to: 004e86b0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_FUN_004e86b0(int angle)
    ADD ESP,0x4                         ; 004e8a3d
    PUSH ESI                            ; 004e8a40
    MOV EBX,EAX                         ; 004e8a41
    CALL engine_matrix.c_FUN_004e86f0   ; 004e8a43
        ;   XREF to: 004e86f0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_FUN_004e86f0(int angle)
    ADD ESP,0x4                         ; 004e8a48
    MOV EDX,dword ptr [ESP + 0x24]      ; 004e8a4b
    PUSH EDX                            ; 004e8a4f
    MOV ESI,EAX                         ; 004e8a50
    CALL engine_matrix.c_FUN_004e86b0   ; 004e8a52
        ;   XREF to: 004e86b0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_FUN_004e86b0(int angle)
    ADD ESP,0x4                         ; 004e8a57
    MOV ECX,dword ptr [ESP + 0x24]      ; 004e8a5a
    PUSH ECX                            ; 004e8a5e
    MOV EDI,EAX                         ; 004e8a5f
    CALL engine_matrix.c_FUN_004e86f0   ; 004e8a61
        ;   XREF to: 004e86f0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_FUN_004e86f0(int angle)
    MOV ECX,EAX                         ; 004e8a66
    ADD ESP,0x4                         ; 004e8a68
    MOV EAX,ESI                         ; 004e8a6b
    MOV EDX,ECX                         ; 004e8a6d
    IMUL EDX                            ; 004e8a6f
    SHRD EAX,EDX,0x10                   ; 004e8a71
    MOV dword ptr [ESP + 0x4],EAX       ; 004e8a75
    MOV EDX,EBP                         ; 004e8a79
    MOV EAX,EBX                         ; 004e8a7b
    IMUL EDX                            ; 004e8a7d
    SHRD EAX,EDX,0x10                   ; 004e8a7f
    MOV EDX,EDI                         ; 004e8a83
    IMUL EDX                            ; 004e8a85
    SHRD EAX,EDX,0x10                   ; 004e8a87
    MOV EDX,dword ptr [ESP + 0x4]       ; 004e8a8b
    ADD EDX,EAX                         ; 004e8a8f
    MOV dword ptr [0x01c38b9c],EDX      ; 004e8a91 | DAT_01c38b9c
    MOV EDX,ECX                         ; 004e8a97
    MOV EAX,EBX                         ; 004e8a99
    NEG EDX                             ; 004e8a9b
    IMUL EDX                            ; 004e8a9d
    SHRD EAX,EDX,0x10                   ; 004e8a9f
    MOV dword ptr [ESP + 0x4],EAX       ; 004e8aa3
    MOV EDX,EBP                         ; 004e8aa7
    MOV EAX,ESI                         ; 004e8aa9
    IMUL EDX                            ; 004e8aab
    SHRD EAX,EDX,0x10                   ; 004e8aad
    MOV EDX,EDI                         ; 004e8ab1
    IMUL EDX                            ; 004e8ab3
    SHRD EAX,EDX,0x10                   ; 004e8ab5
    MOV EDX,dword ptr [ESP + 0x4]       ; 004e8ab9
    ADD EDX,EAX                         ; 004e8abd
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e8abf
    MOV dword ptr [0x01c38ba0],EDX      ; 004e8ac3 | DAT_01c38ba0
    MOV EDX,EDI                         ; 004e8ac9
    IMUL EDX                            ; 004e8acb
    SHRD EAX,EDX,0x10                   ; 004e8acd
    MOV [0x01c38ba4],EAX                ; 004e8ad1 | DAT_01c38ba4
    MOV EDX,EBX                         ; 004e8ad6
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e8ad8
    IMUL EDX                            ; 004e8adc
    SHRD EAX,EDX,0x10                   ; 004e8ade
    MOV [0x01c38ba8],EAX                ; 004e8ae2 | DAT_01c38ba8
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e8ae7
    MOV EDX,ESI                         ; 004e8aeb
    IMUL EDX                            ; 004e8aed
    SHRD EAX,EDX,0x10                   ; 004e8aef
    MOV [0x01c38bac],EAX                ; 004e8af3 | DAT_01c38bac
    MOV dword ptr [0x01c38bb0],EBP      ; 004e8af8 | DAT_01c38bb0
    MOV EAX,EBP                         ; 004e8afe
    MOV EDX,EDI                         ; 004e8b00
    NEG EAX                             ; 004e8b02
    NEG EDX                             ; 004e8b04
    MOV [0x01c38bb0],EAX                ; 004e8b06 | DAT_01c38bb0
    MOV EAX,ESI                         ; 004e8b0b
    IMUL EDX                            ; 004e8b0d
    SHRD EAX,EDX,0x10                   ; 004e8b0f
    MOV dword ptr [ESP + 0x4],EAX       ; 004e8b13
    MOV EDX,EBP                         ; 004e8b17
    MOV EAX,EBX                         ; 004e8b19
    IMUL EDX                            ; 004e8b1b
    SHRD EAX,EDX,0x10                   ; 004e8b1d
    MOV EDX,ECX                         ; 004e8b21
    IMUL EDX                            ; 004e8b23
    SHRD EAX,EDX,0x10                   ; 004e8b25
    MOV EDX,dword ptr [ESP + 0x4]       ; 004e8b29
    ADD EDX,EAX                         ; 004e8b2d
    MOV dword ptr [0x01c38bb4],EDX      ; 004e8b2f | DAT_01c38bb4
    MOV EAX,EDI                         ; 004e8b35
    MOV EDX,EBX                         ; 004e8b37
    IMUL EDX                            ; 004e8b39
    SHRD EAX,EDX,0x10                   ; 004e8b3b
    MOV EBX,EAX                         ; 004e8b3f
    MOV EDX,EBP                         ; 004e8b41
    MOV EAX,ESI                         ; 004e8b43
    IMUL EDX                            ; 004e8b45
    SHRD EAX,EDX,0x10                   ; 004e8b47
    MOV EDX,ECX                         ; 004e8b4b
    IMUL EDX                            ; 004e8b4d
    SHRD EAX,EDX,0x10                   ; 004e8b4f
    MOV EDX,ECX                         ; 004e8b53
    ADD EBX,EAX                         ; 004e8b55
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e8b57
    MOV dword ptr [0x01c38bb8],EBX      ; 004e8b5b | DAT_01c38bb8
    IMUL EDX                            ; 004e8b61
    SHRD EAX,EDX,0x10                   ; 004e8b63
    MOV [0x01c38bbc],EAX                ; 004e8b67 | DAT_01c38bbc
    MOV EAX,[0x006141bc]                ; 004e8b6c | DAT_006141bc
    CMP EAX,0xc8                        ; 004e8b71
    JC 0x004e8d16                       ; 004e8b76
        ;   XREF to: 004e8d16 (CONDITIONAL_JUMP)  ; LAB_004e8d16
    JA 0x004e8d0f                       ; 004e8b7c
        ;   XREF to: 004e8d0f (CONDITIONAL_JUMP)  ; LAB_004e8d0f
    MOV dword ptr [0x01d05010],0x15555  ; 004e8b82 | DAT_01d05010
    MOV EAX,0x10000                     ; 004e8b8c
        ;   Label: LAB_004e8b8c
    MOV EBX,dword ptr [0x01c35e38]      ; 004e8b91 | DAT_01c35e38
    MOV EDX,dword ptr [0x01c35e3c]      ; 004e8b97 | DAT_01c35e3c
    IMUL EDX                            ; 004e8b9d
    IDIV EBX                            ; 004e8b9f
    MOV ECX,EAX                         ; 004e8ba1
    MOV EDX,dword ptr [0x006141b8]      ; 004e8ba3 | DAT_006141b8
    NEG ECX                             ; 004e8ba9
    IMUL EDX,ECX                        ; 004e8bab
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e8bae
    SUB EAX,EDX                         ; 004e8bb5
    MOV ECX,dword ptr [0x006141bc]      ; 004e8bb7 | DAT_006141bc
    MOV EDX,EAX                         ; 004e8bbd
    SHL ECX,0x2                         ; 004e8bbf
    SAR EDX,0x1f                        ; 004e8bc2
    IDIV ECX                            ; 004e8bc5
    MOV EDX,dword ptr [0x01c38b9c]      ; 004e8bc7 | DAT_01c38b9c
    MOV ECX,EAX                         ; 004e8bcd
    IMUL EDX                            ; 004e8bcf
    SHRD EAX,EDX,0x10                   ; 004e8bd1
    MOV EDX,dword ptr [0x01c38ba8]      ; 004e8bd5 | DAT_01c38ba8
    MOV [0x01c38b9c],EAX                ; 004e8bdb | DAT_01c38b9c
    MOV EAX,ECX                         ; 004e8be0
    IMUL EDX                            ; 004e8be2
    SHRD EAX,EDX,0x10                   ; 004e8be4
    MOV EDX,dword ptr [0x01c38bb4]      ; 004e8be8 | DAT_01c38bb4
    MOV [0x01c38ba8],EAX                ; 004e8bee | DAT_01c38ba8
    MOV EAX,ECX                         ; 004e8bf3
    IMUL EDX                            ; 004e8bf5
    SHRD EAX,EDX,0x10                   ; 004e8bf7
    MOV ESI,dword ptr [0x01c35e48]      ; 004e8bfb | DAT_01c35e48
    MOV [0x01c38bb4],EAX                ; 004e8c01 | DAT_01c38bb4
    MOV EAX,[0x01c35e50]                ; 004e8c06 | DAT_01c35e50
    SUB EAX,ESI                         ; 004e8c0b
    LEA EDX,[EAX*0x4 + 0x0]             ; 004e8c0d
    ADD EDX,EAX                         ; 004e8c14
    SHL EDX,0x7                         ; 004e8c16
    MOV EDI,dword ptr [0x006141b8]      ; 004e8c19 | DAT_006141b8
    MOV EAX,EDX                         ; 004e8c1f
    SAR EDX,0x1f                        ; 004e8c21
    IDIV EDI                            ; 004e8c24
    MOV ECX,dword ptr [0x01c35e54]      ; 004e8c26 | DAT_01c35e54
    SUB ECX,dword ptr [0x01c35e4c]      ; 004e8c2c | DAT_01c35e4c
    SHL ECX,0x5                         ; 004e8c32
    MOV EDX,ECX                         ; 004e8c35
    LEA EBX,[EAX*0x4 + 0x0]             ; 004e8c37
    SHL EDX,0x4                         ; 004e8c3e
    SUB EBX,EAX                         ; 004e8c41
    SUB EDX,ECX                         ; 004e8c43
    MOV ECX,dword ptr [0x006141bc]      ; 004e8c45 | DAT_006141bc
    MOV EAX,EDX                         ; 004e8c4b
    SAR EDX,0x1f                        ; 004e8c4d
    IDIV ECX                            ; 004e8c50
    SHL EBX,0x10                        ; 004e8c52
    MOV ECX,EAX                         ; 004e8c55
    MOV EDX,EBX                         ; 004e8c57
    MOV EAX,EBX                         ; 004e8c59
    SAR EDX,0x1f                        ; 004e8c5b
    IDIV ECX                            ; 004e8c5e
    MOV EDX,EAX                         ; 004e8c60
    SAR EDX,0x1f                        ; 004e8c62
    SHL EDX,0x2                         ; 004e8c65
    SBB EAX,EDX                         ; 004e8c68
    SAR EAX,0x2                         ; 004e8c6a
    MOV EBX,dword ptr [0x006141e4]      ; 004e8c6d | DAT_006141e4
    MOV ECX,EAX                         ; 004e8c73
    MOV EAX,[0x01c38b9c]                ; 004e8c75 | DAT_01c38b9c
    MOV EDX,ECX                         ; 004e8c7a
    IMUL EDX                            ; 004e8c7c
    IDIV EBX                            ; 004e8c7e
    MOV EBX,dword ptr [0x006141e4]      ; 004e8c80 | DAT_006141e4
    MOV [0x01c38b9c],EAX                ; 004e8c86 | DAT_01c38b9c
    MOV EDX,ECX                         ; 004e8c8b
    MOV EAX,[0x01c38ba0]                ; 004e8c8d | DAT_01c38ba0
    IMUL EDX                            ; 004e8c92
    IDIV EBX                            ; 004e8c94
    MOV EBX,dword ptr [0x006141e4]      ; 004e8c96 | DAT_006141e4
    MOV [0x01c38ba0],EAX                ; 004e8c9c | DAT_01c38ba0
    MOV EDX,ECX                         ; 004e8ca1
    MOV EAX,[0x01c38ba8]                ; 004e8ca3 | DAT_01c38ba8
    IMUL EDX                            ; 004e8ca8
    IDIV EBX                            ; 004e8caa
    MOV EBX,dword ptr [0x006141e4]      ; 004e8cac | DAT_006141e4
    MOV [0x01c38ba8],EAX                ; 004e8cb2 | DAT_01c38ba8
    MOV EDX,ECX                         ; 004e8cb7
    MOV EAX,[0x01c38bac]                ; 004e8cb9 | DAT_01c38bac
    IMUL EDX                            ; 004e8cbe
    IDIV EBX                            ; 004e8cc0
    MOV [0x01c38bac],EAX                ; 004e8cc2 | DAT_01c38bac
    POP EDI                             ; 004e8cc7
    MOV EBX,dword ptr [0x006141e4]      ; 004e8cc8 | DAT_006141e4
    MOV EAX,[0x01c38bb4]                ; 004e8cce | DAT_01c38bb4
    MOV EDX,ECX                         ; 004e8cd3
    IMUL EDX                            ; 004e8cd5
    IDIV EBX                            ; 004e8cd7
    MOV EBX,dword ptr [0x006141e4]      ; 004e8cd9 | DAT_006141e4
    MOV [0x01c38bb4],EAX                ; 004e8cdf | DAT_01c38bb4
    MOV EDX,ECX                         ; 004e8ce4
    MOV EAX,[0x01c38bb8]                ; 004e8ce6 | DAT_01c38bb8
    IMUL EDX                            ; 004e8ceb
    IDIV EBX                            ; 004e8ced
    MOV [0x01c38bb8],EAX                ; 004e8cef | DAT_01c38bb8
    CALL engine_matrix.c_invertTransformMatrix_FUN_004e8730 ; 004e8cf4
        ;   XREF to: 004e8730 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_invertTransformMatrix_FUN_004e8730()
    ADD ESP,0x8                         ; 004e8cf9
    POP EBP                             ; 004e8cfc
    POP ESI                             ; 004e8cfd
    POP EBX                             ; 004e8cfe
    RET                                 ; 004e8cff
    MOV dword ptr [0x01d05010],0xaaaa   ; 004e8d00 | DAT_01d05010
        ;   Label: LAB_004e8d00
    JMP 0x004e8b8c                      ; 004e8d0a
        ;   XREF to: 004e8b8c (UNCONDITIONAL_JUMP)  ; LAB_004e8b8c
    CMP EAX,0x190                       ; 004e8d0f
        ;   Label: LAB_004e8d0f
    JZ 0x004e8d00                       ; 004e8d14
        ;   XREF to: 004e8d00 (CONDITIONAL_JUMP)  ; LAB_004e8d00
    MOV dword ptr [0x01d05010],0x10000  ; 004e8d16 | DAT_01d05010
        ;   Label: LAB_004e8d16
    JMP 0x004e8b8c                      ; 004e8d20
        ;   XREF to: 004e8b8c (UNCONDITIONAL_JUMP)  ; LAB_004e8b8c


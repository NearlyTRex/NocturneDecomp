; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_addLightmapToCorona_FUN_00450e30(CDemonCamera *this_ptr,CDemonLight *light_source)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   light_source
; Local Variables:
; char[320] *      Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; CDemonLight *    Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderScene_FUN_0056c1a0 at 0056c26e
;
; Referenced Globals:
;   char[241][320] g_CoronaBlurOutputBuffer
;   undefined4 g_CoronaBlurOutputBuffer[1][0]
;   undefined4 g_CoronaBlurOutputBuffer[1][1]
;   undefined4 g_CoronaBlurOutputBuffer[2][0]
;   char* g_CoronaLightingTextureData
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00450e30
        ;   Label: core_dcamera.cpp_CDemonCamera_addLightmapToCorona_FUN_00450e30
    PUSH ESI                            ; 00450e31
    PUSH EDI                            ; 00450e32
    PUSH EBP                            ; 00450e33
    MOV EBP,ESP                         ; 00450e34
    SUB ESP,0x24                        ; 00450e36
    MOV EAX,dword ptr [EBP + 0x14]      ; 00450e39
    XOR EDX,EDX                         ; 00450e3c
    MOV ECX,dword ptr [EAX + 0x154]     ; 00450e3e
    MOV dword ptr [EBP + -0xc],EDX      ; 00450e44
    TEST ECX,ECX                        ; 00450e47
    JLE 0x00450eaf                      ; 00450e49
        ;   XREF to: 00450eaf (CONDITIONAL_JUMP)  ; LAB_00450eaf
    MOV EBX,0xba8c78                    ; 00450e4b | g_CoronaBlurOutputBuffer
    MOV EAX,dword ptr [EBP + 0x18]      ; 00450e50
    MOV dword ptr [EBP + -0x8],EDX      ; 00450e53
    MOV dword ptr [EBP + -0x10],EBX     ; 00450e56 | g_CoronaBlurOutputBuffer
    MOV dword ptr [EBP + -0x4],EAX      ; 00450e59
    MOV EDX,dword ptr [EBP + -0x4]      ; 00450e5c
        ;   Label: LAB_00450e5c
    MOV EAX,dword ptr [EBP + -0x4]      ; 00450e5f
    MOV EDI,dword ptr [EDX + 0x14c8]    ; 00450e62
    MOV EAX,dword ptr [EAX + 0x1888]    ; 00450e68
    SUB EAX,EDI                         ; 00450e6e
    INC EAX                             ; 00450e70
    MOV dword ptr [EBP + -0x14],EAX     ; 00450e71
    CMP dword ptr [EBP + -0x14],0x0     ; 00450e74
    JG 0x00450eb6                       ; 00450e78
        ;   XREF to: 00450eb6 (CONDITIONAL_JUMP)  ; LAB_00450eb6
    MOV EBX,dword ptr [EBP + -0x4]      ; 00450e7a
        ;   Label: LAB_00450e7a
    MOV ESI,dword ptr [EBP + -0x10]     ; 00450e7d
    MOV EDI,dword ptr [EBP + -0x8]      ; 00450e80
    MOV EAX,dword ptr [EBP + -0xc]      ; 00450e83
    MOV EDX,dword ptr [EBP + 0x14]      ; 00450e86
    ADD EBX,0x4                         ; 00450e89
    ADD ESI,0x140                       ; 00450e8c
    ADD EDI,0x500                       ; 00450e92
    INC EAX                             ; 00450e98
    MOV ECX,dword ptr [EDX + 0x154]     ; 00450e99
    MOV dword ptr [EBP + -0x4],EBX      ; 00450e9f
    MOV dword ptr [EBP + -0x10],ESI     ; 00450ea2 | g_CoronaBlurOutputBuffer[1][0] | g_CoronaBlurOutputBuffer[2][0]
    MOV dword ptr [EBP + -0x8],EDI      ; 00450ea5
    MOV dword ptr [EBP + -0xc],EAX      ; 00450ea8
    CMP EAX,ECX                         ; 00450eab
    JL 0x00450e5c                       ; 00450ead
        ;   XREF to: 00450e5c (CONDITIONAL_JUMP)  ; LAB_00450e5c
    MOV ESP,EBP                         ; 00450eaf
        ;   Label: LAB_00450eaf
    POP EBP                             ; 00450eb1
    POP EDI                             ; 00450eb2
    POP ESI                             ; 00450eb3
    POP EBX                             ; 00450eb4
    RET                                 ; 00450eb5
    MOV EAX,dword ptr [EBP + 0x18]      ; 00450eb6
        ;   Label: LAB_00450eb6
    MOV ECX,dword ptr [EBP + -0x8]      ; 00450eb9
    MOV EAX,dword ptr [EAX + 0x1c48]    ; 00450ebc
    LEA EDX,[EDI*0x4 + 0x0]             ; 00450ec2
    ADD EAX,ECX                         ; 00450ec9
    ADD EAX,EDX                         ; 00450ecb
    MOV dword ptr [EBP + -0x24],EAX     ; 00450ecd
    MOV EAX,dword ptr [EBP + -0x4]      ; 00450ed0
    MOV EDX,dword ptr [EBP + 0x18]      ; 00450ed3
    MOV EAX,dword ptr [EAX + 0x14c8]    ; 00450ed6
    MOV EDX,dword ptr [EDX + 0x1c4c]    ; 00450edc
    SHL EAX,0x2                         ; 00450ee2
    ADD EDX,ECX                         ; 00450ee5
    ADD EDX,EAX                         ; 00450ee7
    MOV dword ptr [EBP + -0x20],EDX     ; 00450ee9
    MOV EDX,dword ptr [EBP + -0x4]      ; 00450eec
    MOV EAX,dword ptr [EBP + 0x18]      ; 00450eef
    MOV EDX,dword ptr [EDX + 0x14c8]    ; 00450ef2
    MOV EAX,dword ptr [EAX + 0x1c50]    ; 00450ef8
    SHL EDX,0x2                         ; 00450efe
    ADD EAX,ECX                         ; 00450f01
    ADD EAX,EDX                         ; 00450f03
    MOV dword ptr [EBP + -0x1c],EAX     ; 00450f05
    MOV EDX,dword ptr [EBP + -0x4]      ; 00450f08
    MOV EAX,dword ptr [EBP + -0x10]     ; 00450f0b
    MOV EDI,dword ptr [EDX + 0x14c8]    ; 00450f0e
    ADD EAX,EDI                         ; 00450f14
    MOV dword ptr [EBP + -0x18],EAX     ; 00450f16
    MOV EAX,dword ptr [EBP + 0x18]      ; 00450f19
    MOV EAX,dword ptr [EAX + 0x1c54]    ; 00450f1c
    MOV [0x015c2eac],EAX                ; 00450f22 | g_CoronaLightingTextureData
    MOV ECX,dword ptr [EBP + 0xffffffec] ; 00450f27
    MOV EBX,dword ptr [EBP + 0xffffffdc] ; 00450f2d
    MOV EAX,dword ptr [EBX]             ; 00450f33
        ;   Label: LAB_00450f33
    ADD EBX,0x20                        ; 00450f35
    SUB ECX,0x8                         ; 00450f38
    JG 0x00450f33                       ; 00450f3b
        ;   XREF to: 00450f33 (CONDITIONAL_JUMP)  ; LAB_00450f33
    MOV ECX,dword ptr [EBP + 0xffffffec] ; 00450f3d
    MOV EBX,dword ptr [EBP + 0xffffffe0] ; 00450f43
    MOV EAX,dword ptr [EBX]             ; 00450f49
        ;   Label: LAB_00450f49
    ADD EBX,0x20                        ; 00450f4b
    SUB ECX,0x8                         ; 00450f4e
    JG 0x00450f49                       ; 00450f51
        ;   XREF to: 00450f49 (CONDITIONAL_JUMP)  ; LAB_00450f49
    MOV ECX,dword ptr [EBP + 0xffffffec] ; 00450f53
    MOV EBX,dword ptr [EBP + 0xffffffe4] ; 00450f59
    MOV EAX,dword ptr [EBX]             ; 00450f5f
        ;   Label: LAB_00450f5f
    ADD EBX,0x20                        ; 00450f61
    SUB ECX,0x8                         ; 00450f64
    JG 0x00450f5f                       ; 00450f67
        ;   XREF to: 00450f5f (CONDITIONAL_JUMP)  ; LAB_00450f5f
    MOV ECX,dword ptr [EBP + 0xffffffec] ; 00450f69
    MOV EBX,dword ptr [EBP + 0xffffffdc] ; 00450f6f
    MOV ESI,dword ptr [EBP + 0xffffffe0] ; 00450f75
    MOV EDX,dword ptr [EBP + 0xffffffe4] ; 00450f7b
    MOV EDI,dword ptr [EBP + 0xffffffe8] ; 00450f81
    PUSH EBP                            ; 00450f87
    MOV EAX,dword ptr [EBX]             ; 00450f88
        ;   Label: LAB_00450f88
    CMP EAX,0x0                         ; 00450f8a
    JBE 0x00450fa6                      ; 00450f8d
        ;   XREF to: 00450fa6 (CONDITIONAL_JUMP)  ; LAB_00450fa6
    MOV EBP,dword ptr [ESI]             ; 00450f8f
    MOVZX EAX,word ptr [EBP]            ; 00450f91
    CMP EAX,dword ptr [EBX]             ; 00450f95
    JC 0x00450fa6                       ; 00450f97
        ;   XREF to: 00450fa6 (CONDITIONAL_JUMP)  ; LAB_00450fa6
    MOV EBP,dword ptr [0x015c2eac]      ; 00450f99 | g_CoronaLightingTextureData
    ADD EBP,dword ptr [EDX]             ; 00450f9f
    MOV AL,byte ptr [EBP]               ; 00450fa1
    ADD byte ptr [EDI],AL               ; 00450fa4 | g_CoronaBlurOutputBuffer[1][0] | g_CoronaBlurOutputBuffer[1][1]
    ADD EBX,0x4                         ; 00450fa6
        ;   Label: LAB_00450fa6
    ADD ESI,0x4                         ; 00450fa9
    ADD EDX,0x4                         ; 00450fac
    INC EDI                             ; 00450faf
    SUB ECX,0x1                         ; 00450fb0
    JG 0x00450f88                       ; 00450fb3
        ;   XREF to: 00450f88 (CONDITIONAL_JUMP)  ; LAB_00450f88
    POP EBP                             ; 00450fb5
    JMP 0x00450e7a                      ; 00450fb6
        ;   XREF to: 00450e7a (UNCONDITIONAL_JUMP)  ; LAB_00450e7a


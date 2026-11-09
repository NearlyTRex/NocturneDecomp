; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00462d20(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 at 0054f136
;   core_set.cpp_FUN_00550580 at 0055086a
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005d9114
;   TerminatedCString s_CDemonLight_blitZBuffer_005d9127
;   undefined4 DAT_01b2e638
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_blitZBuffer_FUN_00462a10
;   core_dstrendr.cpp_memcpyMMX_FUN_004886f1
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462d20
        ;   Label: core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00462d20
    PUSH ESI                            ; 00462d21
    PUSH EDI                            ; 00462d22
    PUSH EBP                            ; 00462d23
    SUB ESP,0x24                        ; 00462d24
    MOV EBP,dword ptr [ESP + 0x38]      ; 00462d27
    CMP dword ptr [EBP + 0x168],0x0     ; 00462d2b
    JZ 0x00462f22                       ; 00462d32
        ;   XREF to: 00462f22 (CONDITIONAL_JUMP)  ; LAB_00462f22
    CMP dword ptr [EBP + 0x1d0],0x100   ; 00462d38
    JG 0x00462f34                       ; 00462d42
        ;   XREF to: 00462f34 (CONDITIONAL_JUMP)  ; LAB_00462f34
    CMP dword ptr [EBP + 0x2f9c],0x0    ; 00462d48
    JZ 0x00462f71                       ; 00462d4f
        ;   XREF to: 00462f71 (CONDITIONAL_JUMP)  ; LAB_00462f71
    MOV EAX,dword ptr [EBP + 0x1d0]     ; 00462d55
        ;   Label: LAB_00462d55
    XOR ECX,ECX                         ; 00462d5b
    TEST EAX,EAX                        ; 00462d5d
    JLE 0x00462dad                      ; 00462d5f
        ;   XREF to: 00462dad (CONDITIONAL_JUMP)  ; LAB_00462dad
    LEA EDX,[EBP + 0x1d4]               ; 00462d61
    MOV EBX,dword ptr [EDX]             ; 00462d67
        ;   Label: LAB_00462d67
    MOV EAX,EDX                         ; 00462d69
    TEST EBX,EBX                        ; 00462d6b
    JL 0x00462f99                       ; 00462d6d
        ;   XREF to: 00462f99 (CONDITIONAL_JUMP)  ; LAB_00462f99
    MOV EBX,dword ptr [EBP + 0x1cc0]    ; 00462d73
        ;   Label: LAB_00462d73
    MOV ESI,dword ptr [EAX + 0x4]       ; 00462d79
    DEC EBX                             ; 00462d7c
    CMP EBX,ESI                         ; 00462d7d
    JGE 0x00462d84                      ; 00462d7f
        ;   XREF to: 00462d84 (CONDITIONAL_JUMP)  ; LAB_00462d84
    MOV dword ptr [EAX + 0x4],EBX       ; 00462d81
    CMP dword ptr [EAX + 0x8],0x0       ; 00462d84
        ;   Label: LAB_00462d84
    JL 0x00462fa4                       ; 00462d88
        ;   XREF to: 00462fa4 (CONDITIONAL_JUMP)  ; LAB_00462fa4
    MOV EBX,dword ptr [EBP + 0x1cc4]    ; 00462d8e
        ;   Label: LAB_00462d8e
    MOV ESI,dword ptr [EAX + 0xc]       ; 00462d94
    DEC EBX                             ; 00462d97
    CMP EBX,ESI                         ; 00462d98
    JGE 0x00462d9f                      ; 00462d9a
        ;   XREF to: 00462d9f (CONDITIONAL_JUMP)  ; LAB_00462d9f
    MOV dword ptr [EAX + 0xc],EBX       ; 00462d9c
    INC ECX                             ; 00462d9f
        ;   Label: LAB_00462d9f
    MOV EBX,dword ptr [EBP + 0x1d0]     ; 00462da0
    ADD EDX,0x10                        ; 00462da6
    CMP ECX,EBX                         ; 00462da9
    JL 0x00462d67                       ; 00462dab
        ;   XREF to: 00462d67 (CONDITIONAL_JUMP)  ; LAB_00462d67
    MOV EDI,dword ptr [EBP + 0x1d0]     ; 00462dad
        ;   Label: LAB_00462dad
    MOV EBX,dword ptr [EBP + 0x1cc4]    ; 00462db3
    XOR ESI,ESI                         ; 00462db9
    XOR EDX,EDX                         ; 00462dbb
    MOV dword ptr [ESP + 0x14],ESI      ; 00462dbd
    TEST EDI,EDI                        ; 00462dc1
    JLE 0x00462df3                      ; 00462dc3
        ;   XREF to: 00462df3 (CONDITIONAL_JUMP)  ; LAB_00462df3
    LEA EAX,[EBP + 0x1d4]               ; 00462dc5
    MOV ESI,dword ptr [EAX + 0x8]       ; 00462dcb
        ;   Label: LAB_00462dcb
    MOV ECX,EAX                         ; 00462dce
    CMP EBX,ESI                         ; 00462dd0
    JLE 0x00462dd6                      ; 00462dd2
        ;   XREF to: 00462dd6 (CONDITIONAL_JUMP)  ; LAB_00462dd6
    MOV EBX,ESI                         ; 00462dd4
    MOV EDI,dword ptr [ESP + 0x14]      ; 00462dd6
        ;   Label: LAB_00462dd6
    MOV ESI,dword ptr [ECX + 0xc]       ; 00462dda
    CMP ESI,EDI                         ; 00462ddd
    JLE 0x00462de5                      ; 00462ddf
        ;   XREF to: 00462de5 (CONDITIONAL_JUMP)  ; LAB_00462de5
    MOV dword ptr [ESP + 0x14],ESI      ; 00462de1
    INC EDX                             ; 00462de5
        ;   Label: LAB_00462de5
    MOV EDI,dword ptr [EBP + 0x1d0]     ; 00462de6
    ADD EAX,0x10                        ; 00462dec
    CMP EDX,EDI                         ; 00462def
    JL 0x00462dcb                       ; 00462df1
        ;   XREF to: 00462dcb (CONDITIONAL_JUMP)  ; LAB_00462dcb
    MOV EAX,dword ptr [ESP + 0x14]      ; 00462df3
        ;   Label: LAB_00462df3
    MOV dword ptr [ESP + 0x1c],EBX      ; 00462df7
    CMP EBX,EAX                         ; 00462dfb
    JG 0x00462f22                       ; 00462dfd
        ;   XREF to: 00462f22 (CONDITIONAL_JUMP)  ; LAB_00462f22
    LEA EAX,[EBP + 0x1d4]               ; 00462e03
    MOV dword ptr [ESP + 0x10],EAX      ; 00462e09
    XOR ECX,ECX                         ; 00462e0d
        ;   Label: LAB_00462e0d
    MOV ESI,dword ptr [EBP + 0x1d0]     ; 00462e0f
    MOV dword ptr [ESP + 0x18],ECX      ; 00462e15
    MOV dword ptr [0x01b2e638],ECX      ; 00462e19 | DAT_01b2e638
    TEST ESI,ESI                        ; 00462e1f
    JLE 0x00462eaf                      ; 00462e21
        ;   XREF to: 00462eaf (CONDITIONAL_JUMP)  ; LAB_00462eaf
    MOV EDI,dword ptr [ESP + 0x10]      ; 00462e27
    MOV dword ptr [ESP + 0x20],ECX      ; 00462e2b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00462e2f
        ;   Label: LAB_00462e2f
    MOV ESI,dword ptr [EDI + 0x8]       ; 00462e33
    MOV EDX,EDI                         ; 00462e36
    CMP EAX,ESI                         ; 00462e38
    JL 0x00462e99                       ; 00462e3a
        ;   XREF to: 00462e99 (CONDITIONAL_JUMP)  ; LAB_00462e99
    CMP EAX,dword ptr [EDI + 0xc]       ; 00462e3c
    JG 0x00462e99                       ; 00462e3f
        ;   XREF to: 00462e99 (CONDITIONAL_JUMP)  ; LAB_00462e99
    MOV EBX,dword ptr [0x01b2e638]      ; 00462e41 | DAT_01b2e638
    XOR ECX,ECX                         ; 00462e47
    TEST EBX,EBX                        ; 00462e49
    JLE 0x00462e6c                      ; 00462e4b
        ;   XREF to: 00462e6c (CONDITIONAL_JUMP)  ; LAB_00462e6c
    LEA ESI,[EBX*0x4 + 0x0]             ; 00462e4d
    XOR EAX,EAX                         ; 00462e54
    MOV EBX,dword ptr [EDX + 0x4]       ; 00462e56
        ;   Label: LAB_00462e56
    CMP EBX,dword ptr [EAX + 0x1b2e63c] ; 00462e59
    JGE 0x00462fb0                      ; 00462e5f
        ;   XREF to: 00462fb0 (CONDITIONAL_JUMP)  ; LAB_00462fb0
    ADD EAX,0x4                         ; 00462e65
        ;   Label: LAB_00462e65
    CMP EAX,ESI                         ; 00462e68
    JL 0x00462e56                       ; 00462e6a
        ;   XREF to: 00462e56 (CONDITIONAL_JUMP)  ; LAB_00462e56
    TEST ECX,ECX                        ; 00462e6c
        ;   Label: LAB_00462e6c
    JNZ 0x00462e99                      ; 00462e6e
        ;   XREF to: 00462e99 (CONDITIONAL_JUMP)  ; LAB_00462e99
    MOV ECX,dword ptr [ESP + 0x20]      ; 00462e70
    MOV EAX,dword ptr [EDX]             ; 00462e74
    MOV dword ptr [ECX + 0x1b2e63c],EAX ; 00462e76
    MOV EAX,dword ptr [EDX + 0x4]       ; 00462e7c
    LEA EDX,[ECX + 0x4]                 ; 00462e7f
    MOV dword ptr [ECX + 0x1b2ea3c],EAX ; 00462e82
    MOV ECX,dword ptr [0x01b2e638]      ; 00462e88 | DAT_01b2e638
    INC ECX                             ; 00462e8e
    MOV dword ptr [ESP + 0x20],EDX      ; 00462e8f
    MOV dword ptr [0x01b2e638],ECX      ; 00462e93 | DAT_01b2e638
    MOV EAX,dword ptr [ESP + 0x18]      ; 00462e99
        ;   Label: LAB_00462e99
    ADD EDI,0x10                        ; 00462e9d
    INC EAX                             ; 00462ea0
    MOV EDX,dword ptr [EBP + 0x1d0]     ; 00462ea1
    MOV dword ptr [ESP + 0x18],EAX      ; 00462ea7
    CMP EAX,EDX                         ; 00462eab
    JL 0x00462e2f                       ; 00462ead
        ;   XREF to: 00462e2f (CONDITIONAL_JUMP)  ; LAB_00462e2f
    MOV ECX,dword ptr [0x01b2e638]      ; 00462eaf | DAT_01b2e638
        ;   Label: LAB_00462eaf
    XOR EDI,EDI                         ; 00462eb5
    TEST ECX,ECX                        ; 00462eb7
    JLE 0x00462f0d                      ; 00462eb9
        ;   XREF to: 00462f0d (CONDITIONAL_JUMP)  ; LAB_00462f0d
    XOR ESI,ESI                         ; 00462ebb
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00462ebd
        ;   Label: LAB_00462ebd
    IMUL EAX,dword ptr [EBP + 0x1cc0]   ; 00462ec1
    MOV ECX,dword ptr [ESI + 0x1b2e63c] ; 00462ec8
    MOV EBX,dword ptr [ESI + 0x1b2e63c] ; 00462ece
    ADD EAX,ECX                         ; 00462ed4
    MOV EDX,dword ptr [EBP + 0x2f94]    ; 00462ed6
    ADD EAX,EAX                         ; 00462edc
    MOV ECX,dword ptr [EBP + 0x2f9c]    ; 00462ede
    ADD EDX,EAX                         ; 00462ee4
    ADD ECX,EAX                         ; 00462ee6
    MOV EAX,dword ptr [ESI + 0x1b2ea3c] ; 00462ee8
    SUB EAX,EBX                         ; 00462eee
    ADD EAX,EAX                         ; 00462ef0
    ADD EAX,0x2                         ; 00462ef2
    PUSH EAX                            ; 00462ef5
    PUSH ECX                            ; 00462ef6
    PUSH EDX                            ; 00462ef7
    ADD ESI,0x4                         ; 00462ef8
    INC EDI                             ; 00462efb
    CALL core_dstrendr.cpp_memcpyMMX_FUN_004886f1 ; 00462efc
        ;   XREF to: 004886f1 (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_memcpyMMX_FUN_004886f1(void * dest, void * src, int byte_count)
    MOV EAX,[0x01b2e638]                ; 00462f01 | DAT_01b2e638
    ADD ESP,0xc                         ; 00462f06
    CMP EDI,EAX                         ; 00462f09
    JL 0x00462ebd                       ; 00462f0b
        ;   XREF to: 00462ebd (CONDITIONAL_JUMP)  ; LAB_00462ebd
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00462f0d
        ;   Label: LAB_00462f0d
    INC EAX                             ; 00462f11
    MOV EDX,dword ptr [ESP + 0x14]      ; 00462f12
    MOV dword ptr [ESP + 0x1c],EAX      ; 00462f16
    CMP EAX,EDX                         ; 00462f1a
    JLE 0x00462e0d                      ; 00462f1c
        ;   XREF to: 00462e0d (CONDITIONAL_JUMP)  ; LAB_00462e0d
    MOV dword ptr [EBP + 0x1d0],0x0     ; 00462f22
        ;   Label: LAB_00462f22
    ADD ESP,0x24                        ; 00462f2c
    POP EBP                             ; 00462f2f
    POP EDI                             ; 00462f30
    POP ESI                             ; 00462f31
    POP EBX                             ; 00462f32
    RET                                 ; 00462f33
    XOR EDX,EDX                         ; 00462f34
        ;   Label: LAB_00462f34
    MOV dword ptr [ESP],EDX             ; 00462f36
    MOV dword ptr [ESP + 0x8],EDX       ; 00462f39
    MOV EAX,dword ptr [EBP + 0x1cc0]    ; 00462f3d
    DEC EAX                             ; 00462f43
    MOV dword ptr [ESP + 0x4],EAX       ; 00462f44
    MOV EAX,dword ptr [EBP + 0x1cc4]    ; 00462f48
    DEC EAX                             ; 00462f4e
    MOV dword ptr [ESP + 0xc],EAX       ; 00462f4f
    MOV EAX,ESP                         ; 00462f53
    PUSH EAX                            ; 00462f55
    PUSH EBP                            ; 00462f56
    CALL core_dlight.cpp_CDemonLight_blitZBuffer_FUN_00462a10 ; 00462f57
        ;   XREF to: 00462a10 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_blitZBuffer_FUN_00462a10(CDemonLight * this_ptr, CRect * source_rect)
    ADD ESP,0x8                         ; 00462f5c
    MOV dword ptr [EBP + 0x1d0],0x0     ; 00462f5f
    ADD ESP,0x24                        ; 00462f69
    POP EBP                             ; 00462f6c
    POP EDI                             ; 00462f6d
    POP ESI                             ; 00462f6e
    POP EBX                             ; 00462f6f
    RET                                 ; 00462f70
    MOV ESI,0x5d9114                    ; 00462f71 | = "..\\core\\dlight.cpp"
        ;   Label: LAB_00462f71
    MOV EDI,0x202                       ; 00462f76
    PUSH 0x5d9127                       ; 00462f7b | = "CDemonLight::blitZBuffer - No master ..."
    MOV dword ptr [0x01d1d400],ESI      ; 00462f80 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00462f86 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00462f8c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00462f91
    JMP 0x00462d55                      ; 00462f94
        ;   XREF to: 00462d55 (UNCONDITIONAL_JUMP)  ; LAB_00462d55
    MOV dword ptr [EDX],0x0             ; 00462f99
        ;   Label: LAB_00462f99
    JMP 0x00462d73                      ; 00462f9f
        ;   XREF to: 00462d73 (UNCONDITIONAL_JUMP)  ; LAB_00462d73
    MOV dword ptr [EAX + 0x8],0x0       ; 00462fa4
        ;   Label: LAB_00462fa4
    JMP 0x00462d8e                      ; 00462fab
        ;   XREF to: 00462d8e (UNCONDITIONAL_JUMP)  ; LAB_00462d8e
    MOV EBX,dword ptr [EDX]             ; 00462fb0
        ;   Label: LAB_00462fb0
    CMP EBX,dword ptr [EAX + 0x1b2ea3c] ; 00462fb2
    JG 0x00462e65                       ; 00462fb8
        ;   XREF to: 00462e65 (CONDITIONAL_JUMP)  ; LAB_00462e65
    CMP EBX,dword ptr [EAX + 0x1b2e63c] ; 00462fbe
    JL 0x00462fd5                       ; 00462fc4
        ;   XREF to: 00462fd5 (CONDITIONAL_JUMP)  ; LAB_00462fd5
    MOV EBX,dword ptr [EDX + 0x4]       ; 00462fc6
    CMP EBX,dword ptr [EAX + 0x1b2ea3c] ; 00462fc9
    JLE 0x00462e99                      ; 00462fcf
        ;   XREF to: 00462e99 (CONDITIONAL_JUMP)  ; LAB_00462e99
    MOV EBX,dword ptr [EDX]             ; 00462fd5
        ;   Label: LAB_00462fd5
    CMP EBX,dword ptr [EAX + 0x1b2e63c] ; 00462fd7
    JGE 0x00462fea                      ; 00462fdd
        ;   XREF to: 00462fea (CONDITIONAL_JUMP)  ; LAB_00462fea
    MOV ECX,0x1                         ; 00462fdf
    MOV dword ptr [EAX + 0x1b2e63c],EBX ; 00462fe4
    MOV EBX,dword ptr [EDX + 0x4]       ; 00462fea
        ;   Label: LAB_00462fea
    CMP EBX,dword ptr [EAX + 0x1b2ea3c] ; 00462fed
    JLE 0x00463000                      ; 00462ff3
        ;   XREF to: 00463000 (CONDITIONAL_JUMP)  ; LAB_00463000
    MOV dword ptr [EAX + 0x1b2ea3c],EBX ; 00462ff5
    JMP 0x00462e99                      ; 00462ffb
        ;   XREF to: 00462e99 (UNCONDITIONAL_JUMP)  ; LAB_00462e99
    TEST ECX,ECX                        ; 00463000
        ;   Label: LAB_00463000
    JNZ 0x00462e6c                      ; 00463002
        ;   XREF to: 00462e6c (CONDITIONAL_JUMP)  ; LAB_00462e6c
    JMP 0x00462e65                      ; 00463008
        ;   XREF to: 00462e65 (UNCONDITIONAL_JUMP)  ; LAB_00462e65


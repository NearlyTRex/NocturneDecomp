; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970(CDemonLight *this_ptr)
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
; XREF[3]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 at 00508954
;   core_set.cpp_FUN_00509a80 at 00509fb3
;   core_set.cpp_FUN_0050aba0 at 0050acfd
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_0057c76e
;   TerminatedCString s_CDemonLight_blitZBuffer_0057c781
;   undefined4 DAT_01abacb4
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_blitZBuffer_FUN_0044e660
;   core_dstrender.cpp_memcpyMMX_FUN_00465341
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044e970
        ;   Label: core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970
    PUSH ESI                            ; 0044e971
    PUSH EDI                            ; 0044e972
    PUSH EBP                            ; 0044e973
    SUB ESP,0x24                        ; 0044e974
    MOV EBP,dword ptr [ESP + 0x38]      ; 0044e977
    CMP dword ptr [EBP + 0x168],0x0     ; 0044e97b
    JZ 0x0044eb72                       ; 0044e982
        ;   XREF to: 0044eb72 (CONDITIONAL_JUMP)  ; LAB_0044eb72
    CMP dword ptr [EBP + 0x1d0],0x100   ; 0044e988
    JG 0x0044eb84                       ; 0044e992
        ;   XREF to: 0044eb84 (CONDITIONAL_JUMP)  ; LAB_0044eb84
    CMP dword ptr [EBP + 0x2f9c],0x0    ; 0044e998
    JZ 0x0044ebc1                       ; 0044e99f
        ;   XREF to: 0044ebc1 (CONDITIONAL_JUMP)  ; LAB_0044ebc1
    MOV EAX,dword ptr [EBP + 0x1d0]     ; 0044e9a5
        ;   Label: LAB_0044e9a5
    XOR ECX,ECX                         ; 0044e9ab
    TEST EAX,EAX                        ; 0044e9ad
    JLE 0x0044e9fd                      ; 0044e9af
        ;   XREF to: 0044e9fd (CONDITIONAL_JUMP)  ; LAB_0044e9fd
    LEA EDX,[EBP + 0x1d4]               ; 0044e9b1
    MOV EBX,dword ptr [EDX]             ; 0044e9b7
        ;   Label: LAB_0044e9b7
    MOV EAX,EDX                         ; 0044e9b9
    TEST EBX,EBX                        ; 0044e9bb
    JL 0x0044ebe9                       ; 0044e9bd
        ;   XREF to: 0044ebe9 (CONDITIONAL_JUMP)  ; LAB_0044ebe9
    MOV EBX,dword ptr [EBP + 0x1cc0]    ; 0044e9c3
        ;   Label: LAB_0044e9c3
    MOV ESI,dword ptr [EAX + 0x4]       ; 0044e9c9
    DEC EBX                             ; 0044e9cc
    CMP EBX,ESI                         ; 0044e9cd
    JGE 0x0044e9d4                      ; 0044e9cf
        ;   XREF to: 0044e9d4 (CONDITIONAL_JUMP)  ; LAB_0044e9d4
    MOV dword ptr [EAX + 0x4],EBX       ; 0044e9d1
    CMP dword ptr [EAX + 0x8],0x0       ; 0044e9d4
        ;   Label: LAB_0044e9d4
    JL 0x0044ebf4                       ; 0044e9d8
        ;   XREF to: 0044ebf4 (CONDITIONAL_JUMP)  ; LAB_0044ebf4
    MOV EBX,dword ptr [EBP + 0x1cc4]    ; 0044e9de
        ;   Label: LAB_0044e9de
    MOV ESI,dword ptr [EAX + 0xc]       ; 0044e9e4
    DEC EBX                             ; 0044e9e7
    CMP EBX,ESI                         ; 0044e9e8
    JGE 0x0044e9ef                      ; 0044e9ea
        ;   XREF to: 0044e9ef (CONDITIONAL_JUMP)  ; LAB_0044e9ef
    MOV dword ptr [EAX + 0xc],EBX       ; 0044e9ec
    INC ECX                             ; 0044e9ef
        ;   Label: LAB_0044e9ef
    MOV EBX,dword ptr [EBP + 0x1d0]     ; 0044e9f0
    ADD EDX,0x10                        ; 0044e9f6
    CMP ECX,EBX                         ; 0044e9f9
    JL 0x0044e9b7                       ; 0044e9fb
        ;   XREF to: 0044e9b7 (CONDITIONAL_JUMP)  ; LAB_0044e9b7
    MOV EDI,dword ptr [EBP + 0x1d0]     ; 0044e9fd
        ;   Label: LAB_0044e9fd
    MOV EBX,dword ptr [EBP + 0x1cc4]    ; 0044ea03
    XOR ESI,ESI                         ; 0044ea09
    XOR EDX,EDX                         ; 0044ea0b
    MOV dword ptr [ESP + 0x14],ESI      ; 0044ea0d
    TEST EDI,EDI                        ; 0044ea11
    JLE 0x0044ea43                      ; 0044ea13
        ;   XREF to: 0044ea43 (CONDITIONAL_JUMP)  ; LAB_0044ea43
    LEA EAX,[EBP + 0x1d4]               ; 0044ea15
    MOV ESI,dword ptr [EAX + 0x8]       ; 0044ea1b
        ;   Label: LAB_0044ea1b
    MOV ECX,EAX                         ; 0044ea1e
    CMP EBX,ESI                         ; 0044ea20
    JLE 0x0044ea26                      ; 0044ea22
        ;   XREF to: 0044ea26 (CONDITIONAL_JUMP)  ; LAB_0044ea26
    MOV EBX,ESI                         ; 0044ea24
    MOV EDI,dword ptr [ESP + 0x14]      ; 0044ea26
        ;   Label: LAB_0044ea26
    MOV ESI,dword ptr [ECX + 0xc]       ; 0044ea2a
    CMP ESI,EDI                         ; 0044ea2d
    JLE 0x0044ea35                      ; 0044ea2f
        ;   XREF to: 0044ea35 (CONDITIONAL_JUMP)  ; LAB_0044ea35
    MOV dword ptr [ESP + 0x14],ESI      ; 0044ea31
    INC EDX                             ; 0044ea35
        ;   Label: LAB_0044ea35
    MOV EDI,dword ptr [EBP + 0x1d0]     ; 0044ea36
    ADD EAX,0x10                        ; 0044ea3c
    CMP EDX,EDI                         ; 0044ea3f
    JL 0x0044ea1b                       ; 0044ea41
        ;   XREF to: 0044ea1b (CONDITIONAL_JUMP)  ; LAB_0044ea1b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044ea43
        ;   Label: LAB_0044ea43
    MOV dword ptr [ESP + 0x1c],EBX      ; 0044ea47
    CMP EBX,EAX                         ; 0044ea4b
    JG 0x0044eb72                       ; 0044ea4d
        ;   XREF to: 0044eb72 (CONDITIONAL_JUMP)  ; LAB_0044eb72
    LEA EAX,[EBP + 0x1d4]               ; 0044ea53
    MOV dword ptr [ESP + 0x10],EAX      ; 0044ea59
    XOR ECX,ECX                         ; 0044ea5d
        ;   Label: LAB_0044ea5d
    MOV ESI,dword ptr [EBP + 0x1d0]     ; 0044ea5f
    MOV dword ptr [ESP + 0x18],ECX      ; 0044ea65
    MOV dword ptr [0x01abacb4],ECX      ; 0044ea69 | DAT_01abacb4
    TEST ESI,ESI                        ; 0044ea6f
    JLE 0x0044eaff                      ; 0044ea71
        ;   XREF to: 0044eaff (CONDITIONAL_JUMP)  ; LAB_0044eaff
    MOV EDI,dword ptr [ESP + 0x10]      ; 0044ea77
    MOV dword ptr [ESP + 0x20],ECX      ; 0044ea7b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0044ea7f
        ;   Label: LAB_0044ea7f
    MOV ESI,dword ptr [EDI + 0x8]       ; 0044ea83
    MOV EDX,EDI                         ; 0044ea86
    CMP EAX,ESI                         ; 0044ea88
    JL 0x0044eae9                       ; 0044ea8a
        ;   XREF to: 0044eae9 (CONDITIONAL_JUMP)  ; LAB_0044eae9
    CMP EAX,dword ptr [EDI + 0xc]       ; 0044ea8c
    JG 0x0044eae9                       ; 0044ea8f
        ;   XREF to: 0044eae9 (CONDITIONAL_JUMP)  ; LAB_0044eae9
    MOV EBX,dword ptr [0x01abacb4]      ; 0044ea91 | DAT_01abacb4
    XOR ECX,ECX                         ; 0044ea97
    TEST EBX,EBX                        ; 0044ea99
    JLE 0x0044eabc                      ; 0044ea9b
        ;   XREF to: 0044eabc (CONDITIONAL_JUMP)  ; LAB_0044eabc
    LEA ESI,[EBX*0x4 + 0x0]             ; 0044ea9d
    XOR EAX,EAX                         ; 0044eaa4
    MOV EBX,dword ptr [EDX + 0x4]       ; 0044eaa6
        ;   Label: LAB_0044eaa6
    CMP EBX,dword ptr [EAX + 0x1abacb8] ; 0044eaa9
    JGE 0x0044ec00                      ; 0044eaaf
        ;   XREF to: 0044ec00 (CONDITIONAL_JUMP)  ; LAB_0044ec00
    ADD EAX,0x4                         ; 0044eab5
        ;   Label: LAB_0044eab5
    CMP EAX,ESI                         ; 0044eab8
    JL 0x0044eaa6                       ; 0044eaba
        ;   XREF to: 0044eaa6 (CONDITIONAL_JUMP)  ; LAB_0044eaa6
    TEST ECX,ECX                        ; 0044eabc
        ;   Label: LAB_0044eabc
    JNZ 0x0044eae9                      ; 0044eabe
        ;   XREF to: 0044eae9 (CONDITIONAL_JUMP)  ; LAB_0044eae9
    MOV ECX,dword ptr [ESP + 0x20]      ; 0044eac0
    MOV EAX,dword ptr [EDX]             ; 0044eac4
    MOV dword ptr [ECX + 0x1abacb8],EAX ; 0044eac6
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044eacc
    LEA EDX,[ECX + 0x4]                 ; 0044eacf
    MOV dword ptr [ECX + 0x1abb0b8],EAX ; 0044ead2
    MOV ECX,dword ptr [0x01abacb4]      ; 0044ead8 | DAT_01abacb4
    INC ECX                             ; 0044eade
    MOV dword ptr [ESP + 0x20],EDX      ; 0044eadf
    MOV dword ptr [0x01abacb4],ECX      ; 0044eae3 | DAT_01abacb4
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044eae9
        ;   Label: LAB_0044eae9
    ADD EDI,0x10                        ; 0044eaed
    INC EAX                             ; 0044eaf0
    MOV EDX,dword ptr [EBP + 0x1d0]     ; 0044eaf1
    MOV dword ptr [ESP + 0x18],EAX      ; 0044eaf7
    CMP EAX,EDX                         ; 0044eafb
    JL 0x0044ea7f                       ; 0044eafd
        ;   XREF to: 0044ea7f (CONDITIONAL_JUMP)  ; LAB_0044ea7f
    MOV ECX,dword ptr [0x01abacb4]      ; 0044eaff | DAT_01abacb4
        ;   Label: LAB_0044eaff
    XOR EDI,EDI                         ; 0044eb05
    TEST ECX,ECX                        ; 0044eb07
    JLE 0x0044eb5d                      ; 0044eb09
        ;   XREF to: 0044eb5d (CONDITIONAL_JUMP)  ; LAB_0044eb5d
    XOR ESI,ESI                         ; 0044eb0b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0044eb0d
        ;   Label: LAB_0044eb0d
    IMUL EAX,dword ptr [EBP + 0x1cc0]   ; 0044eb11
    MOV ECX,dword ptr [ESI + 0x1abacb8] ; 0044eb18
    MOV EBX,dword ptr [ESI + 0x1abacb8] ; 0044eb1e
    ADD EAX,ECX                         ; 0044eb24
    MOV EDX,dword ptr [EBP + 0x2f94]    ; 0044eb26
    ADD EAX,EAX                         ; 0044eb2c
    MOV ECX,dword ptr [EBP + 0x2f9c]    ; 0044eb2e
    ADD EDX,EAX                         ; 0044eb34
    ADD ECX,EAX                         ; 0044eb36
    MOV EAX,dword ptr [ESI + 0x1abb0b8] ; 0044eb38
    SUB EAX,EBX                         ; 0044eb3e
    ADD EAX,EAX                         ; 0044eb40
    ADD EAX,0x2                         ; 0044eb42
    PUSH EAX                            ; 0044eb45
    PUSH ECX                            ; 0044eb46
    PUSH EDX                            ; 0044eb47
    ADD ESI,0x4                         ; 0044eb48
    INC EDI                             ; 0044eb4b
    CALL core_dstrender.cpp_memcpyMMX_FUN_00465341 ; 0044eb4c
        ;   XREF to: 00465341 (UNCONDITIONAL_CALL)  ; void core_dstrender.cpp_memcpyMMX_FUN_00465341(void * dest, void * src, int byte_count)
    MOV EAX,[0x01abacb4]                ; 0044eb51 | DAT_01abacb4
    ADD ESP,0xc                         ; 0044eb56
    CMP EDI,EAX                         ; 0044eb59
    JL 0x0044eb0d                       ; 0044eb5b
        ;   XREF to: 0044eb0d (CONDITIONAL_JUMP)  ; LAB_0044eb0d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0044eb5d
        ;   Label: LAB_0044eb5d
    INC EAX                             ; 0044eb61
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044eb62
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044eb66
    CMP EAX,EDX                         ; 0044eb6a
    JLE 0x0044ea5d                      ; 0044eb6c
        ;   XREF to: 0044ea5d (CONDITIONAL_JUMP)  ; LAB_0044ea5d
    MOV dword ptr [EBP + 0x1d0],0x0     ; 0044eb72
        ;   Label: LAB_0044eb72
    ADD ESP,0x24                        ; 0044eb7c
    POP EBP                             ; 0044eb7f
    POP EDI                             ; 0044eb80
    POP ESI                             ; 0044eb81
    POP EBX                             ; 0044eb82
    RET                                 ; 0044eb83
    XOR EDX,EDX                         ; 0044eb84
        ;   Label: LAB_0044eb84
    MOV dword ptr [ESP],EDX             ; 0044eb86
    MOV dword ptr [ESP + 0x8],EDX       ; 0044eb89
    MOV EAX,dword ptr [EBP + 0x1cc0]    ; 0044eb8d
    DEC EAX                             ; 0044eb93
    MOV dword ptr [ESP + 0x4],EAX       ; 0044eb94
    MOV EAX,dword ptr [EBP + 0x1cc4]    ; 0044eb98
    DEC EAX                             ; 0044eb9e
    MOV dword ptr [ESP + 0xc],EAX       ; 0044eb9f
    MOV EAX,ESP                         ; 0044eba3
    PUSH EAX                            ; 0044eba5
    PUSH EBP                            ; 0044eba6
    CALL core_dlight.cpp_CDemonLight_blitZBuffer_FUN_0044e660 ; 0044eba7
        ;   XREF to: 0044e660 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_blitZBuffer_FUN_0044e660(CDemonLight * this_ptr, CRect * source_rect)
    ADD ESP,0x8                         ; 0044ebac
    MOV dword ptr [EBP + 0x1d0],0x0     ; 0044ebaf
    ADD ESP,0x24                        ; 0044ebb9
    POP EBP                             ; 0044ebbc
    POP EDI                             ; 0044ebbd
    POP ESI                             ; 0044ebbe
    POP EBX                             ; 0044ebbf
    RET                                 ; 0044ebc0
    MOV ESI,0x57c76e                    ; 0044ebc1 | = "..\\core\\dlight.cpp"
        ;   Label: LAB_0044ebc1
    MOV EDI,0x202                       ; 0044ebc6
    PUSH 0x57c781                       ; 0044ebcb | = "CDemonLight::blitZBuffer - No master ..."
    MOV dword ptr [0x01cc4800],ESI      ; 0044ebd0 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 0044ebd6 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044ebdc
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0044ebe1
    JMP 0x0044e9a5                      ; 0044ebe4
        ;   XREF to: 0044e9a5 (UNCONDITIONAL_JUMP)  ; LAB_0044e9a5
    MOV dword ptr [EDX],0x0             ; 0044ebe9
        ;   Label: LAB_0044ebe9
    JMP 0x0044e9c3                      ; 0044ebef
        ;   XREF to: 0044e9c3 (UNCONDITIONAL_JUMP)  ; LAB_0044e9c3
    MOV dword ptr [EAX + 0x8],0x0       ; 0044ebf4
        ;   Label: LAB_0044ebf4
    JMP 0x0044e9de                      ; 0044ebfb
        ;   XREF to: 0044e9de (UNCONDITIONAL_JUMP)  ; LAB_0044e9de
    MOV EBX,dword ptr [EDX]             ; 0044ec00
        ;   Label: LAB_0044ec00
    CMP EBX,dword ptr [EAX + 0x1abb0b8] ; 0044ec02
    JG 0x0044eab5                       ; 0044ec08
        ;   XREF to: 0044eab5 (CONDITIONAL_JUMP)  ; LAB_0044eab5
    CMP EBX,dword ptr [EAX + 0x1abacb8] ; 0044ec0e
    JL 0x0044ec25                       ; 0044ec14
        ;   XREF to: 0044ec25 (CONDITIONAL_JUMP)  ; LAB_0044ec25
    MOV EBX,dword ptr [EDX + 0x4]       ; 0044ec16
    CMP EBX,dword ptr [EAX + 0x1abb0b8] ; 0044ec19
    JLE 0x0044eae9                      ; 0044ec1f
        ;   XREF to: 0044eae9 (CONDITIONAL_JUMP)  ; LAB_0044eae9
    MOV EBX,dword ptr [EDX]             ; 0044ec25
        ;   Label: LAB_0044ec25
    CMP EBX,dword ptr [EAX + 0x1abacb8] ; 0044ec27
    JGE 0x0044ec3a                      ; 0044ec2d
        ;   XREF to: 0044ec3a (CONDITIONAL_JUMP)  ; LAB_0044ec3a
    MOV ECX,0x1                         ; 0044ec2f
    MOV dword ptr [EAX + 0x1abacb8],EBX ; 0044ec34
    MOV EBX,dword ptr [EDX + 0x4]       ; 0044ec3a
        ;   Label: LAB_0044ec3a
    CMP EBX,dword ptr [EAX + 0x1abb0b8] ; 0044ec3d
    JLE 0x0044ec50                      ; 0044ec43
        ;   XREF to: 0044ec50 (CONDITIONAL_JUMP)  ; LAB_0044ec50
    MOV dword ptr [EAX + 0x1abb0b8],EBX ; 0044ec45
    JMP 0x0044eae9                      ; 0044ec4b
        ;   XREF to: 0044eae9 (UNCONDITIONAL_JUMP)  ; LAB_0044eae9
    TEST ECX,ECX                        ; 0044ec50
        ;   Label: LAB_0044ec50
    JNZ 0x0044eabc                      ; 0044ec52
        ;   XREF to: 0044eabc (CONDITIONAL_JUMP)  ; LAB_0044eabc
    JMP 0x0044eab5                      ; 0044ec58
        ;   XREF to: 0044eab5 (UNCONDITIONAL_JUMP)  ; LAB_0044eab5


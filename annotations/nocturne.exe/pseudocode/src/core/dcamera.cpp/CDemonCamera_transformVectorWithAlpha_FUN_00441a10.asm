; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint * __stack2_esi core_dcamera_cpp_CDemonCamera_transformVectorWithAlpha_FUN_00441a10(int param_1,int *param_2,uint *param_3)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0 at 0050c6eb
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c039e8
;   undefined4 DAT_01c039ec
;   undefined4 DAT_01c039f0
;   undefined4 DAT_01c039f4
;   undefined4 DAT_01c039f8
;   undefined4 DAT_01c039fc
;   undefined4 DAT_01c03a00
;   undefined4 DAT_01c03a04
;   undefined4 DAT_01c03a08
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_004613b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441a10
        ;   Label: core_dcamera.cpp_CDemonCamera_transformVectorWithAlpha_FUN_00441a10
    PUSH EDI                            ; 00441a11
    PUSH EBP                            ; 00441a12
    SUB ESP,0x18                        ; 00441a13
    MOV EBP,ESI                         ; 00441a16
    MOV EDI,0x1c039e8                   ; 00441a18
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00441a1d
    MOV EAX,dword ptr [ESI]             ; 00441a21
    IMUL dword ptr [EDI]                ; 00441a23 | DAT_01c039e8
    MOV EBX,EAX                         ; 00441a25
    MOV ECX,EDX                         ; 00441a27
    MOV EAX,dword ptr [ESI + 0x4]       ; 00441a29
    IMUL dword ptr [EDI + 0xc]          ; 00441a2c | DAT_01c039f4
    ADD EBX,EAX                         ; 00441a2f
    ADC ECX,EDX                         ; 00441a31
    MOV EAX,dword ptr [ESI + 0x8]       ; 00441a33
    IMUL dword ptr [EDI + 0x18]         ; 00441a36 | DAT_01c03a00
    ADD EAX,EBX                         ; 00441a39
    ADC EDX,ECX                         ; 00441a3b
    SHRD EAX,EDX,0x10                   ; 00441a3d
    MOV EDI,0x1c039ec                   ; 00441a41
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00441a46
    MOV dword ptr [ESP],EAX             ; 00441a4a
    MOV EAX,dword ptr [ESI]             ; 00441a4d
    IMUL dword ptr [EDI]                ; 00441a4f | DAT_01c039ec
    MOV EBX,EAX                         ; 00441a51
    MOV ECX,EDX                         ; 00441a53
    MOV EAX,dword ptr [ESI + 0x4]       ; 00441a55
    IMUL dword ptr [EDI + 0xc]          ; 00441a58 | DAT_01c039f8
    ADD EBX,EAX                         ; 00441a5b
    ADC ECX,EDX                         ; 00441a5d
    MOV EAX,dword ptr [ESI + 0x8]       ; 00441a5f
    IMUL dword ptr [EDI + 0x18]         ; 00441a62 | DAT_01c03a04
    ADD EAX,EBX                         ; 00441a65
    ADC EDX,ECX                         ; 00441a67
    SHRD EAX,EDX,0x10                   ; 00441a69
    MOV EDI,0x1c039f0                   ; 00441a6d
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00441a72
    MOV dword ptr [ESP + 0x4],EAX       ; 00441a76
    MOV EAX,dword ptr [ESI]             ; 00441a7a
    IMUL dword ptr [EDI]                ; 00441a7c | DAT_01c039f0
    MOV EBX,EAX                         ; 00441a7e
    MOV ECX,EDX                         ; 00441a80
    MOV EAX,dword ptr [ESI + 0x4]       ; 00441a82
    IMUL dword ptr [EDI + 0xc]          ; 00441a85 | DAT_01c039fc
    ADD EBX,EAX                         ; 00441a88
    ADC ECX,EDX                         ; 00441a8a
    MOV EAX,dword ptr [ESI + 0x8]       ; 00441a8c
    IMUL dword ptr [EDI + 0x18]         ; 00441a8f | DAT_01c03a08
    ADD EAX,EBX                         ; 00441a92
    ADC EDX,ECX                         ; 00441a94
    SHRD EAX,EDX,0x10                   ; 00441a96
    MOV EDX,dword ptr [0x005ae704]      ; 00441a9a | DAT_005ae704
    PUSH EDX                            ; 00441aa0 | DAT_01b4d738
    MOV dword ptr [ESP + 0xc],EAX       ; 00441aa1
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_004613b0 ; 00441aa5
        ;   XREF to: 004613b0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_004613b0()
    ADD ESP,0x4                         ; 00441aaa
    TEST EAX,EAX                        ; 00441aad
    JNZ 0x00441b57                      ; 00441aaf
        ;   XREF to: 00441b57 (CONDITIONAL_JUMP)  ; LAB_00441b57
    MOV EDI,dword ptr [ESP + 0x28]      ; 00441ab5
    MOV ESI,ESP                         ; 00441ab9
    ADD EDI,0x19c                       ; 00441abb
    MOV EAX,dword ptr [ESI]             ; 00441ac1
    IMUL dword ptr [EDI]                ; 00441ac3
    MOV EBX,EAX                         ; 00441ac5
    MOV ECX,EDX                         ; 00441ac7
    MOV EAX,dword ptr [ESI + 0x4]       ; 00441ac9
    IMUL dword ptr [EDI + 0xc]          ; 00441acc
    ADD EBX,EAX                         ; 00441acf
    ADC ECX,EDX                         ; 00441ad1
    MOV EAX,dword ptr [ESI + 0x8]       ; 00441ad3
    IMUL dword ptr [EDI + 0x18]         ; 00441ad6
    ADD EAX,EBX                         ; 00441ad9
    ADC EDX,ECX                         ; 00441adb
    SHRD EAX,EDX,0x10                   ; 00441add
    MOV EDI,dword ptr [ESP + 0x28]      ; 00441ae1
    MOV ESI,ESP                         ; 00441ae5
    ADD EDI,0x1a0                       ; 00441ae7
    MOV dword ptr [ESP + 0xc],EAX       ; 00441aed
    MOV EAX,dword ptr [ESI]             ; 00441af1
    IMUL dword ptr [EDI]                ; 00441af3
    MOV EBX,EAX                         ; 00441af5
    MOV ECX,EDX                         ; 00441af7
    MOV EAX,dword ptr [ESI + 0x4]       ; 00441af9
    IMUL dword ptr [EDI + 0xc]          ; 00441afc
    ADD EBX,EAX                         ; 00441aff
    ADC ECX,EDX                         ; 00441b01
    MOV EAX,dword ptr [ESI + 0x8]       ; 00441b03
    IMUL dword ptr [EDI + 0x18]         ; 00441b06
    ADD EAX,EBX                         ; 00441b09
    ADC EDX,ECX                         ; 00441b0b
    SHRD EAX,EDX,0x10                   ; 00441b0d
    MOV EDI,dword ptr [ESP + 0x28]      ; 00441b11
    MOV ESI,ESP                         ; 00441b15
    ADD EDI,0x1a4                       ; 00441b17
    MOV dword ptr [ESP + 0x10],EAX      ; 00441b1d
    MOV EAX,dword ptr [ESI]             ; 00441b21
    IMUL dword ptr [EDI]                ; 00441b23
    MOV EBX,EAX                         ; 00441b25
    MOV ECX,EDX                         ; 00441b27
    MOV EAX,dword ptr [ESI + 0x4]       ; 00441b29
    IMUL dword ptr [EDI + 0xc]          ; 00441b2c
    ADD EBX,EAX                         ; 00441b2f
    ADC ECX,EDX                         ; 00441b31
    MOV EAX,dword ptr [ESI + 0x8]       ; 00441b33
    IMUL dword ptr [EDI + 0x18]         ; 00441b36
    ADD EAX,EBX                         ; 00441b39
    ADC EDX,ECX                         ; 00441b3b
    SHRD EAX,EDX,0x10                   ; 00441b3d
    MOV dword ptr [ESP + 0x14],EAX      ; 00441b41
    LEA ESI,[ESP + 0xc]                 ; 00441b45
    MOV EDI,EBP                         ; 00441b49
    MOVSD ES:EDI,ESI                    ; 00441b4b
    MOVSD ES:EDI,ESI                    ; 00441b4c
    MOVSD ES:EDI,ESI                    ; 00441b4d
    MOV EAX,EBP                         ; 00441b4e
    ADD ESP,0x18                        ; 00441b50
    POP EBP                             ; 00441b53
    POP EDI                             ; 00441b54
    POP EBX                             ; 00441b55
    RET                                 ; 00441b56
    MOV ECX,dword ptr [ESP + 0x28]      ; 00441b57
        ;   Label: LAB_00441b57
    SHL EAX,0x2                         ; 00441b5b
    ADD ECX,EAX                         ; 00441b5e
    MOV EDX,dword ptr [ESP]             ; 00441b60
    MOV EAX,dword ptr [ECX + 0x136c]    ; 00441b63
    IMUL EDX                            ; 00441b69
    SHRD EAX,EDX,0x10                   ; 00441b6b
    MOV EDX,dword ptr [ESP + 0x4]       ; 00441b6f
    MOV ESI,EAX                         ; 00441b73
    MOV EAX,dword ptr [ECX + 0x13cc]    ; 00441b75
    IMUL EDX                            ; 00441b7b
    SHRD EAX,EDX,0x10                   ; 00441b7d
    MOV EDX,dword ptr [ESP + 0x8]       ; 00441b81
    ADD ESI,EAX                         ; 00441b85
    MOV EAX,dword ptr [ECX + 0x142c]    ; 00441b87
    IMUL EDX                            ; 00441b8d
    SHRD EAX,EDX,0x10                   ; 00441b8f
    MOV EDX,dword ptr [ESP]             ; 00441b93
    ADD ESI,EAX                         ; 00441b96
    MOV EAX,dword ptr [ECX + 0x138c]    ; 00441b98
    MOV dword ptr [ESP + 0xc],ESI       ; 00441b9e
    IMUL EDX                            ; 00441ba2
    SHRD EAX,EDX,0x10                   ; 00441ba4
    MOV EDX,dword ptr [ESP + 0x4]       ; 00441ba8
    MOV ESI,EAX                         ; 00441bac
    MOV EAX,dword ptr [ECX + 0x13ec]    ; 00441bae
    IMUL EDX                            ; 00441bb4
    SHRD EAX,EDX,0x10                   ; 00441bb6
    MOV EDX,dword ptr [ESP + 0x8]       ; 00441bba
    ADD ESI,EAX                         ; 00441bbe
    MOV EAX,dword ptr [ECX + 0x144c]    ; 00441bc0
    IMUL EDX                            ; 00441bc6
    SHRD EAX,EDX,0x10                   ; 00441bc8
    MOV EDX,dword ptr [ESP]             ; 00441bcc
    ADD ESI,EAX                         ; 00441bcf
    MOV EAX,dword ptr [ECX + 0x13ac]    ; 00441bd1
    MOV dword ptr [ESP + 0x10],ESI      ; 00441bd7
    IMUL EDX                            ; 00441bdb
    SHRD EAX,EDX,0x10                   ; 00441bdd
    MOV EDX,dword ptr [ESP + 0x4]       ; 00441be1
    MOV ESI,EAX                         ; 00441be5
    MOV EAX,dword ptr [ECX + 0x140c]    ; 00441be7
    IMUL EDX                            ; 00441bed
    SHRD EAX,EDX,0x10                   ; 00441bef
    MOV EDX,dword ptr [ESP + 0x8]       ; 00441bf3
    ADD ESI,EAX                         ; 00441bf7
    MOV EAX,dword ptr [ECX + 0x146c]    ; 00441bf9
    IMUL EDX                            ; 00441bff
    SHRD EAX,EDX,0x10                   ; 00441c01
    ADD ESI,EAX                         ; 00441c05
    MOV dword ptr [ESP + 0x14],ESI      ; 00441c07
    LEA ESI,[ESP + 0xc]                 ; 00441c0b
    MOV EDI,EBP                         ; 00441c0f
    MOVSD ES:EDI,ESI                    ; 00441c11
    MOVSD ES:EDI,ESI                    ; 00441c12
    MOVSD ES:EDI,ESI                    ; 00441c13
    MOV EAX,EBP                         ; 00441c14
    ADD ESP,0x18                        ; 00441c16
    POP EBP                             ; 00441c19
    POP EDI                             ; 00441c1a
    POP EBX                             ; 00441c1b
    RET                                 ; 00441c1c


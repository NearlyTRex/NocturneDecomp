; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_drawShadowDepthBuffer_FUN_0045fb40(CDemonLight *this_ptr,int screen_x,int screen_y,int brightness_offset)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   screen_x
; int              Stack[0xc]:4   screen_y
; int              Stack[0x10]:4   brightness_offset
; Local Variables:
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
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
; XREF[1]:
;   core_set.cpp_FUN_005365c0 at 005368c7
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba20
;   undefined4 DAT_01b4b6b4
;   undefined4 DAT_01b4b6b8
;   undefined4 DAT_01b4b6bc
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;   undefined4 DAT_01c6af74
;   undefined4 DAT_01c6af78
;   undefined4 DAT_01c6af80
;   undefined4 DAT_01c6af84
;   undefined4 DAT_01c6af8c
;   undefined4 DAT_01c6af90
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   crt_stdlib.c_rand_FUN_005a35cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045fb40
        ;   Label: core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_0045fb40
    PUSH ESI                            ; 0045fb41
    PUSH EDI                            ; 0045fb42
    PUSH EBP                            ; 0045fb43
    SUB ESP,0x34                        ; 0045fb44
    MOV EBP,dword ptr [ESP + 0x54]      ; 0045fb47
    XOR ESI,ESI                         ; 0045fb4b
    XOR EBX,EBX                         ; 0045fb4d
    MOV dword ptr [0x01b4b6b4],ESI      ; 0045fb4f | DAT_01b4b6b4
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 0045fb55
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
        ;   Label: LAB_0045fb55
    AND EAX,0x1f                        ; 0045fb5a
    ADD EBX,0x4                         ; 0045fb5d
    SUB EAX,0x10                        ; 0045fb60
    MOV dword ptr [EBX + 0x1b4b6b4],EAX ; 0045fb63
    CMP EBX,0x190                       ; 0045fb69
    JNZ 0x0045fb55                      ; 0045fb6f
        ;   XREF to: 0045fb55 (CONDITIONAL_JUMP)  ; LAB_0045fb55
    MOV EDX,dword ptr [0x005fba1c]      ; 0045fb71 | DAT_005fba1c
    XOR EBX,EBX                         ; 0045fb77
    TEST EDX,EDX                        ; 0045fb79
    JLE 0x0045fbc0                      ; 0045fb7b
        ;   XREF to: 0045fbc0 (CONDITIONAL_JUMP)  ; LAB_0045fbc0
    XOR EDI,EDI                         ; 0045fb7d
    MOV EDX,dword ptr [0x005fba18]      ; 0045fb7f | DAT_005fba18
        ;   Label: LAB_0045fb7f
    MOV ECX,dword ptr [0x005fba20]      ; 0045fb85 | DAT_005fba20
    IMUL EDX,ECX                        ; 0045fb8b
    MOV EAX,EDX                         ; 0045fb8e
    SAR EDX,0x1f                        ; 0045fb90
    SHL EDX,0x3                         ; 0045fb93
    SBB EAX,EDX                         ; 0045fb96
    SAR EAX,0x3                         ; 0045fb98
    PUSH EAX                            ; 0045fb9b
    PUSH 0x0                            ; 0045fb9c
    MOV EAX,dword ptr [EDI + 0x1c5faec] ; 0045fb9e | DAT_01c5faec | DAT_01c5faf0
    PUSH EAX                            ; 0045fba4
    ADD EDI,0x4                         ; 0045fba5
    INC EBX                             ; 0045fba8
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0045fba9
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    MOV EDX,dword ptr [0x005fba1c]      ; 0045fbae | DAT_005fba1c
    ADD ESP,0xc                         ; 0045fbb4
    CMP EBX,EDX                         ; 0045fbb7
    JL 0x0045fb7f                       ; 0045fbb9
        ;   XREF to: 0045fb7f (CONDITIONAL_JUMP)  ; LAB_0045fb7f
    LEA EAX,[EAX]                       ; 0045fbbb
    MOV ECX,ECX                         ; 0045fbbe
    MOV ECX,dword ptr [0x005fba20]      ; 0045fbc0 | DAT_005fba20
        ;   Label: LAB_0045fbc0
    MOV ESI,dword ptr [0x01b4b6b4]      ; 0045fbc6 | DAT_01b4b6b4
    CMP ECX,0x20                        ; 0045fbcc
    JNZ 0x0045fd73                      ; 0045fbcf
        ;   XREF to: 0045fd73 (CONDITIONAL_JUMP)  ; LAB_0045fd73
    XOR EAX,EAX                         ; 0045fbd5
    MOV dword ptr [ESP + 0x14],EAX      ; 0045fbd7
    MOV EAX,dword ptr [ESP + 0x48]      ; 0045fbdb
    CMP dword ptr [EAX + 0x1cc4],0x0    ; 0045fbdf
    JLE 0x0045fc2e                      ; 0045fbe6
        ;   XREF to: 0045fc2e (CONDITIONAL_JUMP)  ; LAB_0045fc2e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0045fbe8
    SHL EAX,0x2                         ; 0045fbec
    MOV dword ptr [ESP + 0xc],EAX       ; 0045fbef
    CMP dword ptr [0x005fba1c],0xf0     ; 0045fbf3 | DAT_005fba1c
        ;   Label: LAB_0045fbf3
    JLE 0x0045fc3c                      ; 0045fbfd
        ;   XREF to: 0045fc3c (CONDITIONAL_JUMP)  ; LAB_0045fc3c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045fbff
    MOV ECX,dword ptr [ESP + 0x50]      ; 0045fc03
    ADD EAX,EAX                         ; 0045fc07
    ADD EAX,ECX                         ; 0045fc09
    TEST EAX,EAX                        ; 0045fc0b
        ;   Label: LAB_0045fc0b
    JL 0x0045fc17                       ; 0045fc0d
        ;   XREF to: 0045fc17 (CONDITIONAL_JUMP)  ; LAB_0045fc17
    CMP EAX,dword ptr [0x005fba1c]      ; 0045fc0f | DAT_005fba1c
    JL 0x0045fc46                       ; 0045fc15
        ;   XREF to: 0045fc46 (CONDITIONAL_JUMP)  ; LAB_0045fc46
    MOV EBX,dword ptr [ESP + 0x14]      ; 0045fc17
        ;   Label: LAB_0045fc17
    MOV EDX,dword ptr [ESP + 0x48]      ; 0045fc1b
    INC EBX                             ; 0045fc1f
    MOV EDI,dword ptr [EDX + 0x1cc4]    ; 0045fc20
    MOV dword ptr [ESP + 0x14],EBX      ; 0045fc26
    CMP EBX,EDI                         ; 0045fc2a
    JL 0x0045fbf3                       ; 0045fc2c
        ;   XREF to: 0045fbf3 (CONDITIONAL_JUMP)  ; LAB_0045fbf3
    MOV dword ptr [0x01b4b6b4],ESI      ; 0045fc2e | DAT_01b4b6b4
        ;   Label: LAB_0045fc2e
    ADD ESP,0x34                        ; 0045fc34
    POP EBP                             ; 0045fc37
    POP EDI                             ; 0045fc38
    POP ESI                             ; 0045fc39
    POP EBX                             ; 0045fc3a
    RET                                 ; 0045fc3b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045fc3c
        ;   Label: LAB_0045fc3c
    ADD EAX,dword ptr [ESP + 0x50]      ; 0045fc40
    JMP 0x0045fc0b                      ; 0045fc44
        ;   XREF to: 0045fc0b (UNCONDITIONAL_JUMP)  ; LAB_0045fc0b
    MOV EDX,dword ptr [ESP + 0x48]      ; 0045fc46
        ;   Label: LAB_0045fc46
    MOV EDI,dword ptr [EAX*0x4 + 0x1c5faec] ; 0045fc4a | DAT_01c5faec
    MOV EAX,dword ptr [ESP + 0xc]       ; 0045fc51
    MOV ECX,dword ptr [EDX + 0x1cc0]    ; 0045fc55
    ADD EDI,EAX                         ; 0045fc5b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045fc5d
    IMUL EAX,ECX                        ; 0045fc61
    LEA EDX,[EAX + EAX*0x1]             ; 0045fc64
    MOV EAX,dword ptr [ESP + 0x48]      ; 0045fc67
    MOV EAX,dword ptr [EAX + 0x2f94]    ; 0045fc6b
    ADD EAX,EDX                         ; 0045fc71
    XOR EBX,EBX                         ; 0045fc73
    MOV dword ptr [ESP + 0x2c],EAX      ; 0045fc75
    MOV EAX,dword ptr [ESP + 0x48]      ; 0045fc79
    MOV dword ptr [ESP + 0x20],EBX      ; 0045fc7d
    MOV EDX,dword ptr [EAX + 0x1cc0]    ; 0045fc81
    MOV dword ptr [ESP + 0x24],EBX      ; 0045fc87
    TEST EDX,EDX                        ; 0045fc8b
    JLE 0x0045fc17                      ; 0045fc8d
        ;   XREF to: 0045fc17 (CONDITIONAL_JUMP)  ; LAB_0045fc17
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0045fc8f
        ;   Label: LAB_0045fc8f
    XOR EBX,EBX                         ; 0045fc93
    MOV BX,word ptr [EAX]               ; 0045fc95
    TEST EBX,EBX                        ; 0045fc98
    JZ 0x0045fd24                       ; 0045fc9a
        ;   XREF to: 0045fd24 (CONDITIONAL_JUMP)  ; LAB_0045fd24
    SHR EBX,0x6                         ; 0045fca0
    MOV EAX,dword ptr [ESI*0x4 + 0x1b4b6b8] ; 0045fca3 | DAT_01b4b6b8 | DAT_01b4b6bc
    INC ESI                             ; 0045fcaa
    ADD EBX,EAX                         ; 0045fcab
    CMP ESI,0x64                        ; 0045fcad
    JL 0x0045fcb4                       ; 0045fcb0
        ;   XREF to: 0045fcb4 (CONDITIONAL_JUMP)  ; LAB_0045fcb4
    XOR ESI,ESI                         ; 0045fcb2
    CMP EBX,0x7f                        ; 0045fcb4
        ;   Label: LAB_0045fcb4
    JBE 0x0045fcbe                      ; 0045fcb7
        ;   XREF to: 0045fcbe (CONDITIONAL_JUMP)  ; LAB_0045fcbe
    MOV EBX,0x7f                        ; 0045fcb9
    XOR BL,0x7f                         ; 0045fcbe
        ;   Label: LAB_0045fcbe
    TEST EBP,EBP                        ; 0045fcc1
    JLE 0x0045fcd4                      ; 0045fcc3
        ;   XREF to: 0045fcd4 (CONDITIONAL_JUMP)  ; LAB_0045fcd4
    ADD EBX,EBP                         ; 0045fcc5
    CMP EBX,0xff                        ; 0045fcc7
    JBE 0x0045fcd4                      ; 0045fccd
        ;   XREF to: 0045fcd4 (CONDITIONAL_JUMP)  ; LAB_0045fcd4
    MOV EBX,0xff                        ; 0045fccf
    ADD EBX,dword ptr [ESP + 0x20]      ; 0045fcd4
        ;   Label: LAB_0045fcd4
    SHR EBX,0x1                         ; 0045fcd8
    MOV dword ptr [ESP + 0x20],EBX      ; 0045fcda
    LEA EAX,[EBX + EBX*0x1]             ; 0045fcde
    ADD EAX,EBX                         ; 0045fce1
    MOV ECX,dword ptr [0x005fba20]      ; 0045fce3 | DAT_005fba20
    SHR EAX,0x2                         ; 0045fce9
    CMP ECX,0x20                        ; 0045fcec
    JNZ 0x0045fd60                      ; 0045fcef
        ;   XREF to: 0045fd60 (CONDITIONAL_JUMP)  ; LAB_0045fd60
    MOV CL,byte ptr [0x01c6af74]        ; 0045fcf1 | DAT_01c6af74
    MOV EDX,EAX                         ; 0045fcf7
    SHL EDX,CL                          ; 0045fcf9
    MOV CL,byte ptr [0x01c6af80]        ; 0045fcfb | DAT_01c6af80
    SHL EAX,CL                          ; 0045fd01
    MOV CL,byte ptr [0x01c6af8c]        ; 0045fd03 | DAT_01c6af8c
    SHL EBX,CL                          ; 0045fd09
    OR EAX,EDX                          ; 0045fd0b
    MOV ECX,EBX                         ; 0045fd0d
    OR ECX,EAX                          ; 0045fd0f
    MOV EBX,dword ptr [0x005fba18]      ; 0045fd11 | DAT_005fba18
        ;   Label: LAB_0045fd11
    MOV dword ptr [EDI],ECX             ; 0045fd17
    CMP EBX,0x140                       ; 0045fd19
    JLE 0x0045fd24                      ; 0045fd1f
        ;   XREF to: 0045fd24 (CONDITIONAL_JUMP)  ; LAB_0045fd24
    MOV dword ptr [EDI + 0x4],ECX       ; 0045fd21
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0045fd24
        ;   Label: LAB_0045fd24
    ADD EAX,0x2                         ; 0045fd28
    MOV EDX,dword ptr [0x005fba18]      ; 0045fd2b | DAT_005fba18
    MOV dword ptr [ESP + 0x2c],EAX      ; 0045fd31
    CMP EDX,0x140                       ; 0045fd35
    JLE 0x0045fd6e                      ; 0045fd3b
        ;   XREF to: 0045fd6e (CONDITIONAL_JUMP)  ; LAB_0045fd6e
    ADD EDI,0x8                         ; 0045fd3d
    MOV ECX,dword ptr [ESP + 0x24]      ; 0045fd40
        ;   Label: LAB_0045fd40
    MOV EDX,dword ptr [ESP + 0x48]      ; 0045fd44
    INC ECX                             ; 0045fd48
    MOV EBX,dword ptr [EDX + 0x1cc0]    ; 0045fd49
    MOV dword ptr [ESP + 0x24],ECX      ; 0045fd4f
    CMP ECX,EBX                         ; 0045fd53
    JGE 0x0045fc17                      ; 0045fd55
        ;   XREF to: 0045fc17 (CONDITIONAL_JUMP)  ; LAB_0045fc17
    JMP 0x0045fc8f                      ; 0045fd5b
        ;   XREF to: 0045fc8f (UNCONDITIONAL_JUMP)  ; LAB_0045fc8f
    MOV ECX,EAX                         ; 0045fd60
        ;   Label: LAB_0045fd60
    SHL EAX,0x8                         ; 0045fd62
    SHL ECX,0x10                        ; 0045fd65
    OR ECX,EAX                          ; 0045fd68
    OR ECX,EBX                          ; 0045fd6a
    JMP 0x0045fd11                      ; 0045fd6c
        ;   XREF to: 0045fd11 (UNCONDITIONAL_JUMP)  ; LAB_0045fd11
    ADD EDI,0x4                         ; 0045fd6e
        ;   Label: LAB_0045fd6e
    JMP 0x0045fd40                      ; 0045fd71
        ;   XREF to: 0045fd40 (UNCONDITIONAL_JUMP)  ; LAB_0045fd40
    MOV EAX,dword ptr [ESP + 0x48]      ; 0045fd73
        ;   Label: LAB_0045fd73
    XOR EBX,EBX                         ; 0045fd77
    MOV EDI,dword ptr [EAX + 0x1cc4]    ; 0045fd79
    MOV dword ptr [ESP + 0x18],EBX      ; 0045fd7f
    TEST EDI,EDI                        ; 0045fd83
    JLE 0x0045fc2e                      ; 0045fd85
        ;   XREF to: 0045fc2e (CONDITIONAL_JUMP)  ; LAB_0045fc2e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0045fd8b
    ADD EAX,EAX                         ; 0045fd8f
    MOV dword ptr [ESP + 0x10],EAX      ; 0045fd91
    CMP dword ptr [0x005fba1c],0xf0     ; 0045fd95 | DAT_005fba1c
        ;   Label: LAB_0045fd95
    JLE 0x0045fdd6                      ; 0045fd9f
        ;   XREF to: 0045fdd6 (CONDITIONAL_JUMP)  ; LAB_0045fdd6
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045fda1
    MOV ECX,dword ptr [ESP + 0x50]      ; 0045fda5
    ADD EAX,EAX                         ; 0045fda9
    ADD EAX,ECX                         ; 0045fdab
    TEST EAX,EAX                        ; 0045fdad
        ;   Label: LAB_0045fdad
    JL 0x0045fdb9                       ; 0045fdaf
        ;   XREF to: 0045fdb9 (CONDITIONAL_JUMP)  ; LAB_0045fdb9
    CMP EAX,dword ptr [0x005fba1c]      ; 0045fdb1 | DAT_005fba1c
    JL 0x0045fde0                       ; 0045fdb7
        ;   XREF to: 0045fde0 (CONDITIONAL_JUMP)  ; LAB_0045fde0
    MOV ECX,dword ptr [ESP + 0x18]      ; 0045fdb9
        ;   Label: LAB_0045fdb9
    MOV EDX,dword ptr [ESP + 0x48]      ; 0045fdbd
    INC ECX                             ; 0045fdc1
    MOV EBX,dword ptr [EDX + 0x1cc4]    ; 0045fdc2
    MOV dword ptr [ESP + 0x18],ECX      ; 0045fdc8
    CMP ECX,EBX                         ; 0045fdcc
    JGE 0x0045fc2e                      ; 0045fdce
        ;   XREF to: 0045fc2e (CONDITIONAL_JUMP)  ; LAB_0045fc2e
    JMP 0x0045fd95                      ; 0045fdd4
        ;   XREF to: 0045fd95 (UNCONDITIONAL_JUMP)  ; LAB_0045fd95
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045fdd6
        ;   Label: LAB_0045fdd6
    ADD EAX,dword ptr [ESP + 0x50]      ; 0045fdda
    JMP 0x0045fdad                      ; 0045fdde
        ;   XREF to: 0045fdad (UNCONDITIONAL_JUMP)  ; LAB_0045fdad
    MOV EDX,dword ptr [ESP + 0x48]      ; 0045fde0
        ;   Label: LAB_0045fde0
    MOV EDI,dword ptr [EAX*0x4 + 0x1c5faec] ; 0045fde4 | DAT_01c5faec
    MOV EAX,dword ptr [ESP + 0x10]      ; 0045fdeb
    MOV ECX,dword ptr [EDX + 0x1cc0]    ; 0045fdef
    ADD EDI,EAX                         ; 0045fdf5
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045fdf7
    IMUL EAX,ECX                        ; 0045fdfb
    MOV EDX,dword ptr [EDX + 0x2f94]    ; 0045fdfe
    ADD EAX,EAX                         ; 0045fe04
    XOR EBX,EBX                         ; 0045fe06
    ADD EDX,EAX                         ; 0045fe08
    MOV EAX,dword ptr [ESP + 0x48]      ; 0045fe0a
    MOV dword ptr [ESP + 0x1c],EBX      ; 0045fe0e
    MOV dword ptr [ESP + 0x30],EDX      ; 0045fe12
    MOV EDX,dword ptr [EAX + 0x1cc0]    ; 0045fe16
    MOV dword ptr [ESP + 0x28],EBX      ; 0045fe1c
    TEST EDX,EDX                        ; 0045fe20
    JLE 0x0045fdb9                      ; 0045fe22
        ;   XREF to: 0045fdb9 (CONDITIONAL_JUMP)  ; LAB_0045fdb9
    MOV EAX,dword ptr [ESP + 0x30]      ; 0045fe24
        ;   Label: LAB_0045fe24
    XOR EBX,EBX                         ; 0045fe28
    MOV BX,word ptr [EAX]               ; 0045fe2a
    TEST EBX,EBX                        ; 0045fe2d
    JZ 0x0045feee                       ; 0045fe2f
        ;   XREF to: 0045feee (CONDITIONAL_JUMP)  ; LAB_0045feee
    SHR EBX,0x6                         ; 0045fe35
    MOV EAX,dword ptr [ESI*0x4 + 0x1b4b6b8] ; 0045fe38 | DAT_01b4b6b8 | DAT_01b4b6bc
    INC ESI                             ; 0045fe3f
    ADD EBX,EAX                         ; 0045fe40
    CMP ESI,0x64                        ; 0045fe42
    JL 0x0045fe49                       ; 0045fe45
        ;   XREF to: 0045fe49 (CONDITIONAL_JUMP)  ; LAB_0045fe49
    XOR ESI,ESI                         ; 0045fe47
    CMP EBX,0x7f                        ; 0045fe49
        ;   Label: LAB_0045fe49
    JBE 0x0045fe53                      ; 0045fe4c
        ;   XREF to: 0045fe53 (CONDITIONAL_JUMP)  ; LAB_0045fe53
    MOV EBX,0x7f                        ; 0045fe4e
    XOR BL,0x7f                         ; 0045fe53
        ;   Label: LAB_0045fe53
    TEST EBP,EBP                        ; 0045fe56
    JLE 0x0045fe69                      ; 0045fe58
        ;   XREF to: 0045fe69 (CONDITIONAL_JUMP)  ; LAB_0045fe69
    ADD EBX,EBP                         ; 0045fe5a
    CMP EBX,0xff                        ; 0045fe5c
    JBE 0x0045fe69                      ; 0045fe62
        ;   XREF to: 0045fe69 (CONDITIONAL_JUMP)  ; LAB_0045fe69
    MOV EBX,0xff                        ; 0045fe64
    ADD EBX,dword ptr [ESP + 0x1c]      ; 0045fe69
        ;   Label: LAB_0045fe69
    SHR EBX,0x1                         ; 0045fe6d
    MOV dword ptr [ESP + 0x1c],EBX      ; 0045fe6f
    LEA ECX,[EBX + EBX*0x1]             ; 0045fe73
    ADD ECX,EBX                         ; 0045fe76
    SHR ECX,0x2                         ; 0045fe78
    XOR EDX,EDX                         ; 0045fe7b
    MOV EAX,ECX                         ; 0045fe7d
    DIV dword ptr [0x01c6af78]          ; 0045fe7f | DAT_01c6af78
    MOV dword ptr [ESP],ECX             ; 0045fe85
    MOV dword ptr [ESP + 0x4],ECX       ; 0045fe88
    MOV dword ptr [ESP],EAX             ; 0045fe8c
    XOR EDX,EDX                         ; 0045fe8f
    MOV EAX,ECX                         ; 0045fe91
    DIV dword ptr [0x01c6af84]          ; 0045fe93 | DAT_01c6af84
    MOV dword ptr [ESP + 0x8],EBX       ; 0045fe99
    MOV dword ptr [ESP + 0x4],EAX       ; 0045fe9d
    XOR EDX,EDX                         ; 0045fea1
    MOV EAX,EBX                         ; 0045fea3
    DIV dword ptr [0x01c6af90]          ; 0045fea5 | DAT_01c6af90
    MOV CL,byte ptr [0x01c6af74]        ; 0045feab | DAT_01c6af74
    MOV EBX,dword ptr [ESP]             ; 0045feb1
    MOV dword ptr [ESP + 0x8],EAX       ; 0045feb4
    MOV EAX,dword ptr [ESP + 0x4]       ; 0045feb8
    SHL EBX,CL                          ; 0045febc
    MOV CL,byte ptr [0x01c6af80]        ; 0045febe | DAT_01c6af80
    SHL EAX,CL                          ; 0045fec4
    MOV CL,byte ptr [0x01c6af8c]        ; 0045fec6 | DAT_01c6af8c
    OR EBX,EAX                          ; 0045fecc
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045fece
    SHL EAX,CL                          ; 0045fed2
    OR EAX,EBX                          ; 0045fed4
    XOR EBX,EBX                         ; 0045fed6
    MOV word ptr [EDI],AX               ; 0045fed8
    MOV BX,AX                           ; 0045fedb
    CMP dword ptr [0x005fba18],0x140    ; 0045fede | DAT_005fba18
    JLE 0x0045feee                      ; 0045fee8
        ;   XREF to: 0045feee (CONDITIONAL_JUMP)  ; LAB_0045feee
    MOV word ptr [EDI + 0x2],BX         ; 0045feea
    MOV EDX,dword ptr [ESP + 0x30]      ; 0045feee
        ;   Label: LAB_0045feee
    ADD EDX,0x2                         ; 0045fef2
    MOV ECX,dword ptr [0x005fba18]      ; 0045fef5 | DAT_005fba18
    MOV dword ptr [ESP + 0x30],EDX      ; 0045fefb
    CMP ECX,0x140                       ; 0045feff
    JLE 0x0045ff2a                      ; 0045ff05
        ;   XREF to: 0045ff2a (CONDITIONAL_JUMP)  ; LAB_0045ff2a
    ADD EDI,0x4                         ; 0045ff07
    MOV ECX,dword ptr [ESP + 0x28]      ; 0045ff0a
        ;   Label: LAB_0045ff0a
    MOV EDX,dword ptr [ESP + 0x48]      ; 0045ff0e
    INC ECX                             ; 0045ff12
    MOV EBX,dword ptr [EDX + 0x1cc0]    ; 0045ff13
    MOV dword ptr [ESP + 0x28],ECX      ; 0045ff19
    CMP ECX,EBX                         ; 0045ff1d
    JGE 0x0045fdb9                      ; 0045ff1f
        ;   XREF to: 0045fdb9 (CONDITIONAL_JUMP)  ; LAB_0045fdb9
    JMP 0x0045fe24                      ; 0045ff25
        ;   XREF to: 0045fe24 (UNCONDITIONAL_JUMP)  ; LAB_0045fe24
    ADD EDI,0x2                         ; 0045ff2a
        ;   Label: LAB_0045ff2a
    JMP 0x0045ff0a                      ; 0045ff2d
        ;   XREF to: 0045ff0a (UNCONDITIONAL_JUMP)  ; LAB_0045ff0a


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_box_cpp_FUN_0041aa20(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined        Stack[-0x4c]:1  local_4c
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
;   core_box.cpp_FUN_0041a840 at 0041a851
;
; Referenced Globals:
;   undefined4 DAT_005f39d8
;   undefined4 DAT_0060b27c
;   undefined4 DAT_0060b280
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   core_box.cpp_FUN_0041a600
;   core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041aa20
        ;   Label: core_box.cpp_FUN_0041aa20
    PUSH ESI                            ; 0041aa21
    PUSH EDI                            ; 0041aa22
    PUSH EBP                            ; 0041aa23
    SUB ESP,0x70                        ; 0041aa24
    MOV EDX,0xff                        ; 0041aa27
    XOR ECX,ECX                         ; 0041aa2c
    XOR EBP,EBP                         ; 0041aa2e
    MOV dword ptr [ESP + 0x64],ECX      ; 0041aa30
    MOV dword ptr [ESP + 0x6c],ECX      ; 0041aa34
    MOV dword ptr [ESP + 0x68],EDX      ; 0041aa38
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0041aa3c
        ;   Label: LAB_0041aa3c
    PUSH ESI                            ; 0041aa40
    MOV EDI,dword ptr [ESP + 0x88]      ; 0041aa41
    PUSH EDI                            ; 0041aa48
    LEA ESI,[ESP + 0x3c]                ; 0041aa49
    CALL core_box.cpp_FUN_0041a600      ; 0041aa4d
        ;   XREF to: 0041a600 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a600()
    LEA EDI,[ESP + 0x48]                ; 0041aa52
    LEA ESI,[ESP + 0x3c]                ; 0041aa56
    ADD ESP,0x8                         ; 0041aa5a
    LEA EBX,[ESP + 0x58]                ; 0041aa5d
    MOVSD ES:EDI,ESI                    ; 0041aa61
    MOVSD ES:EDI,ESI                    ; 0041aa62
    MOVSD ES:EDI,ESI                    ; 0041aa63
    LEA EAX,[ESP + 0x40]                ; 0041aa64
    MOV ESI,dword ptr [0x0060b27c]      ; 0041aa68 | DAT_0060b27c
    FLD float ptr [EAX]                 ; 0041aa6e
    FMUL float ptr [0x005f39d8]         ; 0041aa70 | DAT_005f39d8
    FISTP dword ptr [EBX]               ; 0041aa76
    FLD float ptr [EAX + 0x4]           ; 0041aa78
    FMUL float ptr [0x005f39d8]         ; 0041aa7b | DAT_005f39d8
    FISTP dword ptr [EBX + 0x4]         ; 0041aa81
    FLD float ptr [EAX + 0x8]           ; 0041aa84
    FMUL float ptr [0x005f39d8]         ; 0041aa87 | DAT_005f39d8
    FISTP dword ptr [EBX + 0x8]         ; 0041aa8d
    LEA EAX,[ESP + 0x58]                ; 0041aa90
    PUSH EAX                            ; 0041aa94
    MOV EAX,dword ptr [ESI]             ; 0041aa95 | DAT_01ba5c50
    ADD EAX,EBP                         ; 0041aa97
    PUSH EAX                            ; 0041aa99
    CALL engine_special.cpp_FUN_0055d723 ; 0041aa9a
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 0041aa9f | DAT_0060b280
    MOV EAX,dword ptr [EAX]             ; 0041aaa4 | DAT_01ba5c50
    MOV DL,byte ptr [EAX + EBP*0x1 + 0x13] ; 0041aaa6
    ADD ESP,0x8                         ; 0041aaaa
    TEST DL,0x80                        ; 0041aaad
    JNZ 0x0041ae18                      ; 0041aab0
        ;   XREF to: 0041ae18 (CONDITIONAL_JUMP)  ; LAB_0041ae18
    XOR EAX,EAX                         ; 0041aab6
    MOV dword ptr [ESP + 0x68],EAX      ; 0041aab8
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0041aabc
        ;   Label: LAB_0041aabc
    INC EBX                             ; 0041aac0
    ADD EBP,0x30                        ; 0041aac1
    MOV dword ptr [ESP + 0x6c],EBX      ; 0041aac4
    CMP EBX,0x8                         ; 0041aac8
    JL 0x0041aa3c                       ; 0041aacb
        ;   XREF to: 0041aa3c (CONDITIONAL_JUMP)  ; LAB_0041aa3c
    MOV EDI,dword ptr [ESP + 0x68]      ; 0041aad1
    TEST EDI,EDI                        ; 0041aad5
    JNZ 0x0041ae3b                      ; 0041aad7
        ;   XREF to: 0041ae3b (CONDITIONAL_JUMP)  ; LAB_0041ae3b
    MOV EBP,dword ptr [ESP + 0x64]      ; 0041aadd
    PUSH EBP                            ; 0041aae1
    MOV EAX,[0x0060b280]                ; 0041aae2 | DAT_0060b280
    PUSH EAX                            ; 0041aae7 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920 ; 0041aae8
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0041aaed
    PUSH EDI                            ; 0041aaf0
    MOV ECX,dword ptr [0x0060b280]      ; 0041aaf1 | DAT_0060b280
    MOV EDX,0x4                         ; 0041aaf7
    PUSH ECX                            ; 0041aafc | DAT_01ba5c50
    MOV dword ptr [ESP + 0xc],EDX       ; 0041aafd
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870 ; 0041ab01
        ;   XREF to: 0046b870 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0041ab06
    LEA EBX,[ESP + 0x4c]                ; 0041ab09
    MOV EAX,dword ptr [ESP + 0x84]      ; 0041ab0d
    MOV ESI,0x1                         ; 0041ab14
    FLD float ptr [EAX]                 ; 0041ab19
    FMUL float ptr [0x005f39d8]         ; 0041ab1b | DAT_005f39d8
    FISTP dword ptr [EBX]               ; 0041ab21
    FLD float ptr [EAX + 0x4]           ; 0041ab23
    FMUL float ptr [0x005f39d8]         ; 0041ab26 | DAT_005f39d8
    FISTP dword ptr [EBX + 0x4]         ; 0041ab2c
    FLD float ptr [EAX + 0x8]           ; 0041ab2f
    FMUL float ptr [0x005f39d8]         ; 0041ab32 | DAT_005f39d8
    FISTP dword ptr [EBX + 0x8]         ; 0041ab38
    LEA EBX,[ESP + 0x28]                ; 0041ab3b
    ADD EAX,0xc                         ; 0041ab3f
    MOV EBP,ESI                         ; 0041ab42
    FLD float ptr [EAX]                 ; 0041ab44
    FMUL float ptr [0x005f39d8]         ; 0041ab46 | DAT_005f39d8
    FISTP dword ptr [EBX]               ; 0041ab4c
    FLD float ptr [EAX + 0x4]           ; 0041ab4e
    FMUL float ptr [0x005f39d8]         ; 0041ab51 | DAT_005f39d8
    FISTP dword ptr [EBX + 0x4]         ; 0041ab57
    FLD float ptr [EAX + 0x8]           ; 0041ab5a
    FMUL float ptr [0x005f39d8]         ; 0041ab5d | DAT_005f39d8
    FISTP dword ptr [EBX + 0x8]         ; 0041ab63
    MOV EBX,0xffffffff                  ; 0041ab66
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041ab6b
    MOV dword ptr [ESP + 0xc],EDI       ; 0041ab6f
    MOV dword ptr [ESP + 0x10],EDI      ; 0041ab73
    MOV dword ptr [ESP + 0x14],EAX      ; 0041ab77
    MOV EDX,EAX                         ; 0041ab7b
    LEA EAX,[ESP + 0x8]                 ; 0041ab7d
    NEG EDX                             ; 0041ab81
    PUSH EAX                            ; 0041ab83
    MOV dword ptr [ESP + 0xc],EBX       ; 0041ab84
    MOV dword ptr [ESP + 0x18],EDX      ; 0041ab88
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0041ab8c
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 0041ab91
    TEST EAX,EAX                        ; 0041ab94
    JZ 0x0041abd2                       ; 0041ab96
        ;   XREF to: 0041abd2 (CONDITIONAL_JUMP)  ; LAB_0041abd2
    MOV EBX,0x4                         ; 0041ab98
    MOV ESI,0x6                         ; 0041ab9d
    MOV EAX,ESP                         ; 0041aba2
    MOV dword ptr [ESP + 0x18],EDI      ; 0041aba4
    MOV EDI,0x2                         ; 0041aba8
    PUSH EAX                            ; 0041abad
    MOV EAX,[0x0061b5a8]                ; 0041abae | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x20],EBX      ; 0041abb3
    PUSH EAX                            ; 0041abb7
    MOV dword ptr [ESP + 0x28],ESI      ; 0041abb8
    MOV dword ptr [ESP + 0x2c],EDI      ; 0041abbc
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610 ; 0041abc0
        ;   XREF to: 00534610 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0041abc5
    TEST EAX,EAX                        ; 0041abc8
    JNZ 0x0041adec                      ; 0041abca
        ;   XREF to: 0041adec (CONDITIONAL_JUMP)  ; LAB_0041adec
    XOR ESI,ESI                         ; 0041abd0
    MOV EDX,0x1                         ; 0041abd2
        ;   Label: LAB_0041abd2
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041abd7
    XOR ECX,ECX                         ; 0041abdb
    MOV dword ptr [ESP + 0x14],EAX      ; 0041abdd
    LEA EAX,[ESP + 0x8]                 ; 0041abe1
    MOV dword ptr [ESP + 0x8],EDX       ; 0041abe5
    PUSH EAX                            ; 0041abe9
    MOV dword ptr [ESP + 0x10],ECX      ; 0041abea
    MOV dword ptr [ESP + 0x14],ECX      ; 0041abee
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0041abf2
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 0041abf7
    TEST EAX,EAX                        ; 0041abfa
    JZ 0x0041ac3e                       ; 0041abfc
        ;   XREF to: 0041ac3e (CONDITIONAL_JUMP)  ; LAB_0041ac3e
    MOV ESI,0x1                         ; 0041abfe
    MOV EAX,0x7                         ; 0041ac03
    MOV EDI,0x3                         ; 0041ac08
    MOV dword ptr [ESP + 0x20],EAX      ; 0041ac0d
    MOV EAX,ESP                         ; 0041ac11
    MOV EDX,0x5                         ; 0041ac13
    PUSH EAX                            ; 0041ac18
    MOV ECX,dword ptr [0x0061b5a8]      ; 0041ac19 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x1c],ESI      ; 0041ac1f
    PUSH ECX                            ; 0041ac23
    MOV dword ptr [ESP + 0x24],EDI      ; 0041ac24
    MOV dword ptr [ESP + 0x2c],EDX      ; 0041ac28
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610 ; 0041ac2c
        ;   XREF to: 00534610 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0041ac31
    TEST EAX,EAX                        ; 0041ac34
    JNZ 0x0041adec                      ; 0041ac36
        ;   XREF to: 0041adec (CONDITIONAL_JUMP)  ; LAB_0041adec
    XOR ESI,ESI                         ; 0041ac3c
    MOV EDI,0xffffffff                  ; 0041ac3e
        ;   Label: LAB_0041ac3e
    XOR EBX,EBX                         ; 0041ac43
    MOV EAX,dword ptr [ESP + 0x50]      ; 0041ac45
    MOV dword ptr [ESP + 0x8],EBX       ; 0041ac49
    MOV dword ptr [ESP + 0xc],EDI       ; 0041ac4d
    MOV dword ptr [ESP + 0x14],EAX      ; 0041ac51
    MOV EDX,EAX                         ; 0041ac55
    LEA EAX,[ESP + 0x8]                 ; 0041ac57
    NEG EDX                             ; 0041ac5b
    PUSH EAX                            ; 0041ac5d
    MOV dword ptr [ESP + 0x14],EBX      ; 0041ac5e
    MOV dword ptr [ESP + 0x18],EDX      ; 0041ac62
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0041ac66
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 0041ac6b
    TEST EAX,EAX                        ; 0041ac6e
    JZ 0x0041acac                       ; 0041ac70
        ;   XREF to: 0041acac (CONDITIONAL_JUMP)  ; LAB_0041acac
    MOV ESI,0x5                         ; 0041ac72
    MOV EDI,0x4                         ; 0041ac77
    MOV EAX,ESP                         ; 0041ac7c
    MOV dword ptr [ESP + 0x18],EBX      ; 0041ac7e
    MOV EBX,0x1                         ; 0041ac82
    PUSH EAX                            ; 0041ac87
    MOV EAX,[0x0061b5a8]                ; 0041ac88 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x24],ESI      ; 0041ac8d
    PUSH EAX                            ; 0041ac91
    MOV dword ptr [ESP + 0x2c],EDI      ; 0041ac92
    MOV dword ptr [ESP + 0x24],EBX      ; 0041ac96
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610 ; 0041ac9a
        ;   XREF to: 00534610 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0041ac9f
    TEST EAX,EAX                        ; 0041aca2
    JNZ 0x0041adec                      ; 0041aca4
        ;   XREF to: 0041adec (CONDITIONAL_JUMP)  ; LAB_0041adec
    XOR ESI,ESI                         ; 0041acaa
    MOV ECX,0x1                         ; 0041acac
        ;   Label: LAB_0041acac
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0041acb1
    XOR EDX,EDX                         ; 0041acb5
    MOV dword ptr [ESP + 0x14],EAX      ; 0041acb7
    LEA EAX,[ESP + 0x8]                 ; 0041acbb
    MOV dword ptr [ESP + 0x8],EDX       ; 0041acbf
    PUSH EAX                            ; 0041acc3
    MOV dword ptr [ESP + 0x10],ECX      ; 0041acc4
    MOV dword ptr [ESP + 0x14],EDX      ; 0041acc8
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0041accc
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 0041acd1
    TEST EAX,EAX                        ; 0041acd4
    JZ 0x0041ad18                       ; 0041acd6
        ;   XREF to: 0041ad18 (CONDITIONAL_JUMP)  ; LAB_0041ad18
    MOV ESI,0x2                         ; 0041acd8
    MOV EAX,0x7                         ; 0041acdd
    MOV EDI,0x6                         ; 0041ace2
    MOV dword ptr [ESP + 0x20],EAX      ; 0041ace7
    MOV EAX,ESP                         ; 0041aceb
    MOV EDX,0x3                         ; 0041aced
    PUSH EAX                            ; 0041acf2
    MOV ECX,dword ptr [0x0061b5a8]      ; 0041acf3 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x1c],ESI      ; 0041acf9
    PUSH ECX                            ; 0041acfd
    MOV dword ptr [ESP + 0x24],EDI      ; 0041acfe
    MOV dword ptr [ESP + 0x2c],EDX      ; 0041ad02
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610 ; 0041ad06
        ;   XREF to: 00534610 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0041ad0b
    TEST EAX,EAX                        ; 0041ad0e
    JNZ 0x0041adec                      ; 0041ad10
        ;   XREF to: 0041adec (CONDITIONAL_JUMP)  ; LAB_0041adec
    XOR ESI,ESI                         ; 0041ad16
    MOV EAX,0xffffffff                  ; 0041ad18
        ;   Label: LAB_0041ad18
    XOR EBX,EBX                         ; 0041ad1d
    MOV dword ptr [ESP + 0x10],EAX      ; 0041ad1f
    MOV EAX,dword ptr [ESP + 0x54]      ; 0041ad23
    MOV dword ptr [ESP + 0x8],EBX       ; 0041ad27
    MOV dword ptr [ESP + 0x14],EAX      ; 0041ad2b
    MOV EDX,EAX                         ; 0041ad2f
    LEA EAX,[ESP + 0x8]                 ; 0041ad31
    NEG EDX                             ; 0041ad35
    PUSH EAX                            ; 0041ad37
    MOV dword ptr [ESP + 0x10],EBX      ; 0041ad38
    MOV dword ptr [ESP + 0x18],EDX      ; 0041ad3c
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0041ad40
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 0041ad45
    TEST EAX,EAX                        ; 0041ad48
    JZ 0x0041ad82                       ; 0041ad4a
        ;   XREF to: 0041ad82 (CONDITIONAL_JUMP)  ; LAB_0041ad82
    MOV ESI,0x3                         ; 0041ad4c
    MOV EDI,0x1                         ; 0041ad51
    MOV EAX,ESP                         ; 0041ad56
    MOV dword ptr [ESP + 0x18],EBX      ; 0041ad58
    MOV EBX,0x2                         ; 0041ad5c
    PUSH EAX                            ; 0041ad61
    MOV EAX,[0x0061b5a8]                ; 0041ad62 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x24],ESI      ; 0041ad67
    PUSH EAX                            ; 0041ad6b
    MOV dword ptr [ESP + 0x2c],EDI      ; 0041ad6c
    MOV dword ptr [ESP + 0x24],EBX      ; 0041ad70
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610 ; 0041ad74
        ;   XREF to: 00534610 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0041ad79
    TEST EAX,EAX                        ; 0041ad7c
    JNZ 0x0041adec                      ; 0041ad7e
        ;   XREF to: 0041adec (CONDITIONAL_JUMP)  ; LAB_0041adec
    XOR ESI,ESI                         ; 0041ad80
    MOV EBX,0x1                         ; 0041ad82
        ;   Label: LAB_0041ad82
    MOV EAX,dword ptr [ESP + 0x30]      ; 0041ad87
    XOR EDX,EDX                         ; 0041ad8b
    MOV dword ptr [ESP + 0x14],EAX      ; 0041ad8d
    LEA EAX,[ESP + 0x8]                 ; 0041ad91
    MOV dword ptr [ESP + 0x8],EDX       ; 0041ad95
    PUSH EAX                            ; 0041ad99
    MOV dword ptr [ESP + 0x10],EDX      ; 0041ad9a
    MOV dword ptr [ESP + 0x14],EBX      ; 0041ad9e
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0041ada2
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 0041ada7
    TEST EAX,EAX                        ; 0041adaa
    JZ 0x0041adea                       ; 0041adac
        ;   XREF to: 0041adea (CONDITIONAL_JUMP)  ; LAB_0041adea
    MOV ESI,0x4                         ; 0041adae
    MOV EAX,0x7                         ; 0041adb3
    MOV EDI,0x5                         ; 0041adb8
    MOV dword ptr [ESP + 0x20],EAX      ; 0041adbd
    MOV EAX,ESP                         ; 0041adc1
    MOV EDX,0x6                         ; 0041adc3
    PUSH EAX                            ; 0041adc8
    MOV ECX,dword ptr [0x0061b5a8]      ; 0041adc9 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x1c],ESI      ; 0041adcf
    PUSH ECX                            ; 0041add3
    MOV dword ptr [ESP + 0x24],EDI      ; 0041add4
    MOV dword ptr [ESP + 0x2c],EDX      ; 0041add8
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610 ; 0041addc
        ;   XREF to: 00534610 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0041ade1
    TEST EAX,EAX                        ; 0041ade4
    JNZ 0x0041adec                      ; 0041ade6
        ;   XREF to: 0041adec (CONDITIONAL_JUMP)  ; LAB_0041adec
    XOR ESI,ESI                         ; 0041ade8
    MOV EBP,ESI                         ; 0041adea
        ;   Label: LAB_0041adea
    PUSH 0x1                            ; 0041adec
        ;   Label: LAB_0041adec
    MOV EBX,dword ptr [0x0060b280]      ; 0041adee | DAT_0060b280
    PUSH EBX                            ; 0041adf4 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920 ; 0041adf5
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0041adfa
    PUSH 0x1                            ; 0041adfd
    MOV ESI,dword ptr [0x0060b280]      ; 0041adff | DAT_0060b280
    PUSH ESI                            ; 0041ae05 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870 ; 0041ae06
        ;   XREF to: 0046b870 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0041ae0b
    MOV EAX,EBP                         ; 0041ae0e
    ADD ESP,0x70                        ; 0041ae10
    POP EBP                             ; 0041ae13
    POP EDI                             ; 0041ae14
    POP ESI                             ; 0041ae15
    POP EBX                             ; 0041ae16
    RET                                 ; 0041ae17
    MOV EAX,[0x0060b27c]                ; 0041ae18 | DAT_0060b27c
        ;   Label: LAB_0041ae18
    MOV EAX,dword ptr [EAX]             ; 0041ae1d | DAT_01ba5c50
    MOV ECX,dword ptr [ESP + 0x68]      ; 0041ae1f
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0x10] ; 0041ae23
    MOV EDX,0x1                         ; 0041ae27
    AND ECX,EAX                         ; 0041ae2c
    MOV dword ptr [ESP + 0x64],EDX      ; 0041ae2e
    MOV dword ptr [ESP + 0x68],ECX      ; 0041ae32
    JMP 0x0041aabc                      ; 0041ae36
        ;   XREF to: 0041aabc (UNCONDITIONAL_JUMP)  ; LAB_0041aabc
    XOR EAX,EAX                         ; 0041ae3b
        ;   Label: LAB_0041ae3b
    ADD ESP,0x70                        ; 0041ae3d
    POP EBP                             ; 0041ae40
    POP EDI                             ; 0041ae41
    POP ESI                             ; 0041ae42
    POP EBX                             ; 0041ae43
    RET                                 ; 0041ae44


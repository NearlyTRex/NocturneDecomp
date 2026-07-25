; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00437ab0(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00437a60 at 00437a8b
;
; Referenced Globals:
;   double DOUBLE_0057ae3d = 3.14159265350000
;   double DOUBLE_0057ae45 = 0.0833333333333333
;   undefined4 DAT_0059b360
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b6d50
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   FUN_00472de0
;   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_00472490
;   wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437ab0
        ;   Label: FUN_00437ab0
    PUSH ESI                            ; 00437ab1
    PUSH EDI                            ; 00437ab2
    PUSH EBP                            ; 00437ab3
    MOV EBP,ESP                         ; 00437ab4
    SUB ESP,0x58                        ; 00437ab6
    AND ESP,0xfffffff8                  ; 00437ab9
    IMUL EDI,dword ptr [EBP + 0x18],0xac ; 00437abc
    MOV EAX,dword ptr [EBP + 0x14]      ; 00437ac3
    ADD EAX,0x37b50                     ; 00437ac6
    ADD EDI,EAX                         ; 00437acb
    LEA EAX,[ESP + 0x10]                ; 00437acd
    PUSH EAX                            ; 00437ad1
    LEA EAX,[EDI + 0x78]                ; 00437ad2
    PUSH EAX                            ; 00437ad5
    CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0 ; 00437ad6
        ;   XREF to: 0044dbd0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0()
    ADD ESP,0x8                         ; 00437adb
    LEA EAX,[EDI + 0xa0]                ; 00437ade
    PUSH EAX                            ; 00437ae4
    LEA EAX,[ESP + 0x14]                ; 00437ae5
    PUSH EAX                            ; 00437ae9
    MOV ECX,dword ptr [0x005ae704]      ; 00437aea | DAT_005ae704
    PUSH ECX                            ; 00437af0 | DAT_01b4d738
    MOV EBX,0x270                       ; 00437af1
    XOR ESI,ESI                         ; 00437af6
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 00437af8
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0()
    ADD ESP,0xc                         ; 00437afd
    MOV ECX,0xc                         ; 00437b00
    MOV dword ptr [ESP + 0x48],EBX      ; 00437b05
    MOV dword ptr [ESP + 0x4c],ESI      ; 00437b09
    MOV dword ptr [ESP],ESI             ; 00437b0d
    MOV EBX,0xffffffff                  ; 00437b10
    MOV dword ptr [ESP + 0x44],ECX      ; 00437b15
    MOV dword ptr [ESP + 0x50],EBX      ; 00437b19
    MOV EAX,dword ptr [ESP]             ; 00437b1d
        ;   Label: LAB_00437b1d
    MOV dword ptr [ESP + 0x54],EAX      ; 00437b20
    FILD dword ptr [ESP + 0x54]         ; 00437b24
    FMUL double ptr [0x0057ae3d]        ; 00437b28 | DOUBLE_0057ae3d
    FMUL double ptr [0x0057ae45]        ; 00437b2e | DOUBLE_0057ae45
    FLD float ptr [EDI + 0x14]          ; 00437b34
    FLD ST1                             ; 00437b37
    FSIN                                ; 00437b39
    FXCH ST2                            ; 00437b3b
    FCOS                                ; 00437b3d
    FXCH ST2                            ; 00437b3f
    FMULP                               ; 00437b41
    FSTP float ptr [ESP + 0x28]         ; 00437b43
    FMUL float ptr [EDI + 0x18]         ; 00437b47
    LEA EBX,[ESP + 0x4]                 ; 00437b4a
    XOR EAX,EAX                         ; 00437b4e
    MOV EDX,dword ptr [0x005ae704]      ; 00437b50 | DAT_005ae704
    MOV dword ptr [ESP + 0x30],EAX      ; 00437b56
    LEA EAX,[ESP + 0x28]                ; 00437b5a
    FSTP float ptr [ESP + 0x2c]         ; 00437b5e
    FLD float ptr [EAX]                 ; 00437b62
    FMUL float ptr [0x0059b360]         ; 00437b64 | DAT_0059b360
    FISTP dword ptr [EBX]               ; 00437b6a
    FLD float ptr [EAX + 0x4]           ; 00437b6c
    FMUL float ptr [0x0059b360]         ; 00437b6f | DAT_0059b360
    FISTP dword ptr [EBX + 0x4]         ; 00437b75
    FLD float ptr [EAX + 0x8]           ; 00437b78
    FMUL float ptr [0x0059b360]         ; 00437b7b | DAT_0059b360
    FISTP dword ptr [EBX + 0x8]         ; 00437b81
    LEA EAX,[ESP + 0x4]                 ; 00437b84
    PUSH EAX                            ; 00437b88
    MOV EAX,dword ptr [EDX]             ; 00437b89 | DAT_01b4d738
    ADD EAX,dword ptr [ESP + 0x50]      ; 00437b8b
    PUSH EAX                            ; 00437b8f
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 00437b90
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 00437b95
    MOV EAX,dword ptr [EDI + 0x44]      ; 00437b98
    MOV dword ptr [ESP + 0x30],EAX      ; 00437b9b
    LEA EAX,[ESI + 0xd]                 ; 00437b9f
    LEA EBX,[ESP + 0x1c]                ; 00437ba2
    MOV dword ptr [ESP + 0x40],EAX      ; 00437ba6
    LEA EAX,[ESP + 0x28]                ; 00437baa
    MOV EDX,dword ptr [0x005ae704]      ; 00437bae | DAT_005ae704
    FLD float ptr [EAX]                 ; 00437bb4
    FMUL float ptr [0x0059b360]         ; 00437bb6 | DAT_0059b360
    FISTP dword ptr [EBX]               ; 00437bbc
    FLD float ptr [EAX + 0x4]           ; 00437bbe
    FMUL float ptr [0x0059b360]         ; 00437bc1 | DAT_0059b360
    FISTP dword ptr [EBX + 0x4]         ; 00437bc7
    FLD float ptr [EAX + 0x8]           ; 00437bca
    FMUL float ptr [0x0059b360]         ; 00437bcd | DAT_0059b360
    FISTP dword ptr [EBX + 0x8]         ; 00437bd3
    LEA EAX,[ESP + 0x1c]                ; 00437bd6
    MOV ECX,dword ptr [ESP + 0x48]      ; 00437bda
    PUSH EAX                            ; 00437bde
    MOV EAX,dword ptr [EDX]             ; 00437bdf | DAT_01b4d738
    ADD EAX,ECX                         ; 00437be1
    PUSH EAX                            ; 00437be3
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 00437be4
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 00437be9
    TEST ESI,ESI                        ; 00437bec
    JG 0x00437c46                       ; 00437bee
        ;   XREF to: 00437c46 (CONDITIONAL_JUMP)  ; LAB_00437c46
    MOV ECX,dword ptr [ESP + 0x48]      ; 00437bf0
        ;   Label: LAB_00437bf0
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00437bf4
    MOV EAX,dword ptr [ESP]             ; 00437bf8
    MOV EDX,dword ptr [ESP + 0x44]      ; 00437bfb
    INC ESI                             ; 00437bff
    ADD ECX,0x30                        ; 00437c00
    ADD EBX,0x30                        ; 00437c03
    ADD EAX,0x2                         ; 00437c06
    INC EDX                             ; 00437c09
    MOV dword ptr [ESP + 0x48],ECX      ; 00437c0a
    MOV dword ptr [ESP + 0x4c],EBX      ; 00437c0e
    MOV ECX,dword ptr [ESP + 0x50]      ; 00437c12
    MOV dword ptr [ESP],EAX             ; 00437c16
    INC ECX                             ; 00437c19
    MOV dword ptr [ESP + 0x44],EDX      ; 00437c1a
    MOV dword ptr [ESP + 0x50],ECX      ; 00437c1e
    CMP ESI,0xc                         ; 00437c22
    JLE 0x00437b1d                      ; 00437c25
        ;   XREF to: 00437b1d (CONDITIONAL_JUMP)  ; LAB_00437b1d
    CMP dword ptr [EBP + 0x1c],0x0      ; 00437c2b
    JNZ 0x00437c8d                      ; 00437c2f
        ;   XREF to: 00437c8d (CONDITIONAL_JUMP)  ; LAB_00437c8d
    MOV EAX,[0x005ae704]                ; 00437c31 | DAT_005ae704
        ;   Label: LAB_00437c31
    PUSH EAX                            ; 00437c36 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00437c37
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 00437c3c
    MOV ESP,EBP                         ; 00437c3f
    POP EBP                             ; 00437c41
    POP EDI                             ; 00437c42
    POP ESI                             ; 00437c43
    POP EBX                             ; 00437c44
    RET                                 ; 00437c45
    MOV EBX,dword ptr [ESP + 0x40]      ; 00437c46
        ;   Label: LAB_00437c46
    PUSH EBX                            ; 00437c4a
    PUSH ESI                            ; 00437c4b
    MOV EAX,[0x005ae704]                ; 00437c4c | DAT_005ae704
    PUSH EAX                            ; 00437c51 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0 ; 00437c52
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0()
    ADD ESP,0xc                         ; 00437c57
    MOV EDX,dword ptr [ESP + 0x50]      ; 00437c5a
    PUSH EDX                            ; 00437c5e
    PUSH ESI                            ; 00437c5f
    MOV ECX,dword ptr [0x005ae704]      ; 00437c60 | DAT_005ae704
    PUSH ECX                            ; 00437c66 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0 ; 00437c67
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0()
    ADD ESP,0xc                         ; 00437c6c
    MOV EBX,dword ptr [ESP + 0x44]      ; 00437c6f
    PUSH EBX                            ; 00437c73
    MOV EAX,dword ptr [ESP + 0x44]      ; 00437c74
    PUSH EAX                            ; 00437c78
    MOV EDX,dword ptr [0x005ae704]      ; 00437c79 | DAT_005ae704
    PUSH EDX                            ; 00437c7f | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0 ; 00437c80
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0()
    ADD ESP,0xc                         ; 00437c85
    JMP 0x00437bf0                      ; 00437c88
        ;   XREF to: 00437bf0 (UNCONDITIONAL_JUMP)  ; LAB_00437bf0
    MOV ESI,dword ptr [0x005b6d50]      ; 00437c8d | DAT_005b6d50
        ;   Label: LAB_00437c8d
    PUSH ESI                            ; 00437c93
    CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_00472490 ; 00437c94
        ;   XREF to: 00472490 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_00472490()
    ADD ESP,0x4                         ; 00437c99
    FLD float ptr [EDI + 0x14]          ; 00437c9c
    PUSH EAX                            ; 00437c9f
    FADD float ptr [EDI + 0x18]         ; 00437ca0
    SUB ESP,0x4                         ; 00437ca3
    MOV EDI,dword ptr [0x005b6d50]      ; 00437ca6 | DAT_005b6d50
    FSTP float ptr [ESP]                ; 00437cac
    PUSH EDI                            ; 00437caf
    CALL FUN_00472de0                   ; 00437cb0
        ;   XREF to: 00472de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00472de0()
    ADD ESP,0xc                         ; 00437cb5
    JMP 0x00437c31                      ; 00437cb8
        ;   XREF to: 00437c31 (UNCONDITIONAL_JUMP)  ; LAB_00437c31


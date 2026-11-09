; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0049caa0(CEdScrollBar *param_1)
;
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
; XREF[1]:
;   shape_edittool.cpp_FUN_0049b830 at 0049ba40
;
; Referenced Globals:
;   undefined4 DAT_01c3f544
;   undefined4 DAT_01c3f5ac
;   undefined4 DAT_01c3f5b0
;   undefined4 DAT_01c3f5d0
;   undefined4 DAT_01c3f5d4
;   undefined4 DAT_01c4e9f8
;   undefined4 DAT_01c4e9f9
;   undefined4 DAT_01c4e9fa
;   undefined4 DAT_01c4f020
;
; Called Functions:
;   engine_2d.c_fillRectWithBorder_FUN_00403250
;   engine_mini3d.cpp_FUN_00517d50
;   engine_mini3d.cpp_FUN_00518010
;   engine_mini3d.cpp_FUN_00518290
;   shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_0049ce40
;   shape_edittool.cpp_FUN_0049c500
;   shape_edittool.cpp_FUN_0049c750
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049caa0
        ;   Label: shape_edittool.cpp_FUN_0049caa0
    PUSH ESI                            ; 0049caa1
    PUSH EDI                            ; 0049caa2
    PUSH EBP                            ; 0049caa3
    MOV EBP,ESP                         ; 0049caa4
    SUB ESP,0x24                        ; 0049caa6
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049caa9
    PUSH EBX                            ; 0049caac
    CALL shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_0049ce40 ; 0049caad
        ;   XREF to: 0049ce40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_0049ce40(CEdScrollBar * this_ptr)
    MOV EDI,dword ptr [0x01c3f5ac]      ; 0049cab2 | DAT_01c3f5ac
    ADD ESP,0x4                         ; 0049cab8
    MOV ESI,dword ptr [EBX + 0x20]      ; 0049cabb
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0049cabe
    MOV EDX,dword ptr [EBX + 0x18]      ; 0049cac1
    MOV EAX,dword ptr [EBX + 0x14]      ; 0049cac4
    SUB ESI,0x2                         ; 0049cac7
    SUB ECX,0x2                         ; 0049caca
    INC EAX                             ; 0049cacd
    INC EDX                             ; 0049cace
    MOV dword ptr [EBP + -0x10],EAX     ; 0049cacf
    MOV dword ptr [EBP + -0xc],EAX      ; 0049cad2
    MOV dword ptr [EBP + -0x24],EDX     ; 0049cad5
    MOV dword ptr [EBP + -0x20],ECX     ; 0049cad8
    MOV dword ptr [EBP + -0x1c],ESI     ; 0049cadb
    MOV EAX,[0x01c3f5b0]                ; 0049cade | DAT_01c3f5b0
    CMP dword ptr [0x01c3f544],0x0      ; 0049cae3 | DAT_01c3f544
    JZ 0x0049cd0d                       ; 0049caea
        ;   XREF to: 0049cd0d (CONDITIONAL_JUMP)  ; LAB_0049cd0d
    CMP dword ptr [0x01c3f544],0x0      ; 0049caf0 | DAT_01c3f544
    JZ 0x0049ccf8                       ; 0049caf7
        ;   XREF to: 0049ccf8 (CONDITIONAL_JUMP)  ; LAB_0049ccf8
    AND EAX,0xff                        ; 0049cafd
    LEA ESI,[EAX*0x4 + 0x0]             ; 0049cb02
    SUB ESI,EAX                         ; 0049cb09
    XOR EAX,EAX                         ; 0049cb0b
    MOV AL,byte ptr [ESI + 0x1c4e9f9]   ; 0049cb0d | DAT_01c4e9f9
    MOV EDX,EAX                         ; 0049cb13
    XOR EAX,EAX                         ; 0049cb15
    MOV AL,byte ptr [ESI + 0x1c4e9f8]   ; 0049cb17 | DAT_01c4e9f8
    SHL EDX,0x8                         ; 0049cb1d
    SHL EAX,0x10                        ; 0049cb20
    OR EAX,EDX                          ; 0049cb23
    XOR EDX,EDX                         ; 0049cb25
    MOV DL,byte ptr [ESI + 0x1c4e9fa]   ; 0049cb27 | DAT_01c4e9fa
    OR EAX,EDX                          ; 0049cb2d
    PUSH EAX                            ; 0049cb2f
    CALL engine_mini3d.cpp_FUN_00517d50 ; 0049cb30
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517d50()
    ADD ESP,0x4                         ; 0049cb35
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0049cb38
        ;   Label: LAB_0049cb38
    INC EAX                             ; 0049cb3b
    PUSH EAX                            ; 0049cb3c
    MOV EAX,dword ptr [EBP + -0x20]     ; 0049cb3d
    INC EAX                             ; 0049cb40
    PUSH EAX                            ; 0049cb41
    MOV EAX,dword ptr [EBP + -0x24]     ; 0049cb42
    DEC EAX                             ; 0049cb45
    PUSH EAX                            ; 0049cb46
    MOV EAX,dword ptr [EBP + -0xc]      ; 0049cb47
    DEC EAX                             ; 0049cb4a
    PUSH EAX                            ; 0049cb4b
    CALL engine_mini3d.cpp_FUN_00518290 ; 0049cb4c
        ;   XREF to: 00518290 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00518290()
    MOV ESI,dword ptr [0x01c3f544]      ; 0049cb51 | DAT_01c3f544
    ADD ESP,0x10                        ; 0049cb57
    TEST ESI,ESI                        ; 0049cb5a
    JZ 0x0049cd02                       ; 0049cb5c
        ;   XREF to: 0049cd02 (CONDITIONAL_JUMP)  ; LAB_0049cd02
    MOV EAX,EDI                         ; 0049cb62
    AND EAX,0xff                        ; 0049cb64
    LEA ESI,[EAX*0x4 + 0x0]             ; 0049cb69
    SUB ESI,EAX                         ; 0049cb70
    XOR EDX,EDX                         ; 0049cb72
    XOR EAX,EAX                         ; 0049cb74
    MOV DL,byte ptr [ESI + 0x1c4e9f8]   ; 0049cb76 | DAT_01c4e9f8
    MOV AL,byte ptr [ESI + 0x1c4e9f9]   ; 0049cb7c | DAT_01c4e9f9
    SHL EDX,0x10                        ; 0049cb82
    SHL EAX,0x8                         ; 0049cb85
    OR EDX,EAX                          ; 0049cb88
    XOR EAX,EAX                         ; 0049cb8a
    MOV AL,byte ptr [ESI + 0x1c4e9fa]   ; 0049cb8c | DAT_01c4e9fa
    OR EAX,EDX                          ; 0049cb92
    PUSH EAX                            ; 0049cb94
    CALL engine_mini3d.cpp_FUN_00517d50 ; 0049cb95
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517d50()
    ADD ESP,0x4                         ; 0049cb9a
    MOV EDI,dword ptr [EBP + -0x1c]     ; 0049cb9d
        ;   Label: LAB_0049cb9d
    PUSH EDI                            ; 0049cba0
    MOV EAX,dword ptr [EBP + -0x20]     ; 0049cba1
    PUSH EAX                            ; 0049cba4
    MOV EDX,dword ptr [EBP + -0x24]     ; 0049cba5
    PUSH EDX                            ; 0049cba8
    MOV ECX,dword ptr [EBP + -0xc]      ; 0049cba9
    PUSH ECX                            ; 0049cbac
    CALL engine_mini3d.cpp_FUN_00518010 ; 0049cbad
        ;   XREF to: 00518010 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00518010()
    ADD ESP,0x10                        ; 0049cbb2
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0049cbb5
        ;   Label: LAB_0049cbb5
    DEC EAX                             ; 0049cbb8
    MOV EDI,dword ptr [EBX + 0x18]      ; 0049cbb9
    MOV dword ptr [EBP + -0x4],EAX      ; 0049cbbc
    MOV EAX,dword ptr [EBX + 0x20]      ; 0049cbbf
    MOV ESI,dword ptr [EBX + 0x14]      ; 0049cbc2
    DEC EAX                             ; 0049cbc5
    INC EDI                             ; 0049cbc6
    MOV dword ptr [EBP + -0x8],EAX      ; 0049cbc7
    MOV EAX,dword ptr [EBX + 0x10]      ; 0049cbca
    INC ESI                             ; 0049cbcd
    TEST EAX,EAX                        ; 0049cbce
    JZ 0x0049cd23                       ; 0049cbd0
        ;   XREF to: 0049cd23 (CONDITIONAL_JUMP)  ; LAB_0049cd23
    MOV EDX,dword ptr [EBX + 0x30]      ; 0049cbd6
    MOV ECX,EDI                         ; 0049cbd9
    MOV dword ptr [EBP + -0x18],EDX     ; 0049cbdb
    MOV EDX,dword ptr [EBP + -0x8]      ; 0049cbde
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0049cbe1
    MOV dword ptr [EBP + -0x14],EDX     ; 0049cbe4
        ;   Label: LAB_0049cbe4
    CMP EBX,dword ptr [0x01c3f5d0]      ; 0049cbe7 | DAT_01c3f5d0
    JNZ 0x0049cd36                      ; 0049cbed
        ;   XREF to: 0049cd36 (CONDITIONAL_JUMP)  ; LAB_0049cd36
    CMP dword ptr [0x01c3f5d4],0x0      ; 0049cbf3 | DAT_01c3f5d4
    JNZ 0x0049cd36                      ; 0049cbfa
        ;   XREF to: 0049cd36 (CONDITIONAL_JUMP)  ; LAB_0049cd36
    MOV EDX,0x1                         ; 0049cc00
    PUSH EDX                            ; 0049cc05
        ;   Label: LAB_0049cc05
    MOV EDX,dword ptr [EBP + -0x14]     ; 0049cc06
    PUSH EDX                            ; 0049cc09
    MOV EDX,dword ptr [EBP + -0x18]     ; 0049cc0a
    PUSH EDX                            ; 0049cc0d
    PUSH ECX                            ; 0049cc0e
    PUSH EAX                            ; 0049cc0f
    CALL shape_edittool.cpp_FUN_0049c500 ; 0049cc10
        ;   XREF to: 0049c500 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0049c500()
    MOV ECX,dword ptr [EBX + 0x10]      ; 0049cc15
    ADD ESP,0x14                        ; 0049cc18
    TEST ECX,ECX                        ; 0049cc1b
    JZ 0x0049cd56                       ; 0049cc1d
        ;   XREF to: 0049cd56 (CONDITIONAL_JUMP)  ; LAB_0049cd56
    CMP EBX,dword ptr [0x01c3f5d0]      ; 0049cc23 | DAT_01c3f5d0
    JNZ 0x0049cd3d                      ; 0049cc29
        ;   XREF to: 0049cd3d (CONDITIONAL_JUMP)  ; LAB_0049cd3d
    MOV EDX,dword ptr [0x01c3f5d4]      ; 0049cc2f | DAT_01c3f5d4
    CMP EDX,0x1                         ; 0049cc35
    JNZ 0x0049cd3d                      ; 0049cc38
        ;   XREF to: 0049cd3d (CONDITIONAL_JUMP)  ; LAB_0049cd3d
    MOV EAX,EDX                         ; 0049cc3e
    PUSH EAX                            ; 0049cc40
        ;   Label: LAB_0049cc40
    MOV ECX,dword ptr [EBP + -0x8]      ; 0049cc41
    PUSH ECX                            ; 0049cc44
    MOV EAX,dword ptr [EBX + 0x24]      ; 0049cc45
    PUSH EAX                            ; 0049cc48
    PUSH EDI                            ; 0049cc49
    PUSH ESI                            ; 0049cc4a
    CALL shape_edittool.cpp_FUN_0049c500 ; 0049cc4b
        ;   XREF to: 0049c500 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0049c500()
    ADD ESP,0x14                        ; 0049cc50
    MOV EDX,dword ptr [0x01c3f5d0]      ; 0049cc53 | DAT_01c3f5d0
    PUSH 0x2                            ; 0049cc59
    CMP EBX,EDX                         ; 0049cc5b
    JNZ 0x0049cd44                      ; 0049cc5d
        ;   XREF to: 0049cd44 (CONDITIONAL_JUMP)  ; LAB_0049cd44
    MOV ECX,dword ptr [0x01c3f5d4]      ; 0049cc63 | DAT_01c3f5d4
    CMP ECX,0x1                         ; 0049cc69
    JNZ 0x0049cd44                      ; 0049cc6c
        ;   XREF to: 0049cd44 (CONDITIONAL_JUMP)  ; LAB_0049cd44
    MOV EAX,ECX                         ; 0049cc72
    PUSH EAX                            ; 0049cc74
        ;   Label: LAB_0049cc74
    MOV EAX,dword ptr [EBP + -0x8]      ; 0049cc75
    PUSH EAX                            ; 0049cc78
    MOV EDX,dword ptr [EBX + 0x24]      ; 0049cc79
    PUSH EDX                            ; 0049cc7c
    PUSH EDI                            ; 0049cc7d
    PUSH ESI                            ; 0049cc7e
    CALL shape_edittool.cpp_FUN_0049c750 ; 0049cc7f
        ;   XREF to: 0049c750 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0049c750()
    MOV ECX,dword ptr [0x01c3f5d0]      ; 0049cc84 | DAT_01c3f5d0
    ADD ESP,0x18                        ; 0049cc8a
    CMP EBX,ECX                         ; 0049cc8d
    JNZ 0x0049cd4b                      ; 0049cc8f
        ;   XREF to: 0049cd4b (CONDITIONAL_JUMP)  ; LAB_0049cd4b
    CMP dword ptr [0x01c3f5d4],0x2      ; 0049cc95 | DAT_01c3f5d4
    JNZ 0x0049cd4b                      ; 0049cc9c
        ;   XREF to: 0049cd4b (CONDITIONAL_JUMP)  ; LAB_0049cd4b
    MOV EAX,0x1                         ; 0049cca2
    PUSH EAX                            ; 0049cca7
        ;   Label: LAB_0049cca7
    MOV EAX,dword ptr [EBP + -0x8]      ; 0049cca8
    PUSH EAX                            ; 0049ccab
    MOV EDX,dword ptr [EBP + -0x4]      ; 0049ccac
    PUSH EDX                            ; 0049ccaf
    PUSH EDI                            ; 0049ccb0
    MOV ECX,dword ptr [EBX + 0x28]      ; 0049ccb1
    PUSH ECX                            ; 0049ccb4
    CALL shape_edittool.cpp_FUN_0049c500 ; 0049ccb5
        ;   XREF to: 0049c500 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0049c500()
    ADD ESP,0x14                        ; 0049ccba
    MOV ESI,dword ptr [0x01c3f5d0]      ; 0049ccbd | DAT_01c3f5d0
    PUSH 0x3                            ; 0049ccc3
    CMP EBX,ESI                         ; 0049ccc5
    JNZ 0x0049cd52                      ; 0049ccc7
        ;   XREF to: 0049cd52 (CONDITIONAL_JUMP)  ; LAB_0049cd52
    CMP dword ptr [0x01c3f5d4],0x2      ; 0049cccd | DAT_01c3f5d4
    JNZ 0x0049cd52                      ; 0049ccd4
        ;   XREF to: 0049cd52 (CONDITIONAL_JUMP)  ; LAB_0049cd52
    MOV EAX,0x1                         ; 0049ccd6
    PUSH EAX                            ; 0049ccdb
        ;   Label: LAB_0049ccdb
    MOV EDX,dword ptr [EBP + -0x8]      ; 0049ccdc
    PUSH EDX                            ; 0049ccdf
    MOV ECX,dword ptr [EBP + -0x4]      ; 0049cce0
    PUSH ECX                            ; 0049cce3
    PUSH EDI                            ; 0049cce4
    MOV ESI,dword ptr [EBX + 0x28]      ; 0049cce5
    PUSH ESI                            ; 0049cce8
    CALL shape_edittool.cpp_FUN_0049c750 ; 0049cce9
        ;   XREF to: 0049c750 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0049c750()
    ADD ESP,0x18                        ; 0049ccee
    MOV ESP,EBP                         ; 0049ccf1
    POP EBP                             ; 0049ccf3
    POP EDI                             ; 0049ccf4
    POP ESI                             ; 0049ccf5
    POP EBX                             ; 0049ccf6
    RET                                 ; 0049ccf7
    MOV [0x01c4f020],EAX                ; 0049ccf8 | DAT_01c4f020
        ;   Label: LAB_0049ccf8
    JMP 0x0049cb38                      ; 0049ccfd
        ;   XREF to: 0049cb38 (UNCONDITIONAL_JUMP)  ; LAB_0049cb38
    MOV dword ptr [0x01c4f020],EDI      ; 0049cd02 | DAT_01c4f020
        ;   Label: LAB_0049cd02
    JMP 0x0049cb9d                      ; 0049cd08
        ;   XREF to: 0049cb9d (UNCONDITIONAL_JUMP)  ; LAB_0049cb9d
    PUSH EAX                            ; 0049cd0d
        ;   Label: LAB_0049cd0d
    PUSH EDI                            ; 0049cd0e
    PUSH ESI                            ; 0049cd0f
    PUSH ECX                            ; 0049cd10
    PUSH EDX                            ; 0049cd11
    MOV EDX,dword ptr [EBP + -0x10]     ; 0049cd12
    PUSH EDX                            ; 0049cd15
    CALL engine_2d.c_fillRectWithBorder_FUN_00403250 ; 0049cd16
        ;   XREF to: 00403250 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectWithBorder_FUN_00403250(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x18                        ; 0049cd1b
    JMP 0x0049cbb5                      ; 0049cd1e
        ;   XREF to: 0049cbb5 (UNCONDITIONAL_JUMP)  ; LAB_0049cbb5
    MOV EDX,dword ptr [EBP + -0x4]      ; 0049cd23
        ;   Label: LAB_0049cd23
    MOV EAX,ESI                         ; 0049cd26
    MOV dword ptr [EBP + -0x18],EDX     ; 0049cd28
    MOV EDX,dword ptr [EBX + 0x30]      ; 0049cd2b
    MOV ECX,dword ptr [EBX + 0x2c]      ; 0049cd2e
    JMP 0x0049cbe4                      ; 0049cd31
        ;   XREF to: 0049cbe4 (UNCONDITIONAL_JUMP)  ; LAB_0049cbe4
    XOR EDX,EDX                         ; 0049cd36
        ;   Label: LAB_0049cd36
    JMP 0x0049cc05                      ; 0049cd38
        ;   XREF to: 0049cc05 (UNCONDITIONAL_JUMP)  ; LAB_0049cc05
    XOR EAX,EAX                         ; 0049cd3d
        ;   Label: LAB_0049cd3d
    JMP 0x0049cc40                      ; 0049cd3f
        ;   XREF to: 0049cc40 (UNCONDITIONAL_JUMP)  ; LAB_0049cc40
    XOR EAX,EAX                         ; 0049cd44
        ;   Label: LAB_0049cd44
    JMP 0x0049cc74                      ; 0049cd46
        ;   XREF to: 0049cc74 (UNCONDITIONAL_JUMP)  ; LAB_0049cc74
    XOR EAX,EAX                         ; 0049cd4b
        ;   Label: LAB_0049cd4b
    JMP 0x0049cca7                      ; 0049cd4d
        ;   XREF to: 0049cca7 (UNCONDITIONAL_JUMP)  ; LAB_0049cca7
    XOR EAX,EAX                         ; 0049cd52
        ;   Label: LAB_0049cd52
    JMP 0x0049ccdb                      ; 0049cd54
        ;   XREF to: 0049ccdb (UNCONDITIONAL_JUMP)  ; LAB_0049ccdb
    CMP EBX,dword ptr [0x01c3f5d0]      ; 0049cd56 | DAT_01c3f5d0
        ;   Label: LAB_0049cd56
    JNZ 0x0049ce1f                      ; 0049cd5c
        ;   XREF to: 0049ce1f (CONDITIONAL_JUMP)  ; LAB_0049ce1f
    MOV EDX,dword ptr [0x01c3f5d4]      ; 0049cd62 | DAT_01c3f5d4
    CMP EDX,0x1                         ; 0049cd68
    JNZ 0x0049ce1f                      ; 0049cd6b
        ;   XREF to: 0049ce1f (CONDITIONAL_JUMP)  ; LAB_0049ce1f
    MOV EAX,EDX                         ; 0049cd71
    PUSH EAX                            ; 0049cd73
        ;   Label: LAB_0049cd73
    MOV ECX,dword ptr [EBX + 0x24]      ; 0049cd74
    PUSH ECX                            ; 0049cd77
    MOV EAX,dword ptr [EBP + -0x4]      ; 0049cd78
    PUSH EAX                            ; 0049cd7b
    PUSH EDI                            ; 0049cd7c
    PUSH ESI                            ; 0049cd7d
    CALL shape_edittool.cpp_FUN_0049c500 ; 0049cd7e
        ;   XREF to: 0049c500 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0049c500()
    ADD ESP,0x14                        ; 0049cd83
    MOV EDX,dword ptr [0x01c3f5d0]      ; 0049cd86 | DAT_01c3f5d0
    PUSH 0x0                            ; 0049cd8c
    CMP EBX,EDX                         ; 0049cd8e
    JNZ 0x0049ce26                      ; 0049cd90
        ;   XREF to: 0049ce26 (CONDITIONAL_JUMP)  ; LAB_0049ce26
    MOV ECX,dword ptr [0x01c3f5d4]      ; 0049cd96 | DAT_01c3f5d4
    CMP ECX,0x1                         ; 0049cd9c
    JNZ 0x0049ce26                      ; 0049cd9f
        ;   XREF to: 0049ce26 (CONDITIONAL_JUMP)  ; LAB_0049ce26
    MOV EAX,ECX                         ; 0049cda5
    PUSH EAX                            ; 0049cda7
        ;   Label: LAB_0049cda7
    MOV EAX,dword ptr [EBX + 0x24]      ; 0049cda8
    PUSH EAX                            ; 0049cdab
    MOV EDX,dword ptr [EBP + -0x4]      ; 0049cdac
    PUSH EDX                            ; 0049cdaf
    PUSH EDI                            ; 0049cdb0
    PUSH ESI                            ; 0049cdb1
    CALL shape_edittool.cpp_FUN_0049c750 ; 0049cdb2
        ;   XREF to: 0049c750 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0049c750()
    MOV ECX,dword ptr [0x01c3f5d0]      ; 0049cdb7 | DAT_01c3f5d0
    ADD ESP,0x18                        ; 0049cdbd
    CMP EBX,ECX                         ; 0049cdc0
    JNZ 0x0049ce2d                      ; 0049cdc2
        ;   XREF to: 0049ce2d (CONDITIONAL_JUMP)  ; LAB_0049ce2d
    CMP dword ptr [0x01c3f5d4],0x2      ; 0049cdc4 | DAT_01c3f5d4
    JNZ 0x0049ce2d                      ; 0049cdcb
        ;   XREF to: 0049ce2d (CONDITIONAL_JUMP)  ; LAB_0049ce2d
    MOV EAX,0x1                         ; 0049cdcd
    PUSH EAX                            ; 0049cdd2
        ;   Label: LAB_0049cdd2
    MOV EAX,dword ptr [EBP + -0x8]      ; 0049cdd3
    PUSH EAX                            ; 0049cdd6
    MOV EDX,dword ptr [EBP + -0x4]      ; 0049cdd7
    PUSH EDX                            ; 0049cdda
    MOV ECX,dword ptr [EBX + 0x28]      ; 0049cddb
    PUSH ECX                            ; 0049cdde
    PUSH ESI                            ; 0049cddf
    CALL shape_edittool.cpp_FUN_0049c500 ; 0049cde0
        ;   XREF to: 0049c500 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0049c500()
    ADD ESP,0x14                        ; 0049cde5
    MOV EDI,dword ptr [0x01c3f5d0]      ; 0049cde8 | DAT_01c3f5d0
    PUSH 0x1                            ; 0049cdee
    CMP EBX,EDI                         ; 0049cdf0
    JNZ 0x0049ce31                      ; 0049cdf2
        ;   XREF to: 0049ce31 (CONDITIONAL_JUMP)  ; LAB_0049ce31
    CMP dword ptr [0x01c3f5d4],0x2      ; 0049cdf4 | DAT_01c3f5d4
    JNZ 0x0049ce31                      ; 0049cdfb
        ;   XREF to: 0049ce31 (CONDITIONAL_JUMP)  ; LAB_0049ce31
    MOV EAX,0x1                         ; 0049cdfd
    PUSH EAX                            ; 0049ce02
        ;   Label: LAB_0049ce02
    MOV EDX,dword ptr [EBP + -0x8]      ; 0049ce03
    PUSH EDX                            ; 0049ce06
    MOV ECX,dword ptr [EBP + -0x4]      ; 0049ce07
    PUSH ECX                            ; 0049ce0a
    MOV EDI,dword ptr [EBX + 0x28]      ; 0049ce0b
    PUSH EDI                            ; 0049ce0e
    PUSH ESI                            ; 0049ce0f
    CALL shape_edittool.cpp_FUN_0049c750 ; 0049ce10
        ;   XREF to: 0049c750 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0049c750()
    ADD ESP,0x18                        ; 0049ce15
    MOV ESP,EBP                         ; 0049ce18
    POP EBP                             ; 0049ce1a
    POP EDI                             ; 0049ce1b
    POP ESI                             ; 0049ce1c
    POP EBX                             ; 0049ce1d
    RET                                 ; 0049ce1e
    XOR EAX,EAX                         ; 0049ce1f
        ;   Label: LAB_0049ce1f
    JMP 0x0049cd73                      ; 0049ce21
        ;   XREF to: 0049cd73 (UNCONDITIONAL_JUMP)  ; LAB_0049cd73
    XOR EAX,EAX                         ; 0049ce26
        ;   Label: LAB_0049ce26
    JMP 0x0049cda7                      ; 0049ce28
        ;   XREF to: 0049cda7 (UNCONDITIONAL_JUMP)  ; LAB_0049cda7
    XOR EAX,EAX                         ; 0049ce2d
        ;   Label: LAB_0049ce2d
    JMP 0x0049cdd2                      ; 0049ce2f
        ;   XREF to: 0049cdd2 (UNCONDITIONAL_JUMP)  ; LAB_0049cdd2
    XOR EAX,EAX                         ; 0049ce31
        ;   Label: LAB_0049ce31
    JMP 0x0049ce02                      ; 0049ce33
        ;   XREF to: 0049ce02 (UNCONDITIONAL_JUMP)  ; LAB_0049ce02


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,undefined4 param_7)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[8]:
;   FUN_0045db00 at 0045db1c
;   FUN_0045dbd0 at 0045dbec
;   FUN_0045dca0 at 0045dcbc
;   FUN_0045dd70 at 0045dd8c
;   FUN_0045de40 at 0045de60
;   FUN_0045df20 at 0045df40
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0045e000 at 0045e024
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_0045da30 at 0045da4c
;
; Referenced Globals:
;   void* switchdataD_0045d714 = 0045d81d
;   void* switchdataD_0045d734 = 0045d976
;   undefined4 DAT_01b4d710
;   undefined4 DAT_01b4d714
;   undefined4 DAT_01b4d718
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;
; Called Functions:
;   engine_2d.c_disableTextWrap_FUN_00402e50
;   engine_2d.c_drawTextCenteredAtColor_FUN_00402c20
;   engine_2d.c_drawTextCenteredColor_FUN_00402cf0
;   engine_2d.c_drawTextColor_FUN_00402a60
;   engine_2d.c_drawTextRightAlignedColor_FUN_00402b60
;   engine_2d.c_getTextColor_FUN_00402e60
;   engine_2d.c_getTextWrapEnabled_FUN_00402e20
;   engine_2d.c_setTextColor_FUN_00402e70
;   engine_2d.c_setTextWrapEnabled_FUN_00402e30
;   engine_font.cpp_CBitFont_drawTextCenter_FUN_00490ce0
;   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0
;   engine_font.cpp_CBitFont_drawTextRight_FUN_00490be0
;   engine_font.cpp_CBitFont_drawTextWrapper_FUN_00490af0
;   engine_font.cpp_getDefaultTextColor_FUN_00491140
;   engine_font.cpp_setDefaultTextColor_FUN_00491150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d760
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760
    PUSH ESI                            ; 0045d761
    PUSH EDI                            ; 0045d762
    PUSH EBP                            ; 0045d763
    SUB ESP,0x20                        ; 0045d764
    MOV EAX,dword ptr [ESP + 0x34]      ; 0045d767
    MOV EDI,dword ptr [ESP + 0x38]      ; 0045d76b
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0045d76f
    MOV EBX,dword ptr [ESP + 0x44]      ; 0045d773
    MOV EBP,dword ptr [ESP + 0x48]      ; 0045d777
    MOV ECX,dword ptr [ESP + 0x40]      ; 0045d77b
    MOV EDX,dword ptr [EAX + 0x8]       ; 0045d77f
    ADD ECX,EDX                         ; 0045d782
    ADD ESI,EDX                         ; 0045d784
    MOV EDX,dword ptr [EAX + 0xc]       ; 0045d786
    ADD EBX,EDX                         ; 0045d789
    ADD EBP,EDX                         ; 0045d78b
    MOV EDX,dword ptr [0x01c00c58]      ; 0045d78d | DAT_01c00c58
    MOV dword ptr [ESP + 0x4],EDX       ; 0045d793
    MOV EDX,dword ptr [0x01c00c60]      ; 0045d797 | DAT_01c00c60
    MOV dword ptr [ESP + 0x14],EDX      ; 0045d79d
    MOV EDX,dword ptr [0x01c00c5c]      ; 0045d7a1 | DAT_01c00c5c
    MOV dword ptr [ESP + 0x8],EDX       ; 0045d7a7
    MOV EDX,dword ptr [0x01c00c64]      ; 0045d7ab | DAT_01c00c64
    MOV dword ptr [ESP + 0x10],EDX      ; 0045d7b1
    MOV EDX,dword ptr [EAX + 0x10]      ; 0045d7b5
    MOV dword ptr [0x01c00c58],EDX      ; 0045d7b8 | DAT_01c00c58
    MOV EDX,dword ptr [EAX + 0x18]      ; 0045d7be
    MOV dword ptr [0x01c00c60],EDX      ; 0045d7c1 | DAT_01c00c60
    MOV EDX,dword ptr [EAX + 0x14]      ; 0045d7c7
    MOV EAX,dword ptr [EAX + 0x1c]      ; 0045d7ca
    MOV [0x01c00c64],EAX                ; 0045d7cd | DAT_01c00c64
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0045d7d2
    SHL EAX,0x2                         ; 0045d7d6
    MOV dword ptr [ESP + 0x40],ECX      ; 0045d7d9
    MOV dword ptr [ESP + 0x1c],EAX      ; 0045d7dd
    MOV EAX,[0x01b4d718]                ; 0045d7e1 | DAT_01b4d718
    MOV dword ptr [0x01c00c5c],EDX      ; 0045d7e6 | DAT_01c00c5c
    TEST EAX,EAX                        ; 0045d7ec
    JZ 0x0045d9eb                       ; 0045d7ee
        ;   XREF to: 0045d9eb (CONDITIONAL_JUMP)  ; LAB_0045d9eb
    CALL engine_font.cpp_getDefaultTextColor_FUN_00491140 ; 0045d7f4
        ;   XREF to: 00491140 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_getDefaultTextColor_FUN_00491140()
    MOV ECX,dword ptr [0x01b4d710]      ; 0045d7f9 | DAT_01b4d710
    PUSH ECX                            ; 0045d7ff
    MOV dword ptr [ESP + 0x4],EAX       ; 0045d800
    CALL engine_font.cpp_setDefaultTextColor_FUN_00491150 ; 0045d804
        ;   XREF to: 00491150 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_setDefaultTextColor_FUN_00491150()
    ADD ESP,0x4                         ; 0045d809
    CMP dword ptr [ESP + 0x4c],0x7      ; 0045d80c
    JA 0x0045d833                       ; 0045d811
        ;   XREF to: 0045d833 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045d813
    JMP dword ptr [EAX + 0x45d714]      ; 0045d817 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH EDI                            ; 0045d81d
        ;   Label: caseD_0
    PUSH -0x1                           ; 0045d81e
    PUSH -0x3                           ; 0045d820
    PUSH EBX                            ; 0045d822
    PUSH ESI                            ; 0045d823
    MOV EBP,dword ptr [0x01b4d718]      ; 0045d824 | DAT_01b4d718
    PUSH EBP                            ; 0045d82a
        ;   Label: LAB_0045d82a
    CALL engine_font.cpp_CBitFont_drawTextWrapper_FUN_00490af0 ; 0045d82b
        ;   XREF to: 00490af0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawTextWrapper_FUN_00490af0()
    ADD ESP,0x18                        ; 0045d830
        ;   Label: LAB_0045d830
    MOV EAX,dword ptr [ESP]             ; 0045d833
        ;   Label: default
    PUSH EAX                            ; 0045d836
    CALL engine_font.cpp_setDefaultTextColor_FUN_00491150 ; 0045d837
        ;   XREF to: 00491150 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_setDefaultTextColor_FUN_00491150()
    ADD ESP,0x4                         ; 0045d83c
        ;   Label: LAB_0045d83c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0045d83f
    MOV [0x01c00c58],EAX                ; 0045d843 | DAT_01c00c58
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045d848
    MOV [0x01c00c60],EAX                ; 0045d84c | DAT_01c00c60
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045d851
    MOV [0x01c00c5c],EAX                ; 0045d855 | DAT_01c00c5c
    MOV EAX,dword ptr [ESP + 0x10]      ; 0045d85a
    MOV [0x01c00c64],EAX                ; 0045d85e | DAT_01c00c64
    ADD ESP,0x20                        ; 0045d863
    POP EBP                             ; 0045d866
    POP EDI                             ; 0045d867
    POP ESI                             ; 0045d868
    POP EBX                             ; 0045d869
    RET                                 ; 0045d86a
    PUSH EDI                            ; 0045d86b
        ;   Label: caseD_1
    PUSH -0x1                           ; 0045d86c
    PUSH -0x3                           ; 0045d86e
    PUSH EBX                            ; 0045d870
    PUSH ESI                            ; 0045d871
    MOV EDI,dword ptr [0x01b4d718]      ; 0045d872 | DAT_01b4d718
    PUSH EDI                            ; 0045d878
    CALL engine_font.cpp_CBitFont_drawTextRight_FUN_00490be0 ; 0045d879
        ;   XREF to: 00490be0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawTextRight_FUN_00490be0()
    JMP 0x0045d830                      ; 0045d87e
        ;   XREF to: 0045d830 (UNCONDITIONAL_JUMP)  ; LAB_0045d830
    PUSH EDI                            ; 0045d880
        ;   Label: caseD_2
    PUSH -0x1                           ; 0045d881
    PUSH -0x3                           ; 0045d883
    PUSH EBX                            ; 0045d885
    PUSH ESI                            ; 0045d886
    MOV ESI,dword ptr [0x01b4d718]      ; 0045d887 | DAT_01b4d718
    PUSH ESI                            ; 0045d88d
    CALL engine_font.cpp_CBitFont_drawTextCenter_FUN_00490ce0 ; 0045d88e
        ;   XREF to: 00490ce0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawTextCenter_FUN_00490ce0()
    JMP 0x0045d830                      ; 0045d893
        ;   XREF to: 0045d830 (UNCONDITIONAL_JUMP)  ; LAB_0045d830
    MOV EBP,dword ptr [0x01b4d718]      ; 0045d895 | DAT_01b4d718
        ;   Label: caseD_3
    MOV EDX,dword ptr [EBP + 0x3170]    ; 0045d89b
    MOV EAX,EDX                         ; 0045d8a1
    SAR EDX,0x1f                        ; 0045d8a3
    SUB EAX,EDX                         ; 0045d8a6
    SAR EAX,0x1                         ; 0045d8a8
    PUSH EDI                            ; 0045d8aa
    PUSH -0x1                           ; 0045d8ab
    PUSH -0x3                           ; 0045d8ad
    SUB EBX,EAX                         ; 0045d8af
    PUSH EBX                            ; 0045d8b1
    PUSH ESI                            ; 0045d8b2
    JMP 0x0045d82a                      ; 0045d8b3
        ;   XREF to: 0045d82a (UNCONDITIONAL_JUMP)  ; LAB_0045d82a
    MOV EBP,dword ptr [0x01b4d718]      ; 0045d8b8 | DAT_01b4d718
        ;   Label: caseD_4
    MOV EDX,dword ptr [EBP + 0x3170]    ; 0045d8be
    MOV EAX,EDX                         ; 0045d8c4
    SAR EDX,0x1f                        ; 0045d8c6
    SUB EAX,EDX                         ; 0045d8c9
    SAR EAX,0x1                         ; 0045d8cb
    PUSH EDI                            ; 0045d8cd
    PUSH -0x1                           ; 0045d8ce
    PUSH -0x3                           ; 0045d8d0
    SUB EBX,EAX                         ; 0045d8d2
    PUSH EBX                            ; 0045d8d4
    PUSH ESI                            ; 0045d8d5
    PUSH EBP                            ; 0045d8d6
    CALL engine_font.cpp_CBitFont_drawTextCenter_FUN_00490ce0 ; 0045d8d7
        ;   XREF to: 00490ce0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawTextCenter_FUN_00490ce0()
    JMP 0x0045d830                      ; 0045d8dc
        ;   XREF to: 0045d830 (UNCONDITIONAL_JUMP)  ; LAB_0045d830
    PUSH EDI                            ; 0045d8e1
        ;   Label: caseD_5
    PUSH -0x1                           ; 0045d8e2
    PUSH -0x3                           ; 0045d8e4
    PUSH EBX                            ; 0045d8e6
    MOV ECX,dword ptr [ESP + 0x50]      ; 0045d8e7
    PUSH ECX                            ; 0045d8eb
    PUSH ESI                            ; 0045d8ec
    MOV EBX,dword ptr [0x01b4d718]      ; 0045d8ed | DAT_01b4d718
    PUSH EBX                            ; 0045d8f3
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0 ; 0045d8f4
        ;   XREF to: 00490de0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0()
    ADD ESP,0x1c                        ; 0045d8f9
    JMP 0x0045d833                      ; 0045d8fc
        ;   XREF to: 0045d833 (UNCONDITIONAL_JUMP)  ; default
    ADD EBX,EBP                         ; 0045d901
        ;   Label: caseD_6
    MOV EBP,dword ptr [0x01b4d718]      ; 0045d903 | DAT_01b4d718
    LEA EDX,[EBX + 0x1]                 ; 0045d909
    MOV EAX,dword ptr [EBP + 0x3170]    ; 0045d90c
    SUB EDX,EAX                         ; 0045d912
    MOV EAX,EDX                         ; 0045d914
    SAR EDX,0x1f                        ; 0045d916
    SUB EAX,EDX                         ; 0045d919
    SAR EAX,0x1                         ; 0045d91b
    PUSH EDI                            ; 0045d91d
    PUSH -0x1                           ; 0045d91e
    PUSH -0x3                           ; 0045d920
    PUSH EAX                            ; 0045d922
    PUSH ESI                            ; 0045d923
    JMP 0x0045d82a                      ; 0045d924
        ;   XREF to: 0045d82a (UNCONDITIONAL_JUMP)  ; LAB_0045d82a
    ADD EBX,EBP                         ; 0045d929
        ;   Label: caseD_7
    MOV EBP,dword ptr [0x01b4d718]      ; 0045d92b | DAT_01b4d718
    INC EBX                             ; 0045d931
    MOV EDX,dword ptr [EBP + 0x3170]    ; 0045d932
    SUB EBX,EDX                         ; 0045d938
    MOV EDX,EBX                         ; 0045d93a
    MOV EAX,EBX                         ; 0045d93c
    SAR EDX,0x1f                        ; 0045d93e
    SUB EAX,EDX                         ; 0045d941
    SAR EAX,0x1                         ; 0045d943
    PUSH EDI                            ; 0045d945
    PUSH -0x1                           ; 0045d946
    PUSH -0x3                           ; 0045d948
    PUSH EAX                            ; 0045d94a
    MOV EDX,dword ptr [ESP + 0x50]      ; 0045d94b
    PUSH EDX                            ; 0045d94f
    PUSH ESI                            ; 0045d950
    PUSH EBP                            ; 0045d951
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0 ; 0045d952
        ;   XREF to: 00490de0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0()
    ADD ESP,0x1c                        ; 0045d957
    JMP 0x0045d833                      ; 0045d95a
        ;   XREF to: 0045d833 (UNCONDITIONAL_JUMP)  ; default
    PUSH EBX                            ; 0045d95f
        ;   Label: caseD_1
    PUSH ESI                            ; 0045d960
    PUSH EDI                            ; 0045d961
    CALL engine_2d.c_drawTextRightAlignedColor_FUN_00402b60 ; 0045d962
        ;   XREF to: 00402b60 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawTextRightAlignedColor_FUN_00402b60()
    JMP 0x0045d97e                      ; 0045d967
        ;   XREF to: 0045d97e (UNCONDITIONAL_JUMP)  ; LAB_0045d97e
    PUSH EBX                            ; 0045d969
        ;   Label: caseD_2
    PUSH ESI                            ; 0045d96a
    PUSH EDI                            ; 0045d96b
    CALL engine_2d.c_drawTextCenteredAtColor_FUN_00402c20 ; 0045d96c
        ;   XREF to: 00402c20 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawTextCenteredAtColor_FUN_00402c20()
    JMP 0x0045d97e                      ; 0045d971
        ;   XREF to: 0045d97e (UNCONDITIONAL_JUMP)  ; LAB_0045d97e
    SUB EBX,0x5                         ; 0045d973
        ;   Label: caseD_3
    PUSH EBX                            ; 0045d976
        ;   Label: caseD_0
    PUSH ESI                            ; 0045d977
        ;   Label: LAB_0045d977
    PUSH EDI                            ; 0045d978
    CALL engine_2d.c_drawTextColor_FUN_00402a60 ; 0045d979
        ;   XREF to: 00402a60 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawTextColor_FUN_00402a60()
    ADD ESP,0xc                         ; 0045d97e
        ;   Label: LAB_0045d97e
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045d981
        ;   Label: default
    PUSH EAX                            ; 0045d985
    CALL engine_2d.c_setTextColor_FUN_00402e70 ; 0045d986
        ;   XREF to: 00402e70 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_setTextColor_FUN_00402e70()
    ADD ESP,0x4                         ; 0045d98b
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045d98e
    PUSH EDX                            ; 0045d992
    CALL engine_2d.c_setTextWrapEnabled_FUN_00402e30 ; 0045d993
        ;   XREF to: 00402e30 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_setTextWrapEnabled_FUN_00402e30()
    JMP 0x0045d83c                      ; 0045d998
        ;   XREF to: 0045d83c (UNCONDITIONAL_JUMP)  ; LAB_0045d83c
    SUB EBX,0x5                         ; 0045d99d
        ;   Label: caseD_4
    PUSH EBX                            ; 0045d9a0
    PUSH ESI                            ; 0045d9a1
    PUSH EDI                            ; 0045d9a2
    CALL engine_2d.c_drawTextCenteredAtColor_FUN_00402c20 ; 0045d9a3
        ;   XREF to: 00402c20 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawTextCenteredAtColor_FUN_00402c20()
    JMP 0x0045d97e                      ; 0045d9a8
        ;   XREF to: 0045d97e (UNCONDITIONAL_JUMP)  ; LAB_0045d97e
    PUSH EBX                            ; 0045d9aa
        ;   Label: caseD_5
    MOV EBP,dword ptr [ESP + 0x44]      ; 0045d9ab
    PUSH EBP                            ; 0045d9af
    PUSH ESI                            ; 0045d9b0
    PUSH EDI                            ; 0045d9b1
    CALL engine_2d.c_drawTextCenteredColor_FUN_00402cf0 ; 0045d9b2
        ;   XREF to: 00402cf0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawTextCenteredColor_FUN_00402cf0()
    ADD ESP,0x10                        ; 0045d9b7
    JMP 0x0045d981                      ; 0045d9ba
        ;   XREF to: 0045d981 (UNCONDITIONAL_JUMP)  ; default
    LEA EDX,[EBX + EBP*0x1 + -0xa]      ; 0045d9bc
        ;   Label: caseD_6
    MOV EAX,EDX                         ; 0045d9c0
    SAR EDX,0x1f                        ; 0045d9c2
    SUB EAX,EDX                         ; 0045d9c5
    SAR EAX,0x1                         ; 0045d9c7
    PUSH EAX                            ; 0045d9c9
    JMP 0x0045d977                      ; 0045d9ca
        ;   XREF to: 0045d977 (UNCONDITIONAL_JUMP)  ; LAB_0045d977
    LEA EDX,[EBX + EBP*0x1 + -0xa]      ; 0045d9cc
        ;   Label: caseD_7
    MOV EAX,EDX                         ; 0045d9d0
    SAR EDX,0x1f                        ; 0045d9d2
    SUB EAX,EDX                         ; 0045d9d5
    SAR EAX,0x1                         ; 0045d9d7
    PUSH EAX                            ; 0045d9d9
    MOV EBX,dword ptr [ESP + 0x44]      ; 0045d9da
    PUSH EBX                            ; 0045d9de
    PUSH ESI                            ; 0045d9df
    PUSH EDI                            ; 0045d9e0
    CALL engine_2d.c_drawTextCenteredColor_FUN_00402cf0 ; 0045d9e1
        ;   XREF to: 00402cf0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawTextCenteredColor_FUN_00402cf0()
    ADD ESP,0x10                        ; 0045d9e6
    JMP 0x0045d981                      ; 0045d9e9
        ;   XREF to: 0045d981 (UNCONDITIONAL_JUMP)  ; default
    CALL engine_2d.c_getTextWrapEnabled_FUN_00402e20 ; 0045d9eb
        ;   XREF to: 00402e20 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_getTextWrapEnabled_FUN_00402e20()
        ;   Label: LAB_0045d9eb
    MOV dword ptr [ESP + 0xc],EAX       ; 0045d9f0
    CALL engine_2d.c_getTextColor_FUN_00402e60 ; 0045d9f4
        ;   XREF to: 00402e60 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_getTextColor_FUN_00402e60()
    MOV dword ptr [ESP + 0x18],EAX      ; 0045d9f9
    CALL engine_2d.c_disableTextWrap_FUN_00402e50 ; 0045d9fd
        ;   XREF to: 00402e50 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_disableTextWrap_FUN_00402e50()
    MOV EDX,dword ptr [0x01b4d714]      ; 0045da02 | DAT_01b4d714
    PUSH EDX                            ; 0045da08
    CALL engine_2d.c_setTextColor_FUN_00402e70 ; 0045da09
        ;   XREF to: 00402e70 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_setTextColor_FUN_00402e70()
    ADD ESP,0x4                         ; 0045da0e
    CMP dword ptr [ESP + 0x4c],0x7      ; 0045da11
    JA 0x0045d981                       ; 0045da16
        ;   XREF to: 0045d981 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045da1c
    JMP dword ptr [EAX + 0x45d734]      ; 0045da20 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD


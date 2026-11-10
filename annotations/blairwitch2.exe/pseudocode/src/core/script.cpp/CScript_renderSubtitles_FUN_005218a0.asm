; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_renderSubtitles_FUN_005218a0(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004b5190 at 004b566c
;
; Referenced Globals:
;   undefined4 DAT_005e2eb3
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_01511cb8
;   undefined4 DAT_01511cbc
;   undefined4 DAT_01511cc4
;   undefined4 DAT_01511ccc
;   undefined4 DAT_01c35e4c
;   undefined4 g_CGameInstance.field7_0x10
;   undefined4 g_CGameInstance.letterbox_mode
;   undefined4 DAT_01d63250
;   undefined4 DAT_01e620f0
;   undefined4 DAT_01e65900
;
; Called Functions:
;   core_charactr.cpp_FUN_0042bff0
;   core_script.cpp_CScript_getLetterboxHeight_FUN_00521840
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_3d.c_setRenderAlpha_FUN_00406da0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560
;   engine_font.cpp_FUN_004a8df0
;   engine_font.cpp_FUN_004aaf00
;   engine_font.cpp_FUN_004ab2b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005218a0
        ;   Label: core_script.cpp_CScript_renderSubtitles_FUN_005218a0
    PUSH ESI                            ; 005218a1
    PUSH EDI                            ; 005218a2
    PUSH EBP                            ; 005218a3
    SUB ESP,0x1c                        ; 005218a4
    MOV EDI,dword ptr [ESP + 0x30]      ; 005218a7
    MOV EAX,[0x00616494]                ; 005218ab | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x244]     ; 005218b0 | g_CGameInstance.letterbox_mode
    TEST EDX,EDX                        ; 005218b6
    JNZ 0x00521ac0                      ; 005218b8
        ;   XREF to: 00521ac0 (CONDITIONAL_JUMP)  ; LAB_00521ac0
    PUSH EAX                            ; 005218be
    CALL core_charactr.cpp_FUN_0042bff0 ; 005218bf
        ;   XREF to: 0042bff0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042bff0()
    MOV dword ptr [ESP + 0x1c],EAX      ; 005218c4
    FLD float ptr [ESP + 0x1c]          ; 005218c8
    FDIV float ptr [0x005e2eb3]         ; 005218cc | DAT_005e2eb3
    FSUBR float ptr [0x01e65900]        ; 005218d2 | DAT_01e65900
    ADD ESP,0x4                         ; 005218d8
        ;   Label: LAB_005218d8
    FSTP float ptr [0x01e65900]         ; 005218db | DAT_01e65900
    FLD float ptr [0x01e65900]          ; 005218e1 | DAT_01e65900
    FLDZ                                ; 005218e7
    FCOMPP                              ; 005218e9
    FNSTSW AX                           ; 005218eb
    SAHF                                ; 005218ed
    JBE 0x005218f8                      ; 005218ee
        ;   XREF to: 005218f8 (CONDITIONAL_JUMP)  ; LAB_005218f8
    XOR ECX,ECX                         ; 005218f0
    MOV dword ptr [0x01e65900],ECX      ; 005218f2 | DAT_01e65900
    FLD float ptr [0x01e65900]          ; 005218f8 | DAT_01e65900
        ;   Label: LAB_005218f8
    FLD1                                ; 005218fe
    FCOMPP                              ; 00521900
    FNSTSW AX                           ; 00521902
    SAHF                                ; 00521904
    JNC 0x00521911                      ; 00521905
        ;   XREF to: 00521911 (CONDITIONAL_JUMP)  ; LAB_00521911
    MOV dword ptr [0x01e65900],0x3f800000 ; 00521907 | DAT_01e65900
    MOV EAX,[0x006141b8]                ; 00521911 | DAT_006141b8
        ;   Label: LAB_00521911
    MOV EBX,dword ptr [0x006141bc]      ; 00521916 | DAT_006141bc
    PUSH EDI                            ; 0052191c
    XOR ESI,ESI                         ; 0052191d
    MOV dword ptr [ESP + 0xc],EAX       ; 0052191f
    CALL core_script.cpp_CScript_getLetterboxHeight_FUN_00521840 ; 00521923
        ;   XREF to: 00521840 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_getLetterboxHeight_FUN_00521840(CScript * this_ptr)
    MOV dword ptr [ESP + 0x8],ESI       ; 00521928
    ADD ESP,0x4                         ; 0052192c
    MOV ESI,EAX                         ; 0052192f
    TEST EAX,EAX                        ; 00521931
    JLE 0x00521972                      ; 00521933
        ;   XREF to: 00521972 (CONDITIONAL_JUMP)  ; LAB_00521972
    CMP dword ptr [0x01e620f0],0x2      ; 00521935 | DAT_01e620f0
    JZ 0x00521954                       ; 0052193c
        ;   XREF to: 00521954 (CONDITIONAL_JUMP)  ; LAB_00521954
    PUSH 0x0                            ; 0052193e
    DEC EAX                             ; 00521940
    PUSH EAX                            ; 00521941
    MOV EAX,dword ptr [ESP + 0x10]      ; 00521942
    DEC EAX                             ; 00521946
    PUSH EAX                            ; 00521947
    PUSH 0x0                            ; 00521948
    PUSH 0x0                            ; 0052194a
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 0052194c
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 00521951
    PUSH 0x0                            ; 00521954
        ;   Label: LAB_00521954
    LEA EAX,[EBX + -0x1]                ; 00521956
    PUSH EAX                            ; 00521959
    MOV EAX,dword ptr [ESP + 0x10]      ; 0052195a
    DEC EAX                             ; 0052195e
    PUSH EAX                            ; 0052195f
    MOV EAX,EBX                         ; 00521960
    SUB EAX,ESI                         ; 00521962
    PUSH EAX                            ; 00521964
    MOV EAX,dword ptr [ESP + 0x14]      ; 00521965
    PUSH EAX                            ; 00521969
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 0052196a
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 0052196f
    MOV EAX,[0x01c35e4c]                ; 00521972 | DAT_01c35e4c
        ;   Label: LAB_00521972
    MOV dword ptr [ESP],EAX             ; 00521977
    MOV EAX,EBX                         ; 0052197a
    SUB EAX,ESI                         ; 0052197c
    MOV ESI,EAX                         ; 0052197e
    CMP byte ptr [EDI + 0x50],0x0       ; 00521980
    JZ 0x00521ab0                       ; 00521984
        ;   XREF to: 00521ab0 (CONDITIONAL_JUMP)  ; LAB_00521ab0
    MOV EAX,[0x00616494]                ; 0052198a | g_CGamePtr
    CMP dword ptr [EAX + 0x10],0x0      ; 0052198f | g_CGameInstance.field7_0x10
    JZ 0x00521ab0                       ; 00521993
        ;   XREF to: 00521ab0 (CONDITIONAL_JUMP)  ; LAB_00521ab0
    MOV ECX,dword ptr [0x006141bc]      ; 00521999 | DAT_006141bc
    MOV EBP,dword ptr [0x01511cb8]      ; 0052199f | DAT_01511cb8
    CMP ECX,0x1e0                       ; 005219a5
    JGE 0x005219b3                      ; 005219ab
        ;   XREF to: 005219b3 (CONDITIONAL_JUMP)  ; LAB_005219b3
    MOV EBP,dword ptr [0x01511cbc]      ; 005219ad | DAT_01511cbc
    CMP dword ptr [0x006141bc],0x180    ; 005219b3 | DAT_006141bc
        ;   Label: LAB_005219b3
    JGE 0x005219d2                      ; 005219bd
        ;   XREF to: 005219d2 (CONDITIONAL_JUMP)  ; LAB_005219d2
    CMP dword ptr [0x01d63250],0x0      ; 005219bf | DAT_01d63250
    JZ 0x00521ae5                       ; 005219c6
        ;   XREF to: 00521ae5 (CONDITIONAL_JUMP)  ; LAB_00521ae5
    MOV EBP,dword ptr [0x01511cc4]      ; 005219cc | DAT_01511cc4
    MOV EDX,dword ptr [0x006141b8]      ; 005219d2 | DAT_006141b8
        ;   Label: LAB_005219d2
    LEA EAX,[EDX*0x8 + 0x0]             ; 005219d8
    ADD EDX,EAX                         ; 005219df
    MOV ECX,0xa                         ; 005219e1
    MOV EAX,EDX                         ; 005219e6
    SAR EDX,0x1f                        ; 005219e8
    IDIV ECX                            ; 005219eb
    PUSH EAX                            ; 005219ed
    PUSH 0x400                          ; 005219ee
    PUSH ECX                            ; 005219f3
    PUSH 0x1e620f8                      ; 005219f4
    ADD EDI,0x50                        ; 005219f9
    PUSH EDI                            ; 005219fc
    PUSH EBP                            ; 005219fd
    CALL engine_font.cpp_FUN_004ab2b0   ; 005219fe
        ;   XREF to: 004ab2b0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004ab2b0()
    ADD ESP,0x18                        ; 00521a03
    PUSH 0x58                           ; 00521a06
    PUSH EBP                            ; 00521a08
    MOV EDI,EAX                         ; 00521a09
    MOV dword ptr [ESP + 0x1c],EAX      ; 00521a0b
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 00521a0f
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    MOV EDX,EAX                         ; 00521a14
    IMUL EDX,EDI                        ; 00521a16
    ADD ESI,EBX                         ; 00521a19
    MOV ECX,EAX                         ; 00521a1b
    ADD ESP,0x8                         ; 00521a1d
    SUB ESI,EDX                         ; 00521a20
    MOV dword ptr [ESP + 0xc],EAX       ; 00521a22
    MOV EDX,ESI                         ; 00521a26
    MOV EAX,ESI                         ; 00521a28
    SAR EDX,0x1f                        ; 00521a2a
    SUB EAX,EDX                         ; 00521a2d
    SAR EAX,0x1                         ; 00521a2f
    MOV ESI,EAX                         ; 00521a31
    CMP EDI,0x4                         ; 00521a33
    JGE 0x00521a3c                      ; 00521a36
        ;   XREF to: 00521a3c (CONDITIONAL_JUMP)  ; LAB_00521a3c
    INC EDI                             ; 00521a38
    IMUL ECX,EDI                        ; 00521a39
    SUB EBX,ECX                         ; 00521a3c
        ;   Label: LAB_00521a3c
    CMP ESI,EBX                         ; 00521a3e
    JLE 0x00521a44                      ; 00521a40
        ;   XREF to: 00521a44 (CONDITIONAL_JUMP)  ; LAB_00521a44
    MOV ESI,EBX                         ; 00521a42
    PUSH 0xffff                         ; 00521a44
        ;   Label: LAB_00521a44
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 00521a49
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    ADD ESP,0x4                         ; 00521a4e
    MOV ECX,dword ptr [ESP + 0x14]      ; 00521a51
    XOR EDI,EDI                         ; 00521a55
    TEST ECX,ECX                        ; 00521a57
    JLE 0x00521ab0                      ; 00521a59
        ;   XREF to: 00521ab0 (CONDITIONAL_JUMP)  ; LAB_00521ab0
    MOV EAX,dword ptr [ESP + 0x4]       ; 00521a5b
    ADD EAX,dword ptr [ESP + 0x8]       ; 00521a5f
    MOV EBX,0x1e620f8                   ; 00521a63
    MOV dword ptr [ESP + 0x10],EAX      ; 00521a68
    PUSH EBX                            ; 00521a6c
        ;   Label: LAB_00521a6c
    PUSH EBP                            ; 00521a6d
    CALL engine_font.cpp_FUN_004aaf00   ; 00521a6e
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004aaf00()
    ADD ESP,0x8                         ; 00521a73
    MOV EDX,dword ptr [ESP + 0x10]      ; 00521a76
    SUB EDX,EAX                         ; 00521a7a
    MOV EAX,EDX                         ; 00521a7c
    SAR EDX,0x1f                        ; 00521a7e
    SUB EAX,EDX                         ; 00521a81
    SAR EAX,0x1                         ; 00521a83
    PUSH 0x0                            ; 00521a85
    PUSH 0xf8                           ; 00521a87
    PUSH ESI                            ; 00521a8c
    PUSH EAX                            ; 00521a8d
    PUSH EBX                            ; 00521a8e
    PUSH EBP                            ; 00521a8f
    INC EDI                             ; 00521a90
    CALL engine_font.cpp_FUN_004a8df0   ; 00521a91
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 00521a96
    ADD EBX,0x400                       ; 00521a99
    MOV EAX,dword ptr [ESP + 0xc]       ; 00521a9f
    MOV EDX,dword ptr [ESP + 0x14]      ; 00521aa3
    ADD ESI,EAX                         ; 00521aa7
    CMP EDI,EDX                         ; 00521aa9
    JL 0x00521a6c                       ; 00521aab
        ;   XREF to: 00521a6c (CONDITIONAL_JUMP)  ; LAB_00521a6c
    LEA EAX,[EAX]                       ; 00521aad
    MOV EAX,dword ptr [ESP]             ; 00521ab0
        ;   Label: LAB_00521ab0
    MOV [0x01c35e4c],EAX                ; 00521ab3 | DAT_01c35e4c
    ADD ESP,0x1c                        ; 00521ab8
    POP EBP                             ; 00521abb
    POP EDI                             ; 00521abc
    POP ESI                             ; 00521abd
    POP EBX                             ; 00521abe
    RET                                 ; 00521abf
    PUSH EAX                            ; 00521ac0
        ;   Label: LAB_00521ac0
    MOV dword ptr [0x01e620f0],EDX      ; 00521ac1 | DAT_01e620f0
    CALL core_charactr.cpp_FUN_0042bff0 ; 00521ac7
        ;   XREF to: 0042bff0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042bff0()
    MOV dword ptr [ESP + 0x1c],EAX      ; 00521acc
    FLD float ptr [ESP + 0x1c]          ; 00521ad0
    FDIV float ptr [0x005e2eb3]         ; 00521ad4 | DAT_005e2eb3
    FADD float ptr [0x01e65900]         ; 00521ada | DAT_01e65900
    JMP 0x005218d8                      ; 00521ae0
        ;   XREF to: 005218d8 (UNCONDITIONAL_JUMP)  ; LAB_005218d8
    MOV EBP,dword ptr [0x01511ccc]      ; 00521ae5 | DAT_01511ccc
        ;   Label: LAB_00521ae5
    JMP 0x005219d2                      ; 00521aeb
        ;   XREF to: 005219d2 (UNCONDITIONAL_JUMP)  ; LAB_005219d2


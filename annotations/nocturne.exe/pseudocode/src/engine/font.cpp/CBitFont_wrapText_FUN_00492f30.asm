; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_wrapText_FUN_00492f30(undefined4 param_1,char *param_2,char *param_3,int param_4,int param_5,int param_6)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   FUN_004c2470 at 004c26f8
;   FUN_004fe770 at 004fe8d0
;   core_game.cpp_CGame_displayActStats_FUN_004a6680 at 004a696f
;   core_game.cpp_CGame_finishAct_FUN_004a6a10 at 004a6ded
;   core_game.cpp_CGame_renderOverlay_FUN_0049ab50 at 0049afa5
;   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_00471b50 at 00471ce5
;
; Referenced Globals:
;   undefined4 DAT_005c168c
;
; Called Functions:
;   crt_memory.c_memset_FUN_00563cc0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00492f30
        ;   Label: engine_font.cpp_CBitFont_wrapText_FUN_00492f30
    PUSH ESI                            ; 00492f31
    PUSH EDI                            ; 00492f32
    PUSH EBP                            ; 00492f33
    SUB ESP,0x1c                        ; 00492f34
    MOV EBX,dword ptr [ESP + 0x34]      ; 00492f37
    MOV EDI,dword ptr [ESP + 0x38]      ; 00492f3b
    MOV ESI,dword ptr [ESP + 0x40]      ; 00492f3f
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00492f43
    IMUL EAX,ESI                        ; 00492f47
    PUSH EAX                            ; 00492f4a
    PUSH 0x0                            ; 00492f4b
    PUSH EDI                            ; 00492f4d
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00492f4e
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    ADD ESP,0xc                         ; 00492f53
    TEST EBX,EBX                        ; 00492f56
    JZ 0x00492f99                       ; 00492f58
        ;   XREF to: 00492f99 (CONDITIONAL_JUMP)  ; LAB_00492f99
    XOR EDX,EDX                         ; 00492f5a
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00492f5c
    MOV dword ptr [ESP + 0x8],EDX       ; 00492f60
    TEST ECX,ECX                        ; 00492f64
    JLE 0x0049303e                      ; 00492f66
        ;   XREF to: 0049303e (CONDITIONAL_JUMP)  ; LAB_0049303e
    LEA EAX,[ESI + -0x1]                ; 00492f6c
    MOV dword ptr [ESP],ESI             ; 00492f6f
    MOV dword ptr [ESP + 0x10],EAX      ; 00492f72
    IMUL EAX,ESI,0x0                    ; 00492f76
    ADD EAX,EDI                         ; 00492f79
    MOV dword ptr [ESP + 0x14],EAX      ; 00492f7b
    MOV AL,byte ptr [EBX]               ; 00492f7f
        ;   Label: LAB_00492f7f
    INC AL                              ; 00492f81
    AND EAX,0xff                        ; 00492f83
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 00492f88 | DAT_005c168c
    JZ 0x00492fa3                       ; 00492f8f
        ;   XREF to: 00492fa3 (CONDITIONAL_JUMP)  ; LAB_00492fa3
    CMP byte ptr [EBX],0xa              ; 00492f91
    JZ 0x00492fa3                       ; 00492f94
        ;   XREF to: 00492fa3 (CONDITIONAL_JUMP)  ; LAB_00492fa3
    INC EBX                             ; 00492f96
    JMP 0x00492f7f                      ; 00492f97
        ;   XREF to: 00492f7f (UNCONDITIONAL_JUMP)  ; LAB_00492f7f
    XOR EAX,EAX                         ; 00492f99
        ;   Label: LAB_00492f99
    ADD ESP,0x1c                        ; 00492f9b
    POP EBP                             ; 00492f9e
    POP EDI                             ; 00492f9f
    POP ESI                             ; 00492fa0
    POP EBX                             ; 00492fa1
    RET                                 ; 00492fa2
    CMP byte ptr [EBX],0x0              ; 00492fa3
        ;   Label: LAB_00492fa3
    JZ 0x0049303e                       ; 00492fa6
        ;   XREF to: 0049303e (CONDITIONAL_JUMP)  ; LAB_0049303e
    MOV EAX,dword ptr [ESP + 0x14]      ; 00492fac
    MOV EDI,0xffffffff                  ; 00492fb0
    MOV EDX,dword ptr [ESP + 0x14]      ; 00492fb5
    MOV ECX,dword ptr [ESP + 0x8]       ; 00492fb9
    MOV ESI,EBX                         ; 00492fbd
    XOR EBP,EBP                         ; 00492fbf
    MOV dword ptr [ESP + 0x4],EAX       ; 00492fc1
    MOV dword ptr [ESP + 0x18],EDI      ; 00492fc5
    MOV EAX,dword ptr [ESP]             ; 00492fc9
    INC ECX                             ; 00492fcc
    ADD EDX,EAX                         ; 00492fcd
    MOV dword ptr [ESP + 0x8],ECX       ; 00492fcf
    MOV dword ptr [ESP + 0x14],EDX      ; 00492fd3
    XOR EAX,EAX                         ; 00492fd7
        ;   Label: LAB_00492fd7
    MOV AL,byte ptr [ESI]               ; 00492fd9
    MOV dword ptr [ESP + 0xc],EAX       ; 00492fdb
    CMP EAX,0xa                         ; 00492fdf
    JNZ 0x0049304a                      ; 00492fe2
        ;   XREF to: 0049304a (CONDITIONAL_JUMP)  ; LAB_0049304a
    MOV EDX,EBP                         ; 00492fe4
        ;   Label: LAB_00492fe4
    TEST EBP,EBP                        ; 00492fe6
    JLE 0x00493006                      ; 00492fe8
        ;   XREF to: 00493006 (CONDITIONAL_JUMP)  ; LAB_00493006
    LEA ESI,[EBX + EBP*0x1]             ; 00492fea
    MOV AL,byte ptr [ESI + -0x1]        ; 00492fed
        ;   Label: LAB_00492fed
    INC AL                              ; 00492ff0
    AND EAX,0xff                        ; 00492ff2
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 00492ff7 | DAT_005c168c
    JZ 0x00493006                       ; 00492ffe
        ;   XREF to: 00493006 (CONDITIONAL_JUMP)  ; LAB_00493006
    DEC EDX                             ; 00493000
    DEC ESI                             ; 00493001
    TEST EDX,EDX                        ; 00493002
    JG 0x00492fed                       ; 00493004
        ;   XREF to: 00492fed (CONDITIONAL_JUMP)  ; LAB_00492fed
    MOV EDI,dword ptr [ESP + 0x4]       ; 00493006
        ;   Label: LAB_00493006
    MOV ECX,EDX                         ; 0049300a
    MOV ESI,EBX                         ; 0049300c
    ADD EDX,EDI                         ; 0049300e
    PUSH EDI                            ; 00493010
    MOV EAX,ECX                         ; 00493011
    SHR ECX,0x2                         ; 00493013
    MOVSD.REP ES:EDI,ESI                ; 00493016
    MOV CL,AL                           ; 00493018
    AND CL,0x3                          ; 0049301a
    MOVSB.REP ES:EDI,ESI                ; 0049301d
    POP EDI                             ; 0049301f
    LEA EAX,[EBX + EBP*0x1]             ; 00493020
    MOV byte ptr [EDX],0x0              ; 00493023
    CMP byte ptr [EAX],0xa              ; 00493026
    JNZ 0x0049302c                      ; 00493029
        ;   XREF to: 0049302c (CONDITIONAL_JUMP)  ; LAB_0049302c
    INC EBP                             ; 0049302b
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049302c
        ;   Label: LAB_0049302c
    MOV ESI,dword ptr [ESP + 0x3c]      ; 00493030
    ADD EBX,EBP                         ; 00493034
    CMP EAX,ESI                         ; 00493036
    JL 0x00492f7f                       ; 00493038
        ;   XREF to: 00492f7f (CONDITIONAL_JUMP)  ; LAB_00492f7f
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049303e
        ;   Label: LAB_0049303e
    ADD ESP,0x1c                        ; 00493042
    POP EBP                             ; 00493045
    POP EDI                             ; 00493046
    POP ESI                             ; 00493047
    POP EBX                             ; 00493048
    RET                                 ; 00493049
    TEST EAX,EAX                        ; 0049304a
        ;   Label: LAB_0049304a
    JZ 0x00492fe4                       ; 0049304c
        ;   XREF to: 00492fe4 (CONDITIONAL_JUMP)  ; LAB_00492fe4
    MOV AL,byte ptr [ESP + 0xc]         ; 0049304e
    INC AL                              ; 00493052
    AND EAX,0xff                        ; 00493054
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 00493059 | DAT_005c168c
    JZ 0x00493066                       ; 00493060
        ;   XREF to: 00493066 (CONDITIONAL_JUMP)  ; LAB_00493066
    MOV dword ptr [ESP + 0x18],EBP      ; 00493062
    MOV EDX,dword ptr [ESP + 0x10]      ; 00493066
        ;   Label: LAB_00493066
    XOR EDI,EDI                         ; 0049306a
    CMP EBP,EDX                         ; 0049306c
    JL 0x0049307b                       ; 0049306e
        ;   XREF to: 0049307b (CONDITIONAL_JUMP)  ; LAB_0049307b
    TEST EDI,EDI                        ; 00493070
        ;   Label: LAB_00493070
    JZ 0x0049309a                       ; 00493072
        ;   XREF to: 0049309a (CONDITIONAL_JUMP)  ; LAB_0049309a
    INC EBP                             ; 00493074
        ;   Label: LAB_00493074
    INC ESI                             ; 00493075
    JMP 0x00492fd7                      ; 00493076
        ;   XREF to: 00492fd7 (UNCONDITIONAL_JUMP)  ; LAB_00492fd7
    PUSH EBX                            ; 0049307b
        ;   Label: LAB_0049307b
    MOV ECX,dword ptr [ESP + 0x34]      ; 0049307c
    PUSH ECX                            ; 00493080
    MOV byte ptr [ESI],0x0              ; 00493081
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 00493084
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    ADD ESP,0x8                         ; 00493089
    MOV DL,byte ptr [ESP + 0xc]         ; 0049308c
    MOV byte ptr [ESI],DL               ; 00493090
    CMP EAX,dword ptr [ESP + 0x44]      ; 00493092
    JG 0x00493070                       ; 00493096
        ;   XREF to: 00493070 (CONDITIONAL_JUMP)  ; LAB_00493070
    JMP 0x00493074                      ; 00493098
        ;   XREF to: 00493074 (UNCONDITIONAL_JUMP)  ; LAB_00493074
    MOV ECX,dword ptr [ESP + 0x18]      ; 0049309a
        ;   Label: LAB_0049309a
    TEST ECX,ECX                        ; 0049309e
    JL 0x00492fe4                       ; 004930a0
        ;   XREF to: 00492fe4 (CONDITIONAL_JUMP)  ; LAB_00492fe4
    MOV EBP,ECX                         ; 004930a6
    JMP 0x00492fe4                      ; 004930a8
        ;   XREF to: 00492fe4 (UNCONDITIONAL_JUMP)  ; LAB_00492fe4


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_0045ce40(CDemonLight *this_ptr,int screen_x,int screen_y,int display_size)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   screen_x
; int              Stack[0xc]:4   screen_y
; int              Stack[0x10]:4   display_size
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
;   core_set.cpp_CDemonSet_renderLightDebugView_FUN_005373e0 at 00537416
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_01c5faec
;   undefined4 g_CGameInstance.camera_debug_enabled
;
; Called Functions:
;   engine_2d.c_drawTextCenteredXYColor_FUN_00402710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ce40
        ;   Label: core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_0045ce40
    PUSH ESI                            ; 0045ce41
    PUSH EDI                            ; 0045ce42
    PUSH EBP                            ; 0045ce43
    SUB ESP,0x1c                        ; 0045ce44
    MOV EBX,dword ptr [ESP + 0x30]      ; 0045ce47
    MOV EDX,dword ptr [ESP + 0x34]      ; 0045ce4b
    TEST EDX,EDX                        ; 0045ce4f
    JL 0x0045d033                       ; 0045ce51
        ;   XREF to: 0045d033 (CONDITIONAL_JUMP)  ; LAB_0045d033
    MOV ECX,dword ptr [ESP + 0x38]      ; 0045ce57
    TEST ECX,ECX                        ; 0045ce5b
    JL 0x0045d033                       ; 0045ce5d
        ;   XREF to: 0045d033 (CONDITIONAL_JUMP)  ; LAB_0045d033
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0045ce63
    MOV EDI,dword ptr [0x005fba18]      ; 0045ce67 | DAT_005fba18
    LEA EAX,[EDX + ESI*0x1]             ; 0045ce6d
    CMP EAX,EDI                         ; 0045ce70
    JG 0x0045d033                       ; 0045ce72
        ;   XREF to: 0045d033 (CONDITIONAL_JUMP)  ; LAB_0045d033
    MOV EDX,dword ptr [0x005fba1c]      ; 0045ce78 | DAT_005fba1c
    LEA EAX,[ECX + ESI*0x1]             ; 0045ce7e
    CMP EAX,EDX                         ; 0045ce81
    JG 0x0045d033                       ; 0045ce83
        ;   XREF to: 0045d033 (CONDITIONAL_JUMP)  ; LAB_0045d033
    MOV EDX,dword ptr [EBX + 0x1cc0]    ; 0045ce89
    SHL EDX,0x8                         ; 0045ce8f
    MOV EAX,EDX                         ; 0045ce92
    SAR EDX,0x1f                        ; 0045ce94
    IDIV ESI                            ; 0045ce97
    MOV dword ptr [ESP + 0x18],0x20000  ; 0045ce99
    XOR ESI,ESI                         ; 0045cea1
    MOV EBP,EAX                         ; 0045cea3
    MOV dword ptr [ESP + 0x8],ESI       ; 0045cea5
    MOV EAX,dword ptr [EBX + 0x1cc4]    ; 0045cea9
        ;   Label: LAB_0045cea9
    MOV EDX,dword ptr [ESP + 0x8]       ; 0045ceaf
    SHL EAX,0x8                         ; 0045ceb3
    CMP EAX,EDX                         ; 0045ceb6
    JG 0x0045cf11                       ; 0045ceb8
        ;   XREF to: 0045cf11 (CONDITIONAL_JUMP)  ; LAB_0045cf11
    MOV ECX,dword ptr [ESP + 0x18]      ; 0045ceba
    CMP ESI,ECX                         ; 0045cebe
    JZ 0x0045cf7f                       ; 0045cec0
        ;   XREF to: 0045cf7f (CONDITIONAL_JUMP)  ; LAB_0045cf7f
    SUB ESI,dword ptr [ESP + 0x18]      ; 0045cec6
        ;   Label: LAB_0045cec6
    XOR EDI,EDI                         ; 0045ceca
    MOV dword ptr [ESP + 0xc],ESI       ; 0045cecc
    MOV EAX,dword ptr [EBX + 0x1cc4]    ; 0045ced0
        ;   Label: LAB_0045ced0
    SHL EAX,0x8                         ; 0045ced6
    CMP EDI,EAX                         ; 0045ced9
    JGE 0x0045d025                      ; 0045cedb
        ;   XREF to: 0045d025 (CONDITIONAL_JUMP)  ; LAB_0045d025
    MOV EDX,EDI                         ; 0045cee1
    MOV EAX,EDI                         ; 0045cee3
    SAR EDX,0x1f                        ; 0045cee5
    SHL EDX,0x8                         ; 0045cee8
    SBB EAX,EDX                         ; 0045ceeb
    SAR EAX,0x8                         ; 0045ceed
    XOR ECX,ECX                         ; 0045cef0
    MOV dword ptr [ESP + 0x10],EAX      ; 0045cef2
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 0045cef6
        ;   Label: LAB_0045cef6
    SHL EAX,0x8                         ; 0045cefc
    CMP ECX,EAX                         ; 0045ceff
    JL 0x0045cf87                       ; 0045cf01
        ;   XREF to: 0045cf87 (CONDITIONAL_JUMP)  ; LAB_0045cf87
    ADD EDI,EBP                         ; 0045cf07
    JMP 0x0045ced0                      ; 0045cf09
        ;   XREF to: 0045ced0 (UNCONDITIONAL_JUMP)  ; LAB_0045ced0
    ADD dword ptr [ESP + 0x8],EBP       ; 0045cf0b
        ;   Label: LAB_0045cf0b
    JMP 0x0045cea9                      ; 0045cf0f
        ;   XREF to: 0045cea9 (UNCONDITIONAL_JUMP)  ; LAB_0045cea9
    MOV EAX,EDX                         ; 0045cf11
        ;   Label: LAB_0045cf11
    SAR EDX,0x1f                        ; 0045cf13
    SHL EDX,0x8                         ; 0045cf16
    SBB EAX,EDX                         ; 0045cf19
    SAR EAX,0x8                         ; 0045cf1b
    XOR ECX,ECX                         ; 0045cf1e
    MOV dword ptr [ESP + 0x14],EAX      ; 0045cf20
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 0045cf24
        ;   Label: LAB_0045cf24
    SHL EAX,0x8                         ; 0045cf2a
    CMP ECX,EAX                         ; 0045cf2d
    JGE 0x0045cf0b                      ; 0045cf2f
        ;   XREF to: 0045cf0b (CONDITIONAL_JUMP)  ; LAB_0045cf0b
    MOV EDI,dword ptr [ESP + 0x14]      ; 0045cf31
    IMUL EDI,dword ptr [EBX + 0x1cc0]   ; 0045cf35
    MOV EDX,ECX                         ; 0045cf3c
    SAR EDX,0x1f                        ; 0045cf3e
    MOV EAX,ECX                         ; 0045cf41
    SHL EDX,0x8                         ; 0045cf43
    SBB EAX,EDX                         ; 0045cf46
    SAR EAX,0x8                         ; 0045cf48
    MOV EDX,dword ptr [EBX + 0x2f94]    ; 0045cf4b
    ADD EAX,EDI                         ; 0045cf51
    MOV AX,word ptr [EDX + EAX*0x2]     ; 0045cf53
    AND EAX,0xffff                      ; 0045cf57
    TEST EAX,EAX                        ; 0045cf5c
    JLE 0x0045cf67                      ; 0045cf5e
        ;   XREF to: 0045cf67 (CONDITIONAL_JUMP)  ; LAB_0045cf67
    CMP EAX,0xffff                      ; 0045cf60
    JL 0x0045cf6b                       ; 0045cf65
        ;   XREF to: 0045cf6b (CONDITIONAL_JUMP)  ; LAB_0045cf6b
    ADD ECX,EBP                         ; 0045cf67
        ;   Label: LAB_0045cf67
    JMP 0x0045cf24                      ; 0045cf69
        ;   XREF to: 0045cf24 (UNCONDITIONAL_JUMP)  ; LAB_0045cf24
    CMP EAX,dword ptr [ESP + 0x18]      ; 0045cf6b
        ;   Label: LAB_0045cf6b
    JGE 0x0045cf75                      ; 0045cf6f
        ;   XREF to: 0045cf75 (CONDITIONAL_JUMP)  ; LAB_0045cf75
    MOV dword ptr [ESP + 0x18],EAX      ; 0045cf71
    CMP EAX,ESI                         ; 0045cf75
        ;   Label: LAB_0045cf75
    JLE 0x0045cf67                      ; 0045cf77
        ;   XREF to: 0045cf67 (CONDITIONAL_JUMP)  ; LAB_0045cf67
    MOV ESI,EAX                         ; 0045cf79
    ADD ECX,EBP                         ; 0045cf7b
    JMP 0x0045cf24                      ; 0045cf7d
        ;   XREF to: 0045cf24 (UNCONDITIONAL_JUMP)  ; LAB_0045cf24
    LEA ESI,[ECX + 0x1]                 ; 0045cf7f
        ;   Label: LAB_0045cf7f
    JMP 0x0045cec6                      ; 0045cf82
        ;   XREF to: 0045cec6 (UNCONDITIONAL_JUMP)  ; LAB_0045cec6
    MOV ESI,dword ptr [ESP + 0x10]      ; 0045cf87
        ;   Label: LAB_0045cf87
    IMUL ESI,dword ptr [EBX + 0x1cc0]   ; 0045cf8b
    MOV EDX,ECX                         ; 0045cf92
    SAR EDX,0x1f                        ; 0045cf94
    MOV EAX,ECX                         ; 0045cf97
    SHL EDX,0x8                         ; 0045cf99
    SBB EAX,EDX                         ; 0045cf9c
    SAR EAX,0x8                         ; 0045cf9e
    ADD EAX,ESI                         ; 0045cfa1
    LEA EDX,[EAX + EAX*0x1]             ; 0045cfa3
    MOV EAX,dword ptr [EBX + 0x2f94]    ; 0045cfa6
    MOV AX,word ptr [EDX + EAX*0x1]     ; 0045cfac
    AND EAX,0xffff                      ; 0045cfb0
    CMP EAX,0xffff                      ; 0045cfb5
    JGE 0x0045d01e                      ; 0045cfba
        ;   XREF to: 0045d01e (CONDITIONAL_JUMP)  ; LAB_0045d01e
    TEST EAX,EAX                        ; 0045cfbc
    JLE 0x0045d01e                      ; 0045cfbe
        ;   XREF to: 0045d01e (CONDITIONAL_JUMP)  ; LAB_0045d01e
    SUB EAX,dword ptr [ESP + 0x18]      ; 0045cfc0
    IMUL EDX,EAX,0xff                   ; 0045cfc4
    MOV ESI,dword ptr [ESP + 0xc]       ; 0045cfca
    MOV EAX,EDX                         ; 0045cfce
    SAR EDX,0x1f                        ; 0045cfd0
    IDIV ESI                            ; 0045cfd3
    MOV ESI,EAX                         ; 0045cfd5
    MOV EDX,EDI                         ; 0045cfd7
    MOV EAX,EDI                         ; 0045cfd9
    SAR EDX,0x1f                        ; 0045cfdb
    IDIV EBP                            ; 0045cfde
    MOV EDX,dword ptr [ESP + 0x38]      ; 0045cfe0
    ADD EDX,EAX                         ; 0045cfe4
    MOV dword ptr [ESP],EDX             ; 0045cfe6
    MOV EDX,ECX                         ; 0045cfe9
    MOV EAX,ECX                         ; 0045cfeb
    SAR EDX,0x1f                        ; 0045cfed
    IDIV EBP                            ; 0045cff0
    MOV EDX,dword ptr [ESP + 0x34]      ; 0045cff2
    ADD EDX,EAX                         ; 0045cff6
    MOV EAX,dword ptr [ESP]             ; 0045cff8
    SHL EDX,0x2                         ; 0045cffb
    MOV EAX,dword ptr [EAX*0x4 + 0x1c5faec] ; 0045cffe | DAT_01c5faec
    ADD EDX,EAX                         ; 0045d005
    MOV EAX,ESI                         ; 0045d007
    SHL EAX,0x8                         ; 0045d009
    ADD EAX,ESI                         ; 0045d00c
    SHL ESI,0x10                        ; 0045d00e
    MOV dword ptr [ESP + 0x4],EDX       ; 0045d011
    LEA EDX,[ESI + EAX*0x1]             ; 0045d015
    MOV EAX,dword ptr [ESP + 0x4]       ; 0045d018
    MOV dword ptr [EAX],EDX             ; 0045d01c
    ADD ECX,EBP                         ; 0045d01e
        ;   Label: LAB_0045d01e
    JMP 0x0045cef6                      ; 0045d020
        ;   XREF to: 0045cef6 (UNCONDITIONAL_JUMP)  ; LAB_0045cef6
    MOV EAX,[0x005fe9dc]                ; 0045d025 | g_CGamePtr
        ;   Label: LAB_0045d025
    CMP dword ptr [EAX + 0x208],0x0     ; 0045d02a | g_CGameInstance.camera_debug_enabled
    JNZ 0x0045d03b                      ; 0045d031
        ;   XREF to: 0045d03b (CONDITIONAL_JUMP)  ; LAB_0045d03b
    ADD ESP,0x1c                        ; 0045d033
        ;   Label: LAB_0045d033
    POP EBP                             ; 0045d036
        ;   Label: LAB_0045d036
    POP EDI                             ; 0045d037
    POP ESI                             ; 0045d038
    POP EBX                             ; 0045d039
    RET                                 ; 0045d03a
    ADD EBX,0x40                        ; 0045d03b
        ;   Label: LAB_0045d03b
    MOV EAX,dword ptr [ESP + 0x38]      ; 0045d03e
    PUSH EBX                            ; 0045d042
    MOV EBX,dword ptr [ESP + 0x40]      ; 0045d043
    ADD EAX,EBX                         ; 0045d047
    SUB EAX,0xb                         ; 0045d049
    PUSH EAX                            ; 0045d04c
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0045d04d
    ADD EAX,EBX                         ; 0045d051
    PUSH EAX                            ; 0045d053
    MOV EDI,dword ptr [ESP + 0x40]      ; 0045d054
    PUSH EDI                            ; 0045d058
    CALL engine_2d.c_drawTextCenteredXYColor_FUN_00402710 ; 0045d059
        ;   XREF to: 00402710 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextCenteredXYColor_FUN_00402710(int left_x, int right_x, int y, char * text)
    ADD ESP,0x10                        ; 0045d05e
    ADD ESP,0x1c                        ; 0045d061
    POP EBP                             ; 0045d064
    POP EDI                             ; 0045d065
    POP ESI                             ; 0045d066
    POP EBX                             ; 0045d067
    RET                                 ; 0045d068


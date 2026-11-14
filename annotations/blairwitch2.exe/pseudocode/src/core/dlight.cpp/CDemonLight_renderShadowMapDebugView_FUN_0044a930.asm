; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_0044a930(CDemonLight *this_ptr,int screen_x,int screen_y,int display_size)
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
;   core_set.cpp_CDemonSet_renderLightDebugView_FUN_005307a0 at 005307d6
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_01c2a38c
;   undefined4 g_CGameInstance.camera_debug_enabled
;
; Called Functions:
;   engine_2d.c_drawTextCenteredXYColor_FUN_00402710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044a930
        ;   Label: core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_0044a930
    PUSH ESI                            ; 0044a931
    PUSH EDI                            ; 0044a932
    PUSH EBP                            ; 0044a933
    SUB ESP,0x1c                        ; 0044a934
    MOV EBX,dword ptr [ESP + 0x30]      ; 0044a937
    MOV EDX,dword ptr [ESP + 0x34]      ; 0044a93b
    TEST EDX,EDX                        ; 0044a93f
    JL 0x0044ab23                       ; 0044a941
        ;   XREF to: 0044ab23 (CONDITIONAL_JUMP)  ; LAB_0044ab23
    MOV ECX,dword ptr [ESP + 0x38]      ; 0044a947
    TEST ECX,ECX                        ; 0044a94b
    JL 0x0044ab23                       ; 0044a94d
        ;   XREF to: 0044ab23 (CONDITIONAL_JUMP)  ; LAB_0044ab23
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0044a953
    MOV EDI,dword ptr [0x006141b8]      ; 0044a957 | DAT_006141b8
    LEA EAX,[EDX + ESI*0x1]             ; 0044a95d
    CMP EAX,EDI                         ; 0044a960
    JG 0x0044ab23                       ; 0044a962
        ;   XREF to: 0044ab23 (CONDITIONAL_JUMP)  ; LAB_0044ab23
    MOV EDX,dword ptr [0x006141bc]      ; 0044a968 | DAT_006141bc
    LEA EAX,[ECX + ESI*0x1]             ; 0044a96e
    CMP EAX,EDX                         ; 0044a971
    JG 0x0044ab23                       ; 0044a973
        ;   XREF to: 0044ab23 (CONDITIONAL_JUMP)  ; LAB_0044ab23
    MOV EDX,dword ptr [EBX + 0x1cc0]    ; 0044a979
    SHL EDX,0x8                         ; 0044a97f
    MOV EAX,EDX                         ; 0044a982
    SAR EDX,0x1f                        ; 0044a984
    IDIV ESI                            ; 0044a987
    MOV dword ptr [ESP + 0x18],0x20000  ; 0044a989
    XOR ESI,ESI                         ; 0044a991
    MOV EBP,EAX                         ; 0044a993
    MOV dword ptr [ESP + 0x8],ESI       ; 0044a995
    MOV EAX,dword ptr [EBX + 0x1cc4]    ; 0044a999
        ;   Label: LAB_0044a999
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044a99f
    SHL EAX,0x8                         ; 0044a9a3
    CMP EAX,EDX                         ; 0044a9a6
    JG 0x0044aa01                       ; 0044a9a8
        ;   XREF to: 0044aa01 (CONDITIONAL_JUMP)  ; LAB_0044aa01
    MOV ECX,dword ptr [ESP + 0x18]      ; 0044a9aa
    CMP ESI,ECX                         ; 0044a9ae
    JZ 0x0044aa6f                       ; 0044a9b0
        ;   XREF to: 0044aa6f (CONDITIONAL_JUMP)  ; LAB_0044aa6f
    SUB ESI,dword ptr [ESP + 0x18]      ; 0044a9b6
        ;   Label: LAB_0044a9b6
    XOR EDI,EDI                         ; 0044a9ba
    MOV dword ptr [ESP + 0xc],ESI       ; 0044a9bc
    MOV EAX,dword ptr [EBX + 0x1cc4]    ; 0044a9c0
        ;   Label: LAB_0044a9c0
    SHL EAX,0x8                         ; 0044a9c6
    CMP EDI,EAX                         ; 0044a9c9
    JGE 0x0044ab15                      ; 0044a9cb
        ;   XREF to: 0044ab15 (CONDITIONAL_JUMP)  ; LAB_0044ab15
    MOV EDX,EDI                         ; 0044a9d1
    MOV EAX,EDI                         ; 0044a9d3
    SAR EDX,0x1f                        ; 0044a9d5
    SHL EDX,0x8                         ; 0044a9d8
    SBB EAX,EDX                         ; 0044a9db
    SAR EAX,0x8                         ; 0044a9dd
    XOR ECX,ECX                         ; 0044a9e0
    MOV dword ptr [ESP + 0x10],EAX      ; 0044a9e2
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 0044a9e6
        ;   Label: LAB_0044a9e6
    SHL EAX,0x8                         ; 0044a9ec
    CMP ECX,EAX                         ; 0044a9ef
    JL 0x0044aa77                       ; 0044a9f1
        ;   XREF to: 0044aa77 (CONDITIONAL_JUMP)  ; LAB_0044aa77
    ADD EDI,EBP                         ; 0044a9f7
    JMP 0x0044a9c0                      ; 0044a9f9
        ;   XREF to: 0044a9c0 (UNCONDITIONAL_JUMP)  ; LAB_0044a9c0
    ADD dword ptr [ESP + 0x8],EBP       ; 0044a9fb
        ;   Label: LAB_0044a9fb
    JMP 0x0044a999                      ; 0044a9ff
        ;   XREF to: 0044a999 (UNCONDITIONAL_JUMP)  ; LAB_0044a999
    MOV EAX,EDX                         ; 0044aa01
        ;   Label: LAB_0044aa01
    SAR EDX,0x1f                        ; 0044aa03
    SHL EDX,0x8                         ; 0044aa06
    SBB EAX,EDX                         ; 0044aa09
    SAR EAX,0x8                         ; 0044aa0b
    XOR ECX,ECX                         ; 0044aa0e
    MOV dword ptr [ESP + 0x14],EAX      ; 0044aa10
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 0044aa14
        ;   Label: LAB_0044aa14
    SHL EAX,0x8                         ; 0044aa1a
    CMP ECX,EAX                         ; 0044aa1d
    JGE 0x0044a9fb                      ; 0044aa1f
        ;   XREF to: 0044a9fb (CONDITIONAL_JUMP)  ; LAB_0044a9fb
    MOV EDI,dword ptr [ESP + 0x14]      ; 0044aa21
    IMUL EDI,dword ptr [EBX + 0x1cc0]   ; 0044aa25
    MOV EDX,ECX                         ; 0044aa2c
    SAR EDX,0x1f                        ; 0044aa2e
    MOV EAX,ECX                         ; 0044aa31
    SHL EDX,0x8                         ; 0044aa33
    SBB EAX,EDX                         ; 0044aa36
    SAR EAX,0x8                         ; 0044aa38
    MOV EDX,dword ptr [EBX + 0x2f94]    ; 0044aa3b
    ADD EAX,EDI                         ; 0044aa41
    MOV AX,word ptr [EDX + EAX*0x2]     ; 0044aa43
    AND EAX,0xffff                      ; 0044aa47
    TEST EAX,EAX                        ; 0044aa4c
    JLE 0x0044aa57                      ; 0044aa4e
        ;   XREF to: 0044aa57 (CONDITIONAL_JUMP)  ; LAB_0044aa57
    CMP EAX,0xffff                      ; 0044aa50
    JL 0x0044aa5b                       ; 0044aa55
        ;   XREF to: 0044aa5b (CONDITIONAL_JUMP)  ; LAB_0044aa5b
    ADD ECX,EBP                         ; 0044aa57
        ;   Label: LAB_0044aa57
    JMP 0x0044aa14                      ; 0044aa59
        ;   XREF to: 0044aa14 (UNCONDITIONAL_JUMP)  ; LAB_0044aa14
    CMP EAX,dword ptr [ESP + 0x18]      ; 0044aa5b
        ;   Label: LAB_0044aa5b
    JGE 0x0044aa65                      ; 0044aa5f
        ;   XREF to: 0044aa65 (CONDITIONAL_JUMP)  ; LAB_0044aa65
    MOV dword ptr [ESP + 0x18],EAX      ; 0044aa61
    CMP EAX,ESI                         ; 0044aa65
        ;   Label: LAB_0044aa65
    JLE 0x0044aa57                      ; 0044aa67
        ;   XREF to: 0044aa57 (CONDITIONAL_JUMP)  ; LAB_0044aa57
    MOV ESI,EAX                         ; 0044aa69
    ADD ECX,EBP                         ; 0044aa6b
    JMP 0x0044aa14                      ; 0044aa6d
        ;   XREF to: 0044aa14 (UNCONDITIONAL_JUMP)  ; LAB_0044aa14
    LEA ESI,[ECX + 0x1]                 ; 0044aa6f
        ;   Label: LAB_0044aa6f
    JMP 0x0044a9b6                      ; 0044aa72
        ;   XREF to: 0044a9b6 (UNCONDITIONAL_JUMP)  ; LAB_0044a9b6
    MOV ESI,dword ptr [ESP + 0x10]      ; 0044aa77
        ;   Label: LAB_0044aa77
    IMUL ESI,dword ptr [EBX + 0x1cc0]   ; 0044aa7b
    MOV EDX,ECX                         ; 0044aa82
    SAR EDX,0x1f                        ; 0044aa84
    MOV EAX,ECX                         ; 0044aa87
    SHL EDX,0x8                         ; 0044aa89
    SBB EAX,EDX                         ; 0044aa8c
    SAR EAX,0x8                         ; 0044aa8e
    ADD EAX,ESI                         ; 0044aa91
    LEA EDX,[EAX + EAX*0x1]             ; 0044aa93
    MOV EAX,dword ptr [EBX + 0x2f94]    ; 0044aa96
    MOV AX,word ptr [EDX + EAX*0x1]     ; 0044aa9c
    AND EAX,0xffff                      ; 0044aaa0
    CMP EAX,0xffff                      ; 0044aaa5
    JGE 0x0044ab0e                      ; 0044aaaa
        ;   XREF to: 0044ab0e (CONDITIONAL_JUMP)  ; LAB_0044ab0e
    TEST EAX,EAX                        ; 0044aaac
    JLE 0x0044ab0e                      ; 0044aaae
        ;   XREF to: 0044ab0e (CONDITIONAL_JUMP)  ; LAB_0044ab0e
    SUB EAX,dword ptr [ESP + 0x18]      ; 0044aab0
    IMUL EDX,EAX,0xff                   ; 0044aab4
    MOV ESI,dword ptr [ESP + 0xc]       ; 0044aaba
    MOV EAX,EDX                         ; 0044aabe
    SAR EDX,0x1f                        ; 0044aac0
    IDIV ESI                            ; 0044aac3
    MOV ESI,EAX                         ; 0044aac5
    MOV EDX,EDI                         ; 0044aac7
    MOV EAX,EDI                         ; 0044aac9
    SAR EDX,0x1f                        ; 0044aacb
    IDIV EBP                            ; 0044aace
    MOV EDX,dword ptr [ESP + 0x38]      ; 0044aad0
    ADD EDX,EAX                         ; 0044aad4
    MOV dword ptr [ESP],EDX             ; 0044aad6
    MOV EDX,ECX                         ; 0044aad9
    MOV EAX,ECX                         ; 0044aadb
    SAR EDX,0x1f                        ; 0044aadd
    IDIV EBP                            ; 0044aae0
    MOV EDX,dword ptr [ESP + 0x34]      ; 0044aae2
    ADD EDX,EAX                         ; 0044aae6
    MOV EAX,dword ptr [ESP]             ; 0044aae8
    SHL EDX,0x2                         ; 0044aaeb
    MOV EAX,dword ptr [EAX*0x4 + 0x1c2a38c] ; 0044aaee | DAT_01c2a38c
    ADD EDX,EAX                         ; 0044aaf5
    MOV EAX,ESI                         ; 0044aaf7
    SHL EAX,0x8                         ; 0044aaf9
    ADD EAX,ESI                         ; 0044aafc
    SHL ESI,0x10                        ; 0044aafe
    MOV dword ptr [ESP + 0x4],EDX       ; 0044ab01
    LEA EDX,[ESI + EAX*0x1]             ; 0044ab05
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044ab08
    MOV dword ptr [EAX],EDX             ; 0044ab0c
    ADD ECX,EBP                         ; 0044ab0e
        ;   Label: LAB_0044ab0e
    JMP 0x0044a9e6                      ; 0044ab10
        ;   XREF to: 0044a9e6 (UNCONDITIONAL_JUMP)  ; LAB_0044a9e6
    MOV EAX,[0x00616494]                ; 0044ab15 | g_CGamePtr
        ;   Label: LAB_0044ab15
    CMP dword ptr [EAX + 0x200],0x0     ; 0044ab1a | g_CGameInstance.camera_debug_enabled
    JNZ 0x0044ab2b                      ; 0044ab21
        ;   XREF to: 0044ab2b (CONDITIONAL_JUMP)  ; LAB_0044ab2b
    ADD ESP,0x1c                        ; 0044ab23
        ;   Label: LAB_0044ab23
    POP EBP                             ; 0044ab26
        ;   Label: LAB_0044ab26
    POP EDI                             ; 0044ab27
    POP ESI                             ; 0044ab28
    POP EBX                             ; 0044ab29
    RET                                 ; 0044ab2a
    ADD EBX,0x40                        ; 0044ab2b
        ;   Label: LAB_0044ab2b
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044ab2e
    PUSH EBX                            ; 0044ab32
    MOV EBX,dword ptr [ESP + 0x40]      ; 0044ab33
    ADD EAX,EBX                         ; 0044ab37
    SUB EAX,0xb                         ; 0044ab39
    PUSH EAX                            ; 0044ab3c
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0044ab3d
    ADD EAX,EBX                         ; 0044ab41
    PUSH EAX                            ; 0044ab43
    MOV EDI,dword ptr [ESP + 0x40]      ; 0044ab44
    PUSH EDI                            ; 0044ab48
    CALL engine_2d.c_drawTextCenteredXYColor_FUN_00402710 ; 0044ab49
        ;   XREF to: 00402710 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextCenteredXYColor_FUN_00402710(int left_x, int right_x, int y, char * text)
    ADD ESP,0x10                        ; 0044ab4e
    ADD ESP,0x1c                        ; 0044ab51
    POP EBP                             ; 0044ab54
    POP EDI                             ; 0044ab55
    POP ESI                             ; 0044ab56
    POP EBX                             ; 0044ab57
    RET                                 ; 0044ab58


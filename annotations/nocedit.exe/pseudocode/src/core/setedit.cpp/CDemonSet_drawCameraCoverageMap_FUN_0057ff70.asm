; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setedit_cpp_CDemonSet_drawCameraCoverageMap_FUN_0057ff70(CDemonSet *this_ptr,char *coverage_map)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   coverage_map
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_setedit.cpp_CDemonSet_editCameraPosition_FUN_0057d660 at 0057dfca
;   core_setedit.cpp_CDemonSet_showScenePreview_FUN_0057a940 at 0057ab2e
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057ff70
        ;   Label: core_setedit.cpp_CDemonSet_drawCameraCoverageMap_FUN_0057ff70
    PUSH ESI                            ; 0057ff71
    PUSH EDI                            ; 0057ff72
    PUSH EBP                            ; 0057ff73
    SUB ESP,0x18                        ; 0057ff74
    MOV EAX,dword ptr [ESP + 0x30]      ; 0057ff77
    XOR EDX,EDX                         ; 0057ff7b
    MOV ECX,dword ptr [0x00679398]      ; 0057ff7d | g_WindowHeight
    MOV dword ptr [ESP],EDX             ; 0057ff83
    MOV dword ptr [ESP + 0xc],EAX       ; 0057ff86
    TEST ECX,ECX                        ; 0057ff8a
    JLE 0x00580063                      ; 0057ff8c
        ;   XREF to: 00580063 (CONDITIONAL_JUMP)  ; LAB_00580063
    MOV dword ptr [ESP + 0x4],EDX       ; 0057ff92
    XOR EAX,EAX                         ; 0057ff96
        ;   Label: LAB_0057ff96
    MOV EDX,dword ptr [0x00679394]      ; 0057ff98 | g_WindowWidth
    MOV dword ptr [ESP + 0x14],EAX      ; 0057ff9e
    TEST EDX,EDX                        ; 0057ffa2
    JLE 0x00580043                      ; 0057ffa4
        ;   XREF to: 00580043 (CONDITIONAL_JUMP)  ; LAB_00580043
    XOR EBP,EBP                         ; 0057ffaa
    MOV EAX,dword ptr [ESP + 0x4]       ; 0057ffac
    MOV dword ptr [ESP + 0x10],EBP      ; 0057ffb0
    MOV dword ptr [ESP + 0x8],EAX       ; 0057ffb4
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057ffb8
        ;   Label: LAB_0057ffb8
    XOR EBX,EBX                         ; 0057ffbc
    MOV BL,byte ptr [EAX]               ; 0057ffbe
    TEST EBX,EBX                        ; 0057ffc0
    JLE 0x00580018                      ; 0057ffc2
        ;   XREF to: 00580018 (CONDITIONAL_JUMP)  ; LAB_00580018
    MOV ESI,dword ptr [ESP + 0x8]       ; 0057ffc4
    MOV EAX,dword ptr [ESP + 0x10]      ; 0057ffc8
    MOV ESI,dword ptr [ESI + 0x2cf6a9c] ; 0057ffcc | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD ESI,EAX                         ; 0057ffd2
    MOV ECX,dword ptr [ESI]             ; 0057ffd4
    MOV EAX,dword ptr [ESI]             ; 0057ffd6
    MOV EDX,dword ptr [ESI]             ; 0057ffd8
    SHR ECX,0x10                        ; 0057ffda
    SHR EAX,0x8                         ; 0057ffdd
    AND ECX,0xff                        ; 0057ffe0
    AND EAX,0xff                        ; 0057ffe6
    AND EDX,0xff                        ; 0057ffeb
    ADD ECX,EAX                         ; 0057fff1
    ADD EDX,ECX                         ; 0057fff3
    MOV ECX,0x3                         ; 0057fff5
    MOV EAX,EDX                         ; 0057fffa
    SAR EDX,0x1f                        ; 0057fffc
    IDIV ECX                            ; 0057ffff
    MOV ECX,EAX                         ; 00580001
    CMP EBX,0x1                         ; 00580003
    JNZ 0x0058006b                      ; 00580006
        ;   XREF to: 0058006b (CONDITIONAL_JUMP)  ; LAB_0058006b
    XOR EDX,EDX                         ; 00580008
    XOR EAX,EAX                         ; 0058000a
    SHL EDX,0x8                         ; 0058000c
        ;   Label: LAB_0058000c
    SHL EAX,0x10                        ; 0058000f
    ADD EAX,EDX                         ; 00580012
    ADD EAX,ECX                         ; 00580014
    MOV dword ptr [ESI],EAX             ; 00580016
    MOV ECX,dword ptr [ESP + 0xc]       ; 00580018
        ;   Label: LAB_00580018
    MOV EBX,dword ptr [ESP + 0x10]      ; 0058001c
    MOV ESI,dword ptr [ESP + 0x14]      ; 00580020
    MOV EDI,dword ptr [0x00679394]      ; 00580024 | g_WindowWidth
    INC ECX                             ; 0058002a
    ADD EBX,0x4                         ; 0058002b
    INC ESI                             ; 0058002e
    MOV dword ptr [ESP + 0xc],ECX       ; 0058002f
    MOV dword ptr [ESP + 0x10],EBX      ; 00580033
    MOV dword ptr [ESP + 0x14],ESI      ; 00580037
    CMP ESI,EDI                         ; 0058003b
    JL 0x0057ffb8                       ; 0058003d
        ;   XREF to: 0057ffb8 (CONDITIONAL_JUMP)  ; LAB_0057ffb8
    MOV EBX,dword ptr [ESP + 0x4]       ; 00580043
        ;   Label: LAB_00580043
    MOV ESI,dword ptr [ESP]             ; 00580047
    MOV EDI,dword ptr [0x00679398]      ; 0058004a | g_WindowHeight
    ADD EBX,0x4                         ; 00580050
    INC ESI                             ; 00580053
    MOV dword ptr [ESP + 0x4],EBX       ; 00580054
    MOV dword ptr [ESP],ESI             ; 00580058
    CMP ESI,EDI                         ; 0058005b
    JL 0x0057ff96                       ; 0058005d
        ;   XREF to: 0057ff96 (CONDITIONAL_JUMP)  ; LAB_0057ff96
    ADD ESP,0x18                        ; 00580063
        ;   Label: LAB_00580063
    POP EBP                             ; 00580066
    POP EDI                             ; 00580067
    POP ESI                             ; 00580068
    POP EBX                             ; 00580069
    RET                                 ; 0058006a
    LEA EDI,[EAX + EAX*0x2]             ; 0058006b
        ;   Label: LAB_0058006b
    MOV EDX,EAX                         ; 0058006e
    SAR EDX,0x1f                        ; 00580070
    SHL EDX,0x2                         ; 00580073
    SBB EAX,EDX                         ; 00580076
    SAR EAX,0x2                         ; 00580078
    MOV EBP,EAX                         ; 0058007b
    MOV EDX,EDI                         ; 0058007d
    MOV EAX,EDI                         ; 0058007f
    SAR EDX,0x1f                        ; 00580081
    SHL EDX,0x2                         ; 00580084
    SBB EAX,EDX                         ; 00580087
    SAR EAX,0x2                         ; 00580089
    MOV EDI,EAX                         ; 0058008c
    CMP EBX,0x2                         ; 0058008e
    JNZ 0x0058009e                      ; 00580091
        ;   XREF to: 0058009e (CONDITIONAL_JUMP)  ; LAB_0058009e
    MOV ECX,EDI                         ; 00580093
    MOV EAX,EBP                         ; 00580095
    XOR EDX,EDX                         ; 00580097
    JMP 0x0058000c                      ; 00580099
        ;   XREF to: 0058000c (UNCONDITIONAL_JUMP)  ; LAB_0058000c
    CMP EBX,0x3                         ; 0058009e
        ;   Label: LAB_0058009e
    JNZ 0x005800b7                      ; 005800a1
        ;   XREF to: 005800b7 (CONDITIONAL_JUMP)  ; LAB_005800b7
    MOV EDX,ECX                         ; 005800a3
    MOV EAX,ECX                         ; 005800a5
    SAR EDX,0x1f                        ; 005800a7
    SUB EAX,EDX                         ; 005800aa
    SAR EAX,0x1                         ; 005800ac
    MOV ECX,EAX                         ; 005800ae
    XOR EDX,EDX                         ; 005800b0
    JMP 0x0058000c                      ; 005800b2
        ;   XREF to: 0058000c (UNCONDITIONAL_JUMP)  ; LAB_0058000c
    CMP EBX,0x4                         ; 005800b7
        ;   Label: LAB_005800b7
    JNZ 0x005800c5                      ; 005800ba
        ;   XREF to: 005800c5 (CONDITIONAL_JUMP)  ; LAB_005800c5
    MOV ECX,EBP                         ; 005800bc
    XOR EDX,EDX                         ; 005800be
    JMP 0x0058000c                      ; 005800c0
        ;   XREF to: 0058000c (UNCONDITIONAL_JUMP)  ; LAB_0058000c
    MOV EAX,ECX                         ; 005800c5
        ;   Label: LAB_005800c5
    XOR EDX,EDX                         ; 005800c7
    XOR ECX,ECX                         ; 005800c9
    JMP 0x0058000c                      ; 005800cb
        ;   XREF to: 0058000c (UNCONDITIONAL_JUMP)  ; LAB_0058000c


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl wincore_windll_cpp_fillDepthRegion_FUN_005b3fc2(int left,int right,int top,int bottom)
;
; Parameters:
; int              Stack[0x4]:4   left
; int              Stack[0x8]:4   right
; int              Stack[0xc]:4   top
; int              Stack[0x10]:4   bottom
;
; Referenced Globals:
;   double g_SelectedClearColor = 0.0
;   double g_ClearColor = 0.0
;   uint*[1200] g_ZBufferScanlineArray
;   int g_UseExternalRenderer
;
; Called Functions:
;   wincore_windll.cpp_clearZBox_FUN_005b7c00
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005b3fc2
        ;   Label: wincore_windll.cpp_fillDepthRegion_FUN_005b3fc2
    MOV EBP,ESP                         ; 005b3fc3
    PUSH ESI                            ; 005b3fc5
    PUSH EDI                            ; 005b3fc6
    CMP dword ptr [0x02d03e94],0x0      ; 005b3fc7 | g_UseExternalRenderer
    JZ 0x005b3fe9                       ; 005b3fce
        ;   XREF to: 005b3fe9 (CONDITIONAL_JUMP)  ; LAB_005b3fe9
    PUSH dword ptr [EBP + 0x14]         ; 005b3fd0
    PUSH dword ptr [EBP + 0x10]         ; 005b3fd3
    PUSH dword ptr [EBP + 0xc]          ; 005b3fd6
    PUSH dword ptr [EBP + 0x8]          ; 005b3fd9
    CALL wincore_windll.cpp_clearZBox_FUN_005b7c00 ; 005b3fdc
        ;   XREF to: 005b7c00 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_clearZBox_FUN_005b7c00(int left, int top, int right, int bottom)
    POP EAX                             ; 005b3fe1
    POP EAX                             ; 005b3fe2
    POP EAX                             ; 005b3fe3
    POP EAX                             ; 005b3fe4
    POP EDI                             ; 005b3fe5
    POP ESI                             ; 005b3fe6
    LEAVE                               ; 005b3fe7
    RET                                 ; 005b3fe8
    PUSHAD                              ; 005b3fe9
        ;   Label: LAB_005b3fe9
    CLD                                 ; 005b3fea
    PUSH DS                             ; 005b3feb
    POP ES                              ; 005b3fec
    MOV ECX,dword ptr [EBP + 0xc]       ; 005b3fed
    MOV EBX,dword ptr [EBP + 0x10]      ; 005b3ff0
    SUB ECX,dword ptr [EBP + 0x8]       ; 005b3ff3
    MOV EAX,0x0                         ; 005b3ff6
    INC ECX                             ; 005b3ffb
    MOV EDX,dword ptr [EBP + 0x8]       ; 005b3ffc
    SHL EDX,0x2                         ; 005b3fff
    FLD double ptr [0x0068261c]         ; 005b4002 | g_SelectedClearColor
    PUSH ECX                            ; 005b4008
        ;   Label: LAB_005b4008
    MOV EDI,dword ptr [EBX*0x4 + 0x2cf7d5c] ; 005b4009 | g_ZBufferScanlineArray
    ADD EDI,EDX                         ; 005b4010
    AND EDI,0xfffffff8                  ; 005b4012
    SHR ECX,0x1                         ; 005b4015
    FST double ptr [EDI]                ; 005b4017
        ;   Label: LAB_005b4017
    ADD EDI,0x8                         ; 005b4019
    DEC ECX                             ; 005b401c
    JGE 0x005b4017                      ; 005b401d
        ;   XREF to: 005b4017 (CONDITIONAL_JUMP)  ; LAB_005b4017
    POP ECX                             ; 005b401f
    INC EBX                             ; 005b4020
    CMP EBX,dword ptr [EBP + 0x14]      ; 005b4021
    JBE 0x005b4008                      ; 005b4024
        ;   XREF to: 005b4008 (CONDITIONAL_JUMP)  ; LAB_005b4008
    FSTP double ptr [0x00682624]        ; 005b4026 | g_ClearColor
    POPAD                               ; 005b402c
    POP EDI                             ; 005b402d
    POP ESI                             ; 005b402e
    LEAVE                               ; 005b402f
    RET                                 ; 005b4030


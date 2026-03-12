; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl shape_cramtex_cpp_calculateAtlasEfficiency_FUN_00447e80(void)
;
;
; Referenced Globals:
;   double g_CramPercentMultiplier = 100
;   CCramTex[250] g_CramSortedTextureEntries
;   undefined4 DAT_0083c20c
;   undefined4 DAT_0083c210
;   undefined4 DAT_0083c214
;   undefined4 DAT_0083c218
;   undefined4 DAT_0083c228
;   undefined4 DAT_0083c258
;   undefined4 DAT_0083c25c
;   undefined4 DAT_0083c260
;   undefined4 DAT_0083c264
;   int g_CramTextureCount
;   int g_CramTotalMaps
;   int g_CramPaddingCalculation
;   int g_CramCurrentAcceptableSize
;
; Called Functions:
;   crt_stack.c___STK_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x20                           ; 00447e80
        ;   Label: shape_cramtex.cpp_calculateAtlasEfficiency_FUN_00447e80
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 00447e85
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 00447e8a
    PUSH ESI                            ; 00447e8b
    PUSH EDI                            ; 00447e8c
    PUSH EBP                            ; 00447e8d
    MOV EBP,ESP                         ; 00447e8e
    SUB ESP,0xc                         ; 00447e90
    AND ESP,0xfffffff8                  ; 00447e93
    MOV EDX,dword ptr [0x0084a854]      ; 00447e96 | g_CramTextureCount
    XOR ECX,ECX                         ; 00447e9c
    XOR EBX,EBX                         ; 00447e9e
    TEST EDX,EDX                        ; 00447ea0
    JLE 0x00447ee0                      ; 00447ea2
        ;   XREF to: 00447ee0 (CONDITIONAL_JUMP)  ; LAB_00447ee0
    MOV EAX,0x83c1dc                    ; 00447ea4 | g_CramSortedTextureEntries
    MOV EDX,dword ptr [EAX + 0x38]      ; 00447ea9 | DAT_0083c214 | DAT_0083c260
        ;   Label: LAB_00447ea9
    SUB EDX,dword ptr [EAX + 0x30]      ; 00447eac | DAT_0083c20c | DAT_0083c258
    MOV EDI,dword ptr [0x0084a880]      ; 00447eaf | g_CramPaddingCalculation
    MOV ESI,EDX                         ; 00447eb5
    MOV EDX,dword ptr [EAX + 0x3c]      ; 00447eb7 | DAT_0083c218 | DAT_0083c264
    SUB ESI,EDI                         ; 00447eba
    SUB EDX,dword ptr [EAX + 0x34]      ; 00447ebc | DAT_0083c210 | DAT_0083c25c
    SUB EDX,dword ptr [0x0084a880]      ; 00447ebf | g_CramPaddingCalculation
    IMUL EDX,ESI                        ; 00447ec5
    INC ECX                             ; 00447ec8
    ADD EBX,EDX                         ; 00447ec9
    MOV EDX,dword ptr [0x0084a854]      ; 00447ecb | g_CramTextureCount
    ADD EAX,0x4c                        ; 00447ed1
    CMP ECX,EDX                         ; 00447ed4
    JL 0x00447ea9                       ; 00447ed6
        ;   XREF to: 00447ea9 (CONDITIONAL_JUMP)  ; LAB_00447ea9
    LEA EAX,[EAX]                       ; 00447ed8 | DAT_0083c228
    MOV EDX,EDX                         ; 00447ede
    MOV EAX,[0x0084a884]                ; 00447ee0 | g_CramCurrentAcceptableSize
        ;   Label: LAB_00447ee0
    IMUL EAX,EAX                        ; 00447ee5
    MOV ESI,dword ptr [0x0084a858]      ; 00447ee8 | g_CramTotalMaps
    IMUL EAX,ESI                        ; 00447eee
    MOV dword ptr [ESP + 0x4],EAX       ; 00447ef1
    MOV dword ptr [ESP + 0x8],EBX       ; 00447ef5
    FILD dword ptr [ESP + 0x4]          ; 00447ef9
    FILD dword ptr [ESP + 0x8]          ; 00447efd
    FMUL double ptr [0x00619a2a]        ; 00447f01 | g_CramPercentMultiplier
    FDIVRP                              ; 00447f07
    FSTP float ptr [ESP]                ; 00447f09
    MOV EAX,dword ptr [ESP]             ; 00447f0c
    MOV ESP,EBP                         ; 00447f0f
    POP EBP                             ; 00447f11
    POP EDI                             ; 00447f12
    POP ESI                             ; 00447f13
    POP EBX                             ; 00447f14
    RET                                 ; 00447f15


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_cramtex_cpp_CCramTex_findLeftmostOverlappingX_FUN_00447a10(CCramTex *this_ptr)
;
; Parameters:
; CCramTex *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_cramtex.cpp_CCramTex_runInteractiveAtlasGeneration_FUN_00446160 at 004466af
;   shape_cramtex.cpp_performGapFillingOptimization_FUN_00447590 at 004475eb
;
; Referenced Globals:
;   CCramTex[250] g_CramSortedTextureEntries
;   undefined4 g_CramSortedTextureEntries[0].assigned_map_number
;   undefined4 g_CramSortedTextureEntries[0].final_left
;   undefined4 g_CramSortedTextureEntries[0].final_top
;   undefined4 g_CramSortedTextureEntries[0].final_bottom
;   undefined4 g_CramSortedTextureEntries[1].assigned_map_number
;   undefined4 g_CramSortedTextureEntries[1].final_left
;   undefined4 g_CramSortedTextureEntries[1].final_top
;   undefined4 g_CramSortedTextureEntries[1].final_bottom
;   int g_CramTextureCount
;   int g_CramCurrentAcceptableSize
;
; *****************************************************************************

section .text

    NOP                                 ; 00447a10
        ;   Label: shape_cramtex.cpp_CCramTex_findLeftmostOverlappingX_FUN_00447a10
    NOP                                 ; 00447a11
    NOP                                 ; 00447a12
    NOP                                 ; 00447a13
    NOP                                 ; 00447a14
    NOP                                 ; 00447a15
    NOP                                 ; 00447a16
    NOP                                 ; 00447a17
    NOP                                 ; 00447a18
    NOP                                 ; 00447a19
    PUSH EBX                            ; 00447a1a
    PUSH ESI                            ; 00447a1b
    PUSH EDI                            ; 00447a1c
    PUSH EBP                            ; 00447a1d
    MOV EDI,dword ptr [0x0084a854]      ; 00447a1e | g_CramTextureCount
    MOV EDX,dword ptr [ESP + 0x14]      ; 00447a24
    MOV EBX,dword ptr [0x0084a884]      ; 00447a28 | g_CramCurrentAcceptableSize
    XOR ECX,ECX                         ; 00447a2e
    TEST EDI,EDI                        ; 00447a30
    JLE 0x00447a68                      ; 00447a32
        ;   XREF to: 00447a68 (CONDITIONAL_JUMP)  ; LAB_00447a68
    MOV EAX,0x83c1dc                    ; 00447a34 | g_CramSortedTextureEntries
    MOV EBP,dword ptr [EDX + 0x10]      ; 00447a39
        ;   Label: LAB_00447a39
    CMP EBP,dword ptr [EAX + 0x10]      ; 00447a3c | g_CramSortedTextureEntries[0].assigned_map_number | g_CramSortedTextureEntries[1].assigned_map_number
    JNZ 0x00447a60                      ; 00447a3f
        ;   XREF to: 00447a60 (CONDITIONAL_JUMP)  ; LAB_00447a60
    MOV ESI,dword ptr [EAX + 0x30]      ; 00447a41 | g_CramSortedTextureEntries[0].final_left | g_CramSortedTextureEntries[1].final_left
    CMP EBX,ESI                         ; 00447a44
    JLE 0x00447a60                      ; 00447a46
        ;   XREF to: 00447a60 (CONDITIONAL_JUMP)  ; LAB_00447a60
    CMP ESI,dword ptr [EDX + 0x38]      ; 00447a48
    JL 0x00447a60                       ; 00447a4b
        ;   XREF to: 00447a60 (CONDITIONAL_JUMP)  ; LAB_00447a60
    MOV EBP,dword ptr [EDX + 0x3c]      ; 00447a4d
    CMP EBP,dword ptr [EAX + 0x34]      ; 00447a50 | g_CramSortedTextureEntries[0].final_top | g_CramSortedTextureEntries[1].final_top
    JLE 0x00447a60                      ; 00447a53
        ;   XREF to: 00447a60 (CONDITIONAL_JUMP)  ; LAB_00447a60
    MOV EBP,dword ptr [EDX + 0x34]      ; 00447a55
    CMP EBP,dword ptr [EAX + 0x3c]      ; 00447a58 | g_CramSortedTextureEntries[0].final_bottom | g_CramSortedTextureEntries[1].final_bottom
    JGE 0x00447a60                      ; 00447a5b
        ;   XREF to: 00447a60 (CONDITIONAL_JUMP)  ; LAB_00447a60
    MOV EBX,dword ptr [EAX + 0x30]      ; 00447a5d | g_CramSortedTextureEntries[0].final_left | g_CramSortedTextureEntries[1].final_left
    INC ECX                             ; 00447a60
        ;   Label: LAB_00447a60
    ADD EAX,0x4c                        ; 00447a61
    CMP ECX,EDI                         ; 00447a64
    JL 0x00447a39                       ; 00447a66
        ;   XREF to: 00447a39 (CONDITIONAL_JUMP)  ; LAB_00447a39
    MOV EAX,EBX                         ; 00447a68
        ;   Label: LAB_00447a68
    MOV dword ptr [0x0084a854],EDI      ; 00447a6a | g_CramTextureCount
    POP EBP                             ; 00447a70
    POP EDI                             ; 00447a71
    POP ESI                             ; 00447a72
    POP EBX                             ; 00447a73
    RET                                 ; 00447a74


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(SCramWorkingEntry *bounds_entry)
;
; Parameters:
; SCramWorkingEntry * Stack[0xc]:4   bounds_entry
;
; XREF[2]:
;   shape_cramtex.cpp_performGapFillingOptimization_FUN_00447590 at 004475eb
;   shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160 at 004466af
;
; Referenced Globals:
;   SCramWorkingEntry[1] g_CramSortedTextureEntries
;   undefined4 g_CramSortedTextureEntries[0].assigned_map_number
;   undefined4 DAT_0083c20c
;   undefined4 DAT_0083c210
;   undefined4 DAT_0083c218
;   undefined4 DAT_0083c238
;   undefined4 DAT_0083c258
;   undefined4 DAT_0083c25c
;   undefined4 DAT_0083c264
;   uint g_CramTextureCount
;   int g_CramCurrentAcceptableSize
;
; Called Functions:
;   crt_stack.c_stack_probe_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x14                           ; 00447a10
        ;   Label: shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 00447a15
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
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
    CMP EBP,dword ptr [EAX + 0x10]      ; 00447a3c | g_CramSortedTextureEntries[0].assigned_map_number | DAT_0083c238
    JNZ 0x00447a60                      ; 00447a3f
        ;   XREF to: 00447a60 (CONDITIONAL_JUMP)  ; LAB_00447a60
    MOV ESI,dword ptr [EAX + 0x30]      ; 00447a41 | DAT_0083c20c | DAT_0083c258
    CMP EBX,ESI                         ; 00447a44
    JLE 0x00447a60                      ; 00447a46
        ;   XREF to: 00447a60 (CONDITIONAL_JUMP)  ; LAB_00447a60
    CMP ESI,dword ptr [EDX + 0x38]      ; 00447a48
    JL 0x00447a60                       ; 00447a4b
        ;   XREF to: 00447a60 (CONDITIONAL_JUMP)  ; LAB_00447a60
    MOV EBP,dword ptr [EDX + 0x3c]      ; 00447a4d
    CMP EBP,dword ptr [EAX + 0x34]      ; 00447a50 | DAT_0083c210 | DAT_0083c25c
    JLE 0x00447a60                      ; 00447a53
        ;   XREF to: 00447a60 (CONDITIONAL_JUMP)  ; LAB_00447a60
    MOV EBP,dword ptr [EDX + 0x34]      ; 00447a55
    CMP EBP,dword ptr [EAX + 0x3c]      ; 00447a58 | DAT_0083c218 | DAT_0083c264
    JGE 0x00447a60                      ; 00447a5b
        ;   XREF to: 00447a60 (CONDITIONAL_JUMP)  ; LAB_00447a60
    MOV EBX,dword ptr [EAX + 0x30]      ; 00447a5d | DAT_0083c20c | DAT_0083c258
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


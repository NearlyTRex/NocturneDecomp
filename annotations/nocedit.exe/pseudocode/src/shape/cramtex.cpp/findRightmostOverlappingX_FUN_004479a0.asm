; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0(SCramWorkingEntry * bounds_entry)
;
; Parameters:
; SCramWorkingEntry * Stack[0xc]:4   bounds_entry
;
; XREF[2]:
;   shape_cramtex.cpp_performGapFillingOptimization_FUN_00447590 at 00447659
;   shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160 at 0044672d
;
; Referenced Globals:
;   SCramWorkingEntry[1] g_CramSortedTextureEntries
;   undefined4 g_CramSortedTextureEntries[0].assigned_map_number
;   undefined4 DAT_0083c210
;   undefined4 DAT_0083c214
;   undefined4 DAT_0083c218
;   undefined4 DAT_0083c238
;   undefined4 DAT_0083c25c
;   undefined4 DAT_0083c260
;   undefined4 DAT_0083c264
;   uint g_CramTextureCount
;
; Called Functions:
;   crt_stack.c_stack_probe_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x14                           ; 004479a0
        ;   Label: shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 004479a5 | uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
    PUSH EBX                            ; 004479aa
    PUSH ESI                            ; 004479ab
    PUSH EDI                            ; 004479ac
    PUSH EBP                            ; 004479ad
    MOV EDI,dword ptr [0x0084a854]      ; 004479ae | uint g_CramTextureCount
    MOV EDX,dword ptr [ESP + 0x14]      ; 004479b4
    XOR ECX,ECX                         ; 004479b8
    XOR EBX,EBX                         ; 004479ba
    TEST EDI,EDI                        ; 004479bc
    JLE 0x004479f4                      ; 004479be | LAB_004479f4
        ;   XREF to: 004479f4 (CONDITIONAL_JUMP)
    MOV EAX,0x83c1dc                    ; 004479c0 | SCramWorkingEntry[1] g_CramSortedTextureEntries
    MOV EBP,dword ptr [EDX + 0x10]      ; 004479c5
        ;   Label: LAB_004479c5
    CMP EBP,dword ptr [EAX + 0x10]      ; 004479c8 | g_CramSortedTextureEntries[0].assigned_map_number | DAT_0083c238
    JNZ 0x004479ec                      ; 004479cb | LAB_004479ec
        ;   XREF to: 004479ec (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EAX + 0x38]      ; 004479cd | DAT_0083c214 | DAT_0083c260
    CMP EBX,ESI                         ; 004479d0
    JGE 0x004479ec                      ; 004479d2 | LAB_004479ec
        ;   XREF to: 004479ec (CONDITIONAL_JUMP)
    CMP ESI,dword ptr [EDX + 0x30]      ; 004479d4
    JG 0x004479ec                       ; 004479d7 | LAB_004479ec
        ;   XREF to: 004479ec (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [EDX + 0x3c]      ; 004479d9
    CMP EBP,dword ptr [EAX + 0x34]      ; 004479dc | DAT_0083c210 | DAT_0083c25c
    JLE 0x004479ec                      ; 004479df | LAB_004479ec
        ;   XREF to: 004479ec (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [EDX + 0x34]      ; 004479e1
    CMP EBP,dword ptr [EAX + 0x3c]      ; 004479e4 | DAT_0083c218 | DAT_0083c264
    JGE 0x004479ec                      ; 004479e7 | LAB_004479ec
        ;   XREF to: 004479ec (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [EAX + 0x38]      ; 004479e9 | DAT_0083c214 | DAT_0083c260
    INC ECX                             ; 004479ec
        ;   Label: LAB_004479ec
    ADD EAX,0x4c                        ; 004479ed
    CMP ECX,EDI                         ; 004479f0
    JL 0x004479c5                       ; 004479f2 | LAB_004479c5
        ;   XREF to: 004479c5 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 004479f4
        ;   Label: LAB_004479f4
    MOV dword ptr [0x0084a854],EDI      ; 004479f6 | uint g_CramTextureCount
    POP EBP                             ; 004479fc
    POP EDI                             ; 004479fd
    POP ESI                             ; 004479fe
    POP EBX                             ; 004479ff
    RET                                 ; 00447a00


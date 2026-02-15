; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_cramtex_cpp_CCramTex_findHighestOverlappingY_FUN_004478c0(CCramTex *this_ptr)
;
; Parameters:
; CCramTex *       Stack[0xc]:4   this_ptr
;
; XREF[2]:
;   shape_cramtex.cpp_CCramTex_runInteractiveAtlasGeneration_FUN_00446160 at 0044677b
;   shape_cramtex.cpp_performGapFillingOptimization_FUN_00447590 at 004476a2
;
; Referenced Globals:
;   CCramTex[1] g_CramSortedTextureEntries
;   undefined4 g_CramSortedTextureEntries[0].assigned_map_number
;   undefined4 DAT_0083c20c
;   undefined4 DAT_0083c214
;   undefined4 DAT_0083c218
;   undefined4 DAT_0083c238
;   undefined4 DAT_0083c258
;   undefined4 DAT_0083c260
;   undefined4 DAT_0083c264
;   uint g_CramTextureCount
;
; Called Functions:
;   crt_stack.c___STK_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x14                           ; 004478c0
        ;   Label: shape_cramtex.cpp_CCramTex_findHighestOverlappingY_FUN_004478c0
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 004478c5
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 004478ca
    PUSH ESI                            ; 004478cb
    PUSH EDI                            ; 004478cc
    PUSH EBP                            ; 004478cd
    MOV EDI,dword ptr [0x0084a854]      ; 004478ce | g_CramTextureCount
    MOV EDX,dword ptr [ESP + 0x14]      ; 004478d4
    XOR ECX,ECX                         ; 004478d8
    XOR EBX,EBX                         ; 004478da
    TEST EDI,EDI                        ; 004478dc
    JLE 0x00447914                      ; 004478de
        ;   XREF to: 00447914 (CONDITIONAL_JUMP)  ; LAB_00447914
    MOV EAX,0x83c1dc                    ; 004478e0 | g_CramSortedTextureEntries
    MOV EBP,dword ptr [EDX + 0x10]      ; 004478e5
        ;   Label: LAB_004478e5
    CMP EBP,dword ptr [EAX + 0x10]      ; 004478e8 | g_CramSortedTextureEntries[0].assigned_map_number | DAT_0083c238
    JNZ 0x0044790c                      ; 004478eb
        ;   XREF to: 0044790c (CONDITIONAL_JUMP)  ; LAB_0044790c
    MOV ESI,dword ptr [EAX + 0x3c]      ; 004478ed | DAT_0083c218 | DAT_0083c264
    CMP EBX,ESI                         ; 004478f0
    JGE 0x0044790c                      ; 004478f2
        ;   XREF to: 0044790c (CONDITIONAL_JUMP)  ; LAB_0044790c
    CMP ESI,dword ptr [EDX + 0x34]      ; 004478f4
    JG 0x0044790c                       ; 004478f7
        ;   XREF to: 0044790c (CONDITIONAL_JUMP)  ; LAB_0044790c
    MOV EBP,dword ptr [EDX + 0x38]      ; 004478f9
    CMP EBP,dword ptr [EAX + 0x30]      ; 004478fc | DAT_0083c20c | DAT_0083c258
    JLE 0x0044790c                      ; 004478ff
        ;   XREF to: 0044790c (CONDITIONAL_JUMP)  ; LAB_0044790c
    MOV EBP,dword ptr [EDX + 0x30]      ; 00447901
    CMP EBP,dword ptr [EAX + 0x38]      ; 00447904 | DAT_0083c214 | DAT_0083c260
    JGE 0x0044790c                      ; 00447907
        ;   XREF to: 0044790c (CONDITIONAL_JUMP)  ; LAB_0044790c
    MOV EBX,dword ptr [EAX + 0x3c]      ; 00447909 | DAT_0083c218 | DAT_0083c264
    INC ECX                             ; 0044790c
        ;   Label: LAB_0044790c
    ADD EAX,0x4c                        ; 0044790d
    CMP ECX,EDI                         ; 00447910
    JL 0x004478e5                       ; 00447912
        ;   XREF to: 004478e5 (CONDITIONAL_JUMP)  ; LAB_004478e5
    MOV EAX,EBX                         ; 00447914
        ;   Label: LAB_00447914
    MOV dword ptr [0x0084a854],EDI      ; 00447916 | g_CramTextureCount
    POP EBP                             ; 0044791c
    POP EDI                             ; 0044791d
    POP ESI                             ; 0044791e
    POP EBX                             ; 0044791f
    RET                                 ; 00447920


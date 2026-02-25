; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_cramtex_cpp_CCramTex_findLowestOverlappingY_FUN_00447930(CCramTex *this_ptr)
;
; Parameters:
; CCramTex *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_cramtex.cpp_CCramTex_runInteractiveAtlasGeneration_FUN_00446160 at 0044667c
;   shape_cramtex.cpp_performGapFillingOptimization_FUN_00447590 at 004476b4
;
; Referenced Globals:
;   CCramTex[250] g_CramSortedTextureEntries
;   undefined4 g_CramSortedTextureEntries[0].assigned_map_number
;   undefined4 DAT_0083c20c
;   undefined4 DAT_0083c210
;   undefined4 DAT_0083c214
;   undefined4 DAT_0083c238
;   undefined4 DAT_0083c258
;   undefined4 DAT_0083c25c
;   undefined4 DAT_0083c260
;   int g_CramTextureCount
;   int g_CramCurrentAcceptableSize
;
; Called Functions:
;   crt_stack.c___STK_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x14                           ; 00447930
        ;   Label: shape_cramtex.cpp_CCramTex_findLowestOverlappingY_FUN_00447930
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 00447935
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 0044793a
    PUSH ESI                            ; 0044793b
    PUSH EDI                            ; 0044793c
    PUSH EBP                            ; 0044793d
    MOV EDI,dword ptr [0x0084a854]      ; 0044793e | g_CramTextureCount
    MOV EDX,dword ptr [ESP + 0x14]      ; 00447944
    MOV EBX,dword ptr [0x0084a884]      ; 00447948 | g_CramCurrentAcceptableSize
    XOR ECX,ECX                         ; 0044794e
    TEST EDI,EDI                        ; 00447950
    JLE 0x00447988                      ; 00447952
        ;   XREF to: 00447988 (CONDITIONAL_JUMP)  ; LAB_00447988
    MOV EAX,0x83c1dc                    ; 00447954 | g_CramSortedTextureEntries
    MOV EBP,dword ptr [EDX + 0x10]      ; 00447959
        ;   Label: LAB_00447959
    CMP EBP,dword ptr [EAX + 0x10]      ; 0044795c | g_CramSortedTextureEntries[0].assigned_map_number | DAT_0083c238
    JNZ 0x00447980                      ; 0044795f
        ;   XREF to: 00447980 (CONDITIONAL_JUMP)  ; LAB_00447980
    MOV ESI,dword ptr [EAX + 0x34]      ; 00447961 | DAT_0083c210 | DAT_0083c25c
    CMP EBX,ESI                         ; 00447964
    JLE 0x00447980                      ; 00447966
        ;   XREF to: 00447980 (CONDITIONAL_JUMP)  ; LAB_00447980
    CMP ESI,dword ptr [EDX + 0x3c]      ; 00447968
    JL 0x00447980                       ; 0044796b
        ;   XREF to: 00447980 (CONDITIONAL_JUMP)  ; LAB_00447980
    MOV EBP,dword ptr [EDX + 0x38]      ; 0044796d
    CMP EBP,dword ptr [EAX + 0x30]      ; 00447970 | DAT_0083c20c | DAT_0083c258
    JLE 0x00447980                      ; 00447973
        ;   XREF to: 00447980 (CONDITIONAL_JUMP)  ; LAB_00447980
    MOV EBP,dword ptr [EDX + 0x30]      ; 00447975
    CMP EBP,dword ptr [EAX + 0x38]      ; 00447978 | DAT_0083c214 | DAT_0083c260
    JGE 0x00447980                      ; 0044797b
        ;   XREF to: 00447980 (CONDITIONAL_JUMP)  ; LAB_00447980
    MOV EBX,dword ptr [EAX + 0x34]      ; 0044797d | DAT_0083c210 | DAT_0083c25c
    INC ECX                             ; 00447980
        ;   Label: LAB_00447980
    ADD EAX,0x4c                        ; 00447981
    CMP ECX,EDI                         ; 00447984
    JL 0x00447959                       ; 00447986
        ;   XREF to: 00447959 (CONDITIONAL_JUMP)  ; LAB_00447959
    MOV EAX,EBX                         ; 00447988
        ;   Label: LAB_00447988
    MOV dword ptr [0x0084a854],EDI      ; 0044798a | g_CramTextureCount
    POP EBP                             ; 00447990
    POP EDI                             ; 00447991
    POP ESI                             ; 00447992
    POP EBX                             ; 00447993
    RET                                 ; 00447994


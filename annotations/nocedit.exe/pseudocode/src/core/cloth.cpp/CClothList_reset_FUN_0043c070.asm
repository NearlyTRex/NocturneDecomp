; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_cloth_cpp_CClothList_reset_FUN_0043c070(CClothList *this_ptr)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_cloth.cpp_CClothList_dtor_FUN_0043bf80 at 0043bf86
;   core_stranger.cpp_CStranger_FUN_005c3150 at 005c353a
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_006185cc
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   core_cloth.cpp_CCloth_dtor_FUN_00438c00
;   crt_memory.c_memset_FUN_005fde40
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c070
        ;   Label: core_cloth.cpp_CClothList_reset_FUN_0043c070
    PUSH ESI                            ; 0043c071
    PUSH EDI                            ; 0043c072
    PUSH EBP                            ; 0043c073
    MOV EDI,dword ptr [ESP + 0x14]      ; 0043c074
    MOV EDX,dword ptr [EDI]             ; 0043c078
    XOR ESI,ESI                         ; 0043c07a
    TEST EDX,EDX                        ; 0043c07c
    JLE 0x0043c0bf                      ; 0043c07e
        ;   XREF to: 0043c0bf (CONDITIONAL_JUMP)  ; LAB_0043c0bf
    MOV EBP,0x6185cc                    ; 0043c080 | = "..\\core\\cloth.cpp"
    MOV EBX,EDI                         ; 0043c085
    MOV dword ptr [0x02f0d944],0x5bd    ; 0043c087 | g_CurrentDebugLine
        ;   Label: LAB_0043c087
    MOV EAX,dword ptr [EBX + 0x194]     ; 0043c091
    MOV dword ptr [0x0067d20c],EBP      ; 0043c097 | g_CurrentDebugFilename
    TEST EAX,EAX                        ; 0043c09d
    JZ 0x0043c0b5                       ; 0043c09f
        ;   XREF to: 0043c0b5 (CONDITIONAL_JUMP)  ; LAB_0043c0b5
    PUSH 0x0                            ; 0043c0a1
    PUSH EAX                            ; 0043c0a3
    CALL core_cloth.cpp_CCloth_dtor_FUN_00438c00 ; 0043c0a4
        ;   XREF to: 00438c00 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_dtor_FUN_00438c00(CCloth * this_ptr)
    ADD ESP,0x8                         ; 0043c0a9
    PUSH EAX                            ; 0043c0ac
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0043c0ad
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0043c0b2
    INC ESI                             ; 0043c0b5
        ;   Label: LAB_0043c0b5
    MOV ECX,dword ptr [EDI]             ; 0043c0b6
    ADD EBX,0x4                         ; 0043c0b8
    CMP ESI,ECX                         ; 0043c0bb
    JL 0x0043c087                       ; 0043c0bd
        ;   XREF to: 0043c087 (CONDITIONAL_JUMP)  ; LAB_0043c087
    PUSH 0x190                          ; 0043c0bf
        ;   Label: LAB_0043c0bf
    PUSH 0x0                            ; 0043c0c4
    LEA EAX,[EDI + 0x4]                 ; 0043c0c6
    PUSH EAX                            ; 0043c0c9
    MOV dword ptr [EDI],0x0             ; 0043c0ca
    CALL crt_memory.c_memset_FUN_005fde40 ; 0043c0d0
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0043c0d5
    PUSH 0x28                           ; 0043c0d8
    PUSH 0x0                            ; 0043c0da
    ADD EDI,0x194                       ; 0043c0dc
    PUSH EDI                            ; 0043c0e2
    CALL crt_memory.c_memset_FUN_005fde40 ; 0043c0e3
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0043c0e8
    POP EBP                             ; 0043c0eb
    POP EDI                             ; 0043c0ec
    POP ESI                             ; 0043c0ed
    POP EBX                             ; 0043c0ee
    RET                                 ; 0043c0ef


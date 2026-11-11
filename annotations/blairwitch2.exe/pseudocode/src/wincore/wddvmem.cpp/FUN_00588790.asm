; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_wddvmem_cpp_FUN_00588790(int width,int height)
;
; Parameters:
; int              Stack[0x4]:4   width
; int              Stack[0x8]:4   height
;
; XREF[1]:
;   engine_2d.c_initGraphicsSystem_FUN_00401010 at 00401029
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_005ee121
;   TerminatedCString s_WDDVMEM_Fatal_out_of_fra_005ee138
;   TerminatedCString s_wincore_wddvmem_cpp_005ee164
;   TerminatedCString s_WDDVMEM_Fatal_out_of_Z_b_005ee17b
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_006141c0
;   undefined4 DAT_00622010
;   undefined4 DAT_0070c62c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_02661ae0
;   undefined4 DAT_02661ae4
;   undefined4 DAT_02661ae8
;   undefined4 DAT_02661aec
;   ... and 2 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_ddraw.c_DirectDrawCreate
;   crt_memory.c_malloc_FUN_005b8580
;   engine_special.cpp_FUN_0055e8c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00588790
        ;   Label: wincore_wddvmem.cpp_FUN_00588790
    PUSH ESI                            ; 00588791
    PUSH EDI                            ; 00588792
    PUSH EBP                            ; 00588793
    MOV ECX,dword ptr [0x006141b8]      ; 00588794 | DAT_006141b8
    IMUL ECX,dword ptr [0x006141bc]     ; 0058879a | DAT_006141bc
    MOV EAX,[0x006141c0]                ; 005887a1 | DAT_006141c0
    MOV EDX,EAX                         ; 005887a6
    SAR EDX,0x1f                        ; 005887a8
    SHL EDX,0x3                         ; 005887ab
    SBB EAX,EDX                         ; 005887ae
    SAR EAX,0x3                         ; 005887b0
    IMUL EAX,ECX                        ; 005887b3
    PUSH EAX                            ; 005887b6
    CALL crt_memory.c_malloc_FUN_005b8580 ; 005887b7
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 005887bc
    MOV [0x00622010],EAX                ; 005887bf | DAT_00622010
    TEST EAX,EAX                        ; 005887c4
    JZ 0x005888b7                       ; 005887c6
        ;   XREF to: 005888b7 (CONDITIONAL_JUMP)  ; LAB_005888b7
    MOV EAX,[0x006141b8]                ; 005887cc | DAT_006141b8
        ;   Label: LAB_005887cc
    IMUL EAX,dword ptr [0x006141bc]     ; 005887d1 | DAT_006141bc
    SHL EAX,0x2                         ; 005887d8
    ADD EAX,0x40                        ; 005887db
    PUSH EAX                            ; 005887de
    CALL crt_memory.c_malloc_FUN_005b8580 ; 005887df
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 005887e4
    MOV [0x02661af0],EAX                ; 005887e7 | DAT_02661af0
    TEST EAX,EAX                        ; 005887ec
    JNZ 0x00588813                      ; 005887ee
        ;   XREF to: 00588813 (CONDITIONAL_JUMP)  ; LAB_00588813
    MOV EDI,0x5ee164                    ; 005887f0 | = "..\\wincore\\wddvmem.cpp"
    MOV EBP,0xef                        ; 005887f5
    PUSH 0x5ee17b                       ; 005887fa | = "WDDVMEM: Fatal - out of Z buffer memory"
    MOV dword ptr [0x01d046a0],EDI      ; 005887ff | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 00588805 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0058880b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00588810
    MOV EAX,[0x02661af0]                ; 00588813 | DAT_02661af0
        ;   Label: LAB_00588813
    ADD EAX,0x10                        ; 00588818
    AND AL,0xf0                         ; 0058881b
    MOV [0x0070c62c],EAX                ; 0058881d | DAT_0070c62c
    MOV EAX,[0x02661aec]                ; 00588822 | DAT_02661aec
    TEST EAX,EAX                        ; 00588827
    JZ 0x00588839                       ; 00588829
        ;   XREF to: 00588839 (CONDITIONAL_JUMP)  ; LAB_00588839
    PUSH EAX                            ; 0058882b
    MOV EDX,dword ptr [EAX]             ; 0058882c
    CALL dword ptr [EDX + 0x8]          ; 0058882e
    XOR EDX,EDX                         ; 00588831
    MOV dword ptr [0x02661aec],EDX      ; 00588833 | DAT_02661aec
    MOV ECX,dword ptr [0x02661ae8]      ; 00588839 | DAT_02661ae8
        ;   Label: LAB_00588839
    TEST ECX,ECX                        ; 0058883f
    JZ 0x00588851                       ; 00588841
        ;   XREF to: 00588851 (CONDITIONAL_JUMP)  ; LAB_00588851
    PUSH ECX                            ; 00588843
    MOV EDX,dword ptr [ECX]             ; 00588844
    XOR EBX,EBX                         ; 00588846
    CALL dword ptr [EDX + 0x8]          ; 00588848
    MOV dword ptr [0x02661ae8],EBX      ; 0058884b | DAT_02661ae8
    MOV ESI,dword ptr [0x02661ae4]      ; 00588851 | DAT_02661ae4
        ;   Label: LAB_00588851
    TEST ESI,ESI                        ; 00588857
    JZ 0x00588869                       ; 00588859
        ;   XREF to: 00588869 (CONDITIONAL_JUMP)  ; LAB_00588869
    PUSH ESI                            ; 0058885b
    MOV EDX,dword ptr [ESI]             ; 0058885c
    XOR EDI,EDI                         ; 0058885e
    CALL dword ptr [EDX + 0x8]          ; 00588860
    MOV dword ptr [0x02661ae4],EDI      ; 00588863 | DAT_02661ae4
    MOV EBP,dword ptr [0x02661ae0]      ; 00588869 | DAT_02661ae0
        ;   Label: LAB_00588869
    TEST EBP,EBP                        ; 0058886f
    JZ 0x0058888c                       ; 00588871
        ;   XREF to: 0058888c (CONDITIONAL_JUMP)  ; LAB_0058888c
    PUSH EBP                            ; 00588873
    MOV EDX,dword ptr [EBP]             ; 00588874
    CALL dword ptr [EDX + 0x4c]         ; 00588877
    MOV EAX,[0x02661ae0]                ; 0058887a | DAT_02661ae0
    PUSH EAX                            ; 0058887f
    MOV EDX,dword ptr [EAX]             ; 00588880
    CALL dword ptr [EDX + 0x8]          ; 00588882
    XOR EAX,EAX                         ; 00588885
    MOV [0x02661ae0],EAX                ; 00588887 | DAT_02661ae0
    PUSH 0x0                            ; 0058888c
        ;   Label: LAB_0058888c
    PUSH 0x2661ae0                      ; 0058888e | DAT_02661ae0
    PUSH 0x0                            ; 00588893
    CALL crt_ddraw.c_DirectDrawCreate   ; 00588895
        ;   XREF to: 005c74ae (UNCONDITIONAL_CALL)  ; HRESULT crt_ddraw.c_DirectDrawCreate(GUID * lp_guid, LPDIRECTDRAW * lplp_dd, IUnknown * p_unk_outer)
    TEST EAX,EAX                        ; 0058889a
    JZ 0x005888df                       ; 0058889c
        ;   XREF to: 005888df (CONDITIONAL_JUMP)  ; LAB_005888df
    MOV EBX,dword ptr [0x02664628]      ; 0058889e | DAT_02664628
        ;   Label: LAB_0058889e
    PUSH EBX                            ; 005888a4
    CALL engine_special.cpp_FUN_0055e8c0 ; 005888a5
        ;   XREF to: 0055e8c0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_0055e8c0(HWND window_handle)
    MOV EAX,0x1                         ; 005888aa
    ADD ESP,0x4                         ; 005888af
    POP EBP                             ; 005888b2
    POP EDI                             ; 005888b3
    POP ESI                             ; 005888b4
    POP EBX                             ; 005888b5
    RET                                 ; 005888b6
    MOV ECX,0x5ee121                    ; 005888b7 | = "..\\wincore\\wddvmem.cpp"
        ;   Label: LAB_005888b7
    MOV EBX,0xea                        ; 005888bc
    PUSH 0x5ee138                       ; 005888c1 | = "WDDVMEM: Fatal - out of frame buffer ..."
    MOV dword ptr [0x01d046a0],ECX      ; 005888c6 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 005888cc | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005888d2
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005888d7
    JMP 0x005887cc                      ; 005888da
        ;   XREF to: 005887cc (UNCONDITIONAL_JUMP)  ; LAB_005887cc
    PUSH 0x11                           ; 005888df
        ;   Label: LAB_005888df
    MOV ECX,dword ptr [0x02664628]      ; 005888e1 | DAT_02664628
    MOV EAX,[0x02661ae0]                ; 005888e7 | DAT_02661ae0
    PUSH ECX                            ; 005888ec
    MOV EDX,dword ptr [EAX]             ; 005888ed
    PUSH EAX                            ; 005888ef
    CALL dword ptr [EDX + 0x50]         ; 005888f0
    JMP 0x0058889e                      ; 005888f3
        ;   XREF to: 0058889e (UNCONDITIONAL_JUMP)  ; LAB_0058889e


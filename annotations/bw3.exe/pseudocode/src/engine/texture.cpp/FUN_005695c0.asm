; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_texture_cpp_FUN_005695c0(CTextureCache *this_ptr)
;
; Parameters:
; CTextureCache *  Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   engine_texture.cpp_CTextureCache_reset_FUN_005695b0 at 005695b5
;   engine_texture.cpp_FUN_0056ac20 at 0056ac27
;   engine_texture.cpp_freeTextureCache_FUN_0056a9c0 at 0056a9e7
;
; Referenced Globals:
;   undefined4 DAT_02cf60e8
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005695c0
        ;   Label: engine_texture.cpp_FUN_005695c0
    PUSH ESI                            ; 005695c1
    PUSH EDI                            ; 005695c2
    PUSH EBP                            ; 005695c3
    MOV EBP,dword ptr [ESP + 0x14]      ; 005695c4
    MOV dword ptr [EBP + 0x18008],0x0   ; 005695c8
    LEA EDI,[EBP + 0x4]                 ; 005695d2
    MOV dword ptr [EBP + 0x18004],0x0   ; 005695d5
    MOV ESI,EDI                         ; 005695df
    ADD EDI,0x18000                     ; 005695e1
    MOV EDX,dword ptr [ESI + 0x44]      ; 005695e7
        ;   Label: LAB_005695e7
    MOV EBX,ESI                         ; 005695ea
    TEST EDX,EDX                        ; 005695ec
    JNZ 0x00569650                      ; 005695ee
        ;   XREF to: 00569650 (CONDITIONAL_JUMP)  ; LAB_00569650
    MOV EAX,dword ptr [EBX + 0x48]      ; 005695f0
        ;   Label: LAB_005695f0
    TEST EAX,EAX                        ; 005695f3
    JZ 0x00569600                       ; 005695f5
        ;   XREF to: 00569600 (CONDITIONAL_JUMP)  ; LAB_00569600
    PUSH EAX                            ; 005695f7
    CALL crt_unknown.c_FUN_005a3770     ; 005695f8
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 005695fd
    MOV ECX,dword ptr [EBX + 0x4c]      ; 00569600
        ;   Label: LAB_00569600
    TEST ECX,ECX                        ; 00569603
    JZ 0x00569610                       ; 00569605
        ;   XREF to: 00569610 (CONDITIONAL_JUMP)  ; LAB_00569610
    PUSH ECX                            ; 00569607
    CALL crt_unknown.c_FUN_005a3770     ; 00569608
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 0056960d
    MOV EDX,dword ptr [EBX + 0x50]      ; 00569610
        ;   Label: LAB_00569610
    TEST EDX,EDX                        ; 00569613
    JZ 0x00569620                       ; 00569615
        ;   XREF to: 00569620 (CONDITIONAL_JUMP)  ; LAB_00569620
    PUSH EDX                            ; 00569617
    CALL crt_unknown.c_FUN_005a3770     ; 00569618
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 0056961d
    ADD ESI,0x60                        ; 00569620
        ;   Label: LAB_00569620
    CMP ESI,EDI                         ; 00569623
    JNZ 0x005695e7                      ; 00569625
        ;   XREF to: 005695e7 (CONDITIONAL_JUMP)  ; LAB_005695e7
    PUSH 0x18000                        ; 00569627
    PUSH 0x0                            ; 0056962c
    LEA EBX,[EBP + 0x4]                 ; 0056962e
    PUSH EBX                            ; 00569631
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00569632
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    MOV EBX,dword ptr [0x02cf60e8]      ; 00569637 | DAT_02cf60e8
    ADD ESP,0xc                         ; 0056963d
    MOV dword ptr [EBP],0x0             ; 00569640
    TEST EBX,EBX                        ; 00569647
    JNZ 0x0056965b                      ; 00569649
        ;   XREF to: 0056965b (CONDITIONAL_JUMP)  ; LAB_0056965b
    POP EBP                             ; 0056964b
    POP EDI                             ; 0056964c
    POP ESI                             ; 0056964d
    POP EBX                             ; 0056964e
    RET                                 ; 0056964f
    PUSH EDX                            ; 00569650
        ;   Label: LAB_00569650
    CALL crt_unknown.c_FUN_005a3770     ; 00569651
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 00569656
    JMP 0x005695f0                      ; 00569659
        ;   XREF to: 005695f0 (UNCONDITIONAL_JUMP)  ; LAB_005695f0
    CALL dword ptr [0x02cf60e8]         ; 0056965b | DAT_02cf60e8
        ;   Label: LAB_0056965b
    POP EBP                             ; 00569661
    POP EDI                             ; 00569662
    POP ESI                             ; 00569663
    POP EBX                             ; 00569664
    RET                                 ; 00569665


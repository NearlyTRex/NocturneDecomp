; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_texture_cpp_FUN_005965d0(CTextureCache *this_ptr)
;
; Parameters:
; CTextureCache *  Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   engine_texture.cpp_FUN_005965c0 at 005965c5
;   engine_texture.cpp_FUN_005979d0 at 005979f7
;   engine_texture.cpp_FUN_00597c30 at 00597c37
;
; Referenced Globals:
;   undefined4 DAT_02c8348c
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005965d0
        ;   Label: engine_texture.cpp_FUN_005965d0
    PUSH ESI                            ; 005965d1
    PUSH EDI                            ; 005965d2
    PUSH EBP                            ; 005965d3
    MOV EBP,dword ptr [ESP + 0x14]      ; 005965d4
    MOV dword ptr [EBP + 0x18008],0x0   ; 005965d8
    LEA EDI,[EBP + 0x4]                 ; 005965e2
    MOV dword ptr [EBP + 0x18004],0x0   ; 005965e5
    MOV ESI,EDI                         ; 005965ef
    ADD EDI,0x18000                     ; 005965f1
    MOV EDX,dword ptr [ESI + 0x44]      ; 005965f7
        ;   Label: LAB_005965f7
    MOV EBX,ESI                         ; 005965fa
    TEST EDX,EDX                        ; 005965fc
    JNZ 0x00596660                      ; 005965fe
        ;   XREF to: 00596660 (CONDITIONAL_JUMP)  ; LAB_00596660
    MOV EAX,dword ptr [EBX + 0x48]      ; 00596600
        ;   Label: LAB_00596600
    TEST EAX,EAX                        ; 00596603
    JZ 0x00596610                       ; 00596605
        ;   XREF to: 00596610 (CONDITIONAL_JUMP)  ; LAB_00596610
    PUSH EAX                            ; 00596607
    CALL crt_unknown.c_FUN_005c09f0     ; 00596608
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 0059660d
    MOV ECX,dword ptr [EBX + 0x4c]      ; 00596610
        ;   Label: LAB_00596610
    TEST ECX,ECX                        ; 00596613
    JZ 0x00596620                       ; 00596615
        ;   XREF to: 00596620 (CONDITIONAL_JUMP)  ; LAB_00596620
    PUSH ECX                            ; 00596617
    CALL crt_unknown.c_FUN_005c09f0     ; 00596618
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 0059661d
    MOV EDX,dword ptr [EBX + 0x50]      ; 00596620
        ;   Label: LAB_00596620
    TEST EDX,EDX                        ; 00596623
    JZ 0x00596630                       ; 00596625
        ;   XREF to: 00596630 (CONDITIONAL_JUMP)  ; LAB_00596630
    PUSH EDX                            ; 00596627
    CALL crt_unknown.c_FUN_005c09f0     ; 00596628
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 0059662d
    ADD ESI,0x60                        ; 00596630
        ;   Label: LAB_00596630
    CMP ESI,EDI                         ; 00596633
    JNZ 0x005965f7                      ; 00596635
        ;   XREF to: 005965f7 (CONDITIONAL_JUMP)  ; LAB_005965f7
    PUSH 0x18000                        ; 00596637
    PUSH 0x0                            ; 0059663c
    LEA EBX,[EBP + 0x4]                 ; 0059663e
    PUSH EBX                            ; 00596641
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00596642
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    MOV EBX,dword ptr [0x02c8348c]      ; 00596647 | DAT_02c8348c
    ADD ESP,0xc                         ; 0059664d
    MOV dword ptr [EBP],0x0             ; 00596650
    TEST EBX,EBX                        ; 00596657
    JNZ 0x0059666b                      ; 00596659
        ;   XREF to: 0059666b (CONDITIONAL_JUMP)  ; LAB_0059666b
    POP EBP                             ; 0059665b
    POP EDI                             ; 0059665c
    POP ESI                             ; 0059665d
    POP EBX                             ; 0059665e
    RET                                 ; 0059665f
    PUSH EDX                            ; 00596660
        ;   Label: LAB_00596660
    CALL crt_unknown.c_FUN_005c09f0     ; 00596661
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 00596666
    JMP 0x00596600                      ; 00596669
        ;   XREF to: 00596600 (UNCONDITIONAL_JUMP)  ; LAB_00596600
    CALL dword ptr [0x02c8348c]         ; 0059666b | DAT_02c8348c
        ;   Label: LAB_0059666b
    POP EBP                             ; 00596671
    POP EDI                             ; 00596672
    POP ESI                             ; 00596673
    POP EBX                             ; 00596674
    RET                                 ; 00596675


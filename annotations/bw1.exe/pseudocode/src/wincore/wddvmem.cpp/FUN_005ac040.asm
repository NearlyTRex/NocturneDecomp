; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_wddvmem_cpp_FUN_005ac040(int width,int height)
;
; Parameters:
; int              Stack[0x4]:4   width
; int              Stack[0x8]:4   height
;
; XREF[1]:
;   engine_2d.c_initGraphicsSystem_FUN_00401010 at 00401029
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_005f9478
;   TerminatedCString s_WDDVMEM_Fatal_out_of_fra_005f948f
;   TerminatedCString s_wincore_wddvmem_cpp_005f94bb
;   TerminatedCString s_WDDVMEM_Fatal_out_of_Z_b_005f94d2
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_00629010
;   undefined4 DAT_0071362c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c99300
;   undefined4 DAT_02c99304
;   undefined4 DAT_02c99308
;   undefined4 DAT_02c9930c
;   ... and 2 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_ddraw.c_DirectDrawCreate
;   crt_unknown.c_FUN_005c08d0
;   engine_special.cpp_FUN_00581310
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac040
        ;   Label: wincore_wddvmem.cpp_FUN_005ac040
    PUSH ESI                            ; 005ac041
    PUSH EDI                            ; 005ac042
    PUSH EBP                            ; 005ac043
    MOV ECX,dword ptr [0x0061b498]      ; 005ac044 | DAT_0061b498
    IMUL ECX,dword ptr [0x0061b49c]     ; 005ac04a | DAT_0061b49c
    MOV EAX,[0x0061b4a0]                ; 005ac051 | DAT_0061b4a0
    MOV EDX,EAX                         ; 005ac056
    SAR EDX,0x1f                        ; 005ac058
    SHL EDX,0x3                         ; 005ac05b
    SBB EAX,EDX                         ; 005ac05e
    SAR EAX,0x3                         ; 005ac060
    IMUL EAX,ECX                        ; 005ac063
    PUSH EAX                            ; 005ac066
    CALL crt_unknown.c_FUN_005c08d0     ; 005ac067
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 005ac06c
    MOV [0x00629010],EAX                ; 005ac06f | DAT_00629010
    TEST EAX,EAX                        ; 005ac074
    JZ 0x005ac167                       ; 005ac076
        ;   XREF to: 005ac167 (CONDITIONAL_JUMP)  ; LAB_005ac167
    MOV EAX,[0x0061b498]                ; 005ac07c | DAT_0061b498
        ;   Label: LAB_005ac07c
    IMUL EAX,dword ptr [0x0061b49c]     ; 005ac081 | DAT_0061b49c
    SHL EAX,0x2                         ; 005ac088
    ADD EAX,0x40                        ; 005ac08b
    PUSH EAX                            ; 005ac08e
    CALL crt_unknown.c_FUN_005c08d0     ; 005ac08f
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 005ac094
    MOV [0x02c99310],EAX                ; 005ac097 | DAT_02c99310
    TEST EAX,EAX                        ; 005ac09c
    JNZ 0x005ac0c3                      ; 005ac09e
        ;   XREF to: 005ac0c3 (CONDITIONAL_JUMP)  ; LAB_005ac0c3
    MOV EDI,0x5f94bb                    ; 005ac0a0 | = "..\\wincore\\wddvmem.cpp"
    MOV EBP,0xf2                        ; 005ac0a5
    PUSH 0x5f94d2                       ; 005ac0aa | = "WDDVMEM: Fatal - out of Z buffer memory"
    MOV dword ptr [0x01d1d400],EDI      ; 005ac0af | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 005ac0b5 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005ac0bb
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005ac0c0
    MOV EAX,[0x02c99310]                ; 005ac0c3 | DAT_02c99310
        ;   Label: LAB_005ac0c3
    ADD EAX,0x10                        ; 005ac0c8
    AND AL,0xf0                         ; 005ac0cb
    MOV [0x0071362c],EAX                ; 005ac0cd | DAT_0071362c
    MOV EAX,[0x02c9930c]                ; 005ac0d2 | DAT_02c9930c
    TEST EAX,EAX                        ; 005ac0d7
    JZ 0x005ac0e9                       ; 005ac0d9
        ;   XREF to: 005ac0e9 (CONDITIONAL_JUMP)  ; LAB_005ac0e9
    PUSH EAX                            ; 005ac0db
    MOV EDX,dword ptr [EAX]             ; 005ac0dc
    CALL dword ptr [EDX + 0x8]          ; 005ac0de
    XOR EDX,EDX                         ; 005ac0e1
    MOV dword ptr [0x02c9930c],EDX      ; 005ac0e3 | DAT_02c9930c
    MOV ECX,dword ptr [0x02c99308]      ; 005ac0e9 | DAT_02c99308
        ;   Label: LAB_005ac0e9
    TEST ECX,ECX                        ; 005ac0ef
    JZ 0x005ac101                       ; 005ac0f1
        ;   XREF to: 005ac101 (CONDITIONAL_JUMP)  ; LAB_005ac101
    PUSH ECX                            ; 005ac0f3
    MOV EDX,dword ptr [ECX]             ; 005ac0f4
    XOR EBX,EBX                         ; 005ac0f6
    CALL dword ptr [EDX + 0x8]          ; 005ac0f8
    MOV dword ptr [0x02c99308],EBX      ; 005ac0fb | DAT_02c99308
    MOV ESI,dword ptr [0x02c99304]      ; 005ac101 | DAT_02c99304
        ;   Label: LAB_005ac101
    TEST ESI,ESI                        ; 005ac107
    JZ 0x005ac119                       ; 005ac109
        ;   XREF to: 005ac119 (CONDITIONAL_JUMP)  ; LAB_005ac119
    PUSH ESI                            ; 005ac10b
    MOV EDX,dword ptr [ESI]             ; 005ac10c
    XOR EDI,EDI                         ; 005ac10e
    CALL dword ptr [EDX + 0x8]          ; 005ac110
    MOV dword ptr [0x02c99304],EDI      ; 005ac113 | DAT_02c99304
    MOV EBP,dword ptr [0x02c99300]      ; 005ac119 | DAT_02c99300
        ;   Label: LAB_005ac119
    TEST EBP,EBP                        ; 005ac11f
    JZ 0x005ac13c                       ; 005ac121
        ;   XREF to: 005ac13c (CONDITIONAL_JUMP)  ; LAB_005ac13c
    PUSH EBP                            ; 005ac123
    MOV EDX,dword ptr [EBP]             ; 005ac124
    CALL dword ptr [EDX + 0x4c]         ; 005ac127
    MOV EAX,[0x02c99300]                ; 005ac12a | DAT_02c99300
    PUSH EAX                            ; 005ac12f
    MOV EDX,dword ptr [EAX]             ; 005ac130
    CALL dword ptr [EDX + 0x8]          ; 005ac132
    XOR EAX,EAX                         ; 005ac135
    MOV [0x02c99300],EAX                ; 005ac137 | DAT_02c99300
    PUSH 0x0                            ; 005ac13c
        ;   Label: LAB_005ac13c
    PUSH 0x2c99300                      ; 005ac13e | DAT_02c99300
    PUSH 0x0                            ; 005ac143
    CALL crt_ddraw.c_DirectDrawCreate   ; 005ac145
        ;   XREF to: 005cf7ba (UNCONDITIONAL_CALL)  ; HRESULT crt_ddraw.c_DirectDrawCreate(GUID * lp_guid, LPDIRECTDRAW * lplp_dd, IUnknown * p_unk_outer)
    TEST EAX,EAX                        ; 005ac14a
    JZ 0x005ac18f                       ; 005ac14c
        ;   XREF to: 005ac18f (CONDITIONAL_JUMP)  ; LAB_005ac18f
    MOV EBX,dword ptr [0x02c9be68]      ; 005ac14e | DAT_02c9be68
        ;   Label: LAB_005ac14e
    PUSH EBX                            ; 005ac154
    CALL engine_special.cpp_FUN_00581310 ; 005ac155
        ;   XREF to: 00581310 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_00581310(HWND window_handle)
    MOV EAX,0x1                         ; 005ac15a
    ADD ESP,0x4                         ; 005ac15f
    POP EBP                             ; 005ac162
    POP EDI                             ; 005ac163
    POP ESI                             ; 005ac164
    POP EBX                             ; 005ac165
    RET                                 ; 005ac166
    MOV ECX,0x5f9478                    ; 005ac167 | = "..\\wincore\\wddvmem.cpp"
        ;   Label: LAB_005ac167
    MOV EBX,0xed                        ; 005ac16c
    PUSH 0x5f948f                       ; 005ac171 | = "WDDVMEM: Fatal - out of frame buffer ..."
    MOV dword ptr [0x01d1d400],ECX      ; 005ac176 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 005ac17c | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005ac182
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005ac187
    JMP 0x005ac07c                      ; 005ac18a
        ;   XREF to: 005ac07c (UNCONDITIONAL_JUMP)  ; LAB_005ac07c
    PUSH 0x11                           ; 005ac18f
        ;   Label: LAB_005ac18f
    MOV ECX,dword ptr [0x02c9be68]      ; 005ac191 | DAT_02c9be68
    MOV EAX,[0x02c99300]                ; 005ac197 | DAT_02c99300
    PUSH ECX                            ; 005ac19c
    MOV EDX,dword ptr [EAX]             ; 005ac19d
    PUSH EAX                            ; 005ac19f
    CALL dword ptr [EDX + 0x50]         ; 005ac1a0
    JMP 0x005ac14e                      ; 005ac1a3
        ;   XREF to: 005ac14e (UNCONDITIONAL_JUMP)  ; LAB_005ac14e


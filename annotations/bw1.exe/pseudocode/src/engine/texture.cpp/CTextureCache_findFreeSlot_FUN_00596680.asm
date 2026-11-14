; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_texture_cpp_CTextureCache_findFreeSlot_FUN_00596680(CTextureCache *this_ptr)
;
; Parameters:
; CTextureCache *  Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   engine_texture.cpp_CTextureCache_loadTexture_FUN_005967a0 at 0059686c
;   engine_texture.cpp_FUN_00596e60 at 00596e67
;   engine_texture.cpp_FUN_00596ed0 at 00596ed7
;
; Referenced Globals:
;   TerminatedCString s_engine_texture_cpp_005f78ce
;   TerminatedCString s_CTextureCache_findFreeSl_005f78e4
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c8a684
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_memset_FUN_005bfb70
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00596680
        ;   Label: engine_texture.cpp_CTextureCache_findFreeSlot_FUN_00596680
    PUSH ESI                            ; 00596681
    PUSH EDI                            ; 00596682
    PUSH EBP                            ; 00596683
    MOV ESI,dword ptr [ESP + 0x14]      ; 00596684
    CMP dword ptr [ESI],0x0             ; 00596688
    JZ 0x00596714                       ; 0059668b
        ;   XREF to: 00596714 (CONDITIONAL_JUMP)  ; LAB_00596714
    MOV ECX,0xffffffff                  ; 00596691
    MOV EAX,ESI                         ; 00596696
    XOR EDX,EDX                         ; 00596698
    XOR EBX,EBX                         ; 0059669a
    CMP dword ptr [EAX + 0x5c],0x0      ; 0059669c
        ;   Label: LAB_0059669c
    JZ 0x0059676f                       ; 005966a0
        ;   XREF to: 0059676f (CONDITIONAL_JUMP)  ; LAB_0059676f
    INC EDX                             ; 005966a6
        ;   Label: LAB_005966a6
    ADD EAX,0x60                        ; 005966a7
    CMP EDX,0x400                       ; 005966aa
    JL 0x0059669c                       ; 005966b0
        ;   XREF to: 0059669c (CONDITIONAL_JUMP)  ; LAB_0059669c
    MOV EDI,EBX                         ; 005966b2
    LEA EAX,[EDI*0x4 + 0x0]             ; 005966b4
        ;   Label: LAB_005966b4
    SUB EAX,EDI                         ; 005966bb
    LEA EBX,[ESI + 0x4]                 ; 005966bd
    SHL EAX,0x5                         ; 005966c0
    ADD EBX,EAX                         ; 005966c3
    MOV EAX,dword ptr [EBX + 0x44]      ; 005966c5
    TEST EAX,EAX                        ; 005966c8
    JZ 0x005966d5                       ; 005966ca
        ;   XREF to: 005966d5 (CONDITIONAL_JUMP)  ; LAB_005966d5
    PUSH EAX                            ; 005966cc
    CALL crt_unknown.c_FUN_005c09f0     ; 005966cd
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 005966d2
    MOV ECX,dword ptr [EBX + 0x48]      ; 005966d5
        ;   Label: LAB_005966d5
    TEST ECX,ECX                        ; 005966d8
    JZ 0x005966e5                       ; 005966da
        ;   XREF to: 005966e5 (CONDITIONAL_JUMP)  ; LAB_005966e5
    PUSH ECX                            ; 005966dc
    CALL crt_unknown.c_FUN_005c09f0     ; 005966dd
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 005966e2
    MOV EBP,dword ptr [EBX + 0x4c]      ; 005966e5
        ;   Label: LAB_005966e5
    TEST EBP,EBP                        ; 005966e8
    JZ 0x005966f5                       ; 005966ea
        ;   XREF to: 005966f5 (CONDITIONAL_JUMP)  ; LAB_005966f5
    PUSH EBP                            ; 005966ec
    CALL crt_unknown.c_FUN_005c09f0     ; 005966ed
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 005966f2
    MOV EDX,dword ptr [EBX + 0x50]      ; 005966f5
        ;   Label: LAB_005966f5
    TEST EDX,EDX                        ; 005966f8
    JNZ 0x00596783                      ; 005966fa
        ;   XREF to: 00596783 (CONDITIONAL_JUMP)  ; LAB_00596783
    PUSH 0x60                           ; 00596700
    PUSH 0x0                            ; 00596702
    PUSH EBX                            ; 00596704
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00596705
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0059670a
    MOV EAX,EDI                         ; 0059670d
    POP EBP                             ; 0059670f
    POP EDI                             ; 00596710
    POP ESI                             ; 00596711
    POP EBX                             ; 00596712
    RET                                 ; 00596713
    MOV EDI,dword ptr [ESI + 0x18004]   ; 00596714
        ;   Label: LAB_00596714
    LEA EAX,[EDI + 0x1]                 ; 0059671a
    MOV dword ptr [ESI + 0x18004],EAX   ; 0059671d
    CMP EAX,0x400                       ; 00596723
    JL 0x005966b4                       ; 00596728
        ;   XREF to: 005966b4 (CONDITIONAL_JUMP)  ; LAB_005966b4
    MOV dword ptr [ESI],0x1             ; 0059672a
    MOV EBX,dword ptr [0x02c8a684]      ; 00596730 | DAT_02c8a684
    MOV dword ptr [ESI + 0x18004],0x400 ; 00596736
    TEST EBX,EBX                        ; 00596740
    JZ 0x005966b4                       ; 00596742
        ;   XREF to: 005966b4 (CONDITIONAL_JUMP)  ; LAB_005966b4
    MOV EBP,0x5f78ce                    ; 00596748 | = "..\\engine\\texture.cpp"
    MOV EAX,0xbc                        ; 0059674d
    PUSH 0x5f78e4                       ; 00596752 | = "CTextureCache::findFreeSlot - Cache h..."
    MOV dword ptr [0x01d1d400],EBP      ; 00596757 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0059675d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00596762
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00596767
    JMP 0x005966b4                      ; 0059676a
        ;   XREF to: 005966b4 (UNCONDITIONAL_JUMP)  ; LAB_005966b4
    MOV EBP,dword ptr [EAX + 0x58]      ; 0059676f
        ;   Label: LAB_0059676f
    CMP ECX,EBP                         ; 00596772
    JBE 0x005966a6                      ; 00596774
        ;   XREF to: 005966a6 (CONDITIONAL_JUMP)  ; LAB_005966a6
    MOV EBX,EDX                         ; 0059677a
    MOV ECX,EBP                         ; 0059677c
    JMP 0x005966a6                      ; 0059677e
        ;   XREF to: 005966a6 (UNCONDITIONAL_JUMP)  ; LAB_005966a6
    PUSH EDX                            ; 00596783
        ;   Label: LAB_00596783
    CALL crt_unknown.c_FUN_005c09f0     ; 00596784
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 00596789
    PUSH 0x60                           ; 0059678c
    PUSH 0x0                            ; 0059678e
    PUSH EBX                            ; 00596790
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00596791
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00596796
    MOV EAX,EDI                         ; 00596799
    POP EBP                             ; 0059679b
    POP EDI                             ; 0059679c
    POP ESI                             ; 0059679d
    POP EBX                             ; 0059679e
    RET                                 ; 0059679f


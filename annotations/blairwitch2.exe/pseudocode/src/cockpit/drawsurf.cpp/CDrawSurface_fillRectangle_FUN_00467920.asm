; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_fillRectangle_FUN_00467920(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00467ac0 at 00467ad2
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_005d13b4
;   TerminatedCString s_Invalid_bitsPerPixel_005d13cc
;   undefined4 DAT_006141c0
;   undefined4 DAT_01ba5c28
;   undefined4 DAT_01ba5c34
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   cockpit_drawsurf.cpp_drawHorizontalLineWithEffect_FUN_004664c0
;   core_main.c_FUN_004e4500
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467920
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_00467920
    PUSH ESI                            ; 00467921
    PUSH EDI                            ; 00467922
    PUSH EBP                            ; 00467923
    SUB ESP,0x14                        ; 00467924
    MOV EAX,dword ptr [ESP + 0x28]      ; 00467927
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0046792b
    MOV ESI,dword ptr [ESP + 0x30]      ; 0046792f
    MOV EBX,dword ptr [ESP + 0x34]      ; 00467933
    MOV EBP,dword ptr [ESP + 0x38]      ; 00467937
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046793b
    MOV ECX,dword ptr [EAX + 0xc]       ; 0046793e
    ADD EBX,EDX                         ; 00467941
    ADD EDI,EDX                         ; 00467943
    ADD ESI,ECX                         ; 00467945
    MOV EDX,dword ptr [EAX + 0x10]      ; 00467947
    ADD EBP,ECX                         ; 0046794a
    CMP EDI,EDX                         ; 0046794c
    JGE 0x00467952                      ; 0046794e
        ;   XREF to: 00467952 (CONDITIONAL_JUMP)  ; LAB_00467952
    MOV EDI,EDX                         ; 00467950
    MOV ECX,dword ptr [EAX + 0x18]      ; 00467952
        ;   Label: LAB_00467952
    CMP EBX,ECX                         ; 00467955
    JLE 0x0046795b                      ; 00467957
        ;   XREF to: 0046795b (CONDITIONAL_JUMP)  ; LAB_0046795b
    MOV EBX,ECX                         ; 00467959
    CMP EDI,EBX                         ; 0046795b
        ;   Label: LAB_0046795b
    JG 0x004679a0                       ; 0046795d
        ;   XREF to: 004679a0 (CONDITIONAL_JUMP)  ; LAB_004679a0
    MOV EDX,dword ptr [EAX + 0x14]      ; 0046795f
    CMP ESI,EDX                         ; 00467962
    JGE 0x00467968                      ; 00467964
        ;   XREF to: 00467968 (CONDITIONAL_JUMP)  ; LAB_00467968
    MOV ESI,EDX                         ; 00467966
    MOV ECX,dword ptr [EAX + 0x1c]      ; 00467968
        ;   Label: LAB_00467968
    CMP EBP,ECX                         ; 0046796b
    JLE 0x00467971                      ; 0046796d
        ;   XREF to: 00467971 (CONDITIONAL_JUMP)  ; LAB_00467971
    MOV EBP,ECX                         ; 0046796f
    CMP ESI,EBP                         ; 00467971
        ;   Label: LAB_00467971
    JG 0x004679a0                       ; 00467973
        ;   XREF to: 004679a0 (CONDITIONAL_JUMP)  ; LAB_004679a0
    CMP dword ptr [0x01ba5c34],0x0      ; 00467975 | DAT_01ba5c34
    JZ 0x00467a60                       ; 0046797c
        ;   XREF to: 00467a60 (CONDITIONAL_JUMP)  ; LAB_00467a60
    PUSH ESI                            ; 00467982
        ;   Label: LAB_00467982
    PUSH EBX                            ; 00467983
    PUSH EDI                            ; 00467984
    INC ESI                             ; 00467985
    CALL cockpit_drawsurf.cpp_drawHorizontalLineWithEffect_FUN_004664c0 ; 00467986
        ;   XREF to: 004664c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_drawHorizontalLineWithEffect_FUN_004664c0(int start_x, int end_x, int y)
    ADD ESP,0xc                         ; 0046798b
    CMP ESI,EBP                         ; 0046798e
    JLE 0x00467982                      ; 00467990
        ;   XREF to: 00467982 (CONDITIONAL_JUMP)  ; LAB_00467982
    LEA EAX,[EAX]                       ; 00467992
    LEA EDX,[EDX]                       ; 00467998
    MOV EAX,EAX                         ; 0046799e
    ADD ESP,0x14                        ; 004679a0
        ;   Label: LAB_004679a0
    POP EBP                             ; 004679a3
    POP EDI                             ; 004679a4
    POP ESI                             ; 004679a5
    POP EBX                             ; 004679a6
    RET                                 ; 004679a7
    SUB EBX,EDI                         ; 004679a8
        ;   Label: LAB_004679a8
    INC EBX                             ; 004679aa
    MOV dword ptr [ESP],EBX             ; 004679ab
    MOV EBX,EBP                         ; 004679ae
    MOV EBP,EDX                         ; 004679b0
    MOV EDX,dword ptr [ESP]             ; 004679b2
        ;   Label: LAB_004679b2
    PUSH EDX                            ; 004679b5
    MOV ECX,dword ptr [0x01ba5c28]      ; 004679b6 | DAT_01ba5c28
    MOV EAX,dword ptr [EBX + 0x1c2a38c] ; 004679bc | DAT_01c2a38c
    PUSH ECX                            ; 004679c2
    ADD EAX,EDI                         ; 004679c3
    PUSH EAX                            ; 004679c5
    ADD EBX,0x4                         ; 004679c6
    INC ESI                             ; 004679c9
    CALL crt_memory.c_memset_FUN_005b77c0 ; 004679ca
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004679cf
    CMP EBX,EBP                         ; 004679d2
    JLE 0x004679b2                      ; 004679d4
        ;   XREF to: 004679b2 (CONDITIONAL_JUMP)  ; LAB_004679b2
    ADD ESP,0x14                        ; 004679d6
    POP EBP                             ; 004679d9
    POP EDI                             ; 004679da
    POP ESI                             ; 004679db
    POP EBX                             ; 004679dc
    RET                                 ; 004679dd
    MOV dword ptr [ESP + 0x8],EDX       ; 004679de
        ;   Label: LAB_004679de
    MOV EAX,dword ptr [EBP + 0x1c2a38c] ; 004679e2 | DAT_01c2a38c
        ;   Label: LAB_004679e2
    MOV dword ptr [ESP + 0x10],EAX      ; 004679e8
    MOV EAX,EDI                         ; 004679ec
    CMP EDI,EBX                         ; 004679ee
    JG 0x00467a0e                       ; 004679f0
        ;   XREF to: 00467a0e (CONDITIONAL_JUMP)  ; LAB_00467a0e
    MOV ECX,dword ptr [ESP + 0x10]      ; 004679f2
    LEA EDX,[EDI + EDI*0x1]             ; 004679f6
    ADD EDX,ECX                         ; 004679f9
    ADD EDX,0x2                         ; 004679fb
        ;   Label: LAB_004679fb
    MOV CX,word ptr [0x01ba5c28]        ; 004679fe | DAT_01ba5c28
    INC EAX                             ; 00467a05
    MOV word ptr [EDX + -0x2],CX        ; 00467a06
    CMP EAX,EBX                         ; 00467a0a
    JLE 0x004679fb                      ; 00467a0c
        ;   XREF to: 004679fb (CONDITIONAL_JUMP)  ; LAB_004679fb
    MOV EAX,dword ptr [ESP + 0x8]       ; 00467a0e
        ;   Label: LAB_00467a0e
    ADD EBP,0x4                         ; 00467a12
    INC ESI                             ; 00467a15
    CMP EBP,EAX                         ; 00467a16
    JG 0x004679a0                       ; 00467a18
        ;   XREF to: 004679a0 (CONDITIONAL_JUMP)  ; LAB_004679a0
    JMP 0x004679e2                      ; 00467a1a
        ;   XREF to: 004679e2 (UNCONDITIONAL_JUMP)  ; LAB_004679e2
    MOV dword ptr [ESP + 0x4],EDX       ; 00467a1c
        ;   Label: LAB_00467a1c
    MOV EAX,dword ptr [EBP + 0x1c2a38c] ; 00467a20 | DAT_01c2a38c
        ;   Label: LAB_00467a20
    MOV EDX,EDI                         ; 00467a26
    MOV dword ptr [ESP + 0xc],EAX       ; 00467a28
    CMP EDI,EBX                         ; 00467a2c
    JG 0x00467a4e                       ; 00467a2e
        ;   XREF to: 00467a4e (CONDITIONAL_JUMP)  ; LAB_00467a4e
    MOV ECX,dword ptr [ESP + 0xc]       ; 00467a30
    LEA EAX,[EDI*0x4 + 0x0]             ; 00467a34
    ADD EAX,ECX                         ; 00467a3b
    ADD EAX,0x4                         ; 00467a3d
        ;   Label: LAB_00467a3d
    MOV ECX,dword ptr [0x01ba5c28]      ; 00467a40 | DAT_01ba5c28
    INC EDX                             ; 00467a46
    MOV dword ptr [EAX + -0x4],ECX      ; 00467a47
    CMP EDX,EBX                         ; 00467a4a
    JLE 0x00467a3d                      ; 00467a4c
        ;   XREF to: 00467a3d (CONDITIONAL_JUMP)  ; LAB_00467a3d
    MOV EAX,dword ptr [ESP + 0x4]       ; 00467a4e
        ;   Label: LAB_00467a4e
    ADD EBP,0x4                         ; 00467a52
    INC ESI                             ; 00467a55
    CMP EBP,EAX                         ; 00467a56
    JG 0x004679a0                       ; 00467a58
        ;   XREF to: 004679a0 (CONDITIONAL_JUMP)  ; LAB_004679a0
    JMP 0x00467a20                      ; 00467a5e
        ;   XREF to: 00467a20 (UNCONDITIONAL_JUMP)  ; LAB_00467a20
    LEA EDX,[EBP*0x4 + 0x0]             ; 00467a60
        ;   Label: LAB_00467a60
    MOV EAX,[0x006141c0]                ; 00467a67 | DAT_006141c0
    LEA EBP,[ESI*0x4 + 0x0]             ; 00467a6c
    CMP EAX,0x10                        ; 00467a73
    JNC 0x00467a83                      ; 00467a76
        ;   XREF to: 00467a83 (CONDITIONAL_JUMP)  ; LAB_00467a83
    CMP EAX,0x8                         ; 00467a78
    JZ 0x004679a8                       ; 00467a7b
        ;   XREF to: 004679a8 (CONDITIONAL_JUMP)  ; LAB_004679a8
    JMP 0x00467a8e                      ; 00467a81
        ;   XREF to: 00467a8e (UNCONDITIONAL_JUMP)  ; LAB_00467a8e
    JBE 0x004679de                      ; 00467a83
        ;   XREF to: 004679de (CONDITIONAL_JUMP)  ; LAB_004679de
        ;   Label: LAB_00467a83
    CMP EAX,0x20                        ; 00467a89
    JZ 0x00467a1c                       ; 00467a8c
        ;   XREF to: 00467a1c (CONDITIONAL_JUMP)  ; LAB_00467a1c
    MOV EDX,0x5d13b4                    ; 00467a8e | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_00467a8e
    MOV ECX,0x524                       ; 00467a93
    PUSH 0x5d13cc                       ; 00467a98 | = "Invalid bitsPerPixel!"
    MOV dword ptr [0x01d046a0],EDX      ; 00467a9d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00467aa3 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00467aa9
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00467aae
    ADD ESP,0x14                        ; 00467ab1
    POP EBP                             ; 00467ab4
    POP EDI                             ; 00467ab5
    POP ESI                             ; 00467ab6
    POP EBX                             ; 00467ab7
    RET                                 ; 00467ab8


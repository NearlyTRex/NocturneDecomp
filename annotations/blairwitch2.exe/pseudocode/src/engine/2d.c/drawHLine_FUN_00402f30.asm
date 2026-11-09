; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawHLine_FUN_00402f30(int x1,int y,int x2)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   x2
;
; XREF[11]:
;   core_fldnotes.cpp_FUN_004a2060 at 004a212b
;   core_netgame.cpp_CNetGame_runLobby_FUN_0050cf50 at 0050d0c0
;   engine_2d.c_drawRect_FUN_00403170 at 00403187
;   engine_2d.c_fillRectColor_FUN_004031c0 at 00403224
;   shape_edittool.cpp_FUN_0047a92e at 0047a954
;   shape_edittool.cpp_FUN_0047dc40 at 0047e187
;   shape_edittool.cpp_FUN_0047e870 at 0047ef80
;   shape_edittool.cpp_FUN_0047eff0 at 0047f167
;   shape_edittool.cpp_FUN_00483ea0 at 0048404c
;   shape_edittool.cpp_FUN_004840f0 at 0048416c
;   ... and 1 more
;
; Referenced Globals:
;   TerminatedCString s_engine_2d_c_005ca156
;   TerminatedCString s_hLine_invalid_bitsPerPix_005ca165
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;   undefined4 DAT_01c35e60
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402f30
        ;   Label: engine_2d.c_drawHLine_FUN_00402f30
    PUSH EDI                            ; 00402f31
    PUSH EBP                            ; 00402f32
    MOV EDX,dword ptr [ESP + 0x10]      ; 00402f33
    MOV ECX,dword ptr [ESP + 0x14]      ; 00402f37
    MOV EAX,dword ptr [ESP + 0x18]      ; 00402f3b
    CMP ECX,dword ptr [0x01c35e4c]      ; 00402f3f | DAT_01c35e4c
    JL 0x00402fb0                       ; 00402f45
        ;   XREF to: 00402fb0 (CONDITIONAL_JUMP)  ; LAB_00402fb0
    CMP ECX,dword ptr [0x01c35e54]      ; 00402f47 | DAT_01c35e54
    JG 0x00402fb0                       ; 00402f4d
        ;   XREF to: 00402fb0 (CONDITIONAL_JUMP)  ; LAB_00402fb0
    MOV EDI,dword ptr [0x01c35e48]      ; 00402f4f | DAT_01c35e48
    CMP EDX,EDI                         ; 00402f55
    JGE 0x00402f5b                      ; 00402f57
        ;   XREF to: 00402f5b (CONDITIONAL_JUMP)  ; LAB_00402f5b
    MOV EDX,EDI                         ; 00402f59
    MOV EBP,dword ptr [0x01c35e50]      ; 00402f5b | DAT_01c35e50
        ;   Label: LAB_00402f5b
    CMP EAX,EBP                         ; 00402f61
    JLE 0x00402f67                      ; 00402f63
        ;   XREF to: 00402f67 (CONDITIONAL_JUMP)  ; LAB_00402f67
    MOV EAX,EBP                         ; 00402f65
    SUB EAX,EDX                         ; 00402f67
        ;   Label: LAB_00402f67
    INC EAX                             ; 00402f69
    CMP EAX,0x1                         ; 00402f6a
    JL 0x00402fb0                       ; 00402f6d
        ;   XREF to: 00402fb0 (CONDITIONAL_JUMP)  ; LAB_00402fb0
    MOV EBX,dword ptr [0x006141c0]      ; 00402f6f | DAT_006141c0
    SHL ECX,0x2                         ; 00402f75
    CMP EBX,0x10                        ; 00402f78
    JNC 0x0040300b                      ; 00402f7b
        ;   XREF to: 0040300b (CONDITIONAL_JUMP)  ; LAB_0040300b
    CMP EBX,0x8                         ; 00402f81
    JNZ 0x00403012                      ; 00402f84
        ;   XREF to: 00403012 (CONDITIONAL_JUMP)  ; LAB_00403012
    PUSH EAX                            ; 00402f8a
    MOV EBX,dword ptr [0x01c35e60]      ; 00402f8b | DAT_01c35e60
    MOV EAX,dword ptr [ECX + 0x1c2a38c] ; 00402f91 | DAT_01c2a38c
    PUSH EBX                            ; 00402f97
    ADD EDX,EAX                         ; 00402f98
    PUSH EDX                            ; 00402f9a
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00402f9b
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00402fa0
    LEA EAX,[EAX]                       ; 00402fa3
    LEA EDX,[EDX]                       ; 00402fa9
    NOP                                 ; 00402faf
    POP EBP                             ; 00402fb0
        ;   Label: LAB_00402fb0
    POP EDI                             ; 00402fb1
    POP EBX                             ; 00402fb2
    RET                                 ; 00402fb3
    MOV EBX,dword ptr [0x01c35e60]      ; 00402fb4 | DAT_01c35e60
        ;   Label: LAB_00402fb4
    MOV ECX,dword ptr [ECX + 0x1c2a38c] ; 00402fba | DAT_01c2a38c
    ADD EDX,EDX                         ; 00402fc0
    MOV BX,word ptr [EBX*0x2 + 0x1c34910] ; 00402fc2
    ADD EDX,ECX                         ; 00402fca
    TEST EAX,EAX                        ; 00402fcc
    JLE 0x00402fb0                      ; 00402fce
        ;   XREF to: 00402fb0 (CONDITIONAL_JUMP)  ; LAB_00402fb0
    ADD EDX,0x2                         ; 00402fd0
        ;   Label: LAB_00402fd0
    DEC EAX                             ; 00402fd3
    MOV word ptr [EDX + -0x2],BX        ; 00402fd4
    TEST EAX,EAX                        ; 00402fd8
    JG 0x00402fd0                       ; 00402fda
        ;   XREF to: 00402fd0 (CONDITIONAL_JUMP)  ; LAB_00402fd0
    POP EBP                             ; 00402fdc
    POP EDI                             ; 00402fdd
    POP EBX                             ; 00402fde
    RET                                 ; 00402fdf
    MOV EBX,dword ptr [0x01c35e60]      ; 00402fe0 | DAT_01c35e60
        ;   Label: LAB_00402fe0
    SHL EDX,0x2                         ; 00402fe6
    MOV ECX,dword ptr [ECX + 0x1c2a38c] ; 00402fe9 | DAT_01c2a38c
    MOV EBX,dword ptr [EBX*0x4 + 0x1c34b10] ; 00402fef
    ADD EDX,ECX                         ; 00402ff6
    TEST EAX,EAX                        ; 00402ff8
    JLE 0x00402fb0                      ; 00402ffa
        ;   XREF to: 00402fb0 (CONDITIONAL_JUMP)  ; LAB_00402fb0
    ADD EDX,0x4                         ; 00402ffc
        ;   Label: LAB_00402ffc
    DEC EAX                             ; 00402fff
    MOV dword ptr [EDX + -0x4],EBX      ; 00403000
    TEST EAX,EAX                        ; 00403003
    JG 0x00402ffc                       ; 00403005
        ;   XREF to: 00402ffc (CONDITIONAL_JUMP)  ; LAB_00402ffc
    POP EBP                             ; 00403007
    POP EDI                             ; 00403008
    POP EBX                             ; 00403009
    RET                                 ; 0040300a
    JBE 0x00402fb4                      ; 0040300b
        ;   XREF to: 00402fb4 (CONDITIONAL_JUMP)  ; LAB_00402fb4
        ;   Label: LAB_0040300b
    CMP EBX,0x20                        ; 0040300d
    JZ 0x00402fe0                       ; 00403010
        ;   XREF to: 00402fe0 (CONDITIONAL_JUMP)  ; LAB_00402fe0
    MOV EAX,0x5ca156                    ; 00403012 | = "..\\engine\\2d.c"
        ;   Label: LAB_00403012
    MOV EDX,0x887                       ; 00403017
    PUSH 0x5ca165                       ; 0040301c | = "hLine - invalid bitsPerPixel"
    MOV [0x01d046a0],EAX                ; 00403021 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00403026 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0040302c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00403031
    POP EBP                             ; 00403034
    POP EDI                             ; 00403035
    POP EBX                             ; 00403036
    RET                                 ; 00403037


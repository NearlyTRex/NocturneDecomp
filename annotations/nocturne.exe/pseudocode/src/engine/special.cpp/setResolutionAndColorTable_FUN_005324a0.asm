; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_setResolutionAndColorTable_FUN_005324a0(int width,int height,int bits_per_pixel)
;
; Parameters:
; int              Stack[0x4]:4   width
; int              Stack[0x8]:4   height
; int              Stack[0xc]:4   bits_per_pixel
;
; XREF[2]:
;   wincore_wddvmem.cpp_FUN_00553ba0 at 00553bd2
;   wincore_wddvmem.cpp_resetGraphicsSystem_FUN_00553190 at 00553240
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   uchar[768] g_SourcePaletteData
;   int g_UseExternalRenderer
;   undefined4 DAT_02dc9d70
;   undefined4 DAT_02dc9d84
;   undefined4 DAT_02dc9dcc
;   undefined4 DAT_02dc9ddc
;   int INT_02dc9e04
;   undefined4 DAT_02dc9e0c
;   undefined4 DAT_02dc9e10
;   undefined4 DAT_02dc9e14
;   undefined4 DAT_02dc9e18
;   undefined4 DAT_02dc9e1c
;
; Called Functions:
;   engine_special.cpp_FUN_00532320
;   engine_special.cpp_loadExternalRenderer_FUN_00531780
;   engine_special.cpp_lockFrame_FUN_005322e0
;   wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004b63f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005324a0
        ;   Label: engine_special.cpp_setResolutionAndColorTable_FUN_005324a0
    PUSH ESI                            ; 005324a1
    PUSH EDI                            ; 005324a2
    PUSH EBP                            ; 005324a3
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005324a4
    XOR EDX,EDX                         ; 005324a8
    MOV dword ptr [0x02dc9d70],EDX      ; 005324aa | DAT_02dc9d70
    CMP EBX,0x10                        ; 005324b0
    JGE 0x005324ba                      ; 005324b3
        ;   XREF to: 005324ba (CONDITIONAL_JUMP)  ; LAB_005324ba
    MOV EBX,0x10                        ; 005324b5
    CMP dword ptr [0x02dc9e04],0x0      ; 005324ba | INT_02dc9e04
        ;   Label: LAB_005324ba
    JNZ 0x005324da                      ; 005324c1
        ;   XREF to: 005324da (CONDITIONAL_JUMP)  ; LAB_005324da
    MOV ESI,dword ptr [0x02dc9e18]      ; 005324c3 | DAT_02dc9e18
    PUSH ESI                            ; 005324c9
    CALL engine_special.cpp_loadExternalRenderer_FUN_00531780 ; 005324ca
        ;   XREF to: 00531780 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_loadExternalRenderer_FUN_00531780(HWND window_handle)
    ADD ESP,0x4                         ; 005324cf
    TEST EAX,EAX                        ; 005324d2
    JZ 0x00532580                       ; 005324d4
        ;   XREF to: 00532580 (CONDITIONAL_JUMP)  ; LAB_00532580
    PUSH 0x1bd2fa0                      ; 005324da | g_ScreenBufferArray
        ;   Label: LAB_005324da
    PUSH EBX                            ; 005324df
    MOV EDI,dword ptr [ESP + 0x20]      ; 005324e0
    PUSH EDI                            ; 005324e4
    MOV EBP,dword ptr [ESP + 0x20]      ; 005324e5
    PUSH EBP                            ; 005324e9
    CALL dword ptr [0x02dc9d84]         ; 005324ea | DAT_02dc9d84
    ADD ESP,0x10                        ; 005324f0
    TEST EAX,EAX                        ; 005324f3
    JZ 0x005325aa                       ; 005324f5
        ;   XREF to: 005325aa (CONDITIONAL_JUMP)  ; LAB_005325aa
    PUSH 0x1bff720                      ; 005324fb
    PUSH 0x1c00648                      ; 00532500 | g_SourcePaletteData
    CALL dword ptr [0x02dc9ddc]         ; 00532505 | DAT_02dc9ddc
    ADD ESP,0x8                         ; 0053250b
    CALL wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004b63f0 ; 0053250e
        ;   XREF to: 004b63f0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004b63f0()
    MOV EDX,dword ptr [0x02dc9e14]      ; 00532513 | DAT_02dc9e14
    PUSH EDX                            ; 00532519
    MOV ECX,dword ptr [0x02dc9e10]      ; 0053251a | DAT_02dc9e10
    PUSH ECX                            ; 00532520
    MOV ESI,dword ptr [0x02dc9e0c]      ; 00532521 | DAT_02dc9e0c
    PUSH ESI                            ; 00532527
    MOV EDI,0x1                         ; 00532528
    CALL dword ptr [0x02dc9dcc]         ; 0053252d | DAT_02dc9dcc
    ADD ESP,0xc                         ; 00532533
    MOV dword ptr [0x01c02594],EDI      ; 00532536 | g_UseExternalRenderer
    MOV dword ptr [0x02dc9e1c],EBX      ; 0053253c | DAT_02dc9e1c
    CALL engine_special.cpp_lockFrame_FUN_005322e0 ; 00532542
        ;   XREF to: 005322e0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_lockFrame_FUN_005322e0()
    MOV EBP,dword ptr [0x005b7624]      ; 00532547 | g_BitsPerPixel
    CMP EBP,0x10                        ; 0053254d
    JNZ 0x00532585                      ; 00532550
        ;   XREF to: 00532585 (CONDITIONAL_JUMP)  ; LAB_00532585
    MOV EAX,[0x01bd2fa0]                ; 00532552 | g_ScreenBufferArray
    MOV DX,word ptr [EAX]               ; 00532557
    MOV word ptr [EAX],0xabcd           ; 0053255a
    CMP word ptr [EAX],0xabcd           ; 0053255f
    SETNZ BL                            ; 00532564
    AND EBX,0xff                        ; 00532567
    MOV word ptr [EAX],DX               ; 0053256d
    MOV dword ptr [0x02dc9d70],EBX      ; 00532570 | DAT_02dc9d70
        ;   Label: LAB_00532570
    CALL engine_special.cpp_FUN_00532320 ; 00532576
        ;   XREF to: 00532320 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00532320()
        ;   Label: LAB_00532576
    MOV EAX,0x1                         ; 0053257b
    POP EBP                             ; 00532580
        ;   Label: LAB_00532580
    POP EDI                             ; 00532581
    POP ESI                             ; 00532582
    POP EBX                             ; 00532583
    RET                                 ; 00532584
    CMP EBP,0x20                        ; 00532585
        ;   Label: LAB_00532585
    JNZ 0x00532576                      ; 00532588
        ;   XREF to: 00532576 (CONDITIONAL_JUMP)  ; LAB_00532576
    MOV EAX,[0x01bd2fa0]                ; 0053258a | g_ScreenBufferArray
    MOV EDX,dword ptr [EAX]             ; 0053258f
    MOV dword ptr [EAX],0xaabbccdd      ; 00532591
    CMP dword ptr [EAX],0xaabbccdd      ; 00532597
    SETNZ BL                            ; 0053259d
    AND EBX,0xff                        ; 005325a0
    MOV dword ptr [EAX],EDX             ; 005325a6
    JMP 0x00532570                      ; 005325a8
        ;   XREF to: 00532570 (UNCONDITIONAL_JUMP)  ; LAB_00532570
    MOV [0x01c02594],EAX                ; 005325aa | g_UseExternalRenderer
        ;   Label: LAB_005325aa
    POP EBP                             ; 005325af
    POP EDI                             ; 005325b0
    POP ESI                             ; 005325b1
    POP EBX                             ; 005325b2
    RET                                 ; 005325b3


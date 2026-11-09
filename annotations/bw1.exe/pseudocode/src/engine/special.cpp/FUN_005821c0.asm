; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_FUN_005821c0(int width,int height,int bits_per_pixel)
;
; Parameters:
; int              Stack[0x4]:4   width
; int              Stack[0x8]:4   height
; int              Stack[0xc]:4   bits_per_pixel
;
; XREF[2]:
;   wincore_wddvmem.cpp_resetGraphicsSystem_FUN_005ac830 at 005ac8e0
;   wincore_wddvmem.cpp_videoRestore_FUN_005ad2c0 at 005ad30c
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c4e9f8
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c83380
;   undefined4 DAT_02c83398
;   undefined4 DAT_02c833ec
;   undefined4 DAT_02c833fc
;   undefined4 DAT_02c834ac
;   undefined4 DAT_02c834b4
;   undefined4 DAT_02c834b8
;   undefined4 DAT_02c834bc
;   undefined4 DAT_02c834c0
;   undefined4 DAT_02c834c4
;
; Called Functions:
;   engine_special.cpp_FUN_00581310
;   engine_special.cpp_FUN_00581f50
;   engine_special.cpp_unlockFrame_FUN_00581fa0
;   wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004ecf70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005821c0
        ;   Label: engine_special.cpp_FUN_005821c0
    PUSH ESI                            ; 005821c1
    PUSH EDI                            ; 005821c2
    PUSH EBP                            ; 005821c3
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005821c4
    XOR EDX,EDX                         ; 005821c8
    MOV dword ptr [0x02c83380],EDX      ; 005821ca | DAT_02c83380
    CMP EBX,0x10                        ; 005821d0
    JGE 0x005821da                      ; 005821d3
        ;   XREF to: 005821da (CONDITIONAL_JUMP)  ; LAB_005821da
    MOV EBX,0x10                        ; 005821d5
    CMP dword ptr [0x02c834ac],0x0      ; 005821da | DAT_02c834ac
        ;   Label: LAB_005821da
    JNZ 0x005821fa                      ; 005821e1
        ;   XREF to: 005821fa (CONDITIONAL_JUMP)  ; LAB_005821fa
    MOV ESI,dword ptr [0x02c834c0]      ; 005821e3 | DAT_02c834c0
    PUSH ESI                            ; 005821e9
    CALL engine_special.cpp_FUN_00581310 ; 005821ea
        ;   XREF to: 00581310 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_00581310(HWND window_handle)
    ADD ESP,0x4                         ; 005821ef
    TEST EAX,EAX                        ; 005821f2
    JZ 0x005822a9                       ; 005821f4
        ;   XREF to: 005822a9 (CONDITIONAL_JUMP)  ; LAB_005822a9
    PUSH 0x1c4354c                      ; 005821fa | DAT_01c4354c
        ;   Label: LAB_005821fa
    PUSH EBX                            ; 005821ff
    MOV EDI,dword ptr [ESP + 0x20]      ; 00582200
    PUSH EDI                            ; 00582204
    MOV EBP,dword ptr [ESP + 0x20]      ; 00582205
    PUSH EBP                            ; 00582209
    CALL dword ptr [0x02c83398]         ; 0058220a | DAT_02c83398
    ADD ESP,0x10                        ; 00582210
    TEST EAX,EAX                        ; 00582213
    JZ 0x005822d3                       ; 00582215
        ;   XREF to: 005822d3 (CONDITIONAL_JUMP)  ; LAB_005822d3
    PUSH 0x1c4dad0                      ; 0058221b
    PUSH 0x1c4e9f8                      ; 00582220 | DAT_01c4e9f8
    CALL dword ptr [0x02c833fc]         ; 00582225 | DAT_02c833fc
    ADD ESP,0x8                         ; 0058222b
    CALL wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004ecf70 ; 0058222e
        ;   XREF to: 004ecf70 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004ecf70()
    MOV EDX,dword ptr [0x02c834bc]      ; 00582233 | DAT_02c834bc
    PUSH EDX                            ; 00582239
    MOV ECX,dword ptr [0x02c834b8]      ; 0058223a | DAT_02c834b8
    PUSH ECX                            ; 00582240
    MOV ESI,dword ptr [0x02c834b4]      ; 00582241 | DAT_02c834b4
    PUSH ESI                            ; 00582247
    MOV EDI,0x1                         ; 00582248
    CALL dword ptr [0x02c833ec]         ; 0058224d | DAT_02c833ec
    ADD ESP,0xc                         ; 00582253
    MOV dword ptr [0x01c50948],EDI      ; 00582256 | DAT_01c50948
    MOV dword ptr [0x02c834c4],EBX      ; 0058225c | DAT_02c834c4
    CALL engine_special.cpp_FUN_00581f50 ; 00582262
        ;   XREF to: 00581f50 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00581f50()
    TEST EAX,EAX                        ; 00582267
    JZ 0x005822a4                       ; 00582269
        ;   XREF to: 005822a4 (CONDITIONAL_JUMP)  ; LAB_005822a4
    MOV EBP,dword ptr [0x0061b4a0]      ; 0058226b | DAT_0061b4a0
    CMP EBP,0x10                        ; 00582271
    JNZ 0x005822ae                      ; 00582274
        ;   XREF to: 005822ae (CONDITIONAL_JUMP)  ; LAB_005822ae
    MOV EAX,[0x01c4354c]                ; 00582276 | DAT_01c4354c
    MOV DX,word ptr [EAX]               ; 0058227b
    MOV word ptr [EAX],0xabcd           ; 0058227e
    CMP word ptr [EAX],0xabcd           ; 00582283
    SETNZ BL                            ; 00582288
    AND EBX,0xff                        ; 0058228b
    MOV word ptr [EAX],DX               ; 00582291
    MOV dword ptr [0x02c83380],EBX      ; 00582294 | DAT_02c83380
        ;   Label: LAB_00582294
    PUSH 0x0                            ; 0058229a
        ;   Label: LAB_0058229a
    CALL engine_special.cpp_unlockFrame_FUN_00581fa0 ; 0058229c
        ;   XREF to: 00581fa0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_unlockFrame_FUN_00581fa0(int clear_lock_flag)
    ADD ESP,0x4                         ; 005822a1
    MOV EAX,0x1                         ; 005822a4
        ;   Label: LAB_005822a4
    POP EBP                             ; 005822a9
        ;   Label: LAB_005822a9
    POP EDI                             ; 005822aa
    POP ESI                             ; 005822ab
    POP EBX                             ; 005822ac
    RET                                 ; 005822ad
    CMP EBP,0x20                        ; 005822ae
        ;   Label: LAB_005822ae
    JNZ 0x0058229a                      ; 005822b1
        ;   XREF to: 0058229a (CONDITIONAL_JUMP)  ; LAB_0058229a
    MOV EAX,[0x01c4354c]                ; 005822b3 | DAT_01c4354c
    MOV EDX,dword ptr [EAX]             ; 005822b8
    MOV dword ptr [EAX],0xaabbccdd      ; 005822ba
    CMP dword ptr [EAX],0xaabbccdd      ; 005822c0
    SETNZ BL                            ; 005822c6
    AND EBX,0xff                        ; 005822c9
    MOV dword ptr [EAX],EDX             ; 005822cf
    JMP 0x00582294                      ; 005822d1
        ;   XREF to: 00582294 (UNCONDITIONAL_JUMP)  ; LAB_00582294
    MOV [0x01c50948],EAX                ; 005822d3 | DAT_01c50948
        ;   Label: LAB_005822d3
    POP EBP                             ; 005822d8
    POP EDI                             ; 005822d9
    POP ESI                             ; 005822da
    POP EBX                             ; 005822db
    RET                                 ; 005822dc


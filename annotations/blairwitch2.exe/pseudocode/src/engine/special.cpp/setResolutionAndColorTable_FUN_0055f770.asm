; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_setResolutionAndColorTable_FUN_0055f770(int width,int height,int bits_per_pixel)
;
; Parameters:
; int              Stack[0x4]:4   width
; int              Stack[0x8]:4   height
; int              Stack[0xc]:4   bits_per_pixel
;
; XREF[2]:
;   wincore_wddvmem.cpp_FUN_005897e0 at 00589812
;   wincore_wddvmem.cpp_resetGraphicsSystem_FUN_00588de0 at 00588e90
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c35838
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bbb0
;   undefined4 DAT_0264bbc8
;   undefined4 DAT_0264bc1c
;   undefined4 DAT_0264bc2c
;   undefined4 DAT_0264bcdc
;   undefined4 DAT_0264bce4
;   undefined4 DAT_0264bce8
;   undefined4 DAT_0264bcec
;   undefined4 DAT_0264bcf0
;   undefined4 DAT_0264bcf4
;
; Called Functions:
;   engine_special.cpp_FUN_0055e8c0
;   engine_special.cpp_FUN_0055f500
;   engine_special.cpp_FUN_0055f550
;   wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d0d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055f770
        ;   Label: engine_special.cpp_setResolutionAndColorTable_FUN_0055f770
    PUSH ESI                            ; 0055f771
    PUSH EDI                            ; 0055f772
    PUSH EBP                            ; 0055f773
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0055f774
    XOR EDX,EDX                         ; 0055f778
    MOV dword ptr [0x0264bbb0],EDX      ; 0055f77a | DAT_0264bbb0
    CMP EBX,0x10                        ; 0055f780
    JGE 0x0055f78a                      ; 0055f783
        ;   XREF to: 0055f78a (CONDITIONAL_JUMP)  ; LAB_0055f78a
    MOV EBX,0x10                        ; 0055f785
    CMP dword ptr [0x0264bcdc],0x0      ; 0055f78a | DAT_0264bcdc
        ;   Label: LAB_0055f78a
    JNZ 0x0055f7aa                      ; 0055f791
        ;   XREF to: 0055f7aa (CONDITIONAL_JUMP)  ; LAB_0055f7aa
    MOV ESI,dword ptr [0x0264bcf0]      ; 0055f793 | DAT_0264bcf0
    PUSH ESI                            ; 0055f799
    CALL engine_special.cpp_FUN_0055e8c0 ; 0055f79a
        ;   XREF to: 0055e8c0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_0055e8c0(HWND window_handle)
    ADD ESP,0x4                         ; 0055f79f
    TEST EAX,EAX                        ; 0055f7a2
    JZ 0x0055f855                       ; 0055f7a4
        ;   XREF to: 0055f855 (CONDITIONAL_JUMP)  ; LAB_0055f855
    PUSH 0x1c2a38c                      ; 0055f7aa | DAT_01c2a38c
        ;   Label: LAB_0055f7aa
    PUSH EBX                            ; 0055f7af
    MOV EDI,dword ptr [ESP + 0x20]      ; 0055f7b0
    PUSH EDI                            ; 0055f7b4
    MOV EBP,dword ptr [ESP + 0x20]      ; 0055f7b5
    PUSH EBP                            ; 0055f7b9
    CALL dword ptr [0x0264bbc8]         ; 0055f7ba | DAT_0264bbc8
    ADD ESP,0x10                        ; 0055f7c0
    TEST EAX,EAX                        ; 0055f7c3
    JZ 0x0055f87f                       ; 0055f7c5
        ;   XREF to: 0055f87f (CONDITIONAL_JUMP)  ; LAB_0055f87f
    PUSH 0x1c34910                      ; 0055f7cb
    PUSH 0x1c35838                      ; 0055f7d0 | DAT_01c35838
    CALL dword ptr [0x0264bc2c]         ; 0055f7d5 | DAT_0264bc2c
    ADD ESP,0x8                         ; 0055f7db
    CALL wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d0d10 ; 0055f7de
        ;   XREF to: 004d0d10 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d0d10()
    MOV EDX,dword ptr [0x0264bcec]      ; 0055f7e3 | DAT_0264bcec
    PUSH EDX                            ; 0055f7e9
    MOV ECX,dword ptr [0x0264bce8]      ; 0055f7ea | DAT_0264bce8
    PUSH ECX                            ; 0055f7f0
    MOV ESI,dword ptr [0x0264bce4]      ; 0055f7f1 | DAT_0264bce4
    PUSH ESI                            ; 0055f7f7
    MOV EDI,0x1                         ; 0055f7f8
    CALL dword ptr [0x0264bc1c]         ; 0055f7fd | DAT_0264bc1c
    ADD ESP,0xc                         ; 0055f803
    MOV dword ptr [0x01c37788],EDI      ; 0055f806 | DAT_01c37788
    MOV dword ptr [0x0264bcf4],EBX      ; 0055f80c | DAT_0264bcf4
    CALL engine_special.cpp_FUN_0055f500 ; 0055f812
        ;   XREF to: 0055f500 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_0055f500()
    MOV EBP,dword ptr [0x006141c0]      ; 0055f817 | DAT_006141c0
    CMP EBP,0x10                        ; 0055f81d
    JNZ 0x0055f85a                      ; 0055f820
        ;   XREF to: 0055f85a (CONDITIONAL_JUMP)  ; LAB_0055f85a
    MOV EAX,[0x01c2a38c]                ; 0055f822 | DAT_01c2a38c
    MOV DX,word ptr [EAX]               ; 0055f827
    MOV word ptr [EAX],0xabcd           ; 0055f82a
    CMP word ptr [EAX],0xabcd           ; 0055f82f
    SETNZ BL                            ; 0055f834
    AND EBX,0xff                        ; 0055f837
    MOV word ptr [EAX],DX               ; 0055f83d
    MOV dword ptr [0x0264bbb0],EBX      ; 0055f840 | DAT_0264bbb0
        ;   Label: LAB_0055f840
    PUSH 0x0                            ; 0055f846
        ;   Label: LAB_0055f846
    CALL engine_special.cpp_FUN_0055f550 ; 0055f848
        ;   XREF to: 0055f550 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_0055f550(int clear_lock_flag)
    MOV EAX,0x1                         ; 0055f84d
    ADD ESP,0x4                         ; 0055f852
    POP EBP                             ; 0055f855
        ;   Label: LAB_0055f855
    POP EDI                             ; 0055f856
    POP ESI                             ; 0055f857
    POP EBX                             ; 0055f858
    RET                                 ; 0055f859
    CMP EBP,0x20                        ; 0055f85a
        ;   Label: LAB_0055f85a
    JNZ 0x0055f846                      ; 0055f85d
        ;   XREF to: 0055f846 (CONDITIONAL_JUMP)  ; LAB_0055f846
    MOV EAX,[0x01c2a38c]                ; 0055f85f | DAT_01c2a38c
    MOV EDX,dword ptr [EAX]             ; 0055f864
    MOV dword ptr [EAX],0xaabbccdd      ; 0055f866
    CMP dword ptr [EAX],0xaabbccdd      ; 0055f86c
    SETNZ BL                            ; 0055f872
    AND EBX,0xff                        ; 0055f875
    MOV dword ptr [EAX],EDX             ; 0055f87b
    JMP 0x0055f840                      ; 0055f87d
        ;   XREF to: 0055f840 (UNCONDITIONAL_JUMP)  ; LAB_0055f840
    MOV [0x01c37788],EAX                ; 0055f87f | DAT_01c37788
        ;   Label: LAB_0055f87f
    POP EBP                             ; 0055f884
    POP EDI                             ; 0055f885
    POP ESI                             ; 0055f886
    POP EBX                             ; 0055f887
    RET                                 ; 0055f888


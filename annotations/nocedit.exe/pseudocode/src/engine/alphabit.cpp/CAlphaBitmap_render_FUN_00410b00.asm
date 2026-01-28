; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_alphabit_cpp_CAlphaBitmap_render_FUN_00410b00 (CAlphaBitmap *this_ptr,int dest_y,int dest_x,int left_x,int top_y,int right_x, int bottom_y)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   dest_y
; int              Stack[0xc]:4   dest_x
; int              Stack[0x10]:4   left_x
; int              Stack[0x14]:4   top_y
; int              Stack[0x18]:4   right_x
; int              Stack[0x1c]:4   bottom_y
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_inv.cpp_CInventory_renderAllItems_FUN_00500690 at 00500e73
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_00410cf0
;   wincore_windll.cpp_renderAlphaRow16_FUN_005b55f7
;   wincore_windll.cpp_renderAlphaRow32_FUN_005b555c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410b00
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_render_FUN_00410b00
    PUSH ESI                            ; 00410b01
    PUSH EDI                            ; 00410b02
    PUSH EBP                            ; 00410b03
    SUB ESP,0x1c                        ; 00410b04
    MOV EBP,dword ptr [ESP + 0x30]      ; 00410b07
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00410b0b
    MOV ESI,dword ptr [ESP + 0x40]      ; 00410b0f
    MOV EAX,dword ptr [ESP + 0x44]      ; 00410b13
    SUB EAX,EDI                         ; 00410b17
    PUSH EBP                            ; 00410b19
    INC EAX                             ; 00410b1a
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00410b1b
    MOV dword ptr [ESP + 0x14],EAX      ; 00410b1f
    CALL engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_00410cf0 ; 00410b23
        ;   XREF to: 00410cf0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_00410cf0(CAlphaBitmap * this_ptr)
    MOV EDX,dword ptr [EBP + 0xc]       ; 00410b28
    SUB EBX,ESI                         ; 00410b2b
    IMUL ESI,EDX                        ; 00410b2d
    INC EBX                             ; 00410b30
    ADD ESP,0x4                         ; 00410b31
    ADD ESI,EDI                         ; 00410b34
    MOV EDI,dword ptr [EBP]             ; 00410b36
    MOV EAX,dword ptr [EBP + 0x4]       ; 00410b39
    ADD EDI,ESI                         ; 00410b3c
    ADD ESI,EAX                         ; 00410b3e
    MOV EAX,dword ptr [ESP + 0x38]      ; 00410b40
    LEA EDX,[EBX*0x4 + 0x0]             ; 00410b44
    SHL EAX,0x2                         ; 00410b4b
    MOV ECX,dword ptr [0x0067939c]      ; 00410b4e | g_BitsPerPixel
    ADD EDX,EAX                         ; 00410b54
    CMP ECX,0x20                        ; 00410b56
    JNZ 0x00410bb8                      ; 00410b59
        ;   XREF to: 00410bb8 (CONDITIONAL_JUMP)  ; LAB_00410bb8
    TEST EBX,EBX                        ; 00410b5b
    JLE 0x00410bb0                      ; 00410b5d
        ;   XREF to: 00410bb0 (CONDITIONAL_JUMP)  ; LAB_00410bb0
    MOV EBX,dword ptr [ESP + 0x34]      ; 00410b5f
    MOV dword ptr [ESP + 0x14],EAX      ; 00410b63
    SHL EBX,0x2                         ; 00410b67
    MOV dword ptr [ESP],EDX             ; 00410b6a
    MOV dword ptr [ESP + 0x8],EBX       ; 00410b6d
    MOV EDX,dword ptr [ESP + 0x10]      ; 00410b71
        ;   Label: LAB_00410b71
    PUSH EDX                            ; 00410b75
    MOV ECX,dword ptr [ESP + 0x50]      ; 00410b76
    PUSH ECX                            ; 00410b7a
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00410b7b
    PUSH ESI                            ; 00410b7f
    MOV EBX,dword ptr [ESP + 0x14]      ; 00410b80
    MOV EAX,dword ptr [EAX + 0x2cf6a9c] ; 00410b84 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    PUSH EDI                            ; 00410b8a
    ADD EAX,EBX                         ; 00410b8b
    PUSH EAX                            ; 00410b8d
    CALL wincore_windll.cpp_renderAlphaRow32_FUN_005b555c ; 00410b8e
        ;   XREF to: 005b555c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_renderAlphaRow32_FUN_005b555c(uint * destPixels, uchar * srcIndices, uchar * srcAlpha, int globalAlpha, ...)
    ADD ESP,0x14                        ; 00410b93
    MOV EBX,dword ptr [EBP + 0xc]       ; 00410b96
    MOV EDX,dword ptr [ESP + 0x14]      ; 00410b99
    MOV ECX,dword ptr [ESP]             ; 00410b9d
    ADD EDI,EBX                         ; 00410ba0
    ADD EDX,0x4                         ; 00410ba2
    ADD ESI,EBX                         ; 00410ba5
    MOV dword ptr [ESP + 0x14],EDX      ; 00410ba7
    CMP EDX,ECX                         ; 00410bab
    JL 0x00410b71                       ; 00410bad
        ;   XREF to: 00410b71 (CONDITIONAL_JUMP)  ; LAB_00410b71
    NOP                                 ; 00410baf
    ADD ESP,0x1c                        ; 00410bb0
        ;   Label: LAB_00410bb0
    POP EBP                             ; 00410bb3
    POP EDI                             ; 00410bb4
    POP ESI                             ; 00410bb5
    POP EBX                             ; 00410bb6
    RET                                 ; 00410bb7
    TEST EBX,EBX                        ; 00410bb8
        ;   Label: LAB_00410bb8
    JLE 0x00410bb0                      ; 00410bba
        ;   XREF to: 00410bb0 (CONDITIONAL_JUMP)  ; LAB_00410bb0
    MOV EBX,dword ptr [ESP + 0x34]      ; 00410bbc
    MOV dword ptr [ESP + 0x18],EAX      ; 00410bc0
    ADD EBX,EBX                         ; 00410bc4
    MOV dword ptr [ESP + 0xc],EDX       ; 00410bc6
    MOV dword ptr [ESP + 0x4],EBX       ; 00410bca
    MOV EDX,dword ptr [ESP + 0x10]      ; 00410bce
        ;   Label: LAB_00410bce
    PUSH EDX                            ; 00410bd2
    MOV ECX,dword ptr [ESP + 0x50]      ; 00410bd3
    PUSH ECX                            ; 00410bd7
    MOV EAX,dword ptr [ESP + 0x20]      ; 00410bd8
    PUSH ESI                            ; 00410bdc
    MOV EBX,dword ptr [ESP + 0x10]      ; 00410bdd
    MOV EAX,dword ptr [EAX + 0x2cf6a9c] ; 00410be1 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    PUSH EDI                            ; 00410be7
    ADD EAX,EBX                         ; 00410be8
    PUSH EAX                            ; 00410bea
    CALL wincore_windll.cpp_renderAlphaRow16_FUN_005b55f7 ; 00410beb
        ;   XREF to: 005b55f7 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_renderAlphaRow16_FUN_005b55f7(ushort * destPixels, uchar * srcIndices, uchar * srcAlpha, int globalAlpha, ...)
    ADD ESP,0x14                        ; 00410bf0
    MOV EBX,dword ptr [EBP + 0xc]       ; 00410bf3
    MOV EDX,dword ptr [ESP + 0x18]      ; 00410bf6
    MOV ECX,dword ptr [ESP + 0xc]       ; 00410bfa
    ADD EDI,EBX                         ; 00410bfe
    ADD EDX,0x4                         ; 00410c00
    ADD ESI,EBX                         ; 00410c03
    MOV dword ptr [ESP + 0x18],EDX      ; 00410c05
    CMP EDX,ECX                         ; 00410c09
    JL 0x00410bce                       ; 00410c0b
        ;   XREF to: 00410bce (CONDITIONAL_JUMP)  ; LAB_00410bce
    ADD ESP,0x1c                        ; 00410c0d
    POP EBP                             ; 00410c10
    POP EDI                             ; 00410c11
    POP ESI                             ; 00410c12
    POP EBX                             ; 00410c13
    RET                                 ; 00410c14


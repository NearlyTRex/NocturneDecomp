; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_alphabit_cpp_CAlphaBitmap_render_FUN_0040e8c0(CAlphaBitmap *this_ptr,int dest_x,int dest_y,int left_x,int top_y,int right_x,int bottom_y,int global_alpha)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   dest_x
; int              Stack[0xc]:4   dest_y
; int              Stack[0x10]:4   left_x
; int              Stack[0x14]:4   top_y
; int              Stack[0x18]:4   right_x
; int              Stack[0x1c]:4   bottom_y
; int              Stack[0x20]:4   global_alpha
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
;   core_inv.cpp_CInventory_FUN_004c2470 at 004c2c53
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_0040eab0
;   engine_special.cpp_renderAlphaRow16_FUN_005305f7
;   engine_special.cpp_renderAlphaRow32_FUN_0053055c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e8c0
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_render_FUN_0040e8c0
    PUSH ESI                            ; 0040e8c1
    PUSH EDI                            ; 0040e8c2
    PUSH EBP                            ; 0040e8c3
    SUB ESP,0x1c                        ; 0040e8c4
    MOV EBP,dword ptr [ESP + 0x30]      ; 0040e8c7
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0040e8cb
    MOV ESI,dword ptr [ESP + 0x40]      ; 0040e8cf
    MOV EAX,dword ptr [ESP + 0x44]      ; 0040e8d3
    SUB EAX,EDI                         ; 0040e8d7
    PUSH EBP                            ; 0040e8d9
    INC EAX                             ; 0040e8da
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0040e8db
    MOV dword ptr [ESP + 0x14],EAX      ; 0040e8df
    CALL engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_0040eab0 ; 0040e8e3
        ;   XREF to: 0040eab0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_0040eab0(CAlphaBitmap * this_ptr)
    MOV EDX,dword ptr [EBP + 0xc]       ; 0040e8e8
    SUB EBX,ESI                         ; 0040e8eb
    IMUL ESI,EDX                        ; 0040e8ed
    INC EBX                             ; 0040e8f0
    ADD ESP,0x4                         ; 0040e8f1
    ADD ESI,EDI                         ; 0040e8f4
    MOV EDI,dword ptr [EBP]             ; 0040e8f6
    MOV EAX,dword ptr [EBP + 0x4]       ; 0040e8f9
    ADD EDI,ESI                         ; 0040e8fc
    ADD ESI,EAX                         ; 0040e8fe
    MOV EAX,dword ptr [ESP + 0x38]      ; 0040e900
    LEA EDX,[EBX*0x4 + 0x0]             ; 0040e904
    SHL EAX,0x2                         ; 0040e90b
    MOV ECX,dword ptr [0x005b7624]      ; 0040e90e | DAT_005b7624
    ADD EDX,EAX                         ; 0040e914
    CMP ECX,0x20                        ; 0040e916
    JNZ 0x0040e978                      ; 0040e919
        ;   XREF to: 0040e978 (CONDITIONAL_JUMP)  ; LAB_0040e978
    TEST EBX,EBX                        ; 0040e91b
    JLE 0x0040e970                      ; 0040e91d
        ;   XREF to: 0040e970 (CONDITIONAL_JUMP)  ; LAB_0040e970
    MOV EBX,dword ptr [ESP + 0x34]      ; 0040e91f
    MOV dword ptr [ESP + 0x14],EAX      ; 0040e923
    SHL EBX,0x2                         ; 0040e927
    MOV dword ptr [ESP],EDX             ; 0040e92a
    MOV dword ptr [ESP + 0x8],EBX       ; 0040e92d
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040e931
        ;   Label: LAB_0040e931
    PUSH EDX                            ; 0040e935
    MOV ECX,dword ptr [ESP + 0x50]      ; 0040e936
    PUSH ECX                            ; 0040e93a
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0040e93b
    PUSH ESI                            ; 0040e93f
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040e940
    MOV EAX,dword ptr [EAX + 0x1bd2fa0] ; 0040e944 | DAT_01bd2fa0 | DAT_01bd2fa4
    PUSH EDI                            ; 0040e94a
    ADD EAX,EBX                         ; 0040e94b
    PUSH EAX                            ; 0040e94d
    CALL engine_special.cpp_renderAlphaRow32_FUN_0053055c ; 0040e94e
        ;   XREF to: 0053055c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderAlphaRow32_FUN_0053055c(uint * destPixels, uchar * srcIndices, uchar * srcAlpha, int globalAlpha, ...)
    ADD ESP,0x14                        ; 0040e953
    MOV EBX,dword ptr [EBP + 0xc]       ; 0040e956
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040e959
    MOV ECX,dword ptr [ESP]             ; 0040e95d
    ADD EDI,EBX                         ; 0040e960
    ADD EDX,0x4                         ; 0040e962
    ADD ESI,EBX                         ; 0040e965
    MOV dword ptr [ESP + 0x14],EDX      ; 0040e967
    CMP EDX,ECX                         ; 0040e96b
    JL 0x0040e931                       ; 0040e96d
        ;   XREF to: 0040e931 (CONDITIONAL_JUMP)  ; LAB_0040e931
    NOP                                 ; 0040e96f
    ADD ESP,0x1c                        ; 0040e970
        ;   Label: LAB_0040e970
    POP EBP                             ; 0040e973
    POP EDI                             ; 0040e974
    POP ESI                             ; 0040e975
    POP EBX                             ; 0040e976
    RET                                 ; 0040e977
    TEST EBX,EBX                        ; 0040e978
        ;   Label: LAB_0040e978
    JLE 0x0040e970                      ; 0040e97a
        ;   XREF to: 0040e970 (CONDITIONAL_JUMP)  ; LAB_0040e970
    MOV EBX,dword ptr [ESP + 0x34]      ; 0040e97c
    MOV dword ptr [ESP + 0x18],EAX      ; 0040e980
    ADD EBX,EBX                         ; 0040e984
    MOV dword ptr [ESP + 0xc],EDX       ; 0040e986
    MOV dword ptr [ESP + 0x4],EBX       ; 0040e98a
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040e98e
        ;   Label: LAB_0040e98e
    PUSH EDX                            ; 0040e992
    MOV ECX,dword ptr [ESP + 0x50]      ; 0040e993
    PUSH ECX                            ; 0040e997
    MOV EAX,dword ptr [ESP + 0x20]      ; 0040e998
    PUSH ESI                            ; 0040e99c
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040e99d
    MOV EAX,dword ptr [EAX + 0x1bd2fa0] ; 0040e9a1 | DAT_01bd2fa0 | DAT_01bd2fa4
    PUSH EDI                            ; 0040e9a7
    ADD EAX,EBX                         ; 0040e9a8
    PUSH EAX                            ; 0040e9aa
    CALL engine_special.cpp_renderAlphaRow16_FUN_005305f7 ; 0040e9ab
        ;   XREF to: 005305f7 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderAlphaRow16_FUN_005305f7(ushort * destPixels, uchar * srcIndices, uchar * srcAlpha, int globalAlpha, ...)
    ADD ESP,0x14                        ; 0040e9b0
    MOV EBX,dword ptr [EBP + 0xc]       ; 0040e9b3
    MOV EDX,dword ptr [ESP + 0x18]      ; 0040e9b6
    MOV ECX,dword ptr [ESP + 0xc]       ; 0040e9ba
    ADD EDI,EBX                         ; 0040e9be
    ADD EDX,0x4                         ; 0040e9c0
    ADD ESI,EBX                         ; 0040e9c3
    MOV dword ptr [ESP + 0x18],EDX      ; 0040e9c5
    CMP EDX,ECX                         ; 0040e9c9
    JL 0x0040e98e                       ; 0040e9cb
        ;   XREF to: 0040e98e (CONDITIONAL_JUMP)  ; LAB_0040e98e
    ADD ESP,0x1c                        ; 0040e9cd
    POP EBP                             ; 0040e9d0
    POP EDI                             ; 0040e9d1
    POP ESI                             ; 0040e9d2
    POP EBX                             ; 0040e9d3
    RET                                 ; 0040e9d4


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawLineBresenham_FUN_00487ad0 (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00487990 at 00487a17
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00487ad0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_00487ad0
    PUSH ESI                            ; 00487ad1
    PUSH EDI                            ; 00487ad2
    PUSH EBP                            ; 00487ad3
    SUB ESP,0x10                        ; 00487ad4
    MOV EDI,dword ptr [ESP + 0x28]      ; 00487ad7
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00487adb
    MOV EBP,dword ptr [ESP + 0x30]      ; 00487adf
    MOV ESI,dword ptr [ESP + 0x34]      ; 00487ae3
    MOV EDX,0x1                         ; 00487ae7
    MOV EAX,dword ptr [ESP + 0x24]      ; 00487aec
    MOV dword ptr [ESP],EDX             ; 00487af0
    MOV ECX,dword ptr [EAX + 0x8]       ; 00487af3
    MOV EDX,dword ptr [EAX + 0xc]       ; 00487af6
    SUB EDI,ECX                         ; 00487af9
    SUB EBX,EDX                         ; 00487afb
    SUB ESI,EDX                         ; 00487afd
    SUB EBP,ECX                         ; 00487aff
    CMP EBX,ESI                         ; 00487b01
    JLE 0x00487b11                      ; 00487b03
        ;   XREF to: 00487b11 (CONDITIONAL_JUMP)  ; LAB_00487b11
    MOV EAX,EDI                         ; 00487b05
    MOV EDI,EBP                         ; 00487b07
    MOV EBP,EAX                         ; 00487b09
    MOV EAX,EBX                         ; 00487b0b
    MOV EBX,ESI                         ; 00487b0d
    MOV ESI,EAX                         ; 00487b0f
    SUB ESI,EBX                         ; 00487b11
        ;   Label: LAB_00487b11
    SUB EBP,EDI                         ; 00487b13
    MOV dword ptr [ESP + 0xc],ESI       ; 00487b15
    TEST EBP,EBP                        ; 00487b19
    JL 0x00487b6b                       ; 00487b1b
        ;   XREF to: 00487b6b (CONDITIONAL_JUMP)  ; LAB_00487b6b
    MOV ESI,EDI                         ; 00487b1d
        ;   Label: LAB_00487b1d
    MOV EDI,dword ptr [ESP + 0xc]       ; 00487b1f
    CMP EBP,EDI                         ; 00487b23
    JLE 0x00487b77                      ; 00487b25
        ;   XREF to: 00487b77 (CONDITIONAL_JUMP)  ; LAB_00487b77
    XOR EAX,EAX                         ; 00487b27
    ADD EDI,EDI                         ; 00487b29
    MOV dword ptr [ESP + 0x4],EAX       ; 00487b2b
    SUB EDI,EBP                         ; 00487b2f
    TEST EBP,EBP                        ; 00487b31
    JL 0x00487b63                       ; 00487b33
        ;   XREF to: 00487b63 (CONDITIONAL_JUMP)  ; LAB_00487b63
    PUSH EBX                            ; 00487b35
        ;   Label: LAB_00487b35
    PUSH ESI                            ; 00487b36
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00487b37
    PUSH EDX                            ; 00487b3b
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 00487b3c
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00487b41
    TEST EDI,EDI                        ; 00487b44
    JLE 0x00487b4b                      ; 00487b46
        ;   XREF to: 00487b4b (CONDITIONAL_JUMP)  ; LAB_00487b4b
    INC EBX                             ; 00487b48
    SUB EDI,EBP                         ; 00487b49
    MOV EAX,dword ptr [ESP]             ; 00487b4b
        ;   Label: LAB_00487b4b
    MOV ECX,dword ptr [ESP + 0x4]       ; 00487b4e
    MOV EDX,dword ptr [ESP + 0xc]       ; 00487b52
    INC ECX                             ; 00487b56
    ADD ESI,EAX                         ; 00487b57
    ADD EDI,EDX                         ; 00487b59
    MOV dword ptr [ESP + 0x4],ECX       ; 00487b5b
    CMP EBP,ECX                         ; 00487b5f
    JGE 0x00487b35                      ; 00487b61
        ;   XREF to: 00487b35 (CONDITIONAL_JUMP)  ; LAB_00487b35
    ADD ESP,0x10                        ; 00487b63
        ;   Label: LAB_00487b63
    POP EBP                             ; 00487b66
    POP EDI                             ; 00487b67
    POP ESI                             ; 00487b68
    POP EBX                             ; 00487b69
    RET                                 ; 00487b6a
    MOV ECX,0xffffffff                  ; 00487b6b
        ;   Label: LAB_00487b6b
    NEG EBP                             ; 00487b70
    MOV dword ptr [ESP],ECX             ; 00487b72
    JMP 0x00487b1d                      ; 00487b75
        ;   XREF to: 00487b1d (UNCONDITIONAL_JUMP)  ; LAB_00487b1d
    MOV EAX,dword ptr [ESP + 0xc]       ; 00487b77
        ;   Label: LAB_00487b77
    XOR EDX,EDX                         ; 00487b7b
    LEA EDI,[EBP + EBP*0x1]             ; 00487b7d
    MOV dword ptr [ESP + 0x8],EDX       ; 00487b81
    SUB EDI,EAX                         ; 00487b85
    TEST EAX,EAX                        ; 00487b87
    JL 0x00487b63                       ; 00487b89
        ;   XREF to: 00487b63 (CONDITIONAL_JUMP)  ; LAB_00487b63
    PUSH EBX                            ; 00487b8b
        ;   Label: LAB_00487b8b
    PUSH ESI                            ; 00487b8c
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00487b8d
    PUSH EAX                            ; 00487b91
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 00487b92
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00487b97
    TEST EDI,EDI                        ; 00487b9a
    JLE 0x00487ba9                      ; 00487b9c
        ;   XREF to: 00487ba9 (CONDITIONAL_JUMP)  ; LAB_00487ba9
    MOV ECX,dword ptr [ESP + 0xc]       ; 00487b9e
    MOV EDX,dword ptr [ESP]             ; 00487ba2
    SUB EDI,ECX                         ; 00487ba5
    ADD ESI,EDX                         ; 00487ba7
    MOV EDX,dword ptr [ESP + 0x8]       ; 00487ba9
        ;   Label: LAB_00487ba9
    MOV ECX,dword ptr [ESP + 0xc]       ; 00487bad
    INC EBX                             ; 00487bb1
    INC EDX                             ; 00487bb2
    ADD EDI,EBP                         ; 00487bb3
    MOV dword ptr [ESP + 0x8],EDX       ; 00487bb5
    CMP EDX,ECX                         ; 00487bb9
    JG 0x00487b63                       ; 00487bbb
        ;   XREF to: 00487b63 (CONDITIONAL_JUMP)  ; LAB_00487b63
    JMP 0x00487b8b                      ; 00487bbd
        ;   XREF to: 00487b8b (UNCONDITIONAL_JUMP)  ; LAB_00487b8b


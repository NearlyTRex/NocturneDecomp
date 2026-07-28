; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_0045cde0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedFullSurface_FUN_0045cfd0 at 0045cfe2
;   cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_0045cc70 at 0045ccb6
;   cockpit_drawsurf.cpp_FUN_0045cff0 at 0045d050
;   cockpit_drawsurf.cpp_FUN_0045d070 at 0045d0bc
;
; Referenced Globals:
;   double DOUBLE_0057da4e = 0.0000152587890625
;   undefined4 DAT_005ae6f4
;   undefined4 DAT_005ae6f8
;   undefined4 DAT_01b4d484
;   undefined4 DAT_01b4d488
;   undefined4 DAT_01b4d48c
;   undefined4 DAT_01bd1d80
;   undefined4 DAT_01bd1d84
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045cde0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_0045cde0
    PUSH ESI                            ; 0045cde1
    PUSH EDI                            ; 0045cde2
    PUSH EBP                            ; 0045cde3
    SUB ESP,0x10                        ; 0045cde4
    MOV ESI,dword ptr [ESP + 0x24]      ; 0045cde7
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0045cdeb
    MOV EDI,dword ptr [ESP + 0x30]      ; 0045cdef
    MOV ECX,dword ptr [0x01bd1d84]      ; 0045cdf3 | DAT_01bd1d84
    CMP ECX,dword ptr [0x01b4d48c]      ; 0045cdf9 | DAT_01b4d48c
    JNZ 0x0045cf33                      ; 0045cdff
        ;   XREF to: 0045cf33 (CONDITIONAL_JUMP)  ; LAB_0045cf33
    FLD float ptr [0x01b4d488]          ; 0045ce05 | DAT_01b4d488
        ;   Label: LAB_0045ce05
    MOV EDX,dword ptr [ESP + 0x28]      ; 0045ce0b
    CALL crt_math.c_round_FUN_00563a30  ; 0045ce0f
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x8]         ; 0045ce14
    CMP EDI,EDX                         ; 0045ce18
    JGE 0x0045ce22                      ; 0045ce1a
        ;   XREF to: 0045ce22 (CONDITIONAL_JUMP)  ; LAB_0045ce22
    MOV dword ptr [ESP + 0x28],EDI      ; 0045ce1c
    MOV EDI,EDX                         ; 0045ce20
    MOV ECX,dword ptr [ESP + 0x34]      ; 0045ce22
        ;   Label: LAB_0045ce22
    CMP EBP,ECX                         ; 0045ce26
    JLE 0x0045ce32                      ; 0045ce28
        ;   XREF to: 0045ce32 (CONDITIONAL_JUMP)  ; LAB_0045ce32
    MOV EDX,EBP                         ; 0045ce2a
    MOV EBP,ECX                         ; 0045ce2c
    MOV dword ptr [ESP + 0x34],EDX      ; 0045ce2e
    MOV EBX,dword ptr [ESP + 0x28]      ; 0045ce32
        ;   Label: LAB_0045ce32
    CMP EDI,EBX                         ; 0045ce36
    JLE 0x0045ce6e                      ; 0045ce38
        ;   XREF to: 0045ce6e (CONDITIONAL_JUMP)  ; LAB_0045ce6e
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045ce3a
        ;   Label: LAB_0045ce3a
    MOV ECX,dword ptr [0x005ae6f4]      ; 0045ce3e | DAT_005ae6f4
    MOV EDX,EAX                         ; 0045ce44
    ADD ECX,ECX                         ; 0045ce46
    SAR EDX,0x1f                        ; 0045ce48
    IDIV ECX                            ; 0045ce4b
    CMP EDX,dword ptr [0x005ae6f4]      ; 0045ce4d | DAT_005ae6f4
    JGE 0x0045ce60                      ; 0045ce53
        ;   XREF to: 0045ce60 (CONDITIONAL_JUMP)  ; LAB_0045ce60
    PUSH EBP                            ; 0045ce55
    PUSH EBX                            ; 0045ce56
    PUSH ESI                            ; 0045ce57
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045ce58
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0045ce5d
    MOV EDX,dword ptr [ESP + 0x8]       ; 0045ce60
        ;   Label: LAB_0045ce60
    INC EDX                             ; 0045ce64
    INC EBX                             ; 0045ce65
    MOV dword ptr [ESP + 0x8],EDX       ; 0045ce66
    CMP EBX,EDI                         ; 0045ce6a
    JL 0x0045ce3a                       ; 0045ce6c
        ;   XREF to: 0045ce3a (CONDITIONAL_JUMP)  ; LAB_0045ce3a
    MOV ECX,dword ptr [ESP + 0x34]      ; 0045ce6e
        ;   Label: LAB_0045ce6e
    MOV EBX,EBP                         ; 0045ce72
    CMP EBP,ECX                         ; 0045ce74
    JGE 0x0045ceb0                      ; 0045ce76
        ;   XREF to: 0045ceb0 (CONDITIONAL_JUMP)  ; LAB_0045ceb0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045ce78
        ;   Label: LAB_0045ce78
    MOV ECX,dword ptr [0x005ae6f4]      ; 0045ce7c | DAT_005ae6f4
    MOV EDX,EAX                         ; 0045ce82
    ADD ECX,ECX                         ; 0045ce84
    SAR EDX,0x1f                        ; 0045ce86
    IDIV ECX                            ; 0045ce89
    CMP EDX,dword ptr [0x005ae6f4]      ; 0045ce8b | DAT_005ae6f4
    JGE 0x0045ce9e                      ; 0045ce91
        ;   XREF to: 0045ce9e (CONDITIONAL_JUMP)  ; LAB_0045ce9e
    PUSH EBX                            ; 0045ce93
    PUSH EDI                            ; 0045ce94
    PUSH ESI                            ; 0045ce95
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045ce96
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0045ce9b
    MOV EDX,dword ptr [ESP + 0x8]       ; 0045ce9e
        ;   Label: LAB_0045ce9e
    MOV ECX,dword ptr [ESP + 0x34]      ; 0045cea2
    INC EDX                             ; 0045cea6
    INC EBX                             ; 0045cea7
    MOV dword ptr [ESP + 0x8],EDX       ; 0045cea8
    CMP EBX,ECX                         ; 0045ceac
    JL 0x0045ce78                       ; 0045ceae
        ;   XREF to: 0045ce78 (CONDITIONAL_JUMP)  ; LAB_0045ce78
    MOV EAX,dword ptr [ESP + 0x28]      ; 0045ceb0
        ;   Label: LAB_0045ceb0
    MOV EBX,EDI                         ; 0045ceb4
    CMP EDI,EAX                         ; 0045ceb6
    JLE 0x0045cef6                      ; 0045ceb8
        ;   XREF to: 0045cef6 (CONDITIONAL_JUMP)  ; LAB_0045cef6
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045ceba
        ;   Label: LAB_0045ceba
    MOV EDI,dword ptr [0x005ae6f4]      ; 0045cebe | DAT_005ae6f4
    MOV EDX,EAX                         ; 0045cec4
    ADD EDI,EDI                         ; 0045cec6
    SAR EDX,0x1f                        ; 0045cec8
    IDIV EDI                            ; 0045cecb
    CMP EDX,dword ptr [0x005ae6f4]      ; 0045cecd | DAT_005ae6f4
    JGE 0x0045cee4                      ; 0045ced3
        ;   XREF to: 0045cee4 (CONDITIONAL_JUMP)  ; LAB_0045cee4
    MOV EDI,dword ptr [ESP + 0x34]      ; 0045ced5
    PUSH EDI                            ; 0045ced9
    PUSH EBX                            ; 0045ceda
    PUSH ESI                            ; 0045cedb
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045cedc
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0045cee1
    MOV EDI,dword ptr [ESP + 0x8]       ; 0045cee4
        ;   Label: LAB_0045cee4
    MOV EAX,dword ptr [ESP + 0x28]      ; 0045cee8
    INC EDI                             ; 0045ceec
    DEC EBX                             ; 0045ceed
    MOV dword ptr [ESP + 0x8],EDI       ; 0045ceee
    CMP EBX,EAX                         ; 0045cef2
    JG 0x0045ceba                       ; 0045cef4
        ;   XREF to: 0045ceba (CONDITIONAL_JUMP)  ; LAB_0045ceba
    MOV EBX,dword ptr [ESP + 0x34]      ; 0045cef6
        ;   Label: LAB_0045cef6
    CMP EBP,EBX                         ; 0045cefa
    JGE 0x0045cf2b                      ; 0045cefc
        ;   XREF to: 0045cf2b (CONDITIONAL_JUMP)  ; LAB_0045cf2b
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045cefe
        ;   Label: LAB_0045cefe
    MOV EDI,dword ptr [0x005ae6f4]      ; 0045cf02 | DAT_005ae6f4
    MOV EDX,EAX                         ; 0045cf08
    ADD EDI,EDI                         ; 0045cf0a
    SAR EDX,0x1f                        ; 0045cf0c
    IDIV EDI                            ; 0045cf0f
    CMP EDX,dword ptr [0x005ae6f4]      ; 0045cf11 | DAT_005ae6f4
    JL 0x0045cfaf                       ; 0045cf17
        ;   XREF to: 0045cfaf (CONDITIONAL_JUMP)  ; LAB_0045cfaf
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045cf1d
        ;   Label: LAB_0045cf1d
    INC EAX                             ; 0045cf21
    DEC EBX                             ; 0045cf22
    MOV dword ptr [ESP + 0x8],EAX       ; 0045cf23
    CMP EBX,EBP                         ; 0045cf27
    JG 0x0045cefe                       ; 0045cf29
        ;   XREF to: 0045cefe (CONDITIONAL_JUMP)  ; LAB_0045cefe
    ADD ESP,0x10                        ; 0045cf2b
        ;   Label: LAB_0045cf2b
    POP EBP                             ; 0045cf2e
    POP EDI                             ; 0045cf2f
    POP ESI                             ; 0045cf30
    POP EBX                             ; 0045cf31
    RET                                 ; 0045cf32
    FILD dword ptr [0x01bd1d80]         ; 0045cf33 | DAT_01bd1d80
        ;   Label: LAB_0045cf33
    FMUL double ptr [0x0057da4e]        ; 0045cf39 | DOUBLE_0057da4e
    FLD float ptr [0x01b4d484]          ; 0045cf3f | DAT_01b4d484
    FXCH                                ; 0045cf45
    FADD ST0,ST1                        ; 0045cf47
    MOV dword ptr [0x01b4d48c],ECX      ; 0045cf49 | DAT_01b4d48c
    FSTP ST1                            ; 0045cf4f
    FST float ptr [0x01b4d484]          ; 0045cf51 | DAT_01b4d484
    FCOMP float ptr [0x005ae6f8]        ; 0045cf57 | DAT_005ae6f8
    FNSTSW AX                           ; 0045cf5d
    SAHF                                ; 0045cf5f
    JBE 0x0045ce05                      ; 0045cf60
        ;   XREF to: 0045ce05 (CONDITIONAL_JUMP)  ; LAB_0045ce05
    FLD float ptr [0x01b4d484]          ; 0045cf66 | DAT_01b4d484
    FDIV float ptr [0x005ae6f8]         ; 0045cf6c | DAT_005ae6f8
    MOV EDX,dword ptr [0x005ae6f4]      ; 0045cf72 | DAT_005ae6f4
    ADD EDX,EDX                         ; 0045cf78
    MOV dword ptr [ESP + 0xc],EDX       ; 0045cf7a
    FADD float ptr [0x01b4d488]         ; 0045cf7e | DAT_01b4d488
    FILD dword ptr [ESP + 0xc]          ; 0045cf84
    FXCH                                ; 0045cf88
    FSTP float ptr [0x01b4d488]         ; 0045cf8a | DAT_01b4d488
    FCOMP float ptr [0x01b4d488]        ; 0045cf90 | DAT_01b4d488
    FNSTSW AX                           ; 0045cf96
    SAHF                                ; 0045cf98
    JNC 0x0045cfa3                      ; 0045cf99
        ;   XREF to: 0045cfa3 (CONDITIONAL_JUMP)  ; LAB_0045cfa3
    XOR EBX,EBX                         ; 0045cf9b
    MOV dword ptr [0x01b4d488],EBX      ; 0045cf9d | DAT_01b4d488
    XOR EAX,EAX                         ; 0045cfa3
        ;   Label: LAB_0045cfa3
    MOV [0x01b4d484],EAX                ; 0045cfa5 | DAT_01b4d484
    JMP 0x0045ce05                      ; 0045cfaa
        ;   XREF to: 0045ce05 (UNCONDITIONAL_JUMP)  ; LAB_0045ce05
    PUSH EBX                            ; 0045cfaf
        ;   Label: LAB_0045cfaf
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0045cfb0
    PUSH EDI                            ; 0045cfb4
    PUSH ESI                            ; 0045cfb5
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045cfb6
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0045cfbb
    JMP 0x0045cf1d                      ; 0045cfbe
        ;   XREF to: 0045cf1d (UNCONDITIONAL_JUMP)  ; LAB_0045cf1d


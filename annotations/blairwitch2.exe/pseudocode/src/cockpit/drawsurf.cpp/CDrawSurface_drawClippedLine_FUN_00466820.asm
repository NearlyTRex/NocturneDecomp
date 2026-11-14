; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawClippedLine_FUN_00466820(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00468b80 at 00468c66
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_00466ca0
;   cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_00466960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00466820
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00466820
    PUSH ESI                            ; 00466821
    PUSH EDI                            ; 00466822
    PUSH EBP                            ; 00466823
    MOV EBX,dword ptr [ESP + 0x14]      ; 00466824
    MOV EDX,dword ptr [ESP + 0x18]      ; 00466828
    MOV EAX,dword ptr [EBX + 0x8]       ; 0046682c
    ADD EDX,EAX                         ; 0046682f
    MOV dword ptr [ESP + 0x18],EDX      ; 00466831
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00466835
    MOV EAX,dword ptr [EBX + 0xc]       ; 00466839
    ADD ECX,EAX                         ; 0046683c
    MOV dword ptr [ESP + 0x1c],ECX      ; 0046683e
    MOV ESI,dword ptr [ESP + 0x20]      ; 00466842
    MOV EAX,dword ptr [EBX + 0x8]       ; 00466846
    ADD ESI,EAX                         ; 00466849
    MOV dword ptr [ESP + 0x20],ESI      ; 0046684b
    MOV EDI,dword ptr [ESP + 0x24]      ; 0046684f
    MOV EAX,dword ptr [EBX + 0xc]       ; 00466853
    ADD EDI,EAX                         ; 00466856
    MOV dword ptr [ESP + 0x24],EDI      ; 00466858
    MOV EBP,dword ptr [EBX + 0x1c]      ; 0046685c
    PUSH EBP                            ; 0046685f
    MOV EAX,dword ptr [EBX + 0x18]      ; 00466860
    PUSH EAX                            ; 00466863
    MOV EDX,dword ptr [EBX + 0x14]      ; 00466864
    PUSH EDX                            ; 00466867
    MOV ECX,dword ptr [EBX + 0x10]      ; 00466868
    PUSH ECX                            ; 0046686b
    LEA EAX,[ESP + 0x34]                ; 0046686c
    PUSH EAX                            ; 00466870
    LEA EAX,[ESP + 0x34]                ; 00466871
    PUSH EAX                            ; 00466875
    LEA EAX,[ESP + 0x34]                ; 00466876
    PUSH EAX                            ; 0046687a
    LEA EAX,[ESP + 0x34]                ; 0046687b
    PUSH EAX                            ; 0046687f
    PUSH EBX                            ; 00466880
    CALL cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_00466ca0 ; 00466881
        ;   XREF to: 00466ca0 (UNCONDITIONAL_CALL)  ; int cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_00466ca0(CDrawSurface * this_ptr, int * x1, int * y1, int * x2, ...)
    ADD ESP,0x24                        ; 00466886
    TEST EAX,EAX                        ; 00466889
    JNZ 0x00466892                      ; 0046688b
        ;   XREF to: 00466892 (CONDITIONAL_JUMP)  ; LAB_00466892
    POP EBP                             ; 0046688d
    POP EDI                             ; 0046688e
    POP ESI                             ; 0046688f
    POP EBX                             ; 00466890
    RET                                 ; 00466891
    MOV ESI,dword ptr [ESP + 0x24]      ; 00466892
        ;   Label: LAB_00466892
    PUSH ESI                            ; 00466896
    MOV EDI,dword ptr [ESP + 0x24]      ; 00466897
    PUSH EDI                            ; 0046689b
    MOV EBP,dword ptr [ESP + 0x24]      ; 0046689c
    PUSH EBP                            ; 004668a0
    MOV EAX,dword ptr [ESP + 0x24]      ; 004668a1
    PUSH EAX                            ; 004668a5
    PUSH EBX                            ; 004668a6
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_00466960 ; 004668a7
        ;   XREF to: 00466960 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_00466960(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 004668ac
    POP EBP                             ; 004668af
    POP EDI                             ; 004668b0
    POP ESI                             ; 004668b1
    POP EBX                             ; 004668b2
    RET                                 ; 004668b3


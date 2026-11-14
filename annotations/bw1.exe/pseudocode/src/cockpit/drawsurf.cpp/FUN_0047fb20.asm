; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_FUN_0047fb20(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
;
; XREF[2]:
;   cockpit_drawsurf.cpp_FUN_0047f9c0 at 0047fa02
;   cockpit_drawsurf.cpp_FUN_0047fcf0 at 0047fd02
;
; Referenced Globals:
;   undefined4 DAT_005db1a9
;   undefined4 DAT_00612550
;   undefined4 DAT_00612554
;   undefined4 DAT_01bc0f58
;   undefined4 DAT_01bc0f5c
;   undefined4 DAT_01bc0f60
;   undefined4 DAT_01c43530
;   undefined4 DAT_01c43534
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047fb20
        ;   Label: cockpit_drawsurf.cpp_FUN_0047fb20
    PUSH ESI                            ; 0047fb21
    PUSH EDI                            ; 0047fb22
    PUSH EBP                            ; 0047fb23
    SUB ESP,0x8                         ; 0047fb24
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0047fb27
    MOV EBP,dword ptr [ESP + 0x20]      ; 0047fb2b
    MOV EDI,dword ptr [ESP + 0x28]      ; 0047fb2f
    MOV ECX,dword ptr [0x01c43534]      ; 0047fb33 | DAT_01c43534
    CMP ECX,dword ptr [0x01bc0f60]      ; 0047fb39 | DAT_01bc0f60
    JNZ 0x0047fc6a                      ; 0047fb3f
        ;   XREF to: 0047fc6a (CONDITIONAL_JUMP)  ; LAB_0047fc6a
    FLD float ptr [0x01bc0f5c]          ; 0047fb45 | DAT_01bc0f5c
        ;   Label: LAB_0047fb45
    CALL crt_math.c_round_FUN_005c03a0  ; 0047fb4b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP]               ; 0047fb50
    CMP EBP,EDI                         ; 0047fb53
    JLE 0x0047fb5d                      ; 0047fb55
        ;   XREF to: 0047fb5d (CONDITIONAL_JUMP)  ; LAB_0047fb5d
    MOV EDX,EBP                         ; 0047fb57
    MOV EBP,EDI                         ; 0047fb59
    MOV EDI,EDX                         ; 0047fb5b
    MOV EDX,dword ptr [ESP + 0x24]      ; 0047fb5d
        ;   Label: LAB_0047fb5d
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0047fb61
    CMP EDX,ECX                         ; 0047fb65
    JLE 0x0047fb71                      ; 0047fb67
        ;   XREF to: 0047fb71 (CONDITIONAL_JUMP)  ; LAB_0047fb71
    MOV dword ptr [ESP + 0x24],ECX      ; 0047fb69
    MOV dword ptr [ESP + 0x2c],EDX      ; 0047fb6d
    MOV EBX,EBP                         ; 0047fb71
        ;   Label: LAB_0047fb71
    CMP EBP,EDI                         ; 0047fb73
    JGE 0x0047fbac                      ; 0047fb75
        ;   XREF to: 0047fbac (CONDITIONAL_JUMP)  ; LAB_0047fbac
    MOV EAX,dword ptr [ESP]             ; 0047fb77
        ;   Label: LAB_0047fb77
    MOV ECX,dword ptr [0x00612550]      ; 0047fb7a | DAT_00612550
    MOV EDX,EAX                         ; 0047fb80
    ADD ECX,ECX                         ; 0047fb82
    SAR EDX,0x1f                        ; 0047fb84
    IDIV ECX                            ; 0047fb87
    CMP EDX,dword ptr [0x00612550]      ; 0047fb89 | DAT_00612550
    JGE 0x0047fba0                      ; 0047fb8f
        ;   XREF to: 0047fba0 (CONDITIONAL_JUMP)  ; LAB_0047fba0
    MOV EDX,dword ptr [ESP + 0x24]      ; 0047fb91
    PUSH EDX                            ; 0047fb95
    PUSH EBX                            ; 0047fb96
    PUSH ESI                            ; 0047fb97
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 0047fb98
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0047fb9d
    MOV EAX,dword ptr [ESP]             ; 0047fba0
        ;   Label: LAB_0047fba0
    INC EAX                             ; 0047fba3
    INC EBX                             ; 0047fba4
    MOV dword ptr [ESP],EAX             ; 0047fba5
    CMP EBX,EDI                         ; 0047fba8
    JL 0x0047fb77                       ; 0047fbaa
        ;   XREF to: 0047fb77 (CONDITIONAL_JUMP)  ; LAB_0047fb77
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0047fbac
        ;   Label: LAB_0047fbac
    MOV EBX,dword ptr [ESP + 0x24]      ; 0047fbb0
    CMP EBX,ECX                         ; 0047fbb4
    JGE 0x0047fbed                      ; 0047fbb6
        ;   XREF to: 0047fbed (CONDITIONAL_JUMP)  ; LAB_0047fbed
    MOV EAX,dword ptr [ESP]             ; 0047fbb8
        ;   Label: LAB_0047fbb8
    MOV ECX,dword ptr [0x00612550]      ; 0047fbbb | DAT_00612550
    MOV EDX,EAX                         ; 0047fbc1
    ADD ECX,ECX                         ; 0047fbc3
    SAR EDX,0x1f                        ; 0047fbc5
    IDIV ECX                            ; 0047fbc8
    CMP EDX,dword ptr [0x00612550]      ; 0047fbca | DAT_00612550
    JGE 0x0047fbdd                      ; 0047fbd0
        ;   XREF to: 0047fbdd (CONDITIONAL_JUMP)  ; LAB_0047fbdd
    PUSH EBX                            ; 0047fbd2
    PUSH EDI                            ; 0047fbd3
    PUSH ESI                            ; 0047fbd4
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 0047fbd5
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0047fbda
    MOV ECX,dword ptr [ESP]             ; 0047fbdd
        ;   Label: LAB_0047fbdd
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0047fbe0
    INC ECX                             ; 0047fbe4
    INC EBX                             ; 0047fbe5
    MOV dword ptr [ESP],ECX             ; 0047fbe6
    CMP EBX,EAX                         ; 0047fbe9
    JL 0x0047fbb8                       ; 0047fbeb
        ;   XREF to: 0047fbb8 (CONDITIONAL_JUMP)  ; LAB_0047fbb8
    MOV EBX,EDI                         ; 0047fbed
        ;   Label: LAB_0047fbed
    CMP EDI,EBP                         ; 0047fbef
    JLE 0x0047fc28                      ; 0047fbf1
        ;   XREF to: 0047fc28 (CONDITIONAL_JUMP)  ; LAB_0047fc28
    MOV EAX,dword ptr [ESP]             ; 0047fbf3
        ;   Label: LAB_0047fbf3
    MOV EDI,dword ptr [0x00612550]      ; 0047fbf6 | DAT_00612550
    MOV EDX,EAX                         ; 0047fbfc
    ADD EDI,EDI                         ; 0047fbfe
    SAR EDX,0x1f                        ; 0047fc00
    IDIV EDI                            ; 0047fc03
    CMP EDX,dword ptr [0x00612550]      ; 0047fc05 | DAT_00612550
    JGE 0x0047fc1c                      ; 0047fc0b
        ;   XREF to: 0047fc1c (CONDITIONAL_JUMP)  ; LAB_0047fc1c
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0047fc0d
    PUSH EDI                            ; 0047fc11
    PUSH EBX                            ; 0047fc12
    PUSH ESI                            ; 0047fc13
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 0047fc14
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0047fc19
    MOV EDI,dword ptr [ESP]             ; 0047fc1c
        ;   Label: LAB_0047fc1c
    INC EDI                             ; 0047fc1f
    DEC EBX                             ; 0047fc20
    MOV dword ptr [ESP],EDI             ; 0047fc21
    CMP EBX,EBP                         ; 0047fc24
    JG 0x0047fbf3                       ; 0047fc26
        ;   XREF to: 0047fbf3 (CONDITIONAL_JUMP)  ; LAB_0047fbf3
    MOV EAX,dword ptr [ESP + 0x24]      ; 0047fc28
        ;   Label: LAB_0047fc28
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0047fc2c
    CMP EBX,EAX                         ; 0047fc30
    JLE 0x0047fc62                      ; 0047fc32
        ;   XREF to: 0047fc62 (CONDITIONAL_JUMP)  ; LAB_0047fc62
    MOV EAX,dword ptr [ESP]             ; 0047fc34
        ;   Label: LAB_0047fc34
    MOV ECX,dword ptr [0x00612550]      ; 0047fc37 | DAT_00612550
    MOV EDX,EAX                         ; 0047fc3d
    ADD ECX,ECX                         ; 0047fc3f
    SAR EDX,0x1f                        ; 0047fc41
    IDIV ECX                            ; 0047fc44
    CMP EDX,dword ptr [0x00612550]      ; 0047fc46 | DAT_00612550
    JL 0x0047fce0                       ; 0047fc4c
        ;   XREF to: 0047fce0 (CONDITIONAL_JUMP)  ; LAB_0047fce0
    MOV EAX,dword ptr [ESP]             ; 0047fc52
        ;   Label: LAB_0047fc52
    MOV EDX,dword ptr [ESP + 0x24]      ; 0047fc55
    INC EAX                             ; 0047fc59
    DEC EBX                             ; 0047fc5a
    MOV dword ptr [ESP],EAX             ; 0047fc5b
    CMP EBX,EDX                         ; 0047fc5e
    JG 0x0047fc34                       ; 0047fc60
        ;   XREF to: 0047fc34 (CONDITIONAL_JUMP)  ; LAB_0047fc34
    ADD ESP,0x8                         ; 0047fc62
        ;   Label: LAB_0047fc62
    POP EBP                             ; 0047fc65
    POP EDI                             ; 0047fc66
    POP ESI                             ; 0047fc67
    POP EBX                             ; 0047fc68
    RET                                 ; 0047fc69
    FILD dword ptr [0x01c43530]         ; 0047fc6a | DAT_01c43530
        ;   Label: LAB_0047fc6a
    FMUL float ptr [0x005db1a9]         ; 0047fc70 | DAT_005db1a9
    FADD float ptr [0x01bc0f58]         ; 0047fc76 | DAT_01bc0f58
    MOV dword ptr [0x01bc0f60],ECX      ; 0047fc7c | DAT_01bc0f60
    FST float ptr [0x01bc0f58]          ; 0047fc82 | DAT_01bc0f58
    FCOMP float ptr [0x00612554]        ; 0047fc88 | DAT_00612554
    FNSTSW AX                           ; 0047fc8e
    SAHF                                ; 0047fc90
    JBE 0x0047fb45                      ; 0047fc91
        ;   XREF to: 0047fb45 (CONDITIONAL_JUMP)  ; LAB_0047fb45
    FLD float ptr [0x01bc0f58]          ; 0047fc97 | DAT_01bc0f58
    FDIV float ptr [0x00612554]         ; 0047fc9d | DAT_00612554
    MOV EDX,dword ptr [0x00612550]      ; 0047fca3 | DAT_00612550
    ADD EDX,EDX                         ; 0047fca9
    MOV dword ptr [ESP + 0x4],EDX       ; 0047fcab
    FADD float ptr [0x01bc0f5c]         ; 0047fcaf | DAT_01bc0f5c
    FILD dword ptr [ESP + 0x4]          ; 0047fcb5
    FXCH                                ; 0047fcb9
    FSTP float ptr [0x01bc0f5c]         ; 0047fcbb | DAT_01bc0f5c
    FCOMP float ptr [0x01bc0f5c]        ; 0047fcc1 | DAT_01bc0f5c
    FNSTSW AX                           ; 0047fcc7
    SAHF                                ; 0047fcc9
    JNC 0x0047fcd4                      ; 0047fcca
        ;   XREF to: 0047fcd4 (CONDITIONAL_JUMP)  ; LAB_0047fcd4
    XOR EBX,EBX                         ; 0047fccc
    MOV dword ptr [0x01bc0f5c],EBX      ; 0047fcce | DAT_01bc0f5c
    XOR EAX,EAX                         ; 0047fcd4
        ;   Label: LAB_0047fcd4
    MOV [0x01bc0f58],EAX                ; 0047fcd6 | DAT_01bc0f58
    JMP 0x0047fb45                      ; 0047fcdb
        ;   XREF to: 0047fb45 (UNCONDITIONAL_JUMP)  ; LAB_0047fb45
    PUSH EBX                            ; 0047fce0
        ;   Label: LAB_0047fce0
    PUSH EBP                            ; 0047fce1
    PUSH ESI                            ; 0047fce2
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 0047fce3
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0047fce8
    JMP 0x0047fc52                      ; 0047fceb
        ;   XREF to: 0047fc52 (UNCONDITIONAL_JUMP)  ; LAB_0047fc52


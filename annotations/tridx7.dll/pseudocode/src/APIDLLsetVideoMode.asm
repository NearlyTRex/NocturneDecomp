; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl APIDLLsetVideoMode(void **scanline_ptrs)
;
; Parameters:
; void * *         Stack[0x4]:4   scanline_ptrs
;
; XREF[1]:
;   APIDLLsetVideoMode2 at 10002bd2
;
; Referenced Globals:
;   undefined4 DAT_10012178
;   TerminatedCString s_Graphics_10014140
;   undefined4 DAT_10014164
;   undefined4 DAT_10014168
;   undefined4 DAT_1001416c
;   undefined4 DAT_10014170
;   undefined4 DAT_10014174
;   undefined4 DAT_10014178
;   undefined4 DAT_1001417c
;   undefined4 DAT_10014180
;   IDirectDraw4* g_DirectDraw4 = 00000000
;   undefined4 DAT_1001418c
;   undefined4 DAT_10014190
;   undefined4 DAT_10014198
;   undefined4 DAT_1001419c
;   ... and 45 more
;
; Called Functions:
;   APIDLLclear
;   APIDLLtoggle
;   crt_stdio.c__fclose_FUN_10005430
;   crt_stdio.c__sprintf_FUN_10005630
;   crt_stdio.c_fopen_FUN_10005560
;   ExitProcess
;   FUN_10001d70
;   FUN_10002340
;   FUN_10002370
;   FUN_10002b20
;   FUN_10002f40
;   FUN_10003100
;   MessageBoxA
;   SetCursorPos
;   ShowCursor
;
; *****************************************************************************

section .text

    SUB ESP,0x210                       ; 10002500
        ;   Label: APIDLLsetVideoMode
    CMP dword ptr [0x1001420c],0x0      ; 10002506 | g_NonLocalVideoMem
    PUSH EBX                            ; 1000250d
    PUSH ESI                            ; 1000250e
    PUSH EDI                            ; 1000250f
    PUSH EBP                            ; 10002510
    JNZ 0x1000251e                      ; 10002511
        ;   XREF to: 1000251e (CONDITIONAL_JUMP)  ; LAB_1000251e
    MOV EAX,[0x1022691c]                ; 10002513 | g_ExternalRendererBridge.agp_texture_mode
    MOV dword ptr [EAX],0x0             ; 10002518
    MOV EAX,[0x1022691c]                ; 1000251e | g_ExternalRendererBridge.agp_texture_mode
        ;   Label: LAB_1000251e
    CMP dword ptr [EAX],0x0             ; 10002523
    JZ 0x1000257a                       ; 10002526
        ;   XREF to: 1000257a (CONDITIONAL_JUMP)  ; LAB_1000257a
    MOV dword ptr [0x10226848],0x100    ; 10002528 | DAT_10226848
    MOV dword ptr [0x1022684c],0x80     ; 10002532 | DAT_1022684c
    MOV dword ptr [0x10226850],0x40     ; 1000253c | DAT_10226850
    MOV dword ptr [0x10226854],0x20     ; 10002546 | DAT_10226854
    MOV dword ptr [0x10226858],0x10     ; 10002550 | DAT_10226858
    MOV dword ptr [0x1022685c],0x8      ; 1000255a | DAT_1022685c
    MOV dword ptr [0x10226860],0x4      ; 10002564 | DAT_10226860
    MOV dword ptr [0x10226864],0x2      ; 1000256e | DAT_10226864
    JMP 0x100025ca                      ; 10002578
        ;   XREF to: 100025ca (UNCONDITIONAL_JUMP)  ; LAB_100025ca
    MOV dword ptr [0x10226848],0x80     ; 1000257a | DAT_10226848
        ;   Label: LAB_1000257a
    MOV dword ptr [0x1022684c],0x40     ; 10002584 | DAT_1022684c
    MOV dword ptr [0x10226850],0x20     ; 1000258e | DAT_10226850
    MOV dword ptr [0x10226854],0x10     ; 10002598 | DAT_10226854
    MOV dword ptr [0x10226858],0x8      ; 100025a2 | DAT_10226858
    MOV dword ptr [0x1022685c],0x4      ; 100025ac | DAT_1022685c
    MOV dword ptr [0x10226860],0x2      ; 100025b6 | DAT_10226860
    MOV dword ptr [0x10226864],0x1      ; 100025c0 | DAT_10226864
    XOR ESI,ESI                         ; 100025ca
        ;   Label: LAB_100025ca
    PUSH 0x10226a48                     ; 100025cc | DAT_10226a48
    PUSH 0x10016714                     ; 100025d1 | = "masterZBufferCount"
    MOV dword ptr [0x10226a48],ESI      ; 100025d6 | DAT_10226a48
    PUSH 0x10014140                     ; 100025dc | = "Graphics"
    CALL FUN_10002b20                   ; 100025e1
        ;   XREF to: 10002b20 (UNCONDITIONAL_CALL)  ; undefined FUN_10002b20()
    ADD ESP,0xc                         ; 100025e6
    MOV dword ptr [0x101398c8],ESI      ; 100025e9 | DAT_101398c8
    CMP dword ptr [0x10014178],0x1e0    ; 100025ef | DAT_10014178
    JLE 0x10002612                      ; 100025f9
        ;   XREF to: 10002612 (CONDITIONAL_JUMP)  ; LAB_10002612
    PUSH 0x101398c8                     ; 100025fb | DAT_101398c8
    PUSH 0x10016728                     ; 10002600 | = "useHoldBuffer"
    PUSH 0x10014140                     ; 10002605 | = "Graphics"
    CALL FUN_10002b20                   ; 1000260a
        ;   XREF to: 10002b20 (UNCONDITIONAL_CALL)  ; undefined FUN_10002b20()
    ADD ESP,0xc                         ; 1000260f
    XOR ESI,ESI                         ; 10002612
        ;   Label: LAB_10002612
    PUSH 0x10014164                     ; 10002614 | DAT_10014164
    PUSH 0x10016738                     ; 10002619 | = "premultiplyColorAndAlpha"
    MOV dword ptr [0x10014164],ESI      ; 1000261e | DAT_10014164
    PUSH 0x10014140                     ; 10002624 | = "Graphics"
    CALL FUN_10002b20                   ; 10002629
        ;   XREF to: 10002b20 (UNCONDITIONAL_CALL)  ; undefined FUN_10002b20()
    ADD ESP,0xc                         ; 1000262e
    MOV dword ptr [0x100141f0],ESI      ; 10002631 | DAT_100141f0
    PUSH 0x100141f0                     ; 10002637 | DAT_100141f0
    PUSH 0x10016754                     ; 1000263c | = "directTextureFlag"
    PUSH 0x10014140                     ; 10002641 | = "Graphics"
    CALL FUN_10002b20                   ; 10002646
        ;   XREF to: 10002b20 (UNCONDITIONAL_CALL)  ; undefined FUN_10002b20()
    ADD ESP,0xc                         ; 1000264b
    MOV dword ptr [0x10014168],ESI      ; 1000264e | DAT_10014168
    PUSH 0x10014168                     ; 10002654 | DAT_10014168
    PUSH 0x10016768                     ; 10002659 | = "allowAutoMipMapping"
    PUSH 0x10014140                     ; 1000265e | = "Graphics"
    CALL FUN_10002b20                   ; 10002663
        ;   XREF to: 10002b20 (UNCONDITIONAL_CALL)  ; undefined FUN_10002b20()
    ADD ESP,0xc                         ; 10002668
    PUSH 0x1001677c                     ; 1000266b | = "rb"
    PUSH 0x10016780                     ; 10002670 | = "system\\fly.ini"
    CALL crt_stdio.c_fopen_FUN_10005560 ; 10002675
        ;   XREF to: 10005560 (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_10005560(char * filename, char * mode) | __wfopen
    ADD ESP,0x8                         ; 1000267a
    TEST EAX,EAX                        ; 1000267d
    JZ 0x10002696                       ; 1000267f
        ;   XREF to: 10002696 (CONDITIONAL_JUMP)  ; LAB_10002696
    MOV dword ptr [0x1001416c],0x1      ; 10002681 | DAT_1001416c
    PUSH EAX                            ; 1000268b
    CALL crt_stdio.c__fclose_FUN_10005430 ; 1000268c
        ;   XREF to: 10005430 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__fclose_FUN_10005430(_FILE * file)
    ADD ESP,0x4                         ; 10002691
    JMP 0x100026a0                      ; 10002694
        ;   XREF to: 100026a0 (UNCONDITIONAL_JUMP)  ; LAB_100026a0
    MOV dword ptr [0x1001416c],0x0      ; 10002696 | DAT_1001416c
        ;   Label: LAB_10002696
    MOV ESI,dword ptr [ESP + 0x224]     ; 100026a0
        ;   Label: LAB_100026a0
    MOV ECX,dword ptr [0x10014178]      ; 100026a7 | DAT_10014178
    MOV dword ptr [0x10138fb4],ESI      ; 100026ad | DAT_10138fb4
    TEST ECX,ECX                        ; 100026b3
    JLE 0x100026be                      ; 100026b5
        ;   XREF to: 100026be (CONDITIONAL_JUMP)  ; LAB_100026be
    MOV EDI,0x10225848                  ; 100026b7 | DAT_10225848
    MOVSD.REP ES:EDI,ESI                ; 100026bc | DAT_10225848 | DAT_1022584c
    MOV ESI,dword ptr [0x1001417c]      ; 100026be | DAT_1001417c
        ;   Label: LAB_100026be
    CALL FUN_10002370                   ; 100026c4
        ;   XREF to: 10002370 (UNCONDITIONAL_CALL)  ; undefined FUN_10002370()
    PUSH 0x11                           ; 100026c9
    MOV EAX,[0x10138fb8]                ; 100026cb | g_WindowHandle
    PUSH EAX                            ; 100026d0
    MOV ECX,dword ptr [0x10014188]      ; 100026d1 | g_DirectDraw4
    PUSH ECX                            ; 100026d7
    MOV EAX,dword ptr [ECX]             ; 100026d8
    CALL dword ptr [EAX + 0x50]         ; 100026da
    PUSH EAX                            ; 100026dd
    MOV EDI,EAX                         ; 100026de
    CALL FUN_10001d70                   ; 100026e0
        ;   XREF to: 10001d70 (UNCONDITIONAL_CALL)  ; undefined FUN_10001d70()
    ADD ESP,0x4                         ; 100026e5
    TEST EDI,EDI                        ; 100026e8
    JZ 0x100026f9                       ; 100026ea
        ;   XREF to: 100026f9 (CONDITIONAL_JUMP)  ; LAB_100026f9
    XOR EAX,EAX                         ; 100026ec
    POP EBP                             ; 100026ee
    POP EDI                             ; 100026ef
    POP ESI                             ; 100026f0
    POP EBX                             ; 100026f1
    ADD ESP,0x210                       ; 100026f2
    RET                                 ; 100026f8
    PUSH 0x0                            ; 100026f9
        ;   Label: LAB_100026f9
    MOV EAX,[0x10014178]                ; 100026fb | DAT_10014178
    PUSH 0x0                            ; 10002700
    MOV ECX,dword ptr [0x10014174]      ; 10002702 | DAT_10014174
    PUSH ESI                            ; 10002708
    MOV EDX,dword ptr [0x10014188]      ; 10002709 | g_DirectDraw4
    PUSH EAX                            ; 1000270f
    PUSH ECX                            ; 10002710
    PUSH EDX                            ; 10002711
    MOV EAX,dword ptr [EDX]             ; 10002712
    CALL dword ptr [EAX + 0x54]         ; 10002714
    TEST EAX,EAX                        ; 10002717
    JZ 0x10002728                       ; 10002719
        ;   XREF to: 10002728 (CONDITIONAL_JUMP)  ; LAB_10002728
    XOR EAX,EAX                         ; 1000271b
    POP EBP                             ; 1000271d
    POP EDI                             ; 1000271e
    POP ESI                             ; 1000271f
    POP EBX                             ; 10002720
    ADD ESP,0x210                       ; 10002721
    RET                                 ; 10002727
    MOV EDI,0x10226e88                  ; 10002728 | DAT_10226e88
        ;   Label: LAB_10002728
    XOR EAX,EAX                         ; 1000272d
    MOV ECX,0x1f                        ; 1000272f
    STOSD.REP ES:EDI                    ; 10002734 | DAT_10226e88 | DAT_10226e8c
    MOV dword ptr [0x10226e88],0x7c     ; 10002736 | DAT_10226e88
    MOV EAX,[0x1022691c]                ; 10002740 | g_ExternalRendererBridge.agp_texture_mode
    MOV dword ptr [0x10226e8c],0x21     ; 10002745 | DAT_10226e8c
    CMP dword ptr [EAX],0x1             ; 1000274f
    MOV dword ptr [0x10226e9c],0x2      ; 10002752 | DAT_10226e9c
    JG 0x10002768                       ; 1000275c
        ;   XREF to: 10002768 (CONDITIONAL_JUMP)  ; LAB_10002768
    MOV dword ptr [0x10226e9c],0x1      ; 1000275e | DAT_10226e9c
    PUSH 0x0                            ; 10002768
        ;   Label: LAB_10002768
    MOV EAX,[0x10014188]                ; 1000276a | g_DirectDraw4
    MOV dword ptr [0x10226ef0],0x6218   ; 1000276f | DAT_10226ef0
    PUSH 0x1001418c                     ; 10002779 | DAT_1001418c
    MOV EBX,dword ptr [EAX]             ; 1000277e
    PUSH 0x10226e88                     ; 10002780 | DAT_10226e88
    PUSH EAX                            ; 10002785
    CALL dword ptr [EBX + 0x18]         ; 10002786
    TEST EAX,EAX                        ; 10002789
    JZ 0x100027ca                       ; 1000278b
        ;   XREF to: 100027ca (CONDITIONAL_JUMP)  ; LAB_100027ca
    PUSH 0x0                            ; 1000278d
    MOV EAX,[0x10014188]                ; 1000278f | g_DirectDraw4
    MOV dword ptr [0x10226e9c],0x1      ; 10002794 | DAT_10226e9c
    PUSH 0x1001418c                     ; 1000279e | DAT_1001418c
    MOV EBX,dword ptr [EAX]             ; 100027a3
    PUSH 0x10226e88                     ; 100027a5 | DAT_10226e88
    PUSH EAX                            ; 100027aa
    CALL dword ptr [EBX + 0x18]         ; 100027ab
    TEST EAX,EAX                        ; 100027ae
    JZ 0x100027ca                       ; 100027b0
        ;   XREF to: 100027ca (CONDITIONAL_JUMP)  ; LAB_100027ca
    MOV EAX,[0x10014188]                ; 100027b2 | g_DirectDraw4
    PUSH EAX                            ; 100027b7
    MOV EBX,dword ptr [EAX]             ; 100027b8
    CALL dword ptr [EBX + 0x4c]         ; 100027ba
    XOR EAX,EAX                         ; 100027bd
    POP EBP                             ; 100027bf
    POP EDI                             ; 100027c0
    POP ESI                             ; 100027c1
    POP EBX                             ; 100027c2
    ADD ESP,0x210                       ; 100027c3
    RET                                 ; 100027c9
    LEA EAX,[ESP + 0x30]                ; 100027ca
        ;   Label: LAB_100027ca
    PUSH 0x10014180                     ; 100027ce | DAT_10014180
    PUSH EAX                            ; 100027d3
    MOV ECX,dword ptr [0x1001418c]      ; 100027d4 | DAT_1001418c
    MOV dword ptr [ESP + 0x38],0x2004   ; 100027da
    PUSH ECX                            ; 100027e2
    MOV EAX,dword ptr [ECX]             ; 100027e3
    CALL dword ptr [EAX + 0x30]         ; 100027e5
    TEST EAX,EAX                        ; 100027e8
    JZ 0x10002804                       ; 100027ea
        ;   XREF to: 10002804 (CONDITIONAL_JUMP)  ; LAB_10002804
    MOV EAX,[0x10014188]                ; 100027ec | g_DirectDraw4
    PUSH EAX                            ; 100027f1
    MOV EBX,dword ptr [EAX]             ; 100027f2
    CALL dword ptr [EBX + 0x4c]         ; 100027f4
    XOR EAX,EAX                         ; 100027f7
    POP EBP                             ; 100027f9
    POP EDI                             ; 100027fa
    POP ESI                             ; 100027fb
    POP EBX                             ; 100027fc
    ADD ESP,0x210                       ; 100027fd
    RET                                 ; 10002803
    CALL FUN_10002f40                   ; 10002804
        ;   XREF to: 10002f40 (UNCONDITIONAL_CALL)  ; undefined FUN_10002f40()
        ;   Label: LAB_10002804
    TEST EAX,EAX                        ; 10002809
    JNZ 0x10002825                      ; 1000280b
        ;   XREF to: 10002825 (CONDITIONAL_JUMP)  ; LAB_10002825
    MOV EAX,[0x10014188]                ; 1000280d | g_DirectDraw4
    PUSH EAX                            ; 10002812
    MOV EBX,dword ptr [EAX]             ; 10002813
    CALL dword ptr [EBX + 0x4c]         ; 10002815
    XOR EAX,EAX                         ; 10002818
    POP EBP                             ; 1000281a
    POP EDI                             ; 1000281b
    POP ESI                             ; 1000281c
    POP EBX                             ; 1000281d
    ADD ESP,0x210                       ; 1000281e
    RET                                 ; 10002824
    LEA EDI,[ESP + 0x10]                ; 10002825
        ;   Label: LAB_10002825
    XOR EAX,EAX                         ; 10002829
    MOV ECX,0x8                         ; 1000282b
    STOSD.REP ES:EDI                    ; 10002830
    LEA EAX,[ESP + 0x10]                ; 10002832
    MOV ECX,dword ptr [0x100141dc]      ; 10002836 | DAT_100141dc
    PUSH EAX                            ; 1000283c
    PUSH 0x10002b50                     ; 1000283d | LAB_10002b50
    PUSH 0x10012178                     ; 10002842 | DAT_10012178
    MOV EAX,dword ptr [ECX]             ; 10002847
    PUSH ECX                            ; 10002849
    CALL dword ptr [EAX + 0x28]         ; 1000284a
    PUSH EAX                            ; 1000284d
    CALL FUN_10001d70                   ; 1000284e
        ;   XREF to: 10001d70 (UNCONDITIONAL_CALL)  ; undefined FUN_10001d70()
    ADD ESP,0x4                         ; 10002853
    CMP dword ptr [ESP + 0x10],0x20     ; 10002856
    JZ 0x10002893                       ; 1000285b
        ;   XREF to: 10002893 (CONDITIONAL_JUMP)  ; LAB_10002893
    MOV EAX,[0x10014188]                ; 1000285d | g_DirectDraw4
    PUSH EAX                            ; 10002862
    MOV EBX,dword ptr [EAX]             ; 10002863
    CALL dword ptr [EBX + 0x4c]         ; 10002865
    TEST EAX,EAX                        ; 10002868
    JZ 0x10002879                       ; 1000286a
        ;   XREF to: 10002879 (CONDITIONAL_JUMP)  ; LAB_10002879
    XOR EAX,EAX                         ; 1000286c
    POP EBP                             ; 1000286e
    POP EDI                             ; 1000286f
    POP ESI                             ; 10002870
    POP EBX                             ; 10002871
    ADD ESP,0x210                       ; 10002872
    RET                                 ; 10002878
    PUSH 0x10016790                     ; 10002879 | = "Your 3D hardware needs to support a Z..."
        ;   Label: LAB_10002879
    CALL FUN_10002340                   ; 1000287e
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; undefined FUN_10002340()
    ADD ESP,0x4                         ; 10002883
    XOR EAX,EAX                         ; 10002886
    POP EBP                             ; 10002888
    POP EDI                             ; 10002889
    POP ESI                             ; 1000288a
    POP EBX                             ; 1000288b
    ADD ESP,0x210                       ; 1000288c
    RET                                 ; 10002892
    LEA EDI,[ESP + 0x40]                ; 10002893
        ;   Label: LAB_10002893
    XOR EAX,EAX                         ; 10002897
    MOV ECX,0x1f                        ; 10002899
    STOSD.REP ES:EDI                    ; 1000289e
    MOV EAX,[0x10014174]                ; 100028a0 | DAT_10014174
    MOV ECX,dword ptr [0x10014178]      ; 100028a5 | DAT_10014178
    MOV dword ptr [ESP + 0x4c],EAX      ; 100028ab
    MOV dword ptr [ESP + 0x48],ECX      ; 100028af
    LEA ESI,[ESP + 0x10]                ; 100028b3
    LEA EDI,[ESP + 0x88]                ; 100028b7
    MOV ECX,0x8                         ; 100028be
    PUSH 0x0                            ; 100028c3
    LEA EDX,[ESP + 0x44]                ; 100028c5
    PUSH 0x10014190                     ; 100028c9 | DAT_10014190
    MOV dword ptr [ESP + 0x48],0x7c     ; 100028ce
    MOV dword ptr [ESP + 0x4c],0x1007   ; 100028d6
    MOV dword ptr [ESP + 0xb0],0x20000  ; 100028de
    MOVSD.REP ES:EDI,ESI                ; 100028e9
    PUSH EDX                            ; 100028eb
    MOV EAX,[0x10014188]                ; 100028ec | g_DirectDraw4
    PUSH EAX                            ; 100028f1
    MOV EBX,dword ptr [EAX]             ; 100028f2
    CALL dword ptr [EBX + 0x18]         ; 100028f4
    TEST EAX,EAX                        ; 100028f7
    JZ 0x1000294c                       ; 100028f9
        ;   XREF to: 1000294c (CONDITIONAL_JUMP)  ; LAB_1000294c
    MOV EAX,[0x10014188]                ; 100028fb | g_DirectDraw4
    MOV EDI,0x100167c0                  ; 10002900 | = "FATAL ERROR!  Unable to create a Z bu..."
    PUSH EAX                            ; 10002905
    MOV EBX,dword ptr [EAX]             ; 10002906
    CALL dword ptr [EBX + 0x4c]         ; 10002908
    MOV ECX,0xffffffff                  ; 1000290b
    SUB EAX,EAX                         ; 10002910
    SCASB.REPNE ES:EDI                  ; 10002912 | = "FATAL ERROR!  Unable to create a Z bu..." | s_FATAL_ERROR_Unable_to_cr_100167c0+1
    NOT ECX                             ; 10002914
    SUB EDI,ECX                         ; 10002916
    MOV EDX,ECX                         ; 10002918
    SHR ECX,0x2                         ; 1000291a
    MOV ESI,EDI                         ; 1000291d
    MOV EDI,0x101386f0                  ; 1000291f | DAT_101386f0
    MOVSD.REP ES:EDI,ESI                ; 10002924 | = "FATAL ERROR!  Unable to create a Z bu..." | DAT_101386f0
    MOV ECX,EDX                         ; 10002926
    PUSH 0x10                           ; 10002928
    AND ECX,0x3                         ; 1000292a
    PUSH 0x10016860                     ; 1000292d | = "3D Adapter Error"
    MOVSB.REP ES:EDI,ESI                ; 10002932 | = "FATAL ERROR!  Unable to create a Z bu..." | DAT_101386f0
    PUSH 0x101386f0                     ; 10002934 | DAT_101386f0
    PUSH 0x0                            ; 10002939
    CALL dword ptr [0x10242290]         ; 1000293b | PTR_MessageBoxA_10242290
    PUSH 0x29a                          ; 10002941
    CALL dword ptr [0x10242184]         ; 10002946 | PTR_ExitProcess_10242184
    MOV EAX,dword ptr [ESP + 0x1c]      ; 1000294c
        ;   Label: LAB_1000294c
    XOR EBX,EBX                         ; 10002950
    MOV [0x10014170],EAX                ; 10002952 | DAT_10014170
    CMP dword ptr [0x10226a48],EBX      ; 10002957 | DAT_10226a48
    JLE 0x100029d9                      ; 1000295d
        ;   XREF to: 100029d9 (CONDITIONAL_JUMP)  ; LAB_100029d9
    MOV EBP,0x10014198                  ; 1000295f | DAT_10014198
    LEA EAX,[ESP + 0x40]                ; 10002964
        ;   Label: LAB_10002964
    PUSH 0x0                            ; 10002968
    PUSH EBP                            ; 1000296a | DAT_10014198 | DAT_1001419c
    MOV ECX,dword ptr [0x10014188]      ; 1000296b | g_DirectDraw4
    PUSH EAX                            ; 10002971
    PUSH ECX                            ; 10002972
    MOV EAX,dword ptr [ECX]             ; 10002973
    CALL dword ptr [EAX + 0x18]         ; 10002975
    TEST EAX,EAX                        ; 10002978
    JZ 0x100029cd                       ; 1000297a
        ;   XREF to: 100029cd (CONDITIONAL_JUMP)  ; LAB_100029cd
    MOV EAX,[0x10014188]                ; 1000297c | g_DirectDraw4
    MOV EDI,0x10016874                  ; 10002981 | = "FATAL ERROR!  Unable to create a 2nd ..."
    PUSH EAX                            ; 10002986
    MOV ESI,dword ptr [EAX]             ; 10002987
    CALL dword ptr [ESI + 0x4c]         ; 10002989
    MOV ECX,0xffffffff                  ; 1000298c
    SUB EAX,EAX                         ; 10002991
    SCASB.REPNE ES:EDI                  ; 10002993 | = "FATAL ERROR!  Unable to create a 2nd ..." | s_FATAL_ERROR_Unable_to_cr_10016874+1
    NOT ECX                             ; 10002995
    SUB EDI,ECX                         ; 10002997
    MOV EDX,ECX                         ; 10002999
    SHR ECX,0x2                         ; 1000299b
    MOV ESI,EDI                         ; 1000299e
    MOV EDI,0x101386f0                  ; 100029a0 | DAT_101386f0
    PUSH 0x10                           ; 100029a5
    MOVSD.REP ES:EDI,ESI                ; 100029a7 | = "FATAL ERROR!  Unable to create a 2nd ..." | DAT_101386f0
    MOV ECX,EDX                         ; 100029a9
    PUSH 0x10016918                     ; 100029ab | = "3D Adapter Error"
    AND ECX,0x3                         ; 100029b0
    PUSH 0x101386f0                     ; 100029b3 | DAT_101386f0
    MOVSB.REP ES:EDI,ESI                ; 100029b8 | = "FATAL ERROR!  Unable to create a 2nd ..." | DAT_101386f0
    PUSH 0x0                            ; 100029ba
    CALL dword ptr [0x10242290]         ; 100029bc | PTR_MessageBoxA_10242290
    PUSH 0x29a                          ; 100029c2
    CALL dword ptr [0x10242184]         ; 100029c7 | PTR_ExitProcess_10242184
    ADD EBP,0x4                         ; 100029cd
        ;   Label: LAB_100029cd
    INC EBX                             ; 100029d0
    CMP EBX,dword ptr [0x10226a48]      ; 100029d1 | DAT_10226a48
    JL 0x10002964                       ; 100029d7
        ;   XREF to: 10002964 (CONDITIONAL_JUMP)  ; LAB_10002964
    MOV EAX,[0x10014190]                ; 100029d9 | DAT_10014190
        ;   Label: LAB_100029d9
    MOV ECX,dword ptr [0x10014180]      ; 100029de | DAT_10014180
    PUSH EAX                            ; 100029e4
    PUSH ECX                            ; 100029e5
    MOV EAX,dword ptr [ECX]             ; 100029e6
    CALL dword ptr [EAX + 0xc]          ; 100029e8
    TEST EAX,EAX                        ; 100029eb
    JZ 0x10002a40                       ; 100029ed
        ;   XREF to: 10002a40 (CONDITIONAL_JUMP)  ; LAB_10002a40
    MOV EAX,[0x10014188]                ; 100029ef | g_DirectDraw4
    MOV EDI,0x1001692c                  ; 100029f4 | = "FATAL ERROR!  Unable to attach Z buff..."
    PUSH EAX                            ; 100029f9
    MOV EBX,dword ptr [EAX]             ; 100029fa
    CALL dword ptr [EBX + 0x4c]         ; 100029fc
    MOV ECX,0xffffffff                  ; 100029ff
    SUB EAX,EAX                         ; 10002a04
    SCASB.REPNE ES:EDI                  ; 10002a06 | = "FATAL ERROR!  Unable to attach Z buff..." | s_FATAL_ERROR_Unable_to_at_1001692c+1
    NOT ECX                             ; 10002a08
    SUB EDI,ECX                         ; 10002a0a
    MOV EDX,ECX                         ; 10002a0c
    SHR ECX,0x2                         ; 10002a0e
    MOV ESI,EDI                         ; 10002a11
    MOV EDI,0x101386f0                  ; 10002a13 | DAT_101386f0
    MOVSD.REP ES:EDI,ESI                ; 10002a18 | = "FATAL ERROR!  Unable to attach Z buff..." | DAT_101386f0
    MOV ECX,EDX                         ; 10002a1a
    PUSH 0x10                           ; 10002a1c
    AND ECX,0x3                         ; 10002a1e
    PUSH 0x100169a4                     ; 10002a21 | = "3D Adapter Error"
    MOVSB.REP ES:EDI,ESI                ; 10002a26 | = "FATAL ERROR!  Unable to attach Z buff..." | DAT_101386f0
    PUSH 0x101386f0                     ; 10002a28 | DAT_101386f0
    PUSH 0x0                            ; 10002a2d
    CALL dword ptr [0x10242290]         ; 10002a2f | PTR_MessageBoxA_10242290
    PUSH 0x29a                          ; 10002a35
    CALL dword ptr [0x10242184]         ; 10002a3a | PTR_ExitProcess_10242184
    LEA EDI,[ESP + 0xbc]                ; 10002a40
        ;   Label: LAB_10002a40
    XOR EAX,EAX                         ; 10002a47
    MOV ECX,0x19                        ; 10002a49
    STOSD.REP ES:EDI                    ; 10002a4e
    MOV dword ptr [ESP + 0xbc],0x64     ; 10002a50
    LEA EAX,[ESP + 0xbc]                ; 10002a5b
    MOV ECX,dword ptr [0x1001418c]      ; 10002a62 | DAT_1001418c
    PUSH EAX                            ; 10002a68
    PUSH 0x1000400                      ; 10002a69
    PUSH 0x0                            ; 10002a6e
    MOV EAX,dword ptr [ECX]             ; 10002a70
    PUSH 0x0                            ; 10002a72
    PUSH 0x0                            ; 10002a74
    PUSH ECX                            ; 10002a76
    CALL dword ptr [EAX + 0x14]         ; 10002a77
    LEA ECX,[ESP + 0xbc]                ; 10002a7a
    MOV EDX,dword ptr [0x10014180]      ; 10002a81 | DAT_10014180
    PUSH ECX                            ; 10002a87
    PUSH 0x1000400                      ; 10002a88
    PUSH 0x0                            ; 10002a8d
    MOV EAX,dword ptr [EDX]             ; 10002a8f
    PUSH 0x0                            ; 10002a91
    PUSH 0x0                            ; 10002a93
    PUSH EDX                            ; 10002a95
    CALL dword ptr [EAX + 0x14]         ; 10002a96
    CALL FUN_10003100                   ; 10002a99
        ;   XREF to: 10003100 (UNCONDITIONAL_CALL)  ; undefined FUN_10003100()
    TEST EAX,EAX                        ; 10002a9e
    JNZ 0x10002adb                      ; 10002aa0
        ;   XREF to: 10002adb (CONDITIONAL_JUMP)  ; LAB_10002adb
    MOV EAX,[0x1001417c]                ; 10002aa2 | DAT_1001417c
    MOV ECX,dword ptr [0x10014178]      ; 10002aa7 | DAT_10014178
    PUSH EAX                            ; 10002aad
    MOV EDX,dword ptr [0x10014174]      ; 10002aae | DAT_10014174
    LEA EAX,[ESP + 0x124]               ; 10002ab4
    PUSH ECX                            ; 10002abb
    PUSH EDX                            ; 10002abc
    PUSH 0x100169b8                     ; 10002abd | = "Unable to initialize Direct3D in %dx%..."
    PUSH EAX                            ; 10002ac2
    CALL crt_stdio.c__sprintf_FUN_10005630 ; 10002ac3
        ;   XREF to: 10005630 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_10005630(char * dest, char * format)
    LEA ECX,[ESP + 0x134]               ; 10002ac8
    ADD ESP,0x14                        ; 10002acf
    PUSH ECX                            ; 10002ad2
    CALL FUN_10002340                   ; 10002ad3
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; undefined FUN_10002340()
    ADD ESP,0x4                         ; 10002ad8
    PUSH 0x1df                          ; 10002adb
        ;   Label: LAB_10002adb
    PUSH 0x27f                          ; 10002ae0
    CALL dword ptr [0x10242298]         ; 10002ae5 | PTR_SetCursorPos_10242298
    MOV ESI,dword ptr [0x10242294]      ; 10002aeb | PTR_ShowCursor_10242294
    PUSH 0x0                            ; 10002af1
        ;   Label: LAB_10002af1
    CALL ESI                            ; 10002af3 | int ShowCursor(BOOL bShow)
    TEST EAX,EAX                        ; 10002af5
    JG 0x10002af1                       ; 10002af7
        ;   XREF to: 10002af1 (CONDITIONAL_JUMP)  ; LAB_10002af1
    MOV ESI,0x3                         ; 10002af9
    CALL APIDLLclear                    ; 10002afe
        ;   XREF to: 10004840 (UNCONDITIONAL_CALL)  ; int APIDLLclear() | Ordinal_8
        ;   Label: LAB_10002afe
    CALL APIDLLtoggle                   ; 10002b03
        ;   XREF to: 100024b0 (UNCONDITIONAL_CALL)  ; void APIDLLtoggle() | Ordinal_34
    DEC ESI                             ; 10002b08
    JNZ 0x10002afe                      ; 10002b09
        ;   XREF to: 10002afe (CONDITIONAL_JUMP)  ; LAB_10002afe
    MOV EAX,0x1                         ; 10002b0b
    POP EBP                             ; 10002b10
    POP EDI                             ; 10002b11
    POP ESI                             ; 10002b12
    POP EBX                             ; 10002b13
    ADD ESP,0x210                       ; 10002b14
    RET                                 ; 10002b1a


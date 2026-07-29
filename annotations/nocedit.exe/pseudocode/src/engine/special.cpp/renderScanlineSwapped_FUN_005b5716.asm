; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_renderScanlineSwapped_FUN_005b5716(int scanline_y,SHardwareEdge *right,SHardwareEdge *left)
;
; Parameters:
; int              Stack[0x4]:4   scanline_y
; SHardwareEdge *  Stack[0x8]:4   right
; SHardwareEdge *  Stack[0xc]:4   left
;
; Referenced Globals:
;   MainScanlineFunc* g_ScanlineRenderFunc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005b5716
        ;   Label: engine_special.cpp_renderScanlineSwapped_FUN_005b5716
    MOV EBP,ESP                         ; 005b5717
    PUSH ESI                            ; 005b5719
    PUSH EDI                            ; 005b571a
    NOP                                 ; 005b571b
    NOP                                 ; 005b571c
    NOP                                 ; 005b571d
    NOP                                 ; 005b571e
    NOP                                 ; 005b571f
    NOP                                 ; 005b5720
    NOP                                 ; 005b5721
    NOP                                 ; 005b5722
    NOP                                 ; 005b5723
    NOP                                 ; 005b5724
    NOP                                 ; 005b5725
    NOP                                 ; 005b5726
    NOP                                 ; 005b5727
    NOP                                 ; 005b5728
    NOP                                 ; 005b5729
    NOP                                 ; 005b572a
    NOP                                 ; 005b572b
    NOP                                 ; 005b572c
    NOP                                 ; 005b572d
    NOP                                 ; 005b572e
    NOP                                 ; 005b572f
    NOP                                 ; 005b5730
    NOP                                 ; 005b5731
    MOV EBX,dword ptr [EBP + 0x8]       ; 005b5732
    MOV ESI,dword ptr [EBP + 0xc]       ; 005b5735
    MOV EDI,dword ptr [EBP + 0x10]      ; 005b5738
    CALL dword ptr [0x02d0257c]         ; 005b573b | g_ScanlineRenderFunc
    NOP                                 ; 005b5741
    NOP                                 ; 005b5742
    NOP                                 ; 005b5743
    NOP                                 ; 005b5744
    NOP                                 ; 005b5745
    NOP                                 ; 005b5746
    NOP                                 ; 005b5747
    NOP                                 ; 005b5748
    NOP                                 ; 005b5749
    NOP                                 ; 005b574a
    NOP                                 ; 005b574b
    NOP                                 ; 005b574c
    NOP                                 ; 005b574d
    NOP                                 ; 005b574e
    NOP                                 ; 005b574f
    NOP                                 ; 005b5750
    NOP                                 ; 005b5751
    NOP                                 ; 005b5752
    NOP                                 ; 005b5753
    NOP                                 ; 005b5754
    NOP                                 ; 005b5755
    NOP                                 ; 005b5756
    NOP                                 ; 005b5757
    POP EDI                             ; 005b5758
    POP ESI                             ; 005b5759
    LEAVE                               ; 005b575a
    RET                                 ; 005b575b


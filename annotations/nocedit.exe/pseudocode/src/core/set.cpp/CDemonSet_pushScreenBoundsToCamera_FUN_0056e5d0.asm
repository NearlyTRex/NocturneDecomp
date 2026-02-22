; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0056e5d0(CDemonSet *this_ptr,int vertex_count)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_count
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   core_morph.cpp_CMorphModel_rotatePoints_FUN_0052af70 at 0052b109
;   core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0 at 0056e83a
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonCamera* g_SkipClearBuffersSceneCamera
;   CDemonRenderer g_CDemonRendererInstance
;   int g_ViewportCenterXFixed
;   int g_ViewportCenterYFixed
;   int g_ViewportRightFixed
;   int g_ViewportBottomFixed
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_pushRect_FUN_0044c740
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0056e5d0
        ;   Label: core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0056e5d0
    SUB ESP,0x1c                        ; 0056e5d1
    CMP dword ptr [0x00902f70],0x0      ; 0056e5d4 | g_SkipClearBuffersSceneCamera
    JZ 0x0056e775                       ; 0056e5db
        ;   XREF to: 0056e775 (CONDITIONAL_JUMP)  ; LAB_0056e775
    PUSH EDI                            ; 0056e5e1
    PUSH ESI                            ; 0056e5e2
    PUSH EBX                            ; 0056e5e3
    MOV EBX,dword ptr [ESP + 0x34]      ; 0056e5e4
    MOV EAX,[0x006703ec]                ; 0056e5e8 | g_CDemonRendererPtr2
    MOV EDI,dword ptr [0x02d02550]      ; 0056e5ed | g_ViewportRightFixed
    MOV ECX,dword ptr [0x02d02548]      ; 0056e5f3 | g_ViewportCenterXFixed
    MOV ESI,dword ptr [EAX]             ; 0056e5f9 | g_CDemonRendererInstance
    MOV EAX,[0x02d02550]                ; 0056e5fb | g_ViewportRightFixed
    MOV EBP,dword ptr [0x02d02554]      ; 0056e600 | g_ViewportBottomFixed
    SUB EAX,ECX                         ; 0056e606
    MOV EDX,dword ptr [0x02d0254c]      ; 0056e608 | g_ViewportCenterYFixed
    MOV dword ptr [ESP + 0x20],EAX      ; 0056e60e
    MOV EAX,[0x02d0254c]                ; 0056e612 | g_ViewportCenterYFixed
    ADD EDI,ECX                         ; 0056e617
    SUB EBP,EAX                         ; 0056e619
    MOV EAX,[0x02d02554]                ; 0056e61b | g_ViewportBottomFixed
    XOR ECX,ECX                         ; 0056e620
    ADD EAX,EDX                         ; 0056e622
    MOV dword ptr [ESP + 0x1c],ECX      ; 0056e624
    MOV dword ptr [ESP + 0x24],EAX      ; 0056e628
    TEST EBX,EBX                        ; 0056e62c
    JLE 0x0056e733                      ; 0056e62e
        ;   XREF to: 0056e733 (CONDITIONAL_JUMP)  ; LAB_0056e733
    MOV AH,byte ptr [ESI + 0x13]        ; 0056e634
        ;   Label: LAB_0056e634
    MOV ECX,ESI                         ; 0056e637
    TEST AH,0x80                        ; 0056e639
    JZ 0x0056e77a                       ; 0056e63c
        ;   XREF to: 0056e77a (CONDITIONAL_JUMP)  ; LAB_0056e77a
    MOV EAX,dword ptr [ESI + 0x8]       ; 0056e642
    MOV EBX,dword ptr [ESI]             ; 0056e645
    NEG EAX                             ; 0056e647
    CMP EAX,EBX                         ; 0056e649
    JGE 0x0056e67c                      ; 0056e64b
        ;   XREF to: 0056e67c (CONDITIONAL_JUMP)  ; LAB_0056e67c
    MOV EDX,dword ptr [ESI + 0x8]       ; 0056e64d
    CMP EBX,EDX                         ; 0056e650
    JGE 0x0056e67c                      ; 0056e652
        ;   XREF to: 0056e67c (CONDITIONAL_JUMP)  ; LAB_0056e67c
    MOV EBX,EDX                         ; 0056e654
    MOV EAX,dword ptr [ESI]             ; 0056e656
    MOV EDX,dword ptr [0x02d02548]      ; 0056e658 | g_ViewportCenterXFixed
    IMUL EDX                            ; 0056e65e
    IDIV EBX                            ; 0056e660
    MOV EBX,dword ptr [0x02d02550]      ; 0056e662 | g_ViewportRightFixed
    MOV EDX,dword ptr [ESP + 0x20]      ; 0056e668
    ADD EAX,EBX                         ; 0056e66c
    CMP EAX,EDX                         ; 0056e66e
    JLE 0x0056e676                      ; 0056e670
        ;   XREF to: 0056e676 (CONDITIONAL_JUMP)  ; LAB_0056e676
    MOV dword ptr [ESP + 0x20],EAX      ; 0056e672
    CMP EAX,EDI                         ; 0056e676
        ;   Label: LAB_0056e676
    JGE 0x0056e67c                      ; 0056e678
        ;   XREF to: 0056e67c (CONDITIONAL_JUMP)  ; LAB_0056e67c
    MOV EDI,EAX                         ; 0056e67a
    MOV EAX,dword ptr [ECX + 0x8]       ; 0056e67c
        ;   Label: LAB_0056e67c
    MOV EBX,dword ptr [ECX + 0x4]       ; 0056e67f
    NEG EAX                             ; 0056e682
    CMP EAX,EBX                         ; 0056e684
    JGE 0x0056e6b8                      ; 0056e686
        ;   XREF to: 0056e6b8 (CONDITIONAL_JUMP)  ; LAB_0056e6b8
    MOV EDX,dword ptr [ECX + 0x8]       ; 0056e688
    CMP EBX,EDX                         ; 0056e68b
    JGE 0x0056e6b8                      ; 0056e68d
        ;   XREF to: 0056e6b8 (CONDITIONAL_JUMP)  ; LAB_0056e6b8
    MOV EBX,EDX                         ; 0056e68f
    MOV EAX,dword ptr [ECX + 0x4]       ; 0056e691
    MOV EDX,dword ptr [0x02d0254c]      ; 0056e694 | g_ViewportCenterYFixed
    IMUL EDX                            ; 0056e69a
    IDIV EBX                            ; 0056e69c
    MOV EBX,dword ptr [0x02d02554]      ; 0056e69e | g_ViewportBottomFixed
    MOV EDX,dword ptr [ESP + 0x24]      ; 0056e6a4
    ADD EAX,EBX                         ; 0056e6a8
    CMP EAX,EDX                         ; 0056e6aa
    JLE 0x0056e6b2                      ; 0056e6ac
        ;   XREF to: 0056e6b2 (CONDITIONAL_JUMP)  ; LAB_0056e6b2
    MOV dword ptr [ESP + 0x24],EAX      ; 0056e6ae
    CMP EAX,EBP                         ; 0056e6b2
        ;   Label: LAB_0056e6b2
    JGE 0x0056e6b8                      ; 0056e6b4
        ;   XREF to: 0056e6b8 (CONDITIONAL_JUMP)  ; LAB_0056e6b8
    MOV EBP,EAX                         ; 0056e6b6
    MOV EBX,dword ptr [ECX + 0x8]       ; 0056e6b8
        ;   Label: LAB_0056e6b8
    CMP EBX,dword ptr [ECX]             ; 0056e6bb
    JG 0x0056e6d0                       ; 0056e6bd
        ;   XREF to: 0056e6d0 (CONDITIONAL_JUMP)  ; LAB_0056e6d0
    MOV EDX,dword ptr [0x02d02550]      ; 0056e6bf | g_ViewportRightFixed
    MOV EAX,[0x02d02548]                ; 0056e6c5 | g_ViewportCenterXFixed
    ADD EAX,EDX                         ; 0056e6ca
    MOV dword ptr [ESP + 0x20],EAX      ; 0056e6cc
    MOV EAX,dword ptr [ECX + 0x8]       ; 0056e6d0
        ;   Label: LAB_0056e6d0
    MOV EBX,dword ptr [ECX]             ; 0056e6d3
    NEG EAX                             ; 0056e6d5
    CMP EAX,EBX                         ; 0056e6d7
    JL 0x0056e6e8                       ; 0056e6d9
        ;   XREF to: 0056e6e8 (CONDITIONAL_JUMP)  ; LAB_0056e6e8
    MOV EAX,[0x02d02548]                ; 0056e6db | g_ViewportCenterXFixed
    MOV EDI,dword ptr [0x02d02550]      ; 0056e6e0 | g_ViewportRightFixed
    SUB EDI,EAX                         ; 0056e6e6
    MOV EDX,dword ptr [ECX + 0x8]       ; 0056e6e8
        ;   Label: LAB_0056e6e8
    CMP EDX,dword ptr [ECX + 0x4]       ; 0056e6eb
    JG 0x0056e6fe                       ; 0056e6ee
        ;   XREF to: 0056e6fe (CONDITIONAL_JUMP)  ; LAB_0056e6fe
    MOV EBX,dword ptr [0x02d02554]      ; 0056e6f0 | g_ViewportBottomFixed
    MOV EBP,dword ptr [0x02d0254c]      ; 0056e6f6 | g_ViewportCenterYFixed
    ADD EBP,EBX                         ; 0056e6fc
    MOV EAX,dword ptr [ECX + 0x8]       ; 0056e6fe
        ;   Label: LAB_0056e6fe
    MOV EDX,dword ptr [ECX + 0x4]       ; 0056e701
    NEG EAX                             ; 0056e704
    CMP EAX,EDX                         ; 0056e706
    JL 0x0056e71b                       ; 0056e708
        ;   XREF to: 0056e71b (CONDITIONAL_JUMP)  ; LAB_0056e71b
    MOV ECX,dword ptr [0x02d0254c]      ; 0056e70a | g_ViewportCenterYFixed
    MOV EAX,[0x02d02554]                ; 0056e710 | g_ViewportBottomFixed
    SUB EAX,ECX                         ; 0056e715
    MOV dword ptr [ESP + 0x24],EAX      ; 0056e717
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0056e71b
        ;   Label: LAB_0056e71b
    MOV EDX,dword ptr [ESP + 0x34]      ; 0056e71f
    INC EAX                             ; 0056e723
    ADD ESI,0x30                        ; 0056e724
    MOV dword ptr [ESP + 0x1c],EAX      ; 0056e727
    CMP EAX,EDX                         ; 0056e72b
    JL 0x0056e634                       ; 0056e72d
        ;   XREF to: 0056e634 (CONDITIONAL_JUMP)  ; LAB_0056e634
    MOV ECX,dword ptr [ESP + 0x20]      ; 0056e733
        ;   Label: LAB_0056e733
    MOV EBX,dword ptr [ESP + 0x24]      ; 0056e737
    MOV EDX,dword ptr [0x00902f70]      ; 0056e73b | g_SkipClearBuffersSceneCamera
    SAR EBX,0x10                        ; 0056e741
    SAR EBP,0x10                        ; 0056e744
    PUSH EBX                            ; 0056e747
    SAR ECX,0x10                        ; 0056e748
    PUSH EBP                            ; 0056e74b
    SAR EDI,0x10                        ; 0056e74c
    PUSH ECX                            ; 0056e74f
    MOV dword ptr [ESP + 0x18],EDI      ; 0056e750
    MOV dword ptr [ESP + 0x20],EBP      ; 0056e754
    PUSH EDI                            ; 0056e758
    MOV dword ptr [ESP + 0x30],ECX      ; 0056e759
    MOV dword ptr [ESP + 0x34],EBX      ; 0056e75d
    PUSH EDX                            ; 0056e761
    MOV dword ptr [ESP + 0x24],ECX      ; 0056e762
    MOV dword ptr [ESP + 0x2c],EBX      ; 0056e766
    CALL core_dcamera.cpp_CDemonCamera_pushRect_FUN_0044c740 ; 0056e76a
        ;   XREF to: 0044c740 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_pushRect_FUN_0044c740(CDemonCamera * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x14                        ; 0056e76f
    POP EBX                             ; 0056e772
    POP ESI                             ; 0056e773
    POP EDI                             ; 0056e774
    ADD ESP,0x1c                        ; 0056e775
        ;   Label: LAB_0056e775
    POP EBP                             ; 0056e778
    RET                                 ; 0056e779
    MOV EBX,dword ptr [ESI + 0x10]      ; 0056e77a
        ;   Label: LAB_0056e77a
    CMP EDI,EBX                         ; 0056e77d
    JLE 0x0056e783                      ; 0056e77f
        ;   XREF to: 0056e783 (CONDITIONAL_JUMP)  ; LAB_0056e783
    MOV EDI,EBX                         ; 0056e781
    MOV EAX,dword ptr [ESP + 0x20]      ; 0056e783
        ;   Label: LAB_0056e783
    MOV EDX,dword ptr [ECX + 0x10]      ; 0056e787
    CMP EAX,EDX                         ; 0056e78a
    JGE 0x0056e792                      ; 0056e78c
        ;   XREF to: 0056e792 (CONDITIONAL_JUMP)  ; LAB_0056e792
    MOV dword ptr [ESP + 0x20],EDX      ; 0056e78e
    MOV EBX,dword ptr [ECX + 0x14]      ; 0056e792
        ;   Label: LAB_0056e792
    CMP EBP,EBX                         ; 0056e795
    JLE 0x0056e79b                      ; 0056e797
        ;   XREF to: 0056e79b (CONDITIONAL_JUMP)  ; LAB_0056e79b
    MOV EBP,EBX                         ; 0056e799
    MOV EAX,dword ptr [ESP + 0x24]      ; 0056e79b
        ;   Label: LAB_0056e79b
    MOV EDX,dword ptr [ECX + 0x14]      ; 0056e79f
    CMP EAX,EDX                         ; 0056e7a2
    JGE 0x0056e71b                      ; 0056e7a4
        ;   XREF to: 0056e71b (CONDITIONAL_JUMP)  ; LAB_0056e71b
    MOV dword ptr [ESP + 0x24],EDX      ; 0056e7aa
    JMP 0x0056e71b                      ; 0056e7ae
        ;   XREF to: 0056e71b (UNCONDITIONAL_JUMP)  ; LAB_0056e71b


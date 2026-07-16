; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl dll_dx7_cpp_FUN_100035b0(void)
;
;
; XREF[1]:
;   dll_dx7.cpp_FUN_10003100 at 1000331f
;
; Referenced Globals:
;   undefined4 DAT_100141bc
;   undefined4 DAT_100141c0
;   undefined4 DAT_100141c4
;   IDirect3DDevice3* g_Device = 00000000
;   undefined4 DAT_101390c8
;   undefined4 DAT_101390cc
;   undefined4 DAT_101394c8
;   undefined4 DAT_101394cc
;   undefined4 g_ExternalRendererBridge.video_memory_size
;   undefined4 g_ExternalRendererBridge.system_initialized
;
; Called Functions:
;   dll_dx7.cpp_FUN_10002d50
;   dll_dx7.cpp_FUN_100037e0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 100035b0
        ;   Label: dll_dx7.cpp_FUN_100035b0
    XOR EAX,EAX                         ; 100035b1
    MOV EDI,0x101394c8                  ; 100035b3 | DAT_101394c8
    MOV ECX,0x100                       ; 100035b8
    STOSD.REP ES:EDI                    ; 100035bd | DAT_101394c8 | DAT_101394cc
    MOV EDI,0x101390c8                  ; 100035bf | DAT_101390c8
    MOV ECX,0x100                       ; 100035c4
    STOSD.REP ES:EDI                    ; 100035c9 | DAT_101390c8 | DAT_101390cc
    MOV EAX,[0x100141e0]                ; 100035cb | g_Device
    PUSH EAX                            ; 100035d0
    MOV EAX,dword ptr [EAX]             ; 100035d1
    CALL dword ptr [EAX + 0x24]         ; 100035d3
    TEST EAX,EAX                        ; 100035d6
    JZ 0x100035de                       ; 100035d8
        ;   XREF to: 100035de (CONDITIONAL_JUMP)  ; LAB_100035de
    XOR EAX,EAX                         ; 100035da
    POP EDI                             ; 100035dc
    RET                                 ; 100035dd
    PUSH 0x0                            ; 100035de
        ;   Label: LAB_100035de
    PUSH 0x1                            ; 100035e0
    CALL dll_dx7.cpp_FUN_100037e0       ; 100035e2
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 100035e7
    PUSH 0x0                            ; 100035ea
    PUSH 0x2                            ; 100035ec
    CALL dll_dx7.cpp_FUN_100037e0       ; 100035ee
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 100035f3
    PUSH 0x3                            ; 100035f6
    PUSH 0x3                            ; 100035f8
    CALL dll_dx7.cpp_FUN_100037e0       ; 100035fa
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 100035ff
    PUSH 0x1                            ; 10003602
    PUSH 0x4                            ; 10003604
    CALL dll_dx7.cpp_FUN_100037e0       ; 10003606
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 1000360b
    PUSH 0x0                            ; 1000360e
    PUSH 0x5                            ; 10003610
    CALL dll_dx7.cpp_FUN_100037e0       ; 10003612
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 10003617
    PUSH 0x0                            ; 1000361a
    PUSH 0x6                            ; 1000361c
    CALL dll_dx7.cpp_FUN_100037e0       ; 1000361e
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 10003623
    PUSH 0x0                            ; 10003626
    PUSH 0x7                            ; 10003628
    CALL dll_dx7.cpp_FUN_100037e0       ; 1000362a
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 1000362f
    PUSH 0x3                            ; 10003632
    PUSH 0x8                            ; 10003634
    CALL dll_dx7.cpp_FUN_100037e0       ; 10003636
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 1000363b
    PUSH 0x2                            ; 1000363e
    PUSH 0x9                            ; 10003640
    CALL dll_dx7.cpp_FUN_100037e0       ; 10003642
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 10003647
    PUSH 0x0                            ; 1000364a
    PUSH 0xb                            ; 1000364c
    CALL dll_dx7.cpp_FUN_100037e0       ; 1000364e
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 10003653
    PUSH 0x0                            ; 10003656
    PUSH 0xe                            ; 10003658
    CALL dll_dx7.cpp_FUN_100037e0       ; 1000365a
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 1000365f
    PUSH 0x0                            ; 10003662
    PUSH 0xf                            ; 10003664
    CALL dll_dx7.cpp_FUN_100037e0       ; 10003666
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 1000366b
    PUSH 0x0                            ; 1000366e
    PUSH 0x10                           ; 10003670
    CALL dll_dx7.cpp_FUN_100037e0       ; 10003672
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 10003677
    MOV EAX,[0x10226918]                ; 1000367a | g_ExternalRendererBridge.system_initialized
    CMP dword ptr [EAX],0x1             ; 1000367f
    SBB EAX,EAX                         ; 10003682
    ADD EAX,0x2                         ; 10003684
    PUSH EAX                            ; 10003687
    PUSH 0x11                           ; 10003688
    CALL dll_dx7.cpp_FUN_100037e0       ; 1000368a
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 1000368f
    MOV ECX,dword ptr [0x10226918]      ; 10003692 | g_ExternalRendererBridge.system_initialized
    CMP dword ptr [ECX],0x1             ; 10003698
    SBB EAX,EAX                         ; 1000369b
    ADD EAX,0x2                         ; 1000369d
    PUSH EAX                            ; 100036a0
    PUSH 0x12                           ; 100036a1
    CALL dll_dx7.cpp_FUN_100037e0       ; 100036a3
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 100036a8
    PUSH 0x2                            ; 100036ab
    PUSH 0x13                           ; 100036ad
    CALL dll_dx7.cpp_FUN_100037e0       ; 100036af
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 100036b4
    PUSH 0x6                            ; 100036b7
    PUSH 0x14                           ; 100036b9
    CALL dll_dx7.cpp_FUN_100037e0       ; 100036bb
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 100036c0
    PUSH 0x2                            ; 100036c3
    PUSH 0x15                           ; 100036c5
    CALL dll_dx7.cpp_FUN_100037e0       ; 100036c7
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 100036cc
    PUSH 0x1                            ; 100036cf
    PUSH 0x16                           ; 100036d1
    CALL dll_dx7.cpp_FUN_100037e0       ; 100036d3
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 100036d8
    MOV ECX,dword ptr [0x1022690c]      ; 100036db | g_ExternalRendererBridge.video_memory_size
    MOV EDX,dword ptr [ECX]             ; 100036e1
    PUSH EDX                            ; 100036e3
    PUSH 0x1a                           ; 100036e4
    CALL dll_dx7.cpp_FUN_100037e0       ; 100036e6
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 100036eb
    PUSH 0x0                            ; 100036ee
    PUSH 0x1b                           ; 100036f0
    CALL dll_dx7.cpp_FUN_100037e0       ; 100036f2
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 100036f7
    PUSH 0x0                            ; 100036fa
    PUSH 0x1c                           ; 100036fc
    CALL dll_dx7.cpp_FUN_100037e0       ; 100036fe
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 10003703
    MOV ECX,dword ptr [0x100141bc]      ; 10003706 | DAT_100141bc
    SHL ECX,0x10                        ; 1000370c
    MOV EAX,[0x100141c0]                ; 1000370f | DAT_100141c0
    SHL EAX,0x8                         ; 10003714
    OR ECX,EAX                          ; 10003717
    OR ECX,dword ptr [0x100141c4]       ; 10003719 | DAT_100141c4
    PUSH ECX                            ; 1000371f
    PUSH 0x22                           ; 10003720
    CALL dll_dx7.cpp_FUN_100037e0       ; 10003722
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 10003727
    PUSH 0x0                            ; 1000372a
    PUSH 0x23                           ; 1000372c
    CALL dll_dx7.cpp_FUN_100037e0       ; 1000372e
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 10003733
    PUSH 0x1                            ; 10003736
    PUSH 0x1d                           ; 10003738
    CALL dll_dx7.cpp_FUN_100037e0       ; 1000373a
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 1000373f
    PUSH 0x0                            ; 10003742
    PUSH 0x1e                           ; 10003744
    CALL dll_dx7.cpp_FUN_100037e0       ; 10003746
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 1000374b
    PUSH 0x1                            ; 1000374e
    PUSH 0x1f                           ; 10003750
    CALL dll_dx7.cpp_FUN_100037e0       ; 10003752
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 10003757
    PUSH 0x0                            ; 1000375a
    PUSH 0x21                           ; 1000375c
    CALL dll_dx7.cpp_FUN_100037e0       ; 1000375e
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 10003763
    PUSH 0x0                            ; 10003766
    PUSH 0x27                           ; 10003768
    CALL dll_dx7.cpp_FUN_100037e0       ; 1000376a
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 1000376f
    PUSH 0x0                            ; 10003772
    PUSH 0x7                            ; 10003774
    CALL dll_dx7.cpp_FUN_100037e0       ; 10003776
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 1000377b
    PUSH 0x0                            ; 1000377e
    PUSH 0xe                            ; 10003780
    CALL dll_dx7.cpp_FUN_100037e0       ; 10003782
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 10003787
    PUSH 0x8                            ; 1000378a
    PUSH 0x17                           ; 1000378c
    CALL dll_dx7.cpp_FUN_100037e0       ; 1000378e
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 10003793
    PUSH 0x0                            ; 10003796
    PUSH 0x29                           ; 10003798
    CALL dll_dx7.cpp_FUN_100037e0       ; 1000379a
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 1000379f
    PUSH 0x0                            ; 100037a2
    PUSH 0x18                           ; 100037a4
    CALL dll_dx7.cpp_FUN_100037e0       ; 100037a6
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 100037ab
    PUSH 0x5                            ; 100037ae
    PUSH 0x19                           ; 100037b0
    CALL dll_dx7.cpp_FUN_100037e0       ; 100037b2
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 100037b7
    PUSH 0x0                            ; 100037ba
    PUSH 0xf                            ; 100037bc
    CALL dll_dx7.cpp_FUN_100037e0       ; 100037be
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 100037c3
    CALL dll_dx7.cpp_FUN_10002d50       ; 100037c6
        ;   XREF to: 10002d50 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_10002d50()
    MOV ECX,dword ptr [0x100141e0]      ; 100037cb | g_Device
    PUSH ECX                            ; 100037d1
    MOV EAX,dword ptr [ECX]             ; 100037d2
    CALL dword ptr [EAX + 0x28]         ; 100037d4
    POP EDI                             ; 100037d7
    CMP EAX,0x1                         ; 100037d8
    SBB EAX,EAX                         ; 100037db
    NEG EAX                             ; 100037dd
    RET                                 ; 100037df


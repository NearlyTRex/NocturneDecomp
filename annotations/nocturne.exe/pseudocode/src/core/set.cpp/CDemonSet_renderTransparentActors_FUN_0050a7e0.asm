; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderTransparentActors_FUN_0050a7e0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00509a80 at 00509dc6
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190
;   core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
;   FUN_0050e080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050a7e0
        ;   Label: core_set.cpp_CDemonSet_renderTransparentActors_FUN_0050a7e0
    PUSH ESI                            ; 0050a7e1
    PUSH EDI                            ; 0050a7e2
    PUSH EBP                            ; 0050a7e3
    SUB ESP,0x34                        ; 0050a7e4
    MOV EDI,dword ptr [ESP + 0x48]      ; 0050a7e7
    MOV EBP,dword ptr [EDI + 0x15f2fc]  ; 0050a7eb
    DEC EBP                             ; 0050a7f1
    TEST EBP,EBP                        ; 0050a7f2
    JL 0x0050a82d                       ; 0050a7f4
        ;   XREF to: 0050a82d (CONDITIONAL_JUMP)  ; LAB_0050a82d
    LEA EAX,[EBP*0x4 + 0x0]             ; 0050a7f6
    ADD EAX,EDI                         ; 0050a7fd
    MOV dword ptr [ESP + 0x30],EAX      ; 0050a7ff
    MOV EBX,dword ptr [ESP + 0x30]      ; 0050a803
        ;   Label: LAB_0050a803
    MOV EBX,dword ptr [EBX + 0x15f300]  ; 0050a807
    CMP dword ptr [EBX + 0xfc],0x0      ; 0050a80d
    JNZ 0x0050a835                      ; 0050a814
        ;   XREF to: 0050a835 (CONDITIONAL_JUMP)  ; LAB_0050a835
    AND byte ptr [EBX + 0x140],0xf7     ; 0050a816
    MOV EDX,dword ptr [ESP + 0x30]      ; 0050a81d
        ;   Label: LAB_0050a81d
    SUB EDX,0x4                         ; 0050a821
    DEC EBP                             ; 0050a824
    MOV dword ptr [ESP + 0x30],EDX      ; 0050a825
    TEST EBP,EBP                        ; 0050a829
    JGE 0x0050a803                      ; 0050a82b
        ;   XREF to: 0050a803 (CONDITIONAL_JUMP)  ; LAB_0050a803
    ADD ESP,0x34                        ; 0050a82d
        ;   Label: LAB_0050a82d
    POP EBP                             ; 0050a830
    POP EDI                             ; 0050a831
    POP ESI                             ; 0050a832
    POP EBX                             ; 0050a833
    RET                                 ; 0050a834
    MOV ESI,ESP                         ; 0050a835
        ;   Label: LAB_0050a835
    PUSH ESI                            ; 0050a837
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0050a838
    PUSH EBX                            ; 0050a83e
    CALL dword ptr [EAX + 0x14]         ; 0050a83f
    MOV ESI,EAX                         ; 0050a842
    MOV EDX,EAX                         ; 0050a844
    LEA EAX,[ESP + 0x20]                ; 0050a846
    ADD ESP,0x8                         ; 0050a84a
    CMP EAX,ESI                         ; 0050a84d
    JZ 0x0050a865                       ; 0050a84f
        ;   XREF to: 0050a865 (CONDITIONAL_JUMP)  ; LAB_0050a865
    MOV EAX,dword ptr [ESI]             ; 0050a851
    MOV dword ptr [ESP + 0x18],EAX      ; 0050a853
    MOV EAX,dword ptr [ESI + 0x4]       ; 0050a857
    MOV dword ptr [ESP + 0x1c],EAX      ; 0050a85a
    MOV EAX,dword ptr [ESI + 0x8]       ; 0050a85e
    MOV dword ptr [ESP + 0x20],EAX      ; 0050a861
    LEA EAX,[ESP + 0x24]                ; 0050a865
        ;   Label: LAB_0050a865
    LEA ESI,[EDX + 0xc]                 ; 0050a869
    CMP EAX,ESI                         ; 0050a86c
    JZ 0x0050a884                       ; 0050a86e
        ;   XREF to: 0050a884 (CONDITIONAL_JUMP)  ; LAB_0050a884
    MOV EAX,dword ptr [ESI]             ; 0050a870
    MOV dword ptr [ESP + 0x24],EAX      ; 0050a872
    MOV EAX,dword ptr [ESI + 0x4]       ; 0050a876
    MOV dword ptr [ESP + 0x28],EAX      ; 0050a879
    MOV EAX,dword ptr [ESI + 0x8]       ; 0050a87d
    MOV dword ptr [ESP + 0x2c],EAX      ; 0050a880
    LEA EAX,[EBX + 0x3c]                ; 0050a884
        ;   Label: LAB_0050a884
    PUSH EAX                            ; 0050a887
    LEA EAX,[ESP + 0x28]                ; 0050a888
    PUSH EAX                            ; 0050a88c
    LEA EAX,[ESP + 0x20]                ; 0050a88d
    PUSH EAX                            ; 0050a891
    LEA EAX,[EBX + 0x30]                ; 0050a892
    PUSH EAX                            ; 0050a895
    LEA EAX,[EBX + 0x20]                ; 0050a896
    PUSH EAX                            ; 0050a899
    PUSH EDI                            ; 0050a89a
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0 ; 0050a89b
        ;   XREF to: 0050adc0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0()
    ADD ESP,0x18                        ; 0050a8a0
    MOV ESI,dword ptr [EBX + 0x110]     ; 0050a8a3
    PUSH ESI                            ; 0050a8a9
    MOV EAX,dword ptr [EBX + 0x10c]     ; 0050a8aa
    PUSH EAX                            ; 0050a8b0
    MOV EDX,dword ptr [EBX + 0x108]     ; 0050a8b1
    PUSH EDX                            ; 0050a8b7
    PUSH EDI                            ; 0050a8b8
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340 ; 0050a8b9
        ;   XREF to: 0050e340 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340()
    ADD ESP,0x10                        ; 0050a8be
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0050a8c1
    PUSH EBX                            ; 0050a8c7
    CALL dword ptr [EAX + 0xc]          ; 0050a8c8
    ADD ESP,0x4                         ; 0050a8cb
    TEST EAX,EAX                        ; 0050a8ce
    JZ 0x0050a960                       ; 0050a8d0
        ;   XREF to: 0050a960 (CONDITIONAL_JUMP)  ; LAB_0050a960
    OR byte ptr [EBX + 0x140],0x8       ; 0050a8d6
    PUSH 0x1                            ; 0050a8dd
        ;   Label: LAB_0050a8dd
    MOV ECX,dword ptr [0x005ae704]      ; 0050a8df | DAT_005ae704
    PUSH ECX                            ; 0050a8e5 | DAT_01b4d738
    XOR ESI,ESI                         ; 0050a8e6
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 0050a8e8
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050()
    MOV EAX,dword ptr [EDI + 0x15a8cc]  ; 0050a8ed
    ADD ESP,0x8                         ; 0050a8f3
    TEST EAX,EAX                        ; 0050a8f6
    JLE 0x0050a943                      ; 0050a8f8
        ;   XREF to: 0050a943 (CONDITIONAL_JUMP)  ; LAB_0050a943
    PUSH 0x0                            ; 0050a8fa
        ;   Label: LAB_0050a8fa
    PUSH ESI                            ; 0050a8fc
    PUSH EDI                            ; 0050a8fd
    CALL FUN_0050e080                   ; 0050a8fe
        ;   XREF to: 0050e080 (UNCONDITIONAL_CALL)  ; undefined FUN_0050e080()
    ADD ESP,0xc                         ; 0050a903
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0050a906
    PUSH EBX                            ; 0050a90c
    CALL dword ptr [EAX + 0xc]          ; 0050a90d
    ADD ESP,0x4                         ; 0050a910
    TEST EAX,EAX                        ; 0050a913
    JZ 0x0050a91e                       ; 0050a915
        ;   XREF to: 0050a91e (CONDITIONAL_JUMP)  ; LAB_0050a91e
    OR byte ptr [EBX + 0x140],0x8       ; 0050a917
    PUSH 0x1                            ; 0050a91e
        ;   Label: LAB_0050a91e
    MOV EDX,dword ptr [0x005ae704]      ; 0050a920 | DAT_005ae704
    PUSH EDX                            ; 0050a926 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 0050a927
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050()
    ADD ESP,0x8                         ; 0050a92c
    PUSH EDI                            ; 0050a92f
    INC ESI                             ; 0050a930
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190 ; 0050a931
        ;   XREF to: 0050e190 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190()
    MOV ECX,dword ptr [EDI + 0x15a8cc]  ; 0050a936
    ADD ESP,0x4                         ; 0050a93c
    CMP ESI,ECX                         ; 0050a93f
    JL 0x0050a8fa                       ; 0050a941
        ;   XREF to: 0050a8fa (CONDITIONAL_JUMP)  ; LAB_0050a8fa
    PUSH 0x10000                        ; 0050a943
        ;   Label: LAB_0050a943
    PUSH 0x10000                        ; 0050a948
    PUSH 0x10000                        ; 0050a94d
    PUSH EDI                            ; 0050a952
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340 ; 0050a953
        ;   XREF to: 0050e340 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340()
    ADD ESP,0x10                        ; 0050a958
    JMP 0x0050a81d                      ; 0050a95b
        ;   XREF to: 0050a81d (UNCONDITIONAL_JUMP)  ; LAB_0050a81d
    AND byte ptr [EBX + 0x140],0xf7     ; 0050a960
        ;   Label: LAB_0050a960
    JMP 0x0050a8dd                      ; 0050a967
        ;   XREF to: 0050a8dd (UNCONDITIONAL_JUMP)  ; LAB_0050a8dd


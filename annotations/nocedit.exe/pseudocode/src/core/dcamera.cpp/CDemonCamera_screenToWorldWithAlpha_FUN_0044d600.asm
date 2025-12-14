; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0044d600(CDemonCamera * this_ptr, CVector3i * output_ptr, CVector3i * input_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   output_ptr
; CVector3i *      Stack[0xc]:4   input_ptr
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d600
        ;   Label: core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0044d600
    PUSH EDI                            ; 0044d601
    PUSH EBP                            ; 0044d602
    SUB ESP,0x1c                        ; 0044d603
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0044d606
    MOV ECX,dword ptr [ESP + 0x30]      ; 0044d60a
    MOV dword ptr [ESP + 0x18],ESI      ; 0044d60e
    MOV EAX,dword ptr [ECX + 0x8]       ; 0044d612
    MOV dword ptr [ESP + 0x8],EAX       ; 0044d615
    MOV EAX,dword ptr [ECX]             ; 0044d619
    MOV dword ptr [ESP],EAX             ; 0044d61b
    MOV EDX,dword ptr [0x006703ec]      ; 0044d61e | g_CDemonRendererPtr
    MOV EAX,dword ptr [ECX + 0x4]       ; 0044d624
    PUSH EDX                            ; 0044d627 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x8],EAX       ; 0044d628
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00 ; 0044d62c
        ;   XREF to: 0048ce00 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(CDemonRenderer * this_ptr)
    MOV EBX,EAX                         ; 0044d631
    ADD ESP,0x4                         ; 0044d633
    TEST EAX,EAX                        ; 0044d636
    JNZ 0x0044d6f0                      ; 0044d638
        ;   XREF to: 0044d6f0 (CONDITIONAL_JUMP)  ; LAB_0044d6f0
    MOV ESI,ESP                         ; 0044d63e
    LEA EDI,[EBP + 0x19c]               ; 0044d640
    MOV EAX,dword ptr [ESI]             ; 0044d646
    IMUL dword ptr [EDI]                ; 0044d648
    MOV EBX,EAX                         ; 0044d64a
    MOV ECX,EDX                         ; 0044d64c
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044d64e
    IMUL dword ptr [EDI + 0xc]          ; 0044d651
    ADD EBX,EAX                         ; 0044d654
    ADC ECX,EDX                         ; 0044d656
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044d658
    IMUL dword ptr [EDI + 0x18]         ; 0044d65b
    ADD EAX,EBX                         ; 0044d65e
    ADC EDX,ECX                         ; 0044d660
    SHRD EAX,EDX,0x10                   ; 0044d662
    MOV ECX,dword ptr [EBP + 0x16c]     ; 0044d666
    MOV ESI,ESP                         ; 0044d66c
    ADD ECX,EAX                         ; 0044d66e
    LEA EDI,[EBP + 0x1a0]               ; 0044d670
    MOV dword ptr [ESP + 0xc],ECX       ; 0044d676
    MOV EAX,dword ptr [ESI]             ; 0044d67a
    IMUL dword ptr [EDI]                ; 0044d67c
    MOV EBX,EAX                         ; 0044d67e
    MOV ECX,EDX                         ; 0044d680
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044d682
    IMUL dword ptr [EDI + 0xc]          ; 0044d685
    ADD EBX,EAX                         ; 0044d688
    ADC ECX,EDX                         ; 0044d68a
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044d68c
    IMUL dword ptr [EDI + 0x18]         ; 0044d68f
    ADD EAX,EBX                         ; 0044d692
    ADC EDX,ECX                         ; 0044d694
    SHRD EAX,EDX,0x10                   ; 0044d696
    MOV ECX,dword ptr [EBP + 0x170]     ; 0044d69a
    MOV ESI,ESP                         ; 0044d6a0
    ADD ECX,EAX                         ; 0044d6a2
    LEA EDI,[EBP + 0x1a4]               ; 0044d6a4
    MOV dword ptr [ESP + 0x10],ECX      ; 0044d6aa
    MOV EAX,dword ptr [ESI]             ; 0044d6ae
    IMUL dword ptr [EDI]                ; 0044d6b0
    MOV EBX,EAX                         ; 0044d6b2
    MOV ECX,EDX                         ; 0044d6b4
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044d6b6
    IMUL dword ptr [EDI + 0xc]          ; 0044d6b9
    ADD EBX,EAX                         ; 0044d6bc
    ADC ECX,EDX                         ; 0044d6be
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044d6c0
    IMUL dword ptr [EDI + 0x18]         ; 0044d6c3
    ADD EAX,EBX                         ; 0044d6c6
    ADC EDX,ECX                         ; 0044d6c8
    SHRD EAX,EDX,0x10                   ; 0044d6ca
    MOV ECX,dword ptr [EBP + 0x174]     ; 0044d6ce
    ADD ECX,EAX                         ; 0044d6d4
        ;   Label: LAB_0044d6d4
    MOV dword ptr [ESP + 0x14],ECX      ; 0044d6d6
    MOV EDI,dword ptr [ESP + 0x18]      ; 0044d6da
    LEA ESI,[ESP + 0xc]                 ; 0044d6de
    MOVSD ES:EDI,ESI                    ; 0044d6e2
    MOVSD ES:EDI,ESI                    ; 0044d6e3
    MOVSD ES:EDI,ESI                    ; 0044d6e4
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044d6e5
    ADD ESP,0x1c                        ; 0044d6e9
    POP EBP                             ; 0044d6ec
    POP EDI                             ; 0044d6ed
    POP EBX                             ; 0044d6ee
    RET                                 ; 0044d6ef
    LEA ECX,[EAX*0x4 + 0x0]             ; 0044d6f0
        ;   Label: LAB_0044d6f0
    ADD ECX,EBP                         ; 0044d6f7
    MOV EDX,dword ptr [ESP]             ; 0044d6f9
    MOV EAX,dword ptr [ECX + 0x136c]    ; 0044d6fc
    IMUL EDX                            ; 0044d702
    SHRD EAX,EDX,0x10                   ; 0044d704
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044d708
    MOV ESI,EAX                         ; 0044d70c
    MOV EAX,dword ptr [ECX + 0x13cc]    ; 0044d70e
    IMUL EDX                            ; 0044d714
    SHRD EAX,EDX,0x10                   ; 0044d716
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044d71a
    ADD ESI,EAX                         ; 0044d71e
    MOV EAX,dword ptr [ECX + 0x142c]    ; 0044d720
    IMUL EDX                            ; 0044d726
    SHRD EAX,EDX,0x10                   ; 0044d728
    ADD ESI,EAX                         ; 0044d72c
    MOV EAX,EBX                         ; 0044d72e
    SHL EAX,0x2                         ; 0044d730
    SUB EAX,EBX                         ; 0044d733
    SHL EAX,0x2                         ; 0044d735
    ADD EBP,EAX                         ; 0044d738
    MOV EAX,dword ptr [EBP + 0x11ec]    ; 0044d73a
    ADD EAX,ESI                         ; 0044d740
    MOV EDX,dword ptr [ESP]             ; 0044d742
    MOV dword ptr [ESP + 0xc],EAX       ; 0044d745
    MOV EAX,dword ptr [ECX + 0x138c]    ; 0044d749
    IMUL EDX                            ; 0044d74f
    SHRD EAX,EDX,0x10                   ; 0044d751
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044d755
    MOV EBX,EAX                         ; 0044d759
    MOV EAX,dword ptr [ECX + 0x13ec]    ; 0044d75b
    IMUL EDX                            ; 0044d761
    SHRD EAX,EDX,0x10                   ; 0044d763
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044d767
    ADD EBX,EAX                         ; 0044d76b
    MOV EAX,dword ptr [ECX + 0x144c]    ; 0044d76d
    IMUL EDX                            ; 0044d773
    SHRD EAX,EDX,0x10                   ; 0044d775
    ADD EAX,EBX                         ; 0044d779
    MOV EBX,dword ptr [EBP + 0x11f0]    ; 0044d77b
    MOV EDX,dword ptr [ESP]             ; 0044d781
    ADD EBX,EAX                         ; 0044d784
    MOV EAX,dword ptr [ECX + 0x13ac]    ; 0044d786
    MOV dword ptr [ESP + 0x10],EBX      ; 0044d78c
    IMUL EDX                            ; 0044d790
    SHRD EAX,EDX,0x10                   ; 0044d792
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044d796
    MOV EBX,EAX                         ; 0044d79a
    MOV EAX,dword ptr [ECX + 0x140c]    ; 0044d79c
    IMUL EDX                            ; 0044d7a2
    SHRD EAX,EDX,0x10                   ; 0044d7a4
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044d7a8
    ADD EBX,EAX                         ; 0044d7ac
    MOV EAX,dword ptr [ECX + 0x146c]    ; 0044d7ae
    IMUL EDX                            ; 0044d7b4
    SHRD EAX,EDX,0x10                   ; 0044d7b6
    MOV ECX,dword ptr [EBP + 0x11f4]    ; 0044d7ba
    ADD EAX,EBX                         ; 0044d7c0
    JMP 0x0044d6d4                      ; 0044d7c2
        ;   XREF to: 0044d6d4 (UNCONDITIONAL_JUMP)  ; LAB_0044d6d4


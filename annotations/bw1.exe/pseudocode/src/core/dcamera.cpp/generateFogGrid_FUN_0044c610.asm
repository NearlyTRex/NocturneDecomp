; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_generateFogGrid_FUN_0044c610(SFogGrid *fog)
;
; Parameters:
; SFogGrid *       Stack[0x4]:4   fog
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_generateFogGrid_FUN_00453600 at 00453605
;
; Called Functions:
;   core_dcamera.cpp_resetFogSamplingOffset_FUN_0044c5e0
;   crt_memory.c_memset_FUN_005bfb70
;   crt_stdlib.c_rand_FUN_005c084c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044c610
        ;   Label: core_dcamera.cpp_generateFogGrid_FUN_0044c610
    PUSH ESI                            ; 0044c611
    PUSH EDI                            ; 0044c612
    PUSH EBP                            ; 0044c613
    SUB ESP,0x3c                        ; 0044c614
    PUSH 0x1000                         ; 0044c617
    PUSH 0x0                            ; 0044c61c
    MOV EDX,dword ptr [ESP + 0x58]      ; 0044c61e
    PUSH EDX                            ; 0044c622
    XOR EBP,EBP                         ; 0044c623
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0044c625
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0044c62a
    MOV ECX,0x1000                      ; 0044c62d
    MOV EAX,dword ptr [ESP + 0x50]      ; 0044c632
    MOV dword ptr [ESP + 0x10],ECX      ; 0044c636
    MOV dword ptr [ESP + 0x14],EAX      ; 0044c63a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0044c63e
        ;   Label: LAB_0044c63e
    XOR EDI,EDI                         ; 0044c642
    MOV dword ptr [ESP + 0x18],EAX      ; 0044c644
    MOV EAX,EDI                         ; 0044c648
        ;   Label: LAB_0044c648
    SHL EAX,0x4                         ; 0044c64a
    MOV ESI,dword ptr [ESP + 0x50]      ; 0044c64d
    LEA EBX,[EAX + EBP*0x1]             ; 0044c651
    MOV EDX,dword ptr [ESP + 0x18]      ; 0044c654
    ADD EBX,ESI                         ; 0044c658
    ADD EAX,EDX                         ; 0044c65a
    MOV ESI,dword ptr [ESP + 0x14]      ; 0044c65c
    ADD ESI,EAX                         ; 0044c660
    ADD EBX,0x100                       ; 0044c662
        ;   Label: LAB_0044c662
    CALL crt_stdlib.c_rand_FUN_005c084c ; 0044c668
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    MOV byte ptr [EBX + 0xffffff00],AL  ; 0044c66d
    CMP EBX,ESI                         ; 0044c673
    JNZ 0x0044c662                      ; 0044c675
        ;   XREF to: 0044c662 (CONDITIONAL_JUMP)  ; LAB_0044c662
    INC EDI                             ; 0044c677
    CMP EDI,0x10                        ; 0044c678
    JL 0x0044c648                       ; 0044c67b
        ;   XREF to: 0044c648 (CONDITIONAL_JUMP)  ; LAB_0044c648
    MOV ECX,dword ptr [ESP + 0x10]      ; 0044c67d
    INC ECX                             ; 0044c681
    INC EBP                             ; 0044c682
    MOV dword ptr [ESP + 0x10],ECX      ; 0044c683
    CMP EBP,0x10                        ; 0044c687
    JL 0x0044c63e                       ; 0044c68a
        ;   XREF to: 0044c63e (CONDITIONAL_JUMP)  ; LAB_0044c63e
    XOR EBX,ESI                         ; 0044c68c
    MOV ESI,0xffffffff                  ; 0044c68e
    MOV dword ptr [ESP + 0x38],EBX      ; 0044c693
    MOV dword ptr [ESP + 0x1c],ESI      ; 0044c697
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0044c69b
        ;   Label: LAB_0044c69b
    MOV EBP,0xffffffff                  ; 0044c69f
    AND EAX,0xf                         ; 0044c6a4
    XOR EDI,EDI                         ; 0044c6a7
    MOV dword ptr [ESP + 0x20],EAX      ; 0044c6a9
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044c6ad
    MOV dword ptr [ESP + 0x28],EBP      ; 0044c6b1
    INC EAX                             ; 0044c6b5
    MOV dword ptr [ESP + 0x30],EDI      ; 0044c6b6
    AND EAX,0xf                         ; 0044c6ba
    MOV dword ptr [ESP + 0x2c],EDI      ; 0044c6bd
    MOV dword ptr [ESP + 0x24],EAX      ; 0044c6c1
    MOV EAX,dword ptr [ESP + 0x30]      ; 0044c6c5
        ;   Label: LAB_0044c6c5
    MOV ECX,dword ptr [ESP + 0x28]      ; 0044c6c9
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0044c6cd
    MOV EDX,dword ptr [ESP + 0x30]      ; 0044c6d1
    MOV EDI,dword ptr [ESP + 0x50]      ; 0044c6d5
    MOV EBP,dword ptr [ESP + 0x20]      ; 0044c6d9
    XOR ESI,ESI                         ; 0044c6dd
    MOV dword ptr [ESP + 0x34],EAX      ; 0044c6df
    AND ECX,0xf                         ; 0044c6e3
    INC EBX                             ; 0044c6e6
    MOV EAX,dword ptr [ESP + 0x24]      ; 0044c6e7
    ADD EBP,EDX                         ; 0044c6eb
    ADD EAX,EDX                         ; 0044c6ed
    AND EBX,0xf                         ; 0044c6ef
    ADD EAX,EDI                         ; 0044c6f2
    SHL EBX,0x4                         ; 0044c6f4
    MOV dword ptr [ESP + 0xc],EAX       ; 0044c6f7
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044c6fb
    SHL ECX,0x4                         ; 0044c6ff
    ADD EAX,EBX                         ; 0044c702
    ADD EBP,EDI                         ; 0044c704
    ADD EAX,EDI                         ; 0044c706
    MOV EBX,dword ptr [ESP + 0x38]      ; 0044c708
    MOV dword ptr [ESP],EAX             ; 0044c70c
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044c70f
    ADD EBX,EDX                         ; 0044c713
    ADD EAX,ECX                         ; 0044c715
    ADD EBX,EDI                         ; 0044c717
    ADD EAX,EDI                         ; 0044c719
    MOV EDI,0xffffffff                  ; 0044c71b
    MOV dword ptr [ESP + 0x4],EAX       ; 0044c720
    MOV ECX,EDI                         ; 0044c724
        ;   Label: LAB_0044c724
    AND ECX,0xf                         ; 0044c726
    MOV EAX,dword ptr [ESP + 0x50]      ; 0044c729
    SHL ECX,0x8                         ; 0044c72d
    MOV EDX,dword ptr [ESP + 0x34]      ; 0044c730
    ADD ECX,EAX                         ; 0044c734
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044c736
    ADD ECX,EDX                         ; 0044c73a
    ADD ECX,EAX                         ; 0044c73c
    XOR EAX,EAX                         ; 0044c73e
    MOV AL,byte ptr [ECX]               ; 0044c740
    XOR ECX,ECX                         ; 0044c742
    MOV CL,byte ptr [EBX]               ; 0044c744
    ADD ECX,EAX                         ; 0044c746
    INC ESI                             ; 0044c748
    MOV dword ptr [ESP + 0x8],ECX       ; 0044c749
    MOV ECX,ESI                         ; 0044c74d
    AND ECX,0xf                         ; 0044c74f
    MOV EDX,dword ptr [ESP + 0x50]      ; 0044c752
    SHL ECX,0x8                         ; 0044c756
    MOV EAX,dword ptr [ESP + 0x34]      ; 0044c759
    ADD ECX,EDX                         ; 0044c75d
    ADD ECX,EAX                         ; 0044c75f
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044c761
    MOV AL,byte ptr [ECX + EAX*0x1]     ; 0044c765
    MOV ECX,dword ptr [ESP + 0x8]       ; 0044c768
    AND EAX,0xff                        ; 0044c76c
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044c771
    ADD ECX,EAX                         ; 0044c775
    XOR EAX,EAX                         ; 0044c777
    MOV AL,byte ptr [EDX]               ; 0044c779
    MOV EDX,dword ptr [ESP]             ; 0044c77b
    ADD ECX,EAX                         ; 0044c77e
    XOR EAX,EAX                         ; 0044c780
    MOV AL,byte ptr [EDX]               ; 0044c782
    ADD EAX,ECX                         ; 0044c784
    XOR ECX,ECX                         ; 0044c786
    MOV CL,byte ptr [EBP]               ; 0044c788
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044c78b
    ADD ECX,EAX                         ; 0044c78f
    XOR EAX,EAX                         ; 0044c791
    MOV AL,byte ptr [EDX]               ; 0044c793
    XOR EDX,EDX                         ; 0044c795
    ADD EAX,ECX                         ; 0044c797
    MOV ECX,0x7                         ; 0044c799
    DIV ECX                             ; 0044c79e
    ADD EBP,0x100                       ; 0044c7a0
    ADD EBX,0x100                       ; 0044c7a6
    INC EDI                             ; 0044c7ac
    MOV ECX,dword ptr [ESP + 0xc]       ; 0044c7ad
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044c7b1
    MOV byte ptr [EBX + 0xffffff00],AL  ; 0044c7b5
    MOV EAX,dword ptr [ESP]             ; 0044c7bb
    ADD ECX,0x100                       ; 0044c7be
    ADD EDX,0x100                       ; 0044c7c4
    MOV dword ptr [ESP + 0xc],ECX       ; 0044c7ca
    ADD EAX,0x100                       ; 0044c7ce
    MOV dword ptr [ESP + 0x4],EDX       ; 0044c7d3
    MOV dword ptr [ESP],EAX             ; 0044c7d7
    CMP ESI,0x10                        ; 0044c7da
    JL 0x0044c724                       ; 0044c7dd
        ;   XREF to: 0044c724 (CONDITIONAL_JUMP)  ; LAB_0044c724
    MOV EBX,dword ptr [ESP + 0x30]      ; 0044c7e3
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0044c7e7
    MOV ECX,dword ptr [ESP + 0x28]      ; 0044c7eb
    ADD EBX,0x10                        ; 0044c7ef
    INC ESI                             ; 0044c7f2
    INC ECX                             ; 0044c7f3
    MOV dword ptr [ESP + 0x30],EBX      ; 0044c7f4
    MOV dword ptr [ESP + 0x2c],ESI      ; 0044c7f8
    MOV dword ptr [ESP + 0x28],ECX      ; 0044c7fc
    CMP ESI,0x10                        ; 0044c800
    JL 0x0044c6c5                       ; 0044c803
        ;   XREF to: 0044c6c5 (CONDITIONAL_JUMP)  ; LAB_0044c6c5
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044c809
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0044c80d
    INC EAX                             ; 0044c811
    INC EBP                             ; 0044c812
    MOV dword ptr [ESP + 0x38],EAX      ; 0044c813
    MOV dword ptr [ESP + 0x1c],EBP      ; 0044c817
    CMP EAX,0x10                        ; 0044c81b
    JL 0x0044c69b                       ; 0044c81e
        ;   XREF to: 0044c69b (CONDITIONAL_JUMP)  ; LAB_0044c69b
    MOV ECX,dword ptr [ESP + 0x50]      ; 0044c824
    PUSH ECX                            ; 0044c828
    CALL core_dcamera.cpp_resetFogSamplingOffset_FUN_0044c5e0 ; 0044c829
        ;   XREF to: 0044c5e0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_resetFogSamplingOffset_FUN_0044c5e0(SFogGrid * fog)
    ADD ESP,0x4                         ; 0044c82e
    ADD ESP,0x3c                        ; 0044c831
    POP EBP                             ; 0044c834
    POP EDI                             ; 0044c835
    POP ESI                             ; 0044c836
    POP EBX                             ; 0044c837
    RET                                 ; 0044c838


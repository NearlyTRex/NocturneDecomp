; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_00440710(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; Local Variables:
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
;   core_set.cpp_FUN_00509a80 at 00509ade
;
; Referenced Globals:
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_0140e7a4
;   undefined4 DAT_01bd4260
;   undefined4 DAT_01c02594
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_00440610
;   core_dstrender.cpp_memcpyMMX_FUN_00465341
;   engine_special.cpp_restoreZBuffer_FUN_00532c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440710
        ;   Label: core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_00440710
    PUSH ESI                            ; 00440711
    PUSH EDI                            ; 00440712
    PUSH EBP                            ; 00440713
    SUB ESP,0x2c                        ; 00440714
    MOV EDI,dword ptr [ESP + 0x40]      ; 00440717
    MOV EDX,dword ptr [0x01c02594]      ; 0044071b | DAT_01c02594
    TEST EDX,EDX                        ; 00440721
    JNZ 0x00440964                      ; 00440723
        ;   XREF to: 00440964 (CONDITIONAL_JUMP)  ; LAB_00440964
    MOV ECX,dword ptr [EDI + 0x1d0]     ; 00440729
    CMP ECX,0x100                       ; 0044072f
    JG 0x00440988                       ; 00440735
        ;   XREF to: 00440988 (CONDITIONAL_JUMP)  ; LAB_00440988
    XOR EBX,EBX                         ; 0044073b
    TEST ECX,ECX                        ; 0044073d
    JLE 0x004407a7                      ; 0044073f
        ;   XREF to: 004407a7 (CONDITIONAL_JUMP)  ; LAB_004407a7
    LEA EDX,[EDI + 0x1d4]               ; 00440741
    MOV ECX,dword ptr [EDX]             ; 00440747
        ;   Label: LAB_00440747
    MOV ESI,dword ptr [EDI + 0x144]     ; 00440749
    MOV EAX,EDX                         ; 0044074f
    CMP ECX,ESI                         ; 00440751
    JL 0x004409b9                       ; 00440753
        ;   XREF to: 004409b9 (CONDITIONAL_JUMP)  ; LAB_004409b9
    MOV EBP,dword ptr [EDI + 0x13c]     ; 00440759
        ;   Label: LAB_00440759
    MOV ECX,dword ptr [EDI + 0x144]     ; 0044075f
    MOV ESI,dword ptr [EAX + 0x4]       ; 00440765
    ADD ECX,EBP                         ; 00440768
    CMP ECX,ESI                         ; 0044076a
    JG 0x00440772                       ; 0044076c
        ;   XREF to: 00440772 (CONDITIONAL_JUMP)  ; LAB_00440772
    DEC ECX                             ; 0044076e
    MOV dword ptr [EAX + 0x4],ECX       ; 0044076f
    MOV EBP,dword ptr [EDI + 0x148]     ; 00440772
        ;   Label: LAB_00440772
    CMP EBP,dword ptr [EAX + 0x8]       ; 00440778
    JLE 0x00440780                      ; 0044077b
        ;   XREF to: 00440780 (CONDITIONAL_JUMP)  ; LAB_00440780
    MOV dword ptr [EAX + 0x8],EBP       ; 0044077d
    MOV ESI,dword ptr [EDI + 0x140]     ; 00440780
        ;   Label: LAB_00440780
    MOV ECX,dword ptr [EDI + 0x148]     ; 00440786
    MOV EBP,dword ptr [EAX + 0xc]       ; 0044078c
    ADD ECX,ESI                         ; 0044078f
    CMP ECX,EBP                         ; 00440791
    JG 0x00440799                       ; 00440793
        ;   XREF to: 00440799 (CONDITIONAL_JUMP)  ; LAB_00440799
    DEC ECX                             ; 00440795
    MOV dword ptr [EAX + 0xc],ECX       ; 00440796
    INC EBX                             ; 00440799
        ;   Label: LAB_00440799
    MOV ECX,dword ptr [EDI + 0x1d0]     ; 0044079a
    ADD EDX,0x10                        ; 004407a0
    CMP EBX,ECX                         ; 004407a3
    JL 0x00440747                       ; 004407a5
        ;   XREF to: 00440747 (CONDITIONAL_JUMP)  ; LAB_00440747
    MOV EBP,dword ptr [EDI + 0x1d0]     ; 004407a7
        ;   Label: LAB_004407a7
    MOV EBX,dword ptr [EDI + 0x140]     ; 004407ad
    XOR ESI,ESI                         ; 004407b3
    XOR ECX,ECX                         ; 004407b5
    MOV dword ptr [ESP + 0x18],ESI      ; 004407b7
    TEST EBP,EBP                        ; 004407bb
    JLE 0x004407ed                      ; 004407bd
        ;   XREF to: 004407ed (CONDITIONAL_JUMP)  ; LAB_004407ed
    LEA EAX,[EDI + 0x1d4]               ; 004407bf
    MOV ESI,dword ptr [EAX + 0x8]       ; 004407c5
        ;   Label: LAB_004407c5
    MOV EDX,EAX                         ; 004407c8
    CMP EBX,ESI                         ; 004407ca
    JLE 0x004407d0                      ; 004407cc
        ;   XREF to: 004407d0 (CONDITIONAL_JUMP)  ; LAB_004407d0
    MOV EBX,ESI                         ; 004407ce
    MOV EBP,dword ptr [ESP + 0x18]      ; 004407d0
        ;   Label: LAB_004407d0
    MOV ESI,dword ptr [EDX + 0xc]       ; 004407d4
    CMP ESI,EBP                         ; 004407d7
    JLE 0x004407df                      ; 004407d9
        ;   XREF to: 004407df (CONDITIONAL_JUMP)  ; LAB_004407df
    MOV dword ptr [ESP + 0x18],ESI      ; 004407db
    INC ECX                             ; 004407df
        ;   Label: LAB_004407df
    MOV EDX,dword ptr [EDI + 0x1d0]     ; 004407e0
    ADD EAX,0x10                        ; 004407e6
    CMP ECX,EDX                         ; 004407e9
    JL 0x004407c5                       ; 004407eb
        ;   XREF to: 004407c5 (CONDITIONAL_JUMP)  ; LAB_004407c5
    MOV ECX,dword ptr [ESP + 0x18]      ; 004407ed
        ;   Label: LAB_004407ed
    MOV dword ptr [ESP + 0x24],EBX      ; 004407f1
    CMP EBX,ECX                         ; 004407f5
    JG 0x0044095c                       ; 004407f7
        ;   XREF to: 0044095c (CONDITIONAL_JUMP)  ; LAB_0044095c
    SHL EBX,0x2                         ; 004407fd
    LEA EAX,[EDI + 0x1d4]               ; 00440800
    MOV dword ptr [ESP + 0x14],EBX      ; 00440806
    MOV dword ptr [ESP + 0x10],EAX      ; 0044080a
    XOR EBX,EBX                         ; 0044080e
        ;   Label: LAB_0044080e
    MOV EBP,dword ptr [EDI + 0x1d0]     ; 00440810
    MOV dword ptr [ESP + 0x20],EBX      ; 00440816
    MOV dword ptr [0x0140e7a4],EBX      ; 0044081a | DAT_0140e7a4
    TEST EBP,EBP                        ; 00440820
    JLE 0x004408b0                      ; 00440822
        ;   XREF to: 004408b0 (CONDITIONAL_JUMP)  ; LAB_004408b0
    MOV EBP,dword ptr [ESP + 0x10]      ; 00440828
    MOV dword ptr [ESP + 0x28],EBX      ; 0044082c
    MOV EAX,dword ptr [ESP + 0x24]      ; 00440830
        ;   Label: LAB_00440830
    MOV ESI,dword ptr [EBP + 0x8]       ; 00440834
    MOV EDX,EBP                         ; 00440837
    CMP EAX,ESI                         ; 00440839
    JL 0x0044089a                       ; 0044083b
        ;   XREF to: 0044089a (CONDITIONAL_JUMP)  ; LAB_0044089a
    CMP EAX,dword ptr [EBP + 0xc]       ; 0044083d
    JG 0x0044089a                       ; 00440840
        ;   XREF to: 0044089a (CONDITIONAL_JUMP)  ; LAB_0044089a
    MOV EBX,dword ptr [0x0140e7a4]      ; 00440842 | DAT_0140e7a4
    XOR ECX,ECX                         ; 00440848
    TEST EBX,EBX                        ; 0044084a
    JLE 0x0044086d                      ; 0044084c
        ;   XREF to: 0044086d (CONDITIONAL_JUMP)  ; LAB_0044086d
    LEA ESI,[EBX*0x4 + 0x0]             ; 0044084e
    XOR EAX,EAX                         ; 00440855
    MOV EBX,dword ptr [EDX + 0x4]       ; 00440857
        ;   Label: LAB_00440857
    CMP EBX,dword ptr [EAX + 0x140e7a8] ; 0044085a
    JGE 0x004409c0                      ; 00440860
        ;   XREF to: 004409c0 (CONDITIONAL_JUMP)  ; LAB_004409c0
    ADD EAX,0x4                         ; 00440866
        ;   Label: LAB_00440866
    CMP EAX,ESI                         ; 00440869
    JL 0x00440857                       ; 0044086b
        ;   XREF to: 00440857 (CONDITIONAL_JUMP)  ; LAB_00440857
    TEST ECX,ECX                        ; 0044086d
        ;   Label: LAB_0044086d
    JNZ 0x0044089a                      ; 0044086f
        ;   XREF to: 0044089a (CONDITIONAL_JUMP)  ; LAB_0044089a
    MOV ECX,dword ptr [ESP + 0x28]      ; 00440871
    MOV EAX,dword ptr [EDX]             ; 00440875
    MOV dword ptr [ECX + 0x140e7a8],EAX ; 00440877
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044087d
    LEA EDX,[ECX + 0x4]                 ; 00440880
    MOV dword ptr [ECX + 0x140eba8],EAX ; 00440883
    MOV ECX,dword ptr [0x0140e7a4]      ; 00440889 | DAT_0140e7a4
    INC ECX                             ; 0044088f
    MOV dword ptr [ESP + 0x28],EDX      ; 00440890
    MOV dword ptr [0x0140e7a4],ECX      ; 00440894 | DAT_0140e7a4
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044089a
        ;   Label: LAB_0044089a
    ADD EBP,0x10                        ; 0044089e
    INC EAX                             ; 004408a1
    MOV EDX,dword ptr [EDI + 0x1d0]     ; 004408a2
    MOV dword ptr [ESP + 0x20],EAX      ; 004408a8
    CMP EAX,EDX                         ; 004408ac
    JL 0x00440830                       ; 004408ae
        ;   XREF to: 00440830 (CONDITIONAL_JUMP)  ; LAB_00440830
    MOV ECX,dword ptr [0x0140e7a4]      ; 004408b0 | DAT_0140e7a4
        ;   Label: LAB_004408b0
    XOR EBP,EBP                         ; 004408b6
    TEST ECX,ECX                        ; 004408b8
    JLE 0x0044093c                      ; 004408ba
        ;   XREF to: 0044093c (CONDITIONAL_JUMP)  ; LAB_0044093c
    MOV EAX,dword ptr [ESP + 0x14]      ; 004408c0
    XOR ESI,ESI                         ; 004408c4
    MOV dword ptr [ESP + 0x1c],EAX      ; 004408c6
    MOV EAX,dword ptr [ESI + 0x140e7a8] ; 004408ca
        ;   Label: LAB_004408ca
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004408d0
    SHL EAX,0x2                         ; 004408d4
    MOV EDX,dword ptr [EDX + 0x1bd4260] ; 004408d7 | DAT_01bd4260
    LEA ECX,[EDX + EAX*0x1]             ; 004408dd
    MOV EAX,dword ptr [ESP + 0x24]      ; 004408e0
    MOV EDX,dword ptr [EDI + 0x148]     ; 004408e4
    MOV EBX,dword ptr [EDI + 0x13c]     ; 004408ea
    SUB EAX,EDX                         ; 004408f0
    IMUL EAX,EBX                        ; 004408f2
    MOV EDX,dword ptr [ESI + 0x140e7a8] ; 004408f5
    MOV EBX,dword ptr [EDI + 0x144]     ; 004408fb
    ADD EAX,EDX                         ; 00440901
    SUB EAX,EBX                         ; 00440903
    MOV EDX,dword ptr [EDI + 0x15c]     ; 00440905
    SHL EAX,0x2                         ; 0044090b
    MOV EBX,dword ptr [ESI + 0x140e7a8] ; 0044090e
    ADD EDX,EAX                         ; 00440914
    MOV EAX,dword ptr [ESI + 0x140eba8] ; 00440916
    SUB EAX,EBX                         ; 0044091c
    SHL EAX,0x2                         ; 0044091e
    ADD EAX,0x4                         ; 00440921
    PUSH EAX                            ; 00440924
    PUSH EDX                            ; 00440925
    PUSH ECX                            ; 00440926
    ADD ESI,0x4                         ; 00440927
    INC EBP                             ; 0044092a
    CALL core_dstrender.cpp_memcpyMMX_FUN_00465341 ; 0044092b
        ;   XREF to: 00465341 (UNCONDITIONAL_CALL)  ; undefined core_dstrender.cpp_memcpyMMX_FUN_00465341()
    MOV EAX,[0x0140e7a4]                ; 00440930 | DAT_0140e7a4
    ADD ESP,0xc                         ; 00440935
    CMP EBP,EAX                         ; 00440938
    JL 0x004408ca                       ; 0044093a
        ;   XREF to: 004408ca (CONDITIONAL_JUMP)  ; LAB_004408ca
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044093c
        ;   Label: LAB_0044093c
    MOV EDX,dword ptr [ESP + 0x24]      ; 00440940
    MOV ECX,dword ptr [ESP + 0x18]      ; 00440944
    ADD EAX,0x4                         ; 00440948
    INC EDX                             ; 0044094b
    MOV dword ptr [ESP + 0x14],EAX      ; 0044094c
    MOV dword ptr [ESP + 0x24],EDX      ; 00440950
    CMP EDX,ECX                         ; 00440954
    JLE 0x0044080e                      ; 00440956
        ;   XREF to: 0044080e (CONDITIONAL_JUMP)  ; LAB_0044080e
    ADD ESP,0x2c                        ; 0044095c
        ;   Label: LAB_0044095c
    POP EBP                             ; 0044095f
    POP EDI                             ; 00440960
    POP ESI                             ; 00440961
    POP EBX                             ; 00440962
    RET                                 ; 00440963
    MOV EAX,[0x005b7620]                ; 00440964 | DAT_005b7620
        ;   Label: LAB_00440964
    DEC EAX                             ; 00440969
    PUSH EAX                            ; 0044096a
    MOV EAX,[0x005b761c]                ; 0044096b | DAT_005b761c
    DEC EAX                             ; 00440970
    PUSH EAX                            ; 00440971
    PUSH 0x0                            ; 00440972
    PUSH 0x0                            ; 00440974
    PUSH 0x0                            ; 00440976
    CALL engine_special.cpp_restoreZBuffer_FUN_00532c90 ; 00440978
        ;   XREF to: 00532c90 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_restoreZBuffer_FUN_00532c90(int left, int top, int mode, int right, ...)
    ADD ESP,0x14                        ; 0044097d
    ADD ESP,0x2c                        ; 00440980
    POP EBP                             ; 00440983
    POP EDI                             ; 00440984
    POP ESI                             ; 00440985
    POP EBX                             ; 00440986
    RET                                 ; 00440987
    MOV dword ptr [ESP],EDX             ; 00440988
        ;   Label: LAB_00440988
    MOV dword ptr [ESP + 0x8],EDX       ; 0044098b
    MOV EAX,dword ptr [EDI + 0x13c]     ; 0044098f
    DEC EAX                             ; 00440995
    MOV dword ptr [ESP + 0x4],EAX       ; 00440996
    MOV EAX,dword ptr [EDI + 0x140]     ; 0044099a
    DEC EAX                             ; 004409a0
    MOV dword ptr [ESP + 0xc],EAX       ; 004409a1
    MOV EAX,ESP                         ; 004409a5
    PUSH EAX                            ; 004409a7
    PUSH EDI                            ; 004409a8
    CALL core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_00440610 ; 004409a9
        ;   XREF to: 00440610 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_00440610(CDemonCamera * this_ptr, CRect * rect_ptr)
    ADD ESP,0x8                         ; 004409ae
    ADD ESP,0x2c                        ; 004409b1
    POP EBP                             ; 004409b4
    POP EDI                             ; 004409b5
    POP ESI                             ; 004409b6
    POP EBX                             ; 004409b7
    RET                                 ; 004409b8
    MOV dword ptr [EDX],ESI             ; 004409b9
        ;   Label: LAB_004409b9
    JMP 0x00440759                      ; 004409bb
        ;   XREF to: 00440759 (UNCONDITIONAL_JUMP)  ; LAB_00440759
    MOV EBX,dword ptr [EDX]             ; 004409c0
        ;   Label: LAB_004409c0
    CMP EBX,dword ptr [EAX + 0x140eba8] ; 004409c2
    JG 0x00440866                       ; 004409c8
        ;   XREF to: 00440866 (CONDITIONAL_JUMP)  ; LAB_00440866
    CMP EBX,dword ptr [EAX + 0x140e7a8] ; 004409ce
    JL 0x004409e5                       ; 004409d4
        ;   XREF to: 004409e5 (CONDITIONAL_JUMP)  ; LAB_004409e5
    MOV EBX,dword ptr [EDX + 0x4]       ; 004409d6
    CMP EBX,dword ptr [EAX + 0x140eba8] ; 004409d9
    JLE 0x0044089a                      ; 004409df
        ;   XREF to: 0044089a (CONDITIONAL_JUMP)  ; LAB_0044089a
    MOV EBX,dword ptr [EDX]             ; 004409e5
        ;   Label: LAB_004409e5
    CMP EBX,dword ptr [EAX + 0x140e7a8] ; 004409e7
    JGE 0x004409fa                      ; 004409ed
        ;   XREF to: 004409fa (CONDITIONAL_JUMP)  ; LAB_004409fa
    MOV ECX,0x1                         ; 004409ef
    MOV dword ptr [EAX + 0x140e7a8],EBX ; 004409f4
    MOV EBX,dword ptr [EDX + 0x4]       ; 004409fa
        ;   Label: LAB_004409fa
    CMP EBX,dword ptr [EAX + 0x140eba8] ; 004409fd
    JLE 0x00440a10                      ; 00440a03
        ;   XREF to: 00440a10 (CONDITIONAL_JUMP)  ; LAB_00440a10
    MOV dword ptr [EAX + 0x140eba8],EBX ; 00440a05
    JMP 0x0044089a                      ; 00440a0b
        ;   XREF to: 0044089a (UNCONDITIONAL_JUMP)  ; LAB_0044089a
    TEST ECX,ECX                        ; 00440a10
        ;   Label: LAB_00440a10
    JNZ 0x0044086d                      ; 00440a12
        ;   XREF to: 0044086d (CONDITIONAL_JUMP)  ; LAB_0044086d
    JMP 0x00440866                      ; 00440a18
        ;   XREF to: 00440866 (UNCONDITIONAL_JUMP)  ; LAB_00440866


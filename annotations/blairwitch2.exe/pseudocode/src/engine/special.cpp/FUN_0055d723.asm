; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_FUN_0055d723(SProjectedVertex *output,CVector3i *input)
;
; Parameters:
; SProjectedVertex * Stack[0x4]:4   output
; CVector3i *      Stack[0x8]:4   input
;
; XREF[70]:
;   core_actor.cpp_FUN_00409af0 at 00409b7d
;   core_box.cpp_FUN_0041a840 at 0041a972
;   core_box.cpp_FUN_0041aa20 at 0041aa9a
;   core_box.cpp_FUN_0041ae50 at 0041aefd
;   core_bugs.cpp_FUN_0041f620 at 0041f6cf
;   core_charactr.cpp_FUN_00424c80 at 00424e69
;   core_charactr.cpp_FUN_004254b0 at 0042568c
;   core_charactr.cpp_FUN_0042b760 at 0042b891
;   core_cloth.cpp_FUN_005b0ce0 at 005b0dc6
;   core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00441720 at 0044189d
;   ... and 60 more
;
; Referenced Globals:
;   undefined4 DAT_0061c7d8
;   undefined4 DAT_0061c7dc
;   undefined4 DAT_0061c7e0
;   undefined4 DAT_0061c7e8
;   undefined4 DAT_0061c7ec
;   undefined4 DAT_0061c7f0
;   undefined4 DAT_01c35e38
;   undefined4 DAT_01c35e3c
;   undefined4 DAT_01c35e40
;   undefined4 DAT_01c35e44
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b6c
;   undefined4 DAT_01c38b70
;   undefined4 DAT_01c38b74
;   undefined4 DAT_01c38b9c
;   ... and 8 more
;
; *****************************************************************************

section .text

    TEST dword ptr [0x01c38b40],0xffffffff ; 0055d723 | DAT_01c38b40
        ;   Label: engine_special.cpp_FUN_0055d723
    JZ 0x0055d871                       ; 0055d72d
        ;   XREF to: 0055d871 (CONDITIONAL_JUMP)  ; LAB_0055d871
    MOV EBX,dword ptr [ESP + 0x8]       ; 0055d733
    MOV EAX,dword ptr [EBX]             ; 0055d737
    MOV ECX,dword ptr [EBX + 0x4]       ; 0055d739
    MOV EDX,dword ptr [EBX + 0x8]       ; 0055d73c
    SUB EAX,dword ptr [0x01c38b6c]      ; 0055d73f | DAT_01c38b6c
    SUB ECX,dword ptr [0x01c38b70]      ; 0055d745 | DAT_01c38b70
    SUB EDX,dword ptr [0x01c38b74]      ; 0055d74b | DAT_01c38b74
    MOVD MM0,EAX                        ; 0055d751
    MOVD MM1,ECX                        ; 0055d754
    MOVD MM2,EDX                        ; 0055d757
    IMUL dword ptr [0x01c38b9c]         ; 0055d75a | DAT_01c38b9c
    MOV EBX,EAX                         ; 0055d760
    MOV ECX,EDX                         ; 0055d762
    MOVD EAX,MM1                        ; 0055d764
    IMUL dword ptr [0x01c38ba8]         ; 0055d767 | DAT_01c38ba8
    ADD EBX,EAX                         ; 0055d76d
    ADC ECX,EDX                         ; 0055d76f
    MOVD EAX,MM2                        ; 0055d771
    IMUL dword ptr [0x01c38bb4]         ; 0055d774 | DAT_01c38bb4
    ADD EAX,EBX                         ; 0055d77a
    ADC EDX,ECX                         ; 0055d77c
    SHRD EAX,EDX,0x10                   ; 0055d77e
    MOVD MM4,EAX                        ; 0055d782
    MOVD EAX,MM0                        ; 0055d785
    IMUL dword ptr [0x01c38ba0]         ; 0055d788 | DAT_01c38ba0
    MOV EBX,EAX                         ; 0055d78e
    MOV ECX,EDX                         ; 0055d790
    MOVD EAX,MM1                        ; 0055d792
    IMUL dword ptr [0x01c38bac]         ; 0055d795 | DAT_01c38bac
    ADD EBX,EAX                         ; 0055d79b
    ADC ECX,EDX                         ; 0055d79d
    MOVD EAX,MM2                        ; 0055d79f
    IMUL dword ptr [0x01c38bb8]         ; 0055d7a2 | DAT_01c38bb8
    ADD EAX,EBX                         ; 0055d7a8
    ADC EDX,ECX                         ; 0055d7aa
    SHRD EAX,EDX,0x10                   ; 0055d7ac
    MOVD MM5,EAX                        ; 0055d7b0
    MOVD EAX,MM0                        ; 0055d7b3
    IMUL dword ptr [0x01c38ba4]         ; 0055d7b6 | DAT_01c38ba4
    MOV EBX,EAX                         ; 0055d7bc
    MOV ECX,EDX                         ; 0055d7be
    MOVD EAX,MM1                        ; 0055d7c0
    IMUL dword ptr [0x01c38bb0]         ; 0055d7c3 | DAT_01c38bb0
    ADD EBX,EAX                         ; 0055d7c9
    ADC ECX,EDX                         ; 0055d7cb
    MOVD EAX,MM2                        ; 0055d7cd
    IMUL dword ptr [0x01c38bbc]         ; 0055d7d0 | DAT_01c38bbc
    ADD EAX,EBX                         ; 0055d7d6
    ADC EDX,ECX                         ; 0055d7d8
    SHRD EAX,EDX,0x10                   ; 0055d7da
    MOVD MM6,EAX                        ; 0055d7de
    NEG EAX                             ; 0055d7e1
    MOV EDX,EAX                         ; 0055d7e3
    XOR EAX,EAX                         ; 0055d7e5
    MOVD EBX,MM4                        ; 0055d7e7
    MOVD ECX,MM6                        ; 0055d7ea
    CMP EBX,ECX                         ; 0055d7ed
    JLE 0x0055d7f6                      ; 0055d7ef
        ;   XREF to: 0055d7f6 (CONDITIONAL_JUMP)  ; LAB_0055d7f6
    OR EAX,0x80000001                   ; 0055d7f1
    CMP EBX,EDX                         ; 0055d7f6
        ;   Label: LAB_0055d7f6
    JGE 0x0055d7ff                      ; 0055d7f8
        ;   XREF to: 0055d7ff (CONDITIONAL_JUMP)  ; LAB_0055d7ff
    OR EAX,0x80000002                   ; 0055d7fa
    MOVD EBX,MM5                        ; 0055d7ff
        ;   Label: LAB_0055d7ff
    CMP EBX,ECX                         ; 0055d802
    JLE 0x0055d80b                      ; 0055d804
        ;   XREF to: 0055d80b (CONDITIONAL_JUMP)  ; LAB_0055d80b
    OR EAX,0x80000004                   ; 0055d806
    CMP EBX,EDX                         ; 0055d80b
        ;   Label: LAB_0055d80b
    JGE 0x0055d814                      ; 0055d80d
        ;   XREF to: 0055d814 (CONDITIONAL_JUMP)  ; LAB_0055d814
    OR EAX,0x80000008                   ; 0055d80f
    CMP ECX,0x0                         ; 0055d814
        ;   Label: LAB_0055d814
    JG 0x0055d81e                       ; 0055d817
        ;   XREF to: 0055d81e (CONDITIONAL_JUMP)  ; LAB_0055d81e
    OR EAX,0x80000010                   ; 0055d819
    MOV EBX,dword ptr [ESP + 0x4]       ; 0055d81e
        ;   Label: LAB_0055d81e
    MOVD dword ptr [EBX],MM4            ; 0055d822
    MOVD dword ptr [EBX + 0x4],MM5      ; 0055d825
    MOVD dword ptr [EBX + 0x8],MM6      ; 0055d829
    TEST EAX,0xffffffff                 ; 0055d82d
    JNZ 0x0055d86b                      ; 0055d832
        ;   XREF to: 0055d86b (CONDITIONAL_JUMP)  ; LAB_0055d86b
    MOV EAX,0x7fffffff                  ; 0055d834
    XOR EDX,EDX                         ; 0055d839
    IDIV ECX                            ; 0055d83b
    MOV dword ptr [EBX + 0xc],EAX       ; 0055d83d
    MOVD EAX,MM4                        ; 0055d840
    IMUL dword ptr [0x01c35e38]         ; 0055d843 | DAT_01c35e38
    IDIV ECX                            ; 0055d849
    ADD EAX,dword ptr [0x01c35e40]      ; 0055d84b | DAT_01c35e40
    MOV dword ptr [EBX + 0x10],EAX      ; 0055d851
    MOVD EAX,MM5                        ; 0055d854
    IMUL dword ptr [0x01c35e3c]         ; 0055d857 | DAT_01c35e3c
    IDIV ECX                            ; 0055d85d
    ADD EAX,dword ptr [0x01c35e44]      ; 0055d85f | DAT_01c35e44
    MOV dword ptr [EBX + 0x14],EAX      ; 0055d865
    EMMS                                ; 0055d868
    RET                                 ; 0055d86a
    MOV dword ptr [EBX + 0x10],EAX      ; 0055d86b
        ;   Label: LAB_0055d86b
    EMMS                                ; 0055d86e
    RET                                 ; 0055d870
    PUSH ESI                            ; 0055d871
        ;   Label: LAB_0055d871
    PUSH EDI                            ; 0055d872
    MOV ESI,dword ptr [ESP + 0x10]      ; 0055d873
    MOV EDI,dword ptr [ESP + 0xc]       ; 0055d877
    MOV EAX,dword ptr [ESI]             ; 0055d87b
    MOV EBX,dword ptr [ESI + 0x4]       ; 0055d87d
    MOV ECX,dword ptr [ESI + 0x8]       ; 0055d880
    SUB EAX,dword ptr [0x01c38b6c]      ; 0055d883 | DAT_01c38b6c
    SUB EBX,dword ptr [0x01c38b70]      ; 0055d889 | DAT_01c38b70
    SUB ECX,dword ptr [0x01c38b74]      ; 0055d88f | DAT_01c38b74
    MOV [0x0061c7d8],EAX                ; 0055d895 | DAT_0061c7d8
    MOV dword ptr [0x0061c7dc],EBX      ; 0055d89a | DAT_0061c7dc
    MOV dword ptr [0x0061c7e0],ECX      ; 0055d8a0 | DAT_0061c7e0
    IMUL dword ptr [0x01c38b9c]         ; 0055d8a6 | DAT_01c38b9c
    MOV EBX,EAX                         ; 0055d8ac
    MOV ECX,EDX                         ; 0055d8ae
    MOV EAX,[0x0061c7dc]                ; 0055d8b0 | DAT_0061c7dc
    IMUL dword ptr [0x01c38ba8]         ; 0055d8b5 | DAT_01c38ba8
    ADD EBX,EAX                         ; 0055d8bb
    ADC ECX,EDX                         ; 0055d8bd
    MOV EAX,[0x0061c7e0]                ; 0055d8bf | DAT_0061c7e0
    IMUL dword ptr [0x01c38bb4]         ; 0055d8c4 | DAT_01c38bb4
    ADD EAX,EBX                         ; 0055d8ca
    ADC EDX,ECX                         ; 0055d8cc
    SHRD EAX,EDX,0x10                   ; 0055d8ce
    MOV [0x0061c7e8],EAX                ; 0055d8d2 | DAT_0061c7e8
    MOV EAX,[0x0061c7d8]                ; 0055d8d7 | DAT_0061c7d8
    IMUL dword ptr [0x01c38ba0]         ; 0055d8dc | DAT_01c38ba0
    MOV EBX,EAX                         ; 0055d8e2
    MOV ECX,EDX                         ; 0055d8e4
    MOV EAX,[0x0061c7dc]                ; 0055d8e6 | DAT_0061c7dc
    IMUL dword ptr [0x01c38bac]         ; 0055d8eb | DAT_01c38bac
    ADD EBX,EAX                         ; 0055d8f1
    ADC ECX,EDX                         ; 0055d8f3
    MOV EAX,[0x0061c7e0]                ; 0055d8f5 | DAT_0061c7e0
    IMUL dword ptr [0x01c38bb8]         ; 0055d8fa | DAT_01c38bb8
    ADD EAX,EBX                         ; 0055d900
    ADC EDX,ECX                         ; 0055d902
    SHRD EAX,EDX,0x10                   ; 0055d904
    MOV [0x0061c7ec],EAX                ; 0055d908 | DAT_0061c7ec
    MOV EAX,[0x0061c7d8]                ; 0055d90d | DAT_0061c7d8
    IMUL dword ptr [0x01c38ba4]         ; 0055d912 | DAT_01c38ba4
    MOV EBX,EAX                         ; 0055d918
    MOV ECX,EDX                         ; 0055d91a
    MOV EAX,[0x0061c7dc]                ; 0055d91c | DAT_0061c7dc
    IMUL dword ptr [0x01c38bb0]         ; 0055d921 | DAT_01c38bb0
    ADD EBX,EAX                         ; 0055d927
    ADC ECX,EDX                         ; 0055d929
    MOV EAX,[0x0061c7e0]                ; 0055d92b | DAT_0061c7e0
    IMUL dword ptr [0x01c38bbc]         ; 0055d930 | DAT_01c38bbc
    ADD EAX,EBX                         ; 0055d936
    ADC EDX,ECX                         ; 0055d938
    SHRD EAX,EDX,0x10                   ; 0055d93a
    MOV [0x0061c7f0],EAX                ; 0055d93e | DAT_0061c7f0
    NEG EAX                             ; 0055d943
    MOV EDX,EAX                         ; 0055d945
    XOR EAX,EAX                         ; 0055d947
    MOV EBX,dword ptr [0x0061c7e8]      ; 0055d949 | DAT_0061c7e8
    MOV ECX,dword ptr [0x0061c7f0]      ; 0055d94f | DAT_0061c7f0
    CMP EBX,ECX                         ; 0055d955
    JLE 0x0055d95e                      ; 0055d957
        ;   XREF to: 0055d95e (CONDITIONAL_JUMP)  ; LAB_0055d95e
    OR EAX,0x80000001                   ; 0055d959
    CMP EBX,EDX                         ; 0055d95e
        ;   Label: LAB_0055d95e
    JGE 0x0055d967                      ; 0055d960
        ;   XREF to: 0055d967 (CONDITIONAL_JUMP)  ; LAB_0055d967
    OR EAX,0x80000002                   ; 0055d962
    MOV EBX,dword ptr [0x0061c7ec]      ; 0055d967 | DAT_0061c7ec
        ;   Label: LAB_0055d967
    CMP EBX,ECX                         ; 0055d96d
    JLE 0x0055d976                      ; 0055d96f
        ;   XREF to: 0055d976 (CONDITIONAL_JUMP)  ; LAB_0055d976
    OR EAX,0x80000004                   ; 0055d971
    CMP EBX,EDX                         ; 0055d976
        ;   Label: LAB_0055d976
    JGE 0x0055d97f                      ; 0055d978
        ;   XREF to: 0055d97f (CONDITIONAL_JUMP)  ; LAB_0055d97f
    OR EAX,0x80000008                   ; 0055d97a
    CMP ECX,0x0                         ; 0055d97f
        ;   Label: LAB_0055d97f
    JG 0x0055d989                       ; 0055d982
        ;   XREF to: 0055d989 (CONDITIONAL_JUMP)  ; LAB_0055d989
    OR EAX,0x80000010                   ; 0055d984
    TEST EAX,0xffffffff                 ; 0055d989
        ;   Label: LAB_0055d989
    JNZ 0x0055d9d8                      ; 0055d98e
        ;   XREF to: 0055d9d8 (CONDITIONAL_JUMP)  ; LAB_0055d9d8
    MOV EAX,[0x0061c7e8]                ; 0055d990 | DAT_0061c7e8
    MOV dword ptr [EDI],EAX             ; 0055d995
    MOV dword ptr [EDI + 0x4],EBX       ; 0055d997
    MOV dword ptr [EDI + 0x8],ECX       ; 0055d99a
    MOV EAX,0x7fffffff                  ; 0055d99d
    XOR EDX,EDX                         ; 0055d9a2
    IDIV ECX                            ; 0055d9a4
    MOV dword ptr [EDI + 0xc],EAX       ; 0055d9a6
    MOV EAX,[0x0061c7e8]                ; 0055d9a9 | DAT_0061c7e8
    IMUL dword ptr [0x01c35e38]         ; 0055d9ae | DAT_01c35e38
    IDIV ECX                            ; 0055d9b4
    ADD EAX,dword ptr [0x01c35e40]      ; 0055d9b6 | DAT_01c35e40
    MOV dword ptr [EDI + 0x10],EAX      ; 0055d9bc
    MOV EAX,[0x0061c7ec]                ; 0055d9bf | DAT_0061c7ec
    IMUL dword ptr [0x01c35e3c]         ; 0055d9c4 | DAT_01c35e3c
    IDIV ECX                            ; 0055d9ca
    ADD EAX,dword ptr [0x01c35e44]      ; 0055d9cc | DAT_01c35e44
    MOV dword ptr [EDI + 0x14],EAX      ; 0055d9d2
    POP EDI                             ; 0055d9d5
    POP ESI                             ; 0055d9d6
    RET                                 ; 0055d9d7
    MOV EDX,dword ptr [0x0061c7e8]      ; 0055d9d8 | DAT_0061c7e8
        ;   Label: LAB_0055d9d8
    MOV dword ptr [EDI],EDX             ; 0055d9de
    MOV dword ptr [EDI + 0x4],EBX       ; 0055d9e0
    MOV dword ptr [EDI + 0x8],ECX       ; 0055d9e3
    MOV dword ptr [EDI + 0x10],EAX      ; 0055d9e6
    POP EDI                             ; 0055d9e9
    POP ESI                             ; 0055d9ea
    RET                                 ; 0055d9eb


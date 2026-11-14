; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_findFilesByExtension_FUN_005146a0(CPod *pod,char *extension,char *output_buffer,int max_results,int result_string_length)
;
; Parameters:
; CPod *           Stack[0x4]:4   pod
; char *           Stack[0x8]:4   extension
; char *           Stack[0xc]:4   output_buffer
; int              Stack[0x10]:4   max_results
; int              Stack[0x14]:4   result_string_length
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005a4120
;   crt_string.c__strcmp_FUN_005a3d00
;   crt_string.c__strncpy_FUN_005a4ee0
;   engine_pod.cpp_CPodFile_findFileIndex_FUN_00513c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005146a0
        ;   Label: engine_pod.cpp_findFilesByExtension_FUN_005146a0
    PUSH ESI                            ; 005146a1
    PUSH EDI                            ; 005146a2
    PUSH EBP                            ; 005146a3
    SUB ESP,0x40                        ; 005146a4
    MOV ESI,dword ptr [ESP + 0x58]      ; 005146a7
    MOV EDI,ESI                         ; 005146ab
    SUB ECX,ECX                         ; 005146ad
    DEC ECX                             ; 005146af
    XOR EAX,EAX                         ; 005146b0
    SCASB.REPNE ES:EDI                  ; 005146b2
    NOT ECX                             ; 005146b4
    DEC ECX                             ; 005146b6
    XOR EDX,EDX                         ; 005146b7
    XOR EBX,EBX                         ; 005146b9
    MOV dword ptr [ESP + 0x2c],ECX      ; 005146bb
    MOV dword ptr [ESP + 0x3c],EDX      ; 005146bf
    TEST ECX,ECX                        ; 005146c3
    JLE 0x005146f0                      ; 005146c5
        ;   XREF to: 005146f0 (CONDITIONAL_JUMP)  ; LAB_005146f0
    XOR EAX,EAX                         ; 005146c7
        ;   Label: LAB_005146c7
    MOV AL,byte ptr [ESI]               ; 005146c9
    PUSH EAX                            ; 005146cb
    INC EBX                             ; 005146cc
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 005146cd
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 005146d2
    INC ESI                             ; 005146d5
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005146d6
    MOV byte ptr [ESP + EBX*0x1 + 0xb],AL ; 005146da
    CMP EBX,ECX                         ; 005146de
    JL 0x005146c7                       ; 005146e0
        ;   XREF to: 005146c7 (CONDITIONAL_JUMP)  ; LAB_005146c7
    LEA EAX,[EAX]                       ; 005146e2
    LEA EDX,[EDX]                       ; 005146e8
    MOV EAX,EAX                         ; 005146ee
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005146f0
        ;   Label: LAB_005146f0
    XOR DL,DL                           ; 005146f4
    MOV byte ptr [ESP + EAX*0x1 + 0xc],DL ; 005146f6
    MOV EAX,dword ptr [ESP + 0x54]      ; 005146fa
    XOR EBX,EBX                         ; 005146fe
    MOV ESI,dword ptr [EAX]             ; 00514700
    MOV dword ptr [ESP + 0x18],EBX      ; 00514702
    TEST ESI,ESI                        ; 00514706
    JLE 0x0051477b                      ; 00514708
        ;   XREF to: 0051477b (CONDITIONAL_JUMP)  ; LAB_0051477b
    MOV EAX,dword ptr [ESP + 0x64]      ; 0051470a
    DEC EAX                             ; 0051470e
    MOV dword ptr [ESP + 0x1c],EBX      ; 0051470f
    MOV dword ptr [ESP + 0x20],EAX      ; 00514713
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00514717
        ;   Label: LAB_00514717
    MOV dword ptr [ESP + 0x24],EAX      ; 0051471b
    MOV EAX,dword ptr [ESP + 0x64]      ; 0051471f
    MOV EDI,dword ptr [ESP + 0x64]      ; 00514723
    MOV dword ptr [ESP + 0x28],EAX      ; 00514727
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0051472b
    IMUL EAX,EDI                        ; 0051472f
    XOR EBX,EBX                         ; 00514732
    MOV EBP,dword ptr [ESP + 0x5c]      ; 00514734
    MOV dword ptr [ESP + 0x30],EBX      ; 00514738
    ADD EAX,EBP                         ; 0051473c
    MOV dword ptr [ESP + 0x38],EBX      ; 0051473e
    MOV dword ptr [ESP + 0x34],EAX      ; 00514742
    MOV EAX,dword ptr [ESP + 0x54]      ; 00514746
        ;   Label: LAB_00514746
    ADD EAX,dword ptr [ESP + 0x24]      ; 0051474a
    MOV EAX,dword ptr [EAX + 0x4]       ; 0051474e
    MOV ECX,dword ptr [ESP + 0x38]      ; 00514751
    CMP ECX,dword ptr [EAX + 0x410]     ; 00514755
    JL 0x00514787                       ; 0051475b
        ;   XREF to: 00514787 (CONDITIONAL_JUMP)  ; LAB_00514787
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0051475d
    MOV EBP,dword ptr [ESP + 0x18]      ; 00514761
    MOV ECX,dword ptr [ESP + 0x54]      ; 00514765
    ADD EDI,0x4                         ; 00514769
    INC EBP                             ; 0051476c
    MOV EDX,dword ptr [ECX]             ; 0051476d
    MOV dword ptr [ESP + 0x1c],EDI      ; 0051476f
    MOV dword ptr [ESP + 0x18],EBP      ; 00514773
    CMP EBP,EDX                         ; 00514777
    JL 0x00514717                       ; 00514779
        ;   XREF to: 00514717 (CONDITIONAL_JUMP)  ; LAB_00514717
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0051477b
        ;   Label: LAB_0051477b
    ADD ESP,0x40                        ; 0051477f
    POP EBP                             ; 00514782
    POP EDI                             ; 00514783
    POP ESI                             ; 00514784
    POP EBX                             ; 00514785
    RET                                 ; 00514786
    MOV ESI,dword ptr [ESP + 0x30]      ; 00514787
        ;   Label: LAB_00514787
    MOV EAX,dword ptr [EAX + 0x414]     ; 0051478b
    ADD EAX,ESI                         ; 00514791
    MOV EBP,dword ptr [EAX]             ; 00514793
    MOV EDI,EBP                         ; 00514795
    SUB ECX,ECX                         ; 00514797
    DEC ECX                             ; 00514799
    XOR EAX,EAX                         ; 0051479a
    SCASB.REPNE ES:EDI                  ; 0051479c
    NOT ECX                             ; 0051479e
    DEC ECX                             ; 005147a0
    SUB ECX,dword ptr [ESP + 0x2c]      ; 005147a1
    MOV EDI,ESP                         ; 005147a5
    LEA ESI,[ECX + EBP*0x1]             ; 005147a7
    PUSH EDI                            ; 005147aa
    MOV AL,byte ptr [ESI]               ; 005147ab
        ;   Label: LAB_005147ab
    MOV byte ptr [EDI],AL               ; 005147ad
    CMP AL,0x0                          ; 005147af
    JZ 0x005147c3                       ; 005147b1
        ;   XREF to: 005147c3 (CONDITIONAL_JUMP)  ; LAB_005147c3
    MOV AL,byte ptr [ESI + 0x1]         ; 005147b3
    ADD ESI,0x2                         ; 005147b6
    MOV byte ptr [EDI + 0x1],AL         ; 005147b9
    ADD EDI,0x2                         ; 005147bc
    CMP AL,0x0                          ; 005147bf
    JNZ 0x005147ab                      ; 005147c1
        ;   XREF to: 005147ab (CONDITIONAL_JUMP)  ; LAB_005147ab
    POP EDI                             ; 005147c3
        ;   Label: LAB_005147c3
    LEA EAX,[ESP + 0xc]                 ; 005147c4
    PUSH EAX                            ; 005147c8
    LEA EAX,[ESP + 0x4]                 ; 005147c9
    PUSH EAX                            ; 005147cd
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 005147ce
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 005147d3
    TEST EAX,EAX                        ; 005147d6
    JNZ 0x00514832                      ; 005147d8
        ;   XREF to: 00514832 (CONDITIONAL_JUMP)  ; LAB_00514832
    MOV EAX,dword ptr [ESP + 0x18]      ; 005147da
    XOR EBX,EBX                         ; 005147de
    TEST EAX,EAX                        ; 005147e0
    JLE 0x005147f9                      ; 005147e2
        ;   XREF to: 005147f9 (CONDITIONAL_JUMP)  ; LAB_005147f9
    MOV ESI,dword ptr [ESP + 0x54]      ; 005147e4
    PUSH EBP                            ; 005147e8
        ;   Label: LAB_005147e8
    MOV ECX,dword ptr [ESI + 0x4]       ; 005147e9
    PUSH ECX                            ; 005147ec
    CALL engine_pod.cpp_CPodFile_findFileIndex_FUN_00513c30 ; 005147ed
        ;   XREF to: 00513c30 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_findFileIndex_FUN_00513c30(CPodFile * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005147f2
    TEST EAX,EAX                        ; 005147f5
    JL 0x0051484b                       ; 005147f7
        ;   XREF to: 0051484b (CONDITIONAL_JUMP)  ; LAB_0051484b
    CMP EBX,dword ptr [ESP + 0x18]      ; 005147f9
        ;   Label: LAB_005147f9
    JNZ 0x00514832                      ; 005147fd
        ;   XREF to: 00514832 (CONDITIONAL_JUMP)  ; LAB_00514832
    MOV EDI,dword ptr [ESP + 0x20]      ; 005147ff
    PUSH EDI                            ; 00514803
    PUSH EBP                            ; 00514804
    MOV EBP,dword ptr [ESP + 0x3c]      ; 00514805
    PUSH EBP                            ; 00514809
    CALL crt_string.c__strncpy_FUN_005a4ee0 ; 0051480a
        ;   XREF to: 005a4ee0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005a4ee0(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 0051480f
    MOV EAX,dword ptr [ESP + 0x28]      ; 00514812
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00514816
    MOV EBX,dword ptr [ESP + 0x60]      ; 0051481a
    LEA EDX,[EAX + EBP*0x1]             ; 0051481e
    INC ECX                             ; 00514821
    MOV dword ptr [ESP + 0x34],EDX      ; 00514822
    MOV dword ptr [ESP + 0x3c],ECX      ; 00514826
    CMP ECX,EBX                         ; 0051482a
    JGE 0x0051477b                      ; 0051482c
        ;   XREF to: 0051477b (CONDITIONAL_JUMP)  ; LAB_0051477b
    MOV EDI,dword ptr [ESP + 0x38]      ; 00514832
        ;   Label: LAB_00514832
    MOV ESI,dword ptr [ESP + 0x30]      ; 00514836
    INC EDI                             ; 0051483a
    ADD ESI,0x14                        ; 0051483b
    MOV dword ptr [ESP + 0x38],EDI      ; 0051483e
    MOV dword ptr [ESP + 0x30],ESI      ; 00514842
    JMP 0x00514746                      ; 00514846
        ;   XREF to: 00514746 (UNCONDITIONAL_JUMP)  ; LAB_00514746
    MOV EDX,dword ptr [ESP + 0x18]      ; 0051484b
        ;   Label: LAB_0051484b
    INC EBX                             ; 0051484f
    ADD ESI,0x4                         ; 00514850
    CMP EBX,EDX                         ; 00514853
    JL 0x005147e8                       ; 00514855
        ;   XREF to: 005147e8 (CONDITIONAL_JUMP)  ; LAB_005147e8
    JMP 0x005147f9                      ; 00514857
        ;   XREF to: 005147f9 (UNCONDITIONAL_JUMP)  ; LAB_005147f9


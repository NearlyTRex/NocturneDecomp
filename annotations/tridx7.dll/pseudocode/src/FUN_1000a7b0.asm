; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; LONG FUN_1000a7b0(undefined4 param_1,_EXCEPTION_POINTERS *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_10017748
;   undefined4 DAT_1001774c
;   void* PTR_UnhandledExceptionFilter_1024224c = 0024264e
;
; Called Functions:
;   __getptd
;   FUN_1000a900
;   UnhandledExceptionFilter
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 1000a7b0
        ;   Label: FUN_1000a7b0
    PUSH ESI                            ; 1000a7b1
    PUSH EDI                            ; 1000a7b2
    PUSH EBP                            ; 1000a7b3
    CALL __getptd                       ; 1000a7b4
        ;   XREF to: 100077b0 (UNCONDITIONAL_CALL)  ; _ptiddata __getptd()
    MOV ESI,EAX                         ; 1000a7b9
    MOV ECX,dword ptr [ESP + 0x14]      ; 1000a7bb
    MOV EAX,dword ptr [ESI + 0x50]      ; 1000a7bf
    PUSH EAX                            ; 1000a7c2
    PUSH ECX                            ; 1000a7c3
    CALL FUN_1000a900                   ; 1000a7c4
        ;   XREF to: 1000a900 (UNCONDITIONAL_CALL)  ; undefined FUN_1000a900()
    ADD ESP,0x8                         ; 1000a7c9
    TEST EAX,EAX                        ; 1000a7cc
    JZ 0x1000a8ef                       ; 1000a7ce
        ;   XREF to: 1000a8ef (CONDITIONAL_JUMP)  ; LAB_1000a8ef
    MOV EDX,dword ptr [EAX + 0x8]       ; 1000a7d4
    TEST EDX,EDX                        ; 1000a7d7
    JZ 0x1000a8ef                       ; 1000a7d9
        ;   XREF to: 1000a8ef (CONDITIONAL_JUMP)  ; LAB_1000a8ef
    CMP EDX,0x5                         ; 1000a7df
    JNZ 0x1000a7f5                      ; 1000a7e2
        ;   XREF to: 1000a7f5 (CONDITIONAL_JUMP)  ; LAB_1000a7f5
    MOV dword ptr [EAX + 0x8],0x0       ; 1000a7e4
    MOV EAX,0x1                         ; 1000a7eb
    POP EBP                             ; 1000a7f0
    POP EDI                             ; 1000a7f1
    POP ESI                             ; 1000a7f2
    POP EBX                             ; 1000a7f3
    RET                                 ; 1000a7f4
    CMP EDX,0x1                         ; 1000a7f5
        ;   Label: LAB_1000a7f5
    JNZ 0x1000a804                      ; 1000a7f8
        ;   XREF to: 1000a804 (CONDITIONAL_JUMP)  ; LAB_1000a804
    MOV EAX,0xffffffff                  ; 1000a7fa
    POP EBP                             ; 1000a7ff
    POP EDI                             ; 1000a800
    POP ESI                             ; 1000a801
    POP EBX                             ; 1000a802
    RET                                 ; 1000a803
    MOV EDI,dword ptr [ESI + 0x54]      ; 1000a804
        ;   Label: LAB_1000a804
    MOV ECX,dword ptr [ESP + 0x18]      ; 1000a807
    MOV dword ptr [ESI + 0x54],ECX      ; 1000a80b
    CMP dword ptr [EAX + 0x4],0x8       ; 1000a80e
    JNZ 0x1000a8d2                      ; 1000a812
        ;   XREF to: 1000a8d2 (CONDITIONAL_JUMP)  ; LAB_1000a8d2
    MOV EBX,dword ptr [0x10017748]      ; 1000a818 | DAT_10017748
    MOV ECX,dword ptr [0x1001774c]      ; 1000a81e | DAT_1001774c
    ADD ECX,EBX                         ; 1000a824
    CMP ECX,EBX                         ; 1000a826
    JLE 0x1000a84f                      ; 1000a828
        ;   XREF to: 1000a84f (CONDITIONAL_JUMP)  ; LAB_1000a84f
    LEA ECX,[EBX + EBX*0x2]             ; 1000a82a
    SHL ECX,0x2                         ; 1000a82d
    MOV EBP,dword ptr [ESI + 0x50]      ; 1000a830
        ;   Label: LAB_1000a830
    ADD ECX,0xc                         ; 1000a833
    INC EBX                             ; 1000a836
    MOV dword ptr [EBP + ECX*0x1 + -0x4],0x0 ; 1000a837
    MOV EBP,dword ptr [0x1001774c]      ; 1000a83f | DAT_1001774c
    ADD EBP,dword ptr [0x10017748]      ; 1000a845 | DAT_10017748
    CMP EBP,EBX                         ; 1000a84b
    JG 0x1000a830                       ; 1000a84d
        ;   XREF to: 1000a830 (CONDITIONAL_JUMP)  ; LAB_1000a830
    MOV EBX,dword ptr [ESI + 0x58]      ; 1000a84f
        ;   Label: LAB_1000a84f
    MOV EAX,dword ptr [EAX]             ; 1000a852
    CMP EAX,0xc000008e                  ; 1000a854
    JNZ 0x1000a864                      ; 1000a859
        ;   XREF to: 1000a864 (CONDITIONAL_JUMP)  ; LAB_1000a864
    MOV dword ptr [ESI + 0x58],0x83     ; 1000a85b
    JMP 0x1000a8c2                      ; 1000a862
        ;   XREF to: 1000a8c2 (UNCONDITIONAL_JUMP)  ; LAB_1000a8c2
    CMP EAX,0xc0000090                  ; 1000a864
        ;   Label: LAB_1000a864
    JNZ 0x1000a874                      ; 1000a869
        ;   XREF to: 1000a874 (CONDITIONAL_JUMP)  ; LAB_1000a874
    MOV dword ptr [ESI + 0x58],0x81     ; 1000a86b
    JMP 0x1000a8c2                      ; 1000a872
        ;   XREF to: 1000a8c2 (UNCONDITIONAL_JUMP)  ; LAB_1000a8c2
    CMP EAX,0xc0000091                  ; 1000a874
        ;   Label: LAB_1000a874
    JNZ 0x1000a884                      ; 1000a879
        ;   XREF to: 1000a884 (CONDITIONAL_JUMP)  ; LAB_1000a884
    MOV dword ptr [ESI + 0x58],0x84     ; 1000a87b
    JMP 0x1000a8c2                      ; 1000a882
        ;   XREF to: 1000a8c2 (UNCONDITIONAL_JUMP)  ; LAB_1000a8c2
    CMP EAX,0xc0000093                  ; 1000a884
        ;   Label: LAB_1000a884
    JNZ 0x1000a894                      ; 1000a889
        ;   XREF to: 1000a894 (CONDITIONAL_JUMP)  ; LAB_1000a894
    MOV dword ptr [ESI + 0x58],0x85     ; 1000a88b
    JMP 0x1000a8c2                      ; 1000a892
        ;   XREF to: 1000a8c2 (UNCONDITIONAL_JUMP)  ; LAB_1000a8c2
    CMP EAX,0xc000008d                  ; 1000a894
        ;   Label: LAB_1000a894
    JNZ 0x1000a8a4                      ; 1000a899
        ;   XREF to: 1000a8a4 (CONDITIONAL_JUMP)  ; LAB_1000a8a4
    MOV dword ptr [ESI + 0x58],0x82     ; 1000a89b
    JMP 0x1000a8c2                      ; 1000a8a2
        ;   XREF to: 1000a8c2 (UNCONDITIONAL_JUMP)  ; LAB_1000a8c2
    CMP EAX,0xc000008f                  ; 1000a8a4
        ;   Label: LAB_1000a8a4
    JNZ 0x1000a8b4                      ; 1000a8a9
        ;   XREF to: 1000a8b4 (CONDITIONAL_JUMP)  ; LAB_1000a8b4
    MOV dword ptr [ESI + 0x58],0x86     ; 1000a8ab
    JMP 0x1000a8c2                      ; 1000a8b2
        ;   XREF to: 1000a8c2 (UNCONDITIONAL_JUMP)  ; LAB_1000a8c2
    CMP EAX,0xc0000092                  ; 1000a8b4
        ;   Label: LAB_1000a8b4
    JNZ 0x1000a8c2                      ; 1000a8b9
        ;   XREF to: 1000a8c2 (CONDITIONAL_JUMP)  ; LAB_1000a8c2
    MOV dword ptr [ESI + 0x58],0x8a     ; 1000a8bb
    MOV EAX,dword ptr [ESI + 0x58]      ; 1000a8c2
        ;   Label: LAB_1000a8c2
    PUSH EAX                            ; 1000a8c5
    PUSH 0x8                            ; 1000a8c6
    CALL EDX                            ; 1000a8c8
    ADD ESP,0x8                         ; 1000a8ca
    MOV dword ptr [ESI + 0x58],EBX      ; 1000a8cd
    JMP 0x1000a8e2                      ; 1000a8d0
        ;   XREF to: 1000a8e2 (UNCONDITIONAL_JUMP)  ; LAB_1000a8e2
    MOV dword ptr [EAX + 0x8],0x0       ; 1000a8d2
        ;   Label: LAB_1000a8d2
    MOV EAX,dword ptr [EAX + 0x4]       ; 1000a8d9
    PUSH EAX                            ; 1000a8dc
    CALL EDX                            ; 1000a8dd
    ADD ESP,0x4                         ; 1000a8df
    MOV EAX,0xffffffff                  ; 1000a8e2
        ;   Label: LAB_1000a8e2
    POP EBP                             ; 1000a8e7
    MOV dword ptr [ESI + 0x54],EDI      ; 1000a8e8
    POP EDI                             ; 1000a8eb
    POP ESI                             ; 1000a8ec
    POP EBX                             ; 1000a8ed
    RET                                 ; 1000a8ee
    MOV ECX,dword ptr [ESP + 0x18]      ; 1000a8ef
        ;   Label: LAB_1000a8ef
    PUSH ECX                            ; 1000a8f3
    CALL dword ptr [0x1024224c]         ; 1000a8f4 | PTR_UnhandledExceptionFilter_1024224c
    POP EBP                             ; 1000a8fa
    POP EDI                             ; 1000a8fb
    POP ESI                             ; 1000a8fc
    POP EBX                             ; 1000a8fd
    RET                                 ; 1000a8fe


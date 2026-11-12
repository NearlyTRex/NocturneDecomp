; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_00590680(int param_1,int param_2,UINT_PTR param_3)
;
;
; XREF[1]:
;   wincore_winrun.cpp_FUN_00590b0c at 00590ba2
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   wincore_winrun.cpp_FUN_00590790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00590680
        ;   Label: wincore_winrun.cpp_FUN_00590680
    PUSH ESI                            ; 00590681
    PUSH EDI                            ; 00590682
    SUB ESP,0x194                       ; 00590683
    MOV EDI,dword ptr [ESP + 0x1a4]     ; 00590689
    MOV ESI,dword ptr [ESP + 0x1a8]     ; 00590690
    PUSH EDI                            ; 00590697
    IMUL EBX,EDI,0xac                   ; 00590698
    CALL wincore_winrun.cpp_FUN_00590790 ; 0059069e
        ;   XREF to: 00590790 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00590790()
    ADD ESP,0x4                         ; 005906a3
    ADD EBX,0x26656c4                   ; 005906a6
    PUSH 0x10                           ; 005906ac
    MOV EDX,dword ptr [ESP + 0x1b0]     ; 005906ae
    MOV dword ptr [EBX],ESI             ; 005906b5
    PUSH 0x0                            ; 005906b7
    MOV dword ptr [EDI*0x4 + 0x2665974],EDX ; 005906b9
    LEA EAX,[EBX + 0xc]                 ; 005906c0
    MOV dword ptr [EBX + 0x4],0x1       ; 005906c3
    PUSH EAX                            ; 005906ca
    MOV dword ptr [EBX + 0x8],0x0       ; 005906cb
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005906d2
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005906d7
    MOV dword ptr [EBX + 0x1c],0x0      ; 005906da
    TEST ESI,ESI                        ; 005906e1
    JBE 0x005906ea                      ; 005906e3
        ;   XREF to: 005906ea (CONDITIONAL_JUMP)  ; LAB_005906ea
    CMP ESI,0x4                         ; 005906e5
    JNZ 0x005906f4                      ; 005906e8
        ;   XREF to: 005906f4 (CONDITIONAL_JUMP)  ; LAB_005906f4
    ADD ESP,0x194                       ; 005906ea
        ;   Label: LAB_005906ea
    POP EDI                             ; 005906f0
    POP ESI                             ; 005906f1
    POP EBX                             ; 005906f2
    RET                                 ; 005906f3
    PUSH 0x4                            ; 005906f4
        ;   Label: LAB_005906f4
    PUSH 0x0                            ; 005906f6
    LEA EAX,[ESP + 0x8]                 ; 005906f8
    PUSH EAX                            ; 005906fc
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005906fd
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00590702
    PUSH 0x194                          ; 00590705
    LEA EAX,[ESP + 0x4]                 ; 0059070a
    PUSH EAX                            ; 0059070e
    MOV EDX,dword ptr [ESP + 0x1b4]     ; 0059070f
    PUSH EDX                            ; 00590716
    CALL dword ptr CS:[0x5c8430]        ; 00590717
    TEST EAX,EAX                        ; 0059071e
    JNZ 0x00590771                      ; 00590720
        ;   XREF to: 00590771 (CONDITIONAL_JUMP)  ; LAB_00590771
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00590722
    MOV dword ptr [EBX + 0xc],0x1       ; 00590726
    MOV dword ptr [EBX + 0x10],0x1      ; 0059072d
    MOV dword ptr [EBX + 0x8],EAX       ; 00590734
    TEST byte ptr [ESP + 0x60],0x1      ; 00590737
    SETNZ AL                            ; 0059073c
    AND EAX,0xff                        ; 0059073f
    MOV dword ptr [EBX + 0x14],EAX      ; 00590744
    TEST byte ptr [ESP + 0x60],0x2      ; 00590747
    SETNZ AL                            ; 0059074c
    AND EAX,0xff                        ; 0059074f
    MOV dword ptr [EBX + 0x18],EAX      ; 00590754
    TEST byte ptr [ESP + 0x60],0x10     ; 00590757
    SETNZ AL                            ; 0059075c
    AND EAX,0xff                        ; 0059075f
    MOV dword ptr [EBX + 0x1c],EAX      ; 00590764
    ADD ESP,0x194                       ; 00590767
    POP EDI                             ; 0059076d
    POP ESI                             ; 0059076e
    POP EBX                             ; 0059076f
    RET                                 ; 00590770
    IMUL EDI,EDI,0xac                   ; 00590771
        ;   Label: LAB_00590771
    XOR ECX,ECX                         ; 00590777
    MOV dword ptr [EDI + 0x26656c8],ECX ; 00590779
    ADD ESP,0x194                       ; 0059077f
    POP EDI                             ; 00590785
    POP ESI                             ; 00590786
    POP EBX                             ; 00590787
    RET                                 ; 00590788


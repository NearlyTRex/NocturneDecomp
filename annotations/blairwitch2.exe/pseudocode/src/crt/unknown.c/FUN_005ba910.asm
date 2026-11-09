; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005ba910(int *param_1,uint *param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005ba9b4 at 005ba9c7
;
; Referenced Globals:
;   undefined4 DAT_0061eea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ba910
        ;   Label: crt_unknown.c_FUN_005ba910
    PUSH EBP                            ; 005ba911
    MOV ECX,dword ptr [ESP + 0xc]       ; 005ba912
    MOV EAX,dword ptr [ESP + 0x10]      ; 005ba916
    TEST EAX,EAX                        ; 005ba91a
    JNZ 0x005ba926                      ; 005ba91c
        ;   XREF to: 005ba926 (CONDITIONAL_JUMP)  ; LAB_005ba926
    MOV EAX,0x1                         ; 005ba91e
    POP EBP                             ; 005ba923
    POP EBX                             ; 005ba924
    RET                                 ; 005ba925
    MOV EDX,dword ptr [ECX]             ; 005ba926
        ;   Label: LAB_005ba926
    TEST EDX,EDX                        ; 005ba928
    JNZ 0x005ba931                      ; 005ba92a
        ;   XREF to: 005ba931 (CONDITIONAL_JUMP)  ; LAB_005ba931
    LEA EDX,[EAX + 0x2c]                ; 005ba92c
    JMP 0x005ba966                      ; 005ba92f
        ;   XREF to: 005ba966 (UNCONDITIONAL_JUMP)  ; LAB_005ba966
    MOV EAX,[0x0061eea0]                ; 005ba931 | DAT_0061eea0
        ;   Label: LAB_005ba931
    CMP dword ptr [EAX + 0x8],0x0       ; 005ba936
    JZ 0x005ba951                       ; 005ba93a
        ;   XREF to: 005ba951 (CONDITIONAL_JUMP)  ; LAB_005ba951
    CMP EAX,EDX                         ; 005ba93c
        ;   Label: LAB_005ba93c
    JA 0x005ba948                       ; 005ba93e
        ;   XREF to: 005ba948 (CONDITIONAL_JUMP)  ; LAB_005ba948
    MOV EBX,dword ptr [EAX]             ; 005ba940
    ADD EBX,EAX                         ; 005ba942
    CMP EBX,EDX                         ; 005ba944
    JA 0x005ba951                       ; 005ba946
        ;   XREF to: 005ba951 (CONDITIONAL_JUMP)  ; LAB_005ba951
    MOV EAX,dword ptr [EAX + 0x8]       ; 005ba948
        ;   Label: LAB_005ba948
    CMP dword ptr [EAX + 0x8],0x0       ; 005ba94b
    JNZ 0x005ba93c                      ; 005ba94f
        ;   XREF to: 005ba93c (CONDITIONAL_JUMP)  ; LAB_005ba93c
    MOV EBX,dword ptr [EDX]             ; 005ba951
        ;   Label: LAB_005ba951
    AND BL,0xfe                         ; 005ba953
    ADD EBX,EDX                         ; 005ba956
    CMP EBX,EDX                         ; 005ba958
    JA 0x005ba964                       ; 005ba95a
        ;   XREF to: 005ba964 (CONDITIONAL_JUMP)  ; LAB_005ba964
    MOV EAX,0x3                         ; 005ba95c
    POP EBP                             ; 005ba961
    POP EBX                             ; 005ba962
    RET                                 ; 005ba963
    MOV EDX,EBX                         ; 005ba964
        ;   Label: LAB_005ba964
    CMP dword ptr [EDX],-0x1            ; 005ba966
        ;   Label: LAB_005ba966
    JNZ 0x005ba98f                      ; 005ba969
        ;   XREF to: 005ba98f (CONDITIONAL_JUMP)  ; LAB_005ba98f
    MOV EBP,dword ptr [EAX + 0x8]       ; 005ba96b
    TEST EBP,EBP                        ; 005ba96e
    JNZ 0x005ba988                      ; 005ba970
        ;   XREF to: 005ba988 (CONDITIONAL_JUMP)  ; LAB_005ba988
    MOV word ptr [ECX + 0x4],0x0        ; 005ba972
    MOV dword ptr [ECX + 0xa],EBP       ; 005ba978
    MOV dword ptr [ECX + 0x6],EBP       ; 005ba97b
    MOV EAX,0x4                         ; 005ba97e
    MOV dword ptr [ECX],EBP             ; 005ba983
    POP EBP                             ; 005ba985
    POP EBX                             ; 005ba986
    RET                                 ; 005ba987
    MOV EAX,EBP                         ; 005ba988
        ;   Label: LAB_005ba988
    LEA EDX,[EBP + 0x2c]                ; 005ba98a
    JMP 0x005ba966                      ; 005ba98d
        ;   XREF to: 005ba966 (UNCONDITIONAL_JUMP)  ; LAB_005ba966
    MOV dword ptr [ECX + 0xa],0x1       ; 005ba98f
        ;   Label: LAB_005ba98f
    MOV word ptr [ECX + 0x4],DS         ; 005ba996
    MOV dword ptr [ECX],EDX             ; 005ba999
    MOV EAX,dword ptr [EDX]             ; 005ba99b
    AND AL,0xfe                         ; 005ba99d
    MOV dword ptr [ECX + 0x6],EAX       ; 005ba99f
    TEST byte ptr [EDX],0x1             ; 005ba9a2
    JZ 0x005ba9ae                       ; 005ba9a5
        ;   XREF to: 005ba9ae (CONDITIONAL_JUMP)  ; LAB_005ba9ae
    MOV dword ptr [ECX + 0xa],0x0       ; 005ba9a7
    XOR EAX,EAX                         ; 005ba9ae
        ;   Label: LAB_005ba9ae
    POP EBP                             ; 005ba9b0
    POP EBX                             ; 005ba9b1
    RET                                 ; 005ba9b2


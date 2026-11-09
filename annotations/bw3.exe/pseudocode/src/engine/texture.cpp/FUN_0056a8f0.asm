; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_0056a8f0(int param_1)
;
;
; XREF[1]:
;   engine_texture.cpp_FUN_0056acde at 0056ace7
;
; Referenced Globals:
;   undefined4 DAT_02cfd084
;
; Called Functions:
;   engine_texture.cpp_FUN_0056a130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056a8f0
        ;   Label: engine_texture.cpp_FUN_0056a8f0
    PUSH EBP                            ; 0056a8f1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0056a8f2
    MOV EDX,dword ptr [EAX + 0x18004]   ; 0056a8f6
    XOR EBX,EBX                         ; 0056a8fc
    TEST EDX,EDX                        ; 0056a8fe
    JLE 0x0056a956                      ; 0056a900
        ;   XREF to: 0056a956 (CONDITIONAL_JUMP)  ; LAB_0056a956
    PUSH EDI                            ; 0056a902
    PUSH ESI                            ; 0056a903
    MOV EDI,0x2cfd088                   ; 0056a904
    LEA EBP,[EAX + 0x8]                 ; 0056a909
    MOV ESI,EBP                         ; 0056a90c
        ;   Label: LAB_0056a90c
    MOV dword ptr [0x02cfd084],EBX      ; 0056a90e | DAT_02cfd084
    PUSH EDI                            ; 0056a914
    MOV AL,byte ptr [ESI]               ; 0056a915
        ;   Label: LAB_0056a915
    MOV byte ptr [EDI],AL               ; 0056a917
    CMP AL,0x0                          ; 0056a919
    JZ 0x0056a92d                       ; 0056a91b
        ;   XREF to: 0056a92d (CONDITIONAL_JUMP)  ; LAB_0056a92d
    MOV AL,byte ptr [ESI + 0x1]         ; 0056a91d
    ADD ESI,0x2                         ; 0056a920
    MOV byte ptr [EDI + 0x1],AL         ; 0056a923
    ADD EDI,0x2                         ; 0056a926
    CMP AL,0x0                          ; 0056a929
    JNZ 0x0056a915                      ; 0056a92b
        ;   XREF to: 0056a915 (CONDITIONAL_JUMP)  ; LAB_0056a915
    POP EDI                             ; 0056a92d
        ;   Label: LAB_0056a92d
    PUSH 0x1                            ; 0056a92e
    PUSH 0x2cfd080                      ; 0056a930
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0056a935
    PUSH ECX                            ; 0056a939
    CALL engine_texture.cpp_FUN_0056a130 ; 0056a93a
        ;   XREF to: 0056a130 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056a130()
    ADD ESP,0xc                         ; 0056a93f
    MOV EAX,dword ptr [ESP + 0x14]      ; 0056a942
    INC EBX                             ; 0056a946
    MOV ESI,dword ptr [EAX + 0x18004]   ; 0056a947
    ADD EBP,0x60                        ; 0056a94d
    CMP EBX,ESI                         ; 0056a950
    JL 0x0056a90c                       ; 0056a952
        ;   XREF to: 0056a90c (CONDITIONAL_JUMP)  ; LAB_0056a90c
    POP ESI                             ; 0056a954
    POP EDI                             ; 0056a955
    POP EBP                             ; 0056a956
        ;   Label: LAB_0056a956
    POP EBX                             ; 0056a957
    RET                                 ; 0056a958


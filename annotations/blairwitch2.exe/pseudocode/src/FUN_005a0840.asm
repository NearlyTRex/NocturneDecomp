; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a0840(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fedac
;   undefined4 DAT_005fedb0
;
; Called Functions:
;   FUN_005478b0
;   FUN_0059d7f0
;   FUN_0059d990
;   FUN_0059dc80
;   FUN_0059e3b0
;   FUN_005a0b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0840
        ;   Label: FUN_005a0840
    PUSH ESI                            ; 005a0841
    PUSH EDI                            ; 005a0842
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a0843
    PUSH EDX                            ; 005a0847
    CALL FUN_0059e3b0                   ; 005a0848
        ;   XREF to: 0059e3b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059e3b0()
    ADD ESP,0x4                         ; 005a084d
    PUSH 0x5efb9c                       ; 005a0850
    MOV EBX,EAX                         ; 005a0855
    LEA ESI,[EAX + 0x2b4]               ; 005a0857
    PUSH ESI                            ; 005a085d
    MOV dword ptr [EAX + 0x2b0],0x5fedc4 ; 005a085e
    CALL FUN_005478b0                   ; 005a0868
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    MOV dword ptr [EBX + 0x3434],0x3f800000 ; 005a086d
    MOV dword ptr [EBX + 0x1134c],0x40200000 ; 005a0877
    MOV dword ptr [EBX + 0x11850],0x0   ; 005a0881
    MOV dword ptr [EBX + 0x11854],0x1   ; 005a088b
    MOV dword ptr [EBX + 0x11864],0x0   ; 005a0895
    MOV dword ptr [EBX + 0x11380],0x0   ; 005a089f
    MOV dword ptr [EBX + 0x11384],0x0   ; 005a08a9
    LEA EDI,[EBX + 0x113d4]             ; 005a08b3
    MOV dword ptr [EBX + 0x11388],0x1   ; 005a08b9
    FLD float ptr [0x005fedac]          ; 005a08c3 | DAT_005fedac
    MOV dword ptr [EBX + 0x1138c],0x4   ; 005a08c9
    FLD float ptr [0x005fedb0]          ; 005a08d3 | DAT_005fedb0
    MOV dword ptr [EBX + 0x11398],0x40a00000 ; 005a08d9
    MOV ESI,0x5efbaa                    ; 005a08e3
    MOV dword ptr [EBX + 0x11418],0x1   ; 005a08e8
    ADD ESP,0x8                         ; 005a08f2
    FXCH                                ; 005a08f5
    FSTP float ptr [EBX + 0x11370]      ; 005a08f7
    FSTP float ptr [EBX + 0x11394]      ; 005a08fd
    PUSH EDI                            ; 005a0903
    MOV AL,byte ptr [ESI]               ; 005a0904
        ;   Label: LAB_005a0904
    MOV byte ptr [EDI],AL               ; 005a0906
    CMP AL,0x0                          ; 005a0908
    JZ 0x005a091c                       ; 005a090a
        ;   XREF to: 005a091c (CONDITIONAL_JUMP)  ; LAB_005a091c
    MOV AL,byte ptr [ESI + 0x1]         ; 005a090c
    ADD ESI,0x2                         ; 005a090f
    MOV byte ptr [EDI + 0x1],AL         ; 005a0912
    ADD EDI,0x2                         ; 005a0915
    CMP AL,0x0                          ; 005a0918
    JNZ 0x005a0904                      ; 005a091a
        ;   XREF to: 005a0904 (CONDITIONAL_JUMP)  ; LAB_005a0904
    POP EDI                             ; 005a091c
        ;   Label: LAB_005a091c
    PUSH 0x0                            ; 005a091d
    PUSH 0x0                            ; 005a091f
    PUSH EBX                            ; 005a0921
    CALL FUN_005a0b20                   ; 005a0922
        ;   XREF to: 005a0b20 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0b20()
    ADD ESP,0xc                         ; 005a0927
    PUSH 0x5efbb1                       ; 005a092a
    PUSH 0x5efbbd                       ; 005a092f
    LEA ESI,[EBX + 0x10af8]             ; 005a0934
    PUSH ESI                            ; 005a093a
    CALL FUN_0059d7f0                   ; 005a093b
        ;   XREF to: 0059d7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d7f0()
    ADD ESP,0xc                         ; 005a0940
    PUSH 0x5efbcb                       ; 005a0943
    PUSH ESI                            ; 005a0948
    CALL FUN_0059d990                   ; 005a0949
        ;   XREF to: 0059d990 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d990()
    ADD ESP,0x8                         ; 005a094e
    PUSH ESI                            ; 005a0951
    CALL FUN_0059dc80                   ; 005a0952
        ;   XREF to: 0059dc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0059dc80()
    ADD ESP,0x4                         ; 005a0957
    LEA EDI,[EBX + 0x11444]             ; 005a095a
    MOV ESI,0x5efbd1                    ; 005a0960
    PUSH EDI                            ; 005a0965
    MOV AL,byte ptr [ESI]               ; 005a0966
        ;   Label: LAB_005a0966
    MOV byte ptr [EDI],AL               ; 005a0968
    CMP AL,0x0                          ; 005a096a
    JZ 0x005a097e                       ; 005a096c
        ;   XREF to: 005a097e (CONDITIONAL_JUMP)  ; LAB_005a097e
    MOV AL,byte ptr [ESI + 0x1]         ; 005a096e
    ADD ESI,0x2                         ; 005a0971
    MOV byte ptr [EDI + 0x1],AL         ; 005a0974
    ADD EDI,0x2                         ; 005a0977
    CMP AL,0x0                          ; 005a097a
    JNZ 0x005a0966                      ; 005a097c
        ;   XREF to: 005a0966 (CONDITIONAL_JUMP)  ; LAB_005a0966
    POP EDI                             ; 005a097e
        ;   Label: LAB_005a097e
    MOV ESI,0x5efbe1                    ; 005a097f
    LEA EDI,[EBX + 0x11543]             ; 005a0984
    PUSH EDI                            ; 005a098a
    MOV AL,byte ptr [ESI]               ; 005a098b
        ;   Label: LAB_005a098b
    MOV byte ptr [EDI],AL               ; 005a098d
    CMP AL,0x0                          ; 005a098f
    JZ 0x005a09a3                       ; 005a0991
        ;   XREF to: 005a09a3 (CONDITIONAL_JUMP)  ; LAB_005a09a3
    MOV AL,byte ptr [ESI + 0x1]         ; 005a0993
    ADD ESI,0x2                         ; 005a0996
    MOV byte ptr [EDI + 0x1],AL         ; 005a0999
    ADD EDI,0x2                         ; 005a099c
    CMP AL,0x0                          ; 005a099f
    JNZ 0x005a098b                      ; 005a09a1
        ;   XREF to: 005a098b (CONDITIONAL_JUMP)  ; LAB_005a098b
    POP EDI                             ; 005a09a3
        ;   Label: LAB_005a09a3
    MOV EAX,EBX                         ; 005a09a4
    MOV dword ptr [EBX + 0xfc],0x1      ; 005a09a6
    POP EDI                             ; 005a09b0
    POP ESI                             ; 005a09b1
    POP EBX                             ; 005a09b2
    RET                                 ; 005a09b3


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_path_cpp_FUN_0050ac3c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01ed02ac
;   undefined4 DAT_01ed02b0
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0050ac3c
        ;   Label: core_path.cpp_FUN_0050ac3c
    PUSH EBX                            ; 0050ac40
    MOV EBX,dword ptr [0x01ed02ac]      ; 0050ac41 | DAT_01ed02ac
    CMP EBX,dword ptr [0x01ed02b0]      ; 0050ac47 | DAT_01ed02b0
    JZ 0x0050ac98                       ; 0050ac4d
        ;   XREF to: 0050ac98 (CONDITIONAL_JUMP)  ; LAB_0050ac98
    MOV EBX,dword ptr [0x01ed02ac]      ; 0050ac4f | DAT_01ed02ac
        ;   Label: LAB_0050ac4f
    LEA EAX,[EBX*0x4 + 0x0]             ; 0050ac55
    SUB EAX,EBX                         ; 0050ac5c
    MOV ECX,dword ptr [ESP + 0x8]       ; 0050ac5e
    MOV EDX,dword ptr [EAX*0x4 + 0x1ec184c] ; 0050ac62
    MOV dword ptr [ECX],EDX             ; 0050ac69
    MOV ECX,dword ptr [ESP + 0xc]       ; 0050ac6b
    MOV EDX,dword ptr [EAX*0x4 + 0x1ec1850] ; 0050ac6f
    MOV dword ptr [ECX],EDX             ; 0050ac76
    MOV EDX,dword ptr [ESP + 0x10]      ; 0050ac78
    MOV EAX,dword ptr [EAX*0x4 + 0x1ec1854] ; 0050ac7c
    INC EBX                             ; 0050ac83
    MOV dword ptr [EDX],EAX             ; 0050ac84
    CMP EBX,0x1388                      ; 0050ac86
    JL 0x0050ac90                       ; 0050ac8c
        ;   XREF to: 0050ac90 (CONDITIONAL_JUMP)  ; LAB_0050ac90
    XOR EBX,EBX                         ; 0050ac8e
    MOV dword ptr [0x01ed02ac],EBX      ; 0050ac90 | DAT_01ed02ac
        ;   Label: LAB_0050ac90
    POP EBX                             ; 0050ac96
    RET                                 ; 0050ac97
    PUSH ESI                            ; 0050ac98
        ;   Label: LAB_0050ac98
    MOV ECX,0x5cb744                    ; 0050ac99
    MOV ESI,0xdf                        ; 0050ac9e
    PUSH 0x5cb755                       ; 0050aca3
    MOV dword ptr [0x01d71de0],ECX      ; 0050aca8 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0050acae | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0050acb4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0050acb9
    POP ESI                             ; 0050acbc
    JMP 0x0050ac4f                      ; 0050acbd
        ;   XREF to: 0050ac4f (UNCONDITIONAL_JUMP)  ; LAB_0050ac4f


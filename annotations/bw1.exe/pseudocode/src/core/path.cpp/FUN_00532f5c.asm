; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_path_cpp_FUN_00532f5c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01e7abdc
;   undefined4 DAT_01e7abe0
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 00532f5c
        ;   Label: core_path.cpp_FUN_00532f5c
    PUSH EBX                            ; 00532f60
    MOV EBX,dword ptr [0x01e7abdc]      ; 00532f61 | DAT_01e7abdc
    CMP EBX,dword ptr [0x01e7abe0]      ; 00532f67 | DAT_01e7abe0
    JZ 0x00532fb8                       ; 00532f6d
        ;   XREF to: 00532fb8 (CONDITIONAL_JUMP)  ; LAB_00532fb8
    MOV EBX,dword ptr [0x01e7abdc]      ; 00532f6f | DAT_01e7abdc
        ;   Label: LAB_00532f6f
    LEA EAX,[EBX*0x4 + 0x0]             ; 00532f75
    SUB EAX,EBX                         ; 00532f7c
    MOV ECX,dword ptr [ESP + 0x8]       ; 00532f7e
    MOV EDX,dword ptr [EAX*0x4 + 0x1e6c17c] ; 00532f82
    MOV dword ptr [ECX],EDX             ; 00532f89
    MOV ECX,dword ptr [ESP + 0xc]       ; 00532f8b
    MOV EDX,dword ptr [EAX*0x4 + 0x1e6c180] ; 00532f8f
    MOV dword ptr [ECX],EDX             ; 00532f96
    MOV EDX,dword ptr [ESP + 0x10]      ; 00532f98
    MOV EAX,dword ptr [EAX*0x4 + 0x1e6c184] ; 00532f9c
    INC EBX                             ; 00532fa3
    MOV dword ptr [EDX],EAX             ; 00532fa4
    CMP EBX,0x1388                      ; 00532fa6
    JL 0x00532fb0                       ; 00532fac
        ;   XREF to: 00532fb0 (CONDITIONAL_JUMP)  ; LAB_00532fb0
    XOR EBX,EBX                         ; 00532fae
    MOV dword ptr [0x01e7abdc],EBX      ; 00532fb0 | DAT_01e7abdc
        ;   Label: LAB_00532fb0
    POP EBX                             ; 00532fb6
    RET                                 ; 00532fb7
    PUSH ESI                            ; 00532fb8
        ;   Label: LAB_00532fb8
    MOV ECX,0x5ec8dc                    ; 00532fb9
    MOV ESI,0xdf                        ; 00532fbe
    PUSH 0x5ec8ed                       ; 00532fc3
    MOV dword ptr [0x01d1d400],ECX      ; 00532fc8 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00532fce | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00532fd4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00532fd9
    POP ESI                             ; 00532fdc
    JMP 0x00532f6f                      ; 00532fdd
        ;   XREF to: 00532f6f (UNCONDITIONAL_JUMP)  ; LAB_00532f6f


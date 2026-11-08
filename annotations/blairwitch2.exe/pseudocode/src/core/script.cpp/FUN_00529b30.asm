; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00529b30(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_004b6170 at 004b6bec
;
; Referenced Globals:
;   TerminatedCString s_Error_processing_script_005e4df8
;   TerminatedCString s_core_script_cpp_005e4e47
;   TerminatedCString s_Infinite_loop_detected_t_005e4e5a
;   undefined4 DAT_006138e0
;   undefined4 DAT_00616494
;   undefined4 DAT_01cb6b44
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_0047be40
;   FUN_004e4500
;   FUN_00522350
;   FUN_00529b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529b30
        ;   Label: FUN_00529b30
    PUSH EBP                            ; 00529b31
    SUB ESP,0x4                         ; 00529b32
    MOV EBX,dword ptr [ESP + 0x10]      ; 00529b35
    CMP dword ptr [EBX + 0x454],0x0     ; 00529b39
    JGE 0x00529b4a                      ; 00529b40
        ;   XREF to: 00529b4a (CONDITIONAL_JUMP)  ; LAB_00529b4a
    XOR EAX,EAX                         ; 00529b42
    ADD ESP,0x4                         ; 00529b44
    POP EBP                             ; 00529b47
    POP EBX                             ; 00529b48
    RET                                 ; 00529b49
    PUSH EDI                            ; 00529b4a
        ;   Label: LAB_00529b4a
    PUSH ESI                            ; 00529b4b
    PUSH EBX                            ; 00529b4c
    CALL FUN_00529b00                   ; 00529b4d
        ;   XREF to: 00529b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00529b00()
    XOR ESI,ESI                         ; 00529b52
    MOV EAX,dword ptr [EBX + 0x454]     ; 00529b54
    ADD ESP,0x4                         ; 00529b5a
    MOV dword ptr [EBX + 0x44],EAX      ; 00529b5d
    MOV EAX,[0x00616494]                ; 00529b60 | DAT_00616494
        ;   Label: LAB_00529b60
    CMP dword ptr [EAX + 0x244],0x0     ; 00529b65 | DAT_01cb6b44
    JZ 0x00529bf7                       ; 00529b6c
        ;   XREF to: 00529bf7 (CONDITIONAL_JUMP)  ; LAB_00529bf7
    CMP dword ptr [EBX],0x0             ; 00529b72
    JNZ 0x00529bf7                      ; 00529b75
        ;   XREF to: 00529bf7 (CONDITIONAL_JUMP)  ; LAB_00529bf7
    LEA EAX,[ESP + 0x8]                 ; 00529b7b
    MOV EBP,0x3e800000                  ; 00529b7f
    PUSH EAX                            ; 00529b84
    MOV dword ptr [ESP + 0xc],EBP       ; 00529b85
    PUSH EBX                            ; 00529b89
    MOV EDI,dword ptr [EBX + 0x44]      ; 00529b8a
    CALL FUN_00522350                   ; 00529b8d
        ;   XREF to: 00522350 (UNCONDITIONAL_CALL)  ; undefined FUN_00522350()
    ADD ESP,0x8                         ; 00529b92
    TEST EAX,EAX                        ; 00529b95
    JL 0x00529bd0                       ; 00529b97
        ;   XREF to: 00529bd0 (CONDITIONAL_JUMP)  ; LAB_00529bd0
    INC ESI                             ; 00529b99
        ;   Label: LAB_00529b99
    CMP ESI,0x12c                       ; 00529b9a
    JLE 0x00529b60                      ; 00529ba0
        ;   XREF to: 00529b60 (CONDITIONAL_JUMP)  ; LAB_00529b60
    MOV EBP,0x5e4e47                    ; 00529ba2 | = "..\\core\\script.cpp"
    MOV EAX,0x1192                      ; 00529ba7
    MOV EDI,dword ptr [EBX + 0x44]      ; 00529bac
    MOV [0x01d046a4],EAX                ; 00529baf | DAT_01d046a4
    MOV EAX,dword ptr [EBX + 0x30]      ; 00529bb4
    MOV dword ptr [0x01d046a0],EBP      ; 00529bb7 | DAT_01d046a0
    MOV EDX,dword ptr [EAX + EDI*0x8]   ; 00529bbd
    PUSH EDX                            ; 00529bc0
    PUSH 0x5e4e5a                       ; 00529bc1 | = "Infinite loop detected trying to skip..."
    CALL FUN_004e4500                   ; 00529bc6
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 00529bcb
    JMP 0x00529b60                      ; 00529bce
        ;   XREF to: 00529b60 (UNCONDITIONAL_JUMP)  ; LAB_00529b60
    MOV EAX,dword ptr [EBX + 0x30]      ; 00529bd0
        ;   Label: LAB_00529bd0
    PUSH 0x1e65100                      ; 00529bd3
    MOV EDX,dword ptr [EAX + EDI*0x8 + 0x4] ; 00529bd8
    PUSH EDX                            ; 00529bdc
    MOV ECX,dword ptr [EAX + EDI*0x8]   ; 00529bdd
    PUSH ECX                            ; 00529be0
    PUSH 0x5e4df8                       ; 00529be1 | = "Error processing script to skip cinem..."
    MOV EDI,dword ptr [0x006138e0]      ; 00529be6 | DAT_006138e0
    PUSH EDI                            ; 00529bec
    CALL FUN_0047be40                   ; 00529bed
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; undefined FUN_0047be40()
    ADD ESP,0x14                        ; 00529bf2
    JMP 0x00529b99                      ; 00529bf5
        ;   XREF to: 00529b99 (UNCONDITIONAL_JUMP)  ; LAB_00529b99
    MOV EAX,0x1                         ; 00529bf7
        ;   Label: LAB_00529bf7
    POP ESI                             ; 00529bfc
    POP EDI                             ; 00529bfd
    ADD ESP,0x4                         ; 00529bfe
    POP EBP                             ; 00529c01
    POP EBX                             ; 00529c02
    RET                                 ; 00529c03


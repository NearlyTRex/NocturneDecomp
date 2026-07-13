; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00416cc0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   FUN_00417d70
;   FUN_0041cb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416cc0
        ;   Label: FUN_00416cc0
    SUB ESP,0xc                         ; 00416cc1
    MOV EBX,dword ptr [ESP + 0x14]      ; 00416cc4
    PUSH EBX                            ; 00416cc8
    MOV dword ptr [EBX + 0xf10],0x0     ; 00416cc9
    CALL FUN_00417d70                   ; 00416cd3
        ;   XREF to: 00417d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00417d70()
    ADD ESP,0x4                         ; 00416cd8
    MOV EDX,dword ptr [ESP + 0x18]      ; 00416cdb
    TEST EDX,EDX                        ; 00416cdf
    JNZ 0x00416cf2                      ; 00416ce1
        ;   XREF to: 00416cf2 (CONDITIONAL_JUMP)  ; LAB_00416cf2
    MOV dword ptr [EBX + 0xca4],0x41200000 ; 00416ce3
    ADD ESP,0xc                         ; 00416ced
    POP EBX                             ; 00416cf0
    RET                                 ; 00416cf1
    PUSH EDI                            ; 00416cf2
        ;   Label: LAB_00416cf2
    LEA EAX,[ESP + 0x4]                 ; 00416cf3
    PUSH EAX                            ; 00416cf7
    MOV EDI,0x4116cbe4                  ; 00416cf8
    XOR ECX,ECX                         ; 00416cfd
    PUSH EDX                            ; 00416cff
    LEA EAX,[EBX + 0xcb4]               ; 00416d00
    MOV dword ptr [ESP + 0x14],ECX      ; 00416d06
    PUSH EAX                            ; 00416d0a
    MOV dword ptr [ESP + 0x14],ECX      ; 00416d0b
    MOV dword ptr [ESP + 0x10],EDI      ; 00416d0f
    CALL FUN_0041cb40                   ; 00416d13
        ;   XREF to: 0041cb40 (UNCONDITIONAL_CALL)  ; undefined FUN_0041cb40()
    ADD ESP,0xc                         ; 00416d18
    POP EDI                             ; 00416d1b
    MOV dword ptr [EBX + 0xca4],0x41200000 ; 00416d1c
    ADD ESP,0xc                         ; 00416d26
    POP EBX                             ; 00416d29
    RET                                 ; 00416d2a


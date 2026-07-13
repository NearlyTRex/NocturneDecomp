; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004029f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
; Local Variables:
; undefined        Stack[-0x1010]:1  local_1010
; undefined4       Stack[-0x10]:4  local_10
;
; Called Functions:
;   FUN_00402980
;   FUN_00563a08
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004029f0
        ;   Label: FUN_004029f0
    PUSH ESI                            ; 004029f1
    PUSH EDI                            ; 004029f2
    SUB ESP,0x1004                      ; 004029f3
    LEA EAX,[ESP + 0x1024]              ; 004029f9
    MOV dword ptr [ESP + 0x1000],EAX    ; 00402a00
    LEA EAX,[ESP + 0x1000]              ; 00402a07
    PUSH EAX                            ; 00402a0e
    MOV EDX,dword ptr [ESP + 0x1024]    ; 00402a0f
    PUSH EDX                            ; 00402a16
    LEA EAX,[ESP + 0x8]                 ; 00402a17
    PUSH EAX                            ; 00402a1b
    CALL FUN_00563a08                   ; 00402a1c
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a08()
    ADD ESP,0xc                         ; 00402a21
    MOV EBX,dword ptr [ESP + 0x101c]    ; 00402a24
    PUSH EBX                            ; 00402a2b
    MOV ESI,dword ptr [ESP + 0x101c]    ; 00402a2c
    PUSH ESI                            ; 00402a33
    MOV EDI,dword ptr [ESP + 0x101c]    ; 00402a34
    PUSH EDI                            ; 00402a3b
    LEA EAX,[ESP + 0xc]                 ; 00402a3c
    XOR ECX,ECX                         ; 00402a40
    PUSH EAX                            ; 00402a42
    MOV dword ptr [ESP + 0x1010],ECX    ; 00402a43
    CALL FUN_00402980                   ; 00402a4a
        ;   XREF to: 00402980 (UNCONDITIONAL_CALL)  ; undefined FUN_00402980()
    ADD ESP,0x10                        ; 00402a4f
    ADD ESP,0x1004                      ; 00402a52
    POP EDI                             ; 00402a58
    POP ESI                             ; 00402a59
    POP EBX                             ; 00402a5a
    RET                                 ; 00402a5b


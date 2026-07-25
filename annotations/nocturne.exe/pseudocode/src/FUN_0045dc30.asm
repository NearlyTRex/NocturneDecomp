; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045dc30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
; Local Variables:
; undefined        Stack[-0x1010]:1  local_1010
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_0045e370 at 0045e835
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_00563a08
;   FUN_0045dbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045dc30
        ;   Label: FUN_0045dc30
    PUSH ESI                            ; 0045dc31
    PUSH EDI                            ; 0045dc32
    SUB ESP,0x1004                      ; 0045dc33
    LEA EAX,[ESP + 0x1024]              ; 0045dc39
    MOV dword ptr [ESP + 0x1000],EAX    ; 0045dc40
    LEA EAX,[ESP + 0x1000]              ; 0045dc47
    PUSH EAX                            ; 0045dc4e
    MOV EDX,dword ptr [ESP + 0x1024]    ; 0045dc4f
    PUSH EDX                            ; 0045dc56
    LEA EAX,[ESP + 0x8]                 ; 0045dc57
    PUSH EAX                            ; 0045dc5b
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 0045dc5c
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_00563a08()
    ADD ESP,0xc                         ; 0045dc61
    MOV EBX,dword ptr [ESP + 0x101c]    ; 0045dc64
    PUSH EBX                            ; 0045dc6b
    MOV ESI,dword ptr [ESP + 0x101c]    ; 0045dc6c
    PUSH ESI                            ; 0045dc73
    LEA EAX,[ESP + 0x8]                 ; 0045dc74
    PUSH EAX                            ; 0045dc78
    MOV EDI,dword ptr [ESP + 0x1020]    ; 0045dc79
    XOR ECX,ECX                         ; 0045dc80
    PUSH EDI                            ; 0045dc82
    MOV dword ptr [ESP + 0x1010],ECX    ; 0045dc83
    CALL FUN_0045dbd0                   ; 0045dc8a
        ;   XREF to: 0045dbd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045dbd0()
    ADD ESP,0x10                        ; 0045dc8f
    ADD ESP,0x1004                      ; 0045dc92
    POP EDI                             ; 0045dc98
    POP ESI                             ; 0045dc99
    POP EBX                             ; 0045dc9a
    RET                                 ; 0045dc9b


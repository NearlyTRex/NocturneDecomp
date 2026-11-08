; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f4d70(int param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined        Stack[-0x68]:1  local_68
;
; XREF[4]:
;   FUN_004d27b0 at 004d547f
;   FUN_004f5760 at 004f57a2
;   FUN_00544460 at 005498be
;   FUN_005763b0 at 00576464
;
; Referenced Globals:
;   undefined4 DAT_005e58ee
;
; Called Functions:
;   FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4d70
        ;   Label: FUN_004f4d70
    SUB ESP,0x64                        ; 004f4d71
    MOV EDX,dword ptr [ESP + 0x74]      ; 004f4d74
    PUSH EDX                            ; 004f4d78
    PUSH 0x5e58ee                       ; 004f4d79 | DAT_005e58ee
    LEA EAX,[ESP + 0x8]                 ; 004f4d7e
    PUSH EAX                            ; 004f4d82
    CALL FUN_005bfb40                   ; 004f4d83
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0xc                         ; 004f4d88
    MOV EAX,ESP                         ; 004f4d8b
    PUSH EAX                            ; 004f4d8d
    MOV ECX,dword ptr [ESP + 0x74]      ; 004f4d8e
    MOV EDX,dword ptr [ESP + 0x70]      ; 004f4d92
    PUSH ECX                            ; 004f4d96
    MOV EBX,dword ptr [ESP + 0x74]      ; 004f4d97
    MOV EDX,dword ptr [EDX + 0x200]     ; 004f4d9b
    PUSH EBX                            ; 004f4da1
    CALL dword ptr [EDX + 0x8]          ; 004f4da2
    ADD ESP,0xc                         ; 004f4da5
    ADD ESP,0x64                        ; 004f4da8
    POP EBX                             ; 004f4dab
    RET                                 ; 004f4dac


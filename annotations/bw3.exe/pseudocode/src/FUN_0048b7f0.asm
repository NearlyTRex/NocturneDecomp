; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0048b7f0(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   FUN_0048c2e0 at 0048c447
;   FUN_00491f40 at 00494169
;
; Referenced Globals:
;   undefined4 DAT_01c734b0
;
; Called Functions:
;   FUN_005a2898
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0048b7f0
        ;   Label: FUN_0048b7f0
    LEA EAX,[ESP + 0xc]                 ; 0048b7f3
    MOV dword ptr [ESP],EAX             ; 0048b7f7
    MOV EAX,ESP                         ; 0048b7fa
    PUSH EAX                            ; 0048b7fc
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048b7fd
    PUSH EDX                            ; 0048b801
    PUSH 0x1c734b0                      ; 0048b802 | DAT_01c734b0
    CALL FUN_005a2898                   ; 0048b807
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; undefined FUN_005a2898()
    ADD ESP,0xc                         ; 0048b80c
    XOR ECX,ECX                         ; 0048b80f
    XOR EAX,EAX                         ; 0048b811
    MOV dword ptr [ESP],ECX             ; 0048b813
    ADD ESP,0x4                         ; 0048b816
    RET                                 ; 0048b819


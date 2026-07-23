; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CCrater_load_FUN_00487d50(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_load_FUN_0048c7d0 at 0048c82f
;
; Referenced Globals:
;   TerminatedCString s_d_d_f_f_005812b8
;   TerminatedCString s_f_f_f_005812c5
;   TerminatedCString s_f_f_f_005812cf
;   TerminatedCString s_f_f_f_005812d9
;   TerminatedCString s_f_f_f_005812e3
;   TerminatedCString s_f_f_f_005812ed
;   TerminatedCString s_f_f_f_005812f7
;
; Called Functions:
;   crt_stdio.c_fscanf_FUN_00563350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00487d50
        ;   Label: core_fire.cpp_CCrater_load_FUN_00487d50
    PUSH ESI                            ; 00487d51
    PUSH EDI                            ; 00487d52
    PUSH EBP                            ; 00487d53
    SUB ESP,0x4                         ; 00487d54
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00487d57
    MOV EAX,dword ptr [ESP + 0x18]      ; 00487d5b
    ADD EAX,0x18                        ; 00487d5f
    PUSH EAX                            ; 00487d62
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00487d63
    ADD EAX,0x8                         ; 00487d67
    PUSH EAX                            ; 00487d6a
    MOV EAX,dword ptr [ESP + 0x20]      ; 00487d6b
    ADD EAX,0x4                         ; 00487d6f
    PUSH EAX                            ; 00487d72
    MOV EDX,dword ptr [ESP + 0x24]      ; 00487d73
    PUSH EDX                            ; 00487d77
    PUSH 0x5812b8                       ; 00487d78 | = "%d,%d,%f,%f\n"
    PUSH EBP                            ; 00487d7d
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00487d7e
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x18                        ; 00487d83
    MOV EAX,dword ptr [ESP + 0x18]      ; 00487d86
    ADD EAX,0x14                        ; 00487d8a
    PUSH EAX                            ; 00487d8d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00487d8e
    ADD EAX,0x10                        ; 00487d92
    PUSH EAX                            ; 00487d95
    MOV EAX,dword ptr [ESP + 0x20]      ; 00487d96
    ADD EAX,0xc                         ; 00487d9a
    PUSH EAX                            ; 00487d9d
    PUSH 0x5812c5                       ; 00487d9e | = "%f,%f,%f\n"
    PUSH EBP                            ; 00487da3
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00487da4
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 00487da9
    XOR EBX,EBX                         ; 00487dac
    MOV EAX,dword ptr [ESP + 0x18]      ; 00487dae
    MOV EDI,dword ptr [ESP + 0x18]      ; 00487db2
    MOV ESI,dword ptr [ESP + 0x18]      ; 00487db6
    ADD EAX,0x1c                        ; 00487dba
    ADD EDI,0x20                        ; 00487dbd
    ADD ESI,0x24                        ; 00487dc0
    MOV dword ptr [ESP],EAX             ; 00487dc3
    IMUL EAX,EBX,0xc                    ; 00487dc6
        ;   Label: LAB_00487dc6
    PUSH ESI                            ; 00487dc9
    MOV ECX,dword ptr [ESP + 0x4]       ; 00487dca
    PUSH EDI                            ; 00487dce
    ADD EAX,ECX                         ; 00487dcf
    PUSH EAX                            ; 00487dd1
    PUSH 0x5812cf                       ; 00487dd2 | = "%f,%f,%f\n"
    ADD ESI,0xc                         ; 00487dd7
    PUSH EBP                            ; 00487dda
    ADD EDI,0xc                         ; 00487ddb
    INC EBX                             ; 00487dde
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00487ddf
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 00487de4
    CMP EBX,0x3                         ; 00487de7
    JL 0x00487dc6                       ; 00487dea
        ;   XREF to: 00487dc6 (CONDITIONAL_JUMP)  ; LAB_00487dc6
    MOV EAX,dword ptr [ESP + 0x18]      ; 00487dec
    ADD EAX,0x48                        ; 00487df0
    PUSH EAX                            ; 00487df3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00487df4
    ADD EAX,0x44                        ; 00487df8
    PUSH EAX                            ; 00487dfb
    MOV EAX,dword ptr [ESP + 0x20]      ; 00487dfc
    ADD EAX,0x40                        ; 00487e00
    PUSH EAX                            ; 00487e03
    PUSH 0x5812d9                       ; 00487e04 | = "%f,%f,%f\n"
    PUSH EBP                            ; 00487e09
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00487e0a
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 00487e0f
    MOV EAX,dword ptr [ESP + 0x18]      ; 00487e12
    ADD EAX,0x54                        ; 00487e16
    PUSH EAX                            ; 00487e19
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00487e1a
    ADD EAX,0x50                        ; 00487e1e
    PUSH EAX                            ; 00487e21
    MOV EAX,dword ptr [ESP + 0x20]      ; 00487e22
    ADD EAX,0x4c                        ; 00487e26
    PUSH EAX                            ; 00487e29
    PUSH 0x5812e3                       ; 00487e2a | = "%f,%f,%f\n"
    PUSH EBP                            ; 00487e2f
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00487e30
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 00487e35
    MOV EAX,dword ptr [ESP + 0x18]      ; 00487e38
    ADD EAX,0x60                        ; 00487e3c
    PUSH EAX                            ; 00487e3f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00487e40
    ADD EAX,0x5c                        ; 00487e44
    PUSH EAX                            ; 00487e47
    MOV EAX,dword ptr [ESP + 0x20]      ; 00487e48
    ADD EAX,0x58                        ; 00487e4c
    PUSH EAX                            ; 00487e4f
    PUSH 0x5812ed                       ; 00487e50 | = "%f,%f,%f\n"
    PUSH EBP                            ; 00487e55
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00487e56
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 00487e5b
    MOV EAX,dword ptr [ESP + 0x18]      ; 00487e5e
    ADD EAX,0x6c                        ; 00487e62
    PUSH EAX                            ; 00487e65
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00487e66
    ADD EAX,0x68                        ; 00487e6a
    PUSH EAX                            ; 00487e6d
    MOV EAX,dword ptr [ESP + 0x20]      ; 00487e6e
    ADD EAX,0x64                        ; 00487e72
    PUSH EAX                            ; 00487e75
    PUSH 0x5812f7                       ; 00487e76 | = "%f,%f,%f\n"
    PUSH EBP                            ; 00487e7b
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00487e7c
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 00487e81
    ADD ESP,0x4                         ; 00487e84
    POP EBP                             ; 00487e87
    POP EDI                             ; 00487e88
    POP ESI                             ; 00487e89
    POP EBX                             ; 00487e8a
    RET                                 ; 00487e8b


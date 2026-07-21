; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gore_cpp_CBloodSplat_load_FUN_004af160(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_gore.cpp_CGore_load_FUN_004b0820 at 004b08a7
;
; Referenced Globals:
;   string s_%f,%f,%f_005850c0
;   string s_%d,%d,%d_005850ca
;   string s_%f,%f,%f_005850d4
;   string s_%d,%d,%d,%d,%d,%d,%d_005850de
;
; Called Functions:
;   crt_stdio.c_fscanf_FUN_00563350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af160
        ;   Label: core_gore.cpp_CBloodSplat_load_FUN_004af160
    PUSH ESI                            ; 004af161
    MOV EBX,dword ptr [ESP + 0xc]       ; 004af162
    MOV ESI,dword ptr [ESP + 0x10]      ; 004af166
    LEA EAX,[EBX + 0xc]                 ; 004af16a
    PUSH EAX                            ; 004af16d
    LEA EAX,[EBX + 0x8]                 ; 004af16e
    PUSH EAX                            ; 004af171
    LEA EAX,[EBX + 0x4]                 ; 004af172
    PUSH EAX                            ; 004af175
    PUSH 0x5850c0                       ; 004af176 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004af17b
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004af17c
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 004af181
    PUSH EBX                            ; 004af184
    LEA EAX,[EBX + 0x14]                ; 004af185
    PUSH EAX                            ; 004af188
    LEA EAX,[EBX + 0x10]                ; 004af189
    PUSH EAX                            ; 004af18c
    PUSH 0x5850ca                       ; 004af18d | = "%d,%d,%d\n"
    PUSH ESI                            ; 004af192
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004af193
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 004af198
    LEA EAX,[EBX + 0x1c]                ; 004af19b
    PUSH EAX                            ; 004af19e
    LEA EAX,[EBX + 0x20]                ; 004af19f
    PUSH EAX                            ; 004af1a2
    LEA EAX,[EBX + 0x18]                ; 004af1a3
    PUSH EAX                            ; 004af1a6
    PUSH 0x5850d4                       ; 004af1a7 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004af1ac
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004af1ad
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 004af1b2
    LEA EAX,[EBX + 0x40]                ; 004af1b5
    PUSH EAX                            ; 004af1b8
    LEA EAX,[EBX + 0x3c]                ; 004af1b9
    PUSH EAX                            ; 004af1bc
    LEA EAX,[EBX + 0x38]                ; 004af1bd
    PUSH EAX                            ; 004af1c0
    LEA EAX,[EBX + 0x34]                ; 004af1c1
    PUSH EAX                            ; 004af1c4
    LEA EAX,[EBX + 0x30]                ; 004af1c5
    PUSH EAX                            ; 004af1c8
    LEA EAX,[EBX + 0x2c]                ; 004af1c9
    PUSH EAX                            ; 004af1cc
    ADD EBX,0x28                        ; 004af1cd
    PUSH EBX                            ; 004af1d0
    PUSH 0x5850de                       ; 004af1d1 | = "%d,%d,%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 004af1d6
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004af1d7
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x24                        ; 004af1dc
    POP ESI                             ; 004af1df
    POP EBX                             ; 004af1e0
    RET                                 ; 004af1e1


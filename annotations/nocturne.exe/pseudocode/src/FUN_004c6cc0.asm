; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004c6cc0(int param_1,int param_2,int param_3)
;
;
; XREF[8]:
;   FUN_00404710 at 00404721
;   FUN_004047e0 at 0040483a
;   FUN_00405e10 at 00405f8b
;   FUN_004060b0 at 00406119
;   FUN_00407a20 at 00407c30
;   FUN_00407cc0 at 00407d1a
;   FUN_00408c10 at 00408c68
;   FUN_00408d10 at 00408d6b
;
; Referenced Globals:
;   undefined4 DAT_005bacd0
;   undefined4 DAT_01c039dc
;   undefined4 DAT_01c039e0
;   undefined4 DAT_01c039e4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c6cc0
        ;   Label: FUN_004c6cc0
    MOV EDX,dword ptr [0x01c039dc]      ; 004c6cc4 | DAT_01c039dc
    IMUL EDX                            ; 004c6cca
    SHRD EAX,EDX,0x10                   ; 004c6ccc
    MOV EDX,dword ptr [0x01c039e0]      ; 004c6cd0 | DAT_01c039e0
    MOV ECX,EAX                         ; 004c6cd6
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c6cd8
    IMUL EDX                            ; 004c6cdc
    SHRD EAX,EDX,0x10                   ; 004c6cde
    MOV EDX,dword ptr [0x01c039e4]      ; 004c6ce2 | DAT_01c039e4
    ADD ECX,EAX                         ; 004c6ce8
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c6cea
    IMUL EDX                            ; 004c6cee
    SHRD EAX,EDX,0x10                   ; 004c6cf0
    LEA EDX,[ECX + EAX*0x1]             ; 004c6cf4
    NEG EDX                             ; 004c6cf7
    TEST EDX,EDX                        ; 004c6cf9
    JL 0x004c6d4b                       ; 004c6cfb
        ;   XREF to: 004c6d4b (CONDITIONAL_JUMP)  ; LAB_004c6d4b
    CMP EDX,0xffff                      ; 004c6cfd
    JLE 0x004c6d0a                      ; 004c6d03
        ;   XREF to: 004c6d0a (CONDITIONAL_JUMP)  ; LAB_004c6d0a
    MOV EDX,0xffff                      ; 004c6d05
    MOV ECX,0xffff                      ; 004c6d0a
        ;   Label: LAB_004c6d0a
    SUB ECX,dword ptr [0x005bacd0]      ; 004c6d0f | DAT_005bacd0
    MOV EAX,EDX                         ; 004c6d15
    MOV EDX,ECX                         ; 004c6d17
    IMUL EDX                            ; 004c6d19
    SHRD EAX,EDX,0x10                   ; 004c6d1b
    MOV EDX,dword ptr [0x005bacd0]      ; 004c6d1f | DAT_005bacd0
    ADD EDX,EAX                         ; 004c6d25
    TEST EDX,EDX                        ; 004c6d27
    JL 0x004c6d4f                       ; 004c6d29
        ;   XREF to: 004c6d4f (CONDITIONAL_JUMP)  ; LAB_004c6d4f
    CMP EDX,0xffff                      ; 004c6d2b
    JLE 0x004c6d38                      ; 004c6d31
        ;   XREF to: 004c6d38 (CONDITIONAL_JUMP)  ; LAB_004c6d38
    MOV EDX,0xffff                      ; 004c6d33
    MOV EAX,EDX                         ; 004c6d38
        ;   Label: LAB_004c6d38
    SAR EDX,0x1f                        ; 004c6d3a
    SHL EDX,0x4                         ; 004c6d3d
    SBB EAX,EDX                         ; 004c6d40
    SAR EAX,0x4                         ; 004c6d42
    ADD EAX,0x100                       ; 004c6d45
    RET                                 ; 004c6d4a
    XOR EDX,EDX                         ; 004c6d4b
        ;   Label: LAB_004c6d4b
    JMP 0x004c6d0a                      ; 004c6d4d
        ;   XREF to: 004c6d0a (UNCONDITIONAL_JUMP)  ; LAB_004c6d0a
    XOR EDX,EDX                         ; 004c6d4f
        ;   Label: LAB_004c6d4f
    MOV EAX,EDX                         ; 004c6d51
    SAR EDX,0x1f                        ; 004c6d53
    SHL EDX,0x4                         ; 004c6d56
    SBB EAX,EDX                         ; 004c6d59
    SAR EAX,0x4                         ; 004c6d5b
    ADD EAX,0x100                       ; 004c6d5e
    RET                                 ; 004c6d63


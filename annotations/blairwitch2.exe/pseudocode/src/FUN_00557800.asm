; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00557800(void)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005e9a3b
;   TerminatedCString s_Commit_hardware_sfx_3d_b_005ea472
;   undefined4 DAT_0264a5d0
;
; Called Functions:
;   FUN_005549c0
;   FUN_00554ad0
;   FUN_005b7790
;
; *****************************************************************************

section .text

    SUB ESP,0x190                       ; 00557800
        ;   Label: FUN_00557800
    MOV EDX,dword ptr [0x0264a5d0]      ; 00557806 | DAT_0264a5d0
    TEST EDX,EDX                        ; 0055780c
    JNZ 0x00557817                      ; 0055780e
        ;   XREF to: 00557817 (CONDITIONAL_JUMP)  ; LAB_00557817
    ADD ESP,0x190                       ; 00557810
        ;   Label: LAB_00557810
    RET                                 ; 00557816
    MOV EAX,EDX                         ; 00557817
        ;   Label: LAB_00557817
    PUSH EAX                            ; 00557819
    MOV EDX,dword ptr [EDX]             ; 0055781a
    CALL dword ptr [EDX + 0x44]         ; 0055781c
    TEST EAX,EAX                        ; 0055781f
    JZ 0x00557810                       ; 00557821
        ;   XREF to: 00557810 (CONDITIONAL_JUMP)  ; LAB_00557810
    PUSH EAX                            ; 00557823
    CALL FUN_00554ad0                   ; 00557824
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00554ad0()
    ADD ESP,0x4                         ; 00557829
    PUSH EAX                            ; 0055782c
    PUSH 0x5ea472                       ; 0055782d | = "Commit hardware sfx 3d buffer settings"
    PUSH 0x5e9a3b                       ; 00557832 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 00557837
    PUSH EAX                            ; 0055783b
    CALL FUN_005b7790                   ; 0055783c
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x10                        ; 00557841
    MOV EAX,ESP                         ; 00557844
    PUSH EAX                            ; 00557846
    CALL FUN_005549c0                   ; 00557847
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005549c0()
    ADD ESP,0x4                         ; 0055784c
    ADD ESP,0x190                       ; 0055784f
    RET                                 ; 00557855


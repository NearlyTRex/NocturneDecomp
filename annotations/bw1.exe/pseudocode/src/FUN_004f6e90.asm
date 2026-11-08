; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_004f6e90(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004f70e0 at 004f7553
;
; Referenced Globals:
;   TerminatedCString s_anon_005e6040
;
; Called Functions:
;   FUN_005c04b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f6e90
        ;   Label: FUN_004f6e90
    LEA EAX,[EDX + 0x200]               ; 004f6e94
    PUSH EAX                            ; 004f6e9a
    LEA EAX,[EDX + 0x100]               ; 004f6e9b
    PUSH EAX                            ; 004f6ea1
    PUSH EDX                            ; 004f6ea2
    PUSH 0x5e6040                       ; 004f6ea3 | = "\"%[^\"]\", \"%[^\"]\", \"%[^\"]\"\n"
    MOV EDX,dword ptr [ESP + 0x18]      ; 004f6ea8
    PUSH EDX                            ; 004f6eac
    CALL FUN_005c04b0                   ; 004f6ead
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    ADD ESP,0x14                        ; 004f6eb2
    CMP EAX,0x3                         ; 004f6eb5
    SETZ AL                             ; 004f6eb8
    AND EAX,0xff                        ; 004f6ebb
    RET                                 ; 004f6ec0


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00478fb0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x214]:1  local_214
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[16]:
;   FUN_0044fff0 at 0045020c
;   FUN_0045da30 at 0045da6b
;   FUN_004a1d00 at 004a2fc9
;   FUN_004bcba0 at 004bcc15
;   FUN_004c0cd0 at 004c0d5c
;   FUN_004d77d0 at 004d780b
;   FUN_0051f6d0 at 0051f704
;   FUN_0052aea0 at 0052aeb2
;   FUN_00530bf0 at 00530c10
;   FUN_00543e00 at 00543e27
;   ... and 6 more
;
; Called Functions:
;   FUN_00478e20
;   FUN_00478e90
;
; *****************************************************************************

section .text

    SUB ESP,0x214                       ; 00478fb0
        ;   Label: FUN_00478fb0
    MOV EDX,dword ptr [ESP + 0x21c]     ; 00478fb6
    PUSH EDX                            ; 00478fbd
    MOV ECX,dword ptr [ESP + 0x21c]     ; 00478fbe
    PUSH ECX                            ; 00478fc5
    LEA EAX,[ESP + 0x8]                 ; 00478fc6
    PUSH EAX                            ; 00478fca
    CALL FUN_00478e20                   ; 00478fcb
        ;   XREF to: 00478e20 (UNCONDITIONAL_CALL)  ; undefined FUN_00478e20()
    ADD ESP,0xc                         ; 00478fd0
    MOV EAX,ESP                         ; 00478fd3
    PUSH EAX                            ; 00478fd5
    CALL FUN_00478e90                   ; 00478fd6
        ;   XREF to: 00478e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00478e90()
    ADD ESP,0x4                         ; 00478fdb
    TEST EAX,EAX                        ; 00478fde
    JZ 0x00478ff0                       ; 00478fe0
        ;   XREF to: 00478ff0 (CONDITIONAL_JUMP)  ; LAB_00478ff0
    MOV EAX,dword ptr [ESP + 0x204]     ; 00478fe2
    ADD ESP,0x214                       ; 00478fe9
    RET                                 ; 00478fef
    MOV EAX,0xffffffff                  ; 00478ff0
        ;   Label: LAB_00478ff0
    ADD ESP,0x214                       ; 00478ff5
    RET                                 ; 00478ffb


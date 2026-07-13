; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00479f70(int param_1,int param_2)
;
;
; XREF[23]:
;   FUN_00413040 at 00413157
;   FUN_00414930 at 00414a47
;   FUN_004151b0 at 004151c1
;   FUN_00415900 at 0041596a
;   FUN_00419f40 at 00419f89
;   FUN_00420c40 at 00420d67
;   FUN_004219d0 at 004219e1
;   FUN_0043c5e0 at 0043c63c
;   FUN_00454e30 at 00454e85
;   FUN_0045a6f0 at 0045a7f0
;   ... and 13 more
;
; Referenced Globals:
;   undefined4 DAT_00765a98
;
; Called Functions:
;   FUN_0040d890
;   FUN_00428510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479f70
        ;   Label: FUN_00479f70
    PUSH ESI                            ; 00479f71
    PUSH EBP                            ; 00479f72
    MOV EBX,dword ptr [ESP + 0x10]      ; 00479f73
    MOV ESI,dword ptr [ESP + 0x14]      ; 00479f77
    PUSH EBX                            ; 00479f7b
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00479f7c
    CALL dword ptr [EAX + 0xf0]         ; 00479f82
    ADD ESP,0x4                         ; 00479f88
    PUSH ESI                            ; 00479f8b
    PUSH EBX                            ; 00479f8c
    CALL FUN_00428510                   ; 00479f8d
        ;   XREF to: 00428510 (UNCONDITIONAL_CALL)  ; undefined FUN_00428510()
    FLD float ptr [ESI + 0x4]           ; 00479f92
    FLDZ                                ; 00479f95
    ADD ESP,0x8                         ; 00479f97
    FCOMPP                              ; 00479f9a
    FNSTSW AX                           ; 00479f9c
    SAHF                                ; 00479f9e
    JC 0x00479fa5                       ; 00479f9f
        ;   XREF to: 00479fa5 (CONDITIONAL_JUMP)  ; LAB_00479fa5
    POP EBP                             ; 00479fa1
        ;   Label: LAB_00479fa1
    POP ESI                             ; 00479fa2
    POP EBX                             ; 00479fa3
    RET                                 ; 00479fa4
    MOV EDX,dword ptr [0x00765a98]      ; 00479fa5 | DAT_00765a98
        ;   Label: LAB_00479fa5
    PUSH EDX                            ; 00479fab
    MOV ECX,dword ptr [ESI + 0x38]      ; 00479fac
    PUSH ECX                            ; 00479faf
    CALL FUN_0040d890                   ; 00479fb0
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d890()
    ADD ESP,0x8                         ; 00479fb5
    MOV EDX,EAX                         ; 00479fb8
    TEST EAX,EAX                        ; 00479fba
    JNZ 0x00479fd5                      ; 00479fbc
        ;   XREF to: 00479fd5 (CONDITIONAL_JUMP)  ; LAB_00479fd5
    PUSH EDI                            ; 00479fbe
    MOV EDI,dword ptr [0x00765a98]      ; 00479fbf | DAT_00765a98
    PUSH EDI                            ; 00479fc5
    MOV EBP,dword ptr [ESI + 0x34]      ; 00479fc6
    PUSH EBP                            ; 00479fc9
    CALL FUN_0040d890                   ; 00479fca
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d890()
    ADD ESP,0x8                         ; 00479fcf
    MOV EDX,EAX                         ; 00479fd2
    POP EDI                             ; 00479fd4
    TEST EDX,EDX                        ; 00479fd5
        ;   Label: LAB_00479fd5
    JZ 0x00479fa1                       ; 00479fd7
        ;   XREF to: 00479fa1 (CONDITIONAL_JUMP)  ; LAB_00479fa1
    MOV dword ptr [EBX + 0xbca8],0x41700000 ; 00479fd9
    MOV dword ptr [EBX + 0xbc98],0x1    ; 00479fe3
    MOV dword ptr [EBX + 0xbca4],EDX    ; 00479fed
    POP EBP                             ; 00479ff3
    POP ESI                             ; 00479ff4
    POP EBX                             ; 00479ff5
    RET                                 ; 00479ff6


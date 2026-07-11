; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040c900(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[10]:
;   FUN_0040d2d0 at 0040d33c
;   FUN_0041ec60 at 0041ed0b
;   FUN_004244b0 at 0042452e
;   FUN_0044bb10 at 0044bbbd
;   FUN_004796c0 at 00479725
;   FUN_004b49a0 at 004b4a95
;   FUN_004eed10 at 004eed6a
;   FUN_004f6fa0 at 004f706e
;   FUN_00548170 at 0054818b
;   FUN_00554170 at 005541bb
;
; Referenced Globals:
;   undefined4 DAT_00577c81
;   undefined4 DAT_00577c84
;   string s_Integer_value_005acc78
;   undefined1 DAT_005acc90
;   undefined4 DAT_00763e84
;   undefined4 DAT_00763e88
;
; Called Functions:
;   FUN_0040c320
;   FUN_0040c3a0
;   FUN_00563350
;   FUN_005644f0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040c900
        ;   Label: FUN_0040c900
    PUSH EDI                            ; 0040c901
    PUSH EBP                            ; 0040c902
    MOV EAX,dword ptr [ESP + 0x10]      ; 0040c903
    CMP dword ptr [0x00763e88],0x1      ; 0040c907 | DAT_00763e88
    JNZ 0x0040c954                      ; 0040c90e
        ;   XREF to: 0040c954 (CONDITIONAL_JUMP)  ; LAB_0040c954
    PUSH EAX                            ; 0040c910
    PUSH 0x577c81                       ; 0040c911 | DAT_00577c81
    MOV ESI,dword ptr [0x00763e84]      ; 0040c916 | DAT_00763e84
    PUSH ESI                            ; 0040c91c
    CALL FUN_00563350                   ; 0040c91d
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined FUN_00563350()
    ADD ESP,0xc                         ; 0040c922
    CMP EAX,0x1                         ; 0040c925
    JNZ 0x0040c940                      ; 0040c928
        ;   XREF to: 0040c940 (CONDITIONAL_JUMP)  ; LAB_0040c940
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040c92a
        ;   Label: LAB_0040c92a
    PUSH EBP                            ; 0040c92e
    PUSH 0x5acc78                       ; 0040c92f | = "Integer value"
    CALL FUN_0040c3a0                   ; 0040c934
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x8                         ; 0040c939
    POP EBP                             ; 0040c93c
    POP EDI                             ; 0040c93d
    POP ESI                             ; 0040c93e
    RET                                 ; 0040c93f
    MOV EDI,dword ptr [ESP + 0x14]      ; 0040c940
        ;   Label: LAB_0040c940
    PUSH EDI                            ; 0040c944
    PUSH 0x5acc78                       ; 0040c945 | = "Integer value"
    CALL FUN_0040c320                   ; 0040c94a
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c320()
    ADD ESP,0x8                         ; 0040c94f
    JMP 0x0040c92a                      ; 0040c952
        ;   XREF to: 0040c92a (UNCONDITIONAL_JUMP)  ; LAB_0040c92a
    PUSH EBX                            ; 0040c954
        ;   Label: LAB_0040c954
    MOV ECX,dword ptr [EAX]             ; 0040c955
    PUSH ECX                            ; 0040c957
    PUSH 0x5acc90                       ; 0040c958 | DAT_005acc90
    PUSH 0x577c84                       ; 0040c95d | DAT_00577c84
    MOV EBX,dword ptr [0x00763e84]      ; 0040c962 | DAT_00763e84
    PUSH EBX                            ; 0040c968
    CALL FUN_005644f0                   ; 0040c969
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005644f0()
    ADD ESP,0x10                        ; 0040c96e
    POP EBX                             ; 0040c971
    JMP 0x0040c92a                      ; 0040c972
        ;   XREF to: 0040c92a (UNCONDITIONAL_JUMP)  ; LAB_0040c92a


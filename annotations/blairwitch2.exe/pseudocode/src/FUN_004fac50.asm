; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fac50(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_005340b0 at 005340ed
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   FUN_00469670
;   FUN_004faa10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004fac50
        ;   Label: FUN_004fac50
    PUSH EDX                            ; 004fac54
    MOV ECX,dword ptr [ESP + 0x8]       ; 004fac55
    PUSH ECX                            ; 004fac59
    CALL FUN_004faa10                   ; 004fac5a
        ;   XREF to: 004faa10 (UNCONDITIONAL_CALL)  ; undefined FUN_004faa10()
    ADD ESP,0x8                         ; 004fac5f
    TEST EAX,EAX                        ; 004fac62
    JNZ 0x004fac67                      ; 004fac64
        ;   XREF to: 004fac67 (CONDITIONAL_JUMP)  ; LAB_004fac67
    RET                                 ; 004fac66
    PUSH EBX                            ; 004fac67
        ;   Label: LAB_004fac67
    MOV EAX,dword ptr [ESP + 0x8]       ; 004fac68
    ADD EAX,0xe8                        ; 004fac6c
    PUSH EAX                            ; 004fac71
    MOV EBX,dword ptr [0x0060b280]      ; 004fac72 | DAT_0060b280
    PUSH EBX                            ; 004fac78 | DAT_01ba5c50
    CALL FUN_00469670                   ; 004fac79
        ;   XREF to: 00469670 (UNCONDITIONAL_CALL)  ; undefined FUN_00469670()
    ADD ESP,0x8                         ; 004fac7e
    POP EBX                             ; 004fac81
    RET                                 ; 004fac82


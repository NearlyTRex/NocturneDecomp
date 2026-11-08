; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f50f0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; XREF[2]:
;   FUN_004f57c0 at 004f5808
;   FUN_004f5870 at 004f594d
;
; Called Functions:
;   FUN_00583260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f50f0
        ;   Label: FUN_004f50f0
    PUSH EDI                            ; 004f50f1
    SUB ESP,0xc                         ; 004f50f2
    MOV EBX,ESI                         ; 004f50f5
    MOV ESI,dword ptr [ESP + 0x18]      ; 004f50f7
    ADD ESI,0x30                        ; 004f50fb
    PUSH ESI                            ; 004f50fe
    MOV EDX,dword ptr [ESP + 0x20]      ; 004f50ff
    PUSH EDX                            ; 004f5103
    LEA ESI,[ESP + 0x8]                 ; 004f5104
    MOV EDI,EBX                         ; 004f5108
    CALL FUN_00583260                   ; 004f510a
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined FUN_00583260()
    LEA ESI,[ESP + 0x8]                 ; 004f510f
    ADD ESP,0x8                         ; 004f5113
    MOVSD ES:EDI,ESI                    ; 004f5116
    MOVSD ES:EDI,ESI                    ; 004f5117
    MOVSD ES:EDI,ESI                    ; 004f5118
    MOV EAX,EBX                         ; 004f5119
    ADD ESP,0xc                         ; 004f511b
    POP EDI                             ; 004f511e
    POP EBX                             ; 004f511f
    RET                                 ; 004f5120


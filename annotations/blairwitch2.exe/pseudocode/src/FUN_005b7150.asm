; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b7150(int param_1,int param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[6]:
;   FUN_00415120 at 004151a8
;   FUN_004f1e90 at 004f1fa4
;   FUN_005020c0 at 0050215a
;   FUN_00511980 at 00511a20
;   FUN_0056fe50 at 0056ff7a
;   FUN_00582ec0 at 00582feb
;
; Called Functions:
;   FUN_005b6510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b7150
        ;   Label: FUN_005b7150
    MOV EDX,dword ptr [ESP + 0x10]      ; 005b7151
    PUSH EDX                            ; 005b7155
    MOV EDX,dword ptr [ESP + 0x10]      ; 005b7156
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b715a
    SUB EAX,EDX                         ; 005b7161
    SHL EAX,0x6                         ; 005b7163
    MOV ECX,dword ptr [ESP + 0x18]      ; 005b7166
    ADD EAX,EDX                         ; 005b716a
    MOV EBX,dword ptr [ESP + 0xc]       ; 005b716c
    SHL EAX,0x3                         ; 005b7170
    PUSH ECX                            ; 005b7173
    ADD EAX,EBX                         ; 005b7174
    PUSH EAX                            ; 005b7176
    CALL FUN_005b6510                   ; 005b7177
        ;   XREF to: 005b6510 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6510()
    ADD ESP,0xc                         ; 005b717c
    POP EBX                             ; 005b717f
    RET                                 ; 005b7180


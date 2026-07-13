; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051ed90(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[4]:
;   FUN_004270e0 at 00427193
;   FUN_00499b00 at 00499b1e
;   FUN_004ddb20 at 004de0b9
;   FUN_005396d0 at 005396ea
;
; Called Functions:
;   FUN_0051e0a0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0051ed90
        ;   Label: FUN_0051ed90
    PUSH EBP                            ; 0051ed91
    SUB ESP,0x10                        ; 0051ed92
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0051ed95
    MOV EBP,dword ptr [ESP + 0x20]      ; 0051ed99
    LEA EAX,[EDI + 0x6a4]               ; 0051ed9d
    CMP EBP,EAX                         ; 0051eda3
    JZ 0x0051edb8                       ; 0051eda5
        ;   XREF to: 0051edb8 (CONDITIONAL_JUMP)  ; LAB_0051edb8
    MOV EDX,dword ptr [EAX]             ; 0051eda7
    MOV dword ptr [EBP],EDX             ; 0051eda9
    MOV EDX,dword ptr [EAX + 0x4]       ; 0051edac
    MOV dword ptr [EBP + 0x4],EDX       ; 0051edaf
    MOV EDX,dword ptr [EAX + 0x8]       ; 0051edb2
    MOV dword ptr [EBP + 0x8],EDX       ; 0051edb5
    PUSH EDI                            ; 0051edb8
        ;   Label: LAB_0051edb8
    CALL FUN_0051e0a0                   ; 0051edb9
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e0a0()
    ADD ESP,0x4                         ; 0051edbe
    MOV EAX,dword ptr [EAX + 0x28558]   ; 0051edc1
    XOR EDX,EDX                         ; 0051edc7
    MOV dword ptr [ESP],EAX             ; 0051edc9
    TEST EAX,EAX                        ; 0051edcc
    JLE 0x0051ee53                      ; 0051edce
        ;   XREF to: 0051ee53 (CONDITIONAL_JUMP)  ; LAB_0051ee53
    PUSH ESI                            ; 0051edd4
    PUSH EBX                            ; 0051edd5
    MOV dword ptr [ESP + 0x10],EDI      ; 0051edd6
    MOV dword ptr [ESP + 0x14],EBP      ; 0051edda
    MOV EBX,EDI                         ; 0051edde
    MOV dword ptr [ESP + 0xc],EDI       ; 0051ede0
    MOV EAX,EBP                         ; 0051ede4
    MOV ESI,dword ptr [ESP + 0xc]       ; 0051ede6
        ;   Label: LAB_0051ede6
    LEA EDI,[EBP + 0xc]                 ; 0051edea
    LEA ESI,[ESI + 0x6b0]               ; 0051eded
    MOVSD ES:EDI,ESI                    ; 0051edf3
    MOVSD ES:EDI,ESI                    ; 0051edf4
    MOVSD ES:EDI,ESI                    ; 0051edf5
    MOVSD ES:EDI,ESI                    ; 0051edf6
    ADD EAX,0x30                        ; 0051edf7
    MOV ESI,dword ptr [ESP + 0x14]      ; 0051edfa
    MOV ECX,dword ptr [EBX + 0xcf0]     ; 0051edfe
    MOV dword ptr [ESI + 0x64c],ECX     ; 0051ee04
    MOV ESI,dword ptr [ESP + 0x10]      ; 0051ee0a
    MOV ECX,0xc                         ; 0051ee0e
    LEA EDI,[EAX + 0x7ac]               ; 0051ee13
    LEA ESI,[ESI + 0xe80]               ; 0051ee19
    ADD EBX,0x4                         ; 0051ee1f
    ADD EBP,0x10                        ; 0051ee22
    MOVSD.REP ES:EDI,ESI                ; 0051ee25
    INC EDX                             ; 0051ee27
    MOV ESI,dword ptr [ESP + 0x10]      ; 0051ee28
    MOV EDI,dword ptr [ESP + 0x14]      ; 0051ee2c
    MOV ECX,dword ptr [ESP + 0xc]       ; 0051ee30
    ADD ESI,0x30                        ; 0051ee34
    ADD EDI,0x4                         ; 0051ee37
    ADD ECX,0x10                        ; 0051ee3a
    MOV dword ptr [ESP + 0x10],ESI      ; 0051ee3d
    MOV dword ptr [ESP + 0x14],EDI      ; 0051ee41
    MOV ESI,dword ptr [ESP + 0x8]       ; 0051ee45
    MOV dword ptr [ESP + 0xc],ECX       ; 0051ee49
    CMP EDX,ESI                         ; 0051ee4d
    JL 0x0051ede6                       ; 0051ee4f
        ;   XREF to: 0051ede6 (CONDITIONAL_JUMP)  ; LAB_0051ede6
    POP EBX                             ; 0051ee51
    POP ESI                             ; 0051ee52
    ADD ESP,0x10                        ; 0051ee53
        ;   Label: LAB_0051ee53
    POP EBP                             ; 0051ee56
    POP EDI                             ; 0051ee57
    RET                                 ; 0051ee58


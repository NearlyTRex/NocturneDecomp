; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057b820(int param_1)
;
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[3]:
;   FUN_00411790 at 004117a4
;   FUN_0048b5d0 at 0048b5e4
;   FUN_004e3de0 at 004e3df4
;
; Called Functions:
;   FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057b820
        ;   Label: FUN_0057b820
    PUSH EDI                            ; 0057b821
    SUB ESP,0x24                        ; 0057b822
    MOV EBX,ESI                         ; 0057b825
    MOV EAX,dword ptr [ESP + 0x30]      ; 0057b827
    ADD EAX,0x158                       ; 0057b82b
    PUSH EAX                            ; 0057b830
    LEA EDI,[ESP + 0x4]                 ; 0057b831
    CALL FUN_004625a0                   ; 0057b835
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625a0()
    MOV ECX,0x6                         ; 0057b83a
    LEA ESI,[EAX + 0x338]               ; 0057b83f
    ADD ESP,0x4                         ; 0057b845
    MOVSD.REP ES:EDI,ESI                ; 0057b848
    XOR EDX,EDX                         ; 0057b84a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0057b84c
    LEA ESI,[ESP + 0x18]                ; 0057b850
    MOV EDI,EBX                         ; 0057b854
    MOV dword ptr [ESP + 0x1c],EAX      ; 0057b856
    MOV EAX,dword ptr [ESP + 0x14]      ; 0057b85a
    MOV dword ptr [ESP + 0x18],EDX      ; 0057b85e
    MOV dword ptr [ESP + 0x20],EAX      ; 0057b862
    MOVSD ES:EDI,ESI                    ; 0057b866
    MOVSD ES:EDI,ESI                    ; 0057b867
    MOVSD ES:EDI,ESI                    ; 0057b868
    MOV EAX,EBX                         ; 0057b869
    ADD ESP,0x24                        ; 0057b86b
    POP EDI                             ; 0057b86e
    POP EBX                             ; 0057b86f
    RET                                 ; 0057b870


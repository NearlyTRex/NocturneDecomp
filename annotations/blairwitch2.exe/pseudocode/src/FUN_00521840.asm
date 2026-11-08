; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00521840(void)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[3]:
;   FUN_004b32c0 at 004b336b
;   FUN_004be8a0 at 004bf6de
;   FUN_005218a0 at 00521923
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_01e65900
;
; Called Functions:
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521840
        ;   Label: FUN_00521840
    SUB ESP,0x8                         ; 00521841
    MOV EDX,dword ptr [0x006141b8]      ; 00521844 | DAT_006141b8
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052184a
    SUB EAX,EDX                         ; 00521851
    SHL EAX,0x3                         ; 00521853
    ADD EDX,EAX                         ; 00521856
    SHL EDX,0x2                         ; 00521858
    MOV EBX,0xb9                        ; 0052185b
    MOV EAX,EDX                         ; 00521860
    SAR EDX,0x1f                        ; 00521862
    IDIV EBX                            ; 00521865
    MOV ECX,dword ptr [0x006141bc]      ; 00521867 | DAT_006141bc
    MOV EDX,ECX                         ; 0052186d
    SUB EDX,EAX                         ; 0052186f
    MOV EAX,EDX                         ; 00521871
    SAR EDX,0x1f                        ; 00521873
    SUB EAX,EDX                         ; 00521876
    SAR EAX,0x1                         ; 00521878
    MOV dword ptr [ESP + 0x4],EAX       ; 0052187a
    FILD dword ptr [ESP + 0x4]          ; 0052187e
    FMUL float ptr [0x01e65900]         ; 00521882 | DAT_01e65900
    CALL FUN_005b7ff0                   ; 00521888
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP]               ; 0052188d
    MOV EAX,dword ptr [ESP]             ; 00521890
    ADD ESP,0x8                         ; 00521893
    POP EBX                             ; 00521896
    RET                                 ; 00521897


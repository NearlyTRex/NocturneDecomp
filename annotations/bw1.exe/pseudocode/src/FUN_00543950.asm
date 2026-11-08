; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00543950(void)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[3]:
;   FUN_004cc2b0 at 004cc35b
;   FUN_004d9260 at 004d98e9
;   FUN_005439b0 at 00543a33
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_01e818b0
;
; Called Functions:
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543950
        ;   Label: FUN_00543950
    SUB ESP,0x8                         ; 00543951
    MOV EDX,dword ptr [0x0061b498]      ; 00543954 | DAT_0061b498
    LEA EAX,[EDX*0x4 + 0x0]             ; 0054395a
    SUB EAX,EDX                         ; 00543961
    SHL EAX,0x3                         ; 00543963
    ADD EDX,EAX                         ; 00543966
    SHL EDX,0x2                         ; 00543968
    MOV EBX,0xb9                        ; 0054396b
    MOV EAX,EDX                         ; 00543970
    SAR EDX,0x1f                        ; 00543972
    IDIV EBX                            ; 00543975
    MOV ECX,dword ptr [0x0061b49c]      ; 00543977 | DAT_0061b49c
    MOV EDX,ECX                         ; 0054397d
    SUB EDX,EAX                         ; 0054397f
    MOV EAX,EDX                         ; 00543981
    SAR EDX,0x1f                        ; 00543983
    SUB EAX,EDX                         ; 00543986
    SAR EAX,0x1                         ; 00543988
    MOV dword ptr [ESP + 0x4],EAX       ; 0054398a
    FILD dword ptr [ESP + 0x4]          ; 0054398e
    FMUL float ptr [0x01e818b0]         ; 00543992 | DAT_01e818b0
    CALL FUN_005c03a0                   ; 00543998
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP]               ; 0054399d
    MOV EAX,dword ptr [ESP]             ; 005439a0
    ADD ESP,0x8                         ; 005439a3
    POP EBX                             ; 005439a6
    RET                                 ; 005439a7


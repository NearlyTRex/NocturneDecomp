; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0046b9f0(int param_1,undefined4 *param_2)
;
;
; XREF[3]:
;   FUN_00463580 at 004635db
;   FUN_00550800 at 0055087d
;   FUN_00554d40 at 00554dbe
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b9f0
        ;   Label: FUN_0046b9f0
    MOV ECX,dword ptr [ESP + 0xc]       ; 0046b9f1
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046b9f5
    ADD EAX,0x1c                        ; 0046b9f9
    MOV EDX,dword ptr [EAX]             ; 0046b9fc
    LEA EBX,[EAX + 0x4]                 ; 0046b9fe
    MOV dword ptr [ECX],EDX             ; 0046ba01
    LEA EDX,[ECX + 0x4]                 ; 0046ba03
    MOV EBX,dword ptr [EBX]             ; 0046ba06
    MOV dword ptr [EDX],EBX             ; 0046ba08
    MOV EAX,dword ptr [EAX + 0x8]       ; 0046ba0a
    MOV dword ptr [EDX + 0x4],EAX       ; 0046ba0d
    MOV EAX,ECX                         ; 0046ba10
    POP EBX                             ; 0046ba12
    RET                                 ; 0046ba13


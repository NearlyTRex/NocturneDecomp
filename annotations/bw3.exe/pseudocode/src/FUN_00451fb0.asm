; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00451fb0(int *param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   FUN_00453fa0 at 00454021
;
; Referenced Globals:
;   undefined4 DAT_01548b7c
;   undefined4 DAT_01548b80
;   undefined4 DAT_01548b84
;
; Called Functions:
;   FUN_005a3890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00451fb0
        ;   Label: FUN_00451fb0
    PUSH ESI                            ; 00451fb1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00451fb2
    MOV ESI,dword ptr [ESP + 0x14]      ; 00451fb6
    MOV EDX,dword ptr [ESP + 0x10]      ; 00451fba
    PUSH EDX                            ; 00451fbe
    PUSH 0x4                            ; 00451fbf
    PUSH 0x3                            ; 00451fc1
    PUSH 0x1548b7c                      ; 00451fc3 | DAT_01548b7c
    CALL FUN_005a3890                   ; 00451fc8
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3890()
    MOV EDX,dword ptr [0x01548b7c]      ; 00451fcd | DAT_01548b7c
    LEA EAX,[EDX*0x4 + 0x0]             ; 00451fd3
    SUB EAX,EDX                         ; 00451fda
    SHL EAX,0x2                         ; 00451fdc
    LEA EDX,[ESI + EAX*0x1]             ; 00451fdf
    MOV dword ptr [EBX],EDX             ; 00451fe2
    MOV EDX,dword ptr [0x01548b80]      ; 00451fe4 | DAT_01548b80
    LEA EAX,[EDX*0x4 + 0x0]             ; 00451fea
    SUB EAX,EDX                         ; 00451ff1
    SHL EAX,0x2                         ; 00451ff3
    LEA EDX,[ESI + EAX*0x1]             ; 00451ff6
    ADD ESP,0x10                        ; 00451ff9
    MOV dword ptr [EBX + 0x4],EDX       ; 00451ffc
    MOV ECX,dword ptr [ESP + 0x10]      ; 00451fff
    MOV EDX,dword ptr [0x01548b84]      ; 00452003 | DAT_01548b84
    PUSH ECX                            ; 00452009
    LEA EAX,[EDX*0x4 + 0x0]             ; 0045200a
    PUSH 0x1                            ; 00452011
    SUB EAX,EDX                         ; 00452013
    PUSH 0x14                           ; 00452015
    SHL EAX,0x2                         ; 00452017
    ADD EBX,0xc                         ; 0045201a
    ADD ESI,EAX                         ; 0045201d
    PUSH EBX                            ; 0045201f
    MOV dword ptr [EBX + -0x4],ESI      ; 00452020
    CALL FUN_005a3890                   ; 00452023
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3890()
    ADD ESP,0x10                        ; 00452028
    POP ESI                             ; 0045202b
    POP EBX                             ; 0045202c
    RET                                 ; 0045202d


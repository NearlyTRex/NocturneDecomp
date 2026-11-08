; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00523210(int param_1,int param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[2]:
;   FUN_00591ff0 at 0059227f
;   FUN_005a52a0 at 005a53a2
;
; Called Functions:
;   FUN_005224f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523210
        ;   Label: FUN_00523210
    MOV EDX,dword ptr [ESP + 0x14]      ; 00523211
    PUSH EDX                            ; 00523215
    MOV EDX,dword ptr [ESP + 0x10]      ; 00523216
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052321a
    SUB EAX,EDX                         ; 00523221
    SHL EAX,0x6                         ; 00523223
    MOV ECX,dword ptr [ESP + 0x14]      ; 00523226
    ADD EAX,EDX                         ; 0052322a
    MOV EBX,dword ptr [ESP + 0xc]       ; 0052322c
    SHL EAX,0x3                         ; 00523230
    PUSH ECX                            ; 00523233
    ADD EAX,EBX                         ; 00523234
    PUSH EAX                            ; 00523236
    CALL FUN_005224f0                   ; 00523237
        ;   XREF to: 005224f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005224f0()
    ADD ESP,0xc                         ; 0052323c
    POP EBX                             ; 0052323f
    RET                                 ; 00523240


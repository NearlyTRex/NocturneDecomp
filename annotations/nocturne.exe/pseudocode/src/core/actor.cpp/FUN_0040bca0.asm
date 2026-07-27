; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_FUN_0040bca0(int param_1,undefined4 param_2,int param_3)
;
;
; XREF[2]:
;   core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_00417f10 at 00417f29
;   core_melee.cpp_FUN_004cef80 at 004cef99
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040bca0
        ;   Label: core_actor.cpp_FUN_0040bca0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040bca1
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040bca5
    MOV dword ptr [EBX + 0x4],0x40a00000 ; 0040bca9
    MOV dword ptr [EBX + 0x30],0x67     ; 0040bcb0
    MOV dword ptr [EBX + 0x2c],0x3e4ccccd ; 0040bcb7
    MOV dword ptr [EBX + 0x8],0x3ecccccd ; 0040bcbe
    MOV dword ptr [EBX + 0x34],EDX      ; 0040bcc5
    PUSH EDX                            ; 0040bcc8
    MOV EAX,dword ptr [EDX + 0x14c]     ; 0040bcc9
    CALL dword ptr [EAX + 0x8c]         ; 0040bccf
    ADD ESP,0x4                         ; 0040bcd5
    MOV dword ptr [EBX + 0x38],EAX      ; 0040bcd8
    POP EBX                             ; 0040bcdb
    RET                                 ; 0040bcdc


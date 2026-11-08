; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00555ce0(undefined4 param_1,int *param_2)
;
;
; XREF[1]:
;   FUN_004d6420 at 004d65ea
;
; Referenced Globals:
;   undefined4 DAT_01fe4cb4
;   undefined4 DAT_01fe4cb8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555ce0
        ;   Label: FUN_00555ce0
    MOV EBX,dword ptr [0x01fe4cb4]      ; 00555ce1 | DAT_01fe4cb4
    MOV ECX,dword ptr [ESP + 0xc]       ; 00555ce7
    MOV EAX,EBX                         ; 00555ceb
    MOV dword ptr [ECX],EBX             ; 00555ced
    XOR EAX,EBX                         ; 00555cef
    TEST EBX,EBX                        ; 00555cf1
    JLE 0x00555d10                      ; 00555cf3
        ;   XREF to: 00555d10 (CONDITIONAL_JUMP)  ; LAB_00555d10
    MOV EDX,ECX                         ; 00555cf5
    MOV ECX,dword ptr [EAX*0x4 + 0x1fe4cb8] ; 00555cf7 | DAT_01fe4cb8
        ;   Label: LAB_00555cf7
    ADD EDX,0x4                         ; 00555cfe
    MOV ECX,dword ptr [ECX + 0x1cb4]    ; 00555d01
    INC EAX                             ; 00555d07
    MOV dword ptr [EDX],ECX             ; 00555d08
    CMP EAX,EBX                         ; 00555d0a
    JL 0x00555cf7                       ; 00555d0c
        ;   XREF to: 00555cf7 (CONDITIONAL_JUMP)  ; LAB_00555cf7
    MOV EAX,EAX                         ; 00555d0e
    MOV dword ptr [0x01fe4cb4],EBX      ; 00555d10 | DAT_01fe4cb4
        ;   Label: LAB_00555d10
    POP EBX                             ; 00555d16
    RET                                 ; 00555d17


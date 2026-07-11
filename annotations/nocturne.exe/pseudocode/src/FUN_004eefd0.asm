; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004eefd0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[1]:
;   FUN_00490980 at 004909f6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eefd0
        ;   Label: FUN_004eefd0
    PUSH ESI                            ; 004eefd1
    PUSH EDI                            ; 004eefd2
    PUSH EBP                            ; 004eefd3
    MOV EDX,dword ptr [ESP + 0x14]      ; 004eefd4
    MOV ECX,dword ptr [ESP + 0x28]      ; 004eefd8
    PUSH ECX                            ; 004eefdc
    MOV EBX,dword ptr [ESP + 0x28]      ; 004eefdd
    PUSH EBX                            ; 004eefe1
    MOV ESI,dword ptr [ESP + 0x28]      ; 004eefe2
    PUSH ESI                            ; 004eefe6
    MOV EDI,dword ptr [ESP + 0x28]      ; 004eefe7
    PUSH EDI                            ; 004eefeb
    MOV EBP,dword ptr [ESP + 0x28]      ; 004eefec
    PUSH EBP                            ; 004eeff0
    MOV EAX,dword ptr [EDX]             ; 004eeff1
    PUSH EDX                            ; 004eeff3
    CALL dword ptr [EAX + 0x4]          ; 004eeff4
    ADD ESP,0x18                        ; 004eeff7
    POP EBP                             ; 004eeffa
    POP EDI                             ; 004eeffb
    POP ESI                             ; 004eeffc
    POP EBX                             ; 004eeffd
    RET                                 ; 004eeffe


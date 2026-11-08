; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00485fd0(void)
;
;
; XREF[2]:
;   FUN_00483c00 at 00483f96
;   FUN_00485ff0 at 00485ff0
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485fd0
        ;   Label: FUN_00485fd0
    MOV EBX,dword ptr [0x005fba18]      ; 00485fd1 | DAT_005fba18
    MOV ECX,0x30                        ; 00485fd7
    MOV EDX,EBX                         ; 00485fdc
    MOV EAX,EBX                         ; 00485fde
    SAR EDX,0x1f                        ; 00485fe0
    IDIV ECX                            ; 00485fe3
    POP EBX                             ; 00485fe5
    RET                                 ; 00485fe6


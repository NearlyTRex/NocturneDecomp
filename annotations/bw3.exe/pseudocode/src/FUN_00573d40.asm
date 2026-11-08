; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00573d40(int param_1)
;
;
; XREF[3]:
;   FUN_00512fb0 at 005138bb
;   FUN_00552350 at 005525ec
;   FUN_00557570 at 0055767a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00573d40
        ;   Label: FUN_00573d40
    CMP dword ptr [EAX + 0x4],0x0       ; 00573d44
    JNZ 0x00573d50                      ; 00573d48
        ;   XREF to: 00573d50 (CONDITIONAL_JUMP)  ; LAB_00573d50
    MOV EAX,0xffffffff                  ; 00573d4a
    RET                                 ; 00573d4f
    MOV EAX,dword ptr [EAX + 0x10]      ; 00573d50
        ;   Label: LAB_00573d50
    RET                                 ; 00573d53


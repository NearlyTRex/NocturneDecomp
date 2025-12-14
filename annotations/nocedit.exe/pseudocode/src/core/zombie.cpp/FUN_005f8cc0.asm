; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_zombie.cpp_FUN_005f8cc0()
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   undefined4 DAT_00658435
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005f8cc0
        ;   Label: core_zombie.cpp_FUN_005f8cc0
    MOV EBP,ESP                         ; 005f8cc1
    SUB ESP,0x28                        ; 005f8cc3
    AND ESP,0xfffffff8                  ; 005f8cc6
    MOV ECX,dword ptr [EBP + 0x8]       ; 005f8cc9
    MOV dword ptr [ESP + 0x24],0x3f800000 ; 005f8ccc
    TEST ECX,ECX                        ; 005f8cd4
    JNZ 0x005f8ce0                      ; 005f8cd6
        ;   XREF to: 005f8ce0 (CONDITIONAL_JUMP)  ; LAB_005f8ce0
    MOV EAX,dword ptr [ESP + 0x24]      ; 005f8cd8
    MOV ESP,EBP                         ; 005f8cdc
    POP EBP                             ; 005f8cde
    RET                                 ; 005f8cdf
    MOV EAX,ESP                         ; 005f8ce0
        ;   Label: LAB_005f8ce0
    PUSH EAX                            ; 005f8ce2
    MOV EDX,dword ptr [ECX + 0x154]     ; 005f8ce3
    PUSH ECX                            ; 005f8ce9
    CALL dword ptr [EDX + 0x14]         ; 005f8cea
    LEA EDX,[EAX + 0xc]                 ; 005f8ced
    FLD float ptr [EDX]                 ; 005f8cf0
    FSUB float ptr [EAX]                ; 005f8cf2
    ADD ESP,0x8                         ; 005f8cf4
    FSTP float ptr [ESP + 0x18]         ; 005f8cf7
    FLD float ptr [EDX + 0x4]           ; 005f8cfb
    FSUB float ptr [EAX + 0x4]          ; 005f8cfe
    FSTP float ptr [ESP + 0x1c]         ; 005f8d01
    FLD float ptr [EDX + 0x8]           ; 005f8d05
    FSUB float ptr [EAX + 0x8]          ; 005f8d08
    FST float ptr [ESP + 0x20]          ; 005f8d0b
    FMUL double ptr [0x00658435]        ; 005f8d0f | DAT_00658435
    FLD1                                ; 005f8d15
    FADDP                               ; 005f8d17
    FSTP float ptr [ESP + 0x24]         ; 005f8d19
    MOV EAX,dword ptr [ESP + 0x24]      ; 005f8d1d
    MOV ESP,EBP                         ; 005f8d21
    POP EBP                             ; 005f8d23
    RET                                 ; 005f8d24


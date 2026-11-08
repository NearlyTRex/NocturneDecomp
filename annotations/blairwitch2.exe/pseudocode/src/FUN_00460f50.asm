; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00460f50(int param_1)
;
;
; XREF[7]:
;   FUN_00460e30 at 00460e36
;   FUN_00460e50 at 00460e5f
;   FUN_00481870 at 00481a18
;   FUN_00481a70 at 00481c17
;   FUN_00481ca0 at 00481d45
;   FUN_00481e20 at 00481f20
;   FUN_0051c000 at 0051c073
;
; Referenced Globals:
;   void* PTR_FindClose_005c8544 = 001c8d36
;
; Called Functions:
;   FindClose
;   FUN_00460f90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460f50
        ;   Label: FUN_00460f50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00460f51
    CMP dword ptr [EBX + 0x10c],0x0     ; 00460f55
    JNZ 0x00460f69                      ; 00460f5c
        ;   XREF to: 00460f69 (CONDITIONAL_JUMP)  ; LAB_00460f69
    PUSH EBX                            ; 00460f5e
    CALL FUN_00460f90                   ; 00460f5f
        ;   XREF to: 00460f90 (UNCONDITIONAL_CALL)  ; undefined FUN_00460f90()
    ADD ESP,0x4                         ; 00460f64
    POP EBX                             ; 00460f67
    RET                                 ; 00460f68
    MOV ECX,dword ptr [EBX + 0x110]     ; 00460f69
        ;   Label: LAB_00460f69
    PUSH ECX                            ; 00460f6f
    CALL dword ptr CS:[0x5c8544]        ; 00460f70 | PTR_FindClose_005c8544
    MOV dword ptr [EBX + 0x10c],0x0     ; 00460f77
    PUSH EBX                            ; 00460f81
    CALL FUN_00460f90                   ; 00460f82
        ;   XREF to: 00460f90 (UNCONDITIONAL_CALL)  ; undefined FUN_00460f90()
    ADD ESP,0x4                         ; 00460f87
    POP EBX                             ; 00460f8a
    RET                                 ; 00460f8b


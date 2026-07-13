; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00402bb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined        Stack[-0x100c]:1  local_100c
; undefined4       Stack[-0xc]:4  local_c
;
; Called Functions:
;   FUN_00402b60
;   FUN_00563a08
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402bb0
        ;   Label: FUN_00402bb0
    PUSH ESI                            ; 00402bb1
    SUB ESP,0x1004                      ; 00402bb2
    LEA EAX,[ESP + 0x101c]              ; 00402bb8
    MOV dword ptr [ESP + 0x1000],EAX    ; 00402bbf
    LEA EAX,[ESP + 0x1000]              ; 00402bc6
    PUSH EAX                            ; 00402bcd
    MOV EDX,dword ptr [ESP + 0x101c]    ; 00402bce
    PUSH EDX                            ; 00402bd5
    LEA EAX,[ESP + 0x8]                 ; 00402bd6
    PUSH EAX                            ; 00402bda
    CALL FUN_00563a08                   ; 00402bdb
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a08()
    ADD ESP,0xc                         ; 00402be0
    MOV EBX,dword ptr [ESP + 0x1014]    ; 00402be3
    PUSH EBX                            ; 00402bea
    MOV ESI,dword ptr [ESP + 0x1014]    ; 00402beb
    PUSH ESI                            ; 00402bf2
    LEA EAX,[ESP + 0x8]                 ; 00402bf3
    XOR ECX,ECX                         ; 00402bf7
    PUSH EAX                            ; 00402bf9
    MOV dword ptr [ESP + 0x100c],ECX    ; 00402bfa
    CALL FUN_00402b60                   ; 00402c01
        ;   XREF to: 00402b60 (UNCONDITIONAL_CALL)  ; undefined FUN_00402b60()
    ADD ESP,0xc                         ; 00402c06
    ADD ESP,0x1004                      ; 00402c09
    POP ESI                             ; 00402c0f
    POP EBX                             ; 00402c10
    RET                                 ; 00402c11


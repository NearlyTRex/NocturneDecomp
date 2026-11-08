; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0056fd60(undefined4 *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   FUN_00504270 at 005042ae
;
; Called Functions:
;   Ordinal_12
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0056fd60
        ;   Label: FUN_0056fd60
    CMP dword ptr [ESP + 0xc],0x0       ; 0056fd63
    SETZ AL                             ; 0056fd68
    AND EAX,0xff                        ; 0056fd6b
    MOV dword ptr [ESP],EAX             ; 0056fd70
    MOV EAX,ESP                         ; 0056fd73
    PUSH EAX                            ; 0056fd75
    MOV EAX,dword ptr [ESP + 0xc]       ; 0056fd76
    PUSH 0x8004667e                     ; 0056fd7a
    MOV ECX,dword ptr [EAX]             ; 0056fd7f
    PUSH ECX                            ; 0056fd81
    CALL Ordinal_12                     ; 0056fd82
        ;   XREF to: 005b257a (UNCONDITIONAL_CALL)  ; undefined Ordinal_12()
    TEST EAX,EAX                        ; 0056fd87
    SETZ AL                             ; 0056fd89
    AND EAX,0xff                        ; 0056fd8c
    ADD ESP,0x4                         ; 0056fd91
    RET                                 ; 0056fd94


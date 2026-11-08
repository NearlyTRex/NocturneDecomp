; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00579490(undefined4 *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   FUN_0050b790 at 0050b7ce
;
; Called Functions:
;   Ordinal_12
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00579490
        ;   Label: FUN_00579490
    CMP dword ptr [ESP + 0xc],0x0       ; 00579493
    SETZ AL                             ; 00579498
    AND EAX,0xff                        ; 0057949b
    MOV dword ptr [ESP],EAX             ; 005794a0
    MOV EAX,ESP                         ; 005794a3
    PUSH EAX                            ; 005794a5
    MOV EAX,dword ptr [ESP + 0xc]       ; 005794a6
    PUSH 0x8004667e                     ; 005794aa
    MOV ECX,dword ptr [EAX]             ; 005794af
    PUSH ECX                            ; 005794b1
    CALL Ordinal_12                     ; 005794b2
        ;   XREF to: 005c74d8 (UNCONDITIONAL_CALL)  ; undefined Ordinal_12()
    TEST EAX,EAX                        ; 005794b7
    SETZ AL                             ; 005794b9
    AND EAX,0xff                        ; 005794bc
    ADD ESP,0x4                         ; 005794c1
    RET                                 ; 005794c4


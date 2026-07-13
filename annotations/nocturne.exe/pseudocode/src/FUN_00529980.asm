; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00529980(undefined4 param_1)
;
; Local Variables:
; undefined        Stack[-0x408]:1  local_408
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[28]:
;   FUN_00521830 at 00521897
;   FUN_00522480 at 005226f0
;   FUN_00523910 at 005239bb
;   FUN_00523ea0 at 005240f2
;   FUN_005256f0 at 00525773
;   FUN_005257e0 at 0052583a
;   FUN_005265a0 at 00526c26
;   FUN_00528780 at 005287e1
;   FUN_00529c10 at 00529d81
;   FUN_00529f60 at 0052a053
;   ... and 18 more
;
; Referenced Globals:
;   undefined4 DAT_00593b86
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_0077ad0c
;
; Called Functions:
;   FUN_0043ac60
;   FUN_00563a08
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529980
        ;   Label: FUN_00529980
    SUB ESP,0x404                       ; 00529981
    LEA EAX,[ESP + 0x410]               ; 00529987
    MOV dword ptr [ESP + 0x400],EAX     ; 0052998e
    LEA EAX,[ESP + 0x400]               ; 00529995
    PUSH EAX                            ; 0052999c
    MOV EDX,dword ptr [ESP + 0x410]     ; 0052999d
    PUSH EDX                            ; 005299a4
    LEA EAX,[ESP + 0x8]                 ; 005299a5
    PUSH EAX                            ; 005299a9
    CALL FUN_00563a08                   ; 005299aa
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a08()
    ADD ESP,0xc                         ; 005299af
    MOV EAX,ESP                         ; 005299b2
    PUSH EAX                            ; 005299b4
    PUSH 0x593b86                       ; 005299b5 | DAT_00593b86
    MOV EBX,dword ptr [0x005ad350]      ; 005299ba | PTR_DAT_005ad350
    XOR ECX,ECX                         ; 005299c0
    PUSH EBX                            ; 005299c2 | DAT_0077ad0c
    MOV dword ptr [ESP + 0x40c],ECX     ; 005299c3
    CALL FUN_0043ac60                   ; 005299ca
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined FUN_0043ac60()
    ADD ESP,0xc                         ; 005299cf
    ADD ESP,0x404                       ; 005299d2
    POP EBX                             ; 005299d8
    RET                                 ; 005299d9


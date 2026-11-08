; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a1210(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   FUN_004a1d00 at 004a1e6a
;   FUN_004a70d0 at 004a92f1
;
; Referenced Globals:
;   undefined4 DAT_01c56ed0
;
; Called Functions:
;   FUN_005bfb18
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004a1210
        ;   Label: FUN_004a1210
    LEA EAX,[ESP + 0xc]                 ; 004a1213
    MOV dword ptr [ESP],EAX             ; 004a1217
    MOV EAX,ESP                         ; 004a121a
    PUSH EAX                            ; 004a121c
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a121d
    PUSH EDX                            ; 004a1221
    PUSH 0x1c56ed0                      ; 004a1222 | DAT_01c56ed0
    CALL FUN_005bfb18                   ; 004a1227
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb18()
    ADD ESP,0xc                         ; 004a122c
    XOR ECX,ECX                         ; 004a122f
    XOR EAX,EAX                         ; 004a1231
    MOV dword ptr [ESP],ECX             ; 004a1233
    ADD ESP,0x4                         ; 004a1236
    RET                                 ; 004a1239


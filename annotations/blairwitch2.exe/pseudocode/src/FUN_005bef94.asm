; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bef94(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   FUN_005b8f9c at 005b9031
;   FUN_005c40e0 at 005c41c4
;
; Called Functions:
;   FUN_005befc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bef94
        ;   Label: FUN_005bef94
    SUB ESP,0x4                         ; 005bef95
    LEA EAX,[ESP + 0x18]                ; 005bef98
    MOV dword ptr [ESP],EAX             ; 005bef9c
    MOV EAX,ESP                         ; 005bef9f
    PUSH EAX                            ; 005befa1
    MOV EDX,dword ptr [ESP + 0x18]      ; 005befa2
    PUSH EDX                            ; 005befa6
    MOV EBX,dword ptr [ESP + 0x18]      ; 005befa7
    PUSH EBX                            ; 005befab
    MOV ECX,dword ptr [ESP + 0x18]      ; 005befac
    PUSH ECX                            ; 005befb0
    CALL FUN_005befc0                   ; 005befb1
        ;   XREF to: 005befc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005befc0()
    ADD ESP,0x10                        ; 005befb6
    ADD ESP,0x4                         ; 005befb9
    POP EBX                             ; 005befbc
    RET                                 ; 005befbd


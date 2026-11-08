; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aa0c4(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   FUN_005a427c at 005a4311
;   FUN_005af050 at 005af134
;
; Called Functions:
;   FUN_005aa0f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aa0c4
        ;   Label: FUN_005aa0c4
    SUB ESP,0x4                         ; 005aa0c5
    LEA EAX,[ESP + 0x18]                ; 005aa0c8
    MOV dword ptr [ESP],EAX             ; 005aa0cc
    MOV EAX,ESP                         ; 005aa0cf
    PUSH EAX                            ; 005aa0d1
    MOV EDX,dword ptr [ESP + 0x18]      ; 005aa0d2
    PUSH EDX                            ; 005aa0d6
    MOV EBX,dword ptr [ESP + 0x18]      ; 005aa0d7
    PUSH EBX                            ; 005aa0db
    MOV ECX,dword ptr [ESP + 0x18]      ; 005aa0dc
    PUSH ECX                            ; 005aa0e0
    CALL FUN_005aa0f0                   ; 005aa0e1
        ;   XREF to: 005aa0f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005aa0f0()
    ADD ESP,0x10                        ; 005aa0e6
    ADD ESP,0x4                         ; 005aa0e9
    POP EBX                             ; 005aa0ec
    RET                                 ; 005aa0ed


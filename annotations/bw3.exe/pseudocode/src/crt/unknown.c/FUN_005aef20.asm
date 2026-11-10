; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aef20(uint param_1,uint param_2)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   crt_unknown.c_FUN_005aaed4 at 005ab0a6
;
; Called Functions:
;   crt_time.c__mktime_FUN_005a4f20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aef20
        ;   Label: crt_unknown.c_FUN_005aef20
    SUB ESP,0x24                        ; 005aef21
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005aef24
    MOV EDX,dword ptr [ESP + 0x30]      ; 005aef28
    MOV EAX,EBX                         ; 005aef2c
    AND EAX,0xfe00                      ; 005aef2e
    SHR EAX,0x9                         ; 005aef33
    ADD EAX,0x50                        ; 005aef36
    MOV dword ptr [ESP + 0x14],EAX      ; 005aef39
    MOV EAX,EBX                         ; 005aef3d
    AND EAX,0x1e0                       ; 005aef3f
    SHR EAX,0x5                         ; 005aef44
    DEC EAX                             ; 005aef47
    MOV dword ptr [ESP + 0x10],EAX      ; 005aef48
    MOV EAX,EDX                         ; 005aef4c
    AND EAX,0xf800                      ; 005aef4e
    SHR EAX,0xb                         ; 005aef53
    MOV dword ptr [ESP + 0x8],EAX       ; 005aef56
    MOV EAX,EDX                         ; 005aef5a
    AND EAX,0x7e0                       ; 005aef5c
    SHR EAX,0x5                         ; 005aef61
    MOV dword ptr [ESP + 0x4],EAX       ; 005aef64
    MOV EAX,EDX                         ; 005aef68
    AND EAX,0x1f                        ; 005aef6a
    ADD EAX,EAX                         ; 005aef6d
    AND EBX,0x1f                        ; 005aef6f
    MOV dword ptr [ESP],EAX             ; 005aef72
    MOV EAX,ESP                         ; 005aef75
    MOV EDX,0xffffffff                  ; 005aef77
    PUSH EAX                            ; 005aef7c
    MOV dword ptr [ESP + 0x10],EBX      ; 005aef7d
    MOV dword ptr [ESP + 0x24],EDX      ; 005aef81
    CALL crt_time.c__mktime_FUN_005a4f20 ; 005aef85
        ;   XREF to: 005a4f20 (UNCONDITIONAL_CALL)  ; undefined crt_time.c__mktime_FUN_005a4f20()
    ADD ESP,0x4                         ; 005aef8a
    ADD ESP,0x24                        ; 005aef8d
    POP EBX                             ; 005aef90
    RET                                 ; 005aef91


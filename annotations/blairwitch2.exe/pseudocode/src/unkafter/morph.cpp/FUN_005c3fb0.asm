; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_morph_cpp_FUN_005c3fb0(uint param_1,uint param_2)
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
;   crt_unknown.c_FUN_005bfdd4 at 005bffa6
;
; Called Functions:
;   unkafter_morph.cpp_FUN_005c43e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c3fb0
        ;   Label: unkafter_morph.cpp_FUN_005c3fb0
    SUB ESP,0x24                        ; 005c3fb1
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005c3fb4
    MOV EDX,dword ptr [ESP + 0x30]      ; 005c3fb8
    MOV EAX,EBX                         ; 005c3fbc
    AND EAX,0xfe00                      ; 005c3fbe
    SHR EAX,0x9                         ; 005c3fc3
    ADD EAX,0x50                        ; 005c3fc6
    MOV dword ptr [ESP + 0x14],EAX      ; 005c3fc9
    MOV EAX,EBX                         ; 005c3fcd
    AND EAX,0x1e0                       ; 005c3fcf
    SHR EAX,0x5                         ; 005c3fd4
    DEC EAX                             ; 005c3fd7
    MOV dword ptr [ESP + 0x10],EAX      ; 005c3fd8
    MOV EAX,EDX                         ; 005c3fdc
    AND EAX,0xf800                      ; 005c3fde
    SHR EAX,0xb                         ; 005c3fe3
    MOV dword ptr [ESP + 0x8],EAX       ; 005c3fe6
    MOV EAX,EDX                         ; 005c3fea
    AND EAX,0x7e0                       ; 005c3fec
    SHR EAX,0x5                         ; 005c3ff1
    MOV dword ptr [ESP + 0x4],EAX       ; 005c3ff4
    MOV EAX,EDX                         ; 005c3ff8
    AND EAX,0x1f                        ; 005c3ffa
    ADD EAX,EAX                         ; 005c3ffd
    AND EBX,0x1f                        ; 005c3fff
    MOV dword ptr [ESP],EAX             ; 005c4002
    MOV EAX,ESP                         ; 005c4005
    MOV EDX,0xffffffff                  ; 005c4007
    PUSH EAX                            ; 005c400c
    MOV dword ptr [ESP + 0x10],EBX      ; 005c400d
    MOV dword ptr [ESP + 0x24],EDX      ; 005c4011
    CALL unkafter_morph.cpp_FUN_005c43e0 ; 005c4015
        ;   XREF to: 005c43e0 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c43e0()
    ADD ESP,0x4                         ; 005c401a
    ADD ESP,0x24                        ; 005c401d
    POP EBX                             ; 005c4020
    RET                                 ; 005c4021


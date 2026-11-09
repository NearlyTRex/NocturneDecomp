; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c7254(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   crt_unknown.c_FUN_005c140c at 005c14a1
;   unkafter_zombie.cpp_FUN_005cc3e0 at 005cc4c4
;
; Called Functions:
;   crt_unknown.c_FUN_005c7280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c7254
        ;   Label: crt_unknown.c_FUN_005c7254
    SUB ESP,0x4                         ; 005c7255
    LEA EAX,[ESP + 0x18]                ; 005c7258
    MOV dword ptr [ESP],EAX             ; 005c725c
    MOV EAX,ESP                         ; 005c725f
    PUSH EAX                            ; 005c7261
    MOV EDX,dword ptr [ESP + 0x18]      ; 005c7262
    PUSH EDX                            ; 005c7266
    MOV EBX,dword ptr [ESP + 0x18]      ; 005c7267
    PUSH EBX                            ; 005c726b
    MOV ECX,dword ptr [ESP + 0x18]      ; 005c726c
    PUSH ECX                            ; 005c7270
    CALL crt_unknown.c_FUN_005c7280     ; 005c7271
        ;   XREF to: 005c7280 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c7280()
    ADD ESP,0x10                        ; 005c7276
    ADD ESP,0x4                         ; 005c7279
    POP EBX                             ; 005c727c
    RET                                 ; 005c727d


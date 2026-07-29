; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_getRegistryStringValue_FUN_00559d20(char *key_path,char *value_name,char *output_buffer,uint *buffer_size)
;
; Parameters:
; char *           Stack[0x4]:4   key_path
; char *           Stack[0x8]:4   value_name
; char *           Stack[0xc]:4   output_buffer
; uint *           Stack[0x10]:4   buffer_size
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   void* PTR_RegCloseKey_00575380 = 001756a6
;   void* PTR_RegOpenKeyExA_00575388 = 001756c6
;   void* PTR_RegQueryValueExA_0057538c = 001756d6
;   undefined4 DAT_80000002
;
; Called Functions:
;   RegCloseKey
;   RegOpenKeyExA
;   RegQueryValueExA
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00559d20
        ;   Label: wincore_winrun.cpp_getRegistryStringValue_FUN_00559d20
    SUB ESP,0xc                         ; 00559d21
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00559d24
    MOV byte ptr [EAX],0x0              ; 00559d28
    MOV EAX,ESP                         ; 00559d2b
    PUSH EAX                            ; 00559d2d
    PUSH 0x1                            ; 00559d2e
    PUSH 0x0                            ; 00559d30
    MOV EDX,dword ptr [ESP + 0x20]      ; 00559d32
    PUSH EDX                            ; 00559d36
    PUSH 0x80000002                     ; 00559d37 | DAT_80000002
    CALL dword ptr CS:[0x575388]        ; 00559d3c | PTR_RegOpenKeyExA_00575388
    TEST EAX,EAX                        ; 00559d43
    JZ 0x00559d4c                       ; 00559d45
        ;   XREF to: 00559d4c (CONDITIONAL_JUMP)  ; LAB_00559d4c
    ADD ESP,0xc                         ; 00559d47
    POP EBP                             ; 00559d4a
    RET                                 ; 00559d4b
    PUSH EDI                            ; 00559d4c
        ;   Label: LAB_00559d4c
    PUSH ESI                            ; 00559d4d
    PUSH EBX                            ; 00559d4e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00559d4f
    MOV dword ptr [ESP + 0x10],EAX      ; 00559d53
    LEA EAX,[ESP + 0x10]                ; 00559d57
    PUSH EAX                            ; 00559d5b
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00559d5c
    PUSH EBX                            ; 00559d60
    LEA EAX,[ESP + 0x1c]                ; 00559d61
    PUSH EAX                            ; 00559d65
    PUSH 0x0                            ; 00559d66
    MOV ESI,dword ptr [ESP + 0x34]      ; 00559d68
    PUSH ESI                            ; 00559d6c
    MOV EDI,dword ptr [ESP + 0x20]      ; 00559d6d
    MOV ECX,0x1                         ; 00559d71
    PUSH EDI                            ; 00559d76
    MOV dword ptr [ESP + 0x2c],ECX      ; 00559d77
    CALL dword ptr CS:[0x57538c]        ; 00559d7b | PTR_RegQueryValueExA_0057538c
    MOV EBP,dword ptr [ESP + 0xc]       ; 00559d82
    PUSH EBP                            ; 00559d86
    CALL dword ptr CS:[0x575380]        ; 00559d87 | PTR_RegCloseKey_00575380
    POP EBX                             ; 00559d8e
    POP ESI                             ; 00559d8f
    POP EDI                             ; 00559d90
    ADD ESP,0xc                         ; 00559d91
    POP EBP                             ; 00559d94
    RET                                 ; 00559d95


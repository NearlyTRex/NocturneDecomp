; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_getRegistryStringValue_FUN_0058fec0(char *key_path,char *value_name,char *output_buffer,uint *buffer_size)
;
; Parameters:
; char *           Stack[0x4]:4   key_path
; char *           Stack[0x8]:4   value_name
; char *           Stack[0xc]:4   output_buffer
; uint *           Stack[0x10]:4   buffer_size
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0058fec0
        ;   Label: wincore_winrun.cpp_getRegistryStringValue_FUN_0058fec0
    SUB ESP,0xc                         ; 0058fec1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0058fec4
    MOV byte ptr [EAX],0x0              ; 0058fec8
    MOV EAX,ESP                         ; 0058fecb
    PUSH EAX                            ; 0058fecd
    PUSH 0x1                            ; 0058fece
    PUSH 0x0                            ; 0058fed0
    MOV EDX,dword ptr [ESP + 0x20]      ; 0058fed2
    PUSH EDX                            ; 0058fed6
    PUSH 0x80000002                     ; 0058fed7
    CALL dword ptr CS:[0x5c83e4]        ; 0058fedc
    TEST EAX,EAX                        ; 0058fee3
    JZ 0x0058feec                       ; 0058fee5
        ;   XREF to: 0058feec (CONDITIONAL_JUMP)  ; LAB_0058feec
    ADD ESP,0xc                         ; 0058fee7
    POP EBP                             ; 0058feea
    RET                                 ; 0058feeb
    PUSH EDI                            ; 0058feec
        ;   Label: LAB_0058feec
    PUSH ESI                            ; 0058feed
    PUSH EBX                            ; 0058feee
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0058feef
    MOV dword ptr [ESP + 0x10],EAX      ; 0058fef3
    LEA EAX,[ESP + 0x10]                ; 0058fef7
    PUSH EAX                            ; 0058fefb
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0058fefc
    PUSH EBX                            ; 0058ff00
    LEA EAX,[ESP + 0x1c]                ; 0058ff01
    PUSH EAX                            ; 0058ff05
    PUSH 0x0                            ; 0058ff06
    MOV ESI,dword ptr [ESP + 0x34]      ; 0058ff08
    PUSH ESI                            ; 0058ff0c
    MOV EDI,dword ptr [ESP + 0x20]      ; 0058ff0d
    MOV ECX,0x1                         ; 0058ff11
    PUSH EDI                            ; 0058ff16
    MOV dword ptr [ESP + 0x2c],ECX      ; 0058ff17
    CALL dword ptr CS:[0x5c83e8]        ; 0058ff1b
    MOV EBP,dword ptr [ESP + 0xc]       ; 0058ff22
    PUSH EBP                            ; 0058ff26
    CALL dword ptr CS:[0x5c83dc]        ; 0058ff27
    POP EBX                             ; 0058ff2e
    POP ESI                             ; 0058ff2f
    POP EDI                             ; 0058ff30
    ADD ESP,0xc                         ; 0058ff31
    POP EBP                             ; 0058ff34
    RET                                 ; 0058ff35


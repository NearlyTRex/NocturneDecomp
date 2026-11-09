; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_getRegistryStringValue_FUN_005b3990(char *key_path,char *value_name,char *output_buffer,uint *buffer_size)
;
; Parameters:
; char *           Stack[0x4]:4   key_path
; char *           Stack[0x8]:4   value_name
; char *           Stack[0xc]:4   output_buffer
; uint *           Stack[0x10]:4   buffer_size
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005b3990
        ;   Label: wincore_winrun.cpp_getRegistryStringValue_FUN_005b3990
    SUB ESP,0xc                         ; 005b3991
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005b3994
    MOV byte ptr [EAX],0x0              ; 005b3998
    MOV EAX,ESP                         ; 005b399b
    PUSH EAX                            ; 005b399d
    PUSH 0x1                            ; 005b399e
    PUSH 0x0                            ; 005b39a0
    MOV EDX,dword ptr [ESP + 0x20]      ; 005b39a2
    PUSH EDX                            ; 005b39a6
    PUSH 0x80000002                     ; 005b39a7
    CALL dword ptr CS:[0x5d03f0]        ; 005b39ac
    TEST EAX,EAX                        ; 005b39b3
    JZ 0x005b39bc                       ; 005b39b5
        ;   XREF to: 005b39bc (CONDITIONAL_JUMP)  ; LAB_005b39bc
    ADD ESP,0xc                         ; 005b39b7
    POP EBP                             ; 005b39ba
    RET                                 ; 005b39bb
    PUSH EDI                            ; 005b39bc
        ;   Label: LAB_005b39bc
    PUSH ESI                            ; 005b39bd
    PUSH EBX                            ; 005b39be
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005b39bf
    MOV dword ptr [ESP + 0x10],EAX      ; 005b39c3
    LEA EAX,[ESP + 0x10]                ; 005b39c7
    PUSH EAX                            ; 005b39cb
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005b39cc
    PUSH EBX                            ; 005b39d0
    LEA EAX,[ESP + 0x1c]                ; 005b39d1
    PUSH EAX                            ; 005b39d5
    PUSH 0x0                            ; 005b39d6
    MOV ESI,dword ptr [ESP + 0x34]      ; 005b39d8
    PUSH ESI                            ; 005b39dc
    MOV EDI,dword ptr [ESP + 0x20]      ; 005b39dd
    MOV ECX,0x1                         ; 005b39e1
    PUSH EDI                            ; 005b39e6
    MOV dword ptr [ESP + 0x2c],ECX      ; 005b39e7
    CALL dword ptr CS:[0x5d03f4]        ; 005b39eb
    MOV EBP,dword ptr [ESP + 0xc]       ; 005b39f2
    PUSH EBP                            ; 005b39f6
    CALL dword ptr CS:[0x5d03e8]        ; 005b39f7
    POP EBX                             ; 005b39fe
    POP ESI                             ; 005b39ff
    POP EDI                             ; 005b3a00
    ADD ESP,0xc                         ; 005b3a01
    POP EBP                             ; 005b3a04
    RET                                 ; 005b3a05


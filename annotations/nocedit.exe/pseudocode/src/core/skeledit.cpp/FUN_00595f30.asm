; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_skeledit.cpp_FUN_00595f30()
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_skeledit.cpp_FUN_00592690 at 005929d6
;
; Called Functions:
;   crt_stack.c_stack_probe_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x28                           ; 00595f30
        ;   Label: core_skeledit.cpp_FUN_00595f30
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 00595f35 | uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
    PUSH EBX                            ; 00595f3a
    PUSH ESI                            ; 00595f3b
    PUSH EDI                            ; 00595f3c
    SUB ESP,0x18                        ; 00595f3d
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00595f40
    MOV EDX,dword ptr [ESI]             ; 00595f44
    XOR EBX,EBX                         ; 00595f46
    TEST EDX,EDX                        ; 00595f48
    JLE 0x00595f9b                      ; 00595f4a | LAB_00595f9b
        ;   XREF to: 00595f9b (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x28]      ; 00595f4c
    LEA ECX,[ESI + 0x28]                ; 00595f50
    ADD EDX,0x2937c                     ; 00595f53
    MOV EAX,dword ptr [ECX + 0xc]       ; 00595f59
        ;   Label: LAB_00595f59
    MOV dword ptr [ESP + 0x14],EAX      ; 00595f5c
    MOV EAX,dword ptr [ECX + 0x1c]      ; 00595f60
    MOV dword ptr [ESP + 0xc],EAX       ; 00595f63
    MOV EAX,dword ptr [ECX + 0x2c]      ; 00595f67
    MOV dword ptr [ESP + 0x10],EAX      ; 00595f6a
    MOV EAX,dword ptr [ESP + 0x14]      ; 00595f6e
    MOV dword ptr [ESP],EAX             ; 00595f72
    MOV EAX,dword ptr [ESP + 0xc]       ; 00595f75
    MOV dword ptr [ESP + 0x4],EAX       ; 00595f79
    MOV EAX,dword ptr [ESP + 0x10]      ; 00595f7d
    MOV dword ptr [ESP + 0x8],EAX       ; 00595f81
    MOV EAX,ESP                         ; 00595f85
    CMP EDX,EAX                         ; 00595f87
    JNZ 0x00595fa2                      ; 00595f89 | LAB_00595fa2
        ;   XREF to: 00595fa2 (CONDITIONAL_JUMP)
    ADD EDX,0xc                         ; 00595f8b
        ;   Label: LAB_00595f8b
    INC EBX                             ; 00595f8e
    MOV EDI,dword ptr [ESI]             ; 00595f8f
    ADD ECX,0x84                        ; 00595f91
    CMP EBX,EDI                         ; 00595f97
    JL 0x00595f59                       ; 00595f99 | LAB_00595f59
        ;   XREF to: 00595f59 (CONDITIONAL_JUMP)
    ADD ESP,0x18                        ; 00595f9b
        ;   Label: LAB_00595f9b
    POP EDI                             ; 00595f9e
    POP ESI                             ; 00595f9f
    POP EBX                             ; 00595fa0
    RET                                 ; 00595fa1
    MOV EAX,dword ptr [ESP + 0x14]      ; 00595fa2
        ;   Label: LAB_00595fa2
    MOV dword ptr [EDX],EAX             ; 00595fa6
    MOV EAX,dword ptr [ESP + 0x4]       ; 00595fa8
    MOV dword ptr [EDX + 0x4],EAX       ; 00595fac
    MOV EAX,dword ptr [ESP + 0x8]       ; 00595faf
    MOV dword ptr [EDX + 0x8],EAX       ; 00595fb3
    JMP 0x00595f8b                      ; 00595fb6 | LAB_00595f8b
        ;   XREF to: 00595f8b (UNCONDITIONAL_JUMP)

